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

if packet_version >= 20171024 then
	local pid = 0x0437
elseif packet_version >= 20190109 then
	local pid = 0x0437
elseif packet_version >= 20181226 then
	local pid = 0x0437
elseif packet_version >= 20181219 then
	local pid = 0x0437
elseif packet_version >= 20181212 then
	local pid = 0x0437
elseif packet_version >= 20181205 then
	local pid = 0x0437
elseif packet_version >= 20181128 then
	local pid = 0x0437
elseif packet_version >= 20181121 then
	local pid = 0x0437
elseif packet_version >= 20181120 then
	local pid = 0x0437
elseif packet_version >= 20181114 then
	local pid = 0x0437
elseif packet_version >= 20181107 then
	local pid = 0x0437
elseif packet_version >= 20181031 then
	local pid = 0x0437
elseif packet_version >= 20181024 then
	local pid = 0x0437
elseif packet_version >= 20181017 then
	local pid = 0x0437
elseif packet_version >= 20181010 then
	local pid = 0x0437
elseif packet_version >= 20181002 then
	local pid = 0x0437
elseif packet_version >= 20180928 then
	local pid = 0x0437
elseif packet_version >= 20180919 then
	local pid = 0x0437
elseif packet_version >= 20180912 then
	local pid = 0x0437
elseif packet_version >= 20180905 then
	local pid = 0x0437
elseif packet_version >= 20180831 then
	local pid = 0x0437
elseif packet_version >= 20180829 then
	local pid = 0x0437
elseif packet_version >= 20180822 then
	local pid = 0x0437
elseif packet_version >= 20180808 then
	local pid = 0x0437
elseif packet_version >= 20180801 then
	local pid = 0x0437
elseif packet_version >= 20180725 then
	local pid = 0x0437
elseif packet_version >= 20180718 then
	local pid = 0x0437
elseif packet_version >= 20180711 then
	local pid = 0x0437
elseif packet_version >= 20180704 then
	local pid = 0x0437
elseif packet_version >= 20180703 then
	local pid = 0x0437
elseif packet_version >= 20180627 then
	local pid = 0x0437
elseif packet_version >= 20180621 then
	local pid = 0x0437
elseif packet_version >= 20180620 then
	local pid = 0x0437
elseif packet_version >= 20180612 then
	local pid = 0x0437
elseif packet_version >= 20180605 then
	local pid = 0x0437
elseif packet_version >= 20180530 then
	local pid = 0x0437
elseif packet_version >= 20180523 then
	local pid = 0x0437
elseif packet_version >= 20180516 then
	local pid = 0x0437
elseif packet_version >= 20180511 then
	local pid = 0x086c
elseif packet_version >= 20180509 then
	local pid = 0x0437
elseif packet_version >= 20180502 then
	local pid = 0x0437
elseif packet_version >= 20180425 then
	local pid = 0x0437
elseif packet_version >= 20180418 then
	local pid = 0x0437
elseif packet_version >= 20180411 then
	local pid = 0x0437
elseif packet_version >= 20180404 then
	local pid = 0x0437
elseif packet_version >= 20180328 then
	local pid = 0x0437
elseif packet_version >= 20180321 then
	local pid = 0x0437
elseif packet_version >= 20180315 then
	local pid = 0x0437
elseif packet_version >= 20180314 then
	local pid = 0x0918
elseif packet_version >= 20180309 then
	local pid = 0x0369
elseif packet_version >= 20180307 then
	local pid = 0x0369
elseif packet_version >= 20180228 then
	local pid = 0x0369
elseif packet_version >= 20180221 then
	local pid = 0x0958
elseif packet_version >= 20180213 then
	local pid = 0x0917
elseif packet_version >= 20180207 then
	local pid = 0x0369
elseif packet_version >= 20180131 then
	local pid = 0x0369
elseif packet_version >= 20180124 then
	local pid = 0x0369
elseif packet_version >= 20180117 then
	local pid = 0x0893
elseif packet_version >= 20180103 then
	local pid = 0x0888
elseif packet_version >= 20171229 then
	local pid = 0x086c
