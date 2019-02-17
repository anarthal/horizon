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

#ifndef HORIZON_ZONE_RAGEXE_20180103_PACKET_CZ_REFINE_ITEM_REQUEST_HPP
#define HORIZON_ZONE_RAGEXE_20180103_PACKET_CZ_REFINE_ITEM_REQUEST_HPP

#include "Server/Zone/Packets/Ragexe/20180103/PacketsRagexe20180103.hpp"
#include "Server/Zone/Packets/Ragexe/Structs/PACKET_CZ_REFINE_ITEM_REQUEST.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180103
{
struct PACKET_CZ_REFINE_ITEM_REQUEST : public Horizon::Zone::Ragexe::PACKET_CZ_REFINE_ITEM_REQUEST
{
	PACKET_CZ_REFINE_ITEM_REQUEST(uint16_t packet_id = CZ_REFINE_ITEM_REQUEST) : Horizon::Zone::Ragexe::PACKET_CZ_REFINE_ITEM_REQUEST(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe::PACKET_CZ_REFINE_ITEM_REQUEST::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe::PACKET_CZ_REFINE_ITEM_REQUEST::deserialize(buf);
	}

	virtual Ragexe::PACKET_CZ_REFINE_ITEM_REQUEST & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override
	{
		return right = serialize();
	}

	/* Size: 7 bytes */
	/* Changed from 9 in version 0 to 7 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180103_PACKET_CZ_REFINE_ITEM_REQUEST_HPP */
