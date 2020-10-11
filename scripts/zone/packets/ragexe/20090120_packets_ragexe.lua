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

d:add(0x00e6, 58, require('CZ_ACK_EXCHANGE_ITEM'))
d:add(0x0208, -1, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00c5, 2, require('CZ_ACK_SELECT_DEALTYPE'))
d:add(0x0172, 10, require('CZ_ALLY_GUILD'))
d:add(0x0217, 14, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, 4, require('CZ_BROADCAST'))
d:add(0x00de, -1, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, -1, require('CZ_CHANGE_DIRECTION2'))
d:add(0x00b8, 10, require('CZ_CHOOSE_MENU'))
d:add(0x0090, 3, require('CZ_CONTACTNPC'))
d:add(0x0203, 2, require('CZ_DELETE_FRIENDS'))
d:add(0x00cc, 39, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x01e7, 5, require('CZ_DORIDORI'))
d:add(0x0436, -1, require('CZ_ENTER2'))
d:add(0x00ef, 81, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, 6, require('CZ_EXIT_ROOM'))
d:add(0x017e, 186, require('CZ_GUILD_CHAT'))
d:add(0x016e, 4, require('CZ_GUILD_NOTICE'))
d:add(0x0143, -1, require('CZ_INPUT_EDITDLG'))
d:add(0x01d5, -1, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f6, 18, require('CZ_IRMAIL_LIST'))
d:add(0x02f3, 4, require('CZ_IRMAIL_SEND'))
d:add(0x013f, -1, require('CZ_ITEM_CREATE'))
d:add(0x0362, -1, require('CZ_ITEM_PICKUP2'))
d:add(0x0363, -1, require('CZ_ITEM_THROW2'))
d:add(0x00ff, -1, require('CZ_JOIN_GROUP'))
d:add(0x016b, -1, require('CZ_JOIN_GUILD'))
d:add(0x0237, -1, require('CZ_KILLER_RANK'))
d:add(0x00f9, 12, require('CZ_MAKE_GROUP'))
d:add(0x01e8, -1, require('CZ_MAKE_GROUP2'))
d:add(0x0140, -1, require('CZ_MOVETO_MAP'))
d:add(0x0126, 14, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0364, 5, require('CZ_MOVE_ITEM_FROM_BODY_TO_STORE2'))
d:add(0x0127, 3, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0365, 67, require('CZ_MOVE_ITEM_FROM_STORE_TO_BODY2'))
d:add(0x0128, 6, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x00c8, 8, require('CZ_PC_PURCHASE_ITEMLIST'))
d:add(0x0134, 10, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00c9, -1, require('CZ_PC_SELL_ITEMLIST'))
d:add(0x01bc, 7, require('CZ_RECALL'))
d:add(0x0161, 6, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, 182, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, -1, require('CZ_REMOVE_AID'))
d:add(0x0368, 71, require('CZ_REQNAME2'))
d:add(0x0437, 57, require('CZ_REQUEST_ACT2'))
d:add(0x0108, 6, require('CZ_REQUEST_CHAT_PARTY'))
d:add(0x035f, 6, require('CZ_REQUEST_MOVE2'))
d:add(0x0234, 10, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0360, -1, require('CZ_REQUEST_TIME2'))
d:add(0x0170, 10, require('CZ_REQ_ALLY_GUILD'))
d:add(0x0130, -1, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, 29, require('CZ_REQ_CARTOFF'))
d:add(0x012e, 28, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, 3, require('CZ_REQ_DISCONNECT'))
d:add(0x0103, 66, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x00e2, -1, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x014f, -1, require('CZ_REQ_GUILD_MENU'))
d:add(0x017a, 11, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0178, -1, require('CZ_REQ_ITEMIDENTIFY'))
d:add(0x01fd, -1, require('CZ_REQ_ITEMREPAIR'))
d:add(0x00fc, -1, require('CZ_REQ_JOIN_GROUP'))
d:add(0x01ae, -1, require('CZ_REQ_MAKINGARROW'))
d:add(0x01b2, -1, require('CZ_REQ_OPENSTORE2'))
d:add(0x00ab, -1, require('CZ_REQ_TAKEOFF_EQUIP'))
d:add(0x00c1, 6, require('CZ_REQ_USER_COUNT'))
d:add(0x00d3, 7, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, 97, require('CZ_RESTART'))
d:add(0x011b, 32, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, -1, require('CZ_SETTING_WHISPER_PC'))
d:add(0x01bb, 4, require('CZ_SHIFT'))
d:add(0x00bb, -1, require('CZ_STATUS_CHANGE'))
d:add(0x019f, 15, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0439, 10, require('CZ_USE_ITEM2'))
d:add(0x0438, -1, require('CZ_USE_SKILL2'))
d:add(0x0096, 30, require('CZ_WHISPER'))
d:add(0x0073, -1, require('ZC_ACCEPT_ENTER'))
d:add(0x0083, 6, require('ZC_ACCEPT_QUIT'))
d:add(0x012c, 282, require('ZC_ACK_ADDITEM_TO_CART'))
d:add(0x00ea, 3, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x00e7, 68, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x01f5, 11, require('ZC_ACK_EXCHANGE_ITEM2'))
d:add(0x01fe, -1, require('ZC_ACK_ITEMREPAIR'))
d:add(0x015a, 4, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x0274, 2, require('ZC_ACK_MAIL_RETURN'))
d:add(0x011e, -1, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x018f, 10, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, 53, require('ZC_ACK_REQNAME'))
d:add(0x018b, 7, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x0110, 30, require('ZC_ACK_TOUSESKILL'))
d:add(0x0098, 20, require('ZC_ACK_WHISPER'))
d:add(0x013b, -1, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, 54, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, 6, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x01c5, -1, require('ZC_ADD_ITEM_TO_CART2'))
d:add(0x00f4, 43, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x0104, -1, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x01e9, 27, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x021c, 79, require('ZC_ALCHEMIST_POINT'))
d:add(0x0139, 54, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x0147, 30, require('ZC_AUTORUN_SKILL'))
d:add(0x01cd, 18, require('ZC_AUTOSPELLLIST'))
d:add(0x0219, -1, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, 6, require('ZC_BROADCAST'))
d:add(0x01c3, 2, require('ZC_BROADCAST2'))
d:add(0x00ee, 8, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0122, 3, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, 58, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x01ef, 14, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, 15, require('ZC_CHANGESTATE_MER'))
d:add(0x00df, -1, require('ZC_CHANGE_CHATROOM'))
d:add(0x00b6, -1, require('ZC_CLOSE_DIALOG'))
d:add(0x01d2, 22, require('ZC_COMBODELAY'))
d:add(0x0144, 6, require('ZC_COMPASS'))
d:add(0x00ec, 2, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 90, require('ZC_CONGRATULATION'))
d:add(0x0141, 6, require('ZC_COUPLESTATUS'))
d:add(0x020a, -1, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, 2, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x00f6, 21, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x00d8, 4, require('ZC_DESTROY_ROOM'))
d:add(0x0132, 2, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x00c0, 6, require('ZC_EMOTION'))
d:add(0x00db, -1, require('ZC_ENTER_ROOM'))
d:add(0x022f, 31, require('ZC_FEED_MER'))
d:add(0x01a3, 6, require('ZC_FEED_PET'))
d:add(0x0201, -1, require('ZC_FRIENDS_LIST'))
d:add(0x0206, 4, require('ZC_FRIENDS_STATE'))
d:add(0x0227, 29, require('ZC_GAME_GUARD'))
d:add(0x0101, -1, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, -1, require('ZC_GROUP_LIST'))
d:add(0x017f, 33, require('ZC_GUILD_CHAT'))
d:add(0x01b6, -1, require('ZC_GUILD_INFO2'))
d:add(0x016f, 6, require('ZC_GUILD_NOTICE'))
d:add(0x0162, -1, require('ZC_GUILD_SKILLINFO'))
d:add(0x0239, -1, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, -1, require('ZC_IRMAIL_NOTIFY'))
d:add(0x02f4, 8, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, 17, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, 2, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x009d, -1, require('ZC_ITEM_ENTRY'))
d:add(0x009e, -1, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x029a, -1, require('ZC_ITEM_PICKUP_ACK2'))
d:add(0x0238, -1, require('ZC_KILLER_RANK'))
d:add(0x018d, 6, require('ZC_MAKABLEITEMLIST'))
d:add(0x01ad, 60, require('ZC_MAKINGARROW_LIST'))
d:add(0x00dd, 11, require('ZC_MEMBER_EXIT'))
d:add(0x00dc, 26, require('ZC_MEMBER_NEWENTRY'))
d:add(0x018c, 30, require('ZC_MONSTER_INFO'))
d:add(0x010c, 2, require('ZC_MVP'))
d:add(0x010b, 2, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, -1, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x00a3, 5, require('ZC_NORMAL_ITEMLIST'))
d:add(0x01ee, 2, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x02e1, 6, require('ZC_NOTIFY_ACT2'))
d:add(0x007a, -1, require('ZC_NOTIFY_ACTENTRY'))
d:add(0x0121, 2, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x0109, 5, require('ZC_NOTIFY_CHAT_PARTY'))
d:add(0x019b, 26, require('ZC_NOTIFY_EFFECT'))
d:add(0x0117, 30, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, 7, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0189, 4, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0199, -1, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x0086, 10, require('ZC_NOTIFY_MOVE'))
d:add(0x01da, 22, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x02ec, -1, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x0079, 3, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x01d9, -1, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x022b, 3, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x02ed, 2, require('ZC_NOTIFY_NEWENTRY4'))
d:add(0x008e, 8, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x01eb, -1, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x0114, -1, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, -1, require('ZC_NOTIFY_SKILL2'))
d:add(0x022a, 282, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x02ee, 21, require('ZC_NOTIFY_STANDENTRY4'))
d:add(0x007c, -1, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, 11, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x0077, -1, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, 4, require('ZC_NPCACK_ENABLE'))
d:add(0x0092, -1, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x012d, 11, require('ZC_OPENSTORE'))
d:add(0x0142, 60, require('ZC_OPEN_EDITDLG'))
d:add(0x01ab, 6, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, -1, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, 6, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0136, 16, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x00c7, 2, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x0160, 6, require('ZC_POSITION_INFO'))
d:add(0x022e, 8, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, 59, require('ZC_PROPERTY_PET'))
d:add(0x013d, 36, require('ZC_RECOVERY'))
d:add(0x01fc, -1, require('ZC_REPAIRITEMLIST'))
d:add(0x0171, -1, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, 5, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, -1, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x016a, 34, require('ZC_REQ_JOIN_GUILD'))
d:add(0x023a, -1, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00aa, 53, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x0167, -1, require('ZC_RESULT_MAKE_GUILD'))
d:add(0x00e1, -1, require('ZC_ROLE_CHANGE'))
d:add(0x00d7, 2, require('ZC_ROOM_NEWENTRY'))
d:add(0x00d1, 6, require('ZC_SETTING_WHISPER_PC'))
d:add(0x00d2, -1, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x010f, -1, require('ZC_SKILLINFO_LIST'))
d:add(0x0120, -1, require('ZC_SKILL_DISAPPEAR'))
d:add(0x011f, 282, require('ZC_SKILL_ENTRY'))
d:add(0x01c9, 10, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, -1, require('ZC_SKILL_UPDATE'))
d:add(0x01e1, 26, require('ZC_SPIRITS2'))
d:add(0x020e, 6, require('ZC_STARSKILL'))
d:add(0x0229, 9, require('ZC_STATE_CHANGE3'))
d:add(0x00bd, -1, require('ZC_STATUS'))
d:add(0x00be, -1, require('ZC_STATUS_CHANGE'))
d:add(0x0088, -1, require('ZC_STOPMOVE'))
d:add(0x0131, -1, require('ZC_STORE_ENTRY'))
d:add(0x00a6, -1, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, -1, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x00a5, 54, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x0224, 26, require('ZC_TAEKWON_POINT'))
d:add(0x016d, 10, require('ZC_UPDATE_CHARSTAT'))
d:add(0x00c2, 5, require('ZC_USER_COUNT'))
d:add(0x013e, 23, require('ZC_USESKILL_ACK'))
d:add(0x00a8, -1, require('ZC_USE_ITEM_ACK'))
d:add(0x01c8, -1, require('ZC_USE_ITEM_ACK2'))
d:add(0x011a, 9, require('ZC_USE_SKILL'))
d:add(0x00b5, -1, require('ZC_WAIT_DIALOG'))
d:add(0x0097, -1, require('ZC_WHISPER'))

return d
