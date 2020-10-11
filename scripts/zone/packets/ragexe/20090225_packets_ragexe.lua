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

d:add(0x0208, 6, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00e8, 7, require('CZ_ADD_EXCHANGE_ITEM'))
d:add(0x0218, -1, require('CZ_ALCHEMIST_RANK'))
d:add(0x0172, -1, require('CZ_ALLY_GUILD'))
d:add(0x0217, 8, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, -1, require('CZ_BROADCAST'))
d:add(0x00ed, -1, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, -1, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 5, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, -1, require('CZ_CHANGE_DIRECTION2'))
d:add(0x019d, 10, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x0102, 11, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x00b8, 2, require('CZ_CHOOSE_MENU'))
d:add(0x0146, -1, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, 11, require('CZ_COMMAND_MER'))
d:add(0x00eb, 6, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, -1, require('CZ_CONTACTNPC'))
d:add(0x0203, 11, require('CZ_DELETE_FRIENDS'))
d:add(0x01e7, 7, require('CZ_DORIDORI'))
d:add(0x0436, 4, require('CZ_ENTER2'))
d:add(0x00ef, 2, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, 7, require('CZ_EXIT_ROOM'))
d:add(0x017e, 30, require('CZ_GUILD_CHAT'))
d:add(0x016e, 186, require('CZ_GUILD_NOTICE'))
d:add(0x02f6, 19, require('CZ_IRMAIL_LIST'))
d:add(0x013f, -1, require('CZ_ITEM_CREATE'))
d:add(0x0362, 3, require('CZ_ITEM_PICKUP2'))
d:add(0x0363, 13, require('CZ_ITEM_THROW2'))
d:add(0x016b, -1, require('CZ_JOIN_GUILD'))
d:add(0x00f9, -1, require('CZ_MAKE_GROUP'))
d:add(0x01e8, -1, require('CZ_MAKE_GROUP2'))
d:add(0x0126, 10, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0364, 30, require('CZ_MOVE_ITEM_FROM_BODY_TO_STORE2'))
d:add(0x0127, 4, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0134, 4, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x01bc, -1, require('CZ_RECALL'))
d:add(0x0161, -1, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, 10, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x018e, 5, require('CZ_REQMAKINGITEM'))
d:add(0x0369, 2, require('CZ_REQNAME_BYGID2'))
d:add(0x0437, 16, require('CZ_REQUEST_ACT2'))
d:add(0x0233, 60, require('CZ_REQUEST_ACTNPC'))
d:add(0x035f, 26, require('CZ_REQUEST_MOVE2'))
d:add(0x0232, 8, require('CZ_REQUEST_MOVENPC'))
d:add(0x0234, -1, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0360, 8, require('CZ_REQUEST_TIME2'))
d:add(0x015b, -1, require('CZ_REQ_BAN_GUILD'))
d:add(0x0130, 8, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, 7, require('CZ_REQ_CARTOFF'))
d:add(0x012e, 2, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, 6, require('CZ_REQ_DISCONNECT'))
d:add(0x00bf, 4, require('CZ_REQ_EMOTION'))
d:add(0x00d9, 58, require('CZ_REQ_ENTER_ROOM'))
d:add(0x00e2, -1, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x0149, -1, require('CZ_REQ_GIVE_MANNER_POINT'))
d:add(0x014f, 7, require('CZ_REQ_GUILD_MENU'))
d:add(0x017c, -1, require('CZ_REQ_ITEMCOMPOSITION'))
d:add(0x0178, 68, require('CZ_REQ_ITEMIDENTIFY'))
d:add(0x01fd, 29, require('CZ_REQ_ITEMREPAIR'))
d:add(0x0100, 6, require('CZ_REQ_LEAVE_GROUP'))
d:add(0x01ae, 6, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, 6, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x01b2, -1, require('CZ_REQ_OPENSTORE2'))
d:add(0x00c1, -1, require('CZ_REQ_USER_COUNT'))
d:add(0x00d3, 10, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, 6, require('CZ_RESTART'))
d:add(0x01a7, -1, require('CZ_SELECT_PETEGG'))
d:add(0x011b, 30, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, 79, require('CZ_SETTING_WHISPER_PC'))
d:add(0x00d0, -1, require('CZ_SETTING_WHISPER_STATE'))
d:add(0x01bb, -1, require('CZ_SHIFT'))
d:add(0x0225, -1, require('CZ_TAEKWON_RANK'))
d:add(0x019f, 5, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0438, 3, require('CZ_USE_SKILL2'))
d:add(0x0096, -1, require('CZ_WHISPER'))
d:add(0x0073, 282, require('ZC_ACCEPT_ENTER'))
d:add(0x0083, 8, require('ZC_ACCEPT_QUIT'))
d:add(0x00ea, 12, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, -1, require('ZC_ACK_BAN_GUILD'))
d:add(0x00d6, 4, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x015e, 21, require('ZC_ACK_DISORGANIZE_GUILD_RESULT'))
d:add(0x01f5, -1, require('ZC_ACK_EXCHANGE_ITEM2'))
d:add(0x017d, 31, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 6, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x0188, 10, require('ZC_ACK_ITEMREFINING'))
d:add(0x015a, 6, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x0274, 8, require('ZC_ACK_MAIL_RETURN'))
d:add(0x00fa, 3, require('ZC_ACK_MAKE_GROUP'))
d:add(0x011e, 3, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x0095, 33, require('ZC_ACK_REQNAME'))
d:add(0x0195, 8, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, -1, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x018b, 21, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x0169, 26, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0110, -1, require('ZC_ACK_TOUSESKILL'))
d:add(0x0098, -1, require('ZC_ACK_WHISPER'))
d:add(0x013b, 3, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, -1, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, 2, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x00f4, 2, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01c4, 7, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x0104, 26, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x021c, 9, require('ZC_ALCHEMIST_POINT'))
d:add(0x013a, -1, require('ZC_ATTACK_RANGE'))
d:add(0x0163, -1, require('ZC_BAN_LIST'))
d:add(0x021b, 6, require('ZC_BLACKSMITH_POINT'))
d:add(0x0219, 28, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, 2, require('ZC_BROADCAST'))
d:add(0x00ee, 4, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0123, -1, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01ef, 2, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, 30, require('ZC_CHANGESTATE_MER'))
d:add(0x01a4, -1, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, 2, require('ZC_CHANGE_CHATROOM'))
d:add(0x009c, 65, require('ZC_CHANGE_DIRECTION'))
d:add(0x00b6, 6, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, 3, require('ZC_CLOSE_STORE'))
d:add(0x01d2, 26, require('ZC_COMBODELAY'))
d:add(0x00ec, 5, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, -1, require('ZC_CONGRATULATION'))
d:add(0x0141, 17, require('ZC_COUPLESTATUS'))
d:add(0x0137, -1, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, 10, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, 7, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x00f6, 2, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x00d8, 97, require('ZC_DESTROY_ROOM'))
d:add(0x01cf, -1, require('ZC_DEVOTIONLIST'))
d:add(0x0132, 39, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, 2, require('ZC_DISPEL'))
d:add(0x00db, 10, require('ZC_ENTER_ROOM'))
d:add(0x00a4, 31, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x0295, 8, require('ZC_EQUIPMENT_ITEMLIST2'))
d:add(0x013c, -1, require('ZC_EQUIP_ARROW'))
d:add(0x022f, -1, require('ZC_FEED_MER'))
d:add(0x0201, -1, require('ZC_FRIENDS_LIST'))
d:add(0x0206, 14, require('ZC_FRIENDS_STATE'))
d:add(0x0227, 86, require('ZC_GAME_GUARD'))
d:add(0x0101, -1, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, -1, require('ZC_GROUP_LIST'))
d:add(0x017f, 3, require('ZC_GUILD_CHAT'))
d:add(0x01b6, 18, require('ZC_GUILD_INFO2'))
d:add(0x016f, 10, require('ZC_GUILD_NOTICE'))
d:add(0x0162, -1, require('ZC_GUILD_SKILLINFO'))
d:add(0x0235, 22, require('ZC_HOSKILLINFO_LIST'))
d:add(0x02f5, 6, require('ZC_IRMAIL_NOTIFY'))
d:add(0x02f4, -1, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, -1, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, -1, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x00a1, -1, require('ZC_ITEM_DISAPPEAR'))
d:add(0x009d, -1, require('ZC_ITEM_ENTRY'))
d:add(0x009e, 6, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x00af, -1, require('ZC_ITEM_THROW_ACK'))
d:add(0x0238, -1, require('ZC_KILLER_RANK'))
d:add(0x00b1, 30, require('ZC_LONGPAR_CHANGE'))
d:add(0x01ad, -1, require('ZC_MAKINGARROW_LIST'))
d:add(0x0154, 17, require('ZC_MEMBERMGR_INFO'))
d:add(0x00dd, -1, require('ZC_MEMBER_EXIT'))
d:add(0x00dc, 26, require('ZC_MEMBER_NEWENTRY'))
d:add(0x00b7, 2, require('ZC_MENU_LIST'))
d:add(0x018c, -1, require('ZC_MONSTER_INFO'))
d:add(0x0196, 4, require('ZC_MSG_STATE_CHANGE'))
d:add(0x014c, 57, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x02e1, 3, require('ZC_NOTIFY_ACT2'))
d:add(0x007a, -1, require('ZC_NOTIFY_ACTENTRY'))
d:add(0x0121, 10, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x008d, 34, require('ZC_NOTIFY_CHAT'))
d:add(0x0109, -1, require('ZC_NOTIFY_CHAT_PARTY'))
d:add(0x019b, 6, require('ZC_NOTIFY_EFFECT'))
d:add(0x0075, -1, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0086, -1, require('ZC_NOTIFY_MOVE'))
d:add(0x02ec, 2, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x0079, 20, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x022b, -1, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x02ed, 29, require('ZC_NOTIFY_NEWENTRY4'))
d:add(0x0087, 6, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x0107, -1, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x01eb, -1, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x01de, 59, require('ZC_NOTIFY_SKILL2'))
d:add(0x022a, -1, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x007c, 19, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, 8, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x0077, 7, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0080, 36, require('ZC_NOTIFY_VANISH'))
d:add(0x0093, -1, require('ZC_NPCACK_ENABLE'))
d:add(0x012d, 22, require('ZC_OPENSTORE'))
d:add(0x01ab, 10, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, 2, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, 14, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0133, 8, require('ZC_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x0136, 30, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x00ca, -1, require('ZC_PC_PURCHASE_RESULT'))
d:add(0x0135, 3, require('ZC_PC_PURCHASE_RESULT_FROMMC'))
d:add(0x00c7, -1, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x01a6, -1, require('ZC_PETEGG_LIST'))
d:add(0x01aa, -1, require('ZC_PET_ACT'))
d:add(0x0166, 4, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x0160, -1, require('ZC_POSITION_INFO'))
d:add(0x022e, 26, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, -1, require('ZC_PROPERTY_PET'))
d:add(0x013d, 6, require('ZC_RECOVERY'))
d:add(0x00da, 6, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x01fc, 4, require('ZC_REPAIRITEMLIST'))
d:add(0x0207, 7, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x0171, -1, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, -1, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, 37, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x023a, 8, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00ac, 14, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00aa, 2, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x0148, 10, require('ZC_RESURRECTION'))
d:add(0x00d7, -1, require('ZC_ROOM_NEWENTRY'))
d:add(0x00b4, 30, require('ZC_SAY_DIALOG'))
d:add(0x00d2, 2, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x010f, -1, require('ZC_SKILLINFO_LIST'))
d:add(0x0120, 15, require('ZC_SKILL_DISAPPEAR'))
d:add(0x011f, 6, require('ZC_SKILL_ENTRY'))
d:add(0x01c9, 6, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, -1, require('ZC_SKILL_UPDATE'))
d:add(0x01d0, -1, require('ZC_SPIRITS'))
d:add(0x01d7, 5, require('ZC_SPRITE_CHANGE2'))
d:add(0x020e, -1, require('ZC_STARSKILL'))
d:add(0x0119, -1, require('ZC_STATE_CHANGE'))
d:add(0x00bd, -1, require('ZC_STATUS'))
d:add(0x00bc, 27, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, -1, require('ZC_STOPMOVE'))
d:add(0x00a6, 10, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x00a5, 12, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x0224, -1, require('ZC_TAEKWON_POINT'))
d:add(0x016d, -1, require('ZC_UPDATE_CHARSTAT'))
d:add(0x01f2, -1, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, -1, require('ZC_UPDATE_GDID'))
d:add(0x00c2, 9, require('ZC_USER_COUNT'))
d:add(0x013e, 6, require('ZC_USESKILL_ACK'))
d:add(0x01c8, 53, require('ZC_USE_ITEM_ACK2'))
d:add(0x011a, 9, require('ZC_USE_SKILL'))
d:add(0x00b5, 32, require('ZC_WAIT_DIALOG'))
d:add(0x011c, 26, require('ZC_WARPLIST'))
d:add(0x0097, 4, require('ZC_WHISPER'))

return d