elseif packet_version >= 20171227 then
	local pid = 0x086c
elseif packet_version >= 20171221 then
	local pid = 0x0937
elseif packet_version >= 20171220 then
	local pid = 0x0937
elseif packet_version >= 20171214 then
	local pid = 0x0933
elseif packet_version >= 20171213 then
	local pid = 0x08ac
elseif packet_version >= 20171212 then
	local pid = 0x08ac
elseif packet_version >= 20171211 then
	local pid = 0x08ac
elseif packet_version >= 20171210 then
	local pid = 0x08ac
elseif packet_version >= 20171209 then
	local pid = 0x08ac
elseif packet_version >= 20171208 then
	local pid = 0x08ac
elseif packet_version >= 20171206 then
	local pid = 0x08ac
elseif packet_version >= 20171204 then
	local pid = 0x0369
elseif packet_version >= 20171130 then
	local pid = 0x093a
elseif packet_version >= 20171129 then
	local pid = 0x0369
elseif packet_version >= 20171128 then
	local pid = 0x0369
elseif packet_version >= 20171127 then
	local pid = 0x0369
elseif packet_version >= 20171123 then
	local pid = 0x0369
elseif packet_version >= 20171122 then
	local pid = 0x0369
elseif packet_version >= 20171121 then
	local pid = 0x0369
elseif packet_version >= 20171117 then
	local pid = 0x0369
elseif packet_version >= 20171116 then
	local pid = 0x0369
elseif packet_version >= 20171115 then
	local pid = 0x0369
elseif packet_version >= 20171113 then
	local pid = 0x0437
elseif packet_version >= 20171109 then
	local pid = 0x0437
elseif packet_version >= 20171108 then
	local pid = 0x0963
elseif packet_version >= 20171101 then
	local pid = 0x0957
elseif packet_version >= 20171031 then
	local pid = 0x0437
elseif packet_version >= 20171030 then
	local pid = 0x0437
elseif packet_version >= 20171027 then
	local pid = 0x0437
elseif packet_version >= 20171025 then
	local pid = 0x0437
elseif packet_version >= 20171023 then
	local pid = 0x0437
elseif packet_version >= 20171019 then
	local pid = 0x0437
elseif packet_version >= 20171018 then
	local pid = 0x0437
elseif packet_version >= 20171011 then
	local pid = 0x0369
elseif packet_version >= 20171002 then
	local pid = 0x0369
elseif packet_version >= 20170927 then
	local pid = 0x0899
elseif packet_version >= 20170920 then
	local pid = 0x089b
elseif packet_version >= 20170913 then
	local pid = 0x0817
elseif packet_version >= 20170906 then
	local pid = 0x0369
elseif packet_version >= 20170830 then
	local pid = 0x093e
elseif packet_version >= 20170823 then
	local pid = 0x0369
elseif packet_version >= 20170816 then
	local pid = 0x0438
elseif packet_version >= 20170809 then
	local pid = 0x0868
elseif packet_version >= 20170801 then
	local pid = 0x0369
elseif packet_version >= 20170726 then
	local pid = 0x0878
elseif packet_version >= 20170719 then
	local pid = 0x022d
elseif packet_version >= 20170712 then
	local pid = 0x0369
elseif packet_version >= 20170705 then
	local pid = 0x0369
elseif packet_version >= 20170628 then
	local pid = 0x0369
elseif packet_version >= 20170621 then
	local pid = 0x0369
elseif packet_version >= 20170614 then
	local pid = 0x083c
elseif packet_version >= 20170607 then
	local pid = 0x0938
elseif packet_version >= 20170531 then
	local pid = 0x087b
elseif packet_version >= 20170524 then
	local pid = 0x085e
elseif packet_version >= 20170517 then
	local pid = 0x0437
elseif packet_version >= 20170502 then
	local pid = 0x0369
elseif packet_version >= 20170426 then
	local pid = 0x0369
elseif packet_version >= 20170419 then
	local pid = 0x085a
elseif packet_version >= 20170412 then
	local pid = 0x08a1
elseif packet_version >= 20170405 then
	local pid = 0x0362
elseif packet_version >= 20170329 then
	local pid = 0x0369
