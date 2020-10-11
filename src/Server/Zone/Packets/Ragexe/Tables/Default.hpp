/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2019 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla. (sagunxp@gmail.com)
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************/

#ifndef HORIZON_ZONE_PACKET_LENGTH_TABLE
#define HORIZON_ZONE_PACKET_LENGTH_TABLE

#include "Server/Common/Base/NetworkPacket.hpp"
#include "Core/Multithreading/LockedLookupTable.hpp"
#include "Default.hpp"

#include <utility>
#include <memory>

#include "Server/Zone/Packets/Structures/CZ_ACK_AU_BOT.hpp"
#include "Server/Zone/Packets/Structures/CZ_ACK_CASH_PASSWORD.hpp"
#include "Server/Zone/Packets/Structures/CZ_ACK_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_ACK_GAME_GUARD.hpp"
#include "Server/Zone/Packets/Structures/CZ_ACK_REQ_ADD_FRIENDS.hpp"
#include "Server/Zone/Packets/Structures/CZ_ACK_SELECT_DEALTYPE.hpp"
#include "Server/Zone/Packets/Structures/CZ_ACK_STORE_PASSWORD.hpp"
#include "Server/Zone/Packets/Structures/CZ_ACTIVE_QUEST.hpp"
#include "Server/Zone/Packets/Structures/CZ_ADD_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_ADD_FRIENDS.hpp"
#include "Server/Zone/Packets/Structures/CZ_AGREE_STARPLACE.hpp"
#include "Server/Zone/Packets/Structures/CZ_ALCHEMIST_RANK.hpp"
#include "Server/Zone/Packets/Structures/CZ_ALLY_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_ALT_EQUIPMENT_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/CZ_ATTENDANCE_REWARD_REQUEST.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_ADD.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_ADD_CANCEL.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_ADD_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_BUY.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_CREATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_ITEM_SEARCH.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_REQ_MY_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_AUCTION_REQ_MY_SELL_STOP.hpp"
#include "Server/Zone/Packets/Structures/CZ_BATTLEFIELD_CHAT.hpp"
#include "Server/Zone/Packets/Structures/CZ_BATTLE_FIELD_LIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_BLACKSMITH_RANK.hpp"
#include "Server/Zone/Packets/Structures/CZ_BLOCKING_PLAY_CANCEL.hpp"
#include "Server/Zone/Packets/Structures/CZ_BOT_CHECK.hpp"
#include "Server/Zone/Packets/Structures/CZ_BROADCAST.hpp"
#include "Server/Zone/Packets/Structures/CZ_CANCEL_BATTLE_FIELD.hpp"
#include "Server/Zone/Packets/Structures/CZ_CANCEL_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_CANCEL_LOCKON.hpp"
#include "Server/Zone/Packets/Structures/CZ_CANCEL_MERGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHANGE_CHATROOM.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHANGE_DIRECTION.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHANGE_DIRECTION2.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHANGE_EFFECTSTATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHANGE_GROUPEXPOPTION.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHANGE_GROUP_MASTER.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHANGE_MAPTYPE.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHECK_RECEIVE_CHARACTER_NAME.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHOOSE_MENU.hpp"
#include "Server/Zone/Packets/Structures/CZ_CHOPOKGI.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLAN_CHAT.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLIENT_VERSION.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLOSE_BARGAIN_SALE_TOOL.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLOSE_CoreLog.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLOSE_RODEXBOX.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLOSE_SEARCH_STORE_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLOSE_SIMPLECASH_SHOP.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLOSE_STORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_CLOSE_WINDOW.hpp"
#include "Server/Zone/Packets/Structures/CZ_COMMAND_MER.hpp"
#include "Server/Zone/Packets/Structures/CZ_COMMAND_PET.hpp"
#include "Server/Zone/Packets/Structures/CZ_CONCLUDE_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_CONFIG.hpp"
#include "Server/Zone/Packets/Structures/CZ_CONTACTNPC.hpp"
#include "Server/Zone/Packets/Structures/CZ_CREATE_CHATROOM.hpp"
#include "Server/Zone/Packets/Structures/CZ_DEATH_QUESTION.hpp"
#include "Server/Zone/Packets/Structures/CZ_DELETE_FRIENDS.hpp"
#include "Server/Zone/Packets/Structures/CZ_DISCONNECT_ALL_CHARACTER.hpp"
#include "Server/Zone/Packets/Structures/CZ_DISCONNECT_CHARACTER.hpp"
#include "Server/Zone/Packets/Structures/CZ_DORIDORI.hpp"
#include "Server/Zone/Packets/Structures/CZ_DYNAMICNPC_CREATE_REQUEST.hpp"
#include "Server/Zone/Packets/Structures/CZ_ENTER.hpp"
#include "Server/Zone/Packets/Structures/CZ_ENTER2.hpp"
#include "Server/Zone/Packets/Structures/CZ_EQUIPWIN_MICROSCOPE.hpp"
#include "Server/Zone/Packets/Structures/CZ_EXEC_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_EXIT_ROOM.hpp"
#include "Server/Zone/Packets/Structures/CZ_GANGSI_RANK.hpp"
#include "Server/Zone/Packets/Structures/CZ_GM_FULLSTRIP.hpp"
#include "Server/Zone/Packets/Structures/CZ_GPK_AUTH.hpp"
#include "Server/Zone/Packets/Structures/CZ_GPK_DYNCODE_RELOAD.hpp"
#include "Server/Zone/Packets/Structures/CZ_GROUPINFO_CHANGE_V2.hpp"
#include "Server/Zone/Packets/Structures/CZ_GUILD_CHAT.hpp"
#include "Server/Zone/Packets/Structures/CZ_GUILD_NOTICE.hpp"
#include "Server/Zone/Packets/Structures/CZ_GUILD_ZENY.hpp"
#include "Server/Zone/Packets/Structures/CZ_HACKSH_CPX_MSG.hpp"
#include "Server/Zone/Packets/Structures/CZ_HUNTINGLIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_INPUT_EDITDLG.hpp"
#include "Server/Zone/Packets/Structures/CZ_INPUT_EDITDLGSTR.hpp"
#include "Server/Zone/Packets/Structures/CZ_INVENTORY_EXPAND.hpp"
#include "Server/Zone/Packets/Structures/CZ_INVENTORY_EXPAND_CONFIRMED.hpp"
#include "Server/Zone/Packets/Structures/CZ_INVENTORY_EXPAND_REJECTED.hpp"
#include "Server/Zone/Packets/Structures/CZ_INVENTORY_TAB.hpp"
#include "Server/Zone/Packets/Structures/CZ_IRMAIL_LIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_IRMAIL_SEND.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEMLISTWIN_RES.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEM_CREATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEM_CREATE_EX.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEM_PICKUP.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEM_PICKUP2.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEM_PICKUP_NEW_JAPEN.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEM_THROW.hpp"
#include "Server/Zone/Packets/Structures/CZ_ITEM_THROW2.hpp"
#include "Server/Zone/Packets/Structures/CZ_JOIN_BABY.hpp"
#include "Server/Zone/Packets/Structures/CZ_JOIN_BATTLE_FIELD.hpp"
#include "Server/Zone/Packets/Structures/CZ_JOIN_COUPLE.hpp"
#include "Server/Zone/Packets/Structures/CZ_JOIN_GROUP.hpp"
#include "Server/Zone/Packets/Structures/CZ_JOIN_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_KILLER_RANK.hpp"
#include "Server/Zone/Packets/Structures/CZ_KSY_EVENT.hpp"
#include "Server/Zone/Packets/Structures/CZ_LESSEFFECT.hpp"
#include "Server/Zone/Packets/Structures/CZ_LOCALBROADCAST.hpp"
#include "Server/Zone/Packets/Structures/CZ_MACRO_ITEM_PICKUP.hpp"
#include "Server/Zone/Packets/Structures/CZ_MACRO_REQUEST_ACT.hpp"
#include "Server/Zone/Packets/Structures/CZ_MACRO_REQUEST_MOVE.hpp"
#include "Server/Zone/Packets/Structures/CZ_MACRO_START.hpp"
#include "Server/Zone/Packets/Structures/CZ_MACRO_STOP.hpp"
#include "Server/Zone/Packets/Structures/CZ_MACRO_USE_SKILL.hpp"
#include "Server/Zone/Packets/Structures/CZ_MACRO_USE_SKILL_TOGROUND.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAIL_ADD_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAIL_DELETE.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAIL_GET_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAIL_GET_LIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAIL_OPEN.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAIL_RESET_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAIL_SEND.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAKE_GROUP.hpp"
#include "Server/Zone/Packets/Structures/CZ_MAKE_GROUP2.hpp"
#include "Server/Zone/Packets/Structures/CZ_MEMORIALDUNGEON_COMMAND.hpp"
#include "Server/Zone/Packets/Structures/CZ_MER_COMMAND.hpp"
#include "Server/Zone/Packets/Structures/CZ_MONSTER_TALK.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVETO_MAP.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_BODY_TO_CART.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_BODY_TO_GUILDSTORAGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_BODY_TO_STORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_BODY_TO_STORE2.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_CART_TO_BODY.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_CART_TO_GUILDSTORAGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_CART_TO_STORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_GUILDSTORAGE_TO_BODY.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_GUILDSTORAGE_TO_CART.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_STORE_TO_BODY.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_STORE_TO_BODY2.hpp"
#include "Server/Zone/Packets/Structures/CZ_MOVE_ITEM_FROM_STORE_TO_CART.hpp"
#include "Server/Zone/Packets/Structures/CZ_NOTIFY_ACTORINIT.hpp"
#include "Server/Zone/Packets/Structures/CZ_NPC_BARTER_CLOSE.hpp"
#include "Server/Zone/Packets/Structures/CZ_NPC_BARTER_PURCHASE.hpp"
#include "Server/Zone/Packets/Structures/CZ_NPC_MARKET_CLOSE.hpp"
#include "Server/Zone/Packets/Structures/CZ_NPC_MARKET_PURCHASE.hpp"
#include "Server/Zone/Packets/Structures/CZ_NPC_TRADE_QUIT.hpp"
#include "Server/Zone/Packets/Structures/CZ_NPROTECTGAMEGUARDCSAUTH.hpp"
#include "Server/Zone/Packets/Structures/CZ_OFFLINE_STORE_CREATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_OPEN_BARGAIN_SALE_TOOL.hpp"
#include "Server/Zone/Packets/Structures/CZ_OPEN_RODEXBOX.hpp"
#include "Server/Zone/Packets/Structures/CZ_OPEN_SIMPLE_CASHSHOP_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_BOOKING_REQ_DELETE.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_BOOKING_REQ_REGISTER.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_BOOKING_REQ_SEARCH.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_BOOKING_REQ_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_CONFIG.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_JOIN_REQ.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_JOIN_REQ_ACK.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_ACK_RECALL.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_ADD_FILTERLINGLIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_CANCEL_VOLUNTEER.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_REFUSE_VOLUNTEER.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_REQ_DELETE.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_REQ_REGISTER.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_REQ_SEARCH.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_REQ_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_REQ_VOLUNTEER.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_SHOW_EQUIPMENT.hpp"
#include "Server/Zone/Packets/Structures/CZ_PARTY_RECRUIT_SUB_FILTERLINGLIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_PC_BUY_CASH_POINT_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_PC_PURCHASE_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_PC_PURCHASE_ITEMLIST_FROMMC.hpp"
#include "Server/Zone/Packets/Structures/CZ_PC_PURCHASE_ITEMLIST_FROMMC2.hpp"
#include "Server/Zone/Packets/Structures/CZ_PC_SELL_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_PETEGG_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_PET_ACT.hpp"
#include "Server/Zone/Packets/Structures/CZ_PET_EVOLUTION.hpp"
#include "Server/Zone/Packets/Structures/CZ_PKMODE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_PRIVATE_AIRSHIP_REQUEST.hpp"
#include "Server/Zone/Packets/Structures/CZ_PROGRESS.hpp"
#include "Server/Zone/Packets/Structures/CZ_RECALL.hpp"
#include "Server/Zone/Packets/Structures/CZ_RECALL_GID.hpp"
#include "Server/Zone/Packets/Structures/CZ_RECALL_SSO.hpp"
#include "Server/Zone/Packets/Structures/CZ_RECV_ROULETTE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REFINE_ADD_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REFINE_ITEM_REQUEST.hpp"
#include "Server/Zone/Packets/Structures/CZ_REFINE_WINDOW_CLOSE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REGISTER_GUILD_EMBLEM_IMG.hpp"
#include "Server/Zone/Packets/Structures/CZ_REG_CHANGE_GUILD_POSITIONINFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_REMEMBER_WARPPOINT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REMOVE_AID.hpp"
#include "Server/Zone/Packets/Structures/CZ_REMOVE_AID_SSO.hpp"
#include "Server/Zone/Packets/Structures/CZ_RENAME_MER.hpp"
#include "Server/Zone/Packets/Structures/CZ_RENAME_PET.hpp"
#include "Server/Zone/Packets/Structures/CZ_REPLY_ENTRY_QUEUE_ADMISSION.hpp"
#include "Server/Zone/Packets/Structures/CZ_REPLY_LOBBY_ADMISSION.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQMAKINGHOMUN.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQMAKINGITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQNAME.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQNAME2.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQNAME_BYGID.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQNAME_BYGID2.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_ACT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_ACT2.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_ACTNPC.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_CHAT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_CHAT_PARTY.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_MOVE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_MOVE2.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_MOVENPC.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_MOVETOOWNER.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_MOVE_NEW_JAPEN.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_QUIT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_TIME.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQUEST_TIME2.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ACCOUNTNAME.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ACH_REWARD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ADD_ITEM_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ALLY_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_APPLY_BARGAIN_SALE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_BANKING_CHECK.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_BANKING_DEPOSIT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_BANKING_WITHDRAW.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_BAN_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_BATTLE_STATE_MONITOR.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_BEFORE_WORLD_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_BUY_FROMMC.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CANCEL_WRITE_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CARTOFF.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CASH_BARGAIN_SALE_ITEM_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CHANGECART.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CHANGE_MEMBERPOS.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CHANGE_TITLE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CLICK_TO_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CLOSESTORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CLOSE_BANKING.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CLOSE_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CLOSE_GUILD_STORAGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_CLOSE_ROULETTE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_COUNT_BARGAIN_SALE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_DELETE_RELATED_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_DELETE_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_DISCONNECT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_DISORGANIZE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_EMOTION.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ENTER_ROOM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ENTRY_QUEUE_APPLY.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ENTRY_QUEUE_CANCEL.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ENTRY_QUEUE_RANKING.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_EXPEL_GROUP_MEMBER.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_EXPEL_MEMBER.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GENERATE_ROULETTE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GIVE_MANNER_BYNAME.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GIVE_MANNER_POINT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GUILDSTORAGE_LOG.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GUILD_EMBLEM_IMG.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GUILD_MEMBER_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GUILD_MENU.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GUILD_MENUINTERFACE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_GUILD_NAME.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_HOSTILE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ITEMCOMPOSITION.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ITEMCOMPOSITION_LIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ITEMIDENTIFY.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ITEMREPAIR.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ITEM_FROM_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_JOIN_BABY.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_JOIN_COUPLE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_JOIN_GROUP.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_JOIN_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_JOIN_GUILD2.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_LEAVE_GROUP.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_LEAVE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_MAIL_RETURN.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_MAKE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_MAKINGARROW.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_MAKINGITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_MERGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_NEXT_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_NEXT_SCRIPT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ONECLICK_ITEMIDENTIFY.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPENSTORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPENSTORE2.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPEN_BANKING.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPEN_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPEN_GUILD_STORAGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPEN_MEMBER_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPEN_ROULETTE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPEN_UI.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_OPEN_WRITE_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_PARTY_NAME.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_RANKING.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_READ_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_REFRESH_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_REMAINTIME.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_REMOVE_BARGAIN_SALE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_REMOVE_RODEX_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ROLE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ROULETTE_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_SCHEDULER_CASHITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_SEND_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_SE_CASH_TAB_CODE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_STATUS.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_STATUS_GM.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_TAKEOFF_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_TRADE_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_USER_COUNT.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_WEAPONREFINE.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_WEAR_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_WEAR_EQUIP_V5.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_WHISPER_LIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_REQ_ZENY_FROM_RODEX.hpp"
#include "Server/Zone/Packets/Structures/CZ_RESET.hpp"
#include "Server/Zone/Packets/Structures/CZ_RESTART.hpp"
#include "Server/Zone/Packets/Structures/CZ_SEARCH_STORE_INFO.hpp"
#include "Server/Zone/Packets/Structures/CZ_SEARCH_STORE_INFO_NEXT_PAGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_SEEK_PARTY.hpp"
#include "Server/Zone/Packets/Structures/CZ_SEEK_PARTY_MEMBER.hpp"
#include "Server/Zone/Packets/Structures/CZ_SELECTAUTOSPELL.hpp"
#include "Server/Zone/Packets/Structures/CZ_SELECTCART.hpp"
#include "Server/Zone/Packets/Structures/CZ_SELECT_PETEGG.hpp"
#include "Server/Zone/Packets/Structures/CZ_SELECT_WARPPOINT.hpp"
#include "Server/Zone/Packets/Structures/CZ_SETTING_WHISPER_PC.hpp"
#include "Server/Zone/Packets/Structures/CZ_SETTING_WHISPER_STATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_SE_CASHSHOP_CLOSE.hpp"
#include "Server/Zone/Packets/Structures/CZ_SE_CASHSHOP_OPEN.hpp"
#include "Server/Zone/Packets/Structures/CZ_SE_PC_BUY_CASHITEM_LIST.hpp"
#include "Server/Zone/Packets/Structures/CZ_SHIFT.hpp"
#include "Server/Zone/Packets/Structures/CZ_SHORTCUTKEYBAR_ROTATE.hpp"
#include "Server/Zone/Packets/Structures/CZ_SHORTCUT_KEY_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_SIMPLE_BUY_CASH_POINT_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_SIMPLE_CASH_BTNSHOW.hpp"
#include "Server/Zone/Packets/Structures/CZ_SKILL_SELECT_RESPONSE.hpp"
#include "Server/Zone/Packets/Structures/CZ_SSILIST_ITEM_CLICK.hpp"
#include "Server/Zone/Packets/Structures/CZ_STANDING_RESURRECTION.hpp"
#include "Server/Zone/Packets/Structures/CZ_START_USE_SKILL.hpp"
#include "Server/Zone/Packets/Structures/CZ_STATUS_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/CZ_STOP_USE_SKILL.hpp"
#include "Server/Zone/Packets/Structures/CZ_TAEKWON_RANK.hpp"
#include "Server/Zone/Packets/Structures/CZ_TRYCAPTURE_MONSTER.hpp"
#include "Server/Zone/Packets/Structures/CZ_TRYCOLLECTION.hpp"
#include "Server/Zone/Packets/Structures/CZ_UNKNOWN_BOOKING_SOMMON_MEMBER_08f5.hpp"
#include "Server/Zone/Packets/Structures/CZ_UPGRADE_SKILLLEVEL.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_ITEM2.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_ITEM_NEW_JAPEN.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_SKILL.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_SKILL2.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_SKILL_NEW_JAPEN.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_SKILL_TOGROUND.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_SKILL_TOGROUND2.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_SKILL_TOGROUND_WITHTALKBOX.hpp"
#include "Server/Zone/Packets/Structures/CZ_USE_SKILL_TOGROUND_WITHTALKBOX2.hpp"
#include "Server/Zone/Packets/Structures/CZ_WHISPER.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACCEPT_ENTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACCEPT_ENTER2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACCEPT_ENTER3.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACCEPT_QUIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACH_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ACCOUNTNAME.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ADDITEM_TO_CART.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ADD_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ADD_ITEM_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_APPLY_BARGAIN_SALE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_AUCTION_ADD_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_BANKING_DEPOSIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_BANKING_WITHDRAW.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_BAN_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_BAN_GUILD_SSO.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_BATTLE_STATE_MONITOR.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_BEFORE_WORLD_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CHANGE_GUILD_POSITIONINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CHANGE_TITLE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CLAN_LEAVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CLOSE_BANKING.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CLOSE_GUILD_STORAGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CLOSE_ROULETTE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_COUNT_BARGAIN_SALE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_CREATE_CHATROOM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_DELETE_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_DISCONNECT_CHARACTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_DISORGANIZE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_DISORGANIZE_GUILD_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ENTRY_QUEUE_APPLY.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ENTRY_QUEUE_CANCEL.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_EXCHANGE_ITEM2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_GENERATE_ROULETTE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_GIVE_MANNER_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_GUILDSTORAGE_LOG.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_GUILD_MEMBER_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_GUILD_MENUINTERFACE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_GUILD_NAME.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_INVENTORY_EXPAND.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_INVENTORY_EXPAND_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ITEMCOMPOSITION.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ITEMIDENTIFY.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ITEMLIST_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ITEMREFINING.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ITEMREPAIR.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ITEM_FROM_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_LEAVE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_MAIL_ADD_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_MAIL_DELETE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_MAIL_RETURN.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_MAKE_GROUP.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_MERGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_OPENSTORE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_OPEN_BANKING.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_OPEN_GUILD_STORAGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_OPEN_MEMBER_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_OPEN_ROULETTE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_OPEN_WRITE_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_PARTY_NAME.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_RANKING.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_READ_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REMEMBER_WARPPOINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REMOVE_BARGAIN_SALE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REMOVE_RODEX_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQMAKINGITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQNAME.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQNAMEALL.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQNAMEALL2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQNAME_BYGID.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQ_ALLY_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQ_CHANGE_MEMBERS.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQ_DISCONNECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQ_HOSTILE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQ_JOIN_GROUP.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_REQ_JOIN_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_RODEX_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ROULEITTE_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_SCHEDULER_CASHITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_SEND_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_SE_CASH_ITEM_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_SE_CASH_ITEM_LIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_STATUS_GM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_TAKEOFF_EQUIP_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_TOUSESKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_WEAPONREFINE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_WEAR_EQUIP_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_WHISPER.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_WHISPER02.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACK_ZENY_FROM_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACTION_FAILURE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ACTIVE_QUEST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_EXCHANGE_ITEM2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_EXCHANGE_ITEM3.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_EXCHANGE_ITEM4.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_FRIENDS_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_ITEM_TO_CART.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_ITEM_TO_CART2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_ITEM_TO_CART3.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_ITEM_TO_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_ITEM_TO_STORE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_ITEM_TO_STORE3.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_MEMBER_TO_GROUP.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_MEMBER_TO_GROUP2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_QUEST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_QUEST_EX.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_RELATED_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_ADD_SKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_AID.hpp"
#include "Server/Zone/Packets/Structures/ZC_AIRSHIP_MAPMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_AIRSHIP_SERVERMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALCHEMIST_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALCHEMIST_RANK.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALL_ACH_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALL_QUEST_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALL_QUEST_LIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALL_QUEST_LIST3.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALL_QUEST_LIST4.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALL_QUEST_MISSION.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALT_EQUIPMENT_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALT_EQUIPMENT_ITEMS.hpp"
#include "Server/Zone/Packets/Structures/ZC_ALT_EQUIPMENT_REMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_AOE_EFFECT_SKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_ATTACK_FAILURE_FOR_DISTANCE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ATTACK_RANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_AUCTION_ACK_MY_SELL_STOP.hpp"
#include "Server/Zone/Packets/Structures/ZC_AUCTION_ITEM_REQ_SEARCH.hpp"
#include "Server/Zone/Packets/Structures/ZC_AUCTION_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_AUCTION_WINDOWS.hpp"
#include "Server/Zone/Packets/Structures/ZC_AUTORUN_SKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_AUTOSPELLLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_BABYMSG.hpp"
#include "Server/Zone/Packets/Structures/ZC_BANKING_CHECK.hpp"
#include "Server/Zone/Packets/Structures/ZC_BAN_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLEFIELD_CHAT.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLEFIELD_NOTIFY_CAMPINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLEFIELD_NOTIFY_HP.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLEFIELD_NOTIFY_HP2.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLEFIELD_NOTIFY_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLEFIELD_NOTIFY_POSITION.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLE_FIELD_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLE_JOIN_DISABLE_STATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLE_JOIN_NOTI_DEFER.hpp"
#include "Server/Zone/Packets/Structures/ZC_BATTLE_NOTI_START_STEP.hpp"
#include "Server/Zone/Packets/Structures/ZC_BLACKSMITH_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_BLACKSMITH_RANK.hpp"
#include "Server/Zone/Packets/Structures/ZC_BLADESTOP.hpp"
#include "Server/Zone/Packets/Structures/ZC_BOSS_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_BROADCAST.hpp"
#include "Server/Zone/Packets/Structures/ZC_BROADCAST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_BROADCAST4.hpp"
#include "Server/Zone/Packets/Structures/ZC_BROADCASTING_SPECIAL_ITEM_OBTAIN.hpp"
#include "Server/Zone/Packets/Structures/ZC_BUYING_STORE_ENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_CANCEL_BATTLE_FIELD.hpp"
#include "Server/Zone/Packets/Structures/ZC_CANCEL_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_CARTOFF.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_EQUIPMENT_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_EQUIPMENT_ITEMLIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_EQUIPMENT_ITEMLIST3.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_ITEMLIST_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_ITEMLIST_EQUIP_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_ITEMLIST_EQUIP_V6.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_ITEMLIST_NORMAL.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_ITEMLIST_NORMAL_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_NORMAL_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_NORMAL_ITEMLIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_CART_NORMAL_ITEMLIST3.hpp"
#include "Server/Zone/Packets/Structures/ZC_CASH_ITEM_DELETE.hpp"
#include "Server/Zone/Packets/Structures/ZC_CASH_TIME_COUNTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_CHANGESTATE_MER.hpp"
#include "Server/Zone/Packets/Structures/ZC_CHANGESTATE_PET.hpp"
#include "Server/Zone/Packets/Structures/ZC_CHANGE_CHATROOM.hpp"
#include "Server/Zone/Packets/Structures/ZC_CHANGE_DIRECTION.hpp"
#include "Server/Zone/Packets/Structures/ZC_CHANGE_GROUP_MASTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_CHANGE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_CHECK_RECEIVE_CHARACTER_NAME.hpp"
#include "Server/Zone/Packets/Structures/ZC_CLANINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_CLEAR_CoreLog.hpp"
#include "Server/Zone/Packets/Structures/ZC_CLOSE_BARGAIN_SALE_TOOL.hpp"
#include "Server/Zone/Packets/Structures/ZC_CLOSE_CoreLog.hpp"
#include "Server/Zone/Packets/Structures/ZC_CLOSE_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_COMBODELAY.hpp"
#include "Server/Zone/Packets/Structures/ZC_COMPASS.hpp"
#include "Server/Zone/Packets/Structures/ZC_CONCLUDE_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_CONFIG.hpp"
#include "Server/Zone/Packets/Structures/ZC_CONFIG_NOTIFY.hpp"
#include "Server/Zone/Packets/Structures/ZC_CONGRATULATION.hpp"
#include "Server/Zone/Packets/Structures/ZC_COSTUME_SPRITE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_COUPLENAME.hpp"
#include "Server/Zone/Packets/Structures/ZC_COUPLESTATUS.hpp"
#include "Server/Zone/Packets/Structures/ZC_CUSTOM_HAT_EFFECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_C_MARKERINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_DEATH_QUESTION.hpp"
#include "Server/Zone/Packets/Structures/ZC_DEFINE_CHECK.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETEITEM_FROM_MCSTORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETEITEM_FROM_MCSTORE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETE_FRIENDS.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETE_ITEM_FROM_BODY.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETE_ITEM_FROM_CART.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETE_ITEM_FROM_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETE_MEMBER_FROM_GROUP.hpp"
#include "Server/Zone/Packets/Structures/ZC_DELETE_RELATED_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_DEL_QUEST.hpp"
#include "Server/Zone/Packets/Structures/ZC_DESTROY_ROOM.hpp"
#include "Server/Zone/Packets/Structures/ZC_DEVOTIONLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_DISAPPEAR_BUYING_STORE_ENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_DISAPPEAR_ENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_DISPATCH_TIMING_INFO_CHN.hpp"
#include "Server/Zone/Packets/Structures/ZC_DISPEL.hpp"
#include "Server/Zone/Packets/Structures/ZC_DIVORCE.hpp"
#include "Server/Zone/Packets/Structures/ZC_DRESSROOM_OPEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_DYNAMICNPC_CREATE_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_EFST_SET_ENTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_EFST_SET_ENTER2.hpp"
#include "Server/Zone/Packets/Structures/ZC_EL_INIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_EL_PAR_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_EMOTION.hpp"
#include "Server/Zone/Packets/Structures/ZC_ENTER_ROOM.hpp"
#include "Server/Zone/Packets/Structures/ZC_ENTRY_QUEUE_INIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPITEM_DAMAGED.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPMENT_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPMENT_ITEMLIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPMENT_ITEMLIST3.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPWIN_MICROSCOPE.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPWIN_MICROSCOPE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPWIN_MICROSCOPE_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPWIN_MICROSCOPE_V6.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPWIN_MICROSCOPE_V7.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIPWIN_OTHER.hpp"
#include "Server/Zone/Packets/Structures/ZC_EQUIP_ARROW.hpp"
#include "Server/Zone/Packets/Structures/ZC_ES_NOTI_MYINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_EXCHANGEITEM_UNDO.hpp"
#include "Server/Zone/Packets/Structures/ZC_EXEC_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_FAILED_GET_ITEM_FROM_ZONEDA.hpp"
#include "Server/Zone/Packets/Structures/ZC_FAILED_OPEN_BUYING_STORE_TO_BUYER.hpp"
#include "Server/Zone/Packets/Structures/ZC_FAILED_TRADE_BUYING_STORE_TO_BUYER.hpp"
#include "Server/Zone/Packets/Structures/ZC_FAILED_TRADE_BUYING_STORE_TO_SELLER.hpp"
#include "Server/Zone/Packets/Structures/ZC_FASTMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_FATIGUE_CHN.hpp"
#include "Server/Zone/Packets/Structures/ZC_FEED_MER.hpp"
#include "Server/Zone/Packets/Structures/ZC_FEED_PET.hpp"
#include "Server/Zone/Packets/Structures/ZC_FORMATSTRING_MSG.hpp"
#include "Server/Zone/Packets/Structures/ZC_FORMATSTRING_MSG_COLOR.hpp"
#include "Server/Zone/Packets/Structures/ZC_FRIENDS_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_FRIENDS_STATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_GAME_GUARD.hpp"
#include "Server/Zone/Packets/Structures/ZC_GANGSI_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_GANGSI_RANK.hpp"
#include "Server/Zone/Packets/Structures/ZC_GOLDPCCAFE_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_GPK_AUTH.hpp"
#include "Server/Zone/Packets/Structures/ZC_GPK_DYNCODE.hpp"
#include "Server/Zone/Packets/Structures/ZC_GROUPINFO_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_GROUP_ISALIVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_GROUP_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILDSTORAGE_ITEMLIST_EQUIP_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILDSTORAGE_ITEMLIST_EQUIP_V6.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILDSTORAGE_ITEMLIST_NORMAL_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_CHAT.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_EMBLEM_IMG.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_INFO2.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_MEMBER_MAP_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_NOTICE.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_POSITION.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_SKILLINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_GUILD_ZENY_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_HACKSH_CPX_MSG.hpp"
#include "Server/Zone/Packets/Structures/ZC_HACKSH_ERROR_MSG.hpp"
#include "Server/Zone/Packets/Structures/ZC_HIGHJUMP.hpp"
#include "Server/Zone/Packets/Structures/ZC_HOSKILLINFO_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_HOSKILLINFO_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_HO_PAR_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_HP_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_HP_INFO_TINY.hpp"
#include "Server/Zone/Packets/Structures/ZC_HUNTINGLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_HUNTING_QUEST_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_INFO_REMAINTIME.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_END.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_EXPANSION_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_ITEMLIST_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_ITEMLIST_EQUIP_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_ITEMLIST_EQUIP_V6.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_ITEMLIST_NORMAL.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_ITEMLIST_NORMAL_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_MOVE_FAILED.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_START.hpp"
#include "Server/Zone/Packets/Structures/ZC_INVENTORY_TAB.hpp"
#include "Server/Zone/Packets/Structures/ZC_IRMAIL_NOTIFY.hpp"
#include "Server/Zone/Packets/Structures/ZC_IRMAIL_SEND_RES.hpp"
#include "Server/Zone/Packets/Structures/ZC_ISVR_DISCONNECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEMCOMPOSITION_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEMIDENTIFY_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEMLISTWIN_OPEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_DELETE_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_DISAPPEAR.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_ENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_FALL_ENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_FALL_ENTRY4.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PICKUP_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PICKUP_ACK2.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PICKUP_ACK3.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PICKUP_ACK_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PICKUP_ACK_V6.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PICKUP_ACK_V7.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PICKUP_PARTY.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_PREVIEW.hpp"
#include "Server/Zone/Packets/Structures/ZC_ITEM_THROW_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_JOIN_BATTLE_FIELD.hpp"
#include "Server/Zone/Packets/Structures/ZC_KILLER_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_KILLER_RANK.hpp"
#include "Server/Zone/Packets/Structures/ZC_LESSEFFECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_LONGPAR_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_MACRO_ITEMPICKUP_FAIL.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAIL_RECEIVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAIL_REQ_GET_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAIL_REQ_GET_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAIL_REQ_OPEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAIL_REQ_SEND.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAIL_WINDOWS.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAKABLEITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAKINGARROW_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAKINGITEM_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAPPROPERTY.hpp"
#include "Server/Zone/Packets/Structures/ZC_MAPPROPERTY_R2.hpp"
#include "Server/Zone/Packets/Structures/ZC_MCSTORE_NOTMOVEITEM_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMBERMGR_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMBER_ADD.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMBER_EXIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMBER_NEWENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMORIALDUNGEON_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMORIALDUNGEON_NOTIFY.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMORIALDUNGEON_SUBSCRIPTION_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_MEMORIALDUNGEON_SUBSCRIPTION_NOTIFY.hpp"
#include "Server/Zone/Packets/Structures/ZC_MENU_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_MERGE_ITEM_OPEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_MER_INIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_MER_PAR_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_MER_PROPERTY.hpp"
#include "Server/Zone/Packets/Structures/ZC_MER_SKILLINFO_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_MER_SKILLINFO_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_MICROSCOPE.hpp"
#include "Server/Zone/Packets/Structures/ZC_MILLENNIUMSHIELD.hpp"
#include "Server/Zone/Packets/Structures/ZC_MONSTER_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_MONSTER_TALK.hpp"
#include "Server/Zone/Packets/Structures/ZC_MSG.hpp"
#include "Server/Zone/Packets/Structures/ZC_MSG_COLOR.hpp"
#include "Server/Zone/Packets/Structures/ZC_MSG_SKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_MSG_STATE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_MSG_STATE_CHANGE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_MSG_STATE_CHANGE3.hpp"
#include "Server/Zone/Packets/Structures/ZC_MSG_VALUE.hpp"
#include "Server/Zone/Packets/Structures/ZC_MVP.hpp"
#include "Server/Zone/Packets/Structures/ZC_MVP_GETTING_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_MVP_GETTING_SPECIAL_EXP.hpp"
#include "Server/Zone/Packets/Structures/ZC_MYGUILD_BASIC_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_MYITEMLIST_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NAVIGATION_ACTIVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NORMAL_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_NORMAL_ITEMLIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NORMAL_ITEMLIST3.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_ACT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_ACT2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_ACT3.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_ACTENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_ACT_POSITION.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_BARGAIN_SALE_CLOSE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_BARGAIN_SALE_SELLING.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_BIND_ON_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_CARTITEM_COUNTINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_CHAT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_CHAT_PARTY.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_CLAN_CHAT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_CLAN_CONNECTINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_CRAZYKILLER.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_EFFECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_EFFECT2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_EFFECT3.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_ENTRY_QUEUE_ADMISSION.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_ENTRY_QUEUE_APPLY.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_EXP.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_FONT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_GROUNDSKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_HP_TO_GROUPM.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_HP_TO_GROUPM_R2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_INITCHAR.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_LOBBY_ADMISSION.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MANNER_POINT_GIVEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MAPINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MAPPROPERTY.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MAPPROPERTY2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY10.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY11.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY3.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY4.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY7.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY8.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_MOVEENTRY9.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY10.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY11.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY3.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY4.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY5.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY6.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_NEWENTRY7.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_OFFLINE_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_PCBANG.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_PCBANG_PLAYING_TIME.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_PKINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_PLAYERCHAT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_PLAYERMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_POSITION_TO_GROUPM.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_POSITION_TO_GUILDM.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_RANKING.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_SKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_SKILL2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_SKILL_POSITION.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY10.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY11.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY2.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY3.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY4.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY5.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY7.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY8.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STANDENTRY_NPC.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_STOREITEM_COUNTINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_TIME.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_UNREAD_RODEX.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_UPDATECHAR.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_UPDATEPLAYER.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_VANISH.hpp"
#include "Server/Zone/Packets/Structures/ZC_NOTIFY_WEAPONITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPCACK_ENABLE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPCACK_MAPMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPCACK_SERVERMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPCSPRITE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPC_BARTER_OPEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPC_CHAT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPC_MARKET_OPEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPC_MARKET_PURCHASE_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPC_SHOWEFST_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_NPROTECTGAMEGUARDCSAUTH.hpp"
#include "Server/Zone/Packets/Structures/ZC_OFFLINE_STORE_ITEMS.hpp"
#include "Server/Zone/Packets/Structures/ZC_OFFLINE_STORE_OWNER_ITEMS.hpp"
#include "Server/Zone/Packets/Structures/ZC_OFFLINE_STORE_OWNER_ITEMS_READY.hpp"
#include "Server/Zone/Packets/Structures/ZC_OFFLINE_STORE_VANISH.hpp"
#include "Server/Zone/Packets/Structures/ZC_OFFLINE_STORE_VISIBLE.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPENSTORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPEN_BARGAIN_SALE_TOOL.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPEN_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPEN_EDITDLG.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPEN_EDITDLGSTR.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPEN_RODEX_THROUGH_NPC_ONLY.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPEN_SEARCH_STORE_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_OPEN_UI.hpp"
#include "Server/Zone/Packets/Structures/ZC_OTHER_GUILD_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_OVERWEIGHT_PERCENT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_BOOKING_ACK_DELETE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_BOOKING_ACK_REGISTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_BOOKING_ACK_SEARCH.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_BOOKING_NOTIFY_DELETE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_BOOKING_NOTIFY_INSERT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_BOOKING_NOTIFY_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_CONFIG.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_JOIN_REQ.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_JOIN_REQ_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_MEMBER_JOB_LEVEL.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_ACK_DELETE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_ACK_REGISTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_ADD_FILTERLINGLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_FAILED_RECALL.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_NOTIFY_DELETE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_NOTIFY_INSERT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_NOTIFY_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_RECALL_COST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_REFUSE_VOLUNTEER.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_REFUSE_VOLUNTEER_TO_PM.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_SUB_FILTERLINGLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PARTY_RECRUIT_VOLUNTEER_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_PAR_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PAR_CHANGE_USER.hpp"
#include "Server/Zone/Packets/Structures/ZC_PCBANG_EFFECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_CASH_POINT_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_CASH_POINT_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_PURCHASE_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_PURCHASE_ITEMLIST_FROMMC.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_PURCHASE_ITEMLIST_FROMMC2.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_PURCHASE_MYITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_PURCHASE_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_PURCHASE_RESULT_FROMMC.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_SELL_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PC_SELL_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PERSONAL_INFOMATION.hpp"
#include "Server/Zone/Packets/Structures/ZC_PERSONAL_INFOMATION2.hpp"
#include "Server/Zone/Packets/Structures/ZC_PERSONAL_INFOMATION_CHN.hpp"
#include "Server/Zone/Packets/Structures/ZC_PETEGG_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_PET_ACT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PET_EVOLUTION_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_PLAY_NPC_BGM.hpp"
#include "Server/Zone/Packets/Structures/ZC_POSITION_ID_NAME_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_POSITION_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_PREMIUM_CAMPAIGN_INFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_PRIVATE_AIRSHIP_RESPONSE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PRNPC_STATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PROGRESS.hpp"
#include "Server/Zone/Packets/Structures/ZC_PROGRESS_ACTOR.hpp"
#include "Server/Zone/Packets/Structures/ZC_PROGRESS_CANCEL.hpp"
#include "Server/Zone/Packets/Structures/ZC_PROPERTY_HOMUN.hpp"
#include "Server/Zone/Packets/Structures/ZC_PROPERTY_HOMUN_2.hpp"
#include "Server/Zone/Packets/Structures/ZC_PROPERTY_MERCE.hpp"
#include "Server/Zone/Packets/Structures/ZC_PROPERTY_PET.hpp"
#include "Server/Zone/Packets/Structures/ZC_QUEST_NOTIFY_EFFECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_READ_BOOK.hpp"
#include "Server/Zone/Packets/Structures/ZC_RECOVERY.hpp"
#include "Server/Zone/Packets/Structures/ZC_RECOVERY2.hpp"
#include "Server/Zone/Packets/Structures/ZC_RECV_ROULETTE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_REFINE_ADD_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_REFINE_OPEN_WINDOW.hpp"
#include "Server/Zone/Packets/Structures/ZC_REFINE_STATUS.hpp"
#include "Server/Zone/Packets/Structures/ZC_REFUSE_ENTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_REFUSE_ENTER_ROOM.hpp"
#include "Server/Zone/Packets/Structures/ZC_REFUSE_QUIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_REMOVE_EFFECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_REPAIRITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_REPLY_ACK_ENTRY_QUEUE_ADMISSION.hpp"
#include "Server/Zone/Packets/Structures/ZC_REPLY_ACK_LOBBY_ADMISSION.hpp"
#include "Server/Zone/Packets/Structures/ZC_REPLY_REMAINTIME.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_ACH_REWARD_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_ADD_FRIENDS.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_ALLY_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_AU_BOT.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_BABY.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_CASH_PASSWORD.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_COUPLE.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_EXCHANGE_ITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_EXCHANGE_ITEM2.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_GROUPINFO_CHANGE_V2.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_ITEM_EXPLANATION_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_JOIN_GROUP.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_JOIN_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_STORE_PASSWORD.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_TAKEOFF_EQUIP_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_TAKEOFF_EQUIP_ACK2.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_WEAR_EQUIP_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_REQ_WEAR_EQUIP_ACK2.hpp"
#include "Server/Zone/Packets/Structures/ZC_RESTART_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_RESULT_CASH_PASSWORD.hpp"
#include "Server/Zone/Packets/Structures/ZC_RESULT_MAKE_GUILD.hpp"
#include "Server/Zone/Packets/Structures/ZC_RESULT_PACKAGE_ITEM_TEST.hpp"
#include "Server/Zone/Packets/Structures/ZC_RESULT_STORE_PASSWORD.hpp"
#include "Server/Zone/Packets/Structures/ZC_RESURRECTION.hpp"
#include "Server/Zone/Packets/Structures/ZC_ROLE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_ROOM_NEWENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_SAY_CoreLog.hpp"
#include "Server/Zone/Packets/Structures/ZC_SAY_CoreLog2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SEARCH_STORE_INFO_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_SEARCH_STORE_INFO_FAILED.hpp"
#include "Server/Zone/Packets/Structures/ZC_SECRETSCAN_DATA.hpp"
#include "Server/Zone/Packets/Structures/ZC_SEEK_PARTY.hpp"
#include "Server/Zone/Packets/Structures/ZC_SEEK_PARTY_MEMBER.hpp"
#include "Server/Zone/Packets/Structures/ZC_SELECTCART.hpp"
#include "Server/Zone/Packets/Structures/ZC_SELECT_DEALTYPE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SETTING_WHISPER_PC.hpp"
#include "Server/Zone/Packets/Structures/ZC_SETTING_WHISPER_STATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SE_CASHSHOP_OPEN.hpp"
#include "Server/Zone/Packets/Structures/ZC_SE_CASHSHOP_OPEN2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SE_CASHSHOP_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SE_PC_BUY_CASHITEM_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_SE_PC_BUY_TAIWANCASHITEM_RESULT.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHANDA_PROTECT.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHORTCUT_KEY_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHORTCUT_KEY_LIST_V2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHORTCUT_KEY_LIST_V3.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHOWDIGIT.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHOWSCRIPT.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHOW_IMAGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SHOW_IMAGE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SIMPLE_CASHSHOP_POINT_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_SIMPLE_CASH_BTNSHOW.hpp"
#include "Server/Zone/Packets/Structures/ZC_SIMPLE_CASH_POINT_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILLINFO_DELETE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILLINFO_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILLINFO_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILLINFO_UPDATE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILLMSG.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_DISAPPEAR.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_ENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_ENTRY2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_ENTRY3.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_ENTRY4.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_ENTRY5.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_POSTDELAY.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_POSTDELAY_LIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_POSTDELAY_LIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_SELECT_REQUEST.hpp"
#include "Server/Zone/Packets/Structures/ZC_SKILL_UPDATE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SOUND.hpp"
#include "Server/Zone/Packets/Structures/ZC_SPIRITS.hpp"
#include "Server/Zone/Packets/Structures/ZC_SPIRITS2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SPIRITS_ATTRIBUTE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SPRITE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_SPRITE_CHANGE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_SSILIST_ITEM_CLICK_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_STARPLACE.hpp"
#include "Server/Zone/Packets/Structures/ZC_STARSKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_START_BABY.hpp"
#include "Server/Zone/Packets/Structures/ZC_START_CAPTURE.hpp"
#include "Server/Zone/Packets/Structures/ZC_START_COLLECTION.hpp"
#include "Server/Zone/Packets/Structures/ZC_START_COUPLE.hpp"
#include "Server/Zone/Packets/Structures/ZC_STATE_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_STATE_CHANGE3.hpp"
#include "Server/Zone/Packets/Structures/ZC_STATUS.hpp"
#include "Server/Zone/Packets/Structures/ZC_STATUS_CHANGE.hpp"
#include "Server/Zone/Packets/Structures/ZC_STATUS_CHANGE_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_STOPMOVE.hpp"
#include "Server/Zone/Packets/Structures/ZC_STOPMOVE_FORCE.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ENTRY.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_EQUIPMENT_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_EQUIPMENT_ITEMLIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_EQUIPMENT_ITEMLIST3.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_EQUIP.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_EQUIP_V2.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_EQUIP_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_EQUIP_V6.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_NORMAL.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_NORMAL_V2.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_NORMAL_V5.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_ITEMLIST_NORMAL_V6.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_NORMAL_ITEMLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_NORMAL_ITEMLIST2.hpp"
#include "Server/Zone/Packets/Structures/ZC_STORE_NORMAL_ITEMLIST3.hpp"
#include "Server/Zone/Packets/Structures/ZC_STYLE_CHANGE_RES.hpp"
#include "Server/Zone/Packets/Structures/ZC_TAEKWON_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_TAEKWON_RANK.hpp"
#include "Server/Zone/Packets/Structures/ZC_TALKBOX_CHATCONTENTS.hpp"
#include "Server/Zone/Packets/Structures/ZC_THROW_MVPITEM.hpp"
#include "Server/Zone/Packets/Structures/ZC_TRYCAPTURE_MONSTER.hpp"
#include "Server/Zone/Packets/Structures/ZC_TRYCOLLECTION.hpp"
#include "Server/Zone/Packets/Structures/ZC_UI_ACTION.hpp"
#include "Server/Zone/Packets/Structures/ZC_UNKNOWN_CLEAN_ITEMS_LISTS.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_CHARSTAT.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_CHARSTAT2.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_GDID.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_ITEM_FROM_BUYING_STORE.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_ITEM_FROM_BUYING_STORE2.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_MAPINFO.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_MISSION_HUNT.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_MISSION_HUNT_EX.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_RANKING_POINT.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_ROULETTE_COIN.hpp"
#include "Server/Zone/Packets/Structures/ZC_UPDATE_TAIWANCASH.hpp"
#include "Server/Zone/Packets/Structures/ZC_USER_COUNT.hpp"
#include "Server/Zone/Packets/Structures/ZC_USESKILL_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_USESKILL_ACK2.hpp"
#include "Server/Zone/Packets/Structures/ZC_USE_ITEM_ACK.hpp"
#include "Server/Zone/Packets/Structures/ZC_USE_ITEM_ACK2.hpp"
#include "Server/Zone/Packets/Structures/ZC_USE_SKILL.hpp"
#include "Server/Zone/Packets/Structures/ZC_USE_SKILL2.hpp"
#include "Server/Zone/Packets/Structures/ZC_WAIT_CoreLog.hpp"
#include "Server/Zone/Packets/Structures/ZC_WAIT_CoreLog2.hpp"
#include "Server/Zone/Packets/Structures/ZC_WARPLIST.hpp"
#include "Server/Zone/Packets/Structures/ZC_WHISPER.hpp"
#include "Server/Zone/Packets/Structures/ZC_WHISPER02.hpp"
#include "Server/Zone/Packets/Structures/ZC_WHISPER_LIST.hpp"

