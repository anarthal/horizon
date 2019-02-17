/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2019 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla. (sagunxp@gmail.com)
 *
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 **************************************************/

#include "CommandLineInterface.hpp"
#if defined(__APPLE__) || defined(__MACH__)
#include <editline/readline.h>
#else
#include <readline/readline.h>
#include <readline/history.h>
#endif
#include <Server/Common/Server.hpp>

#define TERMINAL_STR "Horizon $> "

void command_complete(std::shared_ptr<CLICommand> /*cmd*/, bool /*success*/)
{
	fflush(stdout);
}

void cli_thread_start(Server *serv)
{
	printf("\a");

	while (serv->get_shutdown_stage() == SHUTDOWN_NOT_STARTED)
	{

		char *command_str;

		command_str = readline(TERMINAL_STR);
		rl_bind_key('\t', rl_complete);

		if (command_str != nullptr) {
			for (int x = 0; command_str[x]; ++x)
				if (command_str[x] == '\r' || command_str[x] == '\n') {
					command_str[x] = 0;
					break;
				}

			if (!*command_str) {
				free(command_str);
				fflush(stdout);
				continue;
			}

			fflush(stdout);
			serv->queue_cli_command(CLICommand(serv, command_str, &command_complete));
			add_history(command_str);
			free(command_str);
			std::this_thread::sleep_for(std::chrono::milliseconds(serv->general_conf().get_core_update_interval() + 100)); // Sleep until core has updated.
		} else if (feof(stdin)) {
			serv->set_shutdown_stage(SHUTDOWN_INITIATED);
			serv->set_shutdown_signal(SIGTERM);
		}
	}
}