elseif packet_version >= 20170322 then
	local pid = 0x0369
elseif packet_version >= 20170315 then
	local pid = 0x0884
elseif packet_version >= 20170308 then
	local pid = 0x0369
elseif packet_version >= 20170228 then
	local pid = 0x0360
elseif packet_version >= 20170222 then
	local pid = 0x0369
elseif packet_version >= 20170215 then
	local pid = 0x083c
elseif packet_version >= 20170208 then
	local pid = 0x0369
elseif packet_version >= 20170201 then
	local pid = 0x0369
elseif packet_version >= 20170125 then
	local pid = 0x0438
elseif packet_version >= 20170118 then
	local pid = 0x0369
elseif packet_version >= 20170111 then
	local pid = 0x0369
elseif packet_version >= 20170104 then
	local pid = 0x0369
elseif packet_version >= 20161228 then
	local pid = 0x093d
elseif packet_version >= 20161221 then
	local pid = 0x089b
elseif packet_version >= 20161214 then
	local pid = 0x0436
elseif packet_version >= 20161207 then
	local pid = 0x0886
elseif packet_version >= 20161130 then
	local pid = 0x0369
elseif packet_version >= 20161123 then
	local pid = 0x095b
elseif packet_version >= 20161116 then
	local pid = 0x0893
elseif packet_version >= 20161109 then
	local pid = 0x086a
elseif packet_version >= 20161103 then
	local pid = 0x0436
elseif packet_version >= 20161102 then
	local pid = 0x0436
elseif packet_version >= 20161026 then
	local pid = 0x085f
elseif packet_version >= 20161019 then
	local pid = 0x0369
elseif packet_version >= 20161012 then
	local pid = 0x0863
elseif packet_version >= 20161005 then
	local pid = 0x0368
elseif packet_version >= 20160928 then
	local pid = 0x089a
elseif packet_version >= 20160921 then
	local pid = 0x0369
elseif packet_version >= 20160913 then
	local pid = 0x0950
elseif packet_version >= 20160907 then
	local pid = 0x0369
elseif packet_version >= 20160831 then
	local pid = 0x0878
elseif packet_version >= 20160824 then
	local pid = 0x0369
elseif packet_version >= 20160817 then
	local pid = 0x0886
elseif packet_version >= 20160810 then
	local pid = 0x095b
elseif packet_version >= 20160803 then
	local pid = 0x0934
elseif packet_version >= 20160727 then
	local pid = 0x0883
elseif packet_version >= 20160720 then
	local pid = 0x0365
elseif packet_version >= 20160713 then
	local pid = 0x0945
elseif packet_version >= 20160706 then
	local pid = 0x0860
elseif packet_version >= 20160630 then
	local pid = 0x095a
elseif packet_version >= 20160629 then
	local pid = 0x095a
elseif packet_version >= 20160622 then
	local pid = 0x089e
elseif packet_version >= 20160615 then
	local pid = 0x0948
elseif packet_version >= 20160609 then
	local pid = 0x0369
elseif packet_version >= 20160608 then
	local pid = 0x0369
elseif packet_version >= 20160601 then
	local pid = 0x0369
elseif packet_version >= 20160526 then
	local pid = 0x0369
elseif packet_version >= 20160525 then
	local pid = 0x0369
elseif packet_version >= 20160518 then
	local pid = 0x0369
elseif packet_version >= 20160511 then
	local pid = 0x0369
elseif packet_version >= 20160504 then
	local pid = 0x085f
elseif packet_version >= 20160427 then
	local pid = 0x0369
elseif packet_version >= 20160420 then
	local pid = 0x0369
elseif packet_version >= 20160414 then
	local pid = 0x0369
elseif packet_version >= 20160406 then
	local pid = 0x08a1
elseif packet_version >= 20160330 then
	local pid = 0x0369
elseif packet_version >= 20160323 then
	local pid = 0x0369
elseif packet_version >= 20160318 then
	local pid = 0x0369
elseif packet_version >= 20160316 then
	local pid = 0x0369
elseif packet_version >= 20160309 then
	local pid = 0x094f