#if CLIENT_VERSION >= 20190109
#include "20190109.hpp"
#elif CLIENT_VERSION >= 20181226
#include "20181226.hpp"
#elif CLIENT_VERSION >= 20181219
#include "20181219.hpp"
#elif CLIENT_VERSION >= 20181212
#include "20181212.hpp"
#elif CLIENT_VERSION >= 20181205
#include "20181205.hpp"
#elif CLIENT_VERSION >= 20181128
#include "20181128.hpp"
#elif CLIENT_VERSION >= 20181121
#include "20181121.hpp"
#elif CLIENT_VERSION >= 20181114
#include "20181114.hpp"
#elif CLIENT_VERSION >= 20181107
#include "20181107.hpp"
#elif CLIENT_VERSION >= 20181031
#include "20181031.hpp"
#elif CLIENT_VERSION >= 20181024
#include "20181024.hpp"
#elif CLIENT_VERSION >= 20181017
#include "20181017.hpp"
#elif CLIENT_VERSION >= 20181002
#include "20181002.hpp"
#elif CLIENT_VERSION >= 20180919
#include "20180919.hpp"
#elif CLIENT_VERSION >= 20180912
#include "20180912.hpp"
#elif CLIENT_VERSION >= 20180831
#include "20180831.hpp"
#elif CLIENT_VERSION >= 20180829
#include "20180829.hpp"
#elif CLIENT_VERSION >= 20180822
#include "20180822.hpp"
#elif CLIENT_VERSION >= 20180808
#include "20180808.hpp"
#elif CLIENT_VERSION >= 20180801
#include "20180801.hpp"
#elif CLIENT_VERSION >= 20180718
#include "20180718.hpp"
#elif CLIENT_VERSION >= 20180704
#include "20180704.hpp"
#elif CLIENT_VERSION >= 20180621
#include "20180621.hpp"
#elif CLIENT_VERSION >= 20180620
#include "20180620.hpp"
#elif CLIENT_VERSION >= 20180605
#include "20180605.hpp"
#elif CLIENT_VERSION >= 20180530
#include "20180530.hpp"
#elif CLIENT_VERSION >= 20180523
#include "20180523.hpp"
#elif CLIENT_VERSION >= 20180516
#include "20180516.hpp"
#elif CLIENT_VERSION >= 20180509
#include "20180509.hpp"
#elif CLIENT_VERSION >= 20180502
#include "20180502.hpp"
#elif CLIENT_VERSION >= 20180425
#include "20180425.hpp"
#elif CLIENT_VERSION >= 20180418
#include "20180418.hpp"
#elif CLIENT_VERSION >= 20180404
#include "20180404.hpp"
#elif CLIENT_VERSION >= 20180328
#include "20180328.hpp"
#elif CLIENT_VERSION >= 20180321
#include "20180321.hpp"
#elif CLIENT_VERSION >= 20180315
#include "20180315.hpp"
#elif CLIENT_VERSION >= 20180314
#include "20180314.hpp"
#elif CLIENT_VERSION >= 20180309
#include "20180309.hpp"
#elif CLIENT_VERSION >= 20180307
#include "20180307.hpp"
#elif CLIENT_VERSION >= 20180221
#include "20180221.hpp"
#elif CLIENT_VERSION >= 20180213
#include "20180213.hpp"
#elif CLIENT_VERSION >= 20180207
#include "20180207.hpp"
#elif CLIENT_VERSION >= 20180131
#include "20180131.hpp"
#elif CLIENT_VERSION >= 20180124
#include "20180124.hpp"
#elif CLIENT_VERSION >= 20180117
#include "20180117.hpp"
#elif CLIENT_VERSION >= 20180103
#include "20180103.hpp"
#elif CLIENT_VERSION >= 20171227
#include "20171227.hpp"
#elif CLIENT_VERSION >= 20171220
#include "20171220.hpp"
#elif CLIENT_VERSION >= 20171213
#include "20171213.hpp"
#elif CLIENT_VERSION >= 20171206
#include "20171206.hpp"
#elif CLIENT_VERSION >= 20171129
#include "20171129.hpp"
#elif CLIENT_VERSION >= 20171122
#include "20171122.hpp"
#elif CLIENT_VERSION >= 20171115
#include "20171115.hpp"
#elif CLIENT_VERSION >= 20171108
#include "20171108.hpp"
#elif CLIENT_VERSION >= 20171101
#include "20171101.hpp"
#elif CLIENT_VERSION >= 20171025
#include "20171025.hpp"
#elif CLIENT_VERSION >= 20171018
#include "20171018.hpp"
#elif CLIENT_VERSION >= 20171011
#include "20171011.hpp"
#elif CLIENT_VERSION >= 20171002
#include "20171002.hpp"
#elif CLIENT_VERSION >= 20170927
#include "20170927.hpp"
#elif CLIENT_VERSION >= 20170920
#include "20170920.hpp"
#elif CLIENT_VERSION >= 20170913
#include "20170913.hpp"
#elif CLIENT_VERSION >= 20170906
#include "20170906.hpp"
#elif CLIENT_VERSION >= 20170830
#include "20170830.hpp"
#elif CLIENT_VERSION >= 20170823
#include "20170823.hpp"
#elif CLIENT_VERSION >= 20170816
#include "20170816.hpp"
#elif CLIENT_VERSION >= 20170809
#include "20170809.hpp"
#elif CLIENT_VERSION >= 20170801
#include "20170801.hpp"
#elif CLIENT_VERSION >= 20170726
#include "20170726.hpp"
#elif CLIENT_VERSION >= 20170719
#include "20170719.hpp"
#elif CLIENT_VERSION >= 20170712
#include "20170712.hpp"
#elif CLIENT_VERSION >= 20170705
#include "20170705.hpp"
#elif CLIENT_VERSION >= 20170628
#include "20170628.hpp"
#elif CLIENT_VERSION >= 20170621
#include "20170621.hpp"
#elif CLIENT_VERSION >= 20170614
#include "20170614.hpp"
#elif CLIENT_VERSION >= 20170607
#include "20170607.hpp"
#elif CLIENT_VERSION >= 20170531
#include "20170531.hpp"
#elif CLIENT_VERSION >= 20170524
#include "20170524.hpp"
#elif CLIENT_VERSION >= 20170517
#include "20170517.hpp"
#elif CLIENT_VERSION >= 20170502
#include "20170502.hpp"
#elif CLIENT_VERSION >= 20170426
#include "20170426.hpp"
#elif CLIENT_VERSION >= 20170419
#include "20170419.hpp"
#elif CLIENT_VERSION >= 20170412
#include "20170412.hpp"
#elif CLIENT_VERSION >= 20170405
#include "20170405.hpp"
#elif CLIENT_VERSION >= 20170329
#include "20170329.hpp"
#elif CLIENT_VERSION >= 20170322
#include "20170322.hpp"
#elif CLIENT_VERSION >= 20170315
#include "20170315.hpp"
#elif CLIENT_VERSION >= 20170308
#include "20170308.hpp"
#elif CLIENT_VERSION >= 20170228
#include "20170228.hpp"
#elif CLIENT_VERSION >= 20170222
#include "20170222.hpp"
#elif CLIENT_VERSION >= 20170215
#include "20170215.hpp"
#elif CLIENT_VERSION >= 20170208
#include "20170208.hpp"
#elif CLIENT_VERSION >= 20170201
#include "20170201.hpp"
#elif CLIENT_VERSION >= 20170125
#include "20170125.hpp"
#elif CLIENT_VERSION >= 20170118
#include "20170118.hpp"
#elif CLIENT_VERSION >= 20170111
#include "20170111.hpp"
#elif CLIENT_VERSION >= 20170104
#include "20170104.hpp"
#elif CLIENT_VERSION >= 20161228
#include "20161228.hpp"
#elif CLIENT_VERSION >= 20161221
#include "20161221.hpp"
#elif CLIENT_VERSION >= 20161214
#include "20161214.hpp"
#elif CLIENT_VERSION >= 20161207
#include "20161207.hpp"
#elif CLIENT_VERSION >= 20161130
#include "20161130.hpp"
#elif CLIENT_VERSION >= 20161123
#include "20161123.hpp"
#elif CLIENT_VERSION >= 20161116
#include "20161116.hpp"
#elif CLIENT_VERSION >= 20161109
#include "20161109.hpp"
#elif CLIENT_VERSION >= 20161103
#include "20161103.hpp"
#elif CLIENT_VERSION >= 20161102
#include "20161102.hpp"
#elif CLIENT_VERSION >= 20161026
#include "20161026.hpp"
#elif CLIENT_VERSION >= 20161019
#include "20161019.hpp"
#elif CLIENT_VERSION >= 20161012
#include "20161012.hpp"
#elif CLIENT_VERSION >= 20161005
#include "20161005.hpp"
#elif CLIENT_VERSION >= 20160928
#include "20160928.hpp"
#elif CLIENT_VERSION >= 20160921
#include "20160921.hpp"
#elif CLIENT_VERSION >= 20160913
#include "20160913.hpp"
#elif CLIENT_VERSION >= 20160907
#include "20160907.hpp"
#elif CLIENT_VERSION >= 20160831
#include "20160831.hpp"
#elif CLIENT_VERSION >= 20160824
#include "20160824.hpp"
#elif CLIENT_VERSION >= 20160817
#include "20160817.hpp"
#elif CLIENT_VERSION >= 20160810
#include "20160810.hpp"
#elif CLIENT_VERSION >= 20160803
#include "20160803.hpp"
#elif CLIENT_VERSION >= 20160727
#include "20160727.hpp"
#elif CLIENT_VERSION >= 20160720
#include "20160720.hpp"
#elif CLIENT_VERSION >= 20160713
#include "20160713.hpp"
#elif CLIENT_VERSION >= 20160706
#include "20160706.hpp"
#elif CLIENT_VERSION >= 20160630
#include "20160630.hpp"
#elif CLIENT_VERSION >= 20160629
#include "20160629.hpp"
#elif CLIENT_VERSION >= 20160622
#include "20160622.hpp"
#elif CLIENT_VERSION >= 20160615
#include "20160615.hpp"
#elif CLIENT_VERSION >= 20160609
#include "20160609.hpp"
#elif CLIENT_VERSION >= 20160608
#include "20160608.hpp"
#elif CLIENT_VERSION >= 20160601
#include "20160601.hpp"
#elif CLIENT_VERSION >= 20160526
#include "20160526.hpp"
#elif CLIENT_VERSION >= 20160525
#include "20160525.hpp"
#elif CLIENT_VERSION >= 20160518
#include "20160518.hpp"
#elif CLIENT_VERSION >= 20160511
#include "20160511.hpp"
#elif CLIENT_VERSION >= 20160504
#include "20160504.hpp"
#elif CLIENT_VERSION >= 20160427
#include "20160427.hpp"
#elif CLIENT_VERSION >= 20160420
#include "20160420.hpp"
#elif CLIENT_VERSION >= 20160414
#include "20160414.hpp"
#elif CLIENT_VERSION >= 20160406
#include "20160406.hpp"
#elif CLIENT_VERSION >= 20160330
#include "20160330.hpp"
#elif CLIENT_VERSION >= 20160323
#include "20160323.hpp"
#elif CLIENT_VERSION >= 20160318
#include "20160318.hpp"
#elif CLIENT_VERSION >= 20160316
#include "20160316.hpp"
#elif CLIENT_VERSION >= 20160309
#include "20160309.hpp"
#elif CLIENT_VERSION >= 20160302
#include "20160302.hpp"
#elif CLIENT_VERSION >= 20160224
#include "20160224.hpp"
#elif CLIENT_VERSION >= 20160217
#include "20160217.hpp"
#elif CLIENT_VERSION >= 20160211
#include "20160211.hpp"
#elif CLIENT_VERSION >= 20160203
#include "20160203.hpp"
#elif CLIENT_VERSION >= 20160127
#include "20160127.hpp"
#elif CLIENT_VERSION >= 20160120
#include "20160120.hpp"
#elif CLIENT_VERSION >= 20160113
#include "20160113.hpp"
#elif CLIENT_VERSION >= 20160106
#include "20160106.hpp"
#elif CLIENT_VERSION >= 20151230
#include "20151230.hpp"
#elif CLIENT_VERSION >= 20151223
#include "20151223.hpp"
#elif CLIENT_VERSION >= 20151216
#include "20151216.hpp"
#elif CLIENT_VERSION >= 20151209
#include "20151209.hpp"
#elif CLIENT_VERSION >= 20151202
#include "20151202.hpp"
#elif CLIENT_VERSION >= 20151125
#include "20151125.hpp"
#elif CLIENT_VERSION >= 20151118
#include "20151118.hpp"
#elif CLIENT_VERSION >= 20151111
#include "20151111.hpp"
#elif CLIENT_VERSION >= 20151104
#include "20151104.hpp"
#elif CLIENT_VERSION >= 20151029
#include "20151029.hpp"
#elif CLIENT_VERSION >= 20151028
#include "20151028.hpp"
#elif CLIENT_VERSION >= 20151022
#include "20151022.hpp"
#elif CLIENT_VERSION >= 20151021
#include "20151021.hpp"
#elif CLIENT_VERSION >= 20151014
#include "20151014.hpp"
#elif CLIENT_VERSION >= 20151007
#include "20151007.hpp"
#elif CLIENT_VERSION >= 20151001
#include "20151001.hpp"
#elif CLIENT_VERSION >= 20150923
#include "20150923.hpp"
#elif CLIENT_VERSION >= 20150916
#include "20150916.hpp"
#elif CLIENT_VERSION >= 20150909
#include "20150909.hpp"
#elif CLIENT_VERSION >= 20150902
#include "20150902.hpp"
#elif CLIENT_VERSION >= 20150826
#include "20150826.hpp"
#elif CLIENT_VERSION >= 20150819
#include "20150819.hpp"
#elif CLIENT_VERSION >= 20150812
#include "20150812.hpp"
#elif CLIENT_VERSION >= 20150805
#include "20150805.hpp"
#elif CLIENT_VERSION >= 20150729
#include "20150729.hpp"
#elif CLIENT_VERSION >= 20150722
#include "20150722.hpp"
#elif CLIENT_VERSION >= 20150715
#include "20150715.hpp"
#elif CLIENT_VERSION >= 20150708
#include "20150708.hpp"
#elif CLIENT_VERSION >= 20150702
#include "20150702.hpp"
#elif CLIENT_VERSION >= 20150701
#include "20150701.hpp"
#elif CLIENT_VERSION >= 20150624
#include "20150624.hpp"
#elif CLIENT_VERSION >= 20150618
#include "20150618.hpp"
#elif CLIENT_VERSION >= 20150617
#include "20150617.hpp"
#elif CLIENT_VERSION >= 20150610
#include "20150610.hpp"
#elif CLIENT_VERSION >= 20150603
#include "20150603.hpp"
#elif CLIENT_VERSION >= 20150527
#include "20150527.hpp"
#elif CLIENT_VERSION >= 20150520
#include "20150520.hpp"
#elif CLIENT_VERSION >= 20150513
#include "20150513.hpp"
#elif CLIENT_VERSION >= 20150507
#include "20150507.hpp"
#elif CLIENT_VERSION >= 20150429
#include "20150429.hpp"
#elif CLIENT_VERSION >= 20150422
#include "20150422.hpp"
#elif CLIENT_VERSION >= 20150415
#include "20150415.hpp"
#elif CLIENT_VERSION >= 20150408
#include "20150408.hpp"
#elif CLIENT_VERSION >= 20150401
#include "20150401.hpp"
#elif CLIENT_VERSION >= 20150325
#include "20150325.hpp"
#elif CLIENT_VERSION >= 20150318
#include "20150318.hpp"
#elif CLIENT_VERSION >= 20150311
#include "20150311.hpp"
#elif CLIENT_VERSION >= 20150304
#include "20150304.hpp"
#elif CLIENT_VERSION >= 20150226
#include "20150226.hpp"
#elif CLIENT_VERSION >= 20150225
#include "20150225.hpp"
#elif CLIENT_VERSION >= 20150217
#include "20150217.hpp"
#elif CLIENT_VERSION >= 20150211
#include "20150211.hpp"
#elif CLIENT_VERSION >= 20150204
#include "20150204.hpp"
#elif CLIENT_VERSION >= 20150130
#include "20150130.hpp"
#elif CLIENT_VERSION >= 20150129
#include "20150129.hpp"
#elif CLIENT_VERSION >= 20150128
#include "20150128.hpp"
#elif CLIENT_VERSION >= 20150121
#include "20150121.hpp"
#elif CLIENT_VERSION >= 20150114
#include "20150114.hpp"
#elif CLIENT_VERSION >= 20150107
#include "20150107.hpp"
#elif CLIENT_VERSION >= 20141231
#include "20141231.hpp"
#elif CLIENT_VERSION >= 20141224
#include "20141224.hpp"
#elif CLIENT_VERSION >= 20141217
#include "20141217.hpp"
#elif CLIENT_VERSION >= 20141210
#include "20141210.hpp"
#elif CLIENT_VERSION >= 20141203
#include "20141203.hpp"
#elif CLIENT_VERSION >= 20141126
#include "20141126.hpp"
#elif CLIENT_VERSION >= 20141119
#include "20141119.hpp"
#elif CLIENT_VERSION >= 20141112
#include "20141112.hpp"
#elif CLIENT_VERSION >= 20141105
#include "20141105.hpp"
#elif CLIENT_VERSION >= 20141029
#include "20141029.hpp"
#elif CLIENT_VERSION >= 20141022
#include "20141022.hpp"
#elif CLIENT_VERSION >= 20141016
#include "20141016.hpp"
#elif CLIENT_VERSION >= 20141015
#include "20141015.hpp"
#elif CLIENT_VERSION >= 20141008
#include "20141008.hpp"
#elif CLIENT_VERSION >= 20141001
#include "20141001.hpp"
#elif CLIENT_VERSION >= 20140924
#include "20140924.hpp"
#elif CLIENT_VERSION >= 20140917
#include "20140917.hpp"
#elif CLIENT_VERSION >= 20140903
#include "20140903.hpp"
#elif CLIENT_VERSION >= 20140827
#include "20140827.hpp"
#elif CLIENT_VERSION >= 20140820
#include "20140820.hpp"
#elif CLIENT_VERSION >= 20140814
#include "20140814.hpp"
#elif CLIENT_VERSION >= 20140813
#include "20140813.hpp"
#elif CLIENT_VERSION >= 20140806
#include "20140806.hpp"
#elif CLIENT_VERSION >= 20140730
#include "20140730.hpp"
#elif CLIENT_VERSION >= 20140723
#include "20140723.hpp"
#elif CLIENT_VERSION >= 20140716
#include "20140716.hpp"
#elif CLIENT_VERSION >= 20140709
#include "20140709.hpp"
#elif CLIENT_VERSION >= 20140702
#include "20140702.hpp"
#elif CLIENT_VERSION >= 20140625
#include "20140625.hpp"
#elif CLIENT_VERSION >= 20140618
#include "20140618.hpp"
#elif CLIENT_VERSION >= 20140613
#include "20140613.hpp"
#elif CLIENT_VERSION >= 20140612
#include "20140612.hpp"
#elif CLIENT_VERSION >= 20140611
#include "20140611.hpp"
#elif CLIENT_VERSION >= 20140605
#include "20140605.hpp"
#elif CLIENT_VERSION >= 20140528
#include "20140528.hpp"
#elif CLIENT_VERSION >= 20140521
#include "20140521.hpp"
#elif CLIENT_VERSION >= 20140514
#include "20140514.hpp"
#elif CLIENT_VERSION >= 20140508
#include "20140508.hpp"
#elif CLIENT_VERSION >= 20140430
#include "20140430.hpp"
#elif CLIENT_VERSION >= 20140423
#include "20140423.hpp"
#elif CLIENT_VERSION >= 20140416
#include "20140416.hpp"
#elif CLIENT_VERSION >= 20140409
#include "20140409.hpp"
#elif CLIENT_VERSION >= 20140402
#include "20140402.hpp"
#elif CLIENT_VERSION >= 20140326
#include "20140326.hpp"
#elif CLIENT_VERSION >= 20140319
#include "20140319.hpp"
#elif CLIENT_VERSION >= 20140312
#include "20140312.hpp"
#elif CLIENT_VERSION >= 20140305
#include "20140305.hpp"
#elif CLIENT_VERSION >= 20140226
#include "20140226.hpp"
#elif CLIENT_VERSION >= 20140219
#include "20140219.hpp"
#elif CLIENT_VERSION >= 20140212
#include "20140212.hpp"
#elif CLIENT_VERSION >= 20140205
#include "20140205.hpp"
#elif CLIENT_VERSION >= 20140129
#include "20140129.hpp"
#elif CLIENT_VERSION >= 20140122
#include "20140122.hpp"
#elif CLIENT_VERSION >= 20140115
#include "20140115.hpp"
#elif CLIENT_VERSION >= 20140108
#include "20140108.hpp"
#elif CLIENT_VERSION >= 20131230
#include "20131230.hpp"
#elif CLIENT_VERSION >= 20131223
#include "20131223.hpp"
#elif CLIENT_VERSION >= 20131218
#include "20131218.hpp"
#elif CLIENT_VERSION >= 20131211
#include "20131211.hpp"
#elif CLIENT_VERSION >= 20131204
#include "20131204.hpp"
#elif CLIENT_VERSION >= 20131127
#include "20131127.hpp"
#elif CLIENT_VERSION >= 20131120
#include "20131120.hpp"
#elif CLIENT_VERSION >= 20131113
#include "20131113.hpp"
#elif CLIENT_VERSION >= 20131108
#include "20131108.hpp"
#elif CLIENT_VERSION >= 20131107
#include "20131107.hpp"
#elif CLIENT_VERSION >= 20131106
#include "20131106.hpp"
#elif CLIENT_VERSION >= 20131030
#include "20131030.hpp"
#elif CLIENT_VERSION >= 20131023
#include "20131023.hpp"
#elif CLIENT_VERSION >= 20131016
#include "20131016.hpp"
#elif CLIENT_VERSION >= 20131008
#include "20131008.hpp"
#elif CLIENT_VERSION >= 20131002
#include "20131002.hpp"
#elif CLIENT_VERSION >= 20130925
#include "20130925.hpp"
#elif CLIENT_VERSION >= 20130917
#include "20130917.hpp"
#elif CLIENT_VERSION >= 20130911
#include "20130911.hpp"
#elif CLIENT_VERSION >= 20130904
#include "20130904.hpp"
#elif CLIENT_VERSION >= 20130828
#include "20130828.hpp"
#elif CLIENT_VERSION >= 20130821
#include "20130821.hpp"
#elif CLIENT_VERSION >= 20130814
#include "20130814.hpp"
#elif CLIENT_VERSION >= 20130807
#include "20130807.hpp"
#elif CLIENT_VERSION >= 20130731
#include "20130731.hpp"
#elif CLIENT_VERSION >= 20130724
#include "20130724.hpp"
#elif CLIENT_VERSION >= 20130717
#include "20130717.hpp"
#elif CLIENT_VERSION >= 20130710
#include "20130710.hpp"
#elif CLIENT_VERSION >= 20130703
#include "20130703.hpp"
#elif CLIENT_VERSION >= 20130626
#include "20130626.hpp"
#elif CLIENT_VERSION >= 20130618
#include "20130618.hpp"
#elif CLIENT_VERSION >= 20130612
#include "20130612.hpp"
#elif CLIENT_VERSION >= 20130605
#include "20130605.hpp"
#elif CLIENT_VERSION >= 20130529
#include "20130529.hpp"
#elif CLIENT_VERSION >= 20130522
#include "20130522.hpp"
#elif CLIENT_VERSION >= 20130515
#include "20130515.hpp"
#elif CLIENT_VERSION >= 20130508
#include "20130508.hpp"
#elif CLIENT_VERSION >= 20130502
#include "20130502.hpp"
#elif CLIENT_VERSION >= 20130424
#include "20130424.hpp"
#elif CLIENT_VERSION >= 20130417
#include "20130417.hpp"
#elif CLIENT_VERSION >= 20130410
#include "20130410.hpp"
#elif CLIENT_VERSION >= 20130403
#include "20130403.hpp"
#elif CLIENT_VERSION >= 20130327
#include "20130327.hpp"
#elif CLIENT_VERSION >= 20130320
#include "20130320.hpp"
#elif CLIENT_VERSION >= 20130313
#include "20130313.hpp"
#elif CLIENT_VERSION >= 20130306
#include "20130306.hpp"
#elif CLIENT_VERSION >= 20130227
#include "20130227.hpp"
#elif CLIENT_VERSION >= 20130220
#include "20130220.hpp"
#elif CLIENT_VERSION >= 20130215
#include "20130215.hpp"
#elif CLIENT_VERSION >= 20130206
#include "20130206.hpp"
#elif CLIENT_VERSION >= 20130130
#include "20130130.hpp"
#elif CLIENT_VERSION >= 20130121
#include "20130121.hpp"
#elif CLIENT_VERSION >= 20130116
#include "20130116.hpp"
#elif CLIENT_VERSION >= 20130115
#include "20130115.hpp"
#elif CLIENT_VERSION >= 20130109
#include "20130109.hpp"
#elif CLIENT_VERSION >= 20130107
#include "20130107.hpp"
#elif CLIENT_VERSION >= 20130103
#include "20130103.hpp"
#elif CLIENT_VERSION >= 20121227
#include "20121227.hpp"
#elif CLIENT_VERSION >= 20121218
#include "20121218.hpp"
#elif CLIENT_VERSION >= 20121212
#include "20121212.hpp"
#elif CLIENT_VERSION >= 20121205
#include "20121205.hpp"
#elif CLIENT_VERSION >= 20121128
#include "20121128.hpp"
#elif CLIENT_VERSION >= 20121121
#include "20121121.hpp"
#elif CLIENT_VERSION >= 20121114
#include "20121114.hpp"
#elif CLIENT_VERSION >= 20121107
#include "20121107.hpp"
#elif CLIENT_VERSION >= 20121031
#include "20121031.hpp"
#elif CLIENT_VERSION >= 20121024
#include "20121024.hpp"
#elif CLIENT_VERSION >= 20121017
#include "20121017.hpp"
#elif CLIENT_VERSION >= 20121010
#include "20121010.hpp"
#elif CLIENT_VERSION >= 20120926
#include "20120926.hpp"
#elif CLIENT_VERSION >= 20120925
#include "20120925.hpp"
#elif CLIENT_VERSION >= 20120919
#include "20120919.hpp"
#elif CLIENT_VERSION >= 20120911
#include "20120911.hpp"
#elif CLIENT_VERSION >= 20120905
#include "20120905.hpp"
#elif CLIENT_VERSION >= 20120830
#include "20120830.hpp"
#elif CLIENT_VERSION >= 20120822
#include "20120822.hpp"
#elif CLIENT_VERSION >= 20120814
#include "20120814.hpp"
#elif CLIENT_VERSION >= 20120808
#include "20120808.hpp"
#elif CLIENT_VERSION >= 20120801
#include "20120801.hpp"
#elif CLIENT_VERSION >= 20120724
#include "20120724.hpp"
#elif CLIENT_VERSION >= 20120716
#include "20120716.hpp"
#elif CLIENT_VERSION >= 20120712
#include "20120712.hpp"
#elif CLIENT_VERSION >= 20120710
#include "20120710.hpp"
#elif CLIENT_VERSION >= 20181121
#include "20181121.hpp"
#elif CLIENT_VERSION >= 20181031
#include "20181031.hpp"
#elif CLIENT_VERSION >= 20181017
#include "20181017.hpp"
#elif CLIENT_VERSION >= 20181002
#include "20181002.hpp"
#elif CLIENT_VERSION >= 20180912
#include "20180912.hpp"
#elif CLIENT_VERSION >= 20180829
#include "20180829.hpp"
#elif CLIENT_VERSION >= 20180801
#include "20180801.hpp"
#elif CLIENT_VERSION >= 20180605
#include "20180605.hpp"
#elif CLIENT_VERSION >= 20180418
#include "20180418.hpp"
#elif CLIENT_VERSION >= 20180315
#include "20180315.hpp"
#elif CLIENT_VERSION >= 20180314
#include "20180314.hpp"
#elif CLIENT_VERSION >= 20180307
#include "20180307.hpp"
#elif CLIENT_VERSION >= 20180221
#include "20180221.hpp"
#elif CLIENT_VERSION >= 20180213
#include "20180213.hpp"
#elif CLIENT_VERSION >= 20180207
#include "20180207.hpp"
#elif CLIENT_VERSION >= 20180124
#include "20180124.hpp"
#elif CLIENT_VERSION >= 20180117
#include "20180117.hpp"
#elif CLIENT_VERSION >= 20180103
#include "20180103.hpp"
#elif CLIENT_VERSION >= 20171227
#include "20171227.hpp"
#elif CLIENT_VERSION >= 20171220
#include "20171220.hpp"
#elif CLIENT_VERSION >= 20171213
#include "20171213.hpp"
#elif CLIENT_VERSION >= 20171206
#include "20171206.hpp"
#elif CLIENT_VERSION >= 20171129
#include "20171129.hpp"
#elif CLIENT_VERSION >= 20171122
#include "20171122.hpp"
#elif CLIENT_VERSION >= 20171115
#include "20171115.hpp"
#elif CLIENT_VERSION >= 20171108
#include "20171108.hpp"
#elif CLIENT_VERSION >= 20171101
#include "20171101.hpp"
#elif CLIENT_VERSION >= 20171025
#include "20171025.hpp"
#elif CLIENT_VERSION >= 20171018
#include "20171018.hpp"
#elif CLIENT_VERSION >= 20171011
#include "20171011.hpp"
#elif CLIENT_VERSION >= 20171002
#include "20171002.hpp"
#elif CLIENT_VERSION >= 20170927
#include "20170927.hpp"
#elif CLIENT_VERSION >= 20170920
#include "20170920.hpp"
#elif CLIENT_VERSION >= 20170913
#include "20170913.hpp"
#elif CLIENT_VERSION >= 20170906
#include "20170906.hpp"
#elif CLIENT_VERSION >= 20170830
#include "20170830.hpp"
#elif CLIENT_VERSION >= 20170823
#include "20170823.hpp"
#elif CLIENT_VERSION >= 20170816
#include "20170816.hpp"
#elif CLIENT_VERSION >= 20170809
#include "20170809.hpp"
#elif CLIENT_VERSION >= 20170801
#include "20170801.hpp"
#elif CLIENT_VERSION >= 20170726
#include "20170726.hpp"
#elif CLIENT_VERSION >= 20170719
#include "20170719.hpp"
#elif CLIENT_VERSION >= 20170712
#include "20170712.hpp"
#elif CLIENT_VERSION >= 20170705
#include "20170705.hpp"
#elif CLIENT_VERSION >= 20170628
#include "20170628.hpp"
#elif CLIENT_VERSION >= 20170621
#include "20170621.hpp"
#elif CLIENT_VERSION >= 20170614
#include "20170614.hpp"
#elif CLIENT_VERSION >= 20170607
#include "20170607.hpp"
#elif CLIENT_VERSION >= 20170531
#include "20170531.hpp"
#elif CLIENT_VERSION >= 20170524
#include "20170524.hpp"
#elif CLIENT_VERSION >= 20170517
#include "20170517.hpp"
#elif CLIENT_VERSION >= 20170502
#include "20170502.hpp"
#elif CLIENT_VERSION >= 20170426
#include "20170426.hpp"
#elif CLIENT_VERSION >= 20170419
#include "20170419.hpp"
#elif CLIENT_VERSION >= 20170412
#include "20170412.hpp"
#elif CLIENT_VERSION >= 20170405
#include "20170405.hpp"
#elif CLIENT_VERSION >= 20170329
#include "20170329.hpp"
#elif CLIENT_VERSION >= 20170322
#include "20170322.hpp"
#elif CLIENT_VERSION >= 20170315
#include "20170315.hpp"
#elif CLIENT_VERSION >= 20170308
#include "20170308.hpp"
#elif CLIENT_VERSION >= 20170228
#include "20170228.hpp"
#elif CLIENT_VERSION >= 20170222
#include "20170222.hpp"
#elif CLIENT_VERSION >= 20170215
#include "20170215.hpp"
#elif CLIENT_VERSION >= 20170208
#include "20170208.hpp"
#elif CLIENT_VERSION >= 20170201
#include "20170201.hpp"
#elif CLIENT_VERSION >= 20170125
#include "20170125.hpp"
#elif CLIENT_VERSION >= 20170118
#include "20170118.hpp"
#elif CLIENT_VERSION >= 20170111
#include "20170111.hpp"
#elif CLIENT_VERSION >= 20170104
#include "20170104.hpp"
#elif CLIENT_VERSION >= 20161228
#include "20161228.hpp"
#elif CLIENT_VERSION >= 20161221
#include "20161221.hpp"
#elif CLIENT_VERSION >= 20161214
#include "20161214.hpp"
#elif CLIENT_VERSION >= 20161207
#include "20161207.hpp"
#elif CLIENT_VERSION >= 20161130
#include "20161130.hpp"
#elif CLIENT_VERSION >= 20161123
#include "20161123.hpp"
#elif CLIENT_VERSION >= 20161116
#include "20161116.hpp"
#elif CLIENT_VERSION >= 20161109
#include "20161109.hpp"
#elif CLIENT_VERSION >= 20161102
#include "20161102.hpp"
#elif CLIENT_VERSION >= 20161026
#include "20161026.hpp"
#elif CLIENT_VERSION >= 20161019
#include "20161019.hpp"
#elif CLIENT_VERSION >= 20161012
#include "20161012.hpp"
#elif CLIENT_VERSION >= 20161005
#include "20161005.hpp"
#elif CLIENT_VERSION >= 20160928
#include "20160928.hpp"
#elif CLIENT_VERSION >= 20160921
#include "20160921.hpp"
#elif CLIENT_VERSION >= 20160913
#include "20160913.hpp"
#elif CLIENT_VERSION >= 20160907
#include "20160907.hpp"
#elif CLIENT_VERSION >= 20160831
#include "20160831.hpp"
#elif CLIENT_VERSION >= 20160824
#include "20160824.hpp"
#elif CLIENT_VERSION >= 20160817
#include "20160817.hpp"
#elif CLIENT_VERSION >= 20160810
#include "20160810.hpp"
#elif CLIENT_VERSION >= 20160803
#include "20160803.hpp"
#elif CLIENT_VERSION >= 20160727
#include "20160727.hpp"
#elif CLIENT_VERSION >= 20160720
#include "20160720.hpp"
#elif CLIENT_VERSION >= 20160713
#include "20160713.hpp"
#elif CLIENT_VERSION >= 20160706
#include "20160706.hpp"
#elif CLIENT_VERSION >= 20160629
#include "20160629.hpp"
#elif CLIENT_VERSION >= 20160622
#include "20160622.hpp"
#elif CLIENT_VERSION >= 20160615
#include "20160615.hpp"
#elif CLIENT_VERSION >= 20160608
#include "20160608.hpp"
#elif CLIENT_VERSION >= 20160601
#include "20160601.hpp"
#elif CLIENT_VERSION >= 20160525
#include "20160525.hpp"
#elif CLIENT_VERSION >= 20160518
#include "20160518.hpp"
#elif CLIENT_VERSION >= 20160511
#include "20160511.hpp"
#elif CLIENT_VERSION >= 20160504
#include "20160504.hpp"
#elif CLIENT_VERSION >= 20160427
#include "20160427.hpp"
#elif CLIENT_VERSION >= 20160420
#include "20160420.hpp"
#elif CLIENT_VERSION >= 20160414
#include "20160414.hpp"
#elif CLIENT_VERSION >= 20160406
#include "20160406.hpp"
#elif CLIENT_VERSION >= 20160330
#include "20160330.hpp"
#elif CLIENT_VERSION >= 20160323
#include "20160323.hpp"
#elif CLIENT_VERSION >= 20160316
#include "20160316.hpp"
#elif CLIENT_VERSION >= 20160309
#include "20160309.hpp"
#elif CLIENT_VERSION >= 20160302
#include "20160302.hpp"
#elif CLIENT_VERSION >= 20160224
#include "20160224.hpp"
#elif CLIENT_VERSION >= 20160217
#include "20160217.hpp"
#elif CLIENT_VERSION >= 20160211
#include "20160211.hpp"
#elif CLIENT_VERSION >= 20160203
#include "20160203.hpp"
#elif CLIENT_VERSION >= 20160127
#include "20160127.hpp"
#elif CLIENT_VERSION >= 20160120
#include "20160120.hpp"
#elif CLIENT_VERSION >= 20160113
#include "20160113.hpp"
#elif CLIENT_VERSION >= 20160106
#include "20160106.hpp"
#elif CLIENT_VERSION >= 20151230
#include "20151230.hpp"
#elif CLIENT_VERSION >= 20151223
#include "20151223.hpp"
#elif CLIENT_VERSION >= 20151216
#include "20151216.hpp"
#elif CLIENT_VERSION >= 20151209
#include "20151209.hpp"
#elif CLIENT_VERSION >= 20151202
#include "20151202.hpp"
#elif CLIENT_VERSION >= 20151125
#include "20151125.hpp"
#elif CLIENT_VERSION >= 20151118
#include "20151118.hpp"
#elif CLIENT_VERSION >= 20151111
#include "20151111.hpp"
#elif CLIENT_VERSION >= 20151104
#include "20151104.hpp"
#elif CLIENT_VERSION >= 20151028
#include "20151028.hpp"
#elif CLIENT_VERSION >= 20151021
#include "20151021.hpp"
#elif CLIENT_VERSION >= 20151014
#include "20151014.hpp"
#elif CLIENT_VERSION >= 20151007
#include "20151007.hpp"
#elif CLIENT_VERSION >= 20151001
#include "20151001.hpp"
#elif CLIENT_VERSION >= 20150923
#include "20150923.hpp"
#elif CLIENT_VERSION >= 20150916
#include "20150916.hpp"
#elif CLIENT_VERSION >= 20150909
#include "20150909.hpp"
#elif CLIENT_VERSION >= 20150902
#include "20150902.hpp"
#elif CLIENT_VERSION >= 20150826
#include "20150826.hpp"
#elif CLIENT_VERSION >= 20150819
#include "20150819.hpp"
#elif CLIENT_VERSION >= 20150805
#include "20150805.hpp"
#elif CLIENT_VERSION >= 20150729
#include "20150729.hpp"
#elif CLIENT_VERSION >= 20150722
#include "20150722.hpp"
#elif CLIENT_VERSION >= 20150715
#include "20150715.hpp"
#elif CLIENT_VERSION >= 20150708
#include "20150708.hpp"
#elif CLIENT_VERSION >= 20150701
#include "20150701.hpp"
#elif CLIENT_VERSION >= 20150624
#include "20150624.hpp"
#elif CLIENT_VERSION >= 20150617
#include "20150617.hpp"
#elif CLIENT_VERSION >= 20150610
#include "20150610.hpp"
#elif CLIENT_VERSION >= 20150603
#include "20150603.hpp"
#elif CLIENT_VERSION >= 20150527
#include "20150527.hpp"
#elif CLIENT_VERSION >= 20150520
#include "20150520.hpp"
#elif CLIENT_VERSION >= 20150513
#include "20150513.hpp"
#elif CLIENT_VERSION >= 20150507
#include "20150507.hpp"
#elif CLIENT_VERSION >= 20150429
#include "20150429.hpp"
#elif CLIENT_VERSION >= 20150422
#include "20150422.hpp"
#elif CLIENT_VERSION >= 20150415
#include "20150415.hpp"
#elif CLIENT_VERSION >= 20150408
#include "20150408.hpp"
#elif CLIENT_VERSION >= 20150401
#include "20150401.hpp"
#elif CLIENT_VERSION >= 20150325
#include "20150325.hpp"
#elif CLIENT_VERSION >= 20150318
#include "20150318.hpp"
#elif CLIENT_VERSION >= 20150311
#include "20150311.hpp"
#elif CLIENT_VERSION >= 20150304
#include "20150304.hpp"
#elif CLIENT_VERSION >= 20150225
#include "20150225.hpp"
#elif CLIENT_VERSION >= 20150217
#include "20150217.hpp"
#elif CLIENT_VERSION >= 20150211
#include "20150211.hpp"
#elif CLIENT_VERSION >= 20150204
#include "20150204.hpp"
#elif CLIENT_VERSION >= 20150128
#include "20150128.hpp"
#elif CLIENT_VERSION >= 20150121
#include "20150121.hpp"
#elif CLIENT_VERSION >= 20150114
#include "20150114.hpp"
#elif CLIENT_VERSION >= 20150107
#include "20150107.hpp"
#elif CLIENT_VERSION >= 20141231
#include "20141231.hpp"
#elif CLIENT_VERSION >= 20141224
#include "20141224.hpp"
#elif CLIENT_VERSION >= 20141217
#include "20141217.hpp"
#elif CLIENT_VERSION >= 20141210
#include "20141210.hpp"
#elif CLIENT_VERSION >= 20141203
#include "20141203.hpp"
#elif CLIENT_VERSION >= 20141126
#include "20141126.hpp"
#elif CLIENT_VERSION >= 20141119
#include "20141119.hpp"
#elif CLIENT_VERSION >= 20141112
#include "20141112.hpp"
#elif CLIENT_VERSION >= 20141105
#include "20141105.hpp"
#elif CLIENT_VERSION >= 20141029
#include "20141029.hpp"
#elif CLIENT_VERSION >= 20141022
#include "20141022.hpp"
#elif CLIENT_VERSION >= 20141015
#include "20141015.hpp"
#elif CLIENT_VERSION >= 20141008
#include "20141008.hpp"
#elif CLIENT_VERSION >= 20141001
#include "20141001.hpp"
#elif CLIENT_VERSION >= 20140924
#include "20140924.hpp"
#elif CLIENT_VERSION >= 20140917
#include "20140917.hpp"
#elif CLIENT_VERSION >= 20140903
#include "20140903.hpp"
#elif CLIENT_VERSION >= 20140827
#include "20140827.hpp"
#elif CLIENT_VERSION >= 20140820
#include "20140820.hpp"
#elif CLIENT_VERSION >= 20140813
#include "20140813.hpp"
#elif CLIENT_VERSION >= 20140806
#include "20140806.hpp"
#elif CLIENT_VERSION >= 20140730
#include "20140730.hpp"
#elif CLIENT_VERSION >= 20140723
#include "20140723.hpp"
#elif CLIENT_VERSION >= 20140716
#include "20140716.hpp"
#elif CLIENT_VERSION >= 20140709
#include "20140709.hpp"
#elif CLIENT_VERSION >= 20140702
#include "20140702.hpp"
#elif CLIENT_VERSION >= 20140625
#include "20140625.hpp"
#elif CLIENT_VERSION >= 20140618
#include "20140618.hpp"
#elif CLIENT_VERSION >= 20140611
#include "20140611.hpp"
#elif CLIENT_VERSION >= 20140605
#include "20140605.hpp"
#elif CLIENT_VERSION >= 20140528
#include "20140528.hpp"
#elif CLIENT_VERSION >= 20140521
#include "20140521.hpp"
#elif CLIENT_VERSION >= 20140514
#include "20140514.hpp"
#elif CLIENT_VERSION >= 20140508
#include "20140508.hpp"
#elif CLIENT_VERSION >= 20140430
#include "20140430.hpp"
#elif CLIENT_VERSION >= 20140423
#include "20140423.hpp"
#elif CLIENT_VERSION >= 20140416
#include "20140416.hpp"
#elif CLIENT_VERSION >= 20140409
#include "20140409.hpp"
#elif CLIENT_VERSION >= 20140402
#include "20140402.hpp"
#elif CLIENT_VERSION >= 20140326
#include "20140326.hpp"
#elif CLIENT_VERSION >= 20140319
#include "20140319.hpp"
#elif CLIENT_VERSION >= 20140312
#include "20140312.hpp"
#elif CLIENT_VERSION >= 20140305
#include "20140305.hpp"
#elif CLIENT_VERSION >= 20140226
#include "20140226.hpp"
#elif CLIENT_VERSION >= 20140219
#include "20140219.hpp"
#elif CLIENT_VERSION >= 20140212
#include "20140212.hpp"
#elif CLIENT_VERSION >= 20140205
#include "20140205.hpp"
#elif CLIENT_VERSION >= 20140129
#include "20140129.hpp"
#elif CLIENT_VERSION >= 20140122
#include "20140122.hpp"
#elif CLIENT_VERSION >= 20140115
#include "20140115.hpp"
#elif CLIENT_VERSION >= 20140108
#include "20140108.hpp"
#elif CLIENT_VERSION >= 20131230
#include "20131230.hpp"
#elif CLIENT_VERSION >= 20131223
#include "20131223.hpp"
#elif CLIENT_VERSION >= 20131218
#include "20131218.hpp"
#elif CLIENT_VERSION >= 20131211
#include "20131211.hpp"
#elif CLIENT_VERSION >= 20131204
#include "20131204.hpp"
#elif CLIENT_VERSION >= 20131127
#include "20131127.hpp"
#elif CLIENT_VERSION >= 20131120
#include "20131120.hpp"
#elif CLIENT_VERSION >= 20131113
#include "20131113.hpp"
#elif CLIENT_VERSION >= 20131106
#include "20131106.hpp"
#elif CLIENT_VERSION >= 20131030
#include "20131030.hpp"
#elif CLIENT_VERSION >= 20131023
#include "20131023.hpp"
#elif CLIENT_VERSION >= 20131016
#include "20131016.hpp"
#elif CLIENT_VERSION >= 20131008
#include "20131008.hpp"
#elif CLIENT_VERSION >= 20131002
#include "20131002.hpp"
#elif CLIENT_VERSION >= 20130925
#include "20130925.hpp"
#elif CLIENT_VERSION >= 20130917
#include "20130917.hpp"
#elif CLIENT_VERSION >= 20130911
#include "20130911.hpp"
#elif CLIENT_VERSION >= 20130904
#include "20130904.hpp"
#elif CLIENT_VERSION >= 20130828
#include "20130828.hpp"
#elif CLIENT_VERSION >= 20130821
#include "20130821.hpp"
#elif CLIENT_VERSION >= 20130814
#include "20130814.hpp"
#elif CLIENT_VERSION >= 20130807
#include "20130807.hpp"
#elif CLIENT_VERSION >= 20130731
#include "20130731.hpp"
#elif CLIENT_VERSION >= 20130724
#include "20130724.hpp"
#elif CLIENT_VERSION >= 20130717
#include "20130717.hpp"
#elif CLIENT_VERSION >= 20130710
#include "20130710.hpp"
#elif CLIENT_VERSION >= 20130703
#include "20130703.hpp"
#elif CLIENT_VERSION >= 20130626
#include "20130626.hpp"
#elif CLIENT_VERSION >= 20130618
#include "20130618.hpp"
#elif CLIENT_VERSION >= 20130612
#include "20130612.hpp"
#elif CLIENT_VERSION >= 20130605
#include "20130605.hpp"
#elif CLIENT_VERSION >= 20130529
#include "20130529.hpp"
#elif CLIENT_VERSION >= 20130522
#include "20130522.hpp"
#elif CLIENT_VERSION >= 20130515
#include "20130515.hpp"
#elif CLIENT_VERSION >= 20130508
#include "20130508.hpp"
#elif CLIENT_VERSION >= 20130502
#include "20130502.hpp"
#elif CLIENT_VERSION >= 20130424
#include "20130424.hpp"
#elif CLIENT_VERSION >= 20130417
#include "20130417.hpp"
#elif CLIENT_VERSION >= 20130410
#include "20130410.hpp"
#elif CLIENT_VERSION >= 20130403
#include "20130403.hpp"
#elif CLIENT_VERSION >= 20130327
#include "20130327.hpp"
#elif CLIENT_VERSION >= 20130320
#include "20130320.hpp"
#elif CLIENT_VERSION >= 20130313
#include "20130313.hpp"
#elif CLIENT_VERSION >= 20130306
#include "20130306.hpp"
#elif CLIENT_VERSION >= 20130227
#include "20130227.hpp"
#elif CLIENT_VERSION >= 20130220
#include "20130220.hpp"
#elif CLIENT_VERSION >= 20130215
#include "20130215.hpp"
#elif CLIENT_VERSION >= 20130206
#include "20130206.hpp"
#elif CLIENT_VERSION >= 20130130
#include "20130130.hpp"
#elif CLIENT_VERSION >= 20130121
#include "20130121.hpp"
#elif CLIENT_VERSION >= 20130115
#include "20130115.hpp"
#elif CLIENT_VERSION >= 20130109
#include "20130109.hpp"
#elif CLIENT_VERSION >= 20130103
#include "20130103.hpp"
#elif CLIENT_VERSION >= 20121227
#include "20121227.hpp"
#elif CLIENT_VERSION >= 20121218
#include "20121218.hpp"
#elif CLIENT_VERSION >= 20121212
#include "20121212.hpp"
#elif CLIENT_VERSION >= 20121205
#include "20121205.hpp"
#elif CLIENT_VERSION >= 20121128
#include "20121128.hpp"
#elif CLIENT_VERSION >= 20121121
#include "20121121.hpp"
#elif CLIENT_VERSION >= 20121114
#include "20121114.hpp"
#elif CLIENT_VERSION >= 20121107
#include "20121107.hpp"
#elif CLIENT_VERSION >= 20121031
#include "20121031.hpp"
#elif CLIENT_VERSION >= 20121024
#include "20121024.hpp"
#elif CLIENT_VERSION >= 20121017
#include "20121017.hpp"
#elif CLIENT_VERSION >= 20121010
#include "20121010.hpp"
#elif CLIENT_VERSION >= 20120925
#include "20120925.hpp"
#elif CLIENT_VERSION >= 20120919
#include "20120919.hpp"
#elif CLIENT_VERSION >= 20120911
#include "20120911.hpp"
#elif CLIENT_VERSION >= 20120905
#include "20120905.hpp"
#elif CLIENT_VERSION >= 20120830
#include "20120830.hpp"
#elif CLIENT_VERSION >= 20120822
#include "20120822.hpp"
#elif CLIENT_VERSION >= 20120814
#include "20120814.hpp"
#elif CLIENT_VERSION >= 20120808
#include "20120808.hpp"
#elif CLIENT_VERSION >= 20120801
#include "20120801.hpp"
#elif CLIENT_VERSION >= 20120724
#include "20120724.hpp"
#elif CLIENT_VERSION >= 20120716
#include "20120716.hpp"
#elif CLIENT_VERSION >= 20120710
#include "20120710.hpp"
#elif CLIENT_VERSION >= 20120702
#include "20120702.hpp"
#elif CLIENT_VERSION >= 20120626
#include "20120626.hpp"
#elif CLIENT_VERSION >= 20120618
#include "20120618.hpp"
#elif CLIENT_VERSION >= 20120612
#include "20120612.hpp"
#elif CLIENT_VERSION >= 20120604
#include "20120604.hpp"
#elif CLIENT_VERSION >= 20120529
#include "20120529.hpp"
#elif CLIENT_VERSION >= 20120522
#include "20120522.hpp"
#elif CLIENT_VERSION >= 20120515
#include "20120515.hpp"
#elif CLIENT_VERSION >= 20120508
#include "20120508.hpp"
#elif CLIENT_VERSION >= 20120503
#include "20120503.hpp"
#elif CLIENT_VERSION >= 20120424
#include "20120424.hpp"
#elif CLIENT_VERSION >= 20120417
#include "20120417.hpp"
#elif CLIENT_VERSION >= 20120410
#include "20120410.hpp"
#elif CLIENT_VERSION >= 20120404
#include "20120404.hpp"
#elif CLIENT_VERSION >= 20120328
#include "20120328.hpp"
#elif CLIENT_VERSION >= 20120320
#include "20120320.hpp"
#elif CLIENT_VERSION >= 20120314
#include "20120314.hpp"
#elif CLIENT_VERSION >= 20120307
#include "20120307.hpp"
#elif CLIENT_VERSION >= 20120228
#include "20120228.hpp"
#elif CLIENT_VERSION >= 20120221
#include "20120221.hpp"
#elif CLIENT_VERSION >= 20120214
#include "20120214.hpp"
#elif CLIENT_VERSION >= 20120207
#include "20120207.hpp"
#elif CLIENT_VERSION >= 20120131
#include "20120131.hpp"
#elif CLIENT_VERSION >= 20120120
#include "20120120.hpp"
#elif CLIENT_VERSION >= 20120117
#include "20120117.hpp"
#elif CLIENT_VERSION >= 20120110
#include "20120110.hpp"
#elif CLIENT_VERSION >= 20120103
#include "20120103.hpp"
#elif CLIENT_VERSION >= 20111227
#include "20111227.hpp"
#elif CLIENT_VERSION >= 20111220
#include "20111220.hpp"
#elif CLIENT_VERSION >= 20111213
#include "20111213.hpp"
#elif CLIENT_VERSION >= 20111207
#include "20111207.hpp"
#elif CLIENT_VERSION >= 20111122
#include "20111122.hpp"
#elif CLIENT_VERSION >= 20111114
#include "20111114.hpp"
#elif CLIENT_VERSION >= 20111108
#include "20111108.hpp"
#elif CLIENT_VERSION >= 20111101
#include "20111101.hpp"
#elif CLIENT_VERSION >= 20111025
#include "20111025.hpp"
#elif CLIENT_VERSION >= 20111017
#include "20111017.hpp"
#elif CLIENT_VERSION >= 20111010
#include "20111010.hpp"
#elif CLIENT_VERSION >= 20111004
#include "20111004.hpp"
#elif CLIENT_VERSION >= 20110928
#include "20110928.hpp"
#elif CLIENT_VERSION >= 20110920
#include "20110920.hpp"
#elif CLIENT_VERSION >= 20110906
#include "20110906.hpp"
#elif CLIENT_VERSION >= 20110831
#include "20110831.hpp"
#elif CLIENT_VERSION >= 20110823
#include "20110823.hpp"
#elif CLIENT_VERSION >= 20110816
#include "20110816.hpp"
#elif CLIENT_VERSION >= 20110809
#include "20110809.hpp"
#elif CLIENT_VERSION >= 20110802
#include "20110802.hpp"
#elif CLIENT_VERSION >= 20110726
#include "20110726.hpp"
#elif CLIENT_VERSION >= 20110718
#include "20110718.hpp"
#elif CLIENT_VERSION >= 20110711
#include "20110711.hpp"
#elif CLIENT_VERSION >= 20110705
#include "20110705.hpp"
#elif CLIENT_VERSION >= 20110627
#include "20110627.hpp"
#elif CLIENT_VERSION >= 20110620
#include "20110620.hpp"
#elif CLIENT_VERSION >= 20110614
#include "20110614.hpp"
#elif CLIENT_VERSION >= 20110607
#include "20110607.hpp"
#elif CLIENT_VERSION >= 20110531
#include "20110531.hpp"
#elif CLIENT_VERSION >= 20110523
#include "20110523.hpp"
#elif CLIENT_VERSION >= 20110517
#include "20110517.hpp"
#elif CLIENT_VERSION >= 20110511
#include "20110511.hpp"
#elif CLIENT_VERSION >= 20110503
#include "20110503.hpp"
#elif CLIENT_VERSION >= 20110426
#include "20110426.hpp"
#elif CLIENT_VERSION >= 20110419
#include "20110419.hpp"
#elif CLIENT_VERSION >= 20110412
#include "20110412.hpp"
#elif CLIENT_VERSION >= 20110405
#include "20110405.hpp"
#elif CLIENT_VERSION >= 20110329
#include "20110329.hpp"
#elif CLIENT_VERSION >= 20110322
#include "20110322.hpp"
#elif CLIENT_VERSION >= 20110315
#include "20110315.hpp"
#elif CLIENT_VERSION >= 20110308
#include "20110308.hpp"
#elif CLIENT_VERSION >= 20110228
#include "20110228.hpp"
#elif CLIENT_VERSION >= 20110222
#include "20110222.hpp"
#elif CLIENT_VERSION >= 20110215
#include "20110215.hpp"
#elif CLIENT_VERSION >= 20110208
#include "20110208.hpp"
#elif CLIENT_VERSION >= 20110131
#include "20110131.hpp"
#elif CLIENT_VERSION >= 20110125
#include "20110125.hpp"
#elif CLIENT_VERSION >= 20110118
#include "20110118.hpp"
#elif CLIENT_VERSION >= 20110111
#include "20110111.hpp"
#elif CLIENT_VERSION >= 20110104
#include "20110104.hpp"
#elif CLIENT_VERSION >= 20101228
#include "20101228.hpp"
#elif CLIENT_VERSION >= 20101221
#include "20101221.hpp"
#elif CLIENT_VERSION >= 20101214
#include "20101214.hpp"
#elif CLIENT_VERSION >= 20101207
#include "20101207.hpp"
#elif CLIENT_VERSION >= 20101130
#include "20101130.hpp"
#elif CLIENT_VERSION >= 20101123
#include "20101123.hpp"
#elif CLIENT_VERSION >= 20101102
#include "20101102.hpp"
#elif CLIENT_VERSION >= 20101026
#include "20101026.hpp"
#elif CLIENT_VERSION >= 20101019
#include "20101019.hpp"
#elif CLIENT_VERSION >= 20100914
#include "20100914.hpp"
#elif CLIENT_VERSION >= 20100824
#include "20100824.hpp"
#elif CLIENT_VERSION >= 20100817
#include "20100817.hpp"
#elif CLIENT_VERSION >= 20100803
#include "20100803.hpp"
#elif CLIENT_VERSION >= 20100720
#include "20100720.hpp"
#elif CLIENT_VERSION >= 20100701
#include "20100701.hpp"
#elif CLIENT_VERSION >= 20100629
#include "20100629.hpp"
#elif CLIENT_VERSION >= 20100622
#include "20100622.hpp"
#elif CLIENT_VERSION >= 20100608
#include "20100608.hpp"
#elif CLIENT_VERSION >= 20100601
#include "20100601.hpp"
#elif CLIENT_VERSION >= 20100420
#include "20100420.hpp"
#elif CLIENT_VERSION >= 20100414
#include "20100414.hpp"
#elif CLIENT_VERSION >= 20100413
#include "20100413.hpp"
#elif CLIENT_VERSION >= 20100331
#include "20100331.hpp"
#elif CLIENT_VERSION >= 20100323
#include "20100323.hpp"
#elif CLIENT_VERSION >= 20100309
#include "20100309.hpp"
#elif CLIENT_VERSION >= 20100303
#include "20100303.hpp"
#elif CLIENT_VERSION >= 20100223
#include "20100223.hpp"
#elif CLIENT_VERSION >= 20100209
#include "20100209.hpp"
#elif CLIENT_VERSION >= 20100119
#include "20100119.hpp"
#elif CLIENT_VERSION >= 20100113
#include "20100113.hpp"
#elif CLIENT_VERSION >= 20100105
#include "20100105.hpp"
#elif CLIENT_VERSION >= 20091228
#include "20091228.hpp"
#elif CLIENT_VERSION >= 20091222
#include "20091222.hpp"
#elif CLIENT_VERSION >= 20091215
#include "20091215.hpp"
#elif CLIENT_VERSION >= 20091201
#include "20091201.hpp"
#elif CLIENT_VERSION >= 20091124
#include "20091124.hpp"
#elif CLIENT_VERSION >= 20091117
#include "20091117.hpp"
#elif CLIENT_VERSION >= 20091103
#include "20091103.hpp"
#elif CLIENT_VERSION >= 20091027
#include "20091027.hpp"
#elif CLIENT_VERSION >= 20091006
#include "20091006.hpp"
#elif CLIENT_VERSION >= 20090929
#include "20090929.hpp"
#elif CLIENT_VERSION >= 20090818
#include "20090818.hpp"
#elif CLIENT_VERSION >= 20090805
#include "20090805.hpp"
#elif CLIENT_VERSION >= 20090715
#include "20090715.hpp"
#elif CLIENT_VERSION >= 20090708
#include "20090708.hpp"
#elif CLIENT_VERSION >= 20090617
#include "20090617.hpp"
#elif CLIENT_VERSION >= 20090610
#include "20090610.hpp"
#elif CLIENT_VERSION >= 20090603
#include "20090603.hpp"
#elif CLIENT_VERSION >= 20090520
#include "20090520.hpp"
#elif CLIENT_VERSION >= 20090514
#include "20090514.hpp"
#elif CLIENT_VERSION >= 20090408
#include "20090408.hpp"
#elif CLIENT_VERSION >= 20090406
#include "20090406.hpp"
#elif CLIENT_VERSION >= 20090401
#include "20090401.hpp"
#elif CLIENT_VERSION >= 20090325
#include "20090325.hpp"
#elif CLIENT_VERSION >= 20090318
#include "20090318.hpp"
#elif CLIENT_VERSION >= 20090311
#include "20090311.hpp"
#elif CLIENT_VERSION >= 20090225
#include "20090225.hpp"
#elif CLIENT_VERSION >= 20090218
#include "20090218.hpp"
#elif CLIENT_VERSION >= 20090211
#include "20090211.hpp"
#elif CLIENT_VERSION >= 20090204
#include "20090204.hpp"
#elif CLIENT_VERSION >= 20090129
#include "20090129.hpp"
#elif CLIENT_VERSION >= 20090120
#include "20090120.hpp"
#elif CLIENT_VERSION >= 20090114
#include "20090114.hpp"
#elif CLIENT_VERSION >= 20090107
#include "20090107.hpp"
#elif CLIENT_VERSION >= 20081217
#include "20081217.hpp"
#elif CLIENT_VERSION >= 20081210
#include "20081210.hpp"
#elif CLIENT_VERSION >= 20081203
#include "20081203.hpp"
#elif CLIENT_VERSION >= 20081126
#include "20081126.hpp"
#elif CLIENT_VERSION >= 20081119
#include "20081119.hpp"
#elif CLIENT_VERSION >= 20081112
#include "20081112.hpp"
#elif CLIENT_VERSION >= 20081105
#include "20081105.hpp"
#elif CLIENT_VERSION >= 20081029
#include "20081029.hpp"
#elif CLIENT_VERSION >= 20081022
#include "20081022.hpp"
#elif CLIENT_VERSION >= 20081015
#include "20081015.hpp"
#elif CLIENT_VERSION >= 20081008
#include "20081008.hpp"
#elif CLIENT_VERSION >= 20081001
#include "20081001.hpp"
#elif CLIENT_VERSION >= 20080924
#include "20080924.hpp"
#elif CLIENT_VERSION >= 20080917
#include "20080917.hpp"
#elif CLIENT_VERSION >= 20080910
#include "20080910.hpp"
#elif CLIENT_VERSION >= 20080903
#include "20080903.hpp"
#elif CLIENT_VERSION >= 20080827
#include "20080827.hpp"
#elif CLIENT_VERSION >= 20080820
#include "20080820.hpp"
#elif CLIENT_VERSION >= 20080813
#include "20080813.hpp"
#elif CLIENT_VERSION >= 20080806
#include "20080806.hpp"
#elif CLIENT_VERSION >= 20080730
#include "20080730.hpp"
#elif CLIENT_VERSION >= 20080722
#include "20080722.hpp"
#elif CLIENT_VERSION >= 20080715
#include "20080715.hpp"
#elif CLIENT_VERSION >= 20080708
#include "20080708.hpp"
#elif CLIENT_VERSION >= 20080701
#include "20080701.hpp"
#elif CLIENT_VERSION >= 20080624
#include "20080624.hpp"
#elif CLIENT_VERSION >= 20080617
#include "20080617.hpp"
#elif CLIENT_VERSION >= 20080610
#include "20080610.hpp"
#elif CLIENT_VERSION >= 20080603
#include "20080603.hpp"
#elif CLIENT_VERSION >= 20080528
#include "20080528.hpp"
#elif CLIENT_VERSION >= 20080521
#include "20080521.hpp"
#elif CLIENT_VERSION >= 20080520
#include "20080520.hpp"
#elif CLIENT_VERSION >= 20080513
#include "20080513.hpp"
#elif CLIENT_VERSION >= 20080507
#include "20080507.hpp"
#elif CLIENT_VERSION >= 20080429
#include "20080429.hpp"
#elif CLIENT_VERSION >= 20080422
#include "20080422.hpp"
#elif CLIENT_VERSION >= 20080415
#include "20080415.hpp"
#elif CLIENT_VERSION >= 20080408
#include "20080408.hpp"
#elif CLIENT_VERSION >= 20080401
#include "20080401.hpp"
#elif CLIENT_VERSION >= 20080325
#include "20080325.hpp"
#elif CLIENT_VERSION >= 20080318
#include "20080318.hpp"
#elif CLIENT_VERSION >= 20080311
#include "20080311.hpp"
#elif CLIENT_VERSION >= 20080304
#include "20080304.hpp"
#elif CLIENT_VERSION >= 20080226
#include "20080226.hpp"
#elif CLIENT_VERSION >= 20080219
#include "20080219.hpp"
#elif CLIENT_VERSION >= 20080124
#include "20080124.hpp"
#elif CLIENT_VERSION >= 20080108
#include "20080108.hpp"
#elif CLIENT_VERSION >= 20080102
#include "20080102.hpp"
#elif CLIENT_VERSION >= 20071127
#include "20071127.hpp"
#elif CLIENT_VERSION >= 20071120
#include "20071120.hpp"
#elif CLIENT_VERSION >= 20071113
#include "20071113.hpp"
#elif CLIENT_VERSION >= 20071023
#include "20071023.hpp"
#elif CLIENT_VERSION >= 20071002
#include "20071002.hpp"
#elif CLIENT_VERSION >= 20070918
#include "20070918.hpp"
#elif CLIENT_VERSION >= 20070911
#include "20070911.hpp"
#elif CLIENT_VERSION >= 20070904
#include "20070904.hpp"
#elif CLIENT_VERSION >= 20070828
#include "20070828.hpp"
#elif CLIENT_VERSION >= 20070821
#include "20070821.hpp"
#elif CLIENT_VERSION >= 20070813
#include "20070813.hpp"
#elif CLIENT_VERSION >= 20070807
#include "20070807.hpp"
#elif CLIENT_VERSION >= 20070731
#include "20070731.hpp"
#elif CLIENT_VERSION >= 20070724
#include "20070724.hpp"
#elif CLIENT_VERSION >= 20070711
#include "20070711.hpp"
#elif CLIENT_VERSION >= 20070703
#include "20070703.hpp"
#elif CLIENT_VERSION >= 20070622
#include "20070622.hpp"
#elif CLIENT_VERSION >= 20070618
#include "20070618.hpp"
#elif CLIENT_VERSION >= 20070611
#include "20070611.hpp"
#elif CLIENT_VERSION >= 20070605
#include "20070605.hpp"
#elif CLIENT_VERSION >= 20070604
#include "20070604.hpp"
#elif CLIENT_VERSION >= 20070528
#include "20070528.hpp"
#elif CLIENT_VERSION >= 20070423
#include "20070423.hpp"
#elif CLIENT_VERSION >= 20070227
#include "20070227.hpp"
#elif CLIENT_VERSION >= 20070212
#include "20070212.hpp"
#elif CLIENT_VERSION >= 20070205
#include "20070205.hpp"
#elif CLIENT_VERSION >= 20070129
#include "20070129.hpp"
#elif CLIENT_VERSION >= 20070122
#include "20070122.hpp"
#elif CLIENT_VERSION >= 20070108
#include "20070108.hpp"
#elif CLIENT_VERSION >= 20070102
#include "20070102.hpp"
#elif CLIENT_VERSION >= 20061226
#include "20061226.hpp"
#elif CLIENT_VERSION >= 20061218
#include "20061218.hpp"
#elif CLIENT_VERSION >= 20061211
#include "20061211.hpp"
#elif CLIENT_VERSION >= 20061204
#include "20061204.hpp"
#elif CLIENT_VERSION >= 20061030
#include "20061030.hpp"
#elif CLIENT_VERSION >= 20060927
#include "20060927.hpp"
#elif CLIENT_VERSION >= 20060918
#include "20060918.hpp"
#elif CLIENT_VERSION >= 20060911
#include "20060911.hpp"
#elif CLIENT_VERSION >= 20060904
#include "20060904.hpp"
#elif CLIENT_VERSION >= 20060710
#include "20060710.hpp"
#elif CLIENT_VERSION >= 20060703
#include "20060703.hpp"
#elif CLIENT_VERSION >= 20060626
#include "20060626.hpp"
#elif CLIENT_VERSION >= 20060607
#include "20060607.hpp"
#elif CLIENT_VERSION >= 20060327
#include "20060327.hpp"
#elif CLIENT_VERSION >= 20060313
#include "20060313.hpp"
#elif CLIENT_VERSION >= 20060306
#include "20060306.hpp"
#elif CLIENT_VERSION >= 20060102
#include "20060102.hpp"
#elif CLIENT_VERSION >= 20051107
#include "20051107.hpp"
#elif CLIENT_VERSION >= 20051024
#include "20051024.hpp"
#elif CLIENT_VERSION >= 20051017
#include "20051017.hpp"
#elif CLIENT_VERSION >= 20051013
#include "20051013.hpp"
#elif CLIENT_VERSION >= 20051010
#include "20051010.hpp"
#elif CLIENT_VERSION >= 20050829
#include "20050829.hpp"
#elif CLIENT_VERSION >= 20050822
#include "20050822.hpp"
#elif CLIENT_VERSION >= 20050808
#include "20050808.hpp"
#elif CLIENT_VERSION >= 20050801
#include "20050801.hpp"
#elif CLIENT_VERSION >= 20050719
#include "20050719.hpp"
#elif CLIENT_VERSION >= 20050718
#include "20050718.hpp"
#elif CLIENT_VERSION >= 20050628
#include "20050628.hpp"
#elif CLIENT_VERSION >= 20050624
#include "20050624.hpp"
#elif CLIENT_VERSION >= 20050608
#include "20050608.hpp"
#elif CLIENT_VERSION >= 20050530
#include "20050530.hpp"
#elif CLIENT_VERSION >= 20050523
#include "20050523.hpp"
#elif CLIENT_VERSION >= 20050509
#include "20050509.hpp"
#elif CLIENT_VERSION >= 20050425
#include "20050425.hpp"
#elif CLIENT_VERSION >= 20050411
#include "20050411.hpp"
#elif CLIENT_VERSION >= 20050404
#include "20050404.hpp"
#elif CLIENT_VERSION >= 20050328
#include "20050328.hpp"
#elif CLIENT_VERSION >= 20050110
#include "20050110.hpp"
#elif CLIENT_VERSION >= 20050103
#include "20050103.hpp"
#elif CLIENT_VERSION >= 20041220
#include "20041220.hpp"
#elif CLIENT_VERSION >= 20041216
#include "20041216.hpp"
#elif CLIENT_VERSION >= 20041213
#include "20041213.hpp"
#elif CLIENT_VERSION >= 20041129
#include "20041129.hpp"
#elif CLIENT_VERSION >= 20041115
#include "20041115.hpp"
#elif CLIENT_VERSION >= 20041108
#include "20041108.hpp"
#elif CLIENT_VERSION >= 20041101
#include "20041101.hpp"
#elif CLIENT_VERSION >= 20041025
#include "20041025.hpp"
#elif CLIENT_VERSION >= 20041005
#include "20041005.hpp"
#elif CLIENT_VERSION >= 20040920
#include "20040920.hpp"
#elif CLIENT_VERSION >= 20040906
#include "20040906.hpp"
#elif CLIENT_VERSION >= 20040817
#include "20040817.hpp"
#elif CLIENT_VERSION >= 20040816
#include "20040816.hpp"
#elif CLIENT_VERSION >= 20040809
#include "20040809.hpp"
#elif CLIENT_VERSION >= 20040726
#include "20040726.hpp"
#elif CLIENT_VERSION >= 20040712
#include "20040712.hpp"
#elif CLIENT_VERSION >= 20040705
#include "20040705.hpp"
#elif CLIENT_VERSION >= 20040628
#include "20040628.hpp"
#elif CLIENT_VERSION >= 20040426
#include "20040426.hpp"
#elif CLIENT_VERSION >= 20040423
#include "20040423.hpp"
#elif CLIENT_VERSION >= 20040422
#include "20040422.hpp"
#elif CLIENT_VERSION >= 20040420
#include "20040420.hpp"
#elif CLIENT_VERSION >= 20040308
#include "20040308.hpp"
#elif CLIENT_VERSION >= 20040302
#include "20040302.hpp"
#elif CLIENT_VERSION >= 20040216
#include "20040216.hpp"
#elif CLIENT_VERSION >= 20040107
#include "20040107.hpp"
#elif CLIENT_VERSION >= 20031218
#include "20031218.hpp"
#elif CLIENT_VERSION >= 20031208
#include "20031208.hpp"
#elif CLIENT_VERSION >= 20031124
#include "20031124.hpp"
#elif CLIENT_VERSION >= 20031117
#include "20031117.hpp"
#elif CLIENT_VERSION >= 20031110
#include "20031110.hpp"
#elif CLIENT_VERSION >= 20031103
#include "20031103.hpp"
#elif CLIENT_VERSION >= 20031028
#include "20031028.hpp"
#endif

