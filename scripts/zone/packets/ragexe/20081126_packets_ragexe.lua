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

d:add(0x00e6, 68, require('CZ_ACK_EXCHANGE_ITEM'))
d:add(0x00e8, 30, require('CZ_ADD_EXCHANGE_ITEM'))
d:add(0x0202, 14, require('CZ_ADD_FRIENDS'))
d:add(0x0218, 102, require('CZ_ALCHEMIST_RANK'))
d:add(0x0172, 282, require('CZ_ALLY_GUILD'))
d:add(0x0217, -1, require('CZ_BLACKSMITH_RANK'))
d:add(0x0118, 54, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 27, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, -1, require('CZ_CHANGE_DIRECTION2'))
d:add(0x019d, 18, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x00b8, 2, require('CZ_CHOOSE_MENU'))
d:add(0x01ed, 5, require('CZ_CHOPOKGI'))
d:add(0x0146, 60, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, 20, require('CZ_COMMAND_MER'))
d:add(0x0090, -1, require('CZ_CONTACTNPC'))
d:add(0x00d5, 19, require('CZ_CREATE_CHATROOM'))
d:add(0x00cc, 14, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x01e7, 6, require('CZ_DORIDORI'))
d:add(0x0436, 9, require('CZ_ENTER2'))
d:add(0x00e3, 8, require('CZ_EXIT_ROOM'))
d:add(0x016e, 3, require('CZ_GUILD_NOTICE'))
d:add(0x01d5, 8, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f6, -1, require('CZ_IRMAIL_LIST'))
d:add(0x02f3, 4, require('CZ_IRMAIL_SEND'))
d:add(0x0363, 6, require('CZ_ITEM_THROW2'))
d:add(0x00ff, 10, require('CZ_JOIN_GROUP'))
d:add(0x016b, -1, require('CZ_JOIN_GUILD'))
d:add(0x019c, -1, require('CZ_LOCALBROADCAST'))
d:add(0x00f9, -1, require('CZ_MAKE_GROUP'))
d:add(0x01e8, 28, require('CZ_MAKE_GROUP2'))
d:add(0x0126, 10, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0364, 6, require('CZ_MOVE_ITEM_FROM_BODY_TO_STORE2'))
d:add(0x0129, 2, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x0365, 4, require('CZ_MOVE_ITEM_FROM_STORE_TO_BODY2'))
d:add(0x0128, 29, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x007d, 22, require('CZ_NOTIFY_ACTORINIT'))
d:add(0x0134, 282, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x0161, -1, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, -1, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x01ba, 5, require('CZ_REMOVE_AID'))
d:add(0x018e, -1, require('CZ_REQMAKINGITEM'))
d:add(0x0368, -1, require('CZ_REQNAME2'))
d:add(0x0369, -1, require('CZ_REQNAME_BYGID2'))
d:add(0x035f, -1, require('CZ_REQUEST_MOVE2'))
d:add(0x0232, -1, require('CZ_REQUEST_MOVENPC'))
d:add(0x0170, -1, require('CZ_REQ_ALLY_GUILD'))
d:add(0x015b, 54, require('CZ_REQ_BAN_GUILD'))
d:add(0x0130, 6, require('CZ_REQ_BUY_FROMMC'))
d:add(0x0155, -1, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x00e4, 6, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x0103, 5, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x00e2, -1, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x0149, -1, require('CZ_REQ_GIVE_MANNER_POINT'))
d:add(0x017a, 3, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x01fd, 32, require('CZ_REQ_ITEMREPAIR'))
d:add(0x00fc, -1, require('CZ_REQ_JOIN_GROUP'))
d:add(0x0168, 14, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0165, 21, require('CZ_REQ_MAKE_GUILD'))
d:add(0x01ae, 10, require('CZ_REQ_MAKINGARROW'))
d:add(0x01b2, 182, require('CZ_REQ_OPENSTORE2'))
d:add(0x00e0, 6, require('CZ_REQ_ROLE_CHANGE'))
d:add(0x00a9, 28, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, -1, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, -1, require('CZ_RESTART'))
d:add(0x01ce, 6, require('CZ_SELECTAUTOSPELL'))
d:add(0x01a7, 5, require('CZ_SELECT_PETEGG'))
d:add(0x00cf, -1, require('CZ_SETTING_WHISPER_PC'))
d:add(0x0225, 23, require('CZ_TAEKWON_RANK'))
d:add(0x019f, 7, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0073, 30, require('ZC_ACCEPT_ENTER'))
d:add(0x0083, 6, require('ZC_ACCEPT_QUIT'))
d:add(0x012c, 6, require('ZC_ACK_ADDITEM_TO_CART'))
d:add(0x00ea, 3, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, -1, require('ZC_ACK_BAN_GUILD'))
d:add(0x00d6, 10, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x00e7, 7, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x017d, 6, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 26, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x0188, -1, require('ZC_ACK_ITEMREFINING'))
d:add(0x0274, -1, require('ZC_ACK_MAIL_RETURN'))
d:add(0x018f, -1, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, -1, require('ZC_ACK_REQNAME'))
d:add(0x0194, 3, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x018b, 14, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x00fd, 31, require('ZC_ACK_REQ_JOIN_GROUP'))
d:add(0x0169, 10, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0110, -1, require('ZC_ACK_TOUSESKILL'))
d:add(0x00e9, -1, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0124, -1, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x01c5, -1, require('ZC_ADD_ITEM_TO_CART2'))
d:add(0x00f4, 3, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01e9, 186, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x021a, -1, require('ZC_ALCHEMIST_RANK'))
d:add(0x0139, 18, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x0147, -1, require('ZC_AUTORUN_SKILL'))
d:add(0x01cd, 5, require('ZC_AUTOSPELLLIST'))
d:add(0x0163, 30, require('ZC_BAN_LIST'))
d:add(0x01c3, -1, require('ZC_BROADCAST2'))
d:add(0x0122, 66, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, 9, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x0123, -1, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01ef, -1, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, -1, require('ZC_CHANGESTATE_MER'))
d:add(0x01a4, -1, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, 86, require('ZC_CHANGE_CHATROOM'))
d:add(0x009c, 7, require('ZC_CHANGE_DIRECTION'))
d:add(0x0144, -1, require('ZC_COMPASS'))
d:add(0x00ec, 4, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 4, require('ZC_CONGRATULATION'))
d:add(0x00f6, 7, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x0105, -1, require('ZC_DELETE_MEMBER_FROM_GROUP'))
d:add(0x00d8, 6, require('ZC_DESTROY_ROOM'))
d:add(0x01cf, 8, require('ZC_DEVOTIONLIST'))
d:add(0x0132, 55, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, 24, require('ZC_DISPEL'))
d:add(0x00c0, 6, require('ZC_EMOTION'))
d:add(0x0295, 7, require('ZC_EQUIPMENT_ITEMLIST2'))
d:add(0x013c, 16, require('ZC_EQUIP_ARROW'))
d:add(0x00f0, 2, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x022f, -1, require('ZC_FEED_MER'))
d:add(0x01a3, -1, require('ZC_FEED_PET'))
d:add(0x0201, 67, require('ZC_FRIENDS_LIST'))
d:add(0x0206, 3, require('ZC_FRIENDS_STATE'))
d:add(0x0227, 39, require('ZC_GAME_GUARD'))
d:add(0x0101, -1, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, 3, require('ZC_GROUP_LIST'))
d:add(0x017f, -1, require('ZC_GUILD_CHAT'))
d:add(0x01b6, 65, require('ZC_GUILD_INFO2'))
d:add(0x016f, 32, require('ZC_GUILD_NOTICE'))
d:add(0x0235, -1, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, -1, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, -1, require('ZC_IRMAIL_NOTIFY'))
d:add(0x02f4, 11, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, 4, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, -1, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x009e, 26, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x0238, 2, require('ZC_KILLER_RANK'))
d:add(0x00b1, 16, require('ZC_LONGPAR_CHANGE'))
d:add(0x018d, 6, require('ZC_MAKABLEITEMLIST'))
d:add(0x01ad, 8, require('ZC_MAKINGARROW_LIST'))
d:add(0x00dd, 97, require('ZC_MEMBER_EXIT'))
d:add(0x00b7, 26, require('ZC_MENU_LIST'))
d:add(0x0440, 10, require('ZC_MILLENNIUMSHIELD'))
d:add(0x018c, -1, require('ZC_MONSTER_INFO'))
d:add(0x0196, -1, require('ZC_MSG_STATE_CHANGE'))
d:add(0x010a, -1, require('ZC_MVP_GETTING_ITEM'))
d:add(0x00a3, -1, require('ZC_NORMAL_ITEMLIST'))
d:add(0x01ee, 17, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x008a, -1, require('ZC_NOTIFY_ACT'))
d:add(0x019b, -1, require('ZC_NOTIFY_EFFECT'))
d:add(0x0117, 81, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, 8, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, 2, require('ZC_NOTIFY_INITCHAR'))
d:add(0x01d6, 11, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x007b, 30, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, -1, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, -1, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x01d9, 8, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x022b, 6, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x0107, 6, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x01eb, -1, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x019a, -1, require('ZC_NOTIFY_RANKING'))
d:add(0x01de, -1, require('ZC_NOTIFY_SKILL2'))
d:add(0x0078, 10, require('ZC_NOTIFY_STANDENTRY'))
d:add(0x01d8, -1, require('ZC_NOTIFY_STANDENTRY2'))
d:add(0x022a, -1, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x02ee, 6, require('ZC_NOTIFY_STANDENTRY4'))
d:add(0x00f2, -1, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x0077, 53, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, 14, require('ZC_NPCACK_ENABLE'))
d:add(0x0091, 26, require('ZC_NPCACK_MAPMOVE'))
d:add(0x01b0, 10, require('ZC_NPCSPRITE_CHANGE'))
d:add(0x0142, 2, require('ZC_OPEN_EDITDLG'))
d:add(0x01d4, 29, require('ZC_OPEN_EDITDLGSTR'))
d:add(0x01ab, -1, require('ZC_PAR_CHANGE_USER'))
d:add(0x00c6, -1, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x00ca, -1, require('ZC_PC_PURCHASE_RESULT'))
d:add(0x00c7, -1, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x01a6, 2, require('ZC_PETEGG_LIST'))
d:add(0x01aa, 29, require('ZC_PET_ACT'))
d:add(0x022e, 9, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, 7, require('ZC_PROPERTY_PET'))
d:add(0x013d, -1, require('ZC_RECOVERY'))
d:add(0x00da, -1, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x01fc, 2, require('ZC_REPAIRITEMLIST'))
d:add(0x0171, -1, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00fe, 27, require('ZC_REQ_JOIN_GROUP'))
d:add(0x016a, 26, require('ZC_REQ_JOIN_GUILD'))
d:add(0x023a, 10, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00ac, 6, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00b3, 2, require('ZC_RESTART_ACK'))
d:add(0x023c, -1, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x0148, -1, require('ZC_RESURRECTION'))
d:add(0x00e1, 2, require('ZC_ROLE_CHANGE'))
d:add(0x00d7, -1, require('ZC_ROOM_NEWENTRY'))
d:add(0x00b4, 10, require('ZC_SAY_DIALOG'))
d:add(0x00c4, 15, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d1, 11, require('ZC_SETTING_WHISPER_PC'))
d:add(0x00d2, 2, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x01b3, 12, require('ZC_SHOW_IMAGE2'))
d:add(0x0441, 4, require('ZC_SKILLINFO_DELETE'))
d:add(0x010e, -1, require('ZC_SKILLINFO_UPDATE'))
d:add(0x0120, -1, require('ZC_SKILL_DISAPPEAR'))
d:add(0x011f, 60, require('ZC_SKILL_ENTRY'))
d:add(0x01c9, 4, require('ZC_SKILL_ENTRY2'))
d:add(0x01d0, 31, require('ZC_SPIRITS'))
d:add(0x020e, 10, require('ZC_STARSKILL'))
d:add(0x0119, 11, require('ZC_STATE_CHANGE'))
d:add(0x0229, 7, require('ZC_STATE_CHANGE3'))
d:add(0x00bd, -1, require('ZC_STATUS'))
d:add(0x00be, -1, require('ZC_STATUS_CHANGE'))
d:add(0x00bc, 4, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, -1, require('ZC_STOPMOVE'))
d:add(0x0131, 15, require('ZC_STORE_ENTRY'))
d:add(0x00a6, 6, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, -1, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x01f0, -1, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 26, require('ZC_TAEKWON_POINT'))
d:add(0x01a0, 4, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x01f2, -1, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, 6, require('ZC_UPDATE_GDID'))
d:add(0x00c2, 2, require('ZC_USER_COUNT'))
d:add(0x013e, -1, require('ZC_USESKILL_ACK'))
d:add(0x00a8, 10, require('ZC_USE_ITEM_ACK'))
d:add(0x01c8, -1, require('ZC_USE_ITEM_ACK2'))
d:add(0x00b5, 3, require('ZC_WAIT_DIALOG'))

return d