elseif packet_version >= 20160302 then
	local pid = 0x0968
elseif packet_version >= 20160224 then
	local pid = 0x0884
elseif packet_version >= 20160217 then
	local pid = 0x0920
elseif packet_version >= 20160211 then
	local pid = 0x0369
elseif packet_version >= 20160203 then
	local pid = 0x0369
elseif packet_version >= 20160127 then
	local pid = 0x0369
elseif packet_version >= 20160120 then
	local pid = 0x0369
elseif packet_version >= 20160113 then
	local pid = 0x089a
elseif packet_version >= 20160106 then
	local pid = 0x0369
elseif packet_version >= 20151230 then
	local pid = 0x0369
elseif packet_version >= 20151223 then
	local pid = 0x0881
elseif packet_version >= 20151216 then
	local pid = 0x089d
elseif packet_version >= 20151209 then
	local pid = 0x0961
elseif packet_version >= 20151202 then
	local pid = 0x0369
elseif packet_version >= 20151125 then
	local pid = 0x089c
elseif packet_version >= 20151118 then
	local pid = 0x0369
elseif packet_version >= 20151111 then
	local pid = 0x0885
elseif packet_version >= 20151104 then
	local pid = 0x0369
elseif packet_version >= 20151029 then
	local pid = 0x0369
elseif packet_version >= 20151028 then
	local pid = 0x0369
elseif packet_version >= 20151022 then
	local pid = 0x0369
elseif packet_version >= 20151021 then
	local pid = 0x0369
elseif packet_version >= 20151014 then
	local pid = 0x085c
elseif packet_version >= 20151007 then
	local pid = 0x0369
elseif packet_version >= 20151001 then
	local pid = 0x0369
elseif packet_version >= 20150923 then
	local pid = 0x0951
elseif packet_version >= 20150916 then
	local pid = 0x0869
elseif packet_version >= 20150909 then
	local pid = 0x023b
elseif packet_version >= 20150902 then
	local pid = 0x085b
elseif packet_version >= 20150826 then
	local pid = 0x07ec
elseif packet_version >= 20150819 then
	local pid = 0x0369
elseif packet_version >= 20150812 then
	local pid = 0x0369
elseif packet_version >= 20150805 then
	local pid = 0x0369
elseif packet_version >= 20150729 then
	local pid = 0x0881
elseif packet_version >= 20150722 then
	local pid = 0x0360
elseif packet_version >= 20150715 then
	local pid = 0x083c
elseif packet_version >= 20150708 then
	local pid = 0x0369
elseif packet_version >= 20150702 then
	local pid = 0x0958
elseif packet_version >= 20150701 then
	local pid = 0x0958
elseif packet_version >= 20150624 then
	local pid = 0x0369
elseif packet_version >= 20150618 then
	local pid = 0x0369
elseif packet_version >= 20150617 then
	local pid = 0x0369
elseif packet_version >= 20150610 then
	local pid = 0x093e
elseif packet_version >= 20150603 then
	local pid = 0x0873
elseif packet_version >= 20150527 then
	local pid = 0x0369
elseif packet_version >= 20150520 then
	local pid = 0x091d
elseif packet_version >= 20150513 then
	local pid = 0x0369
elseif packet_version >= 20150507 then
	local pid = 0x0369
elseif packet_version >= 20150429 then
	local pid = 0x0369
elseif packet_version >= 20150422 then
	local pid = 0x0369
elseif packet_version >= 20150415 then
	local pid = 0x086c
elseif packet_version >= 20150408 then
	local pid = 0x0865
elseif packet_version >= 20150401 then
	local pid = 0x0362
elseif packet_version >= 20150325 then
	local pid = 0x08a1
elseif packet_version >= 20150318 then
	local pid = 0x0889
elseif packet_version >= 20150311 then
	local pid = 0x0896
elseif packet_version >= 20150304 then
	local pid = 0x0369
elseif packet_version >= 20150226 then
	local pid = 0x0369
elseif packet_version >= 20150225 then
	local pid = 0x0369
elseif packet_version >= 20150217 then
	local pid = 0x0369