namespace Horizon
{
namespace Zone
{
/**
 * @brief Packet Length Table object that stores
 * the packet length of each packet of this client version.
 * The data is stored in a thread-safe lookup table.
 * RAII techinque ensures that the table is populated on instantiation.
 */
class PacketLengthTable
{
public:
	PacketLengthTable(std::shared_ptr<ZoneSocket> sock)
	: _socket(sock)
	{
#define ADD_PKT(i, j, k) _packet_length_table.insert(i, std::make_pair<uint16_t, NetworkPacket>(j, k))
		ADD_PKT(0x0a2a, 6, CZ_ACK_AU_BOT(sock));
		ADD_PKT(0x02ab, 36, CZ_ACK_CASH_PASSWORD(sock));
		ADD_PKT(0x00e6, 3, CZ_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0228, 18, CZ_ACK_GAME_GUARD(sock));
		ADD_PKT(0x0208, 14, CZ_ACK_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x00c5, 7, CZ_ACK_SELECT_DEALTYPE(sock));
		ADD_PKT(0x023b, 36, CZ_ACK_STORE_PASSWORD(sock));
		ADD_PKT(0x02b6, 7, CZ_ACTIVE_QUEST(sock));
		ADD_PKT(0x00e8, 8, CZ_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0202, 26, CZ_ADD_FRIENDS(sock));
		ADD_PKT(0x0254, 3, CZ_AGREE_STARPLACE(sock));
		ADD_PKT(0x0218, 2, CZ_ALCHEMIST_RANK(sock));
		ADD_PKT(0x0172, 10, CZ_ALLY_GUILD(sock));
		ADD_PKT(0x0a97, 8, CZ_ALT_EQUIPMENT_EQUIP(sock));
		ADD_PKT(0x0aef, 2, CZ_ATTENDANCE_REWARD_REQUEST(sock));
		ADD_PKT(0x024d, 12, CZ_AUCTION_ADD(sock));
		ADD_PKT(0x024e, 6, CZ_AUCTION_ADD_CANCEL(sock));
		ADD_PKT(0x024c, 8, CZ_AUCTION_ADD_ITEM(sock));
		ADD_PKT(0x024f, 10, CZ_AUCTION_BUY(sock));
		ADD_PKT(0x024b, 4, CZ_AUCTION_CREATE(sock));
		ADD_PKT(0x0251, 34, CZ_AUCTION_ITEM_SEARCH(sock));
		ADD_PKT(0x025c, 4, CZ_AUCTION_REQ_MY_INFO(sock));
		ADD_PKT(0x025d, 6, CZ_AUCTION_REQ_MY_SELL_STOP(sock));
		ADD_PKT(0x02db, -1, CZ_BATTLEFIELD_CHAT(sock));
		ADD_PKT(0x07ea, 2, CZ_BATTLE_FIELD_LIST(sock));
		ADD_PKT(0x0217, 2, CZ_BLACKSMITH_RANK(sock));
		ADD_PKT(0x0447, 2, CZ_BLOCKING_PLAY_CANCEL(sock));
		ADD_PKT(0x02e6, 6, CZ_BOT_CHECK(sock));
		ADD_PKT(0x0099, -1, CZ_BROADCAST(sock));
		ADD_PKT(0x07ee, 6, CZ_CANCEL_BATTLE_FIELD(sock));
		ADD_PKT(0x00ed, 2, CZ_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0118, 2, CZ_CANCEL_LOCKON(sock));
		ADD_PKT(0x0974, 2, CZ_CANCEL_MERGE_ITEM(sock));
		ADD_PKT(0x00de, -1, CZ_CHANGE_CHATROOM(sock));
		ADD_PKT(0x009b, 34, CZ_CHANGE_DIRECTION(sock));
		ADD_PKT(0x0361, 5, CZ_CHANGE_DIRECTION2(sock));
		ADD_PKT(0x019d, 6, CZ_CHANGE_EFFECTSTATE(sock));
		ADD_PKT(0x0102, 6, CZ_CHANGE_GROUPEXPOPTION(sock));
		ADD_PKT(0x07da, 6, CZ_CHANGE_GROUP_MASTER(sock));
		ADD_PKT(0x0198, 8, CZ_CHANGE_MAPTYPE(sock));
		ADD_PKT(0x0a13, 26, CZ_CHECK_RECEIVE_CHARACTER_NAME(sock));
		ADD_PKT(0x00b8, 7, CZ_CHOOSE_MENU(sock));
		ADD_PKT(0x01ed, 2, CZ_CHOPOKGI(sock));
		ADD_PKT(0x098d, -1, CZ_CLAN_CHAT(sock));
		ADD_PKT(0x044a, 6, CZ_CLIENT_VERSION(sock));
		ADD_PKT(0x09bc, 6, CZ_CLOSE_BARGAIN_SALE_TOOL(sock));
		ADD_PKT(0x0146, 6, CZ_CLOSE_CoreLog(sock));
		ADD_PKT(0x09e9, 2, CZ_CLOSE_RODEXBOX(sock));
		ADD_PKT(0x083b, 2, CZ_CLOSE_SEARCH_STORE_INFO(sock));
		ADD_PKT(0x044b, 2, CZ_CLOSE_SIMPLECASH_SHOP(sock));
		ADD_PKT(0x00f7, 2, CZ_CLOSE_STORE(sock));
		ADD_PKT(0x035e, 2, CZ_CLOSE_WINDOW(sock));
		ADD_PKT(0x022d, 5, CZ_COMMAND_MER(sock));
		ADD_PKT(0x01a1, 3, CZ_COMMAND_PET(sock));
		ADD_PKT(0x00eb, 2, CZ_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x02d8, 10, CZ_CONFIG(sock));
		ADD_PKT(0x0090, 7, CZ_CONTACTNPC(sock));
		ADD_PKT(0x00d5, -1, CZ_CREATE_CHATROOM(sock));
		ADD_PKT(0x0286, 4, CZ_DEATH_QUESTION(sock));
		ADD_PKT(0x0203, 10, CZ_DELETE_FRIENDS(sock));
		ADD_PKT(0x00ce, 2, CZ_DISCONNECT_ALL_CHARACTER(sock));
		ADD_PKT(0x00cc, 6, CZ_DISCONNECT_CHARACTER(sock));
		ADD_PKT(0x01e7, 2, CZ_DORIDORI(sock));
		ADD_PKT(0x0a16, 26, CZ_DYNAMICNPC_CREATE_REQUEST(sock));
		ADD_PKT(0x0072, 22, CZ_ENTER(sock));
		ADD_PKT(0x0436, 19, CZ_ENTER2(sock));
		ADD_PKT(0x02d6, 6, CZ_EQUIPWIN_MICROSCOPE(sock));
		ADD_PKT(0x00ef, 2, CZ_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x00e3, 2, CZ_EXIT_ROOM(sock));
		ADD_PKT(0x0281, 4, CZ_GANGSI_RANK(sock));
		ADD_PKT(0x07f5, 6, CZ_GM_FULLSTRIP(sock));
		ADD_PKT(0x0854, -1, CZ_GPK_AUTH(sock));
		ADD_PKT(0x0852, 2, CZ_GPK_DYNCODE_RELOAD(sock));
		ADD_PKT(0x07d7, 8, CZ_GROUPINFO_CHANGE_V2(sock));
		ADD_PKT(0x017e, -1, CZ_GUILD_CHAT(sock));
		ADD_PKT(0x016e, 186, CZ_GUILD_NOTICE(sock));
		ADD_PKT(0x01b7, 6, CZ_GUILD_ZENY(sock));
		ADD_PKT(0x02a7, -1, CZ_HACKSH_CPX_MSG(sock));
		ADD_PKT(0x0279, 2, CZ_HUNTINGLIST(sock));
		ADD_PKT(0x0143, 10, CZ_INPUT_EDITDLG(sock));
		ADD_PKT(0x01d5, -1, CZ_INPUT_EDITDLGSTR(sock));
		ADD_PKT(0x0b14, 2, CZ_INVENTORY_EXPAND(sock));
		ADD_PKT(0x0b16, 2, CZ_INVENTORY_EXPAND_CONFIRMED(sock));
		ADD_PKT(0x0b19, 2, CZ_INVENTORY_EXPAND_REJECTED(sock));
		ADD_PKT(0x0907, 5, CZ_INVENTORY_TAB(sock));
		ADD_PKT(0x02f6, 7, CZ_IRMAIL_LIST(sock));
		ADD_PKT(0x02f3, -1, CZ_IRMAIL_SEND(sock));
		ADD_PKT(0x07e4, -1, CZ_ITEMLISTWIN_RES(sock));
		ADD_PKT(0x013f, 26, CZ_ITEM_CREATE(sock));
		ADD_PKT(0x09ce, 102, CZ_ITEM_CREATE_EX(sock));
		ADD_PKT(0x009f, 20, CZ_ITEM_PICKUP(sock));
		ADD_PKT(0x0362, 6, CZ_ITEM_PICKUP2(sock));
		ADD_PKT(0x02e4, 11, CZ_ITEM_PICKUP_NEW_JAPEN(sock));
		ADD_PKT(0x00a2, 14, CZ_ITEM_THROW(sock));
		ADD_PKT(0x0363, 6, CZ_ITEM_THROW2(sock));
		ADD_PKT(0x01f7, 14, CZ_JOIN_BABY(sock));
		ADD_PKT(0x07ec, 8, CZ_JOIN_BATTLE_FIELD(sock));
		ADD_PKT(0x01e3, 14, CZ_JOIN_COUPLE(sock));
		ADD_PKT(0x00ff, 10, CZ_JOIN_GROUP(sock));
		ADD_PKT(0x016b, 10, CZ_JOIN_GUILD(sock));
		ADD_PKT(0x0237, 2, CZ_KILLER_RANK(sock));
		ADD_PKT(0x02a5, 8, CZ_KSY_EVENT(sock));
		ADD_PKT(0x021d, 6, CZ_LESSEFFECT(sock));
		ADD_PKT(0x019c, -1, CZ_LOCALBROADCAST(sock));
		ADD_PKT(0x084f, 6, CZ_MACRO_ITEM_PICKUP(sock));
		ADD_PKT(0x0850, 7, CZ_MACRO_REQUEST_ACT(sock));
		ADD_PKT(0x084e, 5, CZ_MACRO_REQUEST_MOVE(sock));
		ADD_PKT(0x08c1, 2, CZ_MACRO_START(sock));
		ADD_PKT(0x08c2, 2, CZ_MACRO_STOP(sock));
		ADD_PKT(0x084c, 10, CZ_MACRO_USE_SKILL(sock));
		ADD_PKT(0x084d, 10, CZ_MACRO_USE_SKILL_TOGROUND(sock));
		ADD_PKT(0x0247, 8, CZ_MAIL_ADD_ITEM(sock));
		ADD_PKT(0x0243, 6, CZ_MAIL_DELETE(sock));
		ADD_PKT(0x0244, 6, CZ_MAIL_GET_ITEM(sock));
		ADD_PKT(0x023f, 2, CZ_MAIL_GET_LIST(sock));
		ADD_PKT(0x0241, 6, CZ_MAIL_OPEN(sock));
		ADD_PKT(0x0246, 4, CZ_MAIL_RESET_ITEM(sock));
		ADD_PKT(0x0248, -1, CZ_MAIL_SEND(sock));
		ADD_PKT(0x00f9, 26, CZ_MAKE_GROUP(sock));
		ADD_PKT(0x01e8, 28, CZ_MAKE_GROUP2(sock));
		ADD_PKT(0x02cf, 6, CZ_MEMORIALDUNGEON_COMMAND(sock));
		ADD_PKT(0x029f, 3, CZ_MER_COMMAND(sock));
		ADD_PKT(0x01cb, 9, CZ_MONSTER_TALK(sock));
		ADD_PKT(0x0140, 22, CZ_MOVETO_MAP(sock));
		ADD_PKT(0x0126, 8, CZ_MOVE_ITEM_FROM_BODY_TO_CART(sock));
		ADD_PKT(0x09e1, 8, CZ_MOVE_ITEM_FROM_BODY_TO_GUILDSTORAGE(sock));
		ADD_PKT(0x00f3, 8, CZ_MOVE_ITEM_FROM_BODY_TO_STORE(sock));
		ADD_PKT(0x0364, 8, CZ_MOVE_ITEM_FROM_BODY_TO_STORE2(sock));
		ADD_PKT(0x0127, 8, CZ_MOVE_ITEM_FROM_CART_TO_BODY(sock));
		ADD_PKT(0x09e3, 8, CZ_MOVE_ITEM_FROM_CART_TO_GUILDSTORAGE(sock));
		ADD_PKT(0x0129, 8, CZ_MOVE_ITEM_FROM_CART_TO_STORE(sock));
		ADD_PKT(0x09e2, 8, CZ_MOVE_ITEM_FROM_GUILDSTORAGE_TO_BODY(sock));
		ADD_PKT(0x09e4, 8, CZ_MOVE_ITEM_FROM_GUILDSTORAGE_TO_CART(sock));
		ADD_PKT(0x00f5, 11, CZ_MOVE_ITEM_FROM_STORE_TO_BODY(sock));
		ADD_PKT(0x0365, 8, CZ_MOVE_ITEM_FROM_STORE_TO_BODY2(sock));
		ADD_PKT(0x0128, 8, CZ_MOVE_ITEM_FROM_STORE_TO_CART(sock));
		ADD_PKT(0x007d, 2, CZ_NOTIFY_ACTORINIT(sock));
		ADD_PKT(0x0b12, 2, CZ_NPC_BARTER_CLOSE(sock));
		ADD_PKT(0x0b0f, -1, CZ_NPC_BARTER_PURCHASE(sock));
		ADD_PKT(0x09d8, 2, CZ_NPC_MARKET_CLOSE(sock));
		ADD_PKT(0x09d6, -1, CZ_NPC_MARKET_PURCHASE(sock));
		ADD_PKT(0x09d4, 2, CZ_NPC_TRADE_QUIT(sock));
		ADD_PKT(0x09d0, -1, CZ_NPROTECTGAMEGUARDCSAUTH(sock));
		ADD_PKT(0x0a7f, -1, CZ_OFFLINE_STORE_CREATE(sock));
		ADD_PKT(0x09b4, 6, CZ_OPEN_BARGAIN_SALE_TOOL(sock));
		ADD_PKT(0x0ac0, 26, CZ_OPEN_RODEXBOX(sock));
		ADD_PKT(0x035c, 2, CZ_OPEN_SIMPLE_CASHSHOP_ITEMLIST(sock));
		ADD_PKT(0x0806, 2, CZ_PARTY_BOOKING_REQ_DELETE(sock));
		ADD_PKT(0x0802, 18, CZ_PARTY_BOOKING_REQ_REGISTER(sock));
		ADD_PKT(0x0804, 14, CZ_PARTY_BOOKING_REQ_SEARCH(sock));
		ADD_PKT(0x0808, 14, CZ_PARTY_BOOKING_REQ_UPDATE(sock));
		ADD_PKT(0x02c8, 3, CZ_PARTY_CONFIG(sock));
		ADD_PKT(0x02c4, 26, CZ_PARTY_JOIN_REQ(sock));
		ADD_PKT(0x02c7, 7, CZ_PARTY_JOIN_REQ_ACK(sock));
		ADD_PKT(0x08f7, 3, CZ_PARTY_RECRUIT_ACK_RECALL(sock));
		ADD_PKT(0x08ef, 6, CZ_PARTY_RECRUIT_ADD_FILTERLINGLIST(sock));
		ADD_PKT(0x08fb, 6, CZ_PARTY_RECRUIT_CANCEL_VOLUNTEER(sock));
		ADD_PKT(0x08f9, 6, CZ_PARTY_RECRUIT_REFUSE_VOLUNTEER(sock));
		ADD_PKT(0x08e9, 2, CZ_PARTY_RECRUIT_REQ_DELETE(sock));
		ADD_PKT(0x08e5, 41, CZ_PARTY_RECRUIT_REQ_REGISTER(sock));
		ADD_PKT(0x08e7, 10, CZ_PARTY_RECRUIT_REQ_SEARCH(sock));
		ADD_PKT(0x08eb, 39, CZ_PARTY_RECRUIT_REQ_UPDATE(sock));
		ADD_PKT(0x08f1, 6, CZ_PARTY_RECRUIT_REQ_VOLUNTEER(sock));
		ADD_PKT(0x08f4, 6, CZ_PARTY_RECRUIT_SHOW_EQUIPMENT(sock));
		ADD_PKT(0x08f0, 6, CZ_PARTY_RECRUIT_SUB_FILTERLINGLIST(sock));
		ADD_PKT(0x0288, -1, CZ_PC_BUY_CASH_POINT_ITEM(sock));
		ADD_PKT(0x00c8, -1, CZ_PC_PURCHASE_ITEMLIST(sock));
		ADD_PKT(0x0134, -1, CZ_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x0801, -1, CZ_PC_PURCHASE_ITEMLIST_FROMMC2(sock));
		ADD_PKT(0x00c9, -1, CZ_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x01a8, 4, CZ_PETEGG_INFO(sock));
		ADD_PKT(0x01a9, 6, CZ_PET_ACT(sock));
		ADD_PKT(0x09fb, -1, CZ_PET_EVOLUTION(sock));
		ADD_PKT(0x0138, 3, CZ_PKMODE_CHANGE(sock));
		ADD_PKT(0x0a49, 22, CZ_PRIVATE_AIRSHIP_REQUEST(sock));
		ADD_PKT(0x02f1, 2, CZ_PROGRESS(sock));
		ADD_PKT(0x01bc, 26, CZ_RECALL(sock));
		ADD_PKT(0x01bd, 26, CZ_RECALL_GID(sock));
		ADD_PKT(0x0842, 6, CZ_RECALL_SSO(sock));
		ADD_PKT(0x0a21, 3, CZ_RECV_ROULETTE_ITEM(sock));
		ADD_PKT(0x0aa1, 4, CZ_REFINE_ADD_ITEM(sock));
		ADD_PKT(0x0aa3, 9, CZ_REFINE_ITEM_REQUEST(sock));
		ADD_PKT(0x0aa4, 2, CZ_REFINE_WINDOW_CLOSE(sock));
		ADD_PKT(0x0153, -1, CZ_REGISTER_GUILD_EMBLEM_IMG(sock));
		ADD_PKT(0x0161, -1, CZ_REG_CHANGE_GUILD_POSITIONINFO(sock));
		ADD_PKT(0x011d, 2, CZ_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x01ba, 26, CZ_REMOVE_AID(sock));
		ADD_PKT(0x0843, 6, CZ_REMOVE_AID_SSO(sock));
		ADD_PKT(0x0231, 26, CZ_RENAME_MER(sock));
		ADD_PKT(0x01a5, 26, CZ_RENAME_PET(sock));
		ADD_PKT(0x08dd, 27, CZ_REPLY_ENTRY_QUEUE_ADMISSION(sock));
		ADD_PKT(0x08e0, 51, CZ_REPLY_LOBBY_ADMISSION(sock));
		ADD_PKT(0x01ca, 3, CZ_REQMAKINGHOMUN(sock));
		ADD_PKT(0x018e, 18, CZ_REQMAKINGITEM(sock));
		ADD_PKT(0x0094, 19, CZ_REQNAME(sock));
		ADD_PKT(0x0368, 6, CZ_REQNAME2(sock));
		ADD_PKT(0x0193, 2, CZ_REQNAME_BYGID(sock));
		ADD_PKT(0x0369, 6, CZ_REQNAME_BYGID2(sock));
		ADD_PKT(0x0089, 11, CZ_REQUEST_ACT(sock));
		ADD_PKT(0x0437, 7, CZ_REQUEST_ACT2(sock));
		ADD_PKT(0x0233, 11, CZ_REQUEST_ACTNPC(sock));
		ADD_PKT(0x00f3, -1, CZ_REQUEST_CHAT(sock));
		ADD_PKT(0x0108, -1, CZ_REQUEST_CHAT_PARTY(sock));
		ADD_PKT(0x0085, 10, CZ_REQUEST_MOVE(sock));
		ADD_PKT(0x035f, 5, CZ_REQUEST_MOVE2(sock));
		ADD_PKT(0x0232, 9, CZ_REQUEST_MOVENPC(sock));
		ADD_PKT(0x0234, 6, CZ_REQUEST_MOVETOOWNER(sock));
		ADD_PKT(0x02e5, 9, CZ_REQUEST_MOVE_NEW_JAPEN(sock));
		ADD_PKT(0x0082, 2, CZ_REQUEST_QUIT(sock));
		ADD_PKT(0x00f7, 17, CZ_REQUEST_TIME(sock));
		ADD_PKT(0x0360, 6, CZ_REQUEST_TIME2(sock));
		ADD_PKT(0x01df, 6, CZ_REQ_ACCOUNTNAME(sock));
		ADD_PKT(0x0a25, 6, CZ_REQ_ACH_REWARD(sock));
		ADD_PKT(0x0a04, 6, CZ_REQ_ADD_ITEM_RODEX(sock));
		ADD_PKT(0x0170, 14, CZ_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x09ae, 19, CZ_REQ_APPLY_BARGAIN_SALE_ITEM(sock));
		ADD_PKT(0x09ab, 6, CZ_REQ_BANKING_CHECK(sock));
		ADD_PKT(0x09a7, 10, CZ_REQ_BANKING_DEPOSIT(sock));
		ADD_PKT(0x09a9, 10, CZ_REQ_BANKING_WITHDRAW(sock));
		ADD_PKT(0x015b, 54, CZ_REQ_BAN_GUILD(sock));
		ADD_PKT(0x07f0, 6, CZ_REQ_BATTLE_STATE_MONITOR(sock));
		ADD_PKT(0x0978, 6, CZ_REQ_BEFORE_WORLD_INFO(sock));
		ADD_PKT(0x0130, 6, CZ_REQ_BUY_FROMMC(sock));
		ADD_PKT(0x0a03, 2, CZ_REQ_CANCEL_WRITE_RODEX(sock));
		ADD_PKT(0x012a, 2, CZ_REQ_CARTOFF(sock));
		ADD_PKT(0x09ac, -1, CZ_REQ_CASH_BARGAIN_SALE_ITEM_INFO(sock));
		ADD_PKT(0x01af, 4, CZ_REQ_CHANGECART(sock));
		ADD_PKT(0x0155, -1, CZ_REQ_CHANGE_MEMBERPOS(sock));
		ADD_PKT(0x0a2e, 6, CZ_REQ_CHANGE_TITLE(sock));
		ADD_PKT(0x0817, 6, CZ_REQ_CLICK_TO_BUYING_STORE(sock));
		ADD_PKT(0x012e, 2, CZ_REQ_CLOSESTORE(sock));
		ADD_PKT(0x09b8, 6, CZ_REQ_CLOSE_BANKING(sock));
		ADD_PKT(0x0815, 2, CZ_REQ_CLOSE_BUYING_STORE(sock));
		ADD_PKT(0x09be, 2, CZ_REQ_CLOSE_GUILD_STORAGE(sock));
		ADD_PKT(0x0a1d, 2, CZ_REQ_CLOSE_ROULETTE(sock));
		ADD_PKT(0x09c3, 10, CZ_REQ_COUNT_BARGAIN_SALE_ITEM(sock));
		ADD_PKT(0x0183, 10, CZ_REQ_DELETE_RELATED_GUILD(sock));
		ADD_PKT(0x09f5, 11, CZ_REQ_DELETE_RODEX(sock));
		ADD_PKT(0x018a, 4, CZ_REQ_DISCONNECT(sock));
		ADD_PKT(0x015d, 42, CZ_REQ_DISORGANIZE_GUILD(sock));
		ADD_PKT(0x00bf, 3, CZ_REQ_EMOTION(sock));
		ADD_PKT(0x00d9, 14, CZ_REQ_ENTER_ROOM(sock));
		ADD_PKT(0x08d7, 28, CZ_REQ_ENTRY_QUEUE_APPLY(sock));
		ADD_PKT(0x08da, 26, CZ_REQ_ENTRY_QUEUE_CANCEL(sock));
		ADD_PKT(0x090a, 26, CZ_REQ_ENTRY_QUEUE_RANKING(sock));
		ADD_PKT(0x00e4, 6, CZ_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0103, 30, CZ_REQ_EXPEL_GROUP_MEMBER(sock));
		ADD_PKT(0x00e2, 26, CZ_REQ_EXPEL_MEMBER(sock));
		ADD_PKT(0x0a1f, 2, CZ_REQ_GENERATE_ROULETTE(sock));
		ADD_PKT(0x0212, 26, CZ_REQ_GIVE_MANNER_BYNAME(sock));
		ADD_PKT(0x0149, 9, CZ_REQ_GIVE_MANNER_POINT(sock));
		ADD_PKT(0x09d9, 4, CZ_REQ_GUILDSTORAGE_LOG(sock));
		ADD_PKT(0x0151, 6, CZ_REQ_GUILD_EMBLEM_IMG(sock));
		ADD_PKT(0x0175, 6, CZ_REQ_GUILD_MEMBER_INFO(sock));
		ADD_PKT(0x014f, 6, CZ_REQ_GUILD_MENU(sock));
		ADD_PKT(0x014d, 2, CZ_REQ_GUILD_MENUINTERFACE(sock));
		ADD_PKT(0x0912, 10, CZ_REQ_GUILD_NAME(sock));
		ADD_PKT(0x0180, 6, CZ_REQ_HOSTILE_GUILD(sock));
		ADD_PKT(0x017c, 6, CZ_REQ_ITEMCOMPOSITION(sock));
		ADD_PKT(0x017a, 4, CZ_REQ_ITEMCOMPOSITION_LIST(sock));
		ADD_PKT(0x0178, 4, CZ_REQ_ITEMIDENTIFY(sock));
		ADD_PKT(0x01fd, 25, CZ_REQ_ITEMREPAIR(sock));
		ADD_PKT(0x09f3, 11, CZ_REQ_ITEM_FROM_RODEX(sock));
		ADD_PKT(0x01f9, 6, CZ_REQ_JOIN_BABY(sock));
		ADD_PKT(0x01e5, 6, CZ_REQ_JOIN_COUPLE(sock));
		ADD_PKT(0x00fc, 6, CZ_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x0168, 14, CZ_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0916, 26, CZ_REQ_JOIN_GUILD2(sock));
		ADD_PKT(0x0100, 2, CZ_REQ_LEAVE_GROUP(sock));
		ADD_PKT(0x0159, 54, CZ_REQ_LEAVE_GUILD(sock));
		ADD_PKT(0x0273, 30, CZ_REQ_MAIL_RETURN(sock));
		ADD_PKT(0x0165, 30, CZ_REQ_MAKE_GUILD(sock));
		ADD_PKT(0x01ae, 6, CZ_REQ_MAKINGARROW(sock));
		ADD_PKT(0x025b, 8, CZ_REQ_MAKINGITEM(sock));
		ADD_PKT(0x096e, -1, CZ_REQ_MERGE_ITEM(sock));
		ADD_PKT(0x09ee, 11, CZ_REQ_NEXT_RODEX(sock));
		ADD_PKT(0x00b9, 6, CZ_REQ_NEXT_SCRIPT(sock));
		ADD_PKT(0x0a35, 4, CZ_REQ_ONECLICK_ITEMIDENTIFY(sock));
		ADD_PKT(0x012f, -1, CZ_REQ_OPENSTORE(sock));
		ADD_PKT(0x01b2, -1, CZ_REQ_OPENSTORE2(sock));
		ADD_PKT(0x09b6, 6, CZ_REQ_OPEN_BANKING(sock));
		ADD_PKT(0x0811, -1, CZ_REQ_OPEN_BUYING_STORE(sock));
		ADD_PKT(0x09ba, 2, CZ_REQ_OPEN_GUILD_STORAGE(sock));
		ADD_PKT(0x0157, 6, CZ_REQ_OPEN_MEMBER_INFO(sock));
		ADD_PKT(0x0a19, 2, CZ_REQ_OPEN_ROULETTE(sock));
		ADD_PKT(0x0a68, 3, CZ_REQ_OPEN_UI(sock));
		ADD_PKT(0x0a08, 26, CZ_REQ_OPEN_WRITE_RODEX(sock));
		ADD_PKT(0x0910, 10, CZ_REQ_PARTY_NAME(sock));
		ADD_PKT(0x097c, 4, CZ_REQ_RANKING(sock));
		ADD_PKT(0x09ea, 11, CZ_REQ_READ_RODEX(sock));
		ADD_PKT(0x0ac1, 26, CZ_REQ_REFRESH_RODEX(sock));
		ADD_PKT(0x01c0, 2, CZ_REQ_REMAINTIME(sock));
		ADD_PKT(0x09b0, 10, CZ_REQ_REMOVE_BARGAIN_SALE_ITEM(sock));
		ADD_PKT(0x0a06, 6, CZ_REQ_REMOVE_RODEX_ITEM(sock));
		ADD_PKT(0x00e0, 30, CZ_REQ_ROLE_CHANGE(sock));
		ADD_PKT(0x0a1b, 2, CZ_REQ_ROULETTE_INFO(sock));
		ADD_PKT(0x08c9, 2, CZ_REQ_SCHEDULER_CASHITEM(sock));
		ADD_PKT(0x0a6e, -1, CZ_REQ_SEND_RODEX(sock));
		ADD_PKT(0x0846, 4, CZ_REQ_SE_CASH_TAB_CODE(sock));
		ADD_PKT(0x00ba, 2, CZ_REQ_STATUS(sock));
		ADD_PKT(0x0213, 26, CZ_REQ_STATUS_GM(sock));
		ADD_PKT(0x00ab, 4, CZ_REQ_TAKEOFF_EQUIP(sock));
		ADD_PKT(0x0819, -1, CZ_REQ_TRADE_BUYING_STORE(sock));
		ADD_PKT(0x00c1, 2, CZ_REQ_USER_COUNT(sock));
		ADD_PKT(0x0222, 6, CZ_REQ_WEAPONREFINE(sock));
		ADD_PKT(0x00a9, 6, CZ_REQ_WEAR_EQUIP(sock));
		ADD_PKT(0x0998, 8, CZ_REQ_WEAR_EQUIP_V5(sock));
		ADD_PKT(0x00d3, 2, CZ_REQ_WHISPER_LIST(sock));
		ADD_PKT(0x09f1, 11, CZ_REQ_ZENY_FROM_RODEX(sock));
		ADD_PKT(0x0197, 4, CZ_RESET(sock));
		ADD_PKT(0x00b2, 3, CZ_RESTART(sock));
		ADD_PKT(0x0835, -1, CZ_SEARCH_STORE_INFO(sock));
		ADD_PKT(0x0838, 2, CZ_SEARCH_STORE_INFO_NEXT_PAGE(sock));
		ADD_PKT(0x07dc, 6, CZ_SEEK_PARTY(sock));
		ADD_PKT(0x07de, 30, CZ_SEEK_PARTY_MEMBER(sock));
		ADD_PKT(0x01ce, 6, CZ_SELECTAUTOSPELL(sock));
		ADD_PKT(0x0980, 7, CZ_SELECTCART(sock));
		ADD_PKT(0x01a7, 4, CZ_SELECT_PETEGG(sock));
		ADD_PKT(0x011b, 20, CZ_SELECT_WARPPOINT(sock));
		ADD_PKT(0x00cf, 27, CZ_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d0, 3, CZ_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x084a, 2, CZ_SE_CASHSHOP_CLOSE(sock));
		ADD_PKT(0x0844, 2, CZ_SE_CASHSHOP_OPEN(sock));
		ADD_PKT(0x0848, -1, CZ_SE_PC_BUY_CASHITEM_LIST(sock));
		ADD_PKT(0x01bb, 26, CZ_SHIFT(sock));
		ADD_PKT(0x0a01, 3, CZ_SHORTCUTKEYBAR_ROTATE(sock));
		ADD_PKT(0x02ba, 11, CZ_SHORTCUT_KEY_CHANGE(sock));
		ADD_PKT(0x0445, 12, CZ_SIMPLE_BUY_CASH_POINT_ITEM(sock));
		ADD_PKT(0x080c, 2, CZ_SIMPLE_CASH_BTNSHOW(sock));
		ADD_PKT(0x0443, 8, CZ_SKILL_SELECT_RESPONSE(sock));
		ADD_PKT(0x083c, 14, CZ_SSILIST_ITEM_CLICK(sock));
		ADD_PKT(0x0292, 2, CZ_STANDING_RESURRECTION(sock));
		ADD_PKT(0x0b10, 10, CZ_START_USE_SKILL(sock));
		ADD_PKT(0x00bb, 5, CZ_STATUS_CHANGE(sock));
		ADD_PKT(0x0b11, 4, CZ_STOP_USE_SKILL(sock));
		ADD_PKT(0x0225, 2, CZ_TAEKWON_RANK(sock));
		ADD_PKT(0x019f, 6, CZ_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x08b5, 6, CZ_TRYCOLLECTION(sock));
		ADD_PKT(0x08f5, -1, CZ_UNKNOWN_BOOKING_SOMMON_MEMBER_08f5(sock));
		ADD_PKT(0x0112, 4, CZ_UPGRADE_SKILLLEVEL(sock));
		ADD_PKT(0x00a7, 8, CZ_USE_ITEM(sock));
		ADD_PKT(0x0439, 8, CZ_USE_ITEM2(sock));
		ADD_PKT(0x02e2, 20, CZ_USE_ITEM_NEW_JAPEN(sock));
		ADD_PKT(0x0113, 25, CZ_USE_SKILL(sock));
		ADD_PKT(0x0438, 10, CZ_USE_SKILL2(sock));
		ADD_PKT(0x02e3, 22, CZ_USE_SKILL_NEW_JAPEN(sock));
		ADD_PKT(0x0af4, 11, CZ_USE_SKILL_TOGROUND(sock));
		ADD_PKT(0x0366, 10, CZ_USE_SKILL_TOGROUND2(sock));
		ADD_PKT(0x0190, 23, CZ_USE_SKILL_TOGROUND_WITHTALKBOX(sock));
		ADD_PKT(0x0367, 90, CZ_USE_SKILL_TOGROUND_WITHTALKBOX2(sock));
		ADD_PKT(0x0096, -1, CZ_WHISPER(sock));
		ADD_PKT(0x0073, 11, ZC_ACCEPT_ENTER(sock));
		ADD_PKT(0x02eb, 13, ZC_ACCEPT_ENTER2(sock));
		ADD_PKT(0x0a18, 14, ZC_ACCEPT_ENTER3(sock));
		ADD_PKT(0x0083, 2, ZC_ACCEPT_QUIT(sock));
		ADD_PKT(0x0a24, 66, ZC_ACH_UPDATE(sock));
		ADD_PKT(0x01e0, 30, ZC_ACK_ACCOUNTNAME(sock));
		ADD_PKT(0x012c, 3, ZC_ACK_ADDITEM_TO_CART(sock));
		ADD_PKT(0x00ea, 5, ZC_ACK_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x0a05, 63, ZC_ACK_ADD_ITEM_RODEX(sock));
		ADD_PKT(0x09af, 4, ZC_ACK_APPLY_BARGAIN_SALE_ITEM(sock));
		ADD_PKT(0x0256, 5, ZC_ACK_AUCTION_ADD_ITEM(sock));
		ADD_PKT(0x09a8, 16, ZC_ACK_BANKING_DEPOSIT(sock));
		ADD_PKT(0x09aa, 16, ZC_ACK_BANKING_WITHDRAW(sock));
		ADD_PKT(0x015c, 90, ZC_ACK_BAN_GUILD(sock));
		ADD_PKT(0x0839, 66, ZC_ACK_BAN_GUILD_SSO(sock));
		ADD_PKT(0x07f1, 18, ZC_ACK_BATTLE_STATE_MONITOR(sock));
		ADD_PKT(0x0979, 50, ZC_ACK_BEFORE_WORLD_INFO(sock));
		ADD_PKT(0x09ad, 12, ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO(sock));
		ADD_PKT(0x0174, -1, ZC_ACK_CHANGE_GUILD_POSITIONINFO(sock));
		ADD_PKT(0x0a2f, 7, ZC_ACK_CHANGE_TITLE(sock));
		ADD_PKT(0x0989, 2, ZC_ACK_CLAN_LEAVE(sock));
		ADD_PKT(0x09b9, 4, ZC_ACK_CLOSE_BANKING(sock));
		ADD_PKT(0x09bf, 4, ZC_ACK_CLOSE_GUILD_STORAGE(sock));
		ADD_PKT(0x0a1e, 3, ZC_ACK_CLOSE_ROULETTE(sock));
		ADD_PKT(0x09c4, 10, ZC_ACK_COUNT_BARGAIN_SALE_ITEM(sock));
		ADD_PKT(0x00d6, 3, ZC_ACK_CREATE_CHATROOM(sock));
		ADD_PKT(0x09f6, 11, ZC_ACK_DELETE_RODEX(sock));
		ADD_PKT(0x00cd, 3, ZC_ACK_DISCONNECT_CHARACTER(sock));
		ADD_PKT(0x015f, 42, ZC_ACK_DISORGANIZE_GUILD(sock));
		ADD_PKT(0x015e, 6, ZC_ACK_DISORGANIZE_GUILD_RESULT(sock));
		ADD_PKT(0x08d8, 27, ZC_ACK_ENTRY_QUEUE_APPLY(sock));
		ADD_PKT(0x08db, 27, ZC_ACK_ENTRY_QUEUE_CANCEL(sock));
		ADD_PKT(0x00e7, 3, ZC_ACK_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f5, 9, ZC_ACK_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x0a20, 23, ZC_ACK_GENERATE_ROULETTE(sock));
		ADD_PKT(0x014a, 6, ZC_ACK_GIVE_MANNER_POINT(sock));
		ADD_PKT(0x09da, -1, ZC_ACK_GUILDSTORAGE_LOG(sock));
		ADD_PKT(0x0176, 106, ZC_ACK_GUILD_MEMBER_INFO(sock));
		ADD_PKT(0x014e, 6, ZC_ACK_GUILD_MENUINTERFACE(sock));
		ADD_PKT(0x0913, 30, ZC_ACK_GUILD_NAME(sock));
		ADD_PKT(0x0b15, 7, ZC_ACK_INVENTORY_EXPAND(sock));
		ADD_PKT(0x0b17, 3, ZC_ACK_INVENTORY_EXPAND_RESULT(sock));
		ADD_PKT(0x017d, 7, ZC_ACK_ITEMCOMPOSITION(sock));
		ADD_PKT(0x0179, 5, ZC_ACK_ITEMIDENTIFY(sock));
		ADD_PKT(0x0818, -1, ZC_ACK_ITEMLIST_BUYING_STORE(sock));
		ADD_PKT(0x0188, 8, ZC_ACK_ITEMREFINING(sock));
		ADD_PKT(0x01fe, 5, ZC_ACK_ITEMREPAIR(sock));
		ADD_PKT(0x09f4, 12, ZC_ACK_ITEM_FROM_RODEX(sock));
		ADD_PKT(0x015a, 66, ZC_ACK_LEAVE_GUILD(sock));
		ADD_PKT(0x0255, 5, ZC_ACK_MAIL_ADD_ITEM(sock));
		ADD_PKT(0x0257, 8, ZC_ACK_MAIL_DELETE(sock));
		ADD_PKT(0x0274, 8, ZC_ACK_MAIL_RETURN(sock));
		ADD_PKT(0x00fa, 3, ZC_ACK_MAKE_GROUP(sock));
		ADD_PKT(0x096f, 7, ZC_ACK_MERGE_ITEM(sock));
		ADD_PKT(0x0a28, 3, ZC_ACK_OPENSTORE2(sock));
		ADD_PKT(0x09b7, 4, ZC_ACK_OPEN_BANKING(sock));
		ADD_PKT(0x09bb, 6, ZC_ACK_OPEN_GUILD_STORAGE(sock));
		ADD_PKT(0x0158, -1, ZC_ACK_OPEN_MEMBER_INFO(sock));
		ADD_PKT(0x0a1a, 25, ZC_ACK_OPEN_ROULETTE(sock));
		ADD_PKT(0x0a12, 27, ZC_ACK_OPEN_WRITE_RODEX(sock));
		ADD_PKT(0x0911, 30, ZC_ACK_PARTY_NAME(sock));
		ADD_PKT(0x097d, 288, ZC_ACK_RANKING(sock));
		ADD_PKT(0x09eb, -1, ZC_ACK_READ_RODEX(sock));
		ADD_PKT(0x011e, 3, ZC_ACK_REMEMBER_WARPPOINT(sock));
		ADD_PKT(0x09b1, 4, ZC_ACK_REMOVE_BARGAIN_SALE_ITEM(sock));
		ADD_PKT(0x0a07, 9, ZC_ACK_REMOVE_RODEX_ITEM(sock));
		ADD_PKT(0x018f, 8, ZC_ACK_REQMAKINGITEM(sock));
		ADD_PKT(0x0adf, 58, ZC_ACK_REQNAME(sock));
		ADD_PKT(0x0195, 102, ZC_ACK_REQNAMEALL(sock));
		ADD_PKT(0x0a30, 106, ZC_ACK_REQNAMEALL2(sock));
		ADD_PKT(0x0af7, 32, ZC_ACK_REQNAME_BYGID(sock));
		ADD_PKT(0x0173, 3, ZC_ACK_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x0156, -1, ZC_ACK_REQ_CHANGE_MEMBERS(sock));
		ADD_PKT(0x018b, 4, ZC_ACK_REQ_DISCONNECT(sock));
		ADD_PKT(0x0181, 3, ZC_ACK_REQ_HOSTILE_GUILD(sock));
		ADD_PKT(0x00fd, 27, ZC_ACK_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x0169, 3, ZC_ACK_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x0ac2, -1, ZC_ACK_RODEX_LIST(sock));
		ADD_PKT(0x0a1c, -1, ZC_ACK_ROULEITTE_INFO(sock));
		ADD_PKT(0x08ca, -1, ZC_ACK_SCHEDULER_CASHITEM(sock));
		ADD_PKT(0x09ed, 3, ZC_ACK_SEND_RODEX(sock));
		ADD_PKT(0x0847, -1, ZC_ACK_SE_CASH_ITEM_LIST(sock));
		ADD_PKT(0x08c0, -1, ZC_ACK_SE_CASH_ITEM_LIST2(sock));
		ADD_PKT(0x0214, 42, ZC_ACK_STATUS_GM(sock));
		ADD_PKT(0x099a, 9, ZC_ACK_TAKEOFF_EQUIP_V5(sock));
		ADD_PKT(0x0110, 14, ZC_ACK_TOUSESKILL(sock));
		ADD_PKT(0x0223, 10, ZC_ACK_WEAPONREFINE(sock));
		ADD_PKT(0x0999, 11, ZC_ACK_WEAR_EQUIP_V5(sock));
		ADD_PKT(0x0098, 3, ZC_ACK_WHISPER(sock));
		ADD_PKT(0x09df, 7, ZC_ACK_WHISPER02(sock));
		ADD_PKT(0x09f2, 12, ZC_ACK_ZENY_FROM_RODEX(sock));
		ADD_PKT(0x013b, 4, ZC_ACTION_FAILURE(sock));
		ADD_PKT(0x02b7, 7, ZC_ACTIVE_QUEST(sock));
		ADD_PKT(0x00e9, 29, ZC_ADD_EXCHANGE_ITEM(sock));
		ADD_PKT(0x080f, 30, ZC_ADD_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x0a09, 55, ZC_ADD_EXCHANGE_ITEM3(sock));
		ADD_PKT(0x0a96, 61, ZC_ADD_EXCHANGE_ITEM4(sock));
		ADD_PKT(0x0209, 36, ZC_ADD_FRIENDS_LIST(sock));
		ADD_PKT(0x0124, 31, ZC_ADD_ITEM_TO_CART(sock));
		ADD_PKT(0x01c5, 32, ZC_ADD_ITEM_TO_CART2(sock));
		ADD_PKT(0x0a0b, 57, ZC_ADD_ITEM_TO_CART3(sock));
		ADD_PKT(0x00f4, 31, ZC_ADD_ITEM_TO_STORE(sock));
		ADD_PKT(0x01c4, 32, ZC_ADD_ITEM_TO_STORE2(sock));
		ADD_PKT(0x0a0a, 57, ZC_ADD_ITEM_TO_STORE3(sock));
		ADD_PKT(0x0ae4, 89, ZC_ADD_MEMBER_TO_GROUP(sock));
		ADD_PKT(0x01e9, 81, ZC_ADD_MEMBER_TO_GROUP2(sock));
		ADD_PKT(0x02b3, 107, ZC_ADD_QUEST(sock));
		ADD_PKT(0x0b0c, 155, ZC_ADD_QUEST_EX(sock));
		ADD_PKT(0x0185, 34, ZC_ADD_RELATED_GUILD(sock));
		ADD_PKT(0x0111, 39, ZC_ADD_SKILL(sock));
		ADD_PKT(0x0283, 6, ZC_AID(sock));
		ADD_PKT(0x0a4b, 22, ZC_AIRSHIP_MAPMOVE(sock));
		ADD_PKT(0x0a4c, 28, ZC_AIRSHIP_SERVERMOVE(sock));
		ADD_PKT(0x021c, 10, ZC_ALCHEMIST_POINT(sock));
		ADD_PKT(0x021a, 282, ZC_ALCHEMIST_RANK(sock));
		ADD_PKT(0x0a23, -1, ZC_ALL_ACH_LIST(sock));
		ADD_PKT(0x02b1, -1, ZC_ALL_QUEST_LIST(sock));
		ADD_PKT(0x097a, -1, ZC_ALL_QUEST_LIST2(sock));
		ADD_PKT(0x09f8, -1, ZC_ALL_QUEST_LIST3(sock));
		ADD_PKT(0x0aff, -1, ZC_ALL_QUEST_LIST4(sock));
		ADD_PKT(0x02b2, -1, ZC_ALL_QUEST_MISSION(sock));
		ADD_PKT(0x0a98, 10, ZC_ALT_EQUIPMENT_EQUIP(sock));
		ADD_PKT(0x0a9b, -1, ZC_ALT_EQUIPMENT_ITEMS(sock));
		ADD_PKT(0x0a9a, 10, ZC_ALT_EQUIPMENT_REMOVE(sock));
		ADD_PKT(0x0a41, 18, ZC_AOE_EFFECT_SKILL(sock));
		ADD_PKT(0x0139, 16, ZC_ATTACK_FAILURE_FOR_DISTANCE(sock));
		ADD_PKT(0x013a, 4, ZC_ATTACK_RANGE(sock));
		ADD_PKT(0x025e, 4, ZC_AUCTION_ACK_MY_SELL_STOP(sock));
		ADD_PKT(0x0252, -1, ZC_AUCTION_ITEM_REQ_SEARCH(sock));
		ADD_PKT(0x0250, 3, ZC_AUCTION_RESULT(sock));
		ADD_PKT(0x025f, 6, ZC_AUCTION_WINDOWS(sock));
		ADD_PKT(0x0147, 39, ZC_AUTORUN_SKILL(sock));
		ADD_PKT(0x0afb, -1, ZC_AUTOSPELLLIST(sock));
		ADD_PKT(0x0216, 6, ZC_BABYMSG(sock));
		ADD_PKT(0x09a6, 12, ZC_BANKING_CHECK(sock));
		ADD_PKT(0x0163, -1, ZC_BAN_LIST(sock));
		ADD_PKT(0x02dc, -1, ZC_BATTLEFIELD_CHAT(sock));
		ADD_PKT(0x02dd, 32, ZC_BATTLEFIELD_NOTIFY_CAMPINFO(sock));
		ADD_PKT(0x02e0, 34, ZC_BATTLEFIELD_NOTIFY_HP(sock));
		ADD_PKT(0x0a0e, 14, ZC_BATTLEFIELD_NOTIFY_HP2(sock));
		ADD_PKT(0x02de, 6, ZC_BATTLEFIELD_NOTIFY_POINT(sock));
		ADD_PKT(0x02df, 36, ZC_BATTLEFIELD_NOTIFY_POSITION(sock));
		ADD_PKT(0x07eb, -1, ZC_BATTLE_FIELD_LIST(sock));
		ADD_PKT(0x07f4, 3, ZC_BATTLE_JOIN_DISABLE_STATE(sock));
		ADD_PKT(0x07f3, 6, ZC_BATTLE_JOIN_NOTI_DEFER(sock));
		ADD_PKT(0x07f2, 8, ZC_BATTLE_NOTI_START_STEP(sock));
		ADD_PKT(0x021b, 10, ZC_BLACKSMITH_POINT(sock));
		ADD_PKT(0x0219, 282, ZC_BLACKSMITH_RANK(sock));
		ADD_PKT(0x01d1, 14, ZC_BLADESTOP(sock));
		ADD_PKT(0x0293, 70, ZC_BOSS_INFO(sock));
		ADD_PKT(0x009a, -1, ZC_BROADCAST(sock));
		ADD_PKT(0x01c3, -1, ZC_BROADCAST2(sock));
		ADD_PKT(0x081f, -1, ZC_BROADCAST4(sock));
		ADD_PKT(0x07fd, -1, ZC_BROADCASTING_SPECIAL_ITEM_OBTAIN(sock));
		ADD_PKT(0x0814, 86, ZC_BUYING_STORE_ENTRY(sock));
		ADD_PKT(0x07ef, 8, ZC_CANCEL_BATTLE_FIELD(sock));
		ADD_PKT(0x00ee, 2, ZC_CANCEL_EXCHANGE_ITEM(sock));
		ADD_PKT(0x012b, 2, ZC_CARTOFF(sock));
		ADD_PKT(0x0122, -1, ZC_CART_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0297, -1, ZC_CART_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x02d2, -1, ZC_CART_EQUIPMENT_ITEMLIST3(sock));
		ADD_PKT(0x0903, -1, ZC_CART_ITEMLIST_EQUIP(sock));
		ADD_PKT(0x0994, -1, ZC_CART_ITEMLIST_EQUIP_V5(sock));
		ADD_PKT(0x0a0f, -1, ZC_CART_ITEMLIST_EQUIP_V6(sock));
		ADD_PKT(0x0902, -1, ZC_CART_ITEMLIST_NORMAL(sock));
		ADD_PKT(0x0993, -1, ZC_CART_ITEMLIST_NORMAL_V5(sock));
		ADD_PKT(0x0123, -1, ZC_CART_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01ef, -1, ZC_CART_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x02e9, -1, ZC_CART_NORMAL_ITEMLIST3(sock));
		ADD_PKT(0x0299, 8, ZC_CASH_ITEM_DELETE(sock));
		ADD_PKT(0x0298, 10, ZC_CASH_TIME_COUNTER(sock));
		ADD_PKT(0x0230, 12, ZC_CHANGESTATE_MER(sock));
		ADD_PKT(0x01a4, 11, ZC_CHANGESTATE_PET(sock));
		ADD_PKT(0x00df, -1, ZC_CHANGE_CHATROOM(sock));
		ADD_PKT(0x009c, 9, ZC_CHANGE_DIRECTION(sock));
		ADD_PKT(0x07fc, 10, ZC_CHANGE_GROUP_MASTER(sock));
		ADD_PKT(0x01b4, 12, ZC_CHANGE_GUILD(sock));
		ADD_PKT(0x0a51, 34, ZC_CHECK_RECEIVE_CHARACTER_NAME(sock));
		ADD_PKT(0x098a, -1, ZC_CLANINFO(sock));
		ADD_PKT(0x08d6, 6, ZC_CLEAR_CoreLog(sock));
		ADD_PKT(0x09bd, 2, ZC_CLOSE_BARGAIN_SALE_TOOL(sock));
		ADD_PKT(0x00b6, 6, ZC_CLOSE_CoreLog(sock));
		ADD_PKT(0x00f8, 2, ZC_CLOSE_STORE(sock));
		ADD_PKT(0x01d2, 10, ZC_COMBODELAY(sock));
		ADD_PKT(0x0144, 23, ZC_COMPASS(sock));
		ADD_PKT(0x00ec, 3, ZC_CONCLUDE_EXCHANGE_ITEM(sock));
		ADD_PKT(0x02d9, 10, ZC_CONFIG(sock));
		ADD_PKT(0x02da, 3, ZC_CONFIG_NOTIFY(sock));
		ADD_PKT(0x01ea, 6, ZC_CONGRATULATION(sock));
		ADD_PKT(0x0820, 11, ZC_COSTUME_SPRITE_CHANGE(sock));
		ADD_PKT(0x01e6, 26, ZC_COUPLENAME(sock));
		ADD_PKT(0x0141, 14, ZC_COUPLESTATUS(sock));
		ADD_PKT(0x0a3b, -1, ZC_CUSTOM_HAT_EFFECT(sock));
		ADD_PKT(0x09c1, 10, ZC_C_MARKERINFO(sock));
		ADD_PKT(0x0285, 6, ZC_DEATH_QUESTION(sock));
		ADD_PKT(0x07ff, -1, ZC_DEFINE_CHECK(sock));
		ADD_PKT(0x0137, 6, ZC_DELETEITEM_FROM_MCSTORE(sock));
		ADD_PKT(0x09e5, 18, ZC_DELETEITEM_FROM_MCSTORE2(sock));
		ADD_PKT(0x020a, 10, ZC_DELETE_FRIENDS(sock));
		ADD_PKT(0x07fa, 8, ZC_DELETE_ITEM_FROM_BODY(sock));
		ADD_PKT(0x0125, 8, ZC_DELETE_ITEM_FROM_CART(sock));
		ADD_PKT(0x00f6, 8, ZC_DELETE_ITEM_FROM_STORE(sock));
		ADD_PKT(0x0105, 31, ZC_DELETE_MEMBER_FROM_GROUP(sock));
		ADD_PKT(0x0184, 10, ZC_DELETE_RELATED_GUILD(sock));
		ADD_PKT(0x02b4, 6, ZC_DEL_QUEST(sock));
		ADD_PKT(0x00d8, 6, ZC_DESTROY_ROOM(sock));
		ADD_PKT(0x01cf, 28, ZC_DEVOTIONLIST(sock));
		ADD_PKT(0x0816, 6, ZC_DISAPPEAR_BUYING_STORE_ENTRY(sock));
		ADD_PKT(0x0132, 6, ZC_DISAPPEAR_ENTRY(sock));
		ADD_PKT(0x09a4, 18, ZC_DISPATCH_TIMING_INFO_CHN(sock));
		ADD_PKT(0x01b9, 6, ZC_DISPEL(sock));
		ADD_PKT(0x0205, 26, ZC_DIVORCE(sock));
		ADD_PKT(0x0a02, 4, ZC_DRESSROOM_OPEN(sock));
		ADD_PKT(0x0a17, 6, ZC_DYNAMICNPC_CREATE_RESULT(sock));
		ADD_PKT(0x08ff, 24, ZC_EFST_SET_ENTER(sock));
		ADD_PKT(0x0984, 28, ZC_EFST_SET_ENTER2(sock));
		ADD_PKT(0x081d, 22, ZC_EL_INIT(sock));
		ADD_PKT(0x081e, 8, ZC_EL_PAR_CHANGE(sock));
		ADD_PKT(0x00c0, 7, ZC_EMOTION(sock));
		ADD_PKT(0x00db, -1, ZC_ENTER_ROOM(sock));
		ADD_PKT(0x090e, 2, ZC_ENTRY_QUEUE_INIT(sock));
		ADD_PKT(0x02bb, 8, ZC_EQUIPITEM_DAMAGED(sock));
		ADD_PKT(0x00a4, -1, ZC_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0295, -1, ZC_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x02d0, -1, ZC_EQUIPMENT_ITEMLIST3(sock));
		ADD_PKT(0x02d7, -1, ZC_EQUIPWIN_MICROSCOPE(sock));
		ADD_PKT(0x0859, -1, ZC_EQUIPWIN_MICROSCOPE2(sock));
		ADD_PKT(0x0997, -1, ZC_EQUIPWIN_MICROSCOPE_V5(sock));
		ADD_PKT(0x0a2d, -1, ZC_EQUIPWIN_MICROSCOPE_V6(sock));
		ADD_PKT(0x0b03, -1, ZC_EQUIPWIN_MICROSCOPE_V7(sock));
		ADD_PKT(0x0adc, 6, ZC_EQUIPWIN_OTHER(sock));
		ADD_PKT(0x013c, 4, ZC_EQUIP_ARROW(sock));
		ADD_PKT(0x07e0, 58, ZC_ES_NOTI_MYINFO(sock));
		ADD_PKT(0x00f1, 2, ZC_EXCHANGEITEM_UNDO(sock));
		ADD_PKT(0x00f0, 3, ZC_EXEC_EXCHANGE_ITEM(sock));
		ADD_PKT(0x08ce, 2, ZC_FAILED_GET_ITEM_FROM_ZONEDA(sock));
		ADD_PKT(0x0812, 8, ZC_FAILED_OPEN_BUYING_STORE_TO_BUYER(sock));
		ADD_PKT(0x081a, 4, ZC_FAILED_TRADE_BUYING_STORE_TO_BUYER(sock));
		ADD_PKT(0x0824, 8, ZC_FAILED_TRADE_BUYING_STORE_TO_SELLER(sock));
		ADD_PKT(0x08d2, 10, ZC_FASTMOVE(sock));
		ADD_PKT(0x0982, 7, ZC_FATIGUE_CHN(sock));
		ADD_PKT(0x022f, 7, ZC_FEED_MER(sock));
		ADD_PKT(0x01a3, 7, ZC_FEED_PET(sock));
		ADD_PKT(0x02c2, -1, ZC_FORMATSTRING_MSG(sock));
		ADD_PKT(0x0a6f, -1, ZC_FORMATSTRING_MSG_COLOR(sock));
		ADD_PKT(0x0201, -1, ZC_FRIENDS_LIST(sock));
		ADD_PKT(0x0206, 35, ZC_FRIENDS_STATE(sock));
		ADD_PKT(0x0227, 18, ZC_GAME_GUARD(sock));
		ADD_PKT(0x0280, 12, ZC_GANGSI_POINT(sock));
		ADD_PKT(0x0282, 284, ZC_GANGSI_RANK(sock));
		ADD_PKT(0x0a15, 12, ZC_GOLDPCCAFE_POINT(sock));
		ADD_PKT(0x0853, -1, ZC_GPK_AUTH(sock));
		ADD_PKT(0x0851, -1, ZC_GPK_DYNCODE(sock));
		ADD_PKT(0x0101, 6, ZC_GROUPINFO_CHANGE(sock));
		ADD_PKT(0x0ab2, 7, ZC_GROUP_ISALIVE(sock));
		ADD_PKT(0x0ae5, -1, ZC_GROUP_LIST(sock));
		ADD_PKT(0x09d3, -1, ZC_GUILDSTORAGE_ITEMLIST_EQUIP_V5(sock));
		ADD_PKT(0x0a11, -1, ZC_GUILDSTORAGE_ITEMLIST_EQUIP_V6(sock));
		ADD_PKT(0x09d2, -1, ZC_GUILDSTORAGE_ITEMLIST_NORMAL_V5(sock));
		ADD_PKT(0x017f, -1, ZC_GUILD_CHAT(sock));
		ADD_PKT(0x0152, -1, ZC_GUILD_EMBLEM_IMG(sock));
		ADD_PKT(0x0a84, 94, ZC_GUILD_INFO(sock));
		ADD_PKT(0x01b6, 114, ZC_GUILD_INFO2(sock));
		ADD_PKT(0x01ec, 26, ZC_GUILD_MEMBER_MAP_CHANGE(sock));
		ADD_PKT(0x016f, 182, ZC_GUILD_NOTICE(sock));
		ADD_PKT(0x0afd, -1, ZC_GUILD_POSITION(sock));
		ADD_PKT(0x0162, -1, ZC_GUILD_SKILLINFO(sock));
		ADD_PKT(0x01b8, 3, ZC_GUILD_ZENY_ACK(sock));
		ADD_PKT(0x02a6, -1, ZC_HACKSH_CPX_MSG(sock));
		ADD_PKT(0x0449, 4, ZC_HACKSH_ERROR_MSG(sock));
		ADD_PKT(0x01ff, 10, ZC_HIGHJUMP(sock));
		ADD_PKT(0x0235, -1, ZC_HOSKILLINFO_LIST(sock));
		ADD_PKT(0x0239, 11, ZC_HOSKILLINFO_UPDATE(sock));
		ADD_PKT(0x07db, 8, ZC_HO_PAR_CHANGE(sock));
		ADD_PKT(0x0977, 14, ZC_HP_INFO(sock));
		ADD_PKT(0x0a36, 7, ZC_HP_INFO_TINY(sock));
		ADD_PKT(0x027a, -1, ZC_HUNTINGLIST(sock));
		ADD_PKT(0x08fe, -1, ZC_HUNTING_QUEST_INFO(sock));
		ADD_PKT(0x01c2, 10, ZC_INFO_REMAINTIME(sock));
		ADD_PKT(0x0b0b, 4, ZC_INVENTORY_END(sock));
		ADD_PKT(0x0b18, 4, ZC_INVENTORY_EXPANSION_INFO(sock));
		ADD_PKT(0x0901, -1, ZC_INVENTORY_ITEMLIST_EQUIP(sock));
		ADD_PKT(0x0992, -1, ZC_INVENTORY_ITEMLIST_EQUIP_V5(sock));
		ADD_PKT(0x0a0d, -1, ZC_INVENTORY_ITEMLIST_EQUIP_V6(sock));
		ADD_PKT(0x0900, -1, ZC_INVENTORY_ITEMLIST_NORMAL(sock));
		ADD_PKT(0x0991, -1, ZC_INVENTORY_ITEMLIST_NORMAL_V5(sock));
		ADD_PKT(0x0aa7, 6, ZC_INVENTORY_MOVE_FAILED(sock));
		ADD_PKT(0x0b08, -1, ZC_INVENTORY_START(sock));
		ADD_PKT(0x0908, 5, ZC_INVENTORY_TAB(sock));
		ADD_PKT(0x02f5, 7, ZC_IRMAIL_NOTIFY(sock));
		ADD_PKT(0x02f4, 3, ZC_IRMAIL_SEND_RES(sock));
		ADD_PKT(0x02d5, 2, ZC_ISVR_DISCONNECT(sock));
		ADD_PKT(0x017b, -1, ZC_ITEMCOMPOSITION_LIST(sock));
		ADD_PKT(0x0177, -1, ZC_ITEMIDENTIFY_LIST(sock));
		ADD_PKT(0x07e3, 6, ZC_ITEMLISTWIN_OPEN(sock));
		ADD_PKT(0x081c, 10, ZC_ITEM_DELETE_BUYING_STORE(sock));
		ADD_PKT(0x00a1, 6, ZC_ITEM_DISAPPEAR(sock));
		ADD_PKT(0x009d, 19, ZC_ITEM_ENTRY(sock));
		ADD_PKT(0x0add, 24, ZC_ITEM_FALL_ENTRY(sock));
		ADD_PKT(0x084b, 21, ZC_ITEM_FALL_ENTRY4(sock));
		ADD_PKT(0x00a0, 33, ZC_ITEM_PICKUP_ACK(sock));
		ADD_PKT(0x029a, 37, ZC_ITEM_PICKUP_ACK2(sock));
		ADD_PKT(0x02d4, 39, ZC_ITEM_PICKUP_ACK3(sock));
		ADD_PKT(0x0990, 41, ZC_ITEM_PICKUP_ACK_V5(sock));
		ADD_PKT(0x0a0c, 66, ZC_ITEM_PICKUP_ACK_V6(sock));
		ADD_PKT(0x0a37, 69, ZC_ITEM_PICKUP_ACK_V7(sock));
		ADD_PKT(0x02b8, 32, ZC_ITEM_PICKUP_PARTY(sock));
		ADD_PKT(0x0b13, 48, ZC_ITEM_PREVIEW(sock));
		ADD_PKT(0x00af, 6, ZC_ITEM_THROW_ACK(sock));
		ADD_PKT(0x07ed, 10, ZC_JOIN_BATTLE_FIELD(sock));
		ADD_PKT(0x0236, 10, ZC_KILLER_POINT(sock));
		ADD_PKT(0x0238, 282, ZC_KILLER_RANK(sock));
		ADD_PKT(0x021e, 6, ZC_LESSEFFECT(sock));
		ADD_PKT(0x00b1, 8, ZC_LONGPAR_CHANGE(sock));
		ADD_PKT(0x0855, 6, ZC_MACRO_ITEMPICKUP_FAIL(sock));
		ADD_PKT(0x024a, 70, ZC_MAIL_RECEIVE(sock));
		ADD_PKT(0x0245, 3, ZC_MAIL_REQ_GET_ITEM(sock));
		ADD_PKT(0x0240, -1, ZC_MAIL_REQ_GET_LIST(sock));
		ADD_PKT(0x0242, -1, ZC_MAIL_REQ_OPEN(sock));
		ADD_PKT(0x0249, 3, ZC_MAIL_REQ_SEND(sock));
		ADD_PKT(0x0260, 6, ZC_MAIL_WINDOWS(sock));
		ADD_PKT(0x018d, -1, ZC_MAKABLEITEMLIST(sock));
		ADD_PKT(0x01ad, -1, ZC_MAKINGARROW_LIST(sock));
		ADD_PKT(0x025a, -1, ZC_MAKINGITEM_LIST(sock));
		ADD_PKT(0x02e7, -1, ZC_MAPPROPERTY(sock));
		ADD_PKT(0x099b, 8, ZC_MAPPROPERTY_R2(sock));
		ADD_PKT(0x08b1, -1, ZC_MCSTORE_NOTMOVEITEM_LIST(sock));
		ADD_PKT(0x0aa5, -1, ZC_MEMBERMGR_INFO(sock));
		ADD_PKT(0x0aa6, 36, ZC_MEMBER_ADD(sock));
		ADD_PKT(0x00dd, 29, ZC_MEMBER_EXIT(sock));
		ADD_PKT(0x00dc, 28, ZC_MEMBER_NEWENTRY(sock));
		ADD_PKT(0x02cd, 71, ZC_MEMORIALDUNGEON_INFO(sock));
		ADD_PKT(0x02ce, 10, ZC_MEMORIALDUNGEON_NOTIFY(sock));
		ADD_PKT(0x02cb, 65, ZC_MEMORIALDUNGEON_SUBSCRIPTION_INFO(sock));
		ADD_PKT(0x02cc, 4, ZC_MEMORIALDUNGEON_SUBSCRIPTION_NOTIFY(sock));
		ADD_PKT(0x00b7, -1, ZC_MENU_LIST(sock));
		ADD_PKT(0x096d, -1, ZC_MERGE_ITEM_OPEN(sock));
		ADD_PKT(0x029b, 80, ZC_MER_INIT(sock));
		ADD_PKT(0x02a2, 8, ZC_MER_PAR_CHANGE(sock));
		ADD_PKT(0x029c, 66, ZC_MER_PROPERTY(sock));
		ADD_PKT(0x029d, -1, ZC_MER_SKILLINFO_LIST(sock));
		ADD_PKT(0x029e, 11, ZC_MER_SKILLINFO_UPDATE(sock));
		ADD_PKT(0x0906, -1, ZC_MICROSCOPE(sock));
		ADD_PKT(0x0440, 10, ZC_MILLENNIUMSHIELD(sock));
		ADD_PKT(0x018c, 29, ZC_MONSTER_INFO(sock));
		ADD_PKT(0x01cc, 9, ZC_MONSTER_TALK(sock));
		ADD_PKT(0x0291, 4, ZC_MSG(sock));
		ADD_PKT(0x09cd, 8, ZC_MSG_COLOR(sock));
		ADD_PKT(0x07e6, 8, ZC_MSG_SKILL(sock));
		ADD_PKT(0x0196, 9, ZC_MSG_STATE_CHANGE(sock));
		ADD_PKT(0x043f, 25, ZC_MSG_STATE_CHANGE2(sock));
		ADD_PKT(0x0983, 29, ZC_MSG_STATE_CHANGE3(sock));
		ADD_PKT(0x07e2, 8, ZC_MSG_VALUE(sock));
		ADD_PKT(0x010c, 6, ZC_MVP(sock));
		ADD_PKT(0x010a, 6, ZC_MVP_GETTING_ITEM(sock));
		ADD_PKT(0x010b, 6, ZC_MVP_GETTING_SPECIAL_EXP(sock));
		ADD_PKT(0x014c, -1, ZC_MYGUILD_BASIC_INFO(sock));
		ADD_PKT(0x0813, -1, ZC_MYITEMLIST_BUYING_STORE(sock));
		ADD_PKT(0x08e2, 27, ZC_NAVIGATION_ACTIVE(sock));
		ADD_PKT(0x00a3, -1, ZC_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01ee, -1, ZC_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x02e8, -1, ZC_NORMAL_ITEMLIST3(sock));
		ADD_PKT(0x008a, 29, ZC_NOTIFY_ACT(sock));
		ADD_PKT(0x02e1, 33, ZC_NOTIFY_ACT2(sock));
		ADD_PKT(0x08c8, 34, ZC_NOTIFY_ACT3(sock));
		ADD_PKT(0x007a, 58, ZC_NOTIFY_ACTENTRY(sock));
		ADD_PKT(0x008b, 23, ZC_NOTIFY_ACT_POSITION(sock));
		ADD_PKT(0x09b3, 6, ZC_NOTIFY_BARGAIN_SALE_CLOSE(sock));
		ADD_PKT(0x09b2, 10, ZC_NOTIFY_BARGAIN_SALE_SELLING(sock));
		ADD_PKT(0x02d3, 4, ZC_NOTIFY_BIND_ON_EQUIP(sock));
		ADD_PKT(0x0121, 14, ZC_NOTIFY_CARTITEM_COUNTINFO(sock));
		ADD_PKT(0x008d, -1, ZC_NOTIFY_CHAT(sock));
		ADD_PKT(0x0109, -1, ZC_NOTIFY_CHAT_PARTY(sock));
		ADD_PKT(0x098e, -1, ZC_NOTIFY_CLAN_CHAT(sock));
		ADD_PKT(0x0988, 6, ZC_NOTIFY_CLAN_CONNECTINFO(sock));
		ADD_PKT(0x0220, 10, ZC_NOTIFY_CRAZYKILLER(sock));
		ADD_PKT(0x019b, 10, ZC_NOTIFY_EFFECT(sock));
		ADD_PKT(0x01f3, 10, ZC_NOTIFY_EFFECT2(sock));
		ADD_PKT(0x0284, 14, ZC_NOTIFY_EFFECT3(sock));
		ADD_PKT(0x08dc, 26, ZC_NOTIFY_ENTRY_QUEUE_ADMISSION(sock));
		ADD_PKT(0x08d9, 30, ZC_NOTIFY_ENTRY_QUEUE_APPLY(sock));
		ADD_PKT(0x0acc, 18, ZC_NOTIFY_EXP(sock));
		ADD_PKT(0x02ef, 8, ZC_NOTIFY_FONT(sock));
		ADD_PKT(0x0117, 18, ZC_NOTIFY_GROUNDSKILL(sock));
		ADD_PKT(0x0106, 10, ZC_NOTIFY_HP_TO_GROUPM(sock));
		ADD_PKT(0x080e, 14, ZC_NOTIFY_HP_TO_GROUPM_R2(sock));
		ADD_PKT(0x0075, -1, ZC_NOTIFY_INITCHAR(sock));
		ADD_PKT(0x08df, 50, ZC_NOTIFY_LOBBY_ADMISSION(sock));
		ADD_PKT(0x014b, 27, ZC_NOTIFY_MANNER_POINT_GIVEN(sock));
		ADD_PKT(0x0189, 4, ZC_NOTIFY_MAPINFO(sock));
		ADD_PKT(0x0199, 4, ZC_NOTIFY_MAPPROPERTY(sock));
		ADD_PKT(0x01d6, 4, ZC_NOTIFY_MAPPROPERTY2(sock));
		ADD_PKT(0x0086, 16, ZC_NOTIFY_MOVE(sock));
		ADD_PKT(0x007b, 60, ZC_NOTIFY_MOVEENTRY(sock));
		ADD_PKT(0x09db, -1, ZC_NOTIFY_MOVEENTRY10(sock));
		ADD_PKT(0x09fd, -1, ZC_NOTIFY_MOVEENTRY11(sock));
		ADD_PKT(0x01da, 64, ZC_NOTIFY_MOVEENTRY2(sock));
		ADD_PKT(0x022c, 69, ZC_NOTIFY_MOVEENTRY3(sock));
		ADD_PKT(0x02ec, 71, ZC_NOTIFY_MOVEENTRY4(sock));
		ADD_PKT(0x07f7, -1, ZC_NOTIFY_MOVEENTRY7(sock));
		ADD_PKT(0x0856, -1, ZC_NOTIFY_MOVEENTRY8(sock));
		ADD_PKT(0x0914, -1, ZC_NOTIFY_MOVEENTRY9(sock));
		ADD_PKT(0x0079, 53, ZC_NOTIFY_NEWENTRY(sock));
		ADD_PKT(0x09dc, -1, ZC_NOTIFY_NEWENTRY10(sock));
		ADD_PKT(0x09fe, -1, ZC_NOTIFY_NEWENTRY11(sock));
		ADD_PKT(0x01d9, 57, ZC_NOTIFY_NEWENTRY2(sock));
		ADD_PKT(0x022b, 61, ZC_NOTIFY_NEWENTRY3(sock));
		ADD_PKT(0x02ed, 63, ZC_NOTIFY_NEWENTRY4(sock));
		ADD_PKT(0x07f8, -1, ZC_NOTIFY_NEWENTRY5(sock));
		ADD_PKT(0x0858, -1, ZC_NOTIFY_NEWENTRY6(sock));
		ADD_PKT(0x090f, -1, ZC_NOTIFY_NEWENTRY7(sock));
		ADD_PKT(0x0a89, 61, ZC_NOTIFY_OFFLINE_STORE(sock));
		ADD_PKT(0x0278, 2, ZC_NOTIFY_PCBANG(sock));
		ADD_PKT(0x02bc, 6, ZC_NOTIFY_PCBANG_PLAYING_TIME(sock));
		ADD_PKT(0x021f, 66, ZC_NOTIFY_PKINFO(sock));
		ADD_PKT(0x008e, -1, ZC_NOTIFY_PLAYERCHAT(sock));
		ADD_PKT(0x0087, 12, ZC_NOTIFY_PLAYERMOVE(sock));
		ADD_PKT(0x0107, 10, ZC_NOTIFY_POSITION_TO_GROUPM(sock));
		ADD_PKT(0x01eb, 10, ZC_NOTIFY_POSITION_TO_GUILDM(sock));
		ADD_PKT(0x019a, 14, ZC_NOTIFY_RANKING(sock));
		ADD_PKT(0x0114, 31, ZC_NOTIFY_SKILL(sock));
		ADD_PKT(0x01de, 33, ZC_NOTIFY_SKILL2(sock));
		ADD_PKT(0x0115, 35, ZC_NOTIFY_SKILL_POSITION(sock));
		ADD_PKT(0x0078, 55, ZC_NOTIFY_STANDENTRY(sock));
		ADD_PKT(0x09dd, -1, ZC_NOTIFY_STANDENTRY10(sock));
		ADD_PKT(0x09ff, -1, ZC_NOTIFY_STANDENTRY11(sock));
		ADD_PKT(0x01d8, 58, ZC_NOTIFY_STANDENTRY2(sock));
		ADD_PKT(0x022a, 62, ZC_NOTIFY_STANDENTRY3(sock));
		ADD_PKT(0x02ee, 64, ZC_NOTIFY_STANDENTRY4(sock));
		ADD_PKT(0x07f9, -1, ZC_NOTIFY_STANDENTRY5(sock));
		ADD_PKT(0x0857, -1, ZC_NOTIFY_STANDENTRY7(sock));
		ADD_PKT(0x0915, -1, ZC_NOTIFY_STANDENTRY8(sock));
		ADD_PKT(0x007c, 44, ZC_NOTIFY_STANDENTRY_NPC(sock));
		ADD_PKT(0x00f2, 6, ZC_NOTIFY_STOREITEM_COUNTINFO(sock));
		ADD_PKT(0x007f, 6, ZC_NOTIFY_TIME(sock));
		ADD_PKT(0x09e7, 3, ZC_NOTIFY_UNREAD_RODEX(sock));
		ADD_PKT(0x0076, 9, ZC_NOTIFY_UPDATECHAR(sock));
		ADD_PKT(0x0077, 5, ZC_NOTIFY_UPDATEPLAYER(sock));
		ADD_PKT(0x0080, 7, ZC_NOTIFY_VANISH(sock));
		ADD_PKT(0x0221, -1, ZC_NOTIFY_WEAPONITEMLIST(sock));
		ADD_PKT(0x0093, 2, ZC_NPCACK_ENABLE(sock));
		ADD_PKT(0x0091, 22, ZC_NPCACK_MAPMOVE(sock));
		ADD_PKT(0x0ac7, 156, ZC_NPCACK_SERVERMOVE(sock));
		ADD_PKT(0x01b0, 11, ZC_NPCSPRITE_CHANGE(sock));
		ADD_PKT(0x0b0e, -1, ZC_NPC_BARTER_OPEN(sock));
		ADD_PKT(0x02c1, -1, ZC_NPC_CHAT(sock));
		ADD_PKT(0x09d5, -1, ZC_NPC_MARKET_OPEN(sock));
		ADD_PKT(0x09d7, -1, ZC_NPC_MARKET_PURCHASE_RESULT(sock));
		ADD_PKT(0x028a, 18, ZC_NPC_SHOWEFST_UPDATE(sock));
		ADD_PKT(0x09cf, -1, ZC_NPROTECTGAMEGUARDCSAUTH(sock));
		ADD_PKT(0x0a91, -1, ZC_OFFLINE_STORE_ITEMS(sock));
		ADD_PKT(0x0a8d, -1, ZC_OFFLINE_STORE_OWNER_ITEMS(sock));
		ADD_PKT(0x0a7e, -1, ZC_OFFLINE_STORE_OWNER_ITEMS_READY(sock));
		ADD_PKT(0x0a8a, 6, ZC_OFFLINE_STORE_VANISH(sock));
		ADD_PKT(0x0b05, 63, ZC_OFFLINE_STORE_VISIBLE(sock));
		ADD_PKT(0x012d, 4, ZC_OPENSTORE(sock));
		ADD_PKT(0x09b5, 2, ZC_OPEN_BARGAIN_SALE_TOOL(sock));
		ADD_PKT(0x0810, 3, ZC_OPEN_BUYING_STORE(sock));
		ADD_PKT(0x0142, 6, ZC_OPEN_EDITDLG(sock));
		ADD_PKT(0x01d4, 6, ZC_OPEN_EDITDLGSTR(sock));
		ADD_PKT(0x0a32, 2, ZC_OPEN_RODEX_THROUGH_NPC_ONLY(sock));
		ADD_PKT(0x083a, 5, ZC_OPEN_SEARCH_STORE_INFO(sock));
		ADD_PKT(0x0ae2, 7, ZC_OPEN_UI(sock));
		ADD_PKT(0x0164, -1, ZC_OTHER_GUILD_LIST(sock));
		ADD_PKT(0x0ade, 6, ZC_OVERWEIGHT_PERCENT(sock));
		ADD_PKT(0x0807, 4, ZC_PARTY_BOOKING_ACK_DELETE(sock));
		ADD_PKT(0x0803, 4, ZC_PARTY_BOOKING_ACK_REGISTER(sock));
		ADD_PKT(0x0805, -1, ZC_PARTY_BOOKING_ACK_SEARCH(sock));
		ADD_PKT(0x080b, 6, ZC_PARTY_BOOKING_NOTIFY_DELETE(sock));
		ADD_PKT(0x0809, 50, ZC_PARTY_BOOKING_NOTIFY_INSERT(sock));
		ADD_PKT(0x080a, 18, ZC_PARTY_BOOKING_NOTIFY_UPDATE(sock));
		ADD_PKT(0x02c9, 3, ZC_PARTY_CONFIG(sock));
		ADD_PKT(0x02c6, 30, ZC_PARTY_JOIN_REQ(sock));
		ADD_PKT(0x02c5, 30, ZC_PARTY_JOIN_REQ_ACK(sock));
		ADD_PKT(0x0abd, 10, ZC_PARTY_MEMBER_JOB_LEVEL(sock));
		ADD_PKT(0x08ea, 4, ZC_PARTY_RECRUIT_ACK_DELETE(sock));
		ADD_PKT(0x08e6, 4, ZC_PARTY_RECRUIT_ACK_REGISTER(sock));
		ADD_PKT(0x090b, 30, ZC_PARTY_RECRUIT_ADD_FILTERLINGLIST(sock));
		ADD_PKT(0x0909, 6, ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER(sock));
		ADD_PKT(0x096c, 6, ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM(sock));
		ADD_PKT(0x08f8, 7, ZC_PARTY_RECRUIT_FAILED_RECALL(sock));
		ADD_PKT(0x08ee, 6, ZC_PARTY_RECRUIT_NOTIFY_DELETE(sock));
		ADD_PKT(0x08ec, 73, ZC_PARTY_RECRUIT_NOTIFY_INSERT(sock));
		ADD_PKT(0x08ed, 43, ZC_PARTY_RECRUIT_NOTIFY_UPDATE(sock));
		ADD_PKT(0x08f6, 22, ZC_PARTY_RECRUIT_RECALL_COST(sock));
		ADD_PKT(0x08fa, 6, ZC_PARTY_RECRUIT_REFUSE_VOLUNTEER(sock));
		ADD_PKT(0x0971, 6, ZC_PARTY_RECRUIT_REFUSE_VOLUNTEER_TO_PM(sock));
		ADD_PKT(0x090c, 30, ZC_PARTY_RECRUIT_SUB_FILTERLINGLIST(sock));
		ADD_PKT(0x08f2, 36, ZC_PARTY_RECRUIT_VOLUNTEER_INFO(sock));
		ADD_PKT(0x0acb, 12, ZC_PAR_CHANGE(sock));
		ADD_PKT(0x01ab, 12, ZC_PAR_CHANGE_USER(sock));
		ADD_PKT(0x027b, 14, ZC_PCBANG_EFFECT(sock));
		ADD_PKT(0x0287, -1, ZC_PC_CASH_POINT_ITEMLIST(sock));
		ADD_PKT(0x0289, 12, ZC_PC_CASH_POINT_UPDATE(sock));
		ADD_PKT(0x00c6, -1, ZC_PC_PURCHASE_ITEMLIST(sock));
		ADD_PKT(0x0133, -1, ZC_PC_PURCHASE_ITEMLIST_FROMMC(sock));
		ADD_PKT(0x0800, -1, ZC_PC_PURCHASE_ITEMLIST_FROMMC2(sock));
		ADD_PKT(0x0136, -1, ZC_PC_PURCHASE_MYITEMLIST(sock));
		ADD_PKT(0x00ca, 3, ZC_PC_PURCHASE_RESULT(sock));
		ADD_PKT(0x0135, 7, ZC_PC_PURCHASE_RESULT_FROMMC(sock));
		ADD_PKT(0x00c7, -1, ZC_PC_SELL_ITEMLIST(sock));
		ADD_PKT(0x00cb, 3, ZC_PC_SELL_RESULT(sock));
		ADD_PKT(0x08cb, -1, ZC_PERSONAL_INFOMATION(sock));
		ADD_PKT(0x097b, -1, ZC_PERSONAL_INFOMATION2(sock));
		ADD_PKT(0x0981, -1, ZC_PERSONAL_INFOMATION_CHN(sock));
		ADD_PKT(0x01a6, -1, ZC_PETEGG_LIST(sock));
		ADD_PKT(0x01aa, 10, ZC_PET_ACT(sock));
		ADD_PKT(0x09fc, 6, ZC_PET_EVOLUTION_RESULT(sock));
		ADD_PKT(0x07fe, 26, ZC_PLAY_NPC_BGM(sock));
		ADD_PKT(0x0166, -1, ZC_POSITION_ID_NAME_INFO(sock));
		ADD_PKT(0x0160, -1, ZC_POSITION_INFO(sock));
		ADD_PKT(0x090d, -1, ZC_PREMIUM_CAMPAIGN_INFO(sock));
		ADD_PKT(0x0a4a, 6, ZC_PRIVATE_AIRSHIP_RESPONSE(sock));
		ADD_PKT(0x096b, 4, ZC_PRNPC_STATE(sock));
		ADD_PKT(0x02f0, 10, ZC_PROGRESS(sock));
		ADD_PKT(0x09d1, 14, ZC_PROGRESS_ACTOR(sock));
		ADD_PKT(0x02f2, 2, ZC_PROGRESS_CANCEL(sock));
		ADD_PKT(0x022e, 73, ZC_PROPERTY_HOMUN(sock));
		ADD_PKT(0x09f7, 77, ZC_PROPERTY_HOMUN_2(sock));
		ADD_PKT(0x027d, 62, ZC_PROPERTY_MERCE(sock));
		ADD_PKT(0x01a2, 37, ZC_PROPERTY_PET(sock));
		ADD_PKT(0x0446, 14, ZC_QUEST_NOTIFY_EFFECT(sock));
		ADD_PKT(0x0294, 10, ZC_READ_BOOK(sock));
		ADD_PKT(0x013d, 6, ZC_RECOVERY(sock));
		ADD_PKT(0x0a27, 8, ZC_RECOVERY2(sock));
		ADD_PKT(0x0a22, 7, ZC_RECV_ROULETTE_ITEM(sock));
		ADD_PKT(0x0aa2, -1, ZC_REFINE_ADD_ITEM(sock));
		ADD_PKT(0x0aa0, 2, ZC_REFINE_OPEN_WINDOW(sock));
		ADD_PKT(0x0ada, 32, ZC_REFINE_STATUS(sock));
		ADD_PKT(0x0074, 3, ZC_REFUSE_ENTER(sock));
		ADD_PKT(0x00da, 3, ZC_REFUSE_ENTER_ROOM(sock));
		ADD_PKT(0x0084, 2, ZC_REFUSE_QUIT(sock));
		ADD_PKT(0x0b0d, 10, ZC_REMOVE_EFFECT(sock));
		ADD_PKT(0x01fc, -1, ZC_REPAIRITEMLIST(sock));
		ADD_PKT(0x08de, 27, ZC_REPLY_ACK_ENTRY_QUEUE_ADMISSION(sock));
		ADD_PKT(0x08e1, 51, ZC_REPLY_ACK_LOBBY_ADMISSION(sock));
		ADD_PKT(0x01c1, 14, ZC_REPLY_REMAINTIME(sock));
		ADD_PKT(0x0a26, 7, ZC_REQ_ACH_REWARD_ACK(sock));
		ADD_PKT(0x0207, 34, ZC_REQ_ADD_FRIENDS(sock));
		ADD_PKT(0x0171, 30, ZC_REQ_ALLY_GUILD(sock));
		ADD_PKT(0x0a29, 6, ZC_REQ_AU_BOT(sock));
		ADD_PKT(0x01f6, 34, ZC_REQ_BABY(sock));
		ADD_PKT(0x02aa, 4, ZC_REQ_CASH_PASSWORD(sock));
		ADD_PKT(0x01e2, 34, ZC_REQ_COUPLE(sock));
		ADD_PKT(0x00e5, 26, ZC_REQ_EXCHANGE_ITEM(sock));
		ADD_PKT(0x01f4, 32, ZC_REQ_EXCHANGE_ITEM2(sock));
		ADD_PKT(0x07d8, 8, ZC_REQ_GROUPINFO_CHANGE_V2(sock));
		ADD_PKT(0x00ae, -1, ZC_REQ_ITEM_EXPLANATION_ACK(sock));
		ADD_PKT(0x00fe, 30, ZC_REQ_JOIN_GROUP(sock));
		ADD_PKT(0x016a, 30, ZC_REQ_JOIN_GUILD(sock));
		ADD_PKT(0x023a, 4, ZC_REQ_STORE_PASSWORD(sock));
		ADD_PKT(0x00ac, 7, ZC_REQ_TAKEOFF_EQUIP_ACK(sock));
		ADD_PKT(0x08d1, 7, ZC_REQ_TAKEOFF_EQUIP_ACK2(sock));
		ADD_PKT(0x00aa, 9, ZC_REQ_WEAR_EQUIP_ACK(sock));
		ADD_PKT(0x08d0, 9, ZC_REQ_WEAR_EQUIP_ACK2(sock));
		ADD_PKT(0x00b3, 3, ZC_RESTART_ACK(sock));
		ADD_PKT(0x02ac, 6, ZC_RESULT_CASH_PASSWORD(sock));
		ADD_PKT(0x0167, 3, ZC_RESULT_MAKE_GUILD(sock));
		ADD_PKT(0x0a31, -1, ZC_RESULT_PACKAGE_ITEM_TEST(sock));
		ADD_PKT(0x023c, 6, ZC_RESULT_STORE_PASSWORD(sock));
		ADD_PKT(0x0148, 8, ZC_RESURRECTION(sock));
		ADD_PKT(0x00e1, 30, ZC_ROLE_CHANGE(sock));
		ADD_PKT(0x00d7, -1, ZC_ROOM_NEWENTRY(sock));
		ADD_PKT(0x00b4, -1, ZC_SAY_CoreLog(sock));
		ADD_PKT(0x0972, -1, ZC_SAY_CoreLog2(sock));
		ADD_PKT(0x0836, -1, ZC_SEARCH_STORE_INFO_ACK(sock));
		ADD_PKT(0x0837, 3, ZC_SEARCH_STORE_INFO_FAILED(sock));
		ADD_PKT(0x09cc, -1, ZC_SECRETSCAN_DATA(sock));
		ADD_PKT(0x07dd, 54, ZC_SEEK_PARTY(sock));
		ADD_PKT(0x07df, 54, ZC_SEEK_PARTY_MEMBER(sock));
		ADD_PKT(0x097f, -1, ZC_SELECTCART(sock));
		ADD_PKT(0x00c4, 6, ZC_SELECT_DEALTYPE(sock));
		ADD_PKT(0x00d1, 4, ZC_SETTING_WHISPER_PC(sock));
		ADD_PKT(0x00d2, 4, ZC_SETTING_WHISPER_STATE(sock));
		ADD_PKT(0x0845, 10, ZC_SE_CASHSHOP_OPEN(sock));
		ADD_PKT(0x0a2b, 14, ZC_SE_CASHSHOP_OPEN2(sock));
		ADD_PKT(0x08d3, 10, ZC_SE_CASHSHOP_UPDATE(sock));
		ADD_PKT(0x0849, 16, ZC_SE_PC_BUY_CASHITEM_RESULT(sock));
		ADD_PKT(0x0a2c, 12, ZC_SE_PC_BUY_TAIWANCASHITEM_RESULT(sock));
		ADD_PKT(0x027e, -1, ZC_SHANDA_PROTECT(sock));
		ADD_PKT(0x02b9, 191, ZC_SHORTCUT_KEY_LIST(sock));
		ADD_PKT(0x07d9, 268, ZC_SHORTCUT_KEY_LIST_V2(sock));
		ADD_PKT(0x0a00, 269, ZC_SHORTCUT_KEY_LIST_V3(sock));
		ADD_PKT(0x01b1, 7, ZC_SHOWDIGIT(sock));
		ADD_PKT(0x08b3, -1, ZC_SHOWSCRIPT(sock));
		ADD_PKT(0x0145, 19, ZC_SHOW_IMAGE(sock));
		ADD_PKT(0x01b3, 67, ZC_SHOW_IMAGE2(sock));
		ADD_PKT(0x035d, -1, ZC_SIMPLE_CASHSHOP_POINT_ITEMLIST(sock));
		ADD_PKT(0x080d, 3, ZC_SIMPLE_CASH_BTNSHOW(sock));
		ADD_PKT(0x0444, -1, ZC_SIMPLE_CASH_POINT_ITEMLIST(sock));
		ADD_PKT(0x0441, 4, ZC_SKILLINFO_DELETE(sock));
		ADD_PKT(0x010f, -1, ZC_SKILLINFO_LIST(sock));
		ADD_PKT(0x010e, 11, ZC_SKILLINFO_UPDATE(sock));
		ADD_PKT(0x07e1, 15, ZC_SKILLINFO_UPDATE2(sock));
		ADD_PKT(0x0215, 6, ZC_SKILLMSG(sock));
		ADD_PKT(0x0120, 6, ZC_SKILL_DISAPPEAR(sock));
		ADD_PKT(0x011f, 16, ZC_SKILL_ENTRY(sock));
		ADD_PKT(0x01c9, 97, ZC_SKILL_ENTRY2(sock));
		ADD_PKT(0x08c7, -1, ZC_SKILL_ENTRY3(sock));
		ADD_PKT(0x099f, -1, ZC_SKILL_ENTRY4(sock));
		ADD_PKT(0x09ca, -1, ZC_SKILL_ENTRY5(sock));
		ADD_PKT(0x043d, 8, ZC_SKILL_POSTDELAY(sock));
		ADD_PKT(0x043e, -1, ZC_SKILL_POSTDELAY_LIST(sock));
		ADD_PKT(0x0985, -1, ZC_SKILL_POSTDELAY_LIST2(sock));
		ADD_PKT(0x0442, -1, ZC_SKILL_SELECT_REQUEST(sock));
		ADD_PKT(0x01ac, 6, ZC_SKILL_UPDATE(sock));
		ADD_PKT(0x01d3, 35, ZC_SOUND(sock));
		ADD_PKT(0x01d0, 8, ZC_SPIRITS(sock));
		ADD_PKT(0x01e1, 8, ZC_SPIRITS2(sock));
		ADD_PKT(0x08cf, 10, ZC_SPIRITS_ATTRIBUTE(sock));
		ADD_PKT(0x00c3, 8, ZC_SPRITE_CHANGE(sock));
		ADD_PKT(0x01d7, 15, ZC_SPRITE_CHANGE2(sock));
		ADD_PKT(0x083d, 6, ZC_SSILIST_ITEM_CLICK_ACK(sock));
		ADD_PKT(0x0253, 3, ZC_STARPLACE(sock));
		ADD_PKT(0x020e, 32, ZC_STARSKILL(sock));
		ADD_PKT(0x01f8, 2, ZC_START_BABY(sock));
		ADD_PKT(0x019e, 2, ZC_START_CAPTURE(sock));
		ADD_PKT(0x08b4, 2, ZC_START_COLLECTION(sock));
		ADD_PKT(0x01e4, 2, ZC_START_COUPLE(sock));
		ADD_PKT(0x0119, 13, ZC_STATE_CHANGE(sock));
		ADD_PKT(0x0229, 15, ZC_STATE_CHANGE3(sock));
		ADD_PKT(0x00bd, 44, ZC_STATUS(sock));
		ADD_PKT(0x00be, 5, ZC_STATUS_CHANGE(sock));
		ADD_PKT(0x00bc, 6, ZC_STATUS_CHANGE_ACK(sock));
		ADD_PKT(0x0088, 10, ZC_STOPMOVE(sock));
		ADD_PKT(0x08cd, 10, ZC_STOPMOVE_FORCE(sock));
		ADD_PKT(0x0131, 86, ZC_STORE_ENTRY(sock));
		ADD_PKT(0x00a6, -1, ZC_STORE_EQUIPMENT_ITEMLIST(sock));
		ADD_PKT(0x0296, -1, ZC_STORE_EQUIPMENT_ITEMLIST2(sock));
		ADD_PKT(0x02d1, -1, ZC_STORE_EQUIPMENT_ITEMLIST3(sock));
		ADD_PKT(0x0905, -1, ZC_STORE_ITEMLIST_EQUIP(sock));
		ADD_PKT(0x0976, -1, ZC_STORE_ITEMLIST_EQUIP_V2(sock));
		ADD_PKT(0x0996, -1, ZC_STORE_ITEMLIST_EQUIP_V5(sock));
		ADD_PKT(0x0b0a, -1, ZC_STORE_ITEMLIST_EQUIP_V6(sock));
		ADD_PKT(0x0904, -1, ZC_STORE_ITEMLIST_NORMAL(sock));
		ADD_PKT(0x0975, -1, ZC_STORE_ITEMLIST_NORMAL_V2(sock));
		ADD_PKT(0x0995, -1, ZC_STORE_ITEMLIST_NORMAL_V5(sock));
		ADD_PKT(0x0b09, -1, ZC_STORE_ITEMLIST_NORMAL_V6(sock));
		ADD_PKT(0x00a5, -1, ZC_STORE_NORMAL_ITEMLIST(sock));
		ADD_PKT(0x01f0, -1, ZC_STORE_NORMAL_ITEMLIST2(sock));
		ADD_PKT(0x02ea, -1, ZC_STORE_NORMAL_ITEMLIST3(sock));
		ADD_PKT(0x0a47, 3, ZC_STYLE_CHANGE_RES(sock));
		ADD_PKT(0x0224, 10, ZC_TAEKWON_POINT(sock));
		ADD_PKT(0x0226, 282, ZC_TAEKWON_RANK(sock));
		ADD_PKT(0x0191, 86, ZC_TALKBOX_CHATCONTENTS(sock));
		ADD_PKT(0x010d, 2, ZC_THROW_MVPITEM(sock));
		ADD_PKT(0x01a0, 3, ZC_TRYCAPTURE_MONSTER(sock));
		ADD_PKT(0x08b6, 3, ZC_TRYCOLLECTION(sock));
		ADD_PKT(0x0af0, 10, ZC_UI_ACTION(sock));
		ADD_PKT(0x0ac8, 2, ZC_UNKNOWN_CLEAN_ITEMS_LISTS(sock));
		ADD_PKT(0x016d, 14, ZC_UPDATE_CHARSTAT(sock));
		ADD_PKT(0x01f2, 20, ZC_UPDATE_CHARSTAT2(sock));
		ADD_PKT(0x016c, 43, ZC_UPDATE_GDID(sock));
		ADD_PKT(0x081b, 12, ZC_UPDATE_ITEM_FROM_BUYING_STORE(sock));
		ADD_PKT(0x09e6, 24, ZC_UPDATE_ITEM_FROM_BUYING_STORE2(sock));
		ADD_PKT(0x0192, 24, ZC_UPDATE_MAPINFO(sock));
		ADD_PKT(0x02b5, -1, ZC_UPDATE_MISSION_HUNT(sock));
		ADD_PKT(0x0afe, -1, ZC_UPDATE_MISSION_HUNT_EX(sock));
		ADD_PKT(0x097e, 12, ZC_UPDATE_RANKING_POINT(sock));
		ADD_PKT(0x0a33, 7, ZC_UPDATE_ROULETTE_COIN(sock));
		ADD_PKT(0x0a34, 6, ZC_UPDATE_TAIWANCASH(sock));
		ADD_PKT(0x00c2, 6, ZC_USER_COUNT(sock));
		ADD_PKT(0x013e, 24, ZC_USESKILL_ACK(sock));
		ADD_PKT(0x07fb, 25, ZC_USESKILL_ACK2(sock));
		ADD_PKT(0x00a8, 7, ZC_USE_ITEM_ACK(sock));
		ADD_PKT(0x01c8, 15, ZC_USE_ITEM_ACK2(sock));
		ADD_PKT(0x011a, 15, ZC_USE_SKILL(sock));
		ADD_PKT(0x09cb, 17, ZC_USE_SKILL2(sock));
		ADD_PKT(0x00b5, 6, ZC_WAIT_CoreLog(sock));
		ADD_PKT(0x0973, 7, ZC_WAIT_CoreLog2(sock));
		ADD_PKT(0x0abe, -1, ZC_WARPLIST(sock));
		ADD_PKT(0x0097, -1, ZC_WHISPER(sock));
		ADD_PKT(0x09de, -1, ZC_WHISPER02(sock));
		ADD_PKT(0x00d4, -1, ZC_WHISPER_LIST(sock));
#undef ADD_PKT
	}

	~PacketLengthTable() { }

	ShufflePacketLengthTable *instance()
	{
		static ShufflePacketLengthTable p;
		return &p;
	}

	std::shared_ptr<ZoneSocket> get_socket() { return _socket.lock(); }

protected:
	LockedLookupTable<uint16_t, std::pair<uint16_t, NetworkPacket>> _packet_length_table;
	std::weak_ptr<ZoneSocket> _socket;

};
}
}
#endif /* HORIZON_ZONE_PACKET_LENGTH_TABLE */
