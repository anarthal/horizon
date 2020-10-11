/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 *
 * Copyright (c) 2019 Sagun K. (sagunxp@gmail.com).
 * Copyright (c) 2019 Horizon Dev Team.
 *
 * Base Author - Sagun K. (sagunxp@gmail.com)
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************/
#include "Auth.hpp"
#include "Server/Auth/SocketMgr/ClientSocketMgr.hpp"
#include "Server/Common/Server.hpp"
#include "Server/Common/Base/NetworkPacket.hpp"

#include <boost/asio.hpp>
#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/make_shared.hpp>
#include <boost/filesystem.hpp>

#include <sol.hpp>

using boost::asio::ip::udp;
using namespace std::chrono_literals;
using namespace Horizon;
using namespace Horizon::Base;

/**
 * Horizon Constructor.
 */
Auth::Auth()
: Server()
{
	initialize_cli_commands();
}

/**
 * Horizon Destructor.
 */
Auth::~Auth()
{
}

#define horizon_config_error(setting_name, default) \
	HLog(error) << "No setting for '" << setting_name << "' in configuration file, defaulting to " << default;

/**
 * Read /config/horizon-server.yaml
 * @return true on success, false on failure.
 */
bool Auth::ReadConfig()
{
	sol::state lua;

	std::string file_path = general_conf().get_config_file_path().string();
	std::string tmp_string;
	sol::table tbl;

    if (!boost::filesystem::exists(file_path)) {
        HLog(error) << "Configuration file does not exist at " << file_path << "." << std::endl;
        return false;
    }
    
	// Read the file. If there is an error, report it and exit.
	try {
		lua.script_file(file_path);
		tbl = lua["horizon_config"];
	} catch (const std::exception &error) {
		HLog(error) << "Horizon::ReadConfig: '" << error.what() << "'.";
		return false;
	}
    
    get_auth_config()._password_salt_mix = tbl.get_or<std::string>("password_salt_mix", "horizon-123");

    sol::table db_tbl = tbl.get<sol::table>("database_config");
    
    try {
        general_conf().set_db_host(db_tbl.get_or<std::string>("host", "127.0.0.1"));
        general_conf().set_db_user(db_tbl.get_or<std::string>("user", "horizon"));
        general_conf().set_db_database(db_tbl.get_or<std::string>("db", "horizon"));
        general_conf().set_db_pass(db_tbl.get_or<std::string>("pass", "horizon"));
        general_conf().set_db_port(db_tbl.get_or<uint16_t>("port", 3306));
        
        _mysql_config->database = general_conf().get_db_database();
        _mysql_config->user = general_conf().get_db_user();
        _mysql_config->password = general_conf().get_db_pass();
        _mysql_config->port = general_conf().get_db_port();
        _mysql_config->host = general_conf().get_db_host();
        _mysql_connection = std::make_shared<sqlpp::mysql::connection>(_mysql_config);
        
        HLog(info) << "Database tcp://" << general_conf().get_db_user()
                    << ":" << general_conf().get_db_pass()
                    << "@" << general_conf().get_db_host()
                    << ":" << general_conf().get_db_port()
                    << "/" << general_conf().get_db_database();
    } catch (const std::exception &error) {
        HLog(error) << "Database configuration error:" << error.what() << ".";
        return false;
    }
	
	try {
		sol::table char_servers = tbl.get<sol::table>("character_servers");
		char_servers.for_each([&](sol::object const &key, sol::object const &value) {
			auth_config_type::char_server c;
			sol::table cfg = value.as<sol::table>();
			
			c._name = cfg.get<std::string>("Name");
			c._host = cfg.get<std::string>("Host");
			c._port = cfg.get<uint16_t>("Port");
			c._type = cfg.get<uint16_t>("Type");
			c._is_new = cfg.get<uint16_t>("IsNew");
			
			sAuth->get_auth_config().add_char_server(c);
			
			HLog(info) << "Character server '" << c._name << "' is configured.";
		});
	} catch (std::exception &error) {
		HLog(error) << "Character server configuration error:" << error.what() << ".";
		return false;
	}
	
	int char_server_count = sAuth->get_auth_config().get_char_servers().size();
	HLog(info) << char_server_count << " character servers were configured.";
	
	/**
	 * Process Configuration that is common between servers.
	 */
	if (!parse_common_configs(tbl))
		return false;

	HLog(info) << "Done reading server configuration from '" << file_path << "'.";

	return true;
}

#undef horizon_config_error

/**
 * CLI Command: Reload Configuration
 * @return boolean value from AuthServer->ReadConfig()
 */
bool Auth::clicmd_reload_config()
{
	HLog(info) << "Reloading configuration from '" << general_conf().get_config_file_path() << "'";

	return sAuth->ReadConfig();
}

/**
 * Initialize CLI Comamnds
 */
void Auth::initialize_cli_commands()
{
	add_cli_command_func("reloadconf", std::bind(&Auth::clicmd_reload_config, this));

	Server::initialize_cli_commands();
}

/**
 * Signal Handler from the main thread.
 * @param ioServiceRef
 * @param error
 */
void SignalHandler(const boost::system::error_code &error, int /*signal*/)
{
	if (!error) {
		sAuth->set_shutdown_stage(SHUTDOWN_INITIATED);
		sAuth->set_shutdown_signal(SIGTERM);
	}
}

void Auth::initialize_core()
{
	/**
	 * Core Signal Handler
	 */
	boost::asio::signal_set signals(get_io_service(), SIGINT, SIGTERM);
	// Set signal handler for callbacks.
	// Set signal handlers (this must be done before starting io_service threads,
	// because otherwise they would unblock and exit)
	signals.async_wait(std::bind(&SignalHandler, std::placeholders::_1, std::placeholders::_2));

	// Start Horizon Network
	ClientSocktMgr->start(get_io_service(),
						  general_conf().get_listen_ip(),
						  general_conf().get_listen_port(),
						  MAX_NETWORK_THREADS);

	// Initialize core.
	Server::initialize_core();
    
	uint32_t diff = MAX_CORE_UPDATE_INTERVAL;
    
	/* Server Update Loop */
	while (get_shutdown_stage() == SHUTDOWN_NOT_STARTED && !general_conf().is_test_run()) {
		process_cli_commands();
		_task_scheduler.Update();
		ClientSocktMgr->update_socket_sessions(diff);
		std::this_thread::sleep_for(std::chrono::microseconds(diff));
	}

	/**
	 * Server shutdown routine begins here...
	 */
	_task_scheduler.CancelAll();
	ClientSocktMgr->stop_network();
	Server::finalize_core();

	set_shutdown_stage(SHUTDOWN_CLEANUP_COMPLETE);

	/* Cancel signal handling. */
	signals.cancel();
}

/**
 * Main Runtime Method
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, const char * argv[])
{
	if (argc > 1)
		sAuth->parse_exec_args(argv, argc);

	/*
	 * Read Configuration Settings for
	 * the Horizon Server.
	 */
	if (!sAuth->ReadConfig())
		exit(SIGTERM); // Stop process if the file can't be read.

	/**
	 * Initialize the Common Core
	 */
	sAuth->initialize_core();

	/*
	 * Core Cleanup
	 */
	HLog(info) << "Server shutting down...";

	return sAuth->general_conf().get_shutdown_signal();
}