elseif packet_version >= 20150211 then
	local pid = 0x08aa
elseif packet_version >= 20150204 then
	local pid = 0x0369
elseif packet_version >= 20150130 then
	local pid = 0x0838
elseif packet_version >= 20150129 then
	local pid = 0x0838
elseif packet_version >= 20150128 then
	local pid = 0x0838
elseif packet_version >= 20150121 then
	local pid = 0x0369
elseif packet_version >= 20150114 then
	local pid = 0x0369
elseif packet_version >= 20150107 then
	local pid = 0x0369
elseif packet_version >= 20141231 then
	local pid = 0x0369
elseif packet_version >= 20141224 then
	local pid = 0x095f
elseif packet_version >= 20141223 then
	local pid = 0x095f
elseif packet_version >= 20141217 then
	local pid = 0x0924
elseif packet_version >= 20141210 then
	local pid = 0x0369
elseif packet_version >= 20141203 then
	local pid = 0x08a5
elseif packet_version >= 20141126 then
	local pid = 0x0369
elseif packet_version >= 20141119 then
	local pid = 0x0872
elseif packet_version >= 20141112 then
	local pid = 0x0929
elseif packet_version >= 20141105 then
	local pid = 0x0875
elseif packet_version >= 20141029 then
	local pid = 0x0940
elseif packet_version >= 20141022 then
	local pid = 0x0369
elseif packet_version >= 20141016 then
	local pid = 0x0369
elseif packet_version >= 20141015 then
	local pid = 0x0369
elseif packet_version >= 20141008 then
	local pid = 0x0369
elseif packet_version >= 20141001 then
	local pid = 0x0369
elseif packet_version >= 20140924 then
	local pid = 0x0894
elseif packet_version >= 20140917 then
	local pid = 0x0889
elseif packet_version >= 20140903 then
	local pid = 0x0369
elseif packet_version >= 20140827 then
	local pid = 0x0369
elseif packet_version >= 20140820 then
	local pid = 0x0952
elseif packet_version >= 20140814 then
	local pid = 0x0369
elseif packet_version >= 20140813 then
	local pid = 0x0369
elseif packet_version >= 20140806 then
	local pid = 0x0369
elseif packet_version >= 20140730 then
	local pid = 0x0817
elseif packet_version >= 20140723 then
	local pid = 0x0947
elseif packet_version >= 20140716 then
	local pid = 0x0811
elseif packet_version >= 20140709 then
	local pid = 0x0437
elseif packet_version >= 20140702 then
	local pid = 0x0369
elseif packet_version >= 20140625 then
	local pid = 0x0959
elseif packet_version >= 20140618 then
	local pid = 0x093b
elseif packet_version >= 20140613 then
	local pid = 0x0891
elseif packet_version >= 20140612 then
	local pid = 0x0891
elseif packet_version >= 20140611 then
	local pid = 0x0891
elseif packet_version >= 20140605 then
	local pid = 0x0368
elseif packet_version >= 20140528 then
	local pid = 0x0929
elseif packet_version >= 20140521 then
	local pid = 0x0369
elseif packet_version >= 20140514 then
	local pid = 0x0865
elseif packet_version >= 20140508 then
	local pid = 0x0369
elseif packet_version >= 20140430 then
	local pid = 0x0369
elseif packet_version >= 20140423 then
	local pid = 0x0896
elseif packet_version >= 20140416 then
	local pid = 0x0369
elseif packet_version >= 20140409 then
	local pid = 0x0893
elseif packet_version >= 20140402 then
	local pid = 0x0946
elseif packet_version >= 20140326 then
	local pid = 0x093d
elseif packet_version >= 20140319 then
	local pid = 0x0864
elseif packet_version >= 20140312 then
	local pid = 0x088e
elseif packet_version >= 20140305 then
	local pid = 0x0369
elseif packet_version >= 20140226 then
	local pid = 0x0369
elseif packet_version >= 20140219 then
	local pid = 0x0921
elseif packet_version >= 20140212 then
	local pid = 0x0934
elseif packet_version >= 20140205 then
	local pid = 0x0369
elseif packet_version >= 20140129 then
	local pid = 0x0369
