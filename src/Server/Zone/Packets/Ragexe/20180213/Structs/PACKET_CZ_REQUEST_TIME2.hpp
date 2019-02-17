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
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 **************************************************/

#ifndef HORIZON_ZONE_RAGEXE_20180213_PACKET_CZ_REQUEST_TIME2_HPP
#define HORIZON_ZONE_RAGEXE_20180213_PACKET_CZ_REQUEST_TIME2_HPP

#include "Server/Zone/Packets/Ragexe/20180213/PacketsRagexe20180213.hpp"
#include "Server/Zone/Packets/Ragexe/20180103/Structs/PACKET_CZ_REQUEST_TIME2.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180213
{
struct PACKET_CZ_REQUEST_TIME2 : public Horizon::Zone::Ragexe20180103::PACKET_CZ_REQUEST_TIME2
{
	PACKET_CZ_REQUEST_TIME2(uint16_t packet_id = CZ_REQUEST_TIME2) : Horizon::Zone::Ragexe20180103::PACKET_CZ_REQUEST_TIME2(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180213_PACKET_CZ_REQUEST_TIME2_HPP */
