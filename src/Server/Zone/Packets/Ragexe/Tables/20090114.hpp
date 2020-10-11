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

#ifndef HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20090114
#define HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20090114

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
		ADD_PKT(0x00e6, 57, CZ_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0208, 26, CZ_ACK_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x00c5, 6, CZ_ACK_SELECT_DEALTYPE(sock));
		ADD_PKT(0x0202, -1, CZ_ADD_FRIENDS(sock));
		ADD_PKT(0x0217, 44, CZ_BLACKSMITH_RANK(sock));
		ADD_PKT(0x00ed, 8, CZ_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0118, -1, CZ_CANCEL_LOCKON(sock));
		ADD_PKT(0x00de, 282, CZ_CHANGE_CHATROOM(sock));
		ADD_PKT(0x0361, 6, CZ_CHANGE_DIRECTION2(sock));
		ADD_PKT(0x019d, -1, CZ_CHANGE_EFFECTSTATE(sock));
		ADD_PKT(0x0102, 30, CZ_CHANGE_GROUPEXPOPTION(sock));
		ADD_PKT(0x00b8, 2, CZ_CHOOSE_MENU(sock));
		ADD_PKT(0x0146, -1, CZ_CLOSE_CoreLog(sock));
		ADD_PKT(0x022d, -1, CZ_COMMAND_MER(sock));
		ADD_PKT(0x00eb, -1, CZ_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0090, -1, CZ_CONTACTNPC(sock));
		ADD_PKT(0x00d5, -1, CZ_CREATE_CHATROOM(sock));
		ADD_PKT(0x00cc, 8, CZ_DISCONNECT_CHARACTER(sock));
		ADD_PKT(0x01e7, -1, CZ_DORIDORI(sock));
		ADD_PKT(0x0436, 14, CZ_ENTER2(sock));
		ADD_PKT(0x00ef, -1, CZ_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00e3, -1, CZ_EXIT_ROOM(sock));
		ADD_PKT(0x017e, 6, CZ_GUILD_CHAT(sock));
		ADD_PKT(0x016e, 97, CZ_GUILD_NOTICE(sock));
		ADD_PKT(0x0143, 22, CZ_INPUT_EDITDLG(sock));
		ADD_PKT(0x01d5, 14, CZ_INPUT_EDITDLGSTR(sock));
		ADD_PKT(0x02f6, -1, CZ_IRMAIL_LIST(sock));
		ADD_PKT(0x013f, 6, CZ_ITEM_CREATE(sock));
		ADD_PKT(0x0362, 15, CZ_ITEM_PICKUP2(sock));
		ADD_PKT(0x0363, 4, CZ_ITEM_THROW2(sock));
		ADD_PKT(0x00ff, 3, CZ_JOIN_GROUP(sock));
		ADD_PKT(0x016b, 30, CZ_JOIN_GUILD(sock));
		ADD_PKT(0x0237, 2, CZ_KILLER_RANK(sock));
		ADD_PKT(0x019c, -1, CZ_LOCALBROADCAST(sock));
		ADD_PKT(0x01e8, 14, CZ_MAKE_GROUP2(sock));
		ADD_PKT(0x0140, 4, CZ_MOVETO_MAP(sock));
		ADD_PKT(0x0126, -1, CZ_MOVE_ITEM_FROM_BODY_TO_CART(sock));
		ADD_PKT(0x0364, 14, CZ_MOVE_ITEM_FROM_BODY_TO_STORE2(sock));
		ADD_PKT(0x0127, -1, CZ_MOVE_ITEM_FROM_CART_TO_BODY(sock));
		ADD_PKT(0x0129, -1, CZ_MOVE_ITEM_FROM_CART_TO_STORE(sock));
		ADD_PKT(0x0128, 29, CZ_MOVE_ITEM_FROM_STORE_TO_CART(sock));
		ADD_PKT(0x007d, -1, CZ_NOTIFY_ACTORINIT(sock));
		ADD_PKT(0x00c8, -1, CZ_PC_PURCHASE_ITEMLIST(sock));
		ADD_PKT(0x0134, 6, CZ_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x00c9, 15, CZ_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x0161, 30, CZ_REG_CHANGE_GUILD_POSITIONINFO(sock));
		ADD_PKT(0x01ba, 30, CZ_REMOVE_AID(sock));
		ADD_PKT(0x0368, 30, CZ_REQNAME2(sock));
		ADD_PKT(0x0369, -1, CZ_REQNAME_BYGID2(sock));
		ADD_PKT(0x0233, 6, CZ_REQUEST_ACTNPC(sock));
		ADD_PKT(0x0232, -1, CZ_REQUEST_MOVENPC(sock));
		ADD_PKT(0x0360, 11, CZ_REQUEST_TIME2(sock));
		ADD_PKT(0x0170, -1, CZ_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x0130, 30, CZ_REQ_BUY_FROMMC(sock));
		ADD_PKT(0x012a, -1, CZ_REQ_CARTOFF(sock));
		ADD_PKT(0x0155, -1, CZ_REQ_CHANGE_MEMBERPOS(sock));
		ADD_PKT(0x012e, -1, CZ_REQ_CLOSESTORE(sock));
		ADD_PKT(0x018a, 2, CZ_REQ_DISCONNECT(sock));
		ADD_PKT(0x00bf, 6, CZ_REQ_EMOTION(sock));
		ADD_PKT(0x0103, 11, CZ_REQ_EXPEL_GROUP_MEMBER(sock));
		ADD_PKT(0x00e2, 7, CZ_REQ_EXPEL_MEMBER(sock));
		ADD_PKT(0x014f, 182, CZ_REQ_GUILD_MENU(sock));
		ADD_PKT(0x014d, -1, CZ_REQ_GUILD_MENUINTERFACE(sock));
		ADD_PKT(0x017c, -1, CZ_REQ_ITEMCOMPOSITION(sock));
		ADD_PKT(0x017a, -1, CZ_REQ_ITEMCOMPOSITION_LIST(sock));
		ADD_PKT(0x0178, 6, CZ_REQ_ITEMIDENTIFY(sock));
		ADD_PKT(0x01fd, 53, CZ_REQ_ITEMREPAIR(sock));
		ADD_PKT(0x00fc, 3, CZ_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x0168, -1, CZ_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0100, -1, CZ_REQ_LEAVE_GROUP(sock));
		ADD_PKT(0x01ae, 11, CZ_REQ_MAKINGARROW(sock));
		ADD_PKT(0x00b9, -1, CZ_REQ_NEXT_SCRIPT(sock));
		ADD_PKT(0x01b2, 60, CZ_REQ_OPENSTORE2(sock));
		ADD_PKT(0x00e0, -1, CZ_REQ_ROLE_CHANGE(sock));
		ADD_PKT(0x00ab, 4, CZ_REQ_TAKEOFF_EQUIP(sock));
		ADD_PKT(0x00cf, 2, CZ_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x01bb, -1, CZ_SHIFT(sock));
		ADD_PKT(0x00bb, 10, CZ_STATUS_CHANGE(sock));
		ADD_PKT(0x019f, 7, CZ_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x0112, -1, CZ_UPGRADE_SKILLLEVEL(sock));
		ADD_PKT(0x0439, 28, CZ_USE_ITEM2(sock));
		ADD_PKT(0x0438, 3, CZ_USE_SKILL2(sock));
		ADD_PKT(0x0083, 10, ZC_ACCEPT_QUIT(sock));
		ADD_PKT(0x00ea, 6, ZC_ACK_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x015c, -1, ZC_ACK_BAN_GUILD(sock));
		ADD_PKT(0x00d6, -1, ZC_ACK_CREATE_CHATROOM(sock));
		ADD_PKT(0x00e7, 6, ZC_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f5, -1, ZC_ACK_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x0188, -1, ZC_ACK_ITEMREFINING(sock));
		ADD_PKT(0x01fe, 10, ZC_ACK_ITEMREPAIR(sock));
		ADD_PKT(0x011e, 2, ZC_ACK_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x0194, -1, ZC_ACK_REQNAME_BYGID(sock));
		ADD_PKT(0x018b, -1, ZC_ACK_REQ_DISCONNECT(sock));
		ADD_PKT(0x00fd, -1, ZC_ACK_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x0169, -1, ZC_ACK_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0098, 8, ZC_ACK_WHISPER(sock));
		ADD_PKT(0x013b, 8, ZC_ACTION_FAILURE(sock));
		ADD_PKT(0x0124, -1, ZC_ADD_ITEM_TO_CART(sock));
		ADD_PKT(0x01c5, 2, ZC_ADD_ITEM_TO_CART2(sock));
		ADD_PKT(0x00f4, 26, ZC_ADD_ITEM_TO_STORE(sock));
		ADD_PKT(0x01c4, -1, ZC_ADD_ITEM_TO_STORE2(sock));
		ADD_PKT(0x0104, 6, ZC_ADD_MEMBER_TO_GROUP(sock));
		ADD_PKT(0x01e9, 55, ZC_ADD_MEMBER_TO_GROUP2(sock));
		ADD_PKT(0x01cd, 33, ZC_AUTOSPELLLIST(sock));
		ADD_PKT(0x0219, 2, ZC_BLACKSMITH_RANK(sock));
		ADD_PKT(0x009a, -1, ZC_BROADCAST(sock));
		ADD_PKT(0x01c3, 15, ZC_BROADCAST2(sock));
		ADD_PKT(0x00ee, -1, ZC_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0122, 4, ZC_CART_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0123, -1, ZC_CART_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01ef, 30, ZC_CART_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x0230, 5, ZC_CHANGESTATE_MER(sock));
		ADD_PKT(0x01a4, -1, ZC_CHANGESTATE_PET(sock));
		ADD_PKT(0x00df, 3, ZC_CHANGE_CHATROOM(sock));
		ADD_PKT(0x00b6, 6, ZC_CLOSE_CoreLog(sock));
		ADD_PKT(0x0144, 2, ZC_COMPASS(sock));
		ADD_PKT(0x00ec, 6, ZC_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01ea, -1, ZC_CONGRATULATION(sock));
		ADD_PKT(0x020a, 4, ZC_DELETE_FRIENDS(sock));
		ADD_PKT(0x00f6, -1, ZC_DELETE_ITEM_FROM_STORE(sock));
		ADD_PKT(0x0105, -1, ZC_DELETE_MEMBER_FROM_GROUP(sock));
		ADD_PKT(0x00d8, -1, ZC_DESTROY_ROOM(sock));
		ADD_PKT(0x01cf, -1, ZC_DEVOTIONLIST(sock));
		ADD_PKT(0x00c0, 31, ZC_EMOTION(sock));
		ADD_PKT(0x00db, 8, ZC_ENTER_ROOM(sock));
		ADD_PKT(0x00a4, -1, ZC_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x013c, -1, ZC_EQUIP_ARROW(sock));
		ADD_PKT(0x022f, -1, ZC_FEED_MER(sock));
		ADD_PKT(0x01a3, 3, ZC_FEED_PET(sock));
		ADD_PKT(0x0201, 4, ZC_FRIENDS_LIST(sock));
		ADD_PKT(0x0227, 4, ZC_GAME_GUARD(sock));
		ADD_PKT(0x0101, 20, ZC_GROUPINFO_CHANGE(sock));
		ADD_PKT(0x00fb, 16, ZC_GROUP_LIST(sock));
		ADD_PKT(0x01b6, 13, ZC_GUILD_INFO2(sock));
		ADD_PKT(0x016f, 9, ZC_GUILD_NOTICE(sock));
		ADD_PKT(0x0162, 10, ZC_GUILD_SKILLINFO(sock));
		ADD_PKT(0x0239, 71, ZC_HOSKILLINFO_UPDATE(sock));
		ADD_PKT(0x02f5, 8, ZC_IRMAIL_NOTIFY(sock));
		ADD_PKT(0x017b, -1, ZC_ITEMCOMPOSITION_LIST(sock));
		ADD_PKT(0x0177, -1, ZC_ITEMIDENTIFY_LIST(sock));
		ADD_PKT(0x009d, 3, ZC_ITEM_ENTRY(sock));
		ADD_PKT(0x009e, 3, ZC_ITEM_FALL_ENTRY(sock));
		ADD_PKT(0x0238, 12, ZC_KILLER_RANK(sock));
		ADD_PKT(0x018d, 7, ZC_MAKABLEITEMLIST(sock));
		ADD_PKT(0x01ad, 14, ZC_MAKINGARROW_LIST(sock));
		ADD_PKT(0x00dd, -1, ZC_MEMBER_EXIT(sock));
		ADD_PKT(0x00dc, 4, ZC_MEMBER_NEWENTRY(sock));
		ADD_PKT(0x018c, -1, ZC_MONSTER_INFO(sock));
		ADD_PKT(0x043f, 25, ZC_MSG_STATE_CHANGE2(sock));
		ADD_PKT(0x010c, 8, ZC_MVP(sock));
		ADD_PKT(0x010b, -1, ZC_MVP_GETTING_SPECIAL_EXP(sock));
		ADD_PKT(0x014c, 2, ZC_MYGUILD_BASIC_INFO(sock));
		ADD_PKT(0x01ee, 11, ZC_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x008a, -1, ZC_NOTIFY_ACT(sock));
		ADD_PKT(0x02e1, 60, ZC_NOTIFY_ACT2(sock));
		ADD_PKT(0x007a, 6, ZC_NOTIFY_ACTENTRY(sock));
		ADD_PKT(0x0121, 67, ZC_NOTIFY_CARTITEM_COUNTINFO(sock));
		ADD_PKT(0x0109, 3, ZC_NOTIFY_CHAT_PARTY(sock));
		ADD_PKT(0x0117, 26, ZC_NOTIFY_GROUNDSKILL(sock));
		ADD_PKT(0x0106, -1, ZC_NOTIFY_HP_TO_GROUPM(sock));
		ADD_PKT(0x0075, -1, ZC_NOTIFY_INITCHAR(sock));
		ADD_PKT(0x0189, 6, ZC_NOTIFY_MAPINFO(sock));
		ADD_PKT(0x0199, 282, ZC_NOTIFY_MAPPROPERTY(sock));
		ADD_PKT(0x01d6, -1, ZC_NOTIFY_MAPPROPERTY2(sock));
		ADD_PKT(0x0086, -1, ZC_NOTIFY_MOVE(sock));
		ADD_PKT(0x01da, 4, ZC_NOTIFY_MOVEENTRY2(sock));
		ADD_PKT(0x022c, -1, ZC_NOTIFY_MOVEENTRY3(sock));
		ADD_PKT(0x02ec, 9, ZC_NOTIFY_MOVEENTRY4(sock));
		ADD_PKT(0x0079, 21, ZC_NOTIFY_NEWENTRY(sock));
		ADD_PKT(0x01d9, 54, ZC_NOTIFY_NEWENTRY2(sock));
		ADD_PKT(0x008e, 12, ZC_NOTIFY_PLAYERCHAT(sock));
		ADD_PKT(0x0087, -1, ZC_NOTIFY_PLAYERMOVE(sock));
		ADD_PKT(0x01eb, 59, ZC_NOTIFY_POSITION_TO_GUILDM(sock));
		ADD_PKT(0x0114, 10, ZC_NOTIFY_SKILL(sock));
		ADD_PKT(0x01de, 282, ZC_NOTIFY_SKILL2(sock));
		ADD_PKT(0x0078, -1, ZC_NOTIFY_STANDENTRY(sock));
		ADD_PKT(0x01d8, 7, ZC_NOTIFY_STANDENTRY2(sock));
		ADD_PKT(0x022a, -1, ZC_NOTIFY_STANDENTRY3(sock));
		ADD_PKT(0x007c, 2, ZC_NOTIFY_STANDENTRY_NPC(sock));
		ADD_PKT(0x0077, 7, ZC_NOTIFY_UPDATEPLAYER(sock));
		ADD_PKT(0x0091, -1, ZC_NPCACK_MAPMOVE(sock));
		ADD_PKT(0x0092, 3, ZC_NPCACK_SERVERMOVE(sock));
		ADD_PKT(0x012d, 13, ZC_OPENSTORE(sock));
		ADD_PKT(0x00b0, -1, ZC_PAR_CHANGE(sock));
		ADD_PKT(0x0287, 3, ZC_PC_CASH_POINT_ITEMLIST(sock));
		ADD_PKT(0x00c6, -1, ZC_PC_PURCHASE_ITEMLIST(sock));
		ADD_PKT(0x0136, -1, ZC_PC_PURCHASE_MYITEMLIST(sock));
		ADD_PKT(0x00ca, -1, ZC_PC_PURCHASE_RESULT(sock));
		ADD_PKT(0x013d, 3, ZC_RECOVERY(sock));
		ADD_PKT(0x00da, -1, ZC_REFUSE_ENTER_ROOM(sock));
		ADD_PKT(0x0171, 6, ZC_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x00e5, 2, ZC_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f4, 8, ZC_REQ_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x00fe, -1, ZC_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x023a, 22, ZC_REQ_STORE_PASSWORD(sock));
		ADD_PKT(0x00ac, -1, ZC_REQ_TAKEOFF_EQUIP_ACK(sock));
		ADD_PKT(0x00aa, 26, ZC_REQ_WEAR_EQUIP_ACK(sock));
		ADD_PKT(0x00b3, -1, ZC_RESTART_ACK(sock));
		ADD_PKT(0x0167, 5, ZC_RESULT_MAKE_GUILD(sock));
		ADD_PKT(0x0148, -1, ZC_RESURRECTION(sock));
		ADD_PKT(0x00e1, 28, ZC_ROLE_CHANGE(sock));
		ADD_PKT(0x00c4, -1, ZC_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00d2, 6, ZC_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x01b3, -1, ZC_SHOW_IMAGE2(sock));
		ADD_PKT(0x010f, 43, ZC_SKILLINFO_LIST(sock));
		ADD_PKT(0x0120, 12, ZC_SKILL_DISAPPEAR(sock));
		ADD_PKT(0x01c9, 79, ZC_SKILL_ENTRY2(sock));
		ADD_PKT(0x01ac, 6, ZC_SKILL_UPDATE(sock));
		ADD_PKT(0x01d0, -1, ZC_SPIRITS(sock));
		ADD_PKT(0x01e1, 7, ZC_SPIRITS2(sock));
		ADD_PKT(0x0119, -1, ZC_STATE_CHANGE(sock));
		ADD_PKT(0x00bd, 10, ZC_STATUS(sock));
		ADD_PKT(0x00be, 14, ZC_STATUS_CHANGE(sock));
		ADD_PKT(0x0088, 60, ZC_STOPMOVE(sock));
		ADD_PKT(0x0131, 5, ZC_STORE_ENTRY(sock));
		ADD_PKT(0x00a6, 18, ZC_STORE_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0296, 6, ZC_STORE_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x00a5, -1, ZC_STORE_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x0226, 6, ZC_TAEKWON_RANK(sock));
		ADD_PKT(0x01a0, -1, ZC_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x016d, -1, ZC_UPDATE_CHARSTAT(sock));
		ADD_PKT(0x01f2, -1, ZC_UPDATE_CHARSTAT2(sock));
		ADD_PKT(0x016c, -1, ZC_UPDATE_GDID(sock));
		ADD_PKT(0x00c2, 4, ZC_USER_COUNT(sock));
		ADD_PKT(0x013e, -1, ZC_USESKILL_ACK(sock));
		ADD_PKT(0x00a8, 27, ZC_USE_ITEM_ACK(sock));
		ADD_PKT(0x01c8, 4, ZC_USE_ITEM_ACK2(sock));
		ADD_PKT(0x011a, 8, ZC_USE_SKILL(sock));
		ADD_PKT(0x00b5, 6, ZC_WAIT_CoreLog(sock));
		ADD_PKT(0x0097, 10, ZC_WHISPER(sock));
#undef ADD_PKT
	}

	~ShufflePacketLengthTable() { }

};
}
}
}
#endif /* HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20090114 */
