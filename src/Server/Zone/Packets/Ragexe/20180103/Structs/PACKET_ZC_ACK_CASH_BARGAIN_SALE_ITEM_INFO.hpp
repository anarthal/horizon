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

#ifndef HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO_HPP
#define HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO_HPP

#include "Server/Zone/Packets/Ragexe/20180103/PacketsRagexe20180103.hpp"
#include "Server/Zone/Packets/Ragexe/Structs/PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180103
{
struct PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO : public Horizon::Zone::Ragexe::PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO
{
	PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO(uint16_t packet_id = ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO) : Horizon::Zone::Ragexe::PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe::PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe::PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO::deserialize(buf);
	}

	virtual Ragexe::PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override
	{
		return right = serialize();
	}

	/* Size: 10 bytes */
	/* Changed from 12 in version 0 to 10 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_ACK_CASH_BARGAIN_SALE_ITEM_INFO_HPP */
