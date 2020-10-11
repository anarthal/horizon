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

#ifndef HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080415
#define HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080415

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
		ADD_PKT(0x0208, -1, CZ_ACK_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x00e8, 6, CZ_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0202, -1, CZ_ADD_FRIENDS(sock));
		ADD_PKT(0x0172, 2, CZ_ALLY_GUILD(sock));
		ADD_PKT(0x0217, 8, CZ_BLACKSMITH_RANK(sock));
		ADD_PKT(0x00ed, 3, CZ_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00de, -1, CZ_CHANGE_CHATROOM(sock));
		ADD_PKT(0x019d, 18, CZ_CHANGE_EFFECTSTATE(sock));
		ADD_PKT(0x0102, 81, CZ_CHANGE_GROUPEXPOPTION(sock));
		ADD_PKT(0x00b8, 11, CZ_CHOOSE_MENU(sock));
		ADD_PKT(0x01ed, 3, CZ_CHOPOKGI(sock));
		ADD_PKT(0x01a1, 28, CZ_COMMAND_PET(sock));
		ADD_PKT(0x00eb, 5, CZ_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0090, 36, CZ_CONTACTNPC(sock));
		ADD_PKT(0x00d5, -1, CZ_CREATE_CHATROOM(sock));
		ADD_PKT(0x00ce, 10, CZ_DISCONNECT_ALL_CHARACTER(sock));
		ADD_PKT(0x00cc, 2, CZ_DISCONNECT_CHARACTER(sock));
		ADD_PKT(0x01e7, -1, CZ_DORIDORI(sock));
		ADD_PKT(0x00e3, 8, CZ_EXIT_ROOM(sock));
		ADD_PKT(0x017e, 14, CZ_GUILD_CHAT(sock));
		ADD_PKT(0x016e, 42, CZ_GUILD_NOTICE(sock));
		ADD_PKT(0x0143, 2, CZ_INPUT_EDITDLG(sock));
		ADD_PKT(0x02f6, 2, CZ_IRMAIL_LIST(sock));
		ADD_PKT(0x02f3, 67, CZ_IRMAIL_SEND(sock));
		ADD_PKT(0x013f, -1, CZ_ITEM_CREATE(sock));
		ADD_PKT(0x016b, 4, CZ_JOIN_GUILD(sock));
		ADD_PKT(0x0237, -1, CZ_KILLER_RANK(sock));
		ADD_PKT(0x019c, 8, CZ_LOCALBROADCAST(sock));
		ADD_PKT(0x00f9, 13, CZ_MAKE_GROUP(sock));
		ADD_PKT(0x01e8, -1, CZ_MAKE_GROUP2(sock));
		ADD_PKT(0x0140, 7, CZ_MOVETO_MAP(sock));
		ADD_PKT(0x0126, 4, CZ_MOVE_ITEM_FROM_BODY_TO_CART(sock));
		ADD_PKT(0x0127, -1, CZ_MOVE_ITEM_FROM_CART_TO_BODY(sock));
		ADD_PKT(0x0129, 60, CZ_MOVE_ITEM_FROM_CART_TO_STORE(sock));
		ADD_PKT(0x0128, 22, CZ_MOVE_ITEM_FROM_STORE_TO_CART(sock));
		ADD_PKT(0x007d, 30, CZ_NOTIFY_ACTORINIT(sock));
		ADD_PKT(0x0134, 71, CZ_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x01bc, -1, CZ_RECALL(sock));
		ADD_PKT(0x01bd, -1, CZ_RECALL_GID(sock));
		ADD_PKT(0x0161, 15, CZ_REG_CHANGE_GUILD_POSITIONINFO(sock));
		ADD_PKT(0x011d, 6, CZ_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x01ba, 26, CZ_REMOVE_AID(sock));
		ADD_PKT(0x018e, -1, CZ_REQMAKINGITEM(sock));
		ADD_PKT(0x0233, 10, CZ_REQUEST_ACTNPC(sock));
		ADD_PKT(0x0108, -1, CZ_REQUEST_CHAT_PARTY(sock));
		ADD_PKT(0x0232, 10, CZ_REQUEST_MOVENPC(sock));
		ADD_PKT(0x0234, -1, CZ_REQUEST_MOVETOOWNER(sock));
		ADD_PKT(0x0170, 26, CZ_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x015b, 97, CZ_REQ_BAN_GUILD(sock));
		ADD_PKT(0x0130, 2, CZ_REQ_BUY_FROMMC(sock));
		ADD_PKT(0x012a, 3, CZ_REQ_CARTOFF(sock));
		ADD_PKT(0x012e, -1, CZ_REQ_CLOSESTORE(sock));
		ADD_PKT(0x018a, 2, CZ_REQ_DISCONNECT(sock));
		ADD_PKT(0x00e4, 13, CZ_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0103, -1, CZ_REQ_EXPEL_GROUP_MEMBER(sock));
		ADD_PKT(0x00e2, 282, CZ_REQ_EXPEL_MEMBER(sock));
		ADD_PKT(0x0149, 5, CZ_REQ_GIVE_MANNER_POINT(sock));
		ADD_PKT(0x014d, 6, CZ_REQ_GUILD_MENUINTERFACE(sock));
		ADD_PKT(0x017a, 4, CZ_REQ_ITEMCOMPOSITION_LIST(sock));
		ADD_PKT(0x0178, 4, CZ_REQ_ITEMIDENTIFY(sock));
		ADD_PKT(0x01fd, 54, CZ_REQ_ITEMREPAIR(sock));
		ADD_PKT(0x0168, 2, CZ_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0100, 17, CZ_REQ_LEAVE_GROUP(sock));
		ADD_PKT(0x0159, -1, CZ_REQ_LEAVE_GUILD(sock));
		ADD_PKT(0x0165, 10, CZ_REQ_MAKE_GUILD(sock));
		ADD_PKT(0x01ae, 6, CZ_REQ_MAKINGARROW(sock));
		ADD_PKT(0x00b9, 6, CZ_REQ_NEXT_SCRIPT(sock));
		ADD_PKT(0x00e0, 2, CZ_REQ_ROLE_CHANGE(sock));
		ADD_PKT(0x00ab, 7, CZ_REQ_TAKEOFF_EQUIP(sock));
		ADD_PKT(0x00c1, 57, CZ_REQ_USER_COUNT(sock));
		ADD_PKT(0x00a9, -1, CZ_REQ_WEAR_EQUIP(sock));
		ADD_PKT(0x00d3, 20, CZ_REQ_WHISPER_LIST(sock));
		ADD_PKT(0x00b2, 14, CZ_RESTART(sock));
		ADD_PKT(0x01a7, 18, CZ_SELECT_PETEGG(sock));
		ADD_PKT(0x011b, -1, CZ_SELECT_WARPPOINT(sock));
		ADD_PKT(0x00cf, -1, CZ_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d0, -1, CZ_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x01bb, -1, CZ_SHIFT(sock));
		ADD_PKT(0x00bb, 6, CZ_STATUS_CHANGE(sock));
		ADD_PKT(0x0225, 4, CZ_TAEKWON_RANK(sock));
		ADD_PKT(0x019f, 8, CZ_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x0096, 26, CZ_WHISPER(sock));
		ADD_PKT(0x0073, -1, ZC_ACCEPT_ENTER(sock));
		ADD_PKT(0x0083, 5, ZC_ACCEPT_QUIT(sock));
		ADD_PKT(0x012c, -1, ZC_ACK_ADDITEM_TO_CART(sock));
		ADD_PKT(0x00ea, 4, ZC_ACK_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x015c, 8, ZC_ACK_BAN_GUILD(sock));
		ADD_PKT(0x00d6, 21, ZC_ACK_CREATE_CHATROOM(sock));
		ADD_PKT(0x015e, 32, ZC_ACK_DISORGANIZE_GUILD_RESULT(sock));
		ADD_PKT(0x00e7, -1, ZC_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f5, 4, ZC_ACK_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x017d, 11, ZC_ACK_ITEMCOMPOSITION(sock));
		ADD_PKT(0x0179, 4, ZC_ACK_ITEMIDENTIFY(sock));
		ADD_PKT(0x0188, -1, ZC_ACK_ITEMREFINING(sock));
		ADD_PKT(0x01fe, -1, ZC_ACK_ITEMREPAIR(sock));
		ADD_PKT(0x015a, -1, ZC_ACK_LEAVE_GUILD(sock));
		ADD_PKT(0x0274, 6, ZC_ACK_MAIL_RETURN(sock));
		ADD_PKT(0x00fa, 15, ZC_ACK_MAKE_GROUP(sock));
		ADD_PKT(0x011e, 30, ZC_ACK_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x018f, 30, ZC_ACK_REQMAKINGITEM(sock));
		ADD_PKT(0x0195, 2, ZC_ACK_REQNAMEALL(sock));
		ADD_PKT(0x0194, 11, ZC_ACK_REQNAME_BYGID(sock));
		ADD_PKT(0x00fd, -1, ZC_ACK_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x013b, 7, ZC_ACTION_FAILURE(sock));
		ADD_PKT(0x00e9, 7, ZC_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0209, -1, ZC_ADD_FRIENDS_LIST(sock));
		ADD_PKT(0x0124, 22, ZC_ADD_ITEM_TO_CART(sock));
		ADD_PKT(0x01c5, -1, ZC_ADD_ITEM_TO_CART2(sock));
		ADD_PKT(0x00f4, -1, ZC_ADD_ITEM_TO_STORE(sock));
		ADD_PKT(0x01c4, 11, ZC_ADD_ITEM_TO_STORE2(sock));
		ADD_PKT(0x0104, 12, ZC_ADD_MEMBER_TO_GROUP(sock));
		ADD_PKT(0x01e9, 2, ZC_ADD_MEMBER_TO_GROUP2(sock));
		ADD_PKT(0x0111, -1, ZC_ADD_SKILL(sock));
		ADD_PKT(0x021c, 5, ZC_ALCHEMIST_POINT(sock));
		ADD_PKT(0x0139, -1, ZC_ATTACK_FAILURE_FOR_DISTANCE(sock));
		ADD_PKT(0x013a, 6, ZC_ATTACK_RANGE(sock));
		ADD_PKT(0x0147, 8, ZC_AUTORUN_SKILL(sock));
		ADD_PKT(0x01cd, -1, ZC_AUTOSPELLLIST(sock));
		ADD_PKT(0x0163, 6, ZC_BAN_LIST(sock));
		ADD_PKT(0x021b, -1, ZC_BLACKSMITH_POINT(sock));
		ADD_PKT(0x0219, 9, ZC_BLACKSMITH_RANK(sock));
		ADD_PKT(0x009a, 33, ZC_BROADCAST(sock));
		ADD_PKT(0x01c3, 30, ZC_BROADCAST2(sock));
		ADD_PKT(0x00ee, 30, ZC_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0122, 186, ZC_CART_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0123, -1, ZC_CART_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01ef, 3, ZC_CART_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x0230, -1, ZC_CHANGESTATE_MER(sock));
		ADD_PKT(0x01a4, -1, ZC_CHANGESTATE_PET(sock));
		ADD_PKT(0x00df, -1, ZC_CHANGE_CHATROOM(sock));
		ADD_PKT(0x009c, 66, ZC_CHANGE_DIRECTION(sock));
		ADD_PKT(0x00b6, 3, ZC_CLOSE_CoreLog(sock));
		ADD_PKT(0x00f8, 6, ZC_CLOSE_STORE(sock));
		ADD_PKT(0x01d2, -1, ZC_COMBODELAY(sock));
		ADD_PKT(0x0144, -1, ZC_COMPASS(sock));
		ADD_PKT(0x00ec, 14, ZC_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01ea, 282, ZC_CONGRATULATION(sock));
		ADD_PKT(0x0141, 7, ZC_COUPLESTATUS(sock));
		ADD_PKT(0x0137, 27, ZC_DELETEITEM_FROM_MCSTORE(sock));
		ADD_PKT(0x020a, 6, ZC_DELETE_FRIENDS(sock));
		ADD_PKT(0x0125, 29, ZC_DELETE_ITEM_FROM_CART(sock));
		ADD_PKT(0x00f6, 4, ZC_DELETE_ITEM_FROM_STORE(sock));
		ADD_PKT(0x00d8, 9, ZC_DESTROY_ROOM(sock));
		ADD_PKT(0x01cf, -1, ZC_DEVOTIONLIST(sock));
		ADD_PKT(0x01b9, -1, ZC_DISPEL(sock));
		ADD_PKT(0x00c0, -1, ZC_EMOTION(sock));
		ADD_PKT(0x00db, 33, ZC_ENTER_ROOM(sock));
		ADD_PKT(0x00a4, 22, ZC_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0295, -1, ZC_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x013c, 8, ZC_EQUIP_ARROW(sock));
		ADD_PKT(0x00f0, 2, ZC_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x022f, 3, ZC_FEED_MER(sock));
		ADD_PKT(0x01a3, 3, ZC_FEED_PET(sock));
		ADD_PKT(0x0201, 58, ZC_FRIENDS_LIST(sock));
		ADD_PKT(0x0206, 4, ZC_FRIENDS_STATE(sock));
		ADD_PKT(0x0227, 2, ZC_GAME_GUARD(sock));
		ADD_PKT(0x0101, -1, ZC_GROUPINFO_CHANGE(sock));
		ADD_PKT(0x017f, -1, ZC_GUILD_CHAT(sock));
		ADD_PKT(0x016f, 6, ZC_GUILD_NOTICE(sock));
		ADD_PKT(0x0162, -1, ZC_GUILD_SKILLINFO(sock));
		ADD_PKT(0x0235, 28, ZC_HOSKILLINFO_LIST(sock));
		ADD_PKT(0x0239, 10, ZC_HOSKILLINFO_UPDATE(sock));
		ADD_PKT(0x02f5, 60, ZC_IRMAIL_NOTIFY(sock));
		ADD_PKT(0x017b, 6, ZC_ITEMCOMPOSITION_LIST(sock));
		ADD_PKT(0x0177, 114, ZC_ITEMIDENTIFY_LIST(sock));
		ADD_PKT(0x00a1, 16, ZC_ITEM_DISAPPEAR(sock));
		ADD_PKT(0x009d, 32, ZC_ITEM_ENTRY(sock));
		ADD_PKT(0x009e, 9, ZC_ITEM_FALL_ENTRY(sock));
		ADD_PKT(0x0238, -1, ZC_KILLER_RANK(sock));
		ADD_PKT(0x00b1, 26, ZC_LONGPAR_CHANGE(sock));
		ADD_PKT(0x018d, 79, ZC_MAKABLEITEMLIST(sock));
		ADD_PKT(0x01ad, 26, ZC_MAKINGARROW_LIST(sock));
		ADD_PKT(0x0154, 6, ZC_MEMBERMGR_INFO(sock));
		ADD_PKT(0x00dd, -1, ZC_MEMBER_EXIT(sock));
		ADD_PKT(0x00dc, 6, ZC_MEMBER_NEWENTRY(sock));
		ADD_PKT(0x00b7, 5, ZC_MENU_LIST(sock));
		ADD_PKT(0x0196, 30, ZC_MSG_STATE_CHANGE(sock));
		ADD_PKT(0x010a, 6, ZC_MVP_GETTING_ITEM(sock));
		ADD_PKT(0x010b, 6, ZC_MVP_GETTING_SPECIAL_EXP(sock));
		ADD_PKT(0x014c, -1, ZC_MYGUILD_BASIC_INFO(sock));
		ADD_PKT(0x00a3, -1, ZC_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x0121, 6, ZC_NOTIFY_CARTITEM_COUNTINFO(sock));
		ADD_PKT(0x008d, 2, ZC_NOTIFY_CHAT(sock));
		ADD_PKT(0x0109, 102, ZC_NOTIFY_CHAT_PARTY(sock));
		ADD_PKT(0x019b, -1, ZC_NOTIFY_EFFECT(sock));
		ADD_PKT(0x0117, 29, ZC_NOTIFY_GROUNDSKILL(sock));
		ADD_PKT(0x0106, 282, ZC_NOTIFY_HP_TO_GROUPM(sock));
		ADD_PKT(0x0189, -1, ZC_NOTIFY_MAPINFO(sock));
		ADD_PKT(0x0199, -1, ZC_NOTIFY_MAPPROPERTY(sock));
		ADD_PKT(0x01d6, 4, ZC_NOTIFY_MAPPROPERTY2(sock));
		ADD_PKT(0x0086, 8, ZC_NOTIFY_MOVE(sock));
		ADD_PKT(0x007b, -1, ZC_NOTIFY_MOVEENTRY(sock));
		ADD_PKT(0x01da, 6, ZC_NOTIFY_MOVEENTRY2(sock));
		ADD_PKT(0x022c, 6, ZC_NOTIFY_MOVEENTRY3(sock));
		ADD_PKT(0x02ec, 3, ZC_NOTIFY_MOVEENTRY4(sock));
		ADD_PKT(0x0079, -1, ZC_NOTIFY_NEWENTRY(sock));
		ADD_PKT(0x01d9, 26, ZC_NOTIFY_NEWENTRY2(sock));
		ADD_PKT(0x022b, -1, ZC_NOTIFY_NEWENTRY3(sock));
		ADD_PKT(0x02ed, 53, ZC_NOTIFY_NEWENTRY4(sock));
		ADD_PKT(0x008e, 2, ZC_NOTIFY_PLAYERCHAT(sock));
		ADD_PKT(0x0087, 14, ZC_NOTIFY_PLAYERMOVE(sock));
		ADD_PKT(0x01eb, 9, ZC_NOTIFY_POSITION_TO_GUILDM(sock));
		ADD_PKT(0x019a, -1, ZC_NOTIFY_RANKING(sock));
		ADD_PKT(0x01de, 30, ZC_NOTIFY_SKILL2(sock));
		ADD_PKT(0x0078, -1, ZC_NOTIFY_STANDENTRY(sock));
		ADD_PKT(0x01d8, -1, ZC_NOTIFY_STANDENTRY2(sock));
		ADD_PKT(0x022a, 3, ZC_NOTIFY_STANDENTRY3(sock));
		ADD_PKT(0x02ee, 60, ZC_NOTIFY_STANDENTRY4(sock));
		ADD_PKT(0x007c, 8, ZC_NOTIFY_STANDENTRY_NPC(sock));
		ADD_PKT(0x00f2, 10, ZC_NOTIFY_STOREITEM_COUNTINFO(sock));
		ADD_PKT(0x007f, 7, ZC_NOTIFY_TIME(sock));
		ADD_PKT(0x0077, 4, ZC_NOTIFY_UPDATEPLAYER(sock));
		ADD_PKT(0x0080, 5, ZC_NOTIFY_VANISH(sock));
		ADD_PKT(0x0093, 3, ZC_NPCACK_ENABLE(sock));
		ADD_PKT(0x0091, 182, ZC_NPCACK_MAPMOVE(sock));
		ADD_PKT(0x0092, -1, ZC_NPCACK_SERVERMOVE(sock));
		ADD_PKT(0x01b0, -1, ZC_NPCSPRITE_CHANGE(sock));
		ADD_PKT(0x012d, -1, ZC_OPENSTORE(sock));
		ADD_PKT(0x00b0, 12, ZC_PAR_CHANGE(sock));
		ADD_PKT(0x01ab, 35, ZC_PAR_CHANGE_USER(sock));
		ADD_PKT(0x0287, 31, ZC_PC_CASH_POINT_ITEMLIST(sock));
		ADD_PKT(0x0133, -1, ZC_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x00ca, 17, ZC_PC_PURCHASE_RESULT(sock));
		ADD_PKT(0x0135, 2, ZC_PC_PURCHASE_RESULT_FROMMC(sock));
		ADD_PKT(0x00c7, 6, ZC_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x01a6, 6, ZC_PETEGG_LIST(sock));
		ADD_PKT(0x01aa, 8, ZC_PET_ACT(sock));
		ADD_PKT(0x0166, -1, ZC_POSITION_ID_NAME_INFO(sock));
		ADD_PKT(0x022e, 30, ZC_PROPERTY_HOMUN(sock));
		ADD_PKT(0x01a2, 68, ZC_PROPERTY_PET(sock));
		ADD_PKT(0x013d, 26, ZC_RECOVERY(sock));
		ADD_PKT(0x00da, 6, ZC_REFUSE_ENTER_ROOM(sock));
		ADD_PKT(0x01fc, 10, ZC_REPAIRITEMLIST(sock));
		ADD_PKT(0x0171, -1, ZC_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x00e5, 3, ZC_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f4, 6, ZC_REQ_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x00fe, -1, ZC_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x016a, -1, ZC_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x023a, 2, ZC_REQ_STORE_PASSWORD(sock));
		ADD_PKT(0x00ac, 6, ZC_REQ_TAKEOFF_EQUIP_ACK(sock));
		ADD_PKT(0x00aa, 3, ZC_REQ_WEAR_EQUIP_ACK(sock));
		ADD_PKT(0x00b3, 6, ZC_RESTART_ACK(sock));
		ADD_PKT(0x0167, 7, ZC_RESULT_MAKE_GUILD(sock));
		ADD_PKT(0x023c, 10, ZC_RESULT_STORE_PASSWORD(sock));
		ADD_PKT(0x0148, 39, ZC_RESURRECTION(sock));
		ADD_PKT(0x00e1, -1, ZC_ROLE_CHANGE(sock));
		ADD_PKT(0x00b4, -1, ZC_SAY_CoreLog(sock));
		ADD_PKT(0x00c4, 11, ZC_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00d1, 43, ZC_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d2, 8, ZC_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x01b3, 22, ZC_SHOW_IMAGE2(sock));
		ADD_PKT(0x010f, 4, ZC_SKILLINFO_LIST(sock));
		ADD_PKT(0x010e, -1, ZC_SKILLINFO_UPDATE(sock));
		ADD_PKT(0x011f, 2, ZC_SKILL_ENTRY(sock));
		ADD_PKT(0x01c9, 58, ZC_SKILL_ENTRY2(sock));
		ADD_PKT(0x01ac, -1, ZC_SKILL_UPDATE(sock));
		ADD_PKT(0x01d0, 2, ZC_SPIRITS(sock));
		ADD_PKT(0x01e1, 8, ZC_SPIRITS2(sock));
		ADD_PKT(0x00c3, -1, ZC_SPRITE_CHANGE(sock));
		ADD_PKT(0x020e, 4, ZC_STARSKILL(sock));
		ADD_PKT(0x0119, -1, ZC_STATE_CHANGE(sock));
		ADD_PKT(0x0229, 7, ZC_STATE_CHANGE3(sock));
		ADD_PKT(0x00bd, 6, ZC_STATUS(sock));
		ADD_PKT(0x00be, -1, ZC_STATUS_CHANGE(sock));
		ADD_PKT(0x00bc, 44, ZC_STATUS_CHANGE_ACK(sock));
		ADD_PKT(0x0088, 86, ZC_STOPMOVE(sock));
		ADD_PKT(0x0131, 3, ZC_STORE_ENTRY(sock));
		ADD_PKT(0x00a6, -1, ZC_STORE_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0296, 28, ZC_STORE_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x00a5, -1, ZC_STORE_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01f0, 53, ZC_STORE_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x0224, 27, ZC_TAEKWON_POINT(sock));
		ADD_PKT(0x0226, 2, ZC_TAEKWON_RANK(sock));
		ADD_PKT(0x016d, 4, ZC_UPDATE_CHARSTAT(sock));
		ADD_PKT(0x01f2, 8, ZC_UPDATE_CHARSTAT2(sock));
		ADD_PKT(0x00c2, 5, ZC_USER_COUNT(sock));
		ADD_PKT(0x01c8, -1, ZC_USE_ITEM_ACK2(sock));
		ADD_PKT(0x00b5, 14, ZC_WAIT_CoreLog(sock));
		ADD_PKT(0x011c, 31, ZC_WARPLIST(sock));
		ADD_PKT(0x0097, 16, ZC_WHISPER(sock));
#undef ADD_PKT
	}

	~ShufflePacketLengthTable() { }

};
}
}
}
#endif /* HORIZON_ZONE_SHUFFLE_PACKET_LENGTH_TABLE_20080415 */
