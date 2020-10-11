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

#ifndef HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20120131
#define HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20120131

#include "Server/Common/Base/NetworkPacket.hpp"
#include "Core/Multithreading/LockedLookupTable.hpp"

#include "Default.hpp"

#include <utility>

namespace Horizon
{
namespace Zone
{
namespace ShufflePackets
{
/**
 * @brief Shuffle Packet Length Table object that stores
 * the packet length of each packet of this client version.
 * Packets with IDs already existent in the database are over-written.
 * The data is stored in a thread-safe lookup table.
 * RAII techinque ensures that the table is populated on instantiation.
 */
class ShufflePacketLengthTable : public PacketLengthTable
{
public:
	ShufflePacketLengthTable()
	{
		std::shared_ptr<ZoneSocket> sock = get_socket();

#define ADD_PKT(i, j, k) _packet_length_table.insert(i, std::make_pair<uint16_t, NetworkPacket>(j, k))
		ADD_PKT(0x0202, 5, CZ_ADD_FRIENDS(sock));
		ADD_PKT(0x0361, -1, CZ_CHANGE_DIRECTION2(sock));
		ADD_PKT(0x022d, 6, CZ_COMMAND_MER(sock));
		ADD_PKT(0x0436, 2, CZ_ENTER2(sock));
		ADD_PKT(0x0362, 2, CZ_ITEM_PICKUP2(sock));
		ADD_PKT(0x0363, 12, CZ_ITEM_THROW2(sock));
		ADD_PKT(0x07ec, 2, CZ_JOIN_BATTLE_FIELD(sock));
		ADD_PKT(0x0365, 2, CZ_MOVE_ITEM_FROM_STORE_TO_BODY2(sock));
		ADD_PKT(0x0802, 90, CZ_PARTY_BOOKING_REQ_REGISTER(sock));
		ADD_PKT(0x02c4, 2, CZ_PARTY_JOIN_REQ(sock));
		ADD_PKT(0x0368, 2, CZ_REQNAME2(sock));
		ADD_PKT(0x0369, 7, CZ_REQNAME_BYGID2(sock));
		ADD_PKT(0x0437, 5, CZ_REQUEST_ACT2(sock));
		ADD_PKT(0x035f, 6, CZ_REQUEST_MOVE2(sock));
		ADD_PKT(0x0360, 6, CZ_REQUEST_TIME2(sock));
		ADD_PKT(0x0815, -1, CZ_REQ_CLOSE_BUYING_STORE(sock));
		ADD_PKT(0x0916, 26, CZ_REQ_JOIN_GUILD2(sock));
		ADD_PKT(0x0811, 8, CZ_REQ_OPEN_BUYING_STORE(sock));
		ADD_PKT(0x0819, -1, CZ_REQ_TRADE_BUYING_STORE(sock));
		ADD_PKT(0x0838, 5, CZ_SEARCH_STORE_INFO_NEXT_PAGE(sock));
		ADD_PKT(0x083c, 10, CZ_SSILIST_ITEM_CLICK(sock));
		ADD_PKT(0x0438, 10, CZ_USE_SKILL2(sock));
		ADD_PKT(0x0367, 8, CZ_USE_SKILL_TOGROUND_WITHTALKBOX2(sock));
		ADD_PKT(0x0914, -1, ZC_NOTIFY_MOVEENTRY9(sock));
		ADD_PKT(0x090f, -1, ZC_NOTIFY_NEWENTRY7(sock));
		ADD_PKT(0x0915, -1, ZC_NOTIFY_STANDENTRY8(sock));
#undef ADD_PKT
	}

	~ShufflePacketLengthTable() { }

};
}
}
}
#endif /* HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20120131 */