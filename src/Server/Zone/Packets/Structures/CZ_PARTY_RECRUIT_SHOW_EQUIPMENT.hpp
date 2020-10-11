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

#ifndef HORIZON_ZONE_CZ_PARTY_RECRUIT_SHOW_EQUIPMENT_HPP
#define HORIZON_ZONE_CZ_PARTY_RECRUIT_SHOW_EQUIPMENT_HPP

#include "Server/Common/Configuration/Horizon.hpp"
#include "Server/Common/Base/NetworkPacket.hpp"

namespace Horizon
{
namespace Zone
{
class AuthSocket;
namespace Packet
{

enum {
#if PACKET_VERSION >= 20130103
	ID_CZ_PARTY_RECRUIT_SHOW_EQUIPMENT = 0x08f4
#elif PACKET_VERSION >= 20111025
	ID_CZ_PARTY_RECRUIT_SHOW_EQUIPMENT = 0x08f4
#elif PACKET_VERSION >= 0
	ID_CZ_PARTY_RECRUIT_SHOW_EQUIPMENT = 0x08f4
#endif
};
/**
 * @brief Main object for the aegis packet: CZ_PARTY_RECRUIT_SHOW_EQUIPMENT
 * Size : 6 @ 0
 *
 */ 
class CZ_PARTY_RECRUIT_SHOW_EQUIPMENT : public Base::NetworkPacket<ZoneSocket>
{
public:
	CZ_PARTY_RECRUIT_SHOW_EQUIPMENT(std::shared_ptr<ZoneSocket> sock);
	~CZ_PARTY_RECRUIT_SHOW_EQUIPMENT();


	void handle(ByteBuffer &buf);

private:
	void deserialize(ByteBuffer &buf) override;

protected:
	/* Structure Goes Here */
};
}
}
}
#endif /* HORIZON_ZONE_CZ_PARTY_RECRUIT_SHOW_EQUIPMENT_HPP */
