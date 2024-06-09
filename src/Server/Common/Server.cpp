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

#include "Server.hpp"

#include "Server/Common/CLI/CommandLineInterface.hpp"
#include "Libraries/Networking/Buffer/ByteBuffer.hpp"
#include "version.hpp"
#include "System.hpp"

#include <readline/readline.h>

std::atomic<shutdown_stages> _shutdown_stage = SHUTDOWN_NOT_STARTED;
std::atomic<int> _shutdown_signal = 0;

Mainframe::Mainframe(general_server_configuration &conf) : _config(conf) { }
Mainframe::~Mainframe() { }

void Mainframe::initialize_command_line()
{
	get_component<CommandLineProcess>(CONSOLE_MAINFRAME)->initialize();
}

void MainframeComponent::system_routine_queue_push(std::shared_ptr<Horizon::System::RuntimeRoutineContext> context) { _hsr_manager.push(context); }
void MainframeComponent::system_routine_queue_push(std::shared_ptr<Horizon::System::RuntimeRoutineContextChain> context) { _hsr_manager.push(context); }
void MainframeComponent::system_routine_process_queue() { _hsr_manager.process_queue(); }

bool CommandLineProcess::clicmd_shutdown(std::string /*cmd*/)
{
	set_shutdown_stage(SHUTDOWN_INITIATED);
	set_shutdown_signal(SIGTERM);
	return true;
}

void CommandLineProcess::initialize()
{
	_cli_thread = std::thread(std::bind(&cli_thread_start, this));

	add_function("shutdown", std::bind(&CommandLineProcess::clicmd_shutdown, this, std::placeholders::_1));

	bool value = _is_initialized;
	_is_initialized.compare_exchange_strong(value, true);
}

void CommandLineProcess::finalize()
{
	if (_cli_thread.joinable())
		_cli_thread.detach();

	bool value = _is_initialized;
	_is_initialized.compare_exchange_strong(value, false);
}

void CommandLineProcess::process()
{
	while (_cli_cmd_queue.size()) {
		CLICommand command = _cli_cmd_queue.front();
		_cli_cmd_queue.pop();
		bool ret = false;
		std::vector<std::string> separated_args;
		boost::algorithm::split(separated_args, command.m_command, boost::algorithm::is_any_of(" "));

		std::function<bool(std::string)> cmd_func = find(separated_args[0]);

		if (cmd_func) {
			ret = cmd_func(command.m_command);
		} else {
			HLog(info) << "Command '" << command.m_command << "' not found!";
		}

		if (command.m_finish_func != nullptr)
			command.m_finish_func(command, ret);
	}
}

/* Public */
Server::Server() : Mainframe(general_conf())
{   
	auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);

	HLog(info) << "Copyright (c) https://github.com/horizonxyz/horizon";
	HLog(info) << "Date: " << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d");
	HLog(info) << "Compile CXX Flags: " << _CMAKE_CXX_FLAGS;
	HLog(info) << "Version: " << VER_PRODUCTVERSION_STR;
	HLog(info) << "Last Update: " << _DATE;
	HLog(info) << "Branch: " << _BRANCH;
	HLog(info) << "Copyright: " << VER_LEGALCOPYRIGHT_STR;
	HLog(info) << "Boost Version: v" << (BOOST_VERSION / 100000) << "." << (BOOST_VERSION / 100 % 1000) << "." << (BOOST_VERSION % 100);
	HLog(info) << "Readline Version: v" << RL_READLINE_VERSION;
    HLog(info) << "Client Information: " << CLIENT_TYPE << " " << PACKET_VERSION;
}

Server::~Server()
{
}

void Server::print_help()
{
	HLog(error) << "usage: <server> [--version] [--help] [--with-config=<file_with_path>]";
}

