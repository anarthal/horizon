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

d:add(0x00e6, -1, require('CZ_ACK_EXCHANGE_ITEM'))
d:add(0x0208, 2, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00c5, 30, require('CZ_ACK_SELECT_DEALTYPE'))
d:add(0x0202, 2, require('CZ_ADD_FRIENDS'))
d:add(0x0218, 33, require('CZ_ALCHEMIST_RANK'))
d:add(0x0172, 14, require('CZ_ALLY_GUILD'))
d:add(0x0217, -1, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, 5, require('CZ_BROADCAST'))
d:add(0x00ed, -1, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, 18, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 57, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, 81, require('CZ_CHANGE_DIRECTION2'))
d:add(0x0102, -1, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x01ed, -1, require('CZ_CHOPOKGI'))
d:add(0x0146, -1, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, 4, require('CZ_COMMAND_MER'))
d:add(0x01a1, 14, require('CZ_COMMAND_PET'))
d:add(0x00d5, 10, require('CZ_CREATE_CHATROOM'))
d:add(0x0203, 282, require('CZ_DELETE_FRIENDS'))
d:add(0x00ce, 8, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x01e7, 21, require('CZ_DORIDORI'))
d:add(0x00ef, -1, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, -1, require('CZ_EXIT_ROOM'))
d:add(0x017e, 26, require('CZ_GUILD_CHAT'))
d:add(0x0143, 6, require('CZ_INPUT_EDITDLG'))
d:add(0x02f3, 2, require('CZ_IRMAIL_SEND'))
d:add(0x013f, -1, require('CZ_ITEM_CREATE'))
d:add(0x0362, -1, require('CZ_ITEM_PICKUP2'))
d:add(0x00ff, 14, require('CZ_JOIN_GROUP'))
d:add(0x016b, -1, require('CZ_JOIN_GUILD'))
d:add(0x0237, 6, require('CZ_KILLER_RANK'))
d:add(0x019c, -1, require('CZ_LOCALBROADCAST'))
d:add(0x00f9, -1, require('CZ_MAKE_GROUP'))
d:add(0x01e8, 59, require('CZ_MAKE_GROUP2'))
d:add(0x0140, -1, require('CZ_MOVETO_MAP'))
d:add(0x0126, -1, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0127, 2, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0128, 27, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x00c8, 20, require('CZ_PC_PURCHASE_ITEMLIST'))
d:add(0x0134, -1, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00c9, 29, require('CZ_PC_SELL_ITEMLIST'))
d:add(0x01bc, -1, require('CZ_RECALL'))
d:add(0x0161, 39, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, 9, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, 42, require('CZ_REMOVE_AID'))
d:add(0x018e, 30, require('CZ_REQMAKINGITEM'))
d:add(0x0368, -1, require('CZ_REQNAME2'))
d:add(0x0369, -1, require('CZ_REQNAME_BYGID2'))
d:add(0x0233, -1, require('CZ_REQUEST_ACTNPC'))
d:add(0x0108, 12, require('CZ_REQUEST_CHAT_PARTY'))
d:add(0x035f, 282, require('CZ_REQUEST_MOVE2'))
d:add(0x0232, 2, require('CZ_REQUEST_MOVENPC'))
d:add(0x0234, 58, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0360, 4, require('CZ_REQUEST_TIME2'))
d:add(0x0170, 17, require('CZ_REQ_ALLY_GUILD'))
d:add(0x0130, 55, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012e, -1, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, -1, require('CZ_REQ_DISCONNECT'))
d:add(0x00bf, -1, require('CZ_REQ_EMOTION'))
d:add(0x00d9, 26, require('CZ_REQ_ENTER_ROOM'))
d:add(0x0103, 2, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x00e2, 6, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x014f, -1, require('CZ_REQ_GUILD_MENU'))
d:add(0x014d, -1, require('CZ_REQ_GUILD_MENUINTERFACE'))
d:add(0x017a, 22, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0178, 8, require('CZ_REQ_ITEMIDENTIFY'))
d:add(0x01fd, 7, require('CZ_REQ_ITEMREPAIR'))
d:add(0x00fc, 3, require('CZ_REQ_JOIN_GROUP'))
d:add(0x0168, 2, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0159, -1, require('CZ_REQ_LEAVE_GUILD'))
d:add(0x00b9, 22, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x00ab, 8, require('CZ_REQ_TAKEOFF_EQUIP'))
d:add(0x00a9, -1, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, 7, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, 3, require('CZ_RESTART'))
d:add(0x01a7, -1, require('CZ_SELECT_PETEGG'))
d:add(0x011b, 6, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, 7, require('CZ_SETTING_WHISPER_PC'))
d:add(0x00d0, -1, require('CZ_SETTING_WHISPER_STATE'))
d:add(0x01bb, 10, require('CZ_SHIFT'))
d:add(0x00bb, -1, require('CZ_STATUS_CHANGE'))
d:add(0x0225, 6, require('CZ_TAEKWON_RANK'))
d:add(0x019f, -1, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x00ea, -1, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, 27, require('ZC_ACK_BAN_GUILD'))
d:add(0x015e, -1, require('ZC_ACK_DISORGANIZE_GUILD_RESULT'))
d:add(0x00e7, 2, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x01f5, -1, require('ZC_ACK_EXCHANGE_ITEM2'))
d:add(0x017d, 97, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 2, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x015a, -1, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x011e, 12, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x018f, -1, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, -1, require('ZC_ACK_REQNAME'))
d:add(0x0195, 182, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, 15, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x018b, -1, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x0169, -1, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0110, -1, require('ZC_ACK_TOUSESKILL'))
d:add(0x0098, 19, require('ZC_ACK_WHISPER'))
d:add(0x013b, 65, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, 4, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, 5, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x0124, -1, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x01c5, 11, require('ZC_ADD_ITEM_TO_CART2'))
d:add(0x00f4, 6, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01c4, 34, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x0104, 30, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x0111, -1, require('ZC_ADD_SKILL'))
d:add(0x021c, 4, require('ZC_ALCHEMIST_POINT'))
d:add(0x0139, 26, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x013a, 43, require('ZC_ATTACK_RANGE'))
d:add(0x0147, -1, require('ZC_AUTORUN_SKILL'))
d:add(0x0163, 71, require('ZC_BAN_LIST'))
d:add(0x021b, 22, require('ZC_BLACKSMITH_POINT'))
d:add(0x0219, -1, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, -1, require('ZC_BROADCAST'))
d:add(0x01c3, 26, require('ZC_BROADCAST2'))
d:add(0x00ee, 8, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0123, -1, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01ef, -1, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, -1, require('ZC_CHANGESTATE_MER'))
d:add(0x01a4, 16, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, -1, require('ZC_CHANGE_CHATROOM'))
d:add(0x00b6, 6, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, 10, require('ZC_CLOSE_STORE'))
d:add(0x01d2, 28, require('ZC_COMBODELAY'))
d:add(0x0144, 3, require('ZC_COMPASS'))
d:add(0x00ec, 30, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 2, require('ZC_CONGRATULATION'))
d:add(0x0141, 10, require('ZC_COUPLESTATUS'))
d:add(0x0137, 6, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, 6, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, 4, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x00f6, 2, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x0105, -1, require('ZC_DELETE_MEMBER_FROM_GROUP'))
d:add(0x00d8, -1, require('ZC_DESTROY_ROOM'))
d:add(0x01cf, 7, require('ZC_DEVOTIONLIST'))
d:add(0x0132, 5, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x00c0, 6, require('ZC_EMOTION'))
d:add(0x00db, 23, require('ZC_ENTER_ROOM'))
d:add(0x00a4, 21, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x013c, -1, require('ZC_EQUIP_ARROW'))
d:add(0x00f0, 11, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x022f, -1, require('ZC_FEED_MER'))
d:add(0x01a3, 15, require('ZC_FEED_PET'))
d:add(0x0206, -1, require('ZC_FRIENDS_STATE'))
d:add(0x00fb, 4, require('ZC_GROUP_LIST'))
d:add(0x017f, 282, require('ZC_GUILD_CHAT'))
d:add(0x0235, -1, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, 6, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, -1, require('ZC_IRMAIL_NOTIFY'))
d:add(0x0177, 3, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x00a1, -1, require('ZC_ITEM_DISAPPEAR'))
d:add(0x009d, -1, require('ZC_ITEM_ENTRY'))
d:add(0x00af, 28, require('ZC_ITEM_THROW_ACK'))
d:add(0x0238, -1, require('ZC_KILLER_RANK'))
d:add(0x00b1, 30, require('ZC_LONGPAR_CHANGE'))
d:add(0x018d, 6, require('ZC_MAKABLEITEMLIST'))
d:add(0x0154, -1, require('ZC_MEMBERMGR_INFO'))
d:add(0x00dd, -1, require('ZC_MEMBER_EXIT'))
d:add(0x00dc, 5, require('ZC_MEMBER_NEWENTRY'))
d:add(0x018c, -1, require('ZC_MONSTER_INFO'))
d:add(0x010c, 6, require('ZC_MVP'))
d:add(0x010a, -1, require('ZC_MVP_GETTING_ITEM'))
d:add(0x010b, 4, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, 35, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x00a3, -1, require('ZC_NORMAL_ITEMLIST'))
d:add(0x008a, 10, require('ZC_NOTIFY_ACT'))
d:add(0x02e1, 102, require('ZC_NOTIFY_ACT2'))
d:add(0x0121, 2, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x008d, -1, require('ZC_NOTIFY_CHAT'))
d:add(0x019b, 8, require('ZC_NOTIFY_EFFECT'))
d:add(0x0117, 6, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, 29, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, -1, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0189, 7, require('ZC_NOTIFY_MAPINFO'))
d:add(0x01d6, -1, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x0086, 3, require('ZC_NOTIFY_MOVE'))
d:add(0x007b, 2, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, 8, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, 2, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x02ec, 29, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x0079, 10, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x008e, 54, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0087, 90, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x0107, 282, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x01eb, -1, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x019a, -1, require('ZC_NOTIFY_RANKING'))
d:add(0x0114, -1, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, -1, require('ZC_NOTIFY_SKILL2'))
d:add(0x01d8, -1, require('ZC_NOTIFY_STANDENTRY2'))
d:add(0x022a, 66, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x007f, -1, require('ZC_NOTIFY_TIME'))
d:add(0x0077, 2, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, 3, require('ZC_NPCACK_ENABLE'))
d:add(0x0091, -1, require('ZC_NPCACK_MAPMOVE'))
d:add(0x0092, 13, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x01b0, 53, require('ZC_NPCSPRITE_CHANGE'))
d:add(0x012d, 3, require('ZC_OPENSTORE'))
d:add(0x0142, 8, require('ZC_OPEN_EDITDLG'))
d:add(0x00b0, -1, require('ZC_PAR_CHANGE'))
d:add(0x01ab, -1, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, -1, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, 11, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0133, 5, require('ZC_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00c7, -1, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x01a6, 6, require('ZC_PETEGG_LIST'))
d:add(0x0166, 2, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x0160, -1, require('ZC_POSITION_INFO'))
d:add(0x022e, 4, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, 30, require('ZC_PROPERTY_PET'))
d:add(0x013d, 6, require('ZC_RECOVERY'))
d:add(0x00da, 3, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x0207, 6, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x00fe, 28, require('ZC_REQ_JOIN_GROUP'))
d:add(0x016a, -1, require('ZC_REQ_JOIN_GUILD'))
d:add(0x00ac, 44, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00aa, -1, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x00b3, -1, require('ZC_RESTART_ACK'))
d:add(0x023c, 3, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x0148, 54, require('ZC_RESURRECTION'))
d:add(0x00e1, -1, require('ZC_ROLE_CHANGE'))
d:add(0x00d7, 10, require('ZC_ROOM_NEWENTRY'))
d:add(0x00b4, 30, require('ZC_SAY_DIALOG'))
d:add(0x00c4, 7, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d2, 30, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x010e, -1, require('ZC_SKILLINFO_UPDATE'))
d:add(0x01c9, 6, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, -1, require('ZC_SKILL_UPDATE'))
d:add(0x01d7, 6, require('ZC_SPRITE_CHANGE2'))
d:add(0x020e, -1, require('ZC_STARSKILL'))
d:add(0x00be, 17, require('ZC_STATUS_CHANGE'))
d:add(0x00bc, 10, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, 26, require('ZC_STOPMOVE'))
d:add(0x0131, 26, require('ZC_STORE_ENTRY'))
d:add(0x00a5, 6, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x01f0, 4, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 11, require('ZC_TAEKWON_POINT'))
d:add(0x0226, -1, require('ZC_TAEKWON_RANK'))
d:add(0x01a0, 10, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x01f2, 9, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, 18, require('ZC_UPDATE_GDID'))
d:add(0x013e, -1, require('ZC_USESKILL_ACK'))
d:add(0x01c8, -1, require('ZC_USE_ITEM_ACK2'))
d:add(0x00b5, 11, require('ZC_WAIT_DIALOG'))
d:add(0x011c, 7, require('ZC_WARPLIST'))
d:add(0x0097, 23, require('ZC_WHISPER'))

return d
