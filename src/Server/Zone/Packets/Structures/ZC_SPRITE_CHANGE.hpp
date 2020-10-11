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

#ifndef HORIZON_ZONE_ZC_SPRITE_CHANGE_HPP
#define HORIZON_ZONE_ZC_SPRITE_CHANGE_HPP

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
#if PACKET_VERSION >= 20090406
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20090401
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20090325
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20090318
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20090107
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20081217
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20081112
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20081105
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20081029
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20081015
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20081008
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080917
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080910
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080903
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080813
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080806
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080715
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080708
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080701
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080624
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080618
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080617
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080610
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080603
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080520
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080415
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080408
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080401
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080325
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080318
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080311
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080304
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080226
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080219
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080124
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 20080102
	ID_ZC_SPRITE_CHANGE = 0x00c3
#elif PACKET_VERSION >= 0
	ID_ZC_SPRITE_CHANGE = 0x00c3
#endif
};
/**
 * @brief Main object for the aegis packet: ZC_SPRITE_CHANGE
 * Size : 8 @ 0
 *
 */ 
class ZC_SPRITE_CHANGE : public Base::NetworkPacket<ZoneSocket>
{
public:
	ZC_SPRITE_CHANGE(std::shared_ptr<ZoneSocket> sock);
	~ZC_SPRITE_CHANGE();


	void prepare();

private:
	ByteBuffer serialize() override;

protected:
	/* Structure Goes Here */
};
}
}
}
#endif /* HORIZON_ZONE_ZC_SPRITE_CHANGE_HPP */