elseif packet_version >= 20140122 then
	local pid = 0x0360
elseif packet_version >= 20140115 then
	local pid = 0x0369
elseif packet_version >= 20140108 then
	local pid = 0x0369
elseif packet_version >= 20131230 then
	local pid = 0x0871
elseif packet_version >= 20131223 then
	local pid = 0x0369
elseif packet_version >= 20131218 then
	local pid = 0x0369
elseif packet_version >= 20131211 then
	local pid = 0x0369
elseif packet_version >= 20131204 then
	local pid = 0x0928
elseif packet_version >= 20131127 then
	local pid = 0x0369
elseif packet_version >= 20131120 then
	local pid = 0x08a8
elseif packet_version >= 20131113 then
	local pid = 0x095d
elseif packet_version >= 20131108 then
	local pid = 0x0947
elseif packet_version >= 20131107 then
	local pid = 0x0947
elseif packet_version >= 20131106 then
	local pid = 0x0947
elseif packet_version >= 20131030 then
	local pid = 0x0369
elseif packet_version >= 20131023 then
	local pid = 0x0923
elseif packet_version >= 20131016 then
	local pid = 0x0962
elseif packet_version >= 20131008 then
	local pid = 0x07e4
elseif packet_version >= 20131002 then
	local pid = 0x0369
elseif packet_version >= 20130925 then
	local pid = 0x0369
elseif packet_version >= 20130917 then
	local pid = 0x0811
elseif packet_version >= 20130911 then
	local pid = 0x0369
elseif packet_version >= 20130904 then
	local pid = 0x0369
elseif packet_version >= 20130828 then
	local pid = 0x094f
elseif packet_version >= 20130821 then
	local pid = 0x0863
elseif packet_version >= 20130814 then
	local pid = 0x0874
elseif packet_version >= 20130807 then
	local pid = 0x0369
elseif packet_version >= 20130731 then
	local pid = 0x0878
elseif packet_version >= 20130724 then
	local pid = 0x0876
elseif packet_version >= 20130717 then
	local pid = 0x0918
elseif packet_version >= 20130710 then
	local pid = 0x0369
elseif packet_version >= 20130703 then
	local pid = 0x0369
elseif packet_version >= 20130626 then
	local pid = 0x0369
elseif packet_version >= 20130618 then
	local pid = 0x0889
elseif packet_version >= 20130612 then
	local pid = 0x0369
elseif packet_version >= 20130605 then
	local pid = 0x0369
elseif packet_version >= 20130529 then
	local pid = 0x0890
elseif packet_version >= 20130522 then
	local pid = 0x08a2
elseif packet_version >= 20130515 then
	local pid = 0x0369
elseif packet_version >= 20130508 then
	local pid = 0x0369
elseif packet_version >= 20130502 then
	local pid = 0x0369
elseif packet_version >= 20130424 then
	local pid = 0x0369
elseif packet_version >= 20130417 then
	local pid = 0x0369
elseif packet_version >= 20130410 then
	local pid = 0x0939
elseif packet_version >= 20130403 then
	local pid = 0x0369
elseif packet_version >= 20130327 then
	local pid = 0x0955
elseif packet_version >= 20130320 then
	local pid = 0x088e
elseif packet_version >= 20130313 then
	local pid = 0x0369
elseif packet_version >= 20130306 then
	local pid = 0x0898
elseif packet_version >= 20130227 then
	local pid = 0x0967
elseif packet_version >= 20130220 then
	local pid = 0x0369
elseif packet_version >= 20130215 then
	local pid = 0x0369
elseif packet_version >= 20130206 then
	local pid = 0x0369
elseif packet_version >= 20130130 then
	local pid = 0x0885
elseif packet_version >= 20130121 then
	local pid = 0x0802
elseif packet_version >= 20130116 then
	local pid = 0x0863
elseif packet_version >= 20130115 then
	local pid = 0x0863
elseif packet_version >= 20130109 then
	local pid = 0x0437
elseif packet_version >= 20130107 then
	local pid = 0x0369
elseif packet_version >= 20130103 then
	local pid = 0x0369
