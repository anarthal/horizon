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
d:add(0x00e8, 58, require('CZ_ADD_EXCHANGE_ITEM'))
d:add(0x0202, -1, require('CZ_ADD_FRIENDS'))
d:add(0x0218, 6, require('CZ_ALCHEMIST_RANK'))
d:add(0x0172, -1, require('CZ_ALLY_GUILD'))
d:add(0x0217, 24, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, 2, require('CZ_BROADCAST'))
d:add(0x00ed, 6, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x00de, 32, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, 86, require('CZ_CHANGE_DIRECTION2'))
d:add(0x0102, 8, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x0146, 6, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, 8, require('CZ_COMMAND_MER'))
d:add(0x00eb, -1, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, 44, require('CZ_CONTACTNPC'))
d:add(0x0203, 67, require('CZ_DELETE_FRIENDS'))
d:add(0x00ce, -1, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x00cc, -1, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x00ef, 43, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x017e, -1, require('CZ_GUILD_CHAT'))
d:add(0x016e, -1, require('CZ_GUILD_NOTICE'))
d:add(0x0143, 26, require('CZ_INPUT_EDITDLG'))
d:add(0x02f3, 27, require('CZ_IRMAIL_SEND'))
d:add(0x013f, 53, require('CZ_ITEM_CREATE'))
d:add(0x0362, 26, require('CZ_ITEM_PICKUP2'))
d:add(0x0363, 30, require('CZ_ITEM_THROW2'))
d:add(0x00ff, -1, require('CZ_JOIN_GROUP'))
d:add(0x016b, -1, require('CZ_JOIN_GUILD'))
d:add(0x0237, 19, require('CZ_KILLER_RANK'))
d:add(0x019c, 8, require('CZ_LOCALBROADCAST'))
d:add(0x00f9, 39, require('CZ_MAKE_GROUP'))
d:add(0x01e8, -1, require('CZ_MAKE_GROUP2'))
d:add(0x0140, -1, require('CZ_MOVETO_MAP'))
d:add(0x0126, 14, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0364, -1, require('CZ_MOVE_ITEM_FROM_BODY_TO_STORE2'))
d:add(0x0127, 8, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0129, 6, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x0365, 54, require('CZ_MOVE_ITEM_FROM_STORE_TO_BODY2'))
d:add(0x00c8, -1, require('CZ_PC_PURCHASE_ITEMLIST'))
d:add(0x0134, -1, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00c9, 22, require('CZ_PC_SELL_ITEMLIST'))
d:add(0x01bd, 65, require('CZ_RECALL_GID'))
d:add(0x0161, -1, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, 32, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, 6, require('CZ_REMOVE_AID'))
d:add(0x0368, -1, require('CZ_REQNAME2'))
d:add(0x0369, 3, require('CZ_REQNAME_BYGID2'))
d:add(0x0437, 6, require('CZ_REQUEST_ACT2'))
d:add(0x0233, 6, require('CZ_REQUEST_ACTNPC'))
d:add(0x0234, 16, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0360, 6, require('CZ_REQUEST_TIME2'))
d:add(0x0170, 2, require('CZ_REQ_ALLY_GUILD'))
d:add(0x015b, 6, require('CZ_REQ_BAN_GUILD'))
d:add(0x0130, 7, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, 34, require('CZ_REQ_CARTOFF'))
d:add(0x0155, 26, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x018a, 10, require('CZ_REQ_DISCONNECT'))
d:add(0x00bf, 28, require('CZ_REQ_EMOTION'))
d:add(0x00d9, 3, require('CZ_REQ_ENTER_ROOM'))
d:add(0x00e4, -1, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x0103, 28, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x014f, 10, require('CZ_REQ_GUILD_MENU'))
d:add(0x014d, 13, require('CZ_REQ_GUILD_MENUINTERFACE'))
d:add(0x017c, -1, require('CZ_REQ_ITEMCOMPOSITION'))
d:add(0x017a, 29, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0168, -1, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0100, 5, require('CZ_REQ_LEAVE_GROUP'))
d:add(0x0165, -1, require('CZ_REQ_MAKE_GUILD'))
d:add(0x01ae, 6, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, -1, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x01b2, -1, require('CZ_REQ_OPENSTORE2'))
d:add(0x00e0, 33, require('CZ_REQ_ROLE_CHANGE'))
d:add(0x00ab, -1, require('CZ_REQ_TAKEOFF_EQUIP'))
d:add(0x00c1, -1, require('CZ_REQ_USER_COUNT'))
d:add(0x00d3, -1, require('CZ_REQ_WHISPER_LIST'))
d:add(0x01ce, 11, require('CZ_SELECTAUTOSPELL'))
d:add(0x01a7, -1, require('CZ_SELECT_PETEGG'))
d:add(0x011b, 4, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, 2, require('CZ_SETTING_WHISPER_PC'))
d:add(0x01bb, 12, require('CZ_SHIFT'))
d:add(0x00bb, 4, require('CZ_STATUS_CHANGE'))
d:add(0x0225, 10, require('CZ_TAEKWON_RANK'))
d:add(0x0112, 6, require('CZ_UPGRADE_SKILLLEVEL'))
d:add(0x0438, -1, require('CZ_USE_SKILL2'))
d:add(0x0367, 6, require('CZ_USE_SKILL_TOGROUND_WITHTALKBOX2'))
d:add(0x0096, 2, require('CZ_WHISPER'))
d:add(0x0083, 6, require('ZC_ACCEPT_QUIT'))
d:add(0x012c, 13, require('ZC_ACK_ADDITEM_TO_CART'))
d:add(0x00d6, 8, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x01f5, 54, require('ZC_ACK_EXCHANGE_ITEM2'))
d:add(0x017d, 11, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, -1, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x015a, 14, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x011e, 22, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x00fd, -1, require('ZC_ACK_REQ_JOIN_GROUP'))
d:add(0x0169, 6, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x013b, 5, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, 33, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, -1, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x0124, -1, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x01c4, -1, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x01e9, 79, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x021c, 2, require('ZC_ALCHEMIST_POINT'))
d:add(0x0139, 21, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x013a, 4, require('ZC_ATTACK_RANGE'))
d:add(0x0147, 114, require('ZC_AUTORUN_SKILL'))
d:add(0x01cd, 26, require('ZC_AUTOSPELLLIST'))
d:add(0x0163, -1, require('ZC_BAN_LIST'))
d:add(0x021b, -1, require('ZC_BLACKSMITH_POINT'))
d:add(0x0219, -1, require('ZC_BLACKSMITH_RANK'))
d:add(0x00ee, -1, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0122, -1, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, 59, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x01ef, 18, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, 15, require('ZC_CHANGESTATE_MER'))
d:add(0x01a4, 3, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, -1, require('ZC_CHANGE_CHATROOM'))
d:add(0x00b6, -1, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, -1, require('ZC_CLOSE_STORE'))
d:add(0x00ec, -1, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 3, require('ZC_CONGRATULATION'))
d:add(0x0141, 6, require('ZC_COUPLESTATUS'))
d:add(0x0137, 68, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x0125, 20, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x0105, -1, require('ZC_DELETE_MEMBER_FROM_GROUP'))
d:add(0x00d8, 42, require('ZC_DESTROY_ROOM'))
d:add(0x0132, 7, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, 26, require('ZC_DISPEL'))
d:add(0x013c, 7, require('ZC_EQUIP_ARROW'))
d:add(0x00f0, 31, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x01a3, 6, require('ZC_FEED_PET'))
d:add(0x0206, 3, require('ZC_FRIENDS_STATE'))
d:add(0x0227, -1, require('ZC_GAME_GUARD'))
d:add(0x00fb, 6, require('ZC_GROUP_LIST'))
d:add(0x01b6, 2, require('ZC_GUILD_INFO2'))
d:add(0x016f, -1, require('ZC_GUILD_NOTICE'))
d:add(0x0235, 21, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, 10, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f4, 6, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, 8, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, -1, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x009d, 3, require('ZC_ITEM_ENTRY'))
d:add(0x009e, -1, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x00a0, 2, require('ZC_ITEM_PICKUP_ACK'))
d:add(0x029a, -1, require('ZC_ITEM_PICKUP_ACK2'))
d:add(0x00af, 14, require('ZC_ITEM_THROW_ACK'))
d:add(0x0238, -1, require('ZC_KILLER_RANK'))
d:add(0x00b1, -1, require('ZC_LONGPAR_CHANGE'))
d:add(0x018d, 18, require('ZC_MAKABLEITEMLIST'))
d:add(0x01ad, 27, require('ZC_MAKINGARROW_LIST'))
d:add(0x0154, 10, require('ZC_MEMBERMGR_INFO'))
d:add(0x00b7, -1, require('ZC_MENU_LIST'))
d:add(0x018c, 3, require('ZC_MONSTER_INFO'))
d:add(0x0196, -1, require('ZC_MSG_STATE_CHANGE'))
d:add(0x010c, -1, require('ZC_MVP'))
d:add(0x010a, -1, require('ZC_MVP_GETTING_ITEM'))
d:add(0x010b, 14, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, -1, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x008a, 2, require('ZC_NOTIFY_ACT'))
d:add(0x02e1, 30, require('ZC_NOTIFY_ACT2'))
d:add(0x0121, 6, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x0109, -1, require('ZC_NOTIFY_CHAT_PARTY'))
d:add(0x019b, 11, require('ZC_NOTIFY_EFFECT'))
d:add(0x0106, 9, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0189, -1, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0199, 6, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x01d6, 2, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x007b, 5, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, -1, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, 5, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x02ec, 4, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x01d9, 22, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x02ed, 23, require('ZC_NOTIFY_NEWENTRY4'))
d:add(0x008e, -1, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0087, -1, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x0107, -1, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x01eb, -1, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x019a, -1, require('ZC_NOTIFY_RANKING'))
d:add(0x0114, 17, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, -1, require('ZC_NOTIFY_SKILL2'))
d:add(0x022a, 4, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x02ee, 20, require('ZC_NOTIFY_STANDENTRY4'))
d:add(0x007c, 5, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, 10, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x007f, -1, require('ZC_NOTIFY_TIME'))
d:add(0x0077, 7, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, 3, require('ZC_NPCACK_ENABLE'))
d:add(0x0092, -1, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x012d, -1, require('ZC_OPENSTORE'))
d:add(0x0142, 6, require('ZC_OPEN_EDITDLG'))
d:add(0x01d4, -1, require('ZC_OPEN_EDITDLGSTR'))
d:add(0x01ab, 57, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, -1, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, -1, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0133, -1, require('ZC_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00ca, 6, require('ZC_PC_PURCHASE_RESULT'))
d:add(0x0135, 282, require('ZC_PC_PURCHASE_RESULT_FROMMC'))
d:add(0x01a6, -1, require('ZC_PETEGG_LIST'))
d:add(0x0166, 4, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x0160, 8, require('ZC_POSITION_INFO'))
d:add(0x013d, -1, require('ZC_RECOVERY'))
d:add(0x00da, -1, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x01fc, 30, require('ZC_REPAIRITEMLIST'))
d:add(0x0207, 30, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x00fe, 29, require('ZC_REQ_JOIN_GROUP'))
d:add(0x016a, 3, require('ZC_REQ_JOIN_GUILD'))
d:add(0x023a, -1, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00aa, 4, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x00b3, -1, require('ZC_RESTART_ACK'))
d:add(0x0167, 6, require('ZC_RESULT_MAKE_GUILD'))
d:add(0x0148, 30, require('ZC_RESURRECTION'))
d:add(0x00d7, 23, require('ZC_ROOM_NEWENTRY'))
d:add(0x00b4, 7, require('ZC_SAY_DIALOG'))
d:add(0x010e, -1, require('ZC_SKILLINFO_UPDATE'))
d:add(0x0120, 10, require('ZC_SKILL_DISAPPEAR'))
d:add(0x01c9, 14, require('ZC_SKILL_ENTRY2'))
d:add(0x01d0, 36, require('ZC_SPIRITS'))
d:add(0x01d7, -1, require('ZC_SPRITE_CHANGE2'))
d:add(0x020e, 6, require('ZC_STARSKILL'))
d:add(0x00bd, 60, require('ZC_STATUS'))
d:add(0x00bc, 15, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, -1, require('ZC_STOPMOVE'))
d:add(0x00a6, -1, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, -1, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x01f0, -1, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 2, require('ZC_TAEKWON_POINT'))
d:add(0x01f2, 5, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x00c2, -1, require('ZC_USER_COUNT'))
d:add(0x013e, 10, require('ZC_USESKILL_ACK'))
d:add(0x00a8, -1, require('ZC_USE_ITEM_ACK'))
d:add(0x01c8, 10, require('ZC_USE_ITEM_ACK2'))
d:add(0x011a, -1, require('ZC_USE_SKILL'))
d:add(0x00b5, 2, require('ZC_WAIT_DIALOG'))
d:add(0x0097, 4, require('ZC_WHISPER'))

return d
