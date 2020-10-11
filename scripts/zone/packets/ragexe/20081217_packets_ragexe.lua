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

d:add(0x00c5, -1, require('CZ_ACK_SELECT_DEALTYPE'))
d:add(0x00e8, -1, require('CZ_ADD_EXCHANGE_ITEM'))
d:add(0x0202, 9, require('CZ_ADD_FRIENDS'))
d:add(0x0172, -1, require('CZ_ALLY_GUILD'))
d:add(0x0099, 31, require('CZ_BROADCAST'))
d:add(0x00ed, 4, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, -1, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 13, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, -1, require('CZ_CHANGE_DIRECTION2'))
d:add(0x019d, 60, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x0102, -1, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x01ed, 67, require('CZ_CHOPOKGI'))
d:add(0x022d, -1, require('CZ_COMMAND_MER'))
d:add(0x00eb, 6, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, -1, require('CZ_CONTACTNPC'))
d:add(0x00d5, 58, require('CZ_CREATE_CHATROOM'))
d:add(0x00ce, 8, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x00cc, -1, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x0436, -1, require('CZ_ENTER2'))
d:add(0x00ef, 2, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, -1, require('CZ_EXIT_ROOM'))
d:add(0x017e, 2, require('CZ_GUILD_CHAT'))
d:add(0x016e, 2, require('CZ_GUILD_NOTICE'))
d:add(0x01d5, -1, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f6, 4, require('CZ_IRMAIL_LIST'))
d:add(0x02f3, 3, require('CZ_IRMAIL_SEND'))
d:add(0x013f, -1, require('CZ_ITEM_CREATE'))
d:add(0x00ff, 5, require('CZ_JOIN_GROUP'))
d:add(0x016b, 6, require('CZ_JOIN_GUILD'))
d:add(0x0237, -1, require('CZ_KILLER_RANK'))
d:add(0x019c, -1, require('CZ_LOCALBROADCAST'))
d:add(0x0126, 14, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0127, -1, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0129, 7, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x0365, 4, require('CZ_MOVE_ITEM_FROM_STORE_TO_BODY2'))
d:add(0x0128, -1, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x0134, -1, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x01bc, 4, require('CZ_RECALL'))
d:add(0x01bd, -1, require('CZ_RECALL_GID'))
d:add(0x011d, -1, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, 15, require('CZ_REMOVE_AID'))
d:add(0x018e, -1, require('CZ_REQMAKINGITEM'))
d:add(0x0368, 4, require('CZ_REQNAME2'))
d:add(0x0233, -1, require('CZ_REQUEST_ACTNPC'))
d:add(0x0232, 3, require('CZ_REQUEST_MOVENPC'))
d:add(0x0234, 10, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0360, -1, require('CZ_REQUEST_TIME2'))
d:add(0x0170, 26, require('CZ_REQ_ALLY_GUILD'))
d:add(0x015b, 11, require('CZ_REQ_BAN_GUILD'))
d:add(0x0155, -1, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x012e, 7, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, 8, require('CZ_REQ_DISCONNECT'))
d:add(0x00bf, -1, require('CZ_REQ_EMOTION'))
d:add(0x00d9, 55, require('CZ_REQ_ENTER_ROOM'))
d:add(0x00e4, 7, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x0103, 6, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x00e2, 8, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x014f, -1, require('CZ_REQ_GUILD_MENU'))
d:add(0x014d, 6, require('CZ_REQ_GUILD_MENUINTERFACE'))
d:add(0x017a, 24, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0159, -1, require('CZ_REQ_LEAVE_GUILD'))
d:add(0x01ae, 2, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, -1, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x00a9, 30, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, -1, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, 23, require('CZ_RESTART'))
d:add(0x01a7, -1, require('CZ_SELECT_PETEGG'))
d:add(0x011b, -1, require('CZ_SELECT_WARPPOINT'))
d:add(0x01bb, -1, require('CZ_SHIFT'))
d:add(0x0112, -1, require('CZ_UPGRADE_SKILLLEVEL'))
d:add(0x0439, 3, require('CZ_USE_ITEM2'))
d:add(0x0438, 10, require('CZ_USE_SKILL2'))
d:add(0x0367, 6, require('CZ_USE_SKILL_TOGROUND_WITHTALKBOX2'))
d:add(0x0073, -1, require('ZC_ACCEPT_ENTER'))
d:add(0x0083, 3, require('ZC_ACCEPT_QUIT'))
d:add(0x012c, 79, require('ZC_ACK_ADDITEM_TO_CART'))
d:add(0x00ea, -1, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, -1, require('ZC_ACK_BAN_GUILD'))
d:add(0x00d6, 6, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x00e7, 42, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x017d, 2, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 53, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x01fe, 15, require('ZC_ACK_ITEMREPAIR'))
d:add(0x015a, 3, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x018f, -1, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, -1, require('ZC_ACK_REQNAME'))
d:add(0x0195, 29, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, 3, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x00fd, 10, require('ZC_ACK_REQ_JOIN_GROUP'))
d:add(0x0169, 2, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0098, 9, require('ZC_ACK_WHISPER'))
d:add(0x00e9, -1, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0124, -1, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x00f4, 14, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01c4, 9, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x01e9, -1, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x0111, -1, require('ZC_ADD_SKILL'))
d:add(0x021a, -1, require('ZC_ALCHEMIST_RANK'))
d:add(0x0147, 2, require('ZC_AUTORUN_SKILL'))
d:add(0x01cd, 20, require('ZC_AUTOSPELLLIST'))
d:add(0x021b, 28, require('ZC_BLACKSMITH_POINT'))
d:add(0x0219, 282, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, 65, require('ZC_BROADCAST'))
d:add(0x01c3, -1, require('ZC_BROADCAST2'))
d:add(0x0122, -1, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, 6, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x0123, 26, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01ef, 10, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, -1, require('ZC_CHANGESTATE_MER'))
d:add(0x01a4, 3, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, 22, require('ZC_CHANGE_CHATROOM'))
d:add(0x00b6, 26, require('ZC_CLOSE_DIALOG'))
d:add(0x01d2, 10, require('ZC_COMBODELAY'))
d:add(0x00ec, 18, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, -1, require('ZC_CONGRATULATION'))
d:add(0x0141, 8, require('ZC_COUPLESTATUS'))
d:add(0x0137, -1, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, 4, require('ZC_DELETE_FRIENDS'))
d:add(0x00f6, 26, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x00d8, -1, require('ZC_DESTROY_ROOM'))
d:add(0x01cf, -1, require('ZC_DEVOTIONLIST'))
d:add(0x00c0, 54, require('ZC_EMOTION'))
d:add(0x00db, -1, require('ZC_ENTER_ROOM'))
d:add(0x00f0, 26, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x022f, -1, require('ZC_FEED_MER'))
d:add(0x0201, -1, require('ZC_FRIENDS_LIST'))
d:add(0x0206, 6, require('ZC_FRIENDS_STATE'))
d:add(0x0227, -1, require('ZC_GAME_GUARD'))
d:add(0x0101, 6, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, 7, require('ZC_GROUP_LIST'))
d:add(0x017f, 30, require('ZC_GUILD_CHAT'))
d:add(0x016f, -1, require('ZC_GUILD_NOTICE'))
d:add(0x0235, -1, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, -1, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, 6, require('ZC_IRMAIL_NOTIFY'))
d:add(0x02f4, -1, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, 10, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x009e, -1, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x029a, -1, require('ZC_ITEM_PICKUP_ACK2'))
d:add(0x0238, 22, require('ZC_KILLER_RANK'))
d:add(0x00b1, 11, require('ZC_LONGPAR_CHANGE'))
d:add(0x0154, -1, require('ZC_MEMBERMGR_INFO'))
d:add(0x00dd, 30, require('ZC_MEMBER_EXIT'))
d:add(0x018c, -1, require('ZC_MONSTER_INFO'))
d:add(0x010a, 8, require('ZC_MVP_GETTING_ITEM'))
d:add(0x010b, 23, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, 6, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x01ee, -1, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x02e1, 6, require('ZC_NOTIFY_ACT2'))
d:add(0x0121, 3, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x019b, 8, require('ZC_NOTIFY_EFFECT'))
d:add(0x0106, 2, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, -1, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0189, -1, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0199, -1, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x01d6, 11, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x0086, 17, require('ZC_NOTIFY_MOVE'))
d:add(0x007b, -1, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, -1, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, -1, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x01d9, 28, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x022b, -1, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x0087, 8, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x0107, -1, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x019a, 17, require('ZC_NOTIFY_RANKING'))
d:add(0x0078, -1, require('ZC_NOTIFY_STANDENTRY'))
d:add(0x01d8, 39, require('ZC_NOTIFY_STANDENTRY2'))
d:add(0x022a, 30, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x007c, 2, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, -1, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x0080, -1, require('ZC_NOTIFY_VANISH'))
d:add(0x0091, 3, require('ZC_NPCACK_MAPMOVE'))
d:add(0x00b0, 8, require('ZC_PAR_CHANGE'))
d:add(0x01ab, 5, require('ZC_PAR_CHANGE_USER'))
d:add(0x0136, -1, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x01a6, 58, require('ZC_PETEGG_LIST'))
d:add(0x0166, -1, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x0160, 37, require('ZC_POSITION_INFO'))
d:add(0x022e, 186, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, -1, require('ZC_PROPERTY_PET'))
d:add(0x00da, 21, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x01fc, 11, require('ZC_REPAIRITEMLIST'))
d:add(0x0171, 6, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, 2, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, 12, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x00fe, 7, require('ZC_REQ_JOIN_GROUP'))
d:add(0x016a, 5, require('ZC_REQ_JOIN_GUILD'))
d:add(0x023a, 90, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00ac, -1, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x0167, 26, require('ZC_RESULT_MAKE_GUILD'))
d:add(0x023c, -1, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x00b4, -1, require('ZC_SAY_DIALOG'))
d:add(0x00d1, 16, require('ZC_SETTING_WHISPER_PC'))
d:add(0x00d2, 8, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x010f, 81, require('ZC_SKILLINFO_LIST'))
d:add(0x01c9, 6, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, -1, require('ZC_SKILL_UPDATE'))
d:add(0x01d0, -1, require('ZC_SPIRITS'))
d:add(0x01e1, -1, require('ZC_SPIRITS2'))
d:add(0x00c3, 5, require('ZC_SPRITE_CHANGE'))
d:add(0x01d7, 114, require('ZC_SPRITE_CHANGE2'))
d:add(0x020e, 6, require('ZC_STARSKILL'))
d:add(0x0119, 30, require('ZC_STATE_CHANGE'))
d:add(0x0229, -1, require('ZC_STATE_CHANGE3'))
d:add(0x00bd, 14, require('ZC_STATUS'))
d:add(0x00bc, 6, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x00a6, 20, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, -1, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x00a5, 6, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x01f0, 10, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 60, require('ZC_TAEKWON_POINT'))
d:add(0x0226, 102, require('ZC_TAEKWON_RANK'))
d:add(0x01a0, -1, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x016d, 11, require('ZC_UPDATE_CHARSTAT'))
d:add(0x016c, -1, require('ZC_UPDATE_GDID'))
d:add(0x013e, 182, require('ZC_USESKILL_ACK'))
d:add(0x00a8, 7, require('ZC_USE_ITEM_ACK'))
d:add(0x011a, -1, require('ZC_USE_SKILL'))
d:add(0x00b5, 6, require('ZC_WAIT_DIALOG'))
d:add(0x011c, -1, require('ZC_WARPLIST'))

return d
