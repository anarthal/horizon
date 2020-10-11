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

if RAGNA_ROOT == nil then print('Error: Running outside of project directory') os.exit() end

if packet_version >= 20090406 then
	local pid = 0x0080
elseif packet_version >= 20090318 then
	local pid = 0x0080
elseif packet_version >= 20090311 then
	local pid = 0x0080
elseif packet_version >= 20090225 then
	local pid = 0x0080
elseif packet_version >= 20090107 then
	local pid = 0x0080
elseif packet_version >= 20081217 then
	local pid = 0x0080
elseif packet_version >= 20081203 then
	local pid = 0x0080
elseif packet_version >= 20081119 then
	local pid = 0x0080
elseif packet_version >= 20081112 then
	local pid = 0x0080
elseif packet_version >= 20081105 then
	local pid = 0x0080
elseif packet_version >= 20081029 then
	local pid = 0x0080
elseif packet_version >= 20081001 then
	local pid = 0x0080
elseif packet_version >= 20080924 then
	local pid = 0x0080
elseif packet_version >= 20080917 then
	local pid = 0x0080
elseif packet_version >= 20080910 then
	local pid = 0x0080
elseif packet_version >= 20080903 then
	local pid = 0x0080
elseif packet_version >= 20080827 then
	local pid = 0x0080
elseif packet_version >= 20080624 then
	local pid = 0x0080
elseif packet_version >= 20080618 then
	local pid = 0x0080
elseif packet_version >= 20080617 then
	local pid = 0x0080
elseif packet_version >= 20080610 then
	local pid = 0x0080
elseif packet_version >= 20080603 then
	local pid = 0x0080
elseif packet_version >= 20080528 then
	local pid = 0x0080
elseif packet_version >= 20080520 then
	local pid = 0x0080
elseif packet_version >= 20080513 then
	local pid = 0x0080
elseif packet_version >= 20080422 then
	local pid = 0x0080
elseif packet_version >= 20080415 then
	local pid = 0x0080
elseif packet_version >= 20080325 then
	local pid = 0x0080
elseif packet_version >= 20080318 then
	local pid = 0x0080
elseif packet_version >= 20080311 then
	local pid = 0x0080
elseif packet_version >= 20080304 then
	local pid = 0x0080
elseif packet_version >= 20080226 then
	local pid = 0x0080
elseif packet_version >= 20080219 then
	local pid = 0x0080
elseif packet_version >= 20080124 then
	local pid = 0x0080
elseif packet_version >= 20080102 then
	local pid = 0x0080
elseif packet_version >= 0 then
	local pid = 0x0080
end

local ZC_NOTIFY_VANISH = {
	_id = pid,
	_length = 0,
	_buffer = nil
}


function ZC_NOTIFY_VANISH.new(o)
	o = o or ZC_NOTIFY_VANISH
	setmetatable(o, self)
	self.__index = self
	return o
end

function ZC_NOTIFY_VANISH.serialize()

end

return ZC_NOTIFY_VANISH

