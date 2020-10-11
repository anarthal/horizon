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

#ifndef HORIZON_ZONE_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM_HPP
#define HORIZON_ZONE_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM_HPP

#include "Server/Common/Configuration/Horizon.hpp"
#include "Server/Common/Base/NetworkPacket.hpp"

namespace Horizon
{
namespace Zone
{
class AuthSocket;
namespace Packet
{

enum {
#if PACKET_VERSION >= 20180131
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20180117
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20180103
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20171227
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20171121
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20171115
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20171018
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20170823
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20170816
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20170201
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20170125
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20170104
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20161228
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160913
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160907
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160817
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160810
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160727
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160720
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160713
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160629
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160622
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20160106
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20151021
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20151014
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20150527
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20150520
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20150408
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20150401
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20150318
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20150311
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20150107
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20141210
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20141203
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20141008
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20141001
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20140416
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20140409
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20140319
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20140312
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20140108
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20131120
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20131113
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20131016
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20131008
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20130925
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20130917
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20130103
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20121227
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20121218
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20121212
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20121205
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20121128
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20120801
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20120724
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20120417
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20120410
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x091c
#elif PACKET_VERSION >= 20120207
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x096c
#elif PACKET_VERSION >= 0
	ID_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM = 0x096c
#endif
};
/**
 * @brief Main object for the aegis packet: ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM
 * Size : 6 @ 0
 *
 */ 
class ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM : public Base::NetworkPacket<ZoneSocket>
{
public:
	ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM(std::shared_ptr<ZoneSocket> sock);
	~ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM();


	void prepare();

private:
	ByteBuffer serialize() override;

protected:
	/* Structure Goes Here */
};
}
}
}
#endif /* HORIZON_ZONE_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM_HPP */
