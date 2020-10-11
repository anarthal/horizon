-----------------------------------------------------
--       _   _            _                        --
--      | | | |          (_)                       --
--      | |_| | ___  _ __ _ _______  _ __          --
--      |  _  |/ _ \| '__| |_  / _ \| '_  \        --
--      | | | | (_) | |  | |/ / (_) | | | |        --
--      \_| |_/\___/|_|  |_/___\___/|_| |_|        --
-----------------------------------------------------
-- This file is part of Horizon (c).
-- Copyright (c) 2019 Horizon Dev Team.
--
-- Base Author - Sagun Khosla. (sagunxp@gmail.com)
--
-- This library is free software; you can redistribute it and/or modify
-- it under the terms of the GNU General Public License as published by
-- the Free Software Foundation, either version 3 of the License, or
-- (at your option) any later version.
--
-- This library is distributed in the hope that it will be useful,
-- but WITHOUT ANY WARRANTY; without even the implied warranty of
-- MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
-- GNU General Public License for more details.
--
-- You should have received a copy of the GNU General Public License
-- along with this library.  If not, see <http://www.gnu.org/licenses/>.
-----------------------------------------------------

local d = require('default_packets_ragexe')

d:add(0x0208, -1, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00c5, 4, require('CZ_ACK_SELECT_DEALTYPE'))
d:add(0x0202, -1, require('CZ_ADD_FRIENDS'))
d:add(0x0218, 4, require('CZ_ALCHEMIST_RANK'))
d:add(0x0172, -1, require('CZ_ALLY_GUILD'))
d:add(0x0217, 7, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, -1, require('CZ_BROADCAST'))
d:add(0x00ed, 8, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, -1, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 34, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, -1, require('CZ_CHANGE_DIRECTION2'))
d:add(0x019d, 2, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x00b8, 14, require('CZ_CHOOSE_MENU'))
d:add(0x01ed, 2, require('CZ_CHOPOKGI'))
d:add(0x022d, -1, require('CZ_COMMAND_MER'))
d:add(0x01a1, 30, require('CZ_COMMAND_PET'))
d:add(0x00eb, 22, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, 3, require('CZ_CONTACTNPC'))
d:add(0x00d5, -1, require('CZ_CREATE_CHATROOM'))
d:add(0x0203, -1, require('CZ_DELETE_FRIENDS'))
d:add(0x00ce, 2, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x00cc, 6, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x01e7, 26, require('CZ_DORIDORI'))
d:add(0x00ef, 6, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, 6, require('CZ_EXIT_ROOM'))
d:add(0x017e, -1, require('CZ_GUILD_CHAT'))
d:add(0x016e, 2, require('CZ_GUILD_NOTICE'))
d:add(0x0143, -1, require('CZ_INPUT_EDITDLG'))
d:add(0x02f6, 4, require('CZ_IRMAIL_LIST'))
d:add(0x02f3, 10, require('CZ_IRMAIL_SEND'))
d:add(0x0362, 7, require('CZ_ITEM_PICKUP2'))
d:add(0x0363, 2, require('CZ_ITEM_THROW2'))
d:add(0x00ff, 15, require('CZ_JOIN_GROUP'))
d:add(0x0237, 2, require('CZ_KILLER_RANK'))
d:add(0x00f9, 54, require('CZ_MAKE_GROUP'))
d:add(0x01e8, -1, require('CZ_MAKE_GROUP2'))
d:add(0x0140, 6, require('CZ_MOVETO_MAP'))
d:add(0x0127, -1, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0128, 31, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x00c8, -1, require('CZ_PC_PURCHASE_ITEMLIST'))
d:add(0x00c9, 8, require('CZ_PC_SELL_ITEMLIST'))
d:add(0x01bc, 16, require('CZ_RECALL'))
d:add(0x01bd, 6, require('CZ_RECALL_GID'))
d:add(0x0161, 14, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, -1, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, 2, require('CZ_REMOVE_AID'))
d:add(0x018e, 23, require('CZ_REQMAKINGITEM'))
d:add(0x0368, 16, require('CZ_REQNAME2'))
d:add(0x0108, -1, require('CZ_REQUEST_CHAT_PARTY'))
d:add(0x035f, -1, require('CZ_REQUEST_MOVE2'))
d:add(0x0232, -1, require('CZ_REQUEST_MOVENPC'))
d:add(0x0234, -1, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0360, 21, require('CZ_REQUEST_TIME2'))
d:add(0x0170, 6, require('CZ_REQ_ALLY_GUILD'))
d:add(0x015b, 15, require('CZ_REQ_BAN_GUILD'))
d:add(0x0130, -1, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, 2, require('CZ_REQ_CARTOFF'))
d:add(0x0155, 11, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x012e, 6, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, 14, require('CZ_REQ_DISCONNECT'))
d:add(0x00d9, -1, require('CZ_REQ_ENTER_ROOM'))
d:add(0x00e4, 4, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x0103, 36, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x00e2, 27, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x017c, 102, require('CZ_REQ_ITEMCOMPOSITION'))
d:add(0x017a, -1, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0178, 2, require('CZ_REQ_ITEMIDENTIFY'))
d:add(0x01fd, -1, require('CZ_REQ_ITEMREPAIR'))
d:add(0x00fc, 6, require('CZ_REQ_JOIN_GROUP'))
d:add(0x0168, -1, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0100, 6, require('CZ_REQ_LEAVE_GROUP'))
d:add(0x01ae, 35, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, -1, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x00ab, -1, require('CZ_REQ_TAKEOFF_EQUIP'))
d:add(0x00c1, 186, require('CZ_REQ_USER_COUNT'))
d:add(0x00a9, 3, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, 6, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, 30, require('CZ_RESTART'))
d:add(0x01a7, 6, require('CZ_SELECT_PETEGG'))
d:add(0x011b, 79, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, -1, require('CZ_SETTING_WHISPER_PC'))
d:add(0x00d0, 11, require('CZ_SETTING_WHISPER_STATE'))
d:add(0x01bb, -1, require('CZ_SHIFT'))
d:add(0x0225, -1, require('CZ_TAEKWON_RANK'))
d:add(0x0096, 6, require('CZ_WHISPER'))
d:add(0x00ea, 6, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, -1, require('ZC_ACK_BAN_GUILD'))
d:add(0x00d6, 2, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x00e7, 24, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x017d, -1, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 27, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x015a, 6, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x011e, -1, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x018f, 32, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, 28, require('ZC_ACK_REQNAME'))
d:add(0x0195, -1, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, 182, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x0169, 10, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0098, -1, require('ZC_ACK_WHISPER'))
d:add(0x013b, -1, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, 6, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, -1, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x0124, 6, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x01c5, -1, require('ZC_ADD_ITEM_TO_CART2'))
d:add(0x00f4, -1, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01c4, -1, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x0104, -1, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x01e9, 8, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x0111, 11, require('ZC_ADD_SKILL'))
d:add(0x021c, -1, require('ZC_ALCHEMIST_POINT'))
d:add(0x021a, 39, require('ZC_ALCHEMIST_RANK'))
d:add(0x0139, 7, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x013a, 14, require('ZC_ATTACK_RANGE'))
d:add(0x0147, 10, require('ZC_AUTORUN_SKILL'))
d:add(0x0163, 114, require('ZC_BAN_LIST'))
d:add(0x021b, -1, require('ZC_BLACKSMITH_POINT'))
d:add(0x01c3, -1, require('ZC_BROADCAST2'))
d:add(0x00ee, -1, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0122, 3, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, 86, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x01ef, 10, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x01a4, 8, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, 3, require('ZC_CHANGE_CHATROOM'))
d:add(0x00b6, 2, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, 30, require('ZC_CLOSE_STORE'))
d:add(0x01d2, 21, require('ZC_COMBODELAY'))
d:add(0x0144, -1, require('ZC_COMPASS'))
d:add(0x00ec, -1, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 33, require('ZC_CONGRATULATION'))
d:add(0x0141, 30, require('ZC_COUPLESTATUS'))
d:add(0x0137, 17, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, 3, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, -1, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x00f6, 11, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x01cf, 5, require('ZC_DEVOTIONLIST'))
d:add(0x0132, -1, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, -1, require('ZC_DISPEL'))
d:add(0x00c0, -1, require('ZC_EMOTION'))
d:add(0x00db, -1, require('ZC_ENTER_ROOM'))
d:add(0x00a4, 6, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x013c, 12, require('ZC_EQUIP_ARROW'))
d:add(0x00f0, 6, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x01a3, 28, require('ZC_FEED_PET'))
d:add(0x0206, 6, require('ZC_FRIENDS_STATE'))
d:add(0x00fb, -1, require('ZC_GROUP_LIST'))
d:add(0x017f, -1, require('ZC_GUILD_CHAT'))
d:add(0x01b6, 58, require('ZC_GUILD_INFO2'))
d:add(0x016f, 81, require('ZC_GUILD_NOTICE'))
d:add(0x0162, 44, require('ZC_GUILD_SKILLINFO'))
d:add(0x0235, 9, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, 3, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x017b, 8, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, -1, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x00af, -1, require('ZC_ITEM_THROW_ACK'))
d:add(0x00b1, -1, require('ZC_LONGPAR_CHANGE'))
d:add(0x018d, -1, require('ZC_MAKABLEITEMLIST'))
d:add(0x01ad, 10, require('ZC_MAKINGARROW_LIST'))
d:add(0x00dc, 10, require('ZC_MEMBER_NEWENTRY'))
d:add(0x010c, -1, require('ZC_MVP'))
d:add(0x010b, 33, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, -1, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x00a3, 10, require('ZC_NORMAL_ITEMLIST'))
d:add(0x01ee, 5, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x008a, -1, require('ZC_NOTIFY_ACT'))
d:add(0x02e1, -1, require('ZC_NOTIFY_ACT2'))
d:add(0x008d, 31, require('ZC_NOTIFY_CHAT'))
d:add(0x019b, -1, require('ZC_NOTIFY_EFFECT'))
d:add(0x0117, 30, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, 17, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, 26, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0189, 10, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0086, -1, require('ZC_NOTIFY_MOVE'))
d:add(0x007b, 13, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, -1, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, -1, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x02ec, 2, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x0079, -1, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x01d9, 13, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x022b, 4, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x02ed, 29, require('ZC_NOTIFY_NEWENTRY4'))
d:add(0x008e, 7, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0087, -1, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x0107, 59, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x019a, 6, require('ZC_NOTIFY_RANKING'))
d:add(0x0114, 6, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, 27, require('ZC_NOTIFY_SKILL2'))
d:add(0x022a, 26, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x02ee, 4, require('ZC_NOTIFY_STANDENTRY4'))
d:add(0x00f2, 29, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x007f, 10, require('ZC_NOTIFY_TIME'))
d:add(0x0077, 14, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, 5, require('ZC_NPCACK_ENABLE'))
d:add(0x0091, 10, require('ZC_NPCACK_MAPMOVE'))
d:add(0x0092, 7, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x01b0, -1, require('ZC_NPCSPRITE_CHANGE'))
d:add(0x012d, 26, require('ZC_OPENSTORE'))
d:add(0x0142, -1, require('ZC_OPEN_EDITDLG'))
d:add(0x00b0, 3, require('ZC_PAR_CHANGE'))
d:add(0x0287, 5, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, 18, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0133, 11, require('ZC_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x01a6, 22, require('ZC_PETEGG_LIST'))
d:add(0x0166, -1, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x0160, 9, require('ZC_POSITION_INFO'))
d:add(0x022e, -1, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, 60, require('ZC_PROPERTY_PET'))
d:add(0x013d, 26, require('ZC_RECOVERY'))
d:add(0x00da, 10, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x0207, 60, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x0171, 58, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, 8, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x00fe, 282, require('ZC_REQ_JOIN_GROUP'))
d:add(0x00ac, 20, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00aa, 71, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x0167, 282, require('ZC_RESULT_MAKE_GUILD'))
d:add(0x023c, -1, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x0148, 26, require('ZC_RESURRECTION'))
d:add(0x00d7, -1, require('ZC_ROOM_NEWENTRY'))
d:add(0x00c4, 6, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d1, 53, require('ZC_SETTING_WHISPER_PC'))
d:add(0x00d2, 6, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x010f, 4, require('ZC_SKILLINFO_LIST'))
d:add(0x010e, 26, require('ZC_SKILLINFO_UPDATE'))
d:add(0x0120, 4, require('ZC_SKILL_DISAPPEAR'))
d:add(0x01c9, 26, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, 2, require('ZC_SKILL_UPDATE'))
d:add(0x01e1, 4, require('ZC_SPIRITS2'))
d:add(0x020e, 3, require('ZC_STARSKILL'))
d:add(0x0119, -1, require('ZC_STATE_CHANGE'))
d:add(0x0229, 12, require('ZC_STATE_CHANGE3'))
d:add(0x00be, -1, require('ZC_STATUS_CHANGE'))
d:add(0x00bc, 53, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, 22, require('ZC_STOPMOVE'))
d:add(0x0131, -1, require('ZC_STORE_ENTRY'))
d:add(0x00a6, 22, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, 4, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x00a5, -1, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x01f0, -1, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, -1, require('ZC_TAEKWON_POINT'))
d:add(0x01a0, 5, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x016d, 20, require('ZC_UPDATE_CHARSTAT'))
d:add(0x01f2, 3, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, 7, require('ZC_UPDATE_GDID'))
d:add(0x013e, 32, require('ZC_USESKILL_ACK'))
d:add(0x01c8, 4, require('ZC_USE_ITEM_ACK2'))
d:add(0x00b5, 282, require('ZC_WAIT_DIALOG'))
d:add(0x011c, 39, require('ZC_WARPLIST'))
d:add(0x0097, -1, require('ZC_WHISPER'))

return d
