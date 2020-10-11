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

local d = require('default_packets_ad')

d:add(0x00e6, -1, require('CZ_ACK_EXCHANGE_ITEM'))
d:add(0x0208, 6, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00c5, 30, require('CZ_ACK_SELECT_DEALTYPE'))
d:add(0x00e8, 30, require('CZ_ADD_EXCHANGE_ITEM'))
d:add(0x0202, 6, require('CZ_ADD_FRIENDS'))
d:add(0x0218, 2, require('CZ_ALCHEMIST_RANK'))
d:add(0x0172, 14, require('CZ_ALLY_GUILD'))
d:add(0x0217, -1, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, 54, require('CZ_BROADCAST'))
d:add(0x00ed, 7, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, 14, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 6, require('CZ_CHANGE_CHATROOM'))
d:add(0x019d, 4, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x0102, 54, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x00b8, 5, require('CZ_CHOOSE_MENU'))
d:add(0x01ed, -1, require('CZ_CHOPOKGI'))
d:add(0x0146, 2, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, 11, require('CZ_COMMAND_MER'))
d:add(0x01a1, 7, require('CZ_COMMAND_PET'))
d:add(0x00eb, -1, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, 5, require('CZ_CONTACTNPC'))
d:add(0x00d5, -1, require('CZ_CREATE_CHATROOM'))
d:add(0x0203, 3, require('CZ_DELETE_FRIENDS'))
d:add(0x00ce, 10, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x00cc, 6, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x01e7, 20, require('CZ_DORIDORI'))
d:add(0x00ef, 10, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, 10, require('CZ_EXIT_ROOM'))
d:add(0x017e, 14, require('CZ_GUILD_CHAT'))
d:add(0x016e, 2, require('CZ_GUILD_NOTICE'))
d:add(0x0143, 28, require('CZ_INPUT_EDITDLG'))
d:add(0x01d5, 6, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f6, 4, require('CZ_IRMAIL_LIST'))
d:add(0x02f3, 2, require('CZ_IRMAIL_SEND'))
d:add(0x013f, 28, require('CZ_ITEM_CREATE'))
d:add(0x00ff, 2, require('CZ_JOIN_GROUP'))
d:add(0x016b, 27, require('CZ_JOIN_GUILD'))
d:add(0x0237, -1, require('CZ_KILLER_RANK'))
d:add(0x019c, 23, require('CZ_LOCALBROADCAST'))
d:add(0x00f9, -1, require('CZ_MAKE_GROUP'))
d:add(0x0140, 27, require('CZ_MOVETO_MAP'))
d:add(0x0126, 30, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0127, 6, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0129, 8, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x007d, 2, require('CZ_NOTIFY_ACTORINIT'))
d:add(0x00c8, -1, require('CZ_PC_PURCHASE_ITEMLIST'))
d:add(0x0134, 7, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x01bc, 26, require('CZ_RECALL'))
d:add(0x01bd, 21, require('CZ_RECALL_GID'))
d:add(0x0161, 282, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, 10, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, 81, require('CZ_REMOVE_AID'))
d:add(0x018e, -1, require('CZ_REQMAKINGITEM'))
d:add(0x0233, 6, require('CZ_REQUEST_ACTNPC'))
d:add(0x0108, 7, require('CZ_REQUEST_CHAT_PARTY'))
d:add(0x0232, 10, require('CZ_REQUEST_MOVENPC'))
d:add(0x0234, -1, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x015b, 2, require('CZ_REQ_BAN_GUILD'))
d:add(0x0130, 4, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, 3, require('CZ_REQ_CARTOFF'))
d:add(0x0155, 22, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x012e, 2, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, 6, require('CZ_REQ_DISCONNECT'))
d:add(0x00bf, 60, require('CZ_REQ_EMOTION'))
d:add(0x00d9, 6, require('CZ_REQ_ENTER_ROOM'))
d:add(0x00e4, -1, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x00e2, -1, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x0149, 2, require('CZ_REQ_GIVE_MANNER_POINT'))
d:add(0x014f, 4, require('CZ_REQ_GUILD_MENU'))
d:add(0x017a, 4, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0178, 6, require('CZ_REQ_ITEMIDENTIFY'))
d:add(0x01fd, 8, require('CZ_REQ_ITEMREPAIR'))
d:add(0x00fc, 17, require('CZ_REQ_JOIN_GROUP'))
d:add(0x0168, 11, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0100, 28, require('CZ_REQ_LEAVE_GROUP'))
d:add(0x0159, -1, require('CZ_REQ_LEAVE_GUILD'))
d:add(0x0165, 97, require('CZ_REQ_MAKE_GUILD'))
d:add(0x00b9, 9, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x01b2, 14, require('CZ_REQ_OPENSTORE2'))
d:add(0x00e0, 71, require('CZ_REQ_ROLE_CHANGE'))
d:add(0x00ab, 8, require('CZ_REQ_TAKEOFF_EQUIP'))
d:add(0x00c1, 2, require('CZ_REQ_USER_COUNT'))
d:add(0x00a9, 8, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, 6, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, 5, require('CZ_RESTART'))
d:add(0x01ce, 3, require('CZ_SELECTAUTOSPELL'))
d:add(0x01a7, 16, require('CZ_SELECT_PETEGG'))
d:add(0x011b, 39, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, 2, require('CZ_SETTING_WHISPER_PC'))
d:add(0x00d0, 8, require('CZ_SETTING_WHISPER_STATE'))
d:add(0x01bb, 43, require('CZ_SHIFT'))
d:add(0x00bb, 20, require('CZ_STATUS_CHANGE'))
d:add(0x0225, 2, require('CZ_TAEKWON_RANK'))
d:add(0x019f, 34, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0112, 11, require('CZ_UPGRADE_SKILLLEVEL'))
d:add(0x0096, 5, require('CZ_WHISPER'))
d:add(0x0073, 5, require('ZC_ACCEPT_ENTER'))
d:add(0x0083, 30, require('ZC_ACCEPT_QUIT'))
d:add(0x012c, 4, require('ZC_ACK_ADDITEM_TO_CART'))
d:add(0x00ea, 3, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, 18, require('ZC_ACK_BAN_GUILD'))
d:add(0x00d6, 58, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x015e, 15, require('ZC_ACK_DISORGANIZE_GUILD_RESULT'))
d:add(0x00e7, 8, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x01f5, 14, require('ZC_ACK_EXCHANGE_ITEM2'))
d:add(0x017d, -1, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, -1, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x0188, 30, require('ZC_ACK_ITEMREFINING'))
d:add(0x01fe, -1, require('ZC_ACK_ITEMREPAIR'))
d:add(0x015a, 33, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x0274, 53, require('ZC_ACK_MAIL_RETURN'))
d:add(0x00fa, 30, require('ZC_ACK_MAKE_GROUP'))
d:add(0x011e, 18, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x018f, 6, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, 4, require('ZC_ACK_REQNAME'))
d:add(0x0195, 60, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, -1, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x018b, 6, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x00fd, 8, require('ZC_ACK_REQ_JOIN_GROUP'))
d:add(0x0169, 5, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0110, 35, require('ZC_ACK_TOUSESKILL'))
d:add(0x0098, -1, require('ZC_ACK_WHISPER'))
d:add(0x013b, 4, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, 2, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, 3, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x0124, -1, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x01c5, 31, require('ZC_ADD_ITEM_TO_CART2'))
d:add(0x00f4, 6, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01c4, 21, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x0104, 11, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x01e9, -1, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x0111, 282, require('ZC_ADD_SKILL'))
d:add(0x021c, 102, require('ZC_ALCHEMIST_POINT'))
d:add(0x021a, 8, require('ZC_ALCHEMIST_RANK'))
d:add(0x0139, 3, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x013a, 3, require('ZC_ATTACK_RANGE'))
d:add(0x0147, 90, require('ZC_AUTORUN_SKILL'))
d:add(0x01cd, 14, require('ZC_AUTOSPELLLIST'))
d:add(0x021b, 11, require('ZC_BLACKSMITH_POINT'))
d:add(0x0219, 15, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, -1, require('ZC_BROADCAST'))
d:add(0x01c3, 30, require('ZC_BROADCAST2'))
d:add(0x00ee, -1, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0122, -1, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, -1, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x0123, 33, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01ef, 29, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, 8, require('ZC_CHANGESTATE_MER'))
d:add(0x01a4, 8, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, 5, require('ZC_CHANGE_CHATROOM'))
d:add(0x009c, 3, require('ZC_CHANGE_DIRECTION'))
d:add(0x00b6, 16, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, 6, require('ZC_CLOSE_STORE'))
d:add(0x01d2, 12, require('ZC_COMBODELAY'))
d:add(0x0144, 282, require('ZC_COMPASS'))
d:add(0x00ec, 9, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 27, require('ZC_CONGRATULATION'))
d:add(0x0141, -1, require('ZC_COUPLESTATUS'))
d:add(0x0137, 32, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, 13, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, 53, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x00f6, 6, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x0105, 23, require('ZC_DELETE_MEMBER_FROM_GROUP'))
d:add(0x00d8, 2, require('ZC_DESTROY_ROOM'))
d:add(0x01cf, 186, require('ZC_DEVOTIONLIST'))
d:add(0x0132, 30, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, 26, require('ZC_DISPEL'))
d:add(0x00c0, 10, require('ZC_EMOTION'))
d:add(0x00db, 2, require('ZC_ENTER_ROOM'))
d:add(0x00a4, 7, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x0295, 66, require('ZC_EQUIPMENT_ITEMLIST2'))
d:add(0x013c, 3, require('ZC_EQUIP_ARROW'))
d:add(0x00f0, 24, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x022f, 67, require('ZC_FEED_MER'))
d:add(0x0201, 5, require('ZC_FRIENDS_LIST'))
d:add(0x0206, -1, require('ZC_FRIENDS_STATE'))
d:add(0x0227, 6, require('ZC_GAME_GUARD'))
d:add(0x0101, 26, require('ZC_GROUPINFO_CHANGE'))
d:add(0x017f, -1, require('ZC_GUILD_CHAT'))
d:add(0x01b6, 12, require('ZC_GUILD_INFO2'))
d:add(0x016f, 22, require('ZC_GUILD_NOTICE'))
d:add(0x0162, -1, require('ZC_GUILD_SKILLINFO'))
d:add(0x0235, 42, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, 10, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, 86, require('ZC_IRMAIL_NOTIFY'))
d:add(0x02f4, 4, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, -1, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, -1, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x00a1, 6, require('ZC_ITEM_DISAPPEAR'))
d:add(0x009d, 57, require('ZC_ITEM_ENTRY'))
d:add(0x00a0, 6, require('ZC_ITEM_PICKUP_ACK'))
d:add(0x029a, 2, require('ZC_ITEM_PICKUP_ACK2'))
d:add(0x00af, 6, require('ZC_ITEM_THROW_ACK'))
d:add(0x00b1, 58, require('ZC_LONGPAR_CHANGE'))
d:add(0x01ad, 39, require('ZC_MAKINGARROW_LIST'))
d:add(0x0154, -1, require('ZC_MEMBERMGR_INFO'))
d:add(0x00dd, -1, require('ZC_MEMBER_EXIT'))
d:add(0x00dc, -1, require('ZC_MEMBER_NEWENTRY'))
d:add(0x00b7, 6, require('ZC_MENU_LIST'))
d:add(0x018c, 8, require('ZC_MONSTER_INFO'))
d:add(0x0196, 6, require('ZC_MSG_STATE_CHANGE'))
d:add(0x010c, 11, require('ZC_MVP'))
d:add(0x010a, 12, require('ZC_MVP_GETTING_ITEM'))
d:add(0x010b, -1, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, 10, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x00a3, 4, require('ZC_NORMAL_ITEMLIST'))
d:add(0x01ee, 6, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x008a, 30, require('ZC_NOTIFY_ACT'))
d:add(0x02e1, 26, require('ZC_NOTIFY_ACT2'))
d:add(0x007a, 22, require('ZC_NOTIFY_ACTENTRY'))
d:add(0x0121, -1, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x008d, 7, require('ZC_NOTIFY_CHAT'))
d:add(0x0109, 26, require('ZC_NOTIFY_CHAT_PARTY'))
d:add(0x0117, 29, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, -1, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, 4, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0189, 31, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0199, 44, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x01d6, 54, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x0086, 2, require('ZC_NOTIFY_MOVE'))
d:add(0x007b, 6, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, 6, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, 68, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x02ec, 29, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x0079, 7, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x01d9, -1, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x022b, 282, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x02ed, -1, require('ZC_NOTIFY_NEWENTRY4'))
d:add(0x008e, 28, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0087, 14, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x0107, -1, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x019a, 11, require('ZC_NOTIFY_RANKING'))
d:add(0x0114, 182, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, -1, require('ZC_NOTIFY_SKILL2'))
d:add(0x0078, 8, require('ZC_NOTIFY_STANDENTRY'))
d:add(0x01d8, -1, require('ZC_NOTIFY_STANDENTRY2'))
d:add(0x022a, 114, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x02ee, 4, require('ZC_NOTIFY_STANDENTRY4'))
d:add(0x007c, 10, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, 60, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x007f, 10, require('ZC_NOTIFY_TIME'))
d:add(0x0077, 10, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0080, -1, require('ZC_NOTIFY_VANISH'))
d:add(0x0093, -1, require('ZC_NPCACK_ENABLE'))
d:add(0x0091, 2, require('ZC_NPCACK_MAPMOVE'))
d:add(0x0092, 26, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x01b0, 16, require('ZC_NPCSPRITE_CHANGE'))
d:add(0x012d, 6, require('ZC_OPENSTORE'))
d:add(0x0142, 67, require('ZC_OPEN_EDITDLG'))
d:add(0x01d4, 19, require('ZC_OPEN_EDITDLGSTR'))
d:add(0x00b0, 2, require('ZC_PAR_CHANGE'))
d:add(0x01ab, 10, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, 4, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, -1, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0136, 6, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x00ca, -1, require('ZC_PC_PURCHASE_RESULT'))
d:add(0x0135, 6, require('ZC_PC_PURCHASE_RESULT_FROMMC'))
d:add(0x00c7, -1, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x01a6, 3, require('ZC_PETEGG_LIST'))
d:add(0x0166, 3, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x0160, 4, require('ZC_POSITION_INFO'))
d:add(0x022e, 4, require('ZC_PROPERTY_HOMUN'))
d:add(0x013d, 3, require('ZC_RECOVERY'))
d:add(0x00da, -1, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x01fc, 59, require('ZC_REPAIRITEMLIST'))
d:add(0x0207, 8, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x0171, 8, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, 6, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, 3, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x00fe, 4, require('ZC_REQ_JOIN_GROUP'))
d:add(0x016a, -1, require('ZC_REQ_JOIN_GUILD'))
d:add(0x023a, -1, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00ac, 6, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00aa, 55, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x00b3, -1, require('ZC_RESTART_ACK'))
d:add(0x023c, 79, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x0148, 10, require('ZC_RESURRECTION'))
d:add(0x00e1, 22, require('ZC_ROLE_CHANGE'))
d:add(0x00d7, 5, require('ZC_ROOM_NEWENTRY'))
d:add(0x00b4, 6, require('ZC_SAY_DIALOG'))
d:add(0x00c4, 3, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d1, -1, require('ZC_SETTING_WHISPER_PC'))
d:add(0x00d2, 7, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x01b3, -1, require('ZC_SHOW_IMAGE2'))
d:add(0x010f, -1, require('ZC_SKILLINFO_LIST'))
d:add(0x010e, 30, require('ZC_SKILLINFO_UPDATE'))
d:add(0x011f, 10, require('ZC_SKILL_ENTRY'))
d:add(0x01c9, 2, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, -1, require('ZC_SKILL_UPDATE'))
d:add(0x01d0, 65, require('ZC_SPIRITS'))
d:add(0x01e1, 17, require('ZC_SPIRITS2'))
d:add(0x00c3, -1, require('ZC_SPRITE_CHANGE'))
d:add(0x01d7, -1, require('ZC_SPRITE_CHANGE2'))
d:add(0x0119, 2, require('ZC_STATE_CHANGE'))
d:add(0x0229, 6, require('ZC_STATE_CHANGE3'))
d:add(0x00bd, 7, require('ZC_STATUS'))
d:add(0x00be, -1, require('ZC_STATUS_CHANGE'))
d:add(0x00bc, 11, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, 3, require('ZC_STOPMOVE'))
d:add(0x0131, 4, require('ZC_STORE_ENTRY'))
d:add(0x00a6, 10, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, 9, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x00a5, 9, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x01f0, 13, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 2, require('ZC_TAEKWON_POINT'))
d:add(0x0226, 9, require('ZC_TAEKWON_RANK'))
d:add(0x01a0, -1, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x016d, 6, require('ZC_UPDATE_CHARSTAT'))
d:add(0x01f2, 6, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, 32, require('ZC_UPDATE_GDID'))
d:add(0x00c2, 10, require('ZC_USER_COUNT'))
d:add(0x013e, 15, require('ZC_USESKILL_ACK'))
d:add(0x00a8, 2, require('ZC_USE_ITEM_ACK'))
d:add(0x01c8, 4, require('ZC_USE_ITEM_ACK2'))
d:add(0x011a, 36, require('ZC_USE_SKILL'))
d:add(0x00b5, -1, require('ZC_WAIT_DIALOG'))
d:add(0x011c, 26, require('ZC_WARPLIST'))
d:add(0x0097, 26, require('ZC_WHISPER'))

return d
