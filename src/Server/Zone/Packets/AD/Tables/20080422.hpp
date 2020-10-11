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

#ifndef HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080422
#define HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080422

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
		ADD_PKT(0x00e6, 3, CZ_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00c5, 7, CZ_ACK_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00e8, 8, CZ_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0202, 26, CZ_ADD_FRIENDS(sock));
		ADD_PKT(0x0218, 2, CZ_ALCHEMIST_RANK(sock));
		ADD_PKT(0x0172, 10, CZ_ALLY_GUILD(sock));
		ADD_PKT(0x0217, 2, CZ_BLACKSMITH_RANK(sock));
		ADD_PKT(0x00ed, 2, CZ_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0118, 2, CZ_CANCEL_LOCKON(sock));
		ADD_PKT(0x019d, 6, CZ_CHANGE_EFFECTSTATE(sock));
		ADD_PKT(0x0102, 6, CZ_CHANGE_GROUPEXPOPTION(sock));
		ADD_PKT(0x00b8, 7, CZ_CHOOSE_MENU(sock));
		ADD_PKT(0x01ed, 2, CZ_CHOPOKGI(sock));
		ADD_PKT(0x0146, 6, CZ_CLOSE_CoreLog(sock));
		ADD_PKT(0x022d, 5, CZ_COMMAND_MER(sock));
		ADD_PKT(0x01a1, 3, CZ_COMMAND_PET(sock));
		ADD_PKT(0x00eb, 2, CZ_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0090, 7, CZ_CONTACTNPC(sock));
		ADD_PKT(0x0203, 10, CZ_DELETE_FRIENDS(sock));
		ADD_PKT(0x00ce, 2, CZ_DISCONNECT_ALL_CHARACTER(sock));
		ADD_PKT(0x00cc, 6, CZ_DISCONNECT_CHARACTER(sock));
		ADD_PKT(0x01e7, 2, CZ_DORIDORI(sock));
		ADD_PKT(0x00ef, 2, CZ_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00e3, 2, CZ_EXIT_ROOM(sock));
		ADD_PKT(0x017e, -1, CZ_GUILD_CHAT(sock));
		ADD_PKT(0x016e, 186, CZ_GUILD_NOTICE(sock));
		ADD_PKT(0x0143, 10, CZ_INPUT_EDITDLG(sock));
		ADD_PKT(0x02f6, 5, CZ_IRMAIL_LIST(sock));
		ADD_PKT(0x02f3, 3, CZ_IRMAIL_SEND(sock));
		ADD_PKT(0x013f, 26, CZ_ITEM_CREATE(sock));
		ADD_PKT(0x00ff, 10, CZ_JOIN_GROUP(sock));
		ADD_PKT(0x016b, 10, CZ_JOIN_GUILD(sock));
		ADD_PKT(0x0237, 2, CZ_KILLER_RANK(sock));
		ADD_PKT(0x019c, -1, CZ_LOCALBROADCAST(sock));
		ADD_PKT(0x00f9, 26, CZ_MAKE_GROUP(sock));
		ADD_PKT(0x01e8, 28, CZ_MAKE_GROUP2(sock));
		ADD_PKT(0x0140, 22, CZ_MOVETO_MAP(sock));
		ADD_PKT(0x0126, 8, CZ_MOVE_ITEM_FROM_BODY_TO_CART(sock));
		ADD_PKT(0x0127, 8, CZ_MOVE_ITEM_FROM_CART_TO_BODY(sock));
		ADD_PKT(0x0129, 8, CZ_MOVE_ITEM_FROM_CART_TO_STORE(sock));
		ADD_PKT(0x0128, 8, CZ_MOVE_ITEM_FROM_STORE_TO_CART(sock));
		ADD_PKT(0x007d, 2, CZ_NOTIFY_ACTORINIT(sock));
		ADD_PKT(0x0134, -1, CZ_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x01bc, 26, CZ_RECALL(sock));
		ADD_PKT(0x01bd, 26, CZ_RECALL_GID(sock));
		ADD_PKT(0x0161, -1, CZ_REG_CHANGE_GUILD_POSITIONINFO(sock));
		ADD_PKT(0x011d, 2, CZ_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x018e, 10, CZ_REQMAKINGITEM(sock));
		ADD_PKT(0x0233, 11, CZ_REQUEST_ACTNPC(sock));
		ADD_PKT(0x0232, 9, CZ_REQUEST_MOVENPC(sock));
		ADD_PKT(0x0234, 6, CZ_REQUEST_MOVETOOWNER(sock));
		ADD_PKT(0x0170, 14, CZ_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x015b, 54, CZ_REQ_BAN_GUILD(sock));
		ADD_PKT(0x0130, 6, CZ_REQ_BUY_FROMMC(sock));
		ADD_PKT(0x012a, 2, CZ_REQ_CARTOFF(sock));
		ADD_PKT(0x0155, -1, CZ_REQ_CHANGE_MEMBERPOS(sock));
		ADD_PKT(0x012e, 2, CZ_REQ_CLOSESTORE(sock));
		ADD_PKT(0x018a, 4, CZ_REQ_DISCONNECT(sock));
		ADD_PKT(0x00bf, 3, CZ_REQ_EMOTION(sock));
		ADD_PKT(0x00d9, 14, CZ_REQ_ENTER_ROOM(sock));
		ADD_PKT(0x00e4, 6, CZ_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0103, 30, CZ_REQ_EXPEL_GROUP_MEMBER(sock));
		ADD_PKT(0x00e2, 26, CZ_REQ_EXPEL_MEMBER(sock));
		ADD_PKT(0x0149, 9, CZ_REQ_GIVE_MANNER_POINT(sock));
		ADD_PKT(0x014f, 6, CZ_REQ_GUILD_MENU(sock));
		ADD_PKT(0x014d, 2, CZ_REQ_GUILD_MENUINTERFACE(sock));
		ADD_PKT(0x017c, 6, CZ_REQ_ITEMCOMPOSITION(sock));
		ADD_PKT(0x01fd, 15, CZ_REQ_ITEMREPAIR(sock));
		ADD_PKT(0x00fc, 6, CZ_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x0168, 14, CZ_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0100, 2, CZ_REQ_LEAVE_GROUP(sock));
		ADD_PKT(0x0159, 54, CZ_REQ_LEAVE_GUILD(sock));
		ADD_PKT(0x0165, 30, CZ_REQ_MAKE_GUILD(sock));
		ADD_PKT(0x01ae, 4, CZ_REQ_MAKINGARROW(sock));
		ADD_PKT(0x00e0, 30, CZ_REQ_ROLE_CHANGE(sock));
		ADD_PKT(0x00ab, 4, CZ_REQ_TAKEOFF_EQUIP(sock));
		ADD_PKT(0x00c1, 2, CZ_REQ_USER_COUNT(sock));
		ADD_PKT(0x00a9, 6, CZ_REQ_WEAR_EQUIP(sock));
		ADD_PKT(0x00d3, 2, CZ_REQ_WHISPER_LIST(sock));
		ADD_PKT(0x00b2, 3, CZ_RESTART(sock));
		ADD_PKT(0x01ce, 6, CZ_SELECTAUTOSPELL(sock));
		ADD_PKT(0x01a7, 4, CZ_SELECT_PETEGG(sock));
		ADD_PKT(0x011b, 20, CZ_SELECT_WARPPOINT(sock));
		ADD_PKT(0x00cf, 27, CZ_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d0, 3, CZ_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x01bb, 26, CZ_SHIFT(sock));
		ADD_PKT(0x00bb, 5, CZ_STATUS_CHANGE(sock));
		ADD_PKT(0x0225, 2, CZ_TAEKWON_RANK(sock));
		ADD_PKT(0x019f, 6, CZ_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x0112, 4, CZ_UPGRADE_SKILLLEVEL(sock));
		ADD_PKT(0x0096, -1, CZ_WHISPER(sock));
		ADD_PKT(0x0073, 4, ZC_ACCEPT_ENTER(sock));
		ADD_PKT(0x0083, -1, ZC_ACCEPT_QUIT(sock));
		ADD_PKT(0x012c, 8, ZC_ACK_ADDITEM_TO_CART(sock));
		ADD_PKT(0x00ea, -1, ZC_ACK_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00d6, 282, ZC_ACK_CREATE_CHATROOM(sock));
		ADD_PKT(0x015e, -1, ZC_ACK_DISORGANIZE_GUILD_RESULT(sock));
		ADD_PKT(0x00e7, 3, ZC_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f5, 11, ZC_ACK_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x017d, -1, ZC_ACK_ITEMCOMPOSITION(sock));
		ADD_PKT(0x0179, 55, ZC_ACK_ITEMIDENTIFY(sock));
		ADD_PKT(0x015a, 4, ZC_ACK_LEAVE_GUILD(sock));
		ADD_PKT(0x0274, 282, ZC_ACK_MAIL_RETURN(sock));
		ADD_PKT(0x00fa, -1, ZC_ACK_MAKE_GROUP(sock));
		ADD_PKT(0x011e, 282, ZC_ACK_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x018f, 10, ZC_ACK_REQMAKINGITEM(sock));
		ADD_PKT(0x0195, 66, ZC_ACK_REQNAMEALL(sock));
		ADD_PKT(0x0194, 8, ZC_ACK_REQNAME_BYGID(sock));
		ADD_PKT(0x0169, 3, ZC_ACK_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x013b, 15, ZC_ACTION_FAILURE(sock));
		ADD_PKT(0x00e9, -1, ZC_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0209, 18, ZC_ADD_FRIENDS_LIST(sock));
		ADD_PKT(0x0124, 71, ZC_ADD_ITEM_TO_CART(sock));
		ADD_PKT(0x01c5, 4, ZC_ADD_ITEM_TO_CART2(sock));
		ADD_PKT(0x00f4, 3, ZC_ADD_ITEM_TO_STORE(sock));
		ADD_PKT(0x01c4, 34, ZC_ADD_ITEM_TO_STORE2(sock));
		ADD_PKT(0x0104, 282, ZC_ADD_MEMBER_TO_GROUP(sock));
		ADD_PKT(0x01e9, 3, ZC_ADD_MEMBER_TO_GROUP2(sock));
		ADD_PKT(0x0111, 4, ZC_ADD_SKILL(sock));
		ADD_PKT(0x021c, 3, ZC_ALCHEMIST_POINT(sock));
		ADD_PKT(0x021a, 16, ZC_ALCHEMIST_RANK(sock));
		ADD_PKT(0x0139, 29, ZC_ATTACK_FAILURE_FOR_DISTANCE(sock));
		ADD_PKT(0x013a, -1, ZC_ATTACK_RANGE(sock));
		ADD_PKT(0x0147, -1, ZC_AUTORUN_SKILL(sock));
		ADD_PKT(0x01cd, 10, ZC_AUTOSPELLLIST(sock));
		ADD_PKT(0x0163, 86, ZC_BAN_LIST(sock));
		ADD_PKT(0x021b, 44, ZC_BLACKSMITH_POINT(sock));
		ADD_PKT(0x0219, -1, ZC_BLACKSMITH_RANK(sock));
		ADD_PKT(0x009a, -1, ZC_BROADCAST(sock));
		ADD_PKT(0x01c3, -1, ZC_BROADCAST2(sock));
		ADD_PKT(0x00ee, 3, ZC_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0122, -1, ZC_CART_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0297, 8, ZC_CART_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x01ef, 16, ZC_CART_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x01a4, 102, ZC_CHANGESTATE_PET(sock));
		ADD_PKT(0x00df, 12, ZC_CHANGE_CHATROOM(sock));
		ADD_PKT(0x009c, 10, ZC_CHANGE_DIRECTION(sock));
		ADD_PKT(0x00b6, 6, ZC_CLOSE_CoreLog(sock));
		ADD_PKT(0x00f8, -1, ZC_CLOSE_STORE(sock));
		ADD_PKT(0x00ec, 10, ZC_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01ea, -1, ZC_CONGRATULATION(sock));
		ADD_PKT(0x0141, -1, ZC_COUPLESTATUS(sock));
		ADD_PKT(0x0137, 30, ZC_DELETEITEM_FROM_MCSTORE(sock));
		ADD_PKT(0x020a, -1, ZC_DELETE_FRIENDS(sock));
		ADD_PKT(0x0125, 32, ZC_DELETE_ITEM_FROM_CART(sock));
		ADD_PKT(0x00f6, -1, ZC_DELETE_ITEM_FROM_STORE(sock));
		ADD_PKT(0x00d8, -1, ZC_DESTROY_ROOM(sock));
		ADD_PKT(0x0132, -1, ZC_DISAPPEAR_ENTRY(sock));
		ADD_PKT(0x01b9, 7, ZC_DISPEL(sock));
		ADD_PKT(0x00c0, 9, ZC_EMOTION(sock));
		ADD_PKT(0x00db, 67, ZC_ENTER_ROOM(sock));
		ADD_PKT(0x00a4, 60, ZC_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0295, 53, ZC_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x013c, 33, ZC_EQUIP_ARROW(sock));
		ADD_PKT(0x00f0, 30, ZC_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x022f, 7, ZC_FEED_MER(sock));
		ADD_PKT(0x01a3, 30, ZC_FEED_PET(sock));
		ADD_PKT(0x0201, 68, ZC_FRIENDS_LIST(sock));
		ADD_PKT(0x0206, 7, ZC_FRIENDS_STATE(sock));
		ADD_PKT(0x0227, 8, ZC_GAME_GUARD(sock));
		ADD_PKT(0x0101, 5, ZC_GROUPINFO_CHANGE(sock));
		ADD_PKT(0x01b6, 23, ZC_GUILD_INFO2(sock));
		ADD_PKT(0x016f, -1, ZC_GUILD_NOTICE(sock));
		ADD_PKT(0x0162, 13, ZC_GUILD_SKILLINFO(sock));
		ADD_PKT(0x0235, -1, ZC_HOSKILLINFO_LIST(sock));
		ADD_PKT(0x0239, 5, ZC_HOSKILLINFO_UPDATE(sock));
		ADD_PKT(0x02f5, -1, ZC_IRMAIL_NOTIFY(sock));
		ADD_PKT(0x02f4, 6, ZC_IRMAIL_SEND_RES(sock));
		ADD_PKT(0x0177, 28, ZC_ITEMIDENTIFY_LIST(sock));
		ADD_PKT(0x00a1, -1, ZC_ITEM_DISAPPEAR(sock));
		ADD_PKT(0x009d, 6, ZC_ITEM_ENTRY(sock));
		ADD_PKT(0x009e, 11, ZC_ITEM_FALL_ENTRY(sock));
		ADD_PKT(0x00a0, 8, ZC_ITEM_PICKUP_ACK(sock));
		ADD_PKT(0x029a, 11, ZC_ITEM_PICKUP_ACK2(sock));
		ADD_PKT(0x00af, -1, ZC_ITEM_THROW_ACK(sock));
		ADD_PKT(0x00b1, -1, ZC_LONGPAR_CHANGE(sock));
		ADD_PKT(0x018d, 59, ZC_MAKABLEITEMLIST(sock));
		ADD_PKT(0x01ad, 6, ZC_MAKINGARROW_LIST(sock));
		ADD_PKT(0x0154, -1, ZC_MEMBERMGR_INFO(sock));
		ADD_PKT(0x00dd, 28, ZC_MEMBER_EXIT(sock));
		ADD_PKT(0x00dc, 32, ZC_MEMBER_NEWENTRY(sock));
		ADD_PKT(0x00b7, -1, ZC_MENU_LIST(sock));
		ADD_PKT(0x0196, 31, ZC_MSG_STATE_CHANGE(sock));
		ADD_PKT(0x010c, 26, ZC_MVP(sock));
		ADD_PKT(0x010b, -1, ZC_MVP_GETTING_SPECIAL_EXP(sock));
		ADD_PKT(0x00a3, 16, ZC_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x008a, 6, ZC_NOTIFY_ACT(sock));
		ADD_PKT(0x008d, -1, ZC_NOTIFY_CHAT(sock));
		ADD_PKT(0x0109, -1, ZC_NOTIFY_CHAT_PARTY(sock));
		ADD_PKT(0x0117, -1, ZC_NOTIFY_GROUNDSKILL(sock));
		ADD_PKT(0x0106, 29, ZC_NOTIFY_HP_TO_GROUPM(sock));
		ADD_PKT(0x0075, 6, ZC_NOTIFY_INITCHAR(sock));
		ADD_PKT(0x01d6, -1, ZC_NOTIFY_MAPPROPERTY2(sock));
		ADD_PKT(0x0086, 24, ZC_NOTIFY_MOVE(sock));
		ADD_PKT(0x01da, 2, ZC_NOTIFY_MOVEENTRY2(sock));
		ADD_PKT(0x022c, 33, ZC_NOTIFY_MOVEENTRY3(sock));
		ADD_PKT(0x02ec, 60, ZC_NOTIFY_MOVEENTRY4(sock));
		ADD_PKT(0x0079, 14, ZC_NOTIFY_NEWENTRY(sock));
		ADD_PKT(0x01d9, 6, ZC_NOTIFY_NEWENTRY2(sock));
		ADD_PKT(0x02ed, 30, ZC_NOTIFY_NEWENTRY4(sock));
		ADD_PKT(0x008e, 3, ZC_NOTIFY_PLAYERCHAT(sock));
		ADD_PKT(0x0087, 6, ZC_NOTIFY_PLAYERMOVE(sock));
		ADD_PKT(0x01eb, 30, ZC_NOTIFY_POSITION_TO_GUILDM(sock));
		ADD_PKT(0x01de, -1, ZC_NOTIFY_SKILL2(sock));
		ADD_PKT(0x022a, 23, ZC_NOTIFY_STANDENTRY3(sock));
		ADD_PKT(0x02ee, 97, ZC_NOTIFY_STANDENTRY4(sock));
		ADD_PKT(0x007c, 65, ZC_NOTIFY_STANDENTRY_NPC(sock));
		ADD_PKT(0x00f2, 31, ZC_NOTIFY_STOREITEM_COUNTINFO(sock));
		ADD_PKT(0x007f, -1, ZC_NOTIFY_TIME(sock));
		ADD_PKT(0x0077, -1, ZC_NOTIFY_UPDATEPLAYER(sock));
		ADD_PKT(0x0080, -1, ZC_NOTIFY_VANISH(sock));
		ADD_PKT(0x0093, 6, ZC_NPCACK_ENABLE(sock));
		ADD_PKT(0x0091, -1, ZC_NPCACK_MAPMOVE(sock));
		ADD_PKT(0x0092, 6, ZC_NPCACK_SERVERMOVE(sock));
		ADD_PKT(0x01b0, 21, ZC_NPCSPRITE_CHANGE(sock));
		ADD_PKT(0x012d, 81, ZC_OPENSTORE(sock));
		ADD_PKT(0x0142, -1, ZC_OPEN_EDITDLG(sock));
		ADD_PKT(0x00b0, 28, ZC_PAR_CHANGE(sock));
		ADD_PKT(0x01ab, -1, ZC_PAR_CHANGE_USER(sock));
		ADD_PKT(0x0287, -1, ZC_PC_CASH_POINT_ITEMLIST(sock));
		ADD_PKT(0x00c6, 4, ZC_PC_PURCHASE_ITEMLIST(sock));
		ADD_PKT(0x0133, 14, ZC_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x00ca, 6, ZC_PC_PURCHASE_RESULT(sock));
		ADD_PKT(0x0135, 4, ZC_PC_PURCHASE_RESULT_FROMMC(sock));
		ADD_PKT(0x00c7, 53, ZC_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x01a6, -1, ZC_PETEGG_LIST(sock));
		ADD_PKT(0x01aa, -1, ZC_PET_ACT(sock));
		ADD_PKT(0x022e, 7, ZC_PROPERTY_HOMUN(sock));
		ADD_PKT(0x01a2, 30, ZC_PROPERTY_PET(sock));
		ADD_PKT(0x013d, -1, ZC_RECOVERY(sock));
		ADD_PKT(0x00da, -1, ZC_REFUSE_ENTER_ROOM(sock));
		ADD_PKT(0x01fc, -1, ZC_REPAIRITEMLIST(sock));
		ADD_PKT(0x0207, 2, ZC_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x00e5, 5, ZC_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f4, 22, ZC_REQ_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x00fe, 30, ZC_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x016a, 22, ZC_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x023a, -1, ZC_REQ_STORE_PASSWORD(sock));
		ADD_PKT(0x00aa, 9, ZC_REQ_WEAR_EQUIP_ACK(sock));
		ADD_PKT(0x00b3, -1, ZC_RESTART_ACK(sock));
		ADD_PKT(0x0167, 42, ZC_RESULT_MAKE_GUILD(sock));
		ADD_PKT(0x023c, -1, ZC_RESULT_STORE_PASSWORD(sock));
		ADD_PKT(0x0148, 2, ZC_RESURRECTION(sock));
		ADD_PKT(0x00e1, 43, ZC_ROLE_CHANGE(sock));
		ADD_PKT(0x00b4, 6, ZC_SAY_CoreLog(sock));
		ADD_PKT(0x00c4, 6, ZC_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00d1, -1, ZC_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d2, 10, ZC_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x01b3, -1, ZC_SHOW_IMAGE2(sock));
		ADD_PKT(0x010f, -1, ZC_SKILLINFO_LIST(sock));
		ADD_PKT(0x0120, 4, ZC_SKILL_DISAPPEAR(sock));
		ADD_PKT(0x011f, 12, ZC_SKILL_ENTRY(sock));
		ADD_PKT(0x01ac, 3, ZC_SKILL_UPDATE(sock));
		ADD_PKT(0x01d0, -1, ZC_SPIRITS(sock));
		ADD_PKT(0x01e1, 6, ZC_SPIRITS2(sock));
		ADD_PKT(0x0229, 3, ZC_STATE_CHANGE3(sock));
		ADD_PKT(0x00bd, -1, ZC_STATUS(sock));
		ADD_PKT(0x00be, 4, ZC_STATUS_CHANGE(sock));
		ADD_PKT(0x00bc, 2, ZC_STATUS_CHANGE_ACK(sock));
		ADD_PKT(0x0088, 3, ZC_STOPMOVE(sock));
		ADD_PKT(0x0131, 8, ZC_STORE_ENTRY(sock));
		ADD_PKT(0x0296, -1, ZC_STORE_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x01f0, -1, ZC_STORE_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x0224, 8, ZC_TAEKWON_POINT(sock));
		ADD_PKT(0x0226, -1, ZC_TAEKWON_RANK(sock));
		ADD_PKT(0x016d, -1, ZC_UPDATE_CHARSTAT(sock));
		ADD_PKT(0x01f2, 20, ZC_UPDATE_CHARSTAT2(sock));
		ADD_PKT(0x016c, 10, ZC_UPDATE_GDID(sock));
		ADD_PKT(0x00c2, 4, ZC_USER_COUNT(sock));
		ADD_PKT(0x013e, 7, ZC_USESKILL_ACK(sock));
		ADD_PKT(0x00a8, 13, ZC_USE_ITEM_ACK(sock));
		ADD_PKT(0x00b5, 19, ZC_WAIT_CoreLog(sock));
		ADD_PKT(0x011c, -1, ZC_WARPLIST(sock));
		ADD_PKT(0x0097, 29, ZC_WHISPER(sock));
#undef ADD_PKT
	}

	~ShufflePacketLengthTable() { }

};
}
}
}
#endif /* HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080422 */
