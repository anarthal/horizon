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

#ifndef HORIZON_ZONE_CZ_REQ_CLICK_TO_BUYING_STORE_HPP
#define HORIZON_ZONE_CZ_REQ_CLICK_TO_BUYING_STORE_HPP

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
#if PACKET_VERSION >= 20171024
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20190109
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181226
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181219
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181212
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181205
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181128
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181121
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181120
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181114
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181107
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181031
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181024
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181017
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181010
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20181002
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180928
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180919
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180912
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180905
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180831
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180829
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180822
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180808
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180801
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180725
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180718
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180711
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180704
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180703
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180627
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180621
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180620
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180612
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180605
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180530
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180523
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180516
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180511
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0863
#elif PACKET_VERSION >= 20180509
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180502
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180425
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180418
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180411
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180404
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180328
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180321
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180315
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20180314
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0931
#elif PACKET_VERSION >= 20180309
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20180307
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20180228
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20180221
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0895
#elif PACKET_VERSION >= 20180213
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x088e
#elif PACKET_VERSION >= 20180207
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20180131
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20180124
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20180117
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x086f
#elif PACKET_VERSION >= 20180103
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0964
#elif PACKET_VERSION >= 20171229
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x089f
#elif PACKET_VERSION >= 20171227
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x089f
#elif PACKET_VERSION >= 20171221
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x07ec
#elif PACKET_VERSION >= 20171220
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x07ec
#elif PACKET_VERSION >= 20171214
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0886
#elif PACKET_VERSION >= 20171213
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20171212
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20171211
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20171210
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20171209
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20171208
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20171206
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20171204
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171130
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0872
#elif PACKET_VERSION >= 20171129
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x035f
#elif PACKET_VERSION >= 20171128
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171127
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171123
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171122
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171121
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171117
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171116
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171115
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171113
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171109
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171108
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0940
#elif PACKET_VERSION >= 20171101
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x088e
#elif PACKET_VERSION >= 20171031
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171030
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171027
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171025
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171023
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171019
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171018
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20171011
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20171002
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170927
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x091e
#elif PACKET_VERSION >= 20170920
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0961
#elif PACKET_VERSION >= 20170913
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a6
#elif PACKET_VERSION >= 20170906
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170830
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0925
#elif PACKET_VERSION >= 20170823
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170816
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0921
#elif PACKET_VERSION >= 20170809
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0939
#elif PACKET_VERSION >= 20170801
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170726
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0873
#elif PACKET_VERSION >= 20170719
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0863
#elif PACKET_VERSION >= 20170712
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170705
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170628
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170621
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170614
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0860
#elif PACKET_VERSION >= 20170607
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0863
#elif PACKET_VERSION >= 20170531
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0945
#elif PACKET_VERSION >= 20170524
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x085f
#elif PACKET_VERSION >= 20170517
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0946
#elif PACKET_VERSION >= 20170502
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170426
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170419
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0965
#elif PACKET_VERSION >= 20170412
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0365
#elif PACKET_VERSION >= 20170405
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170329
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170322
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170315
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x094a
#elif PACKET_VERSION >= 20170308
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170228
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a7
#elif PACKET_VERSION >= 20170222
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170215
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x095f
#elif PACKET_VERSION >= 20170208
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170201
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170125
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x091b
#elif PACKET_VERSION >= 20170118
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170111
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20170104
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20161228
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a3
#elif PACKET_VERSION >= 20161221
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x095a
#elif PACKET_VERSION >= 20161214
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x022d
#elif PACKET_VERSION >= 20161207
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20161130
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20161123
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x092a
#elif PACKET_VERSION >= 20161116
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x088d
#elif PACKET_VERSION >= 20161109
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0876
#elif PACKET_VERSION >= 20161103
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0922
#elif PACKET_VERSION >= 20161102
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0922
#elif PACKET_VERSION >= 20161026
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0891
#elif PACKET_VERSION >= 20161019
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x022d
#elif PACKET_VERSION >= 20161012
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0937
#elif PACKET_VERSION >= 20161005
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x095a
#elif PACKET_VERSION >= 20160928
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20160921
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160913
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0874
#elif PACKET_VERSION >= 20160907
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160831
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x07ec
#elif PACKET_VERSION >= 20160824
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160817
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0364
#elif PACKET_VERSION >= 20160810
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0879
#elif PACKET_VERSION >= 20160803
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x085d
#elif PACKET_VERSION >= 20160727
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0874
#elif PACKET_VERSION >= 20160720
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x086d
#elif PACKET_VERSION >= 20160713
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0860
#elif PACKET_VERSION >= 20160706
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20160630
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0363
#elif PACKET_VERSION >= 20160629
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0363
#elif PACKET_VERSION >= 20160622
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0891
#elif PACKET_VERSION >= 20160615
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x094a
#elif PACKET_VERSION >= 20160609
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160608
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160601
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160526
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160525
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160518
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160511
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160504
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x095b
#elif PACKET_VERSION >= 20160427
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160420
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160414
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160406
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x094d
#elif PACKET_VERSION >= 20160330
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160323
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160318
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160316
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160309
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0281
#elif PACKET_VERSION >= 20160302
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0367
#elif PACKET_VERSION >= 20160224
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0885
#elif PACKET_VERSION >= 20160217
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x088d
#elif PACKET_VERSION >= 20160211
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160203
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160127
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160120
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20160113
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0864
#elif PACKET_VERSION >= 20160106
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151230
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151223
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x091a
#elif PACKET_VERSION >= 20151216
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0361
#elif PACKET_VERSION >= 20151209
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x087f
#elif PACKET_VERSION >= 20151202
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151125
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0939
#elif PACKET_VERSION >= 20151118
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151111
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151104
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0436
#elif PACKET_VERSION >= 20151029
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151028
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151022
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151021
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151014
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0889
#elif PACKET_VERSION >= 20151007
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20151001
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150923
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x088e
#elif PACKET_VERSION >= 20150916
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0835
#elif PACKET_VERSION >= 20150909
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0940
#elif PACKET_VERSION >= 20150902
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x094f
#elif PACKET_VERSION >= 20150826
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0819
#elif PACKET_VERSION >= 20150819
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150812
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150805
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150729
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08ad
#elif PACKET_VERSION >= 20150722
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0880
#elif PACKET_VERSION >= 20150715
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0950
#elif PACKET_VERSION >= 20150708
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150702
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a4
#elif PACKET_VERSION >= 20150701
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a4
#elif PACKET_VERSION >= 20150624
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150618
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0362
#elif PACKET_VERSION >= 20150617
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0362
#elif PACKET_VERSION >= 20150610
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0877
#elif PACKET_VERSION >= 20150603
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0819
#elif PACKET_VERSION >= 20150527
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150520
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x085e
#elif PACKET_VERSION >= 20150513
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150507
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150429
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150422
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150415
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0368
#elif PACKET_VERSION >= 20150408
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0955
#elif PACKET_VERSION >= 20150401
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0437
#elif PACKET_VERSION >= 20150325
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0819
#elif PACKET_VERSION >= 20150318
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0863
#elif PACKET_VERSION >= 20150311
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0957
#elif PACKET_VERSION >= 20150304
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150226
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x02c4
#elif PACKET_VERSION >= 20150225
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x02c4
#elif PACKET_VERSION >= 20150217
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150211
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0886
#elif PACKET_VERSION >= 20150204
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150130
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x035f
#elif PACKET_VERSION >= 20150129
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x035f
#elif PACKET_VERSION >= 20150128
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x035f
#elif PACKET_VERSION >= 20150121
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150114
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20150107
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141231
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141224
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x086c
#elif PACKET_VERSION >= 20141223
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x086c
#elif PACKET_VERSION >= 20141217
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0944
#elif PACKET_VERSION >= 20141210
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141203
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x095c
#elif PACKET_VERSION >= 20141126
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141119
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x085a
#elif PACKET_VERSION >= 20141112
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a1
#elif PACKET_VERSION >= 20141105
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x091e
#elif PACKET_VERSION >= 20141029
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141022
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141016
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141015
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141008
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20141001
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140924
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x092b
#elif PACKET_VERSION >= 20140917
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x089c
#elif PACKET_VERSION >= 20140903
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140827
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140820
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x093e
#elif PACKET_VERSION >= 20140814
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140813
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140806
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140730
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a6
#elif PACKET_VERSION >= 20140723
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0888
#elif PACKET_VERSION >= 20140716
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x093b
#elif PACKET_VERSION >= 20140709
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0897
#elif PACKET_VERSION >= 20140702
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140625
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0968
#elif PACKET_VERSION >= 20140618
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x08a6
#elif PACKET_VERSION >= 20140613
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0957
#elif PACKET_VERSION >= 20140612
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0957
#elif PACKET_VERSION >= 20140611
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0957
#elif PACKET_VERSION >= 20140605
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140528
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x094a
#elif PACKET_VERSION >= 20140521
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140514
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0925
#elif PACKET_VERSION >= 20140508
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140430
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140423
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x089b
#elif PACKET_VERSION >= 20140416
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140409
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x095a
#elif PACKET_VERSION >= 20140402
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x023b
#elif PACKET_VERSION >= 20140326
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x083c
#elif PACKET_VERSION >= 20140319
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0811
#elif PACKET_VERSION >= 20140312
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x085e
#elif PACKET_VERSION >= 20140305
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140226
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140219
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x085b
#elif PACKET_VERSION >= 20140212
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0877
#elif PACKET_VERSION >= 20140205
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140129
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140122
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x07ec
#elif PACKET_VERSION >= 20140115
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20140108
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20131230
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0969
#elif PACKET_VERSION >= 20131223
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20131218
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20131211
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20131204
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x07ec
#elif PACKET_VERSION >= 20131127
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x035f
#elif PACKET_VERSION >= 20131120
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0955
#elif PACKET_VERSION >= 20131113
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x092d
#elif PACKET_VERSION >= 20131108
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0946
#elif PACKET_VERSION >= 20131107
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0946
#elif PACKET_VERSION >= 20131106
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0946
#elif PACKET_VERSION >= 20131030
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20131023
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0935
#elif PACKET_VERSION >= 20131016
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0366
#elif PACKET_VERSION >= 20131008
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0936
#elif PACKET_VERSION >= 20131002
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130925
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130917
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0838
#elif PACKET_VERSION >= 20130911
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x035f
#elif PACKET_VERSION >= 20130904
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130828
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x07ec
#elif PACKET_VERSION >= 20130821
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0892
#elif PACKET_VERSION >= 20130814
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0895
#elif PACKET_VERSION >= 20130807
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130731
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0863
#elif PACKET_VERSION >= 20130724
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0924
#elif PACKET_VERSION >= 20130717
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0898
#elif PACKET_VERSION >= 20130710
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130703
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0202
#elif PACKET_VERSION >= 20130626
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130618
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0862
#elif PACKET_VERSION >= 20130612
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130605
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130529
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0892
#elif PACKET_VERSION >= 20130522
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0368
#elif PACKET_VERSION >= 20130515
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130508
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130502
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130424
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130417
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130410
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0367
#elif PACKET_VERSION >= 20130403
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x023b
#elif PACKET_VERSION >= 20130327
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x07ec
#elif PACKET_VERSION >= 20130320
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x035f
#elif PACKET_VERSION >= 20130313
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130306
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x085c
#elif PACKET_VERSION >= 20130227
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20130220
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130215
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x023b
#elif PACKET_VERSION >= 20130206
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130130
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0924
#elif PACKET_VERSION >= 20130121
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130116
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0877
#elif PACKET_VERSION >= 20130115
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0877
#elif PACKET_VERSION >= 20130109
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0922
#elif PACKET_VERSION >= 20130107
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20130103
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20121227
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0872
#elif PACKET_VERSION >= 20121218
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20121212
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0895
#elif PACKET_VERSION >= 20121205
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x093a
#elif PACKET_VERSION >= 20121128
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x092f
#elif PACKET_VERSION >= 20121121
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0958
#elif PACKET_VERSION >= 20121114
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x094f
#elif PACKET_VERSION >= 20121107
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0896
#elif PACKET_VERSION >= 20121031
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20121024
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x088a
#elif PACKET_VERSION >= 20121017
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20121011
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0942
#elif PACKET_VERSION >= 20121010
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0942
#elif PACKET_VERSION >= 20120926
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0927
#elif PACKET_VERSION >= 20120925
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0927
#elif PACKET_VERSION >= 20120919
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20120911
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0879
#elif PACKET_VERSION >= 20120905
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0959
#elif PACKET_VERSION >= 20120830
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20120822
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x095b
#elif PACKET_VERSION >= 20120814
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0861
#elif PACKET_VERSION >= 20120808
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20120801
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x092e
#elif PACKET_VERSION >= 20120724
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0364
#elif PACKET_VERSION >= 20120716
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0360
#elif PACKET_VERSION >= 20120712
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0811
#elif PACKET_VERSION >= 20120710
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0811
#elif PACKET_VERSION >= 20120523
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120522
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120515
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120508
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120503
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120502
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120424
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120214
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120207
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20120103
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20111220
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20111213
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20111108
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20111101
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20111025
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20111017
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110906
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110831
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110816
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110718
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110711
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110705
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110627
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110419
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110412
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110329
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110322
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20110104
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20101228
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20101221
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20101130
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20101123
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20100420
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 20100303
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#elif PACKET_VERSION >= 0
	ID_CZ_REQ_CLICK_TO_BUYING_STORE = 0x0817
#endif
};
/**
 * @brief Main object for the aegis packet: CZ_REQ_CLICK_TO_BUYING_STORE
 * Size : 6 @ 0
 *
 */ 
class CZ_REQ_CLICK_TO_BUYING_STORE : public Base::NetworkPacket<ZoneSocket>
{
public:
	CZ_REQ_CLICK_TO_BUYING_STORE(std::shared_ptr<ZoneSocket> sock);
	~CZ_REQ_CLICK_TO_BUYING_STORE();


	void handle(ByteBuffer &buf);

private:
	void deserialize(ByteBuffer &buf) override;

protected:
	/* Structure Goes Here */
};
}
}
}
#endif /* HORIZON_ZONE_CZ_REQ_CLICK_TO_BUYING_STORE_HPP */
