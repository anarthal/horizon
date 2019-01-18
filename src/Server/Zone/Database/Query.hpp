/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2018 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla. (sagunxp@gmail.com)
 *
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 **************************************************/

#ifndef HORIZON_ZONE_DATABASE_QUERY_HPP
#define HORIZON_ZONE_DATABASE_QUERY_HPP

#include "Server/Common/Database/Query.hpp"

#include <map>
#include <stdio.h>
#include <mysqlx/xdevapi.h>

class GameAccount;

namespace Horizon
{
	namespace Models
	{
		namespace Character
		{
			class Character;
		}
	}
}

namespace Horizon
{
	namespace Char
	{
		namespace Database
		{
			enum char_query_types
			{
				SELECT_ALL_CHARS_BY_AID,
				CHECK_EXISTING_CHAR_BY_NAME,
			};
			class Query : public Horizon::Common::Database::Query
			{
			public:
				Query();
				~Query();

				static Query *getInstance()
				{
					static Query query;
					return &query;
				}

				void InitializeQueryStrings();

				std::shared_ptr<Horizon::Models::Character::Character> CreateCharacterModelFromResult(uint32_t account_id, mysqlx::Row record);
			};
		}
	}
}

#define ZoneQuery Horizon::Zone::Database::Query::getInstance()

#endif /* HORIZON_ZONE_DATABASE_QUERY_HPP */

