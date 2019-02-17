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

#ifndef HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING_HPP
#define HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING_HPP

#include "Server/Zone/Packets/Ragexe/20180103/PacketsRagexe20180103.hpp"
#include "Server/Zone/Packets/Ragexe/Structs/PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180103
{
struct PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING : public Horizon::Zone::Ragexe::PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING
{
	PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING(uint16_t packet_id = ZC_NOTIFY_BARGAIN_SALE_SELLING) : Horizon::Zone::Ragexe::PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe::PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe::PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING::deserialize(buf);
	}

	virtual Ragexe::PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override
	{
		return right = serialize();
	}

	/* Size: 8 bytes */
	/* Changed from 10 in version 0 to 8 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_NOTIFY_BARGAIN_SALE_SELLING_HPP */