elseif packet_version >= 20121227 then
	local pid = 0x087a
elseif packet_version >= 20121218 then
	local pid = 0x0369
elseif packet_version >= 20121212 then
	local pid = 0x085c
elseif packet_version >= 20121205 then
	local pid = 0x0954
elseif packet_version >= 20121128 then
	local pid = 0x0931
elseif packet_version >= 20121121 then
	local pid = 0x08aa
elseif packet_version >= 20121114 then
	local pid = 0x0898
elseif packet_version >= 20121107 then
	local pid = 0x089a
elseif packet_version >= 20121031 then
	local pid = 0x0369
elseif packet_version >= 20121024 then
	local pid = 0x0817
elseif packet_version >= 20121017 then
	local pid = 0x0369
elseif packet_version >= 20121011 then
	local pid = 0x08a1
elseif packet_version >= 20121010 then
	local pid = 0x08a1
elseif packet_version >= 20120926 then
	local pid = 0x08a4
elseif packet_version >= 20120925 then
	local pid = 0x08a4
elseif packet_version >= 20120919 then
	local pid = 0x0369
elseif packet_version >= 20120911 then
	local pid = 0x0959
elseif packet_version >= 20120905 then
	local pid = 0x0967
elseif packet_version >= 20120830 then
	local pid = 0x0369
elseif packet_version >= 20120822 then
	local pid = 0x08ab
elseif packet_version >= 20120814 then
	local pid = 0x0868
elseif packet_version >= 20120808 then
	local pid = 0x0369
elseif packet_version >= 20120801 then
	local pid = 0x0890
elseif packet_version >= 20120724 then
	local pid = 0x0945
elseif packet_version >= 20120716 then
	local pid = 0x0369
elseif packet_version >= 20120712 then
	local pid = 0x0436
elseif packet_version >= 20120710 then
	local pid = 0x0436
elseif packet_version >= 20090617 then
	local pid = 0x0089
elseif packet_version >= 20090107 then
	local pid = 0x0089
elseif packet_version >= 20070212 then
	local pid = 0x0089
elseif packet_version >= 20070108 then
	local pid = 0x0089
elseif packet_version >= 20070102 then
	local pid = 0x0089
elseif packet_version >= 20060327 then
	local pid = 0x0089
elseif packet_version >= 20060102 then
	local pid = 0x0089
elseif packet_version >= 20051010 then
	local pid = 0x0089
elseif packet_version >= 20050719 then
	local pid = 0x0089
elseif packet_version >= 20050718 then
	local pid = 0x0089
elseif packet_version >= 20050628 then
	local pid = 0x0089
elseif packet_version >= 20050509 then
	local pid = 0x0089
elseif packet_version >= 20050411 then
	local pid = 0x0089
elseif packet_version >= 20050110 then
	local pid = 0x0089
elseif packet_version >= 20050104 then
	local pid = 0x0089
elseif packet_version >= 20050103 then
	local pid = 0x0089
elseif packet_version >= 20041220 then
	local pid = 0x0089
elseif packet_version >= 20041216 then
	local pid = 0x0089
elseif packet_version >= 20041129 then
	local pid = 0x0089
elseif packet_version >= 20041025 then
	local pid = 0x0089
elseif packet_version >= 20041005 then
	local pid = 0x0089
elseif packet_version >= 20040920 then
	local pid = 0x0089
elseif packet_version >= 20040906 then
	local pid = 0x0089
elseif packet_version >= 20040809 then
	local pid = 0x0089
elseif packet_version >= 20040804 then
	local pid = 0x0089
elseif packet_version >= 20040726 then
	local pid = 0x0089
elseif packet_version >= 20040107 then
	local pid = 0x0089
elseif packet_version >= 0 then
	local pid = 0x0089
end

local CZ_REQUEST_ACT = {
	_id = pid,
	_length = 0,
	_buffer = nil
}


function CZ_REQUEST_ACT.new(o)
	o = o or CZ_REQUEST_ACT
	setmetatable(o, self)
	self.__index = self
	return o
end

function CZ_REQUEST_ACT.serialize()

end

return CZ_REQUEST_ACT

