/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2023 Horizon Dev Team.
 *
 * Base Author - Sephus. (sagunxp@gmail.com)
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

#include "HandledPackets.hpp"
#include "Server/Char/Session/CharSession.hpp"

using namespace Horizon::Char;

/**
 * CH_DELETE_CHAR
 */
void CH_DELETE_CHAR::handle(ByteBuffer &&buf) {}
void CH_DELETE_CHAR::deserialize(ByteBuffer &buf) {}
/**
 * CH_DELETE_CHAR2
 */
void CH_DELETE_CHAR2::handle(ByteBuffer &&buf) {}
void CH_DELETE_CHAR2::deserialize(ByteBuffer &buf) {}
/**
 * CH_ENTER
 */
void CH_ENTER::handle(ByteBuffer &&buf) {}
void CH_ENTER::deserialize(ByteBuffer &buf) {}
/**
 * CH_MAKE_CHAR
 */
void CH_MAKE_CHAR::handle(ByteBuffer &&buf) {}
void CH_MAKE_CHAR::deserialize(ByteBuffer &buf) {}
/**
 * CH_SELECT_CHAR
 */
void CH_SELECT_CHAR::handle(ByteBuffer &&buf) {}
void CH_SELECT_CHAR::deserialize(ByteBuffer &buf) {}
/**
 * CH_UNKNOWN_PING
 */
void CH_UNKNOWN_PING::handle(ByteBuffer &&buf) {}
void CH_UNKNOWN_PING::deserialize(ByteBuffer &buf) {}
/**
 * CH_REQ_CHANGE_CHARNAME
 */
void CH_REQ_CHANGE_CHARNAME::handle(ByteBuffer &&buf) {}
void CH_REQ_CHANGE_CHARNAME::deserialize(ByteBuffer &buf) {}
/**
 * CH_REQ_IS_VALID_CHARNAME
 */
void CH_REQ_IS_VALID_CHARNAME::handle(ByteBuffer &&buf) {}
void CH_REQ_IS_VALID_CHARNAME::deserialize(ByteBuffer &buf) {}
/**
 * CH_SELECT_CHAR_GOINGTOBEUSED
 */
void CH_SELECT_CHAR_GOINGTOBEUSED::handle(ByteBuffer &&buf) {}
void CH_SELECT_CHAR_GOINGTOBEUSED::deserialize(ByteBuffer &buf) {}
/**
 * CH_ENTER2
 */
void CH_ENTER2::handle(ByteBuffer &&buf) {}
void CH_ENTER2::deserialize(ByteBuffer &buf) {}
/**
 * CH_CHECKBOT
 */
void CH_CHECKBOT::handle(ByteBuffer &&buf) {}
void CH_CHECKBOT::deserialize(ByteBuffer &buf) {}
/**
 * CH_ENTER_CHECKBOT
 */
void CH_ENTER_CHECKBOT::handle(ByteBuffer &&buf) {}
void CH_ENTER_CHECKBOT::deserialize(ByteBuffer &buf) {}
/**
 * CH_DELETE_CHAR3
 */
void CH_DELETE_CHAR3::handle(ByteBuffer &&buf) {}
void CH_DELETE_CHAR3::deserialize(ByteBuffer &buf) {}
/**
 * CH_DELETE_CHAR3_CANCEL
 */
void CH_DELETE_CHAR3_CANCEL::handle(ByteBuffer &&buf) {}
void CH_DELETE_CHAR3_CANCEL::deserialize(ByteBuffer &buf) {}
/**
 * CH_DELETE_CHAR3_RESERVED
 */
void CH_DELETE_CHAR3_RESERVED::handle(ByteBuffer &&buf) {}
void CH_DELETE_CHAR3_RESERVED::deserialize(ByteBuffer &buf) {}
/**
 * CH_SELECT_ACCESSIBLE_MAPNAME
 */