void Server::parse_exec_args(const char *argv[], int argc)
{
	std::string started_with_args;
    for (int i = 1; i < argc; ++i) {
		started_with_args.append(argv[i]).append(" ");

        std::string arg(argv[i]);
        std::vector<std::string> separated_args;
        boost::algorithm::split(separated_args, arg, boost::algorithm::is_any_of("="));
        
		if (separated_args.size() == 1) {
            std::string arg = separated_args.at(0);
            if (arg.compare("--test-run") == 0) {
                HLog(info) << "Horizon test mode intiated.";
                general_conf().set_test_run();
            } else if (arg.compare("--help") == 0) {
				print_help();
			} else if (arg.compare("--version") == 0) {
				HLog(info) << "Version: " << VER_PRODUCTVERSION_STR;
			}
        } else if (separated_args.size() == 0) { 
			HLog(error) << "Horizon started with no command line arguments.";
			print_help();
		} else {
            std::string arg = separated_args.at(0);
            std::string val = separated_args.at(1);
            
            if (arg.compare("--with-config") == 0) {
                HLog(info) << "Loading configurations from '" << val << "'.";
                general_conf().set_config_file_path(val);
                if (!exists(general_conf().get_config_file_path())) {
                    HLog(error) << "Configuration file path '" << val << "' does not exist!";
                    continue;
                }
            }
        }
    }

	HLog(info) << "Started with args:" << started_with_args;
}

#define core_config_error(setting_name, default) \
HLog(error) << "No setting for " << setting_name << " in configuration file, defaulting to " << default;

bool Server::parse_common_configs(sol::table &tbl)
{
	std::string tmp_string{""};

	general_conf().set_listen_ip(tbl.get_or("bind_ip", std::string("127.0.0.1")));

	general_conf().set_listen_port(tbl.get_or("bind_port", 0));
    
	if (general_conf().get_listen_port() == 0) {
		HLog(error) << "Invalid or non-existent configuration for 'bind_port', Halting...";
		return false;
	}
	
	sol::table db_tbl = tbl.get<sol::table>("database_config");
	
	try {
		general_conf().set_db_host(db_tbl.get_or<std::string>("host", "127.0.0.1"));
		general_conf().set_db_user(db_tbl.get_or<std::string>("user", "horizon"));
		general_conf().set_db_database(db_tbl.get_or<std::string>("db", "horizon"));
		general_conf().set_db_pass(db_tbl.get_or<std::string>("pass", "horizon"));
		general_conf().set_db_port(db_tbl.get_or<uint16_t>("port", 33060));
		
		register_component(DATABASE_MAINFRAME, std::make_shared<DatabaseProcess>(get_io_service()));
		
		get_component<DatabaseProcess>(DATABASE_MAINFRAME)->initialize(
			general_conf().get_db_host(), 
			general_conf().get_db_port(), 
			general_conf().get_db_user(), 
			general_conf().get_db_pass(), 
			general_conf().get_db_database());

		HLog(info) << "Database tcp://" << general_conf().get_db_user()
			<< ":" << general_conf().get_db_pass()
			<< "@" << general_conf().get_db_host()
			<< ":" << general_conf().get_db_port()
			<< "/" << general_conf().get_db_database()
			<< (test_database_connection() ? " (connected)" : "(not connected)");
	}
	catch (const boost::mysql::error_with_diagnostics &error) {
		HLog(error) << error.what() << ".";
		return false;
	}
	catch (const std::exception &error) {
		HLog(error) << error.what() << ".";
		return false;
	}

	return true;
}

#undef core_config_error

void Server::initialize()
{
	/**
	 * Initialize Commandline Interface
	 */
	if (general_conf().is_test_run()) {
		HLog(info) << "Command line not supported during test-runs... skipping.";
	} else {
		HLog(info) << "Initializing command line.";
		register_component(CONSOLE_MAINFRAME, std::make_shared<CommandLineProcess>());
		get_component<CommandLineProcess>(CONSOLE_MAINFRAME)->initialize();
	}

	for (auto i = _components.begin(); i != _components.end(); i++) {
		while (i->second->is_initialized() == false) {
			HLog(error) << "Mainframe component '" << i->first << "': Offline";
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}

		HLog(info) << "Mainframe component '" << i->first << "': Online";
	}
}

void Server::finalize()
{
	get_component<CommandLineProcess>(CONSOLE_MAINFRAME)->finalize();
	get_component<DatabaseProcess>(DATABASE_MAINFRAME)->finalize();

	for (auto i = _components.begin(); i != _components.end(); i++) {
		while (i->second->is_initialized() == true) {
			HLog(error) << "Mainframe component '" << i->first << "': Online (Shutting Down)";
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}

		HLog(info) << "Mainframe component '" << i->first << "': Offline";
	}
}

boost::asio::io_service &Server::get_io_service()
{
	return _io_service;
}
