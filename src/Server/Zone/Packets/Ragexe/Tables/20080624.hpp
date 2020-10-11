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

#ifndef HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080624
#define HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080624

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
		ADD_PKT(0x00e6, 14, CZ_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0208, 6, CZ_ACK_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x00c5, -1, CZ_ACK_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00e8, 114, CZ_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0218, 10, CZ_ALCHEMIST_RANK(sock));
		ADD_PKT(0x0172, -1, CZ_ALLY_GUILD(sock));
		ADD_PKT(0x0099, 30, CZ_BROADCAST(sock));
		ADD_PKT(0x00ed, 20, CZ_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00de, 54, CZ_CHANGE_CHATROOM(sock));
		ADD_PKT(0x0361, -1, CZ_CHANGE_DIRECTION2(sock));
		ADD_PKT(0x019d, 30, CZ_CHANGE_EFFECTSTATE(sock));
		ADD_PKT(0x00b8, -1, CZ_CHOOSE_MENU(sock));
		ADD_PKT(0x01ed, 6, CZ_CHOPOKGI(sock));
		ADD_PKT(0x0146, -1, CZ_CLOSE_CoreLog(sock));
		ADD_PKT(0x00eb, -1, CZ_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0203, 3, CZ_DELETE_FRIENDS(sock));
		ADD_PKT(0x00ce, 4, CZ_DISCONNECT_ALL_CHARACTER(sock));
		ADD_PKT(0x01e7, -1, CZ_DORIDORI(sock));
		ADD_PKT(0x00ef, 10, CZ_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00e3, 6, CZ_EXIT_ROOM(sock));
		ADD_PKT(0x017e, 6, CZ_GUILD_CHAT(sock));
		ADD_PKT(0x016e, 2, CZ_GUILD_NOTICE(sock));
		ADD_PKT(0x01d5, 27, CZ_INPUT_EDITDLGSTR(sock));
		ADD_PKT(0x02f6, 8, CZ_IRMAIL_LIST(sock));
		ADD_PKT(0x02f3, 2, CZ_IRMAIL_SEND(sock));
		ADD_PKT(0x013f, -1, CZ_ITEM_CREATE(sock));
		ADD_PKT(0x0362, 4, CZ_ITEM_PICKUP2(sock));
		ADD_PKT(0x0363, 6, CZ_ITEM_THROW2(sock));
		ADD_PKT(0x016b, -1, CZ_JOIN_GUILD(sock));
		ADD_PKT(0x0237, 14, CZ_KILLER_RANK(sock));
		ADD_PKT(0x019c, 29, CZ_LOCALBROADCAST(sock));
		ADD_PKT(0x01e8, 22, CZ_MAKE_GROUP2(sock));
		ADD_PKT(0x0140, 2, CZ_MOVETO_MAP(sock));
		ADD_PKT(0x0126, -1, CZ_MOVE_ITEM_FROM_BODY_TO_CART(sock));
		ADD_PKT(0x0364, 5, CZ_MOVE_ITEM_FROM_BODY_TO_STORE2(sock));
		ADD_PKT(0x0129, 182, CZ_MOVE_ITEM_FROM_CART_TO_STORE(sock));
		ADD_PKT(0x0128, -1, CZ_MOVE_ITEM_FROM_STORE_TO_CART(sock));
		ADD_PKT(0x00c8, 4, CZ_PC_PURCHASE_ITEMLIST(sock));
		ADD_PKT(0x0134, 29, CZ_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x00c9, -1, CZ_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x01bd, 22, CZ_RECALL_GID(sock));
		ADD_PKT(0x0161, 16, CZ_REG_CHANGE_GUILD_POSITIONINFO(sock));
		ADD_PKT(0x011d, -1, CZ_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x01ba, 6, CZ_REMOVE_AID(sock));
		ADD_PKT(0x018e, 14, CZ_REQMAKINGITEM(sock));
		ADD_PKT(0x0369, 28, CZ_REQNAME_BYGID2(sock));
		ADD_PKT(0x0233, -1, CZ_REQUEST_ACTNPC(sock));
		ADD_PKT(0x0108, -1, CZ_REQUEST_CHAT_PARTY(sock));
		ADD_PKT(0x035f, -1, CZ_REQUEST_MOVE2(sock));
		ADD_PKT(0x0232, -1, CZ_REQUEST_MOVENPC(sock));
		ADD_PKT(0x0234, -1, CZ_REQUEST_MOVETOOWNER(sock));
		ADD_PKT(0x0360, 11, CZ_REQUEST_TIME2(sock));
		ADD_PKT(0x0170, 20, CZ_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x015b, -1, CZ_REQ_BAN_GUILD(sock));
		ADD_PKT(0x012a, -1, CZ_REQ_CARTOFF(sock));
		ADD_PKT(0x0155, -1, CZ_REQ_CHANGE_MEMBERPOS(sock));
		ADD_PKT(0x012e, 6, CZ_REQ_CLOSESTORE(sock));
		ADD_PKT(0x018a, 14, CZ_REQ_DISCONNECT(sock));
		ADD_PKT(0x00e4, 36, CZ_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0103, 8, CZ_REQ_EXPEL_GROUP_MEMBER(sock));
		ADD_PKT(0x00e2, -1, CZ_REQ_EXPEL_MEMBER(sock));
		ADD_PKT(0x0149, -1, CZ_REQ_GIVE_MANNER_POINT(sock));
		ADD_PKT(0x014d, 9, CZ_REQ_GUILD_MENUINTERFACE(sock));
		ADD_PKT(0x017c, 55, CZ_REQ_ITEMCOMPOSITION(sock));
		ADD_PKT(0x0178, -1, CZ_REQ_ITEMIDENTIFY(sock));
		ADD_PKT(0x0168, 9, CZ_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0159, 26, CZ_REQ_LEAVE_GUILD(sock));
		ADD_PKT(0x01ae, -1, CZ_REQ_MAKINGARROW(sock));
		ADD_PKT(0x00b9, 2, CZ_REQ_NEXT_SCRIPT(sock));
		ADD_PKT(0x01b2, 6, CZ_REQ_OPENSTORE2(sock));
		ADD_PKT(0x00d3, 6, CZ_REQ_WHISPER_LIST(sock));
		ADD_PKT(0x00b2, -1, CZ_RESTART(sock));
		ADD_PKT(0x01ce, -1, CZ_SELECTAUTOSPELL(sock));
		ADD_PKT(0x00cf, -1, CZ_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00bb, 4, CZ_STATUS_CHANGE(sock));
		ADD_PKT(0x0225, 2, CZ_TAEKWON_RANK(sock));
		ADD_PKT(0x0112, 15, CZ_UPGRADE_SKILLLEVEL(sock));
		ADD_PKT(0x0366, 67, CZ_USE_SKILL_TOGROUND2(sock));
		ADD_PKT(0x0367, 10, CZ_USE_SKILL_TOGROUND_WITHTALKBOX2(sock));
		ADD_PKT(0x0073, -1, ZC_ACCEPT_ENTER(sock));
		ADD_PKT(0x0083, -1, ZC_ACCEPT_QUIT(sock));
		ADD_PKT(0x00ea, 39, ZC_ACK_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x015c, -1, ZC_ACK_BAN_GUILD(sock));
		ADD_PKT(0x00d6, 6, ZC_ACK_CREATE_CHATROOM(sock));
		ADD_PKT(0x015e, 30, ZC_ACK_DISORGANIZE_GUILD_RESULT(sock));
		ADD_PKT(0x00e7, 30, ZC_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f5, -1, ZC_ACK_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x0179, -1, ZC_ACK_ITEMIDENTIFY(sock));
		ADD_PKT(0x01fe, -1, ZC_ACK_ITEMREPAIR(sock));
		ADD_PKT(0x011e, -1, ZC_ACK_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x0095, 10, ZC_ACK_REQNAME(sock));
		ADD_PKT(0x0194, 26, ZC_ACK_REQNAME_BYGID(sock));
		ADD_PKT(0x0098, -1, ZC_ACK_WHISPER(sock));
		ADD_PKT(0x013b, 22, ZC_ACTION_FAILURE(sock));
		ADD_PKT(0x0209, 9, ZC_ADD_FRIENDS_LIST(sock));
		ADD_PKT(0x0124, 26, ZC_ADD_ITEM_TO_CART(sock));
		ADD_PKT(0x01c5, -1, ZC_ADD_ITEM_TO_CART2(sock));
		ADD_PKT(0x00f4, -1, ZC_ADD_ITEM_TO_STORE(sock));
		ADD_PKT(0x0104, 60, ZC_ADD_MEMBER_TO_GROUP(sock));
		ADD_PKT(0x01e9, 282, ZC_ADD_MEMBER_TO_GROUP2(sock));
		ADD_PKT(0x0111, -1, ZC_ADD_SKILL(sock));
		ADD_PKT(0x021a, 11, ZC_ALCHEMIST_RANK(sock));
		ADD_PKT(0x0139, 10, ZC_ATTACK_FAILURE_FOR_DISTANCE(sock));
		ADD_PKT(0x013a, 2, ZC_ATTACK_RANGE(sock));
		ADD_PKT(0x0147, -1, ZC_AUTORUN_SKILL(sock));
		ADD_PKT(0x021b, 4, ZC_BLACKSMITH_POINT(sock));
		ADD_PKT(0x0219, -1, ZC_BLACKSMITH_RANK(sock));
		ADD_PKT(0x01c3, -1, ZC_BROADCAST2(sock));
		ADD_PKT(0x00ee, -1, ZC_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0122, 58, ZC_CART_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0297, 4, ZC_CART_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x01ef, -1, ZC_CART_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x0230, -1, ZC_CHANGESTATE_MER(sock));
		ADD_PKT(0x00df, 11, ZC_CHANGE_CHATROOM(sock));
		ADD_PKT(0x00b6, 7, ZC_CLOSE_CoreLog(sock));
		ADD_PKT(0x00f8, 26, ZC_CLOSE_STORE(sock));
		ADD_PKT(0x01d2, -1, ZC_COMBODELAY(sock));
		ADD_PKT(0x0144, 2, ZC_COMPASS(sock));
		ADD_PKT(0x00ec, 4, ZC_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01ea, 79, ZC_CONGRATULATION(sock));
		ADD_PKT(0x0141, 4, ZC_COUPLESTATUS(sock));
		ADD_PKT(0x0137, -1, ZC_DELETEITEM_FROM_MCSTORE(sock));
		ADD_PKT(0x020a, 68, ZC_DELETE_FRIENDS(sock));
		ADD_PKT(0x0125, 7, ZC_DELETE_ITEM_FROM_CART(sock));
		ADD_PKT(0x00f6, 6, ZC_DELETE_ITEM_FROM_STORE(sock));
		ADD_PKT(0x01cf, 11, ZC_DEVOTIONLIST(sock));
		ADD_PKT(0x0132, 4, ZC_DISAPPEAR_ENTRY(sock));
		ADD_PKT(0x00c0, 10, ZC_EMOTION(sock));
		ADD_PKT(0x00db, 7, ZC_ENTER_ROOM(sock));
		ADD_PKT(0x0295, 31, ZC_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x013c, -1, ZC_EQUIP_ARROW(sock));
		ADD_PKT(0x022f, 10, ZC_FEED_MER(sock));
		ADD_PKT(0x01a3, 8, ZC_FEED_PET(sock));
		ADD_PKT(0x0201, 3, ZC_FRIENDS_LIST(sock));
		ADD_PKT(0x0206, -1, ZC_FRIENDS_STATE(sock));
		ADD_PKT(0x0101, 24, ZC_GROUPINFO_CHANGE(sock));
		ADD_PKT(0x00fb, 26, ZC_GROUP_LIST(sock));
		ADD_PKT(0x017f, 2, ZC_GUILD_CHAT(sock));
		ADD_PKT(0x01b6, 31, ZC_GUILD_INFO2(sock));
		ADD_PKT(0x016f, -1, ZC_GUILD_NOTICE(sock));
		ADD_PKT(0x0162, 23, ZC_GUILD_SKILLINFO(sock));
		ADD_PKT(0x0239, 8, ZC_HOSKILLINFO_UPDATE(sock));
		ADD_PKT(0x02f5, 7, ZC_IRMAIL_NOTIFY(sock));
		ADD_PKT(0x0177, -1, ZC_ITEMIDENTIFY_LIST(sock));
		ADD_PKT(0x00a1, 44, ZC_ITEM_DISAPPEAR(sock));
		ADD_PKT(0x009d, 10, ZC_ITEM_ENTRY(sock));
		ADD_PKT(0x009e, 3, ZC_ITEM_FALL_ENTRY(sock));
		ADD_PKT(0x00a0, -1, ZC_ITEM_PICKUP_ACK(sock));
		ADD_PKT(0x00af, 5, ZC_ITEM_THROW_ACK(sock));
		ADD_PKT(0x0238, -1, ZC_KILLER_RANK(sock));
		ADD_PKT(0x018d, 8, ZC_MAKABLEITEMLIST(sock));
		ADD_PKT(0x01ad, 2, ZC_MAKINGARROW_LIST(sock));
		ADD_PKT(0x018c, 8, ZC_MONSTER_INFO(sock));
		ADD_PKT(0x010c, 23, ZC_MVP(sock));
		ADD_PKT(0x010b, -1, ZC_MVP_GETTING_SPECIAL_EXP(sock));
		ADD_PKT(0x014c, -1, ZC_MYGUILD_BASIC_INFO(sock));
		ADD_PKT(0x00a3, -1, ZC_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01ee, 6, ZC_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x008a, 6, ZC_NOTIFY_ACT(sock));
		ADD_PKT(0x0121, -1, ZC_NOTIFY_CARTITEM_COUNTINFO(sock));
		ADD_PKT(0x008d, 10, ZC_NOTIFY_CHAT(sock));
		ADD_PKT(0x0109, -1, ZC_NOTIFY_CHAT_PARTY(sock));
		ADD_PKT(0x019b, -1, ZC_NOTIFY_EFFECT(sock));
		ADD_PKT(0x0075, 5, ZC_NOTIFY_INITCHAR(sock));
		ADD_PKT(0x0189, -1, ZC_NOTIFY_MAPINFO(sock));
		ADD_PKT(0x0199, 29, ZC_NOTIFY_MAPPROPERTY(sock));
		ADD_PKT(0x01d6, 3, ZC_NOTIFY_MAPPROPERTY2(sock));
		ADD_PKT(0x01da, -1, ZC_NOTIFY_MOVEENTRY2(sock));
		ADD_PKT(0x02ec, -1, ZC_NOTIFY_MOVEENTRY4(sock));
		ADD_PKT(0x01d9, 15, ZC_NOTIFY_NEWENTRY2(sock));
		ADD_PKT(0x022b, 90, ZC_NOTIFY_NEWENTRY3(sock));
		ADD_PKT(0x02ed, -1, ZC_NOTIFY_NEWENTRY4(sock));
		ADD_PKT(0x008e, 5, ZC_NOTIFY_PLAYERCHAT(sock));
		ADD_PKT(0x0087, 4, ZC_NOTIFY_PLAYERMOVE(sock));
		ADD_PKT(0x0107, -1, ZC_NOTIFY_POSITION_TO_GROUPM(sock));
		ADD_PKT(0x01eb, -1, ZC_NOTIFY_POSITION_TO_GUILDM(sock));
		ADD_PKT(0x019a, -1, ZC_NOTIFY_RANKING(sock));
		ADD_PKT(0x0114, -1, ZC_NOTIFY_SKILL(sock));
		ADD_PKT(0x01de, 22, ZC_NOTIFY_SKILL2(sock));
		ADD_PKT(0x01d8, -1, ZC_NOTIFY_STANDENTRY2(sock));
		ADD_PKT(0x022a, 2, ZC_NOTIFY_STANDENTRY3(sock));
		ADD_PKT(0x007c, 16, ZC_NOTIFY_STANDENTRY_NPC(sock));
		ADD_PKT(0x00f2, -1, ZC_NOTIFY_STOREITEM_COUNTINFO(sock));
		ADD_PKT(0x007f, -1, ZC_NOTIFY_TIME(sock));
		ADD_PKT(0x0077, 6, ZC_NOTIFY_UPDATEPLAYER(sock));
		ADD_PKT(0x0080, -1, ZC_NOTIFY_VANISH(sock));
		ADD_PKT(0x0093, 6, ZC_NPCACK_ENABLE(sock));
		ADD_PKT(0x0091, 8, ZC_NPCACK_MAPMOVE(sock));
		ADD_PKT(0x0092, 15, ZC_NPCACK_SERVERMOVE(sock));
		ADD_PKT(0x012d, 26, ZC_OPENSTORE(sock));
		ADD_PKT(0x01d4, 54, ZC_OPEN_EDITDLGSTR(sock));
		ADD_PKT(0x00b0, 3, ZC_PAR_CHANGE(sock));
		ADD_PKT(0x01ab, 60, ZC_PAR_CHANGE_USER(sock));
		ADD_PKT(0x0287, 26, ZC_PC_CASH_POINT_ITEMLIST(sock));
		ADD_PKT(0x0136, 5, ZC_PC_PURCHASE_MYITEMLIST(sock));
		ADD_PKT(0x0135, -1, ZC_PC_PURCHASE_RESULT_FROMMC(sock));
		ADD_PKT(0x00c7, 6, ZC_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x01aa, -1, ZC_PET_ACT(sock));
		ADD_PKT(0x0160, -1, ZC_POSITION_INFO(sock));
		ADD_PKT(0x022e, 4, ZC_PROPERTY_HOMUN(sock));
		ADD_PKT(0x01a2, 3, ZC_PROPERTY_PET(sock));
		ADD_PKT(0x013d, 3, ZC_RECOVERY(sock));
		ADD_PKT(0x00da, 53, ZC_REFUSE_ENTER_ROOM(sock));
		ADD_PKT(0x01fc, 7, ZC_REPAIRITEMLIST(sock));
		ADD_PKT(0x0207, 2, ZC_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x0171, 3, ZC_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x00e5, 3, ZC_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f4, 54, ZC_REQ_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x016a, 6, ZC_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x023a, -1, ZC_REQ_STORE_PASSWORD(sock));
		ADD_PKT(0x00ac, 8, ZC_REQ_TAKEOFF_EQUIP_ACK(sock));
		ADD_PKT(0x00aa, -1, ZC_REQ_WEAR_EQUIP_ACK(sock));
		ADD_PKT(0x00d7, 26, ZC_ROOM_NEWENTRY(sock));
		ADD_PKT(0x00c4, 14, ZC_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00d1, -1, ZC_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x010f, 2, ZC_SKILLINFO_LIST(sock));
		ADD_PKT(0x010e, 33, ZC_SKILLINFO_UPDATE(sock));
		ADD_PKT(0x0120, 27, ZC_SKILL_DISAPPEAR(sock));
		ADD_PKT(0x011f, -1, ZC_SKILL_ENTRY(sock));
		ADD_PKT(0x01c9, 11, ZC_SKILL_ENTRY2(sock));
		ADD_PKT(0x01d0, 9, ZC_SPIRITS(sock));
		ADD_PKT(0x01e1, 6, ZC_SPIRITS2(sock));
		ADD_PKT(0x00c3, 3, ZC_SPRITE_CHANGE(sock));
		ADD_PKT(0x01d7, -1, ZC_SPRITE_CHANGE2(sock));
		ADD_PKT(0x020e, 5, ZC_STARSKILL(sock));
		ADD_PKT(0x0229, 2, ZC_STATE_CHANGE3(sock));
		ADD_PKT(0x00bd, -1, ZC_STATUS(sock));
		ADD_PKT(0x00be, 57, ZC_STATUS_CHANGE(sock));
		ADD_PKT(0x00bc, 4, ZC_STATUS_CHANGE_ACK(sock));
		ADD_PKT(0x0088, -1, ZC_STOPMOVE(sock));
		ADD_PKT(0x0131, -1, ZC_STORE_ENTRY(sock));
		ADD_PKT(0x00a6, 16, ZC_STORE_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0296, -1, ZC_STORE_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x01f0, 8, ZC_STORE_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x0224, 42, ZC_TAEKWON_POINT(sock));
		ADD_PKT(0x0226, -1, ZC_TAEKWON_RANK(sock));
		ADD_PKT(0x01a0, 5, ZC_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x016c, 6, ZC_UPDATE_GDID(sock));
		ADD_PKT(0x00c2, 8, ZC_USER_COUNT(sock));
		ADD_PKT(0x013e, 3, ZC_USESKILL_ACK(sock));
		ADD_PKT(0x00a8, 6, ZC_USE_ITEM_ACK(sock));
		ADD_PKT(0x01c8, -1, ZC_USE_ITEM_ACK2(sock));
		ADD_PKT(0x011a, 3, ZC_USE_SKILL(sock));
		ADD_PKT(0x00b5, 12, ZC_WAIT_CoreLog(sock));
		ADD_PKT(0x0097, -1, ZC_WHISPER(sock));
#undef ADD_PKT
	}

	~ShufflePacketLengthTable() { }

};
}
}
}
#endif /* HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080624 */