void CH_SELECT_ACCESSIBLE_MAPNAME::handle(ByteBuffer &&buf) {}
void CH_SELECT_ACCESSIBLE_MAPNAME::deserialize(ByteBuffer &buf) {}
/**
 * CH_ACK_CHANGE_CHARACTERNAME
 */
void CH_ACK_CHANGE_CHARACTERNAME::handle(ByteBuffer &&buf) {}
void CH_ACK_CHANGE_CHARACTERNAME::deserialize(ByteBuffer &buf) {}
/**
 * CH_REQ_CHANGE_CHARACTERNAME
 */
void CH_REQ_CHANGE_CHARACTERNAME::handle(ByteBuffer &&buf) {}
void CH_REQ_CHANGE_CHARACTERNAME::deserialize(ByteBuffer &buf) {}
/**
 * CH_REQ_CHANGE_CHARACTER_SLOT
 */
void CH_REQ_CHANGE_CHARACTER_SLOT::handle(ByteBuffer &&buf) {}
void CH_REQ_CHANGE_CHARACTER_SLOT::deserialize(ByteBuffer &buf) {}
/**
 * CH_WAITING_LOGIN
 */
void CH_WAITING_LOGIN::handle(ByteBuffer &&buf) {}
void CH_WAITING_LOGIN::deserialize(ByteBuffer &buf) {}
/**
 * CH_AVAILABLE_SECOND_PASSWD
 */
void CH_AVAILABLE_SECOND_PASSWD::handle(ByteBuffer &&buf) {}
void CH_AVAILABLE_SECOND_PASSWD::deserialize(ByteBuffer &buf) {}
/**
 * CH_DELETE_SECOND_PASSWD
 */
void CH_DELETE_SECOND_PASSWD::handle(ByteBuffer &&buf) {}
void CH_DELETE_SECOND_PASSWD::deserialize(ByteBuffer &buf) {}
/**
 * CH_EDIT_SECOND_PASSWD
 */
void CH_EDIT_SECOND_PASSWD::handle(ByteBuffer &&buf) {}
void CH_EDIT_SECOND_PASSWD::deserialize(ByteBuffer &buf) {}
/**
 * CH_MAKE_SECOND_PASSWD
 */
void CH_MAKE_SECOND_PASSWD::handle(ByteBuffer &&buf) {}
void CH_MAKE_SECOND_PASSWD::deserialize(ByteBuffer &buf) {}
/**
 * CH_NOT_AVAILABLE_SECOND_PASSWD
 */
void CH_NOT_AVAILABLE_SECOND_PASSWD::handle(ByteBuffer &&buf) {}
void CH_NOT_AVAILABLE_SECOND_PASSWD::deserialize(ByteBuffer &buf) {}
/**
 * CH_SECOND_PASSWD_ACK
 */
void CH_SECOND_PASSWD_ACK::handle(ByteBuffer &&buf) {}
void CH_SECOND_PASSWD_ACK::deserialize(ByteBuffer &buf) {}
/**
 * CH_MAKE_CHAR_NOT_STATS
 */
void CH_MAKE_CHAR_NOT_STATS::handle(ByteBuffer &&buf) {}
void CH_MAKE_CHAR_NOT_STATS::deserialize(ByteBuffer &buf) {}
/**
 * CH_DELETE_CHAR3_EXT
 */
void CH_DELETE_CHAR3_EXT::handle(ByteBuffer &&buf) {}
void CH_DELETE_CHAR3_EXT::deserialize(ByteBuffer &buf) {}
/**
 * CH_REQ_CHARINFO_PER_PAGE
 */
void CH_REQ_CHARINFO_PER_PAGE::handle(ByteBuffer &&buf) {}
void CH_REQ_CHARINFO_PER_PAGE::deserialize(ByteBuffer &buf) {}
/**
 * CH_CHARLIST_REQ
 */
void CH_CHARLIST_REQ::handle(ByteBuffer &&buf) {}
void CH_CHARLIST_REQ::deserialize(ByteBuffer &buf) {}
