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

#ifndef HORIZON_ZONE_CZ_USE_SKILL2_HPP
#define HORIZON_ZONE_CZ_USE_SKILL2_HPP

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
#if PACKET_VERSION >= 20180523
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180511
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180321
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180315
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180314
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180228
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180221
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180213
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180131
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180117
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20180103
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171227
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171220
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171214
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171206
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171204
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171130
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171129
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171122
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171115
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171108
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171101
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171018
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171011
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20171002
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170913
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170906
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170830
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170823
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170816
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170809
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170801
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170726
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170719
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170621
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170517
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170426
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170412
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170322
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170315
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170308
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170228
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170222
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170215
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170201
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170125
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170118
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170111
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20170104
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20161228
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20161221
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20161130
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20161102
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20161026
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20161019
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160928
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160921
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160913
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160907
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160831
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160824
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160803
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160727
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160615
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160511
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160504
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160414
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160406
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160316
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160302
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160224
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160217
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160120
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160113
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20160106
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20151209
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20151202
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20151125
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20151021
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20151014
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20151001
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150916
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150909
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150826
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150805
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150729
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150722
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150715
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150708
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150701
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150617
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150610
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150603
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150527
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150520
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150422
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150318
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150311
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150217
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150211
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150204
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150128
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20150107
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141231
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141224
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141223
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141217
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141210
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141203
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141126
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141119
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141112
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141105
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141029
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141022
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20141001
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140917
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140827
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140820
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140806
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140709
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140702
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140618
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140611
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140605
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140528
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140521
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140514
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140430
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140423
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140416
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140312
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140305
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140226
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140219
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140212
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140129
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140122
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20140108
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131230
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131211
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131204
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131127
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131106
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131030
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131023
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131008
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20131002
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130925
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130917
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130904
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130828
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130821
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130814
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130807
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130731
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130717
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130626
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130618
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130529
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130522
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130417
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130410
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130403
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130327
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130320
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130313
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130227
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130206
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130130
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130121
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130109
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20130103
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20121227
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20121218
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20121107
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20121031
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20121024
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20121017
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120925
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120919
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120911
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120822
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120814
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120808
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120801
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120724
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120716
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120626
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120612
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120604
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120601
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120529
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120515
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120503
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120502
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120424
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120404
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120328
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120307
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120228
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120221
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120214
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120131
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120117
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20120103
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111227
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111220
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111122
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111114
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111108
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111025
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111017
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20111010
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110928
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110920
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110906
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110831
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110823
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110809
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110802
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110726
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110718
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110627
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110620
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110517
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110503
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110426
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110419
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110412
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110405
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110329
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110322
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110308
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110228
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110222
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110215
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110208
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110131
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110125
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110118
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20110104
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20101214
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20101207
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20101130
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20100105
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090406
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090318
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090311
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090225
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090204
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090129
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090120
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090114
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20090107
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081217
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081203
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081119
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081112
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081105
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081029
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081022
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20081001
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20080924
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20080917
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 20080910
	ID_CZ_USE_SKILL2 = 0x0438
#elif PACKET_VERSION >= 0
	ID_CZ_USE_SKILL2 = 0x0438
#endif
};
/**
 * @brief Main object for the aegis packet: CZ_USE_SKILL2
 * Size : 10 @ 0
 *
 */ 
class CZ_USE_SKILL2 : public Base::NetworkPacket<ZoneSocket>
{
public:
	CZ_USE_SKILL2(std::shared_ptr<ZoneSocket> sock);
	~CZ_USE_SKILL2();


	void handle(ByteBuffer &buf);

private:
	void deserialize(ByteBuffer &buf) override;

protected:
	/* Structure Goes Here */
};
}
}
}
#endif /* HORIZON_ZONE_CZ_USE_SKILL2_HPP */
