/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
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

#ifndef HORIZON_ZONE_GAME_CLIENT_DEFINITIONS_HPP
#define HORIZON_ZONE_GAME_CLIENT_DEFINITIONS_HPP

/** Client action types */
enum client_action_type {
	CLI_ACT_ATTACK,
	CLI_ACT_ITEM_PICKUP,
	CLI_ACT_SIT,
	CLI_ACT_STAND,
	CLI_ACT_ATTACK_NOMOTION,
	CLI_ACT_SPLASH,
	CLI_ACT_SKILL,
	CLI_ACT_ATTACK_REPEAT,
	CLI_ACT_ATTACK_MULTIPLE,
	CLI_ACT_ATTACK_MULTIPLE_NOMOTION,
	CLI_ACT_ATTACK_CRITICAL,
	CLI_ACT_ATTACK_LUCKY,
	CLI_ACT_TOUCHSKILL
};

#endif // HORIZON_ZONE_GAME_CLIENT_DEFINITIONS_HPP