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
d:add(0x0208, 5, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00e8, -1, require('CZ_ADD_EXCHANGE_ITEM'))
d:add(0x0202, 3, require('CZ_ADD_FRIENDS'))
d:add(0x0218, -1, require('CZ_ALCHEMIST_RANK'))
d:add(0x0172, -1, require('CZ_ALLY_GUILD'))
d:add(0x0217, -1, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, -1, require('CZ_BROADCAST'))
d:add(0x00ed, 5, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x00de, 18, require('CZ_CHANGE_CHATROOM'))
d:add(0x019d, -1, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x0102, 2, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x00b8, 9, require('CZ_CHOOSE_MENU'))
d:add(0x01ed, 22, require('CZ_CHOPOKGI'))
d:add(0x0146, -1, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, -1, require('CZ_COMMAND_MER'))
d:add(0x01a1, 282, require('CZ_COMMAND_PET'))
d:add(0x00eb, 15, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, 20, require('CZ_CONTACTNPC'))
d:add(0x00d5, 60, require('CZ_CREATE_CHATROOM'))
d:add(0x00ce, -1, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x01e7, 60, require('CZ_DORIDORI'))
d:add(0x00ef, -1, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, -1, require('CZ_EXIT_ROOM'))
d:add(0x017e, -1, require('CZ_GUILD_CHAT'))
d:add(0x0143, 53, require('CZ_INPUT_EDITDLG'))
d:add(0x01d5, -1, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f6, 8, require('CZ_IRMAIL_LIST'))
d:add(0x02f3, 23, require('CZ_IRMAIL_SEND'))
d:add(0x013f, 8, require('CZ_ITEM_CREATE'))
d:add(0x00ff, -1, require('CZ_JOIN_GROUP'))
d:add(0x016b, 8, require('CZ_JOIN_GUILD'))
d:add(0x0237, 60, require('CZ_KILLER_RANK'))
d:add(0x019c, -1, require('CZ_LOCALBROADCAST'))
d:add(0x00f9, 6, require('CZ_MAKE_GROUP'))
d:add(0x01e8, 16, require('CZ_MAKE_GROUP2'))
d:add(0x0140, 53, require('CZ_MOVETO_MAP'))
d:add(0x0126, 14, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0127, 26, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0129, 6, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x0128, -1, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x0134, -1, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x01bc, 8, require('CZ_RECALL'))
d:add(0x01bd, 102, require('CZ_RECALL_GID'))
d:add(0x0161, -1, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, 4, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, 6, require('CZ_REMOVE_AID'))
d:add(0x018e, 27, require('CZ_REQMAKINGITEM'))
d:add(0x0233, 22, require('CZ_REQUEST_ACTNPC'))
d:add(0x0108, 3, require('CZ_REQUEST_CHAT_PARTY'))
d:add(0x0232, -1, require('CZ_REQUEST_MOVENPC'))
d:add(0x0234, 2, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0170, 22, require('CZ_REQ_ALLY_GUILD'))
d:add(0x015b, 26, require('CZ_REQ_BAN_GUILD'))
d:add(0x0130, -1, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, 282, require('CZ_REQ_CARTOFF'))
d:add(0x0155, 6, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x012e, 26, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, -1, require('CZ_REQ_DISCONNECT'))
d:add(0x00bf, -1, require('CZ_REQ_EMOTION'))
d:add(0x00e4, 10, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x0103, 11, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x00e2, 11, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x0149, 17, require('CZ_REQ_GIVE_MANNER_POINT'))
d:add(0x014f, -1, require('CZ_REQ_GUILD_MENU'))
d:add(0x017c, -1, require('CZ_REQ_ITEMCOMPOSITION'))
d:add(0x017a, 2, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0178, -1, require('CZ_REQ_ITEMIDENTIFY'))
d:add(0x01fd, -1, require('CZ_REQ_ITEMREPAIR'))
d:add(0x0168, -1, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0100, -1, require('CZ_REQ_LEAVE_GROUP'))
d:add(0x0159, 29, require('CZ_REQ_LEAVE_GUILD'))
d:add(0x0165, 182, require('CZ_REQ_MAKE_GUILD'))
d:add(0x01ae, -1, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, 2, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x00e0, 4, require('CZ_REQ_ROLE_CHANGE'))
d:add(0x00a9, 2, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, 19, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, 67, require('CZ_RESTART'))
d:add(0x01ce, -1, require('CZ_SELECTAUTOSPELL'))
d:add(0x01a7, 4, require('CZ_SELECT_PETEGG'))
d:add(0x011b, 4, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, 6, require('CZ_SETTING_WHISPER_PC'))
d:add(0x00d0, 4, require('CZ_SETTING_WHISPER_STATE'))
d:add(0x01bb, 3, require('CZ_SHIFT'))
d:add(0x00bb, -1, require('CZ_STATUS_CHANGE'))
d:add(0x0225, 3, require('CZ_TAEKWON_RANK'))
d:add(0x019f, -1, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0112, -1, require('CZ_UPGRADE_SKILLLEVEL'))
d:add(0x0073, 24, require('ZC_ACCEPT_ENTER'))
d:add(0x0083, 28, require('ZC_ACCEPT_QUIT'))
d:add(0x012c, 30, require('ZC_ACK_ADDITEM_TO_CART'))
d:add(0x00ea, -1, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x00d6, -1, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x015e, 30, require('ZC_ACK_DISORGANIZE_GUILD_RESULT'))
d:add(0x00e7, 6, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x01f5, -1, require('ZC_ACK_EXCHANGE_ITEM2'))
d:add(0x017d, 6, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 6, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x0188, 7, require('ZC_ACK_ITEMREFINING'))
d:add(0x01fe, 8, require('ZC_ACK_ITEMREPAIR'))
d:add(0x015a, 14, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x0274, 3, require('ZC_ACK_MAIL_RETURN'))
d:add(0x00fa, 30, require('ZC_ACK_MAKE_GROUP'))
d:add(0x011e, 32, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x018f, -1, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, -1, require('ZC_ACK_REQNAME'))
d:add(0x0195, -1, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, 21, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x018b, -1, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x00fd, 2, require('ZC_ACK_REQ_JOIN_GROUP'))
d:add(0x0169, -1, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0110, -1, require('ZC_ACK_TOUSESKILL'))
d:add(0x0098, -1, require('ZC_ACK_WHISPER'))
d:add(0x013b, 30, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, 4, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, 6, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x0124, 6, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x01c5, 7, require('ZC_ADD_ITEM_TO_CART2'))
d:add(0x00f4, 35, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01c4, -1, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x0104, 30, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x01e9, 34, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x0111, 26, require('ZC_ADD_SKILL'))
d:add(0x021c, -1, require('ZC_ALCHEMIST_POINT'))
d:add(0x021a, -1, require('ZC_ALCHEMIST_RANK'))
d:add(0x0139, 11, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x013a, 55, require('ZC_ATTACK_RANGE'))
d:add(0x01cd, 12, require('ZC_AUTOSPELLLIST'))
d:add(0x021b, 9, require('ZC_BLACKSMITH_POINT'))
d:add(0x0219, 28, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, 9, require('ZC_BROADCAST'))
d:add(0x01c3, 6, require('ZC_BROADCAST2'))
d:add(0x00ee, 8, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0122, -1, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, -1, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x0123, 26, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01a4, 16, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, 282, require('ZC_CHANGE_CHATROOM'))
d:add(0x009c, -1, require('ZC_CHANGE_DIRECTION'))
d:add(0x00b6, 8, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, -1, require('ZC_CLOSE_STORE'))
d:add(0x01d2, 18, require('ZC_COMBODELAY'))
d:add(0x0144, 6, require('ZC_COMPASS'))
d:add(0x00ec, -1, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0141, -1, require('ZC_COUPLESTATUS'))
d:add(0x0137, 7, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, -1, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, -1, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x00f6, 65, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x00d8, 26, require('ZC_DESTROY_ROOM'))
d:add(0x01cf, 39, require('ZC_DEVOTIONLIST'))
d:add(0x0132, 6, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, 4, require('ZC_DISPEL'))
d:add(0x00c0, 7, require('ZC_EMOTION'))
d:add(0x00db, -1, require('ZC_ENTER_ROOM'))
d:add(0x00a4, 2, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x0295, 10, require('ZC_EQUIPMENT_ITEMLIST2'))
d:add(0x013c, 6, require('ZC_EQUIP_ARROW'))
d:add(0x00f0, -1, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x0201, 54, require('ZC_FRIENDS_LIST'))
d:add(0x0206, -1, require('ZC_FRIENDS_STATE'))
d:add(0x0227, -1, require('ZC_GAME_GUARD'))
d:add(0x0101, 6, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, -1, require('ZC_GROUP_LIST'))
d:add(0x017f, 20, require('ZC_GUILD_CHAT'))
d:add(0x01b6, -1, require('ZC_GUILD_INFO2'))
d:add(0x016f, 7, require('ZC_GUILD_NOTICE'))
d:add(0x0162, 3, require('ZC_GUILD_SKILLINFO'))
d:add(0x0235, 2, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, 36, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f4, -1, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, -1, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, 10, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x00a1, 3, require('ZC_ITEM_DISAPPEAR'))
d:add(0x009d, -1, require('ZC_ITEM_ENTRY'))
d:add(0x009e, 39, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x00a0, -1, require('ZC_ITEM_PICKUP_ACK'))
d:add(0x029a, -1, require('ZC_ITEM_PICKUP_ACK2'))
d:add(0x00af, 6, require('ZC_ITEM_THROW_ACK'))
d:add(0x018d, 7, require('ZC_MAKABLEITEMLIST'))
d:add(0x01ad, 4, require('ZC_MAKINGARROW_LIST'))
d:add(0x0154, 10, require('ZC_MEMBERMGR_INFO'))
d:add(0x00dd, 15, require('ZC_MEMBER_EXIT'))
d:add(0x00dc, -1, require('ZC_MEMBER_NEWENTRY'))
d:add(0x00b7, 14, require('ZC_MENU_LIST'))
d:add(0x0196, 11, require('ZC_MSG_STATE_CHANGE'))
d:add(0x010c, -1, require('ZC_MVP'))
d:add(0x010a, 114, require('ZC_MVP_GETTING_ITEM'))
d:add(0x010b, -1, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, 4, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x00a3, 8, require('ZC_NORMAL_ITEMLIST'))
d:add(0x01ee, -1, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x008a, -1, require('ZC_NOTIFY_ACT'))
d:add(0x02e1, -1, require('ZC_NOTIFY_ACT2'))
d:add(0x007a, -1, require('ZC_NOTIFY_ACTENTRY'))
d:add(0x0121, -1, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x008d, 6, require('ZC_NOTIFY_CHAT'))
d:add(0x0109, -1, require('ZC_NOTIFY_CHAT_PARTY'))
d:add(0x019b, 29, require('ZC_NOTIFY_EFFECT'))
d:add(0x0117, 28, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, -1, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, -1, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0189, 58, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0199, 6, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x01d6, 54, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x0086, 10, require('ZC_NOTIFY_MOVE'))
d:add(0x007b, 2, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, 8, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, -1, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x02ec, 6, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x01d9, 2, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x022b, 27, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x02ed, 7, require('ZC_NOTIFY_NEWENTRY4'))
d:add(0x008e, -1, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0087, 11, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x01eb, 13, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x019a, 3, require('ZC_NOTIFY_RANKING'))
d:add(0x0114, -1, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, 2, require('ZC_NOTIFY_SKILL2'))
d:add(0x0078, 14, require('ZC_NOTIFY_STANDENTRY'))
d:add(0x01d8, 4, require('ZC_NOTIFY_STANDENTRY2'))
d:add(0x022a, 10, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x02ee, -1, require('ZC_NOTIFY_STANDENTRY4'))
d:add(0x007c, 11, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, -1, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x007f, 3, require('ZC_NOTIFY_TIME'))
d:add(0x0077, 13, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, -1, require('ZC_NPCACK_ENABLE'))
d:add(0x0091, 58, require('ZC_NPCACK_MAPMOVE'))
d:add(0x0092, 21, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x01b0, 3, require('ZC_NPCSPRITE_CHANGE'))
d:add(0x012d, 33, require('ZC_OPENSTORE'))
d:add(0x0142, 11, require('ZC_OPEN_EDITDLG'))
d:add(0x00b0, -1, require('ZC_PAR_CHANGE'))
d:add(0x01ab, 79, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, 3, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x0133, 5, require('ZC_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x0136, -1, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x00ca, 14, require('ZC_PC_PURCHASE_RESULT'))
d:add(0x00c7, 26, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x01aa, 28, require('ZC_PET_ACT'))
d:add(0x0160, -1, require('ZC_POSITION_INFO'))
d:add(0x022e, 9, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, 6, require('ZC_PROPERTY_PET'))
d:add(0x013d, -1, require('ZC_RECOVERY'))
d:add(0x00da, 31, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x01fc, -1, require('ZC_REPAIRITEMLIST'))
d:add(0x0207, -1, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x0171, 5, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, 2, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, 14, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x00fe, 6, require('ZC_REQ_JOIN_GROUP'))
d:add(0x016a, 97, require('ZC_REQ_JOIN_GUILD'))
d:add(0x00ac, 8, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00aa, 31, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x00b3, 5, require('ZC_RESTART_ACK'))
d:add(0x0167, -1, require('ZC_RESULT_MAKE_GUILD'))
d:add(0x023c, 6, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x0148, 10, require('ZC_RESURRECTION'))
d:add(0x00e1, 2, require('ZC_ROLE_CHANGE'))
d:add(0x00d7, -1, require('ZC_ROOM_NEWENTRY'))
d:add(0x00b4, 282, require('ZC_SAY_DIALOG'))
d:add(0x00c4, 2, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d1, 67, require('ZC_SETTING_WHISPER_PC'))
d:add(0x00d2, 6, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x01b3, 6, require('ZC_SHOW_IMAGE2'))
d:add(0x010f, 8, require('ZC_SKILLINFO_LIST'))
d:add(0x010e, 12, require('ZC_SKILLINFO_UPDATE'))
d:add(0x0120, -1, require('ZC_SKILL_DISAPPEAR'))
d:add(0x011f, 6, require('ZC_SKILL_ENTRY'))
d:add(0x01c9, -1, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, 29, require('ZC_SKILL_UPDATE'))
d:add(0x01d0, -1, require('ZC_SPIRITS'))
d:add(0x01e1, 71, require('ZC_SPIRITS2'))
d:add(0x00c3, 4, require('ZC_SPRITE_CHANGE'))
d:add(0x01d7, -1, require('ZC_SPRITE_CHANGE2'))
d:add(0x020e, 3, require('ZC_STARSKILL'))
d:add(0x0119, 6, require('ZC_STATE_CHANGE'))
d:add(0x0229, 5, require('ZC_STATE_CHANGE3'))
d:add(0x00be, 4, require('ZC_STATUS_CHANGE'))
d:add(0x00bc, -1, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, 10, require('ZC_STOPMOVE'))
d:add(0x0131, -1, require('ZC_STORE_ENTRY'))
d:add(0x00a6, 59, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, 14, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x00a5, 6, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x01f0, 22, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 81, require('ZC_TAEKWON_POINT'))
d:add(0x0226, 30, require('ZC_TAEKWON_RANK'))
d:add(0x01a0, -1, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x016d, 3, require('ZC_UPDATE_CHARSTAT'))
d:add(0x01f2, 186, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, -1, require('ZC_UPDATE_GDID'))
d:add(0x00c2, 2, require('ZC_USER_COUNT'))
d:add(0x013e, 6, require('ZC_USESKILL_ACK'))
d:add(0x00a8, -1, require('ZC_USE_ITEM_ACK'))
d:add(0x01c8, 26, require('ZC_USE_ITEM_ACK2'))
d:add(0x011a, 4, require('ZC_USE_SKILL'))
d:add(0x00b5, 90, require('ZC_WAIT_DIALOG'))
d:add(0x011c, 3, require('ZC_WARPLIST'))
d:add(0x0097, 30, require('ZC_WHISPER'))

return d
