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

#ifndef HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080924
#define HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080924

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
		ADD_PKT(0x0208, 18, CZ_ACK_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x00c5, -1, CZ_ACK_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00e8, 282, CZ_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0217, -1, CZ_BLACKSMITH_RANK(sock));
		ADD_PKT(0x0099, -1, CZ_BROADCAST(sock));
		ADD_PKT(0x00ed, -1, CZ_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00de, -1, CZ_CHANGE_CHATROOM(sock));
		ADD_PKT(0x019d, -1, CZ_CHANGE_EFFECTSTATE(sock));
		ADD_PKT(0x0102, 7, CZ_CHANGE_GROUPEXPOPTION(sock));
		ADD_PKT(0x00b8, 2, CZ_CHOOSE_MENU(sock));
		ADD_PKT(0x01ed, 10, CZ_CHOPOKGI(sock));
		ADD_PKT(0x0146, 3, CZ_CLOSE_CoreLog(sock));
		ADD_PKT(0x01a1, -1, CZ_COMMAND_PET(sock));
		ADD_PKT(0x0090, 5, CZ_CONTACTNPC(sock));
		ADD_PKT(0x0203, 6, CZ_DELETE_FRIENDS(sock));
		ADD_PKT(0x00ce, 9, CZ_DISCONNECT_ALL_CHARACTER(sock));
		ADD_PKT(0x00cc, 6, CZ_DISCONNECT_CHARACTER(sock));
		ADD_PKT(0x01e7, 8, CZ_DORIDORI(sock));
		ADD_PKT(0x0436, -1, CZ_ENTER2(sock));
		ADD_PKT(0x00ef, 8, CZ_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x017e, 6, CZ_GUILD_CHAT(sock));
		ADD_PKT(0x016e, 6, CZ_GUILD_NOTICE(sock));
		ADD_PKT(0x0143, 6, CZ_INPUT_EDITDLG(sock));
		ADD_PKT(0x01d5, -1, CZ_INPUT_EDITDLGSTR(sock));
		ADD_PKT(0x02f6, 11, CZ_IRMAIL_LIST(sock));
		ADD_PKT(0x02f3, 58, CZ_IRMAIL_SEND(sock));
		ADD_PKT(0x013f, -1, CZ_ITEM_CREATE(sock));
		ADD_PKT(0x0363, 8, CZ_ITEM_THROW2(sock));
		ADD_PKT(0x00ff, -1, CZ_JOIN_GROUP(sock));
		ADD_PKT(0x016b, -1, CZ_JOIN_GUILD(sock));
		ADD_PKT(0x0237, 5, CZ_KILLER_RANK(sock));
		ADD_PKT(0x01e8, -1, CZ_MAKE_GROUP2(sock));
		ADD_PKT(0x0140, -1, CZ_MOVETO_MAP(sock));
		ADD_PKT(0x0364, 10, CZ_MOVE_ITEM_FROM_BODY_TO_STORE2(sock));
		ADD_PKT(0x0365, 86, CZ_MOVE_ITEM_FROM_STORE_TO_BODY2(sock));
		ADD_PKT(0x0134, 6, CZ_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x00c9, 4, CZ_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x01bd, 97, CZ_RECALL_GID(sock));
		ADD_PKT(0x01ba, 7, CZ_REMOVE_AID(sock));
		ADD_PKT(0x018e, 4, CZ_REQMAKINGITEM(sock));
		ADD_PKT(0x0368, 13, CZ_REQNAME2(sock));
		ADD_PKT(0x0369, -1, CZ_REQNAME_BYGID2(sock));
		ADD_PKT(0x0437, -1, CZ_REQUEST_ACT2(sock));
		ADD_PKT(0x0233, 5, CZ_REQUEST_ACTNPC(sock));
		ADD_PKT(0x0108, -1, CZ_REQUEST_CHAT_PARTY(sock));
		ADD_PKT(0x035f, -1, CZ_REQUEST_MOVE2(sock));
		ADD_PKT(0x0360, 16, CZ_REQUEST_TIME2(sock));
		ADD_PKT(0x015b, -1, CZ_REQ_BAN_GUILD(sock));
		ADD_PKT(0x0130, -1, CZ_REQ_BUY_FROMMC(sock));
		ADD_PKT(0x012a, 8, CZ_REQ_CARTOFF(sock));
		ADD_PKT(0x0155, 2, CZ_REQ_CHANGE_MEMBERPOS(sock));
		ADD_PKT(0x018a, 186, CZ_REQ_DISCONNECT(sock));
		ADD_PKT(0x00bf, -1, CZ_REQ_EMOTION(sock));
		ADD_PKT(0x014d, 282, CZ_REQ_GUILD_MENUINTERFACE(sock));
		ADD_PKT(0x017c, 5, CZ_REQ_ITEMCOMPOSITION(sock));
		ADD_PKT(0x01fd, 32, CZ_REQ_ITEMREPAIR(sock));
		ADD_PKT(0x0100, -1, CZ_REQ_LEAVE_GROUP(sock));
		ADD_PKT(0x0159, -1, CZ_REQ_LEAVE_GUILD(sock));
		ADD_PKT(0x01ae, 22, CZ_REQ_MAKINGARROW(sock));
		ADD_PKT(0x00b9, -1, CZ_REQ_NEXT_SCRIPT(sock));
		ADD_PKT(0x01b2, -1, CZ_REQ_OPENSTORE2(sock));
		ADD_PKT(0x00e0, -1, CZ_REQ_ROLE_CHANGE(sock));
		ADD_PKT(0x00ab, 79, CZ_REQ_TAKEOFF_EQUIP(sock));
		ADD_PKT(0x00c1, 21, CZ_REQ_USER_COUNT(sock));
		ADD_PKT(0x00a9, 18, CZ_REQ_WEAR_EQUIP(sock));
		ADD_PKT(0x00d3, 10, CZ_REQ_WHISPER_LIST(sock));
		ADD_PKT(0x01a7, -1, CZ_SELECT_PETEGG(sock));
		ADD_PKT(0x011b, -1, CZ_SELECT_WARPPOINT(sock));
		ADD_PKT(0x00cf, -1, CZ_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d0, 29, CZ_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x01bb, 27, CZ_SHIFT(sock));
		ADD_PKT(0x0225, 5, CZ_TAEKWON_RANK(sock));
		ADD_PKT(0x019f, -1, CZ_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x0112, 4, CZ_UPGRADE_SKILLLEVEL(sock));
		ADD_PKT(0x0439, 30, CZ_USE_ITEM2(sock));
		ADD_PKT(0x0438, 10, CZ_USE_SKILL2(sock));
		ADD_PKT(0x0366, 14, CZ_USE_SKILL_TOGROUND2(sock));
		ADD_PKT(0x0367, 11, CZ_USE_SKILL_TOGROUND_WITHTALKBOX2(sock));
		ADD_PKT(0x0083, 2, ZC_ACCEPT_QUIT(sock));
		ADD_PKT(0x012c, -1, ZC_ACK_ADDITEM_TO_CART(sock));
		ADD_PKT(0x00ea, 4, ZC_ACK_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00d6, -1, ZC_ACK_CREATE_CHATROOM(sock));
		ADD_PKT(0x015e, 32, ZC_ACK_DISORGANIZE_GUILD_RESULT(sock));
		ADD_PKT(0x00e7, 33, ZC_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f5, -1, ZC_ACK_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x0179, 4, ZC_ACK_ITEMIDENTIFY(sock));
		ADD_PKT(0x0188, 3, ZC_ACK_ITEMREFINING(sock));
		ADD_PKT(0x01fe, -1, ZC_ACK_ITEMREPAIR(sock));
		ADD_PKT(0x0274, 8, ZC_ACK_MAIL_RETURN(sock));
		ADD_PKT(0x00fa, -1, ZC_ACK_MAKE_GROUP(sock));
		ADD_PKT(0x018f, -1, ZC_ACK_REQMAKINGITEM(sock));
		ADD_PKT(0x0195, -1, ZC_ACK_REQNAMEALL(sock));
		ADD_PKT(0x018b, -1, ZC_ACK_REQ_DISCONNECT(sock));
		ADD_PKT(0x00fd, 6, ZC_ACK_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x0169, 53, ZC_ACK_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0110, 16, ZC_ACK_TOUSESKILL(sock));
		ADD_PKT(0x013b, -1, ZC_ACTION_FAILURE(sock));
		ADD_PKT(0x00e9, 6, ZC_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0209, 3, ZC_ADD_FRIENDS_LIST(sock));
		ADD_PKT(0x0124, 4, ZC_ADD_ITEM_TO_CART(sock));
		ADD_PKT(0x01c5, 3, ZC_ADD_ITEM_TO_CART2(sock));
		ADD_PKT(0x00f4, 4, ZC_ADD_ITEM_TO_STORE(sock));
		ADD_PKT(0x01c4, 10, ZC_ADD_ITEM_TO_STORE2(sock));
		ADD_PKT(0x0139, 7, ZC_ATTACK_FAILURE_FOR_DISTANCE(sock));
		ADD_PKT(0x013a, 11, ZC_ATTACK_RANGE(sock));
		ADD_PKT(0x0147, -1, ZC_AUTORUN_SKILL(sock));
		ADD_PKT(0x0219, -1, ZC_BLACKSMITH_RANK(sock));
		ADD_PKT(0x009a, 2, ZC_BROADCAST(sock));
		ADD_PKT(0x01c3, -1, ZC_BROADCAST2(sock));
		ADD_PKT(0x00ee, 10, ZC_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0122, 65, ZC_CART_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0123, -1, ZC_CART_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x0230, -1, ZC_CHANGESTATE_MER(sock));
		ADD_PKT(0x01a4, 10, ZC_CHANGESTATE_PET(sock));
		ADD_PKT(0x009c, 2, ZC_CHANGE_DIRECTION(sock));
		ADD_PKT(0x00b6, 4, ZC_CLOSE_CoreLog(sock));
		ADD_PKT(0x0144, 5, ZC_COMPASS(sock));
		ADD_PKT(0x00ec, -1, ZC_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01ea, 8, ZC_CONGRATULATION(sock));
		ADD_PKT(0x0141, -1, ZC_COUPLESTATUS(sock));
		ADD_PKT(0x020a, 4, ZC_DELETE_FRIENDS(sock));
		ADD_PKT(0x0125, 4, ZC_DELETE_ITEM_FROM_CART(sock));
		ADD_PKT(0x00f6, -1, ZC_DELETE_ITEM_FROM_STORE(sock));
		ADD_PKT(0x01cf, -1, ZC_DEVOTIONLIST(sock));
		ADD_PKT(0x0132, -1, ZC_DISAPPEAR_ENTRY(sock));
		ADD_PKT(0x00a4, 6, ZC_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0295, 14, ZC_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x00f0, -1, ZC_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x022f, -1, ZC_FEED_MER(sock));
		ADD_PKT(0x01a3, 10, ZC_FEED_PET(sock));
		ADD_PKT(0x0206, 8, ZC_FRIENDS_STATE(sock));
		ADD_PKT(0x0227, 9, ZC_GAME_GUARD(sock));
		ADD_PKT(0x0101, 10, ZC_GROUPINFO_CHANGE(sock));
		ADD_PKT(0x00fb, 8, ZC_GROUP_LIST(sock));
		ADD_PKT(0x017f, 30, ZC_GUILD_CHAT(sock));
		ADD_PKT(0x01b6, -1, ZC_GUILD_INFO2(sock));
		ADD_PKT(0x016f, 11, ZC_GUILD_NOTICE(sock));
		ADD_PKT(0x0162, 7, ZC_GUILD_SKILLINFO(sock));
		ADD_PKT(0x02f5, 10, ZC_IRMAIL_NOTIFY(sock));
		ADD_PKT(0x02f4, -1, ZC_IRMAIL_SEND_RES(sock));
		ADD_PKT(0x0177, 3, ZC_ITEMIDENTIFY_LIST(sock));
		ADD_PKT(0x009d, 6, ZC_ITEM_ENTRY(sock));
		ADD_PKT(0x009e, 3, ZC_ITEM_FALL_ENTRY(sock));
		ADD_PKT(0x029a, -1, ZC_ITEM_PICKUP_ACK2(sock));
		ADD_PKT(0x00b1, 8, ZC_LONGPAR_CHANGE(sock));
		ADD_PKT(0x0154, 7, ZC_MEMBERMGR_INFO(sock));
		ADD_PKT(0x00dd, -1, ZC_MEMBER_EXIT(sock));
		ADD_PKT(0x00b7, 6, ZC_MENU_LIST(sock));
		ADD_PKT(0x018c, 26, ZC_MONSTER_INFO(sock));
		ADD_PKT(0x0196, 5, ZC_MSG_STATE_CHANGE(sock));
		ADD_PKT(0x010b, 14, ZC_MVP_GETTING_SPECIAL_EXP(sock));
		ADD_PKT(0x014c, -1, ZC_MYGUILD_BASIC_INFO(sock));
		ADD_PKT(0x00a3, 6, ZC_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x008a, 10, ZC_NOTIFY_ACT(sock));
		ADD_PKT(0x02e1, -1, ZC_NOTIFY_ACT2(sock));
		ADD_PKT(0x008d, -1, ZC_NOTIFY_CHAT(sock));
		ADD_PKT(0x0109, 17, ZC_NOTIFY_CHAT_PARTY(sock));
		ADD_PKT(0x019b, 8, ZC_NOTIFY_EFFECT(sock));
		ADD_PKT(0x0106, -1, ZC_NOTIFY_HP_TO_GROUPM(sock));
		ADD_PKT(0x0075, -1, ZC_NOTIFY_INITCHAR(sock));
		ADD_PKT(0x0199, 4, ZC_NOTIFY_MAPPROPERTY(sock));
		ADD_PKT(0x01d6, 28, ZC_NOTIFY_MAPPROPERTY2(sock));
		ADD_PKT(0x0086, 7, ZC_NOTIFY_MOVE(sock));
		ADD_PKT(0x007b, 27, ZC_NOTIFY_MOVEENTRY(sock));
		ADD_PKT(0x01da, 3, ZC_NOTIFY_MOVEENTRY2(sock));
		ADD_PKT(0x022c, 15, ZC_NOTIFY_MOVEENTRY3(sock));
		ADD_PKT(0x0079, 3, ZC_NOTIFY_NEWENTRY(sock));
		ADD_PKT(0x02ed, 17, ZC_NOTIFY_NEWENTRY4(sock));
		ADD_PKT(0x008e, -1, ZC_NOTIFY_PLAYERCHAT(sock));
		ADD_PKT(0x0087, 60, ZC_NOTIFY_PLAYERMOVE(sock));
		ADD_PKT(0x0107, -1, ZC_NOTIFY_POSITION_TO_GROUPM(sock));
		ADD_PKT(0x01eb, -1, ZC_NOTIFY_POSITION_TO_GUILDM(sock));
		ADD_PKT(0x019a, -1, ZC_NOTIFY_RANKING(sock));
		ADD_PKT(0x01de, 2, ZC_NOTIFY_SKILL2(sock));
		ADD_PKT(0x02ee, -1, ZC_NOTIFY_STANDENTRY4(sock));
		ADD_PKT(0x007c, -1, ZC_NOTIFY_STANDENTRY_NPC(sock));
		ADD_PKT(0x0077, 3, ZC_NOTIFY_UPDATEPLAYER(sock));
		ADD_PKT(0x0080, 27, ZC_NOTIFY_VANISH(sock));
		ADD_PKT(0x0093, 6, ZC_NPCACK_ENABLE(sock));
		ADD_PKT(0x0092, -1, ZC_NPCACK_SERVERMOVE(sock));
		ADD_PKT(0x01d4, -1, ZC_OPEN_EDITDLGSTR(sock));
		ADD_PKT(0x0287, -1, ZC_PC_CASH_POINT_ITEMLIST(sock));
		ADD_PKT(0x00ca, -1, ZC_PC_PURCHASE_RESULT(sock));
		ADD_PKT(0x0135, 114, ZC_PC_PURCHASE_RESULT_FROMMC(sock));
		ADD_PKT(0x00c7, 6, ZC_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x01a6, 14, ZC_PETEGG_LIST(sock));
		ADD_PKT(0x01aa, 2, ZC_PET_ACT(sock));
		ADD_PKT(0x0166, -1, ZC_POSITION_ID_NAME_INFO(sock));
		ADD_PKT(0x0160, 102, ZC_POSITION_INFO(sock));
		ADD_PKT(0x022e, -1, ZC_PROPERTY_HOMUN(sock));
		ADD_PKT(0x01a2, 26, ZC_PROPERTY_PET(sock));
		ADD_PKT(0x013d, -1, ZC_RECOVERY(sock));
		ADD_PKT(0x00da, 90, ZC_REFUSE_ENTER_ROOM(sock));
		ADD_PKT(0x01fc, 3, ZC_REPAIRITEMLIST(sock));
		ADD_PKT(0x0207, 30, ZC_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x0171, -1, ZC_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x00e5, 23, ZC_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f4, -1, ZC_REQ_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x00fe, 10, ZC_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x00ac, 59, ZC_REQ_TAKEOFF_EQUIP_ACK(sock));
		ADD_PKT(0x00aa, 39, ZC_REQ_WEAR_EQUIP_ACK(sock));
		ADD_PKT(0x00b3, 30, ZC_RESTART_ACK(sock));
		ADD_PKT(0x0148, 4, ZC_RESURRECTION(sock));
		ADD_PKT(0x00e1, -1, ZC_ROLE_CHANGE(sock));
		ADD_PKT(0x00d7, -1, ZC_ROOM_NEWENTRY(sock));
		ADD_PKT(0x00c4, 26, ZC_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00d1, 9, ZC_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d2, 15, ZC_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x01b3, -1, ZC_SHOW_IMAGE2(sock));
		ADD_PKT(0x010f, 4, ZC_SKILLINFO_LIST(sock));
		ADD_PKT(0x0120, -1, ZC_SKILL_DISAPPEAR(sock));
		ADD_PKT(0x011f, -1, ZC_SKILL_ENTRY(sock));
		ADD_PKT(0x01e1, 19, ZC_SPIRITS2(sock));
		ADD_PKT(0x0119, -1, ZC_STATE_CHANGE(sock));
		ADD_PKT(0x00bd, 3, ZC_STATUS(sock));
		ADD_PKT(0x00be, 19, ZC_STATUS_CHANGE(sock));
		ADD_PKT(0x0088, 60, ZC_STOPMOVE(sock));
		ADD_PKT(0x0296, 14, ZC_STORE_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x00a5, 2, ZC_STORE_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01f0, -1, ZC_STORE_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x0224, 6, ZC_TAEKWON_POINT(sock));
		ADD_PKT(0x01f2, -1, ZC_UPDATE_CHARSTAT2(sock));
		ADD_PKT(0x013e, 30, ZC_USESKILL_ACK(sock));
		ADD_PKT(0x00a8, 10, ZC_USE_ITEM_ACK(sock));
		ADD_PKT(0x011a, 58, ZC_USE_SKILL(sock));
		ADD_PKT(0x00b5, 71, ZC_WAIT_CoreLog(sock));
		ADD_PKT(0x011c, 3, ZC_WARPLIST(sock));
#undef ADD_PKT
	}

	~ShufflePacketLengthTable() { }

};
}
}
}
#endif /* HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080924 */
