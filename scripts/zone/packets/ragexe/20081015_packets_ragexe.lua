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

d:add(0x00e6, 4, require('CZ_ACK_EXCHANGE_ITEM'))
d:add(0x0208, -1, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00c5, -1, require('CZ_ACK_SELECT_DEALTYPE'))
d:add(0x0202, -1, require('CZ_ADD_FRIENDS'))
d:add(0x0218, -1, require('CZ_ALCHEMIST_RANK'))
d:add(0x0099, 3, require('CZ_BROADCAST'))
d:add(0x00ed, 11, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, 6, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 8, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, -1, require('CZ_CHANGE_DIRECTION2'))
d:add(0x0102, -1, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x00b8, -1, require('CZ_CHOOSE_MENU'))
d:add(0x01ed, 2, require('CZ_CHOPOKGI'))
d:add(0x0146, 20, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, 6, require('CZ_COMMAND_MER'))
d:add(0x00eb, 10, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, -1, require('CZ_CONTACTNPC'))
d:add(0x00d5, 6, require('CZ_CREATE_CHATROOM'))
d:add(0x0203, -1, require('CZ_DELETE_FRIENDS'))
d:add(0x00ce, 6, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x01e7, 4, require('CZ_DORIDORI'))
d:add(0x0436, 7, require('CZ_ENTER2'))
d:add(0x00ef, 3, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, -1, require('CZ_EXIT_ROOM'))
d:add(0x017e, 10, require('CZ_GUILD_CHAT'))
d:add(0x016e, 7, require('CZ_GUILD_NOTICE'))
d:add(0x0143, -1, require('CZ_INPUT_EDITDLG'))
d:add(0x01d5, 4, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f6, -1, require('CZ_IRMAIL_LIST'))
d:add(0x02f3, 7, require('CZ_IRMAIL_SEND'))
d:add(0x013f, -1, require('CZ_ITEM_CREATE'))
d:add(0x0363, 17, require('CZ_ITEM_THROW2'))
d:add(0x0237, -1, require('CZ_KILLER_RANK'))
d:add(0x00f9, 22, require('CZ_MAKE_GROUP'))
d:add(0x0364, 11, require('CZ_MOVE_ITEM_FROM_BODY_TO_STORE2'))
d:add(0x0129, 3, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x0134, -1, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00c9, 30, require('CZ_PC_SELL_ITEMLIST'))
d:add(0x01bc, 2, require('CZ_RECALL'))
d:add(0x01bd, -1, require('CZ_RECALL_GID'))
d:add(0x0161, -1, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x011d, 21, require('CZ_REMEMBER_WARPPOINT'))
d:add(0x018e, 14, require('CZ_REQMAKINGITEM'))
d:add(0x0437, 55, require('CZ_REQUEST_ACT2'))
d:add(0x0233, 3, require('CZ_REQUEST_ACTNPC'))
d:add(0x0108, 22, require('CZ_REQUEST_CHAT_PARTY'))
d:add(0x0234, -1, require('CZ_REQUEST_MOVETOOWNER'))
d:add(0x0170, 23, require('CZ_REQ_ALLY_GUILD'))
d:add(0x0130, -1, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, 30, require('CZ_REQ_CARTOFF'))
d:add(0x0155, -1, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x012e, -1, require('CZ_REQ_CLOSESTORE'))
d:add(0x00bf, 21, require('CZ_REQ_EMOTION'))
d:add(0x00d9, -1, require('CZ_REQ_ENTER_ROOM'))
d:add(0x00e4, 27, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x0103, 8, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x0149, 6, require('CZ_REQ_GIVE_MANNER_POINT'))
d:add(0x014d, 5, require('CZ_REQ_GUILD_MENUINTERFACE'))
d:add(0x017c, 6, require('CZ_REQ_ITEMCOMPOSITION'))
d:add(0x017a, 6, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0100, -1, require('CZ_REQ_LEAVE_GROUP'))
d:add(0x0165, 8, require('CZ_REQ_MAKE_GUILD'))
d:add(0x01ae, 2, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, -1, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x00e0, -1, require('CZ_REQ_ROLE_CHANGE'))
d:add(0x00c1, -1, require('CZ_REQ_USER_COUNT'))
d:add(0x00a9, -1, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, -1, require('CZ_REQ_WHISPER_LIST'))
d:add(0x00b2, -1, require('CZ_RESTART'))
d:add(0x01ce, -1, require('CZ_SELECTAUTOSPELL'))
d:add(0x01a7, -1, require('CZ_SELECT_PETEGG'))
d:add(0x011b, 4, require('CZ_SELECT_WARPPOINT'))
d:add(0x00cf, 4, require('CZ_SETTING_WHISPER_PC'))
d:add(0x01bb, -1, require('CZ_SHIFT'))
d:add(0x00bb, 11, require('CZ_STATUS_CHANGE'))
d:add(0x0225, 10, require('CZ_TAEKWON_RANK'))
d:add(0x019f, -1, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0439, 11, require('CZ_USE_ITEM2'))
d:add(0x0366, -1, require('CZ_USE_SKILL_TOGROUND2'))
d:add(0x0367, 58, require('CZ_USE_SKILL_TOGROUND_WITHTALKBOX2'))
d:add(0x0096, 12, require('CZ_WHISPER'))
d:add(0x0073, -1, require('ZC_ACCEPT_ENTER'))
d:add(0x0083, 26, require('ZC_ACCEPT_QUIT'))
d:add(0x012c, 2, require('ZC_ACK_ADDITEM_TO_CART'))
d:add(0x00ea, -1, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, -1, require('ZC_ACK_BAN_GUILD'))
d:add(0x00d6, 7, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x015e, 8, require('ZC_ACK_DISORGANIZE_GUILD_RESULT'))
d:add(0x00e7, 10, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x017d, 16, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 26, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x0188, 67, require('ZC_ACK_ITEMREFINING'))
d:add(0x015a, 26, require('ZC_ACK_LEAVE_GUILD'))
d:add(0x0274, -1, require('ZC_ACK_MAIL_RETURN'))
d:add(0x00fa, -1, require('ZC_ACK_MAKE_GROUP'))
d:add(0x018f, 6, require('ZC_ACK_REQMAKINGITEM'))
d:add(0x0095, 6, require('ZC_ACK_REQNAME'))
d:add(0x0195, -1, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, 114, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x00fd, 3, require('ZC_ACK_REQ_JOIN_GROUP'))
d:add(0x0169, 6, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0110, 10, require('ZC_ACK_TOUSESKILL'))
d:add(0x0098, -1, require('ZC_ACK_WHISPER'))
d:add(0x013b, -1, require('ZC_ACTION_FAILURE'))
d:add(0x00e9, 15, require('ZC_ADD_EXCHANGE_ITEM'))
d:add(0x0209, 4, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x0104, -1, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x0111, -1, require('ZC_ADD_SKILL'))
d:add(0x0139, 18, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x013a, 10, require('ZC_ATTACK_RANGE'))
d:add(0x0163, 2, require('ZC_BAN_LIST'))
d:add(0x0219, -1, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, 5, require('ZC_BROADCAST'))
d:add(0x01c3, -1, require('ZC_BROADCAST2'))
d:add(0x00ee, 2, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0230, -1, require('ZC_CHANGESTATE_MER'))
d:add(0x00b6, 79, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, 5, require('ZC_CLOSE_STORE'))
d:add(0x01d2, -1, require('ZC_COMBODELAY'))
d:add(0x00ec, 14, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 39, require('ZC_CONGRATULATION'))
d:add(0x0141, -1, require('ZC_COUPLESTATUS'))
d:add(0x0137, -1, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, -1, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, 4, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x0132, 9, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, 6, require('ZC_DISPEL'))
d:add(0x00c0, 182, require('ZC_EMOTION'))
d:add(0x00db, 2, require('ZC_ENTER_ROOM'))
d:add(0x00a4, 8, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x0295, -1, require('ZC_EQUIPMENT_ITEMLIST2'))
d:add(0x00f0, 27, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x022f, -1, require('ZC_FEED_MER'))
d:add(0x01a3, -1, require('ZC_FEED_PET'))
d:add(0x0201, 8, require('ZC_FRIENDS_LIST'))
d:add(0x0227, -1, require('ZC_GAME_GUARD'))
d:add(0x0101, 3, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, 17, require('ZC_GROUP_LIST'))
d:add(0x01b6, 26, require('ZC_GUILD_INFO2'))
d:add(0x0162, 2, require('ZC_GUILD_SKILLINFO'))
d:add(0x0235, 26, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, -1, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, 71, require('ZC_IRMAIL_NOTIFY'))
d:add(0x02f4, 6, require('ZC_IRMAIL_SEND_RES'))
d:add(0x017b, 3, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, -1, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x009d, -1, require('ZC_ITEM_ENTRY'))
d:add(0x00af, 81, require('ZC_ITEM_THROW_ACK'))
d:add(0x0238, 8, require('ZC_KILLER_RANK'))
d:add(0x01ad, 26, require('ZC_MAKINGARROW_LIST'))
d:add(0x00dc, 7, require('ZC_MEMBER_NEWENTRY'))
d:add(0x00b7, 22, require('ZC_MENU_LIST'))
d:add(0x018c, 2, require('ZC_MONSTER_INFO'))
d:add(0x0196, 8, require('ZC_MSG_STATE_CHANGE'))
d:add(0x010a, 16, require('ZC_MVP_GETTING_ITEM'))
d:add(0x010b, 6, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x00a3, -1, require('ZC_NORMAL_ITEMLIST'))
d:add(0x008a, 30, require('ZC_NOTIFY_ACT'))
d:add(0x007a, 6, require('ZC_NOTIFY_ACTENTRY'))
d:add(0x008d, 20, require('ZC_NOTIFY_CHAT'))
d:add(0x019b, -1, require('ZC_NOTIFY_EFFECT'))
d:add(0x0117, 32, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, -1, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, 29, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0189, 90, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0199, 7, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x007b, -1, require('ZC_NOTIFY_MOVEENTRY'))
d:add(0x01da, 282, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, -1, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x0079, 53, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x022b, 282, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x02ed, 5, require('ZC_NOTIFY_NEWENTRY4'))
d:add(0x008e, 66, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0107, -1, require('ZC_NOTIFY_POSITION_TO_GROUPM'))
d:add(0x01eb, 2, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x019a, -1, require('ZC_NOTIFY_RANKING'))
d:add(0x01de, -1, require('ZC_NOTIFY_SKILL2'))
d:add(0x0078, 10, require('ZC_NOTIFY_STANDENTRY'))
d:add(0x022a, 19, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x007c, 10, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, 3, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x007f, -1, require('ZC_NOTIFY_TIME'))
d:add(0x0077, -1, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, 9, require('ZC_NPCACK_ENABLE'))
d:add(0x0091, 7, require('ZC_NPCACK_MAPMOVE'))
d:add(0x0092, -1, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x01b0, 30, require('ZC_NPCSPRITE_CHANGE'))
d:add(0x0142, -1, require('ZC_OPEN_EDITDLG'))
d:add(0x00b0, 30, require('ZC_PAR_CHANGE'))
d:add(0x01ab, 2, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, 4, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, -1, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0133, 28, require('ZC_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x0136, -1, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x00ca, -1, require('ZC_PC_PURCHASE_RESULT'))
d:add(0x00c7, 15, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x01a6, 12, require('ZC_PETEGG_LIST'))
d:add(0x01aa, -1, require('ZC_PET_ACT'))
d:add(0x0166, -1, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x022e, -1, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, 34, require('ZC_PROPERTY_PET'))
d:add(0x01fc, 44, require('ZC_REPAIRITEMLIST'))
d:add(0x0207, -1, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x0171, -1, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, 6, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, -1, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x023a, 54, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00ac, 3, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00b3, -1, require('ZC_RESTART_ACK'))
d:add(0x0167, 30, require('ZC_RESULT_MAKE_GUILD'))
d:add(0x023c, 18, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x00e1, 30, require('ZC_ROLE_CHANGE'))
d:add(0x00d7, 35, require('ZC_ROOM_NEWENTRY'))
d:add(0x00c4, 26, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d1, 3, require('ZC_SETTING_WHISPER_PC'))
d:add(0x01b3, 2, require('ZC_SHOW_IMAGE2'))
d:add(0x010f, -1, require('ZC_SKILLINFO_LIST'))
d:add(0x010e, 53, require('ZC_SKILLINFO_UPDATE'))
d:add(0x011f, 6, require('ZC_SKILL_ENTRY'))
d:add(0x01ac, 8, require('ZC_SKILL_UPDATE'))
d:add(0x01d0, -1, require('ZC_SPIRITS'))
d:add(0x00c3, -1, require('ZC_SPRITE_CHANGE'))
d:add(0x01d7, 60, require('ZC_SPRITE_CHANGE2'))
d:add(0x020e, -1, require('ZC_STARSKILL'))
d:add(0x0119, 6, require('ZC_STATE_CHANGE'))
d:add(0x0229, 6, require('ZC_STATE_CHANGE3'))
d:add(0x00bd, 6, require('ZC_STATUS'))
d:add(0x00bc, 8, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0131, 10, require('ZC_STORE_ENTRY'))
d:add(0x00a5, 10, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x01f0, -1, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 11, require('ZC_TAEKWON_POINT'))
d:add(0x016d, -1, require('ZC_UPDATE_CHARSTAT'))
d:add(0x01f2, 8, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x00c2, 5, require('ZC_USER_COUNT'))
d:add(0x00a8, -1, require('ZC_USE_ITEM_ACK'))
d:add(0x01c8, 6, require('ZC_USE_ITEM_ACK2'))
d:add(0x011c, 3, require('ZC_WARPLIST'))
d:add(0x0097, -1, require('ZC_WHISPER'))

return d
