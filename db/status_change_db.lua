---------------------------------------------------------------------------
--       _   _            _                                              --
--      | | | |          (_)                                             --
--      | |_| | ___  _ __ _ _______  _ __                                --
--      |  _  |/ _ \| '__| |_  / _ \| '_  \                              --
--      | | | | (_) | |  | |/ / (_) | | | |                              --
--      \_| |_/\___/|_|  |_/___\___/|_| |_|                              --
---------------------------------------------------------------------------
-- This file is part of Horizon (c).
-- Copyright (c) 2018 Horizon Dev Team.
--
-- Base Author - Sagun K. (sagunxp@gmail.com)
--
-- This library is free software; you can redistribute it and/or modify
-- it under the terms of the GNU General Public License as published by
-- the Free Software Foundation, either version 3 of the License, or
-- (at your option) any later version.
--
-- This library is distributed in the hope that it will be useful
-- but WITHOUT ANY WARRANTY; without even the implied warranty of
-- MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
-- GNU General Public License for more details.
--
-- You should have received a copy of the GNU General Public License,
-- along with this library.  If not, see <http =--www.gnu.org/licenses/>.
---------------------------------------------------------------------------
--- Status Change Database.
---------------------------------------------------------------------------

status_change_db = {
--[[*************************************************************************
 ************* Entry structure ********************************************
 **************************************************************************
SC_TYPE = {
	// ================ Optional fields ===============================
	Visible =           (bool) SC can be visible for all players
	Flags = {
		NoDeathReset =      (bool) SC cannot be removed by death.
		NoSave =            (bool) SC cannot be saved.
		NoDispelReset =     (bool) SC cannot be reset by dispell.
		NoClearanceReset =  (bool) SC cannot be reset by clearance.
		Buff =              (bool) SC considered as buff and be removed by Hermode and etc.
		Debuff =            (bool) SC considered as debuff and be removed by Gospel and etc.
		NoMadoReset =       (bool) SC cannot be reset when MADO Gear is taken off.
		NoAllReset =        (bool) SC cannot be reset by 'sc_end SC_ALL' and status change clear.
		NoBoss =            (bool) SC cannot be applied to boss monsters.
	},
	Icon =              (string, defaults to SI_BLANK) The status icon attached to the SC
},
*************************************************************************--]]
SC_PROVOKE = {
	Flags = {
		Debuff = true,
		NoBoss = true,
	},
	Icon = "SI_PROVOKE"
},
SC_ENDURE = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_ENDURE"
},
SC_HIDING = {
	Flags = {
		NoDispelReset = true,
	},
	Icon = "SI_HIDING"
},
SC_CLOAKING = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
	},
	Icon = "SI_CLOAKING"
},
SC_TWOHANDQUICKEN = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_TWOHANDQUICKEN"
},
SC_CONCENTRATION = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_CONCENTRATION"
},
SC_ENCHANTPOISON = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_ENCHANTPOISON"
},
SC_POISONREACT = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_POISONREACT"
},
SC_QUAGMIRE = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Debuff = true,
	},
	Icon = "SI_QUAGMIRE"
},
SC_ANGELUS = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_ANGELUS"
},
SC_BLESSING = {
	Flags = {
		Buff = true,
		NoMadoReset = true,
		NoBoss = true,
	},
	Icon = "SI_BLESSING"
},
SC_INC_AGI = {
	Flags = {
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_INC_AGI"
},
SC_DEC_AGI = {
	Flags = {
		NoSave = true,
		Debuff = true,
		NoBoss = true,
	},
	Icon = "SI_DEC_AGI"
},
SC_SLOWPOISON = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SLOWPOISON"
},
SC_IMPOSITIO = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_IMPOSITIO"
},
SC_SUFFRAGIUM = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SUFFRAGIUM"
},
SC_ASPERSIO = {
	Flags = {
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_ASPERSIO"
},
SC_BENEDICTIO = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_BENEDICTIO"
},
SC_KYRIE = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_KYRIE"
},
SC_MAGNIFICAT = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_MAGNIFICAT"
},
SC_GLORIA = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_GLORIA"
},
SC_LEXAETERNA = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_LEXAETERNA"
},
SC_ADRENALINE = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_ADRENALINE"
},
SC_WEAPONPERFECT = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_WEAPONPERFECT"
},
SC_OVERTHRUST = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_OVERTHRUST"
},
SC_MAXIMIZEPOWER = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_MAXIMIZE"
},
SC_TRICKDEAD = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_TRICKDEAD"
},
SC_SHOUT = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SHOUT"
},
SC_ENERGYCOAT = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_ENERGYCOAT"
},
SC_ATTHASTE_POTION1 = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ATTHASTE_POTION1"
},
SC_ATTHASTE_POTION2 = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ATTHASTE_POTION2"
},
SC_ATTHASTE_POTION3 = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_ATTHASTE_POTION3"
},
SC_MOVHASTE_POTION = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MOVHASTE_POTION"
},
SC_BARRIER = {
	Flags = {
		Buff = true,
	},
},
SC_NOEQUIPWEAPON = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NOEQUIPWEAPON"
},
SC_NOEQUIPSHIELD = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NOEQUIPSHIELD"
},
SC_NOEQUIPARMOR = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NOEQUIPARMOR"
},
SC_NOEQUIPHELM = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NOEQUIPHELM"
},
SC_PROTECTWEAPON = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROTECTWEAPON"
},
SC_PROTECTSHIELD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROTECTSHIELD"
},
SC_PROTECTARMOR = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROTECTARMOR"
},
SC_PROTECTHELM = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROTECTHELM"
},
SC_AUTOGUARD = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_AUTOGUARD"
},
SC_REFLECTSHIELD = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_REFLECTSHIELD"
},
SC_DEVOTION = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
},
SC_PROVIDENCE = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_PROVIDENCE"
},
SC_DEFENDER = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_DEFENDER"
},
SC_MAGICROD = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_AUTOSPELL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_AUTOSPELL"
},
SC_SPEARQUICKEN = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SPEARQUICKEN"
},
SC_BLADESTOP = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_EXPLOSIONSPIRITS = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_EXPLOSIONSPIRITS"
},
SC_STEELBODY = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_STEELBODY"
},
SC_PROPERTYFIRE = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYFIRE"
},
SC_PROPERTYWATER = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYWATER"
},
SC_PROPERTYWIND = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYWIND"
},
SC_PROPERTYGROUND = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYGROUND"
},
SC_STOP = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_STOP"
},
SC_PROPERTYUNDEAD = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYUNDEAD"
},
SC_AURABLADE = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_AURABLADE"
},
SC_PARRYING = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PARRYING"
},
SC_LKCONCENTRATION = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_LKCONCENTRATION"
},
SC_TENSIONRELAX = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_TENSIONRELAX"
},
SC_BERSERK = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_BERSERK"
},
SC_SACRIFICE = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_GOSPEL = {
	Flags = {
		NoSave = true,
		Debuff = true,
	},
},
SC_SAFETYWALL = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_PNEUMA = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_ASSUMPTIO = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_ASSUMPTIO"
},
SC_BASILICA = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_VOLCANO = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_GROUNDMAGIC"
},
SC_DELUGE = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_GROUNDMAGIC"
},
SC_VIOLENTGALE = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_GROUNDMAGIC"
},
SC_MAGICPOWER = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_MAGICPOWER"
},
SC_EDP = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_EDP"
},
SC_TRUESIGHT = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_TRUESIGHT"
},
SC_WINDWALK = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_WINDWALK"
},
SC_MELTDOWN = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_MELTDOWN"
},
SC_CARTBOOST = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_CARTBOOST"
},
SC_BLOODING = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_BLOODING"
},
SC_JOINTBEAT = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Debuff = true,
	},
	Icon = "SI_JOINTBEAT"
},
SC_MINDBREAKER = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
},
SC_MEMORIZE = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
},
SC_FOGWALL = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
		NoBoss = true,
	},
},
SC_SPIDERWEB = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Debuff = true,
	},
},
SC_SUB_WEAPONPROPERTY = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
},
SC_RUN = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_RUN"
},
SC_STRUP = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_STRUP"
},
SC_PROPERTYDARK = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYDARK"
},
SC_ADRENALINE2 = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_ADRENALINE2"
},
SC_PROPERTYTELEKINESIS = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYTELEKINESIS"
},
SC_SOULLINK = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SOULLINK"
},
SC_PLUSATTACKPOWER = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_PLUSATTACKPOWER"
},
SC_PLUSMAGICPOWER = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_PLUSMAGICPOWER"
},
SC_KAITE = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_KAITE"
},
SC_KAAHI = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_KAAHI"
},
SC_KAUPE = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_KAUPE"
},
SC_ONEHANDQUICKEN = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ONEHANDQUICKEN"
},
SC_PRESERVE = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_PRESERVE"
},
SC_CHASEWALK = {
	Flags = {
		NoDispelReset = true,
	},
},
SC_CHASEWALK2 = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_INCSTR"
},
SC_MOVESLOW_POTION = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MOVESLOW_POTION"
},
SC_DOUBLECASTING = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_DOUBLECASTING"
},
SC_GRAVITATION = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
		NoBoss = true,
	},
},
SC_OVERTHRUSTMAX = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_OVERTHRUSTMAX"
},
SC_TAROTCARD = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Debuff = true,
	},
	Icon = "SI_TAROTCARD"
},
SC_CR_SHRINK = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_CR_SHRINK"
},
SC_WZ_SIGHTBLASTER = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_WZ_SIGHTBLASTER"
},
SC_RG_CCONFINE_M = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_RG_CCONFINE_M"
},
SC_RG_CCONFINE_S = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_RG_CCONFINE_S"
},
SC_NJ_UTSUSEMI = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NJ_UTSUSEMI"
},
SC_NJ_BUNSINJYUTSU = {
	Flags = {
		NoSave = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NJ_BUNSINJYUTSU"
},
SC_NJ_SUITON = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Debuff = true,
		NoBoss = true,
	},
	Icon = "SI_NJ_SUITON"
},
SC_FOOD_STR = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_STR"
},
SC_FOOD_AGI = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_AGI"
},
SC_FOOD_VIT = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_VIT"
},
SC_FOOD_DEX = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_DEX"
},
SC_FOOD_INT = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_INT"
},
SC_FOOD_LUK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_LUK"
},
SC_FOOD_BASICAVOIDANCE = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_BASICAVOIDANCE"
},
SC_FOOD_BASICHIT = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_BASICHIT"
},
SC_FOOD_CRITICALSUCCESSVALUE = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_FOOD_CRITICALSUCCESSVALUE"
},
SC_CASH_PLUSEXP = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_CASH_PLUSEXP"
},
SC_CASH_DEATHPENALTY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_CASH_DEATHPENALTY"
},
SC_CASH_RECEIVEITEM = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_CASH_RECEIVEITEM"
},
SC_CASH_BOSS_ALARM = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_CASH_BOSS_ALARM"
},
SC_FOOD_STR_CASH = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_STR_CASH"
},
SC_FOOD_AGI_CASH = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_AGI_CASH"
},
SC_FOOD_VIT_CASH = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_VIT_CASH"
},
SC_FOOD_DEX_CASH = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_DEX_CASH"
},
SC_FOOD_INT_CASH = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_INT_CASH"
},
SC_FOOD_LUK_CASH = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_FOOD_LUK_CASH"
},
SC_SAVAGE_STEAK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_SAVAGE_STEAK"
},
SC_COCKTAIL_WARG_BLOOD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_COCKTAIL_WARG_BLOOD"
},
SC_MINOR_BBQ = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_MINOR_BBQ"
},
SC_SIROMA_ICE_TEA = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_SIROMA_ICE_TEA"
},
SC_DROCERA_HERB_STEAMED = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_DROCERA_HERB_STEAMED"
},
SC_PUTTI_TAILS_NOODLES = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_PUTTI_TAILS_NOODLES"
},
SC_MELON_BOMB = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_MELON_BOMB"
},
SC_BANANA_BOMB_SITDOWN_POSTDELAY = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_BANANA_BOMB_SITDOWN_POSTDELAY"
},
SC_BANANA_BOMB = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_BANANA_BOMB"
},
SC_PROMOTE_HEALTH_RESERCH = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_PROMOTE_HEALTH_RESERCH"
},
SC_ENERGY_DRINK_RESERCH = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_ENERGY_DRINK_RESERCH"
},
SC_EXTRACT_WHITE_POTION_Z = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_VITATA_500 = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_EXTRACT_SALAMINE_JUICE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_BOOST500 = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_FULL_SWING_K = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_MANA_PLUS = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_MUSTLE_M = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_LIFE_FORCE_F = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_MER_FLEE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MER_FLEE"
},
SC_MER_ATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MER_ATK"
},
SC_MER_HP = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MER_HP"
},
SC_MER_SP = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MER_SP"
},
SC_MER_HIT = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MER_HIT"
},
SC_SLOWCAST = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SLOWCAST"
},
SC_CRITICALWOUND = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_CRITICALWOUND"
},
SC_MOVHASTE_HORSE = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MOVHASTE_HORSE"
},
SC_PROTECT_DEF = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROTECT_DEF"
},
SC_PROTECT_MDEF = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PROTECT_MDEF"
},
SC_HEALPLUS = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_HEALPLUS"
},
SC_S_LIFEPOTION = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_S_LIFEPOTION"
},
SC_L_LIFEPOTION = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_L_LIFEPOTION"
},
SC_CRITICALPERCENT = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_CRITICALPERCENT"
},
SC_PLUSAVOIDVALUE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_PLUSAVOIDVALUE"
},
SC_ATKER_ASPD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ATKER_ASPD"
},
SC_TARGET_ASPD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_TARGET_ASPD"
},
SC_ATKER_MOVESPEED = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ATKER_MOVESPEED"
},
SC_ATKER_BLOOD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ATKER_BLOOD"
},
SC_TARGET_BLOOD = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_TARGET_BLOOD"
},
SC_ARMOR_PROPERTY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ARMOR_PROPERTY"
},
SC_HELLPOWER = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_HELLPOWER"
},
SC_STEAMPACK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Debuff = true,
		NoMadoReset = true,
	},
	Icon = "SI_STEAMPACK"
},
SC_CASH_PLUSONLYJOBEXP = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_CASH_PLUSONLYJOBEXP"
},
SC_PARTYFLEE = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_PARTYFLEE"
},
SC_ANGEL_PROTECT = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ANGEL_PROTECT"
},
SC_ENCHANTBLADE = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_ENCHANTBLADE"
},
SC_DEATHBOUND = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_DEATHBOUND"
},
SC_REFRESH = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_REFRESH"
},
SC_GIANTGROWTH = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_GIANTGROWTH"
},
SC_STONEHARDSKIN = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_STONEHARDSKIN"
},
SC_VITALITYACTIVATION = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_VITALITYACTIVATION"
},
SC_FIGHTINGSPIRIT = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_FIGHTINGSPIRIT"
},
SC_ABUNDANCE = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_ABUNDANCE"
},
SC_EPICLESIS = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_EPICLESIS"
},
SC_ORATIO = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_ORATIO"
},
SC_LAUDAAGNUS = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_LAUDAAGNUS"
},
SC_LAUDARAMUS = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_LAUDARAMUS"
},
SC_CLOAKINGEXCEED = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_CLOAKINGEXCEED"
},
SC_HALLUCINATIONWALK = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_HALLUCINATIONWALK"
},
SC_HALLUCINATIONWALK_POSTDELAY = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_HALLUCINATIONWALK_POSTDELAY"
},
SC_RENOVATIO = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_RENOVATIO"
},
SC_WEAPONBLOCKING = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_WEAPONBLOCKING"
},
SC_ROLLINGCUTTER = {
	Visible = true,
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ROLLINGCUTTER"
},
SC_EXPIATIO = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_EXPIATIO"
},
SC_POISONINGWEAPON = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_POISONINGWEAPON"
},
SC_TOXIN = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_TOXIN"
},
SC_PARALYSE = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_PARALYSE"
},
SC_VENOMBLEED = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_VENOMBLEED"
},
SC_MAGICMUSHROOM = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_MAGICMUSHROOM"
},
SC_DEATHHURT = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_DEATHHURT"
},
SC_PYREXIA = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_PYREXIA"
},
SC_OBLIVIONCURSE = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_OBLIVIONCURSE"
},
SC_LEECHESEND = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_LEECHESEND"
},
SC_DUPLELIGHT = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_DUPLELIGHT"
},
SC_FEARBREEZE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_FEARBREEZE"
},
SC_ELECTRICSHOCKER = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_ELECTRICSHOCKER"
},
SC_MARSHOFABYSS = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_MARSHOFABYSS"
},
SC_RECOGNIZEDSPELL = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_RECOGNIZEDSPELL"
},
SC_WUGDASH = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_WUGDASH"
},
SC_WUGBITE = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoBoss = true,
	},
},
SC_CAMOUFLAGE = {
	Visible = true,
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_CAMOUFLAGE"
},
SC_ACCELERATION = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ACCELERATION"
},
SC_HOVERING = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_HOVERING"
},
SC_SUMMON1 = {
	Visible = true,
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPHERE_1"
},
SC_SUMMON2 = {
	Visible = true,
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPHERE_2"
},
SC_SUMMON3 = {
	Visible = true,
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPHERE_3"
},
SC_SUMMON4 = {
	Visible = true,
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPHERE_4"
},
SC_SUMMON5 = {
	Visible = true,
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPHERE_5"
},
SC_MVPCARD_TAOGUNKA = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		Debuff = true,
	},
	Icon = "SI_MVPCARD_TAOGUNKA"
},
SC_MVPCARD_MISTRESS = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		Debuff = true,
	},
	Icon = "SI_MVPCARD_MISTRESS"
},
SC_MVPCARD_ORCHERO = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		Debuff = true,
	},
	Icon = "SI_MVPCARD_ORCHERO"
},
SC_MVPCARD_ORCLORD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		Debuff = true,
	},
	Icon = "SI_MVPCARD_ORCLORD"
},
SC_OVERHEAT_LIMITPOINT = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_OVERHEAT_LIMITPOINT"
},
SC_OVERHEAT = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_OVERHEAT"
},
SC_SHAPESHIFT = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SHAPESHIFT"
},
SC_INFRAREDSCAN = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_INFRAREDSCAN"
},
SC_MAGNETICFIELD = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_MAGNETICFIELD"
},
SC_NEUTRALBARRIER = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NEUTRALBARRIER"
},
SC_NEUTRALBARRIER_MASTER = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_NEUTRALBARRIER_MASTER"
},
SC_STEALTHFIELD_MASTER = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_STEALTHFIELD_MASTER"
},
SC_MANU_ATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MANU_ATK"
},
SC_MANU_DEF = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MANU_DEF"
},
SC_SPL_ATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPL_ATK"
},
SC_SPL_DEF = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPL_DEF"
},
SC__REPRODUCE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_REPRODUCE"
},
SC_MANU_MATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MANU_MATK"
},
SC_SPL_MATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SPL_MATK"
},
SC_STR_SCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		Debuff = true,
	},
	Icon = "SI_STR_SCROLL"
},
SC_INT_SCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		Debuff = true,
	},
	Icon = "SI_INT_SCROLL"
},
SC_FORCEOFVANGUARD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_FORCEOFVANGUARD"
},
SC_BUCHEDENOEL = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		Debuff = true,
	},
	Icon = "SI_BUCHEDENOEL"
},
SC__AUTOSHADOWSPELL = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_AUTOSHADOWSPELL"
},
SC__SHADOWFORM = {
	Visible = true,
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SHADOWFORM"
},
SC_RAID = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_SHIELDSPELL_DEF = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SHIELDSPELL_DEF"
},
SC_SHIELDSPELL_MDEF = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SHIELDSPELL_MDEF"
},
SC_SHIELDSPELL_REF = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SHIELDSPELL_REF"
},
SC__BODYPAINT = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_BODYPAINT"
},
SC_EXEEDBREAK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_EXEEDBREAK"
},
SC_ADORAMUS = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_ADORAMUS"
},
SC_PRESTIGE = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_PRESTIGE"
},
SC__INVISIBILITY = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_INVISIBILITY"
},
SC__DEADLYINFECT = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_DEADLYINFECT"
},
SC_BANDING = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_BANDING"
},
SC_BANDING_DEFENCE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_BANDING_DEFENCE"
},
SC_EARTHDRIVE = {
	Flags = {
		NoDispelReset = true,
		Buff = true,
	},
	Icon = "SI_EARTHDRIVE"
},
SC_INSPIRATION = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_INSPIRATION"
},
SC__ENERVATION = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_ENERVATION"
},
SC__GROOMY = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_GROOMY"
},
SC_RAISINGDRAGON = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_RAISINGDRAGON"
},
SC__IGNORANCE = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_IGNORANCE"
},
SC__LAZINESS = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_LAZINESS"
},
SC_LIGHTNINGWALK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_LIGHTNINGWALK"
},
SC_ACARAJE = {
	Flags = {
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ACARAJE"
},
SC__UNLUCKY = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_UNLUCKY"
},
SC_CURSEDCIRCLE_ATKER = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_CURSEDCIRCLE_ATKER"
},
SC_CURSEDCIRCLE_TARGET = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_CURSEDCIRCLE_TARGET"
},
SC__WEAKNESS = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_WEAKNESS"
},
SC_CRESCENTELBOW = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_CRESCENTELBOW"
},
SC__STRIPACCESSARY = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_STRIPACCESSARY"
},
SC__MANHOLE = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_MANHOLE"
},
SC__BLOODYLUST = {
	Flags = {
		Debuff = true,
	},
},
SC_SWING = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SWINGDANCE"
},
SC_SYMPHONY_LOVE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SYMPHONYOFLOVERS"
},
SC_PROPERTYWALK = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_PROPERTYWALK"
},
SC_SPELLFIST = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SPELLFIST"
},
SC_NETHERWORLD = {
	Flags = {
		Buff = true,
		NoBoss = true,
	},
	Icon = "SI_NETHERWORLD"
},
SC_SIREN = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SIREN"
},
SC_DEEP_SLEEP = {
	Visible = true,
	Flags = {
		NoSave = true,
		Debuff = true,
		NoBoss = true,
	},
	Icon = "SI_DEEPSLEEP"
},
SC_SIRCLEOFNATURE = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SIRCLEOFNATURE"
},
SC_GLOOMYDAY = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_GLOOMYDAY"
},
SC_GLOOMYDAY_SK = {
	Flags = {
		Buff = true,
	},
},
SC_SONG_OF_MANA = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SONG_OF_MANA"
},
SC_DANCE_WITH_WUG = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_DANCEWITHWUG"
},
SC_RUSH_WINDMILL = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_RUSHWINDMILL"
},
SC_ECHOSONG = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ECHOSONG"
},
SC_HARMONIZE = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_HARMONIZE"
},
SC_MOONLIT_SERENADE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MOONLITSERENADE"
},
SC_SATURDAY_NIGHT_FEVER = {
	Flags = {
		Buff = true,
	},
	Icon = "SI_SATURDAYNIGHTFEVER"
},
SC_SITDOWN_FORCE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
},
SC_ANALYZE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_ANALYZE"
},
SC_LERADS_DEW = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_LERADSDEW"
},
SC_MELODYOFSINK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_MELODYOFSINK"
},
SC_BEYOND_OF_WARCRY = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_WARCRYOFBEYOND"
},
SC_UNLIMITED_HUMMING_VOICE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_UNLIMITEDHUMMINGVOICE"
},
SC_WARMER = {
	Flags = {
		NoSave = true,
	},
},
SC_VENOMIMPRESS = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
	},
	Icon = "SI_VENOMIMPRESS"
},
SC_FROSTMISTY = {
	Visible = true,
	Flags = {
		Debuff = true,
		NoBoss = true,
	},
	Icon = "SI_FROSTMISTY"
},
SC_STOMACHACHE = {
	Flags = {
		Debuff = true,
	},
	Icon = "SI_STOMACHACHE"
},
SC_MYSTERIOUS_POWDER = {
	Flags = {
		Debuff = true,
	},
	Icon = "SI_MYSTERIOUS_POWDER"
},
SC_WATER_BARRIER = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_WATER_BARRIER"
},
SC_ZEPHYR = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_ZEPHYR"
},
SC_POWER_OF_GAIA = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_POWER_OF_GAIA"
},
SC_FIRE_INSIGNIA = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_FIRE_INSIGNIA"
},
SC_WATER_INSIGNIA = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_WATER_INSIGNIA"
},
SC_WIND_INSIGNIA = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_WIND_INSIGNIA"
},
SC_EARTH_INSIGNIA = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_EARTH_INSIGNIA"
},
SC_MORA_BUFF = {
	Flags = {
		NoSave = true,
	},
	Icon = "SI_MORA_BUFF"
},
SC_NEEDLE_OF_PARALYZE = {
	Flags = {
		NoDeathReset = true,
		NoBoss = true,
	},
	Icon = "SI_NEEDLE_OF_PARALYZE"
},
SC_PAIN_KILLER = {
	Flags = {
		NoDeathReset = true,
	},
	Icon = "SI_PAIN_KILLER"
},
SC_G_LIFEPOTION = {
	Flags = {
		NoDispelReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_G_LIFEPOTION"
},
SC_LIGHT_OF_REGENE = {
	Flags = {
		NoDeathReset = true,
	},
	Icon = "SI_LIGHT_OF_REGENE"
},
SC_MAGIC_CANDY = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
		NoMadoReset = true,
	},
	Icon = "SI_MAGIC_CANDY"
},
SC_MONSTER_TRANSFORM = {
	Visible = true,
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_MONSTER_TRANSFORM"
},
SC_MTF_ASPD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_MTF_RANGEATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_MTF_MATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_MTF_MLEATKED = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_MTF_CRIDAMAGE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_FULL_THROTTLE = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_FULL_THROTTLE"
},
SC_REBOUND = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_REBOUND"
},
SC_TELEKINESIS_INTENSE = {
	Flags = {
		NoSave = true,
		Buff = true,
	},
	Icon = "SI_TELEKINESIS_INTENSE"
},
SC_SKELSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_DISTRUCTIONSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_ROYALSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_IMMUNITYSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_MYSTICSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_BATTLESCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_ARMORSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_FREYJASCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_SOULSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoMadoReset = true,
	},
},
SC_QUEST_BUFF1 = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_QUEST_BUFF1"
},
SC_QUEST_BUFF2 = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_QUEST_BUFF2"
},
SC_QUEST_BUFF3 = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_QUEST_BUFF3"
},
SC_GEFFEN_MAGIC1 = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_GEFFEN_MAGIC1"
},
SC_GEFFEN_MAGIC2 = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_GEFFEN_MAGIC2"
},
SC_GEFFEN_MAGIC3 = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_GEFFEN_MAGIC3"
},
SC_OVERLAPEXPUP = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_OVERLAPEXPUP"
},
SC_M_LIFEPOTION = {
	Flags = {
		NoDispelReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_M_LIFEPOTION"
},
SC_LEADERSHIP = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
},
SC_GLORYWOUNDS = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
},
SC_SOULCOLD = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
},
SC_HAWKEYES = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
},
SC_GDSKILL_REGENERATION = {
	Flags = {
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_ORCISH = {
	Flags = {
		NoSave = true,
	},
},
SC_WEIGHTOVER50 = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_WEIGHTOVER50"
},
SC_WEIGHTOVER90 = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_WEIGHTOVER90"
},
SC_WEDDING = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_XMAS = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_SUMMER = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_NOCHAT = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
},
SC_FUSION = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_EARTHSCROLL = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_EARTHSCROLL"
},
SC_STORMKICK_READY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_STORMKICK_ON"
},
SC_DOWNKICK_READY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_DOWNKICK_ON"
},
SC_COUNTERKICK_READY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_COUNTER_ON"
},
SC_TURNKICK_READY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_TURNKICK_ON"
},
SC_DODGE_READY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
	Icon = "SI_DODGE_ON"
},
SC_JAILED = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
},
SC_AUTOTRADE = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_DANCING = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
	},
},
SC_WHISTLE = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_ASSNCROS = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_POEMBRAGI = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_APPLEIDUN = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_HUMMING = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_DONTFORGETME = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_FORTUNE = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_SERVICEFORYOU = {
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_INCHIT = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
	},
},
SC_PUSH_CART = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_ON_PUSH_CART"
},
SC_COLD = {
	Visible = true,
	Flags = {
		NoBoss = true,
	},
	Icon = "SI_COLD"
},
SC_BLOOD_SUCKER = {
	Visible = true,
	Flags = {
	},
	Icon = "SI_BLOODSUCKER"
},
SC_MOONSTAR = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_MOONSTAR"
},
SC_SUPER_STAR = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_SUPER_STAR"
},
SC_STRANGELIGHTS = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_STRANGELIGHTS"
},
SC_DECORATION_OF_MUSIC = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_DECORATION_OF_MUSIC"
},
SC_LJOSALFAR = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_LJOSALFAR"
},
SC_MERMAID_LONGING = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_MERMAID_LONGING"
},
SC_HAT_EFFECT = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_HAT_EFFECT"
},
SC_FLOWERSMOKE = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_FLOWERSMOKE"
},
SC_FSTONE = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_FSTONE"
},
SC_HAPPINESS_STAR = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_HAPPINESS_STAR"
},
SC_MAPLE_FALLS = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_MAPLE_FALLS"
},
SC_TIME_ACCESSORY = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_TIME_ACCESSORY"
},
SC_MAGICAL_FEATHER = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_MAGICAL_FEATHER"
},
SC_BLOSSOM_FLUTTERING = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_BLOSSOM_FLUTTERING"
},
SC_SPRITEMABLE = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_SPRITEMABLE"
},
SC_BITESCAR = {
	Flags = {
		NoDispelReset = true,
		NoBoss = true,
	},
	Icon = "SI_BITESCAR"
},
SC_CLAN_INFO = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoSave = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_CLAN_INFO"
},
SC_ALL_RIDING = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoAllReset = true,
	},
	Icon = "SI_ALL_RIDING"
},
SC_DAILYSENDMAILCNT = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoMadoReset = true,
		NoAllReset = true,
	},
	Icon = "SI_DAILYSENDMAILCNT"
},
SC_ATTHASTE_INFINITY = {
	Icon = "SI_ATTHASTE_INFINITY"
},
SC_PYROCLASTIC = {
	Icon = "SI_PYROCLASTIC"
},
SC_VACUUM_EXTREME = {
	Icon = "SI_VACUUM_EXTREME"
},
SC_MOON_COMFORT = {
	Icon = "SI_MOON_COMFORT"
},
SC_OFFERTORIUM = {
	Icon = "SI_OFFERTORIUM"
},
SC_WIND_STEP = {
	Icon = "SI_WIND_STEP"
},
SC_STEALTHFIELD = {
	Icon = "SI_STEALTHFIELD"
},
SC_INVINCIBLE = {
	Icon = "SI_INVINCIBLE"
},
SC_CURSED_SOIL = {
	Icon = "SI_CURSED_SOIL"
},
SC_RIDING = {
	Icon = "SI_RIDING"
},
SC_GRANITIC_ARMOR = {
	Icon = "SI_GRANITIC_ARMOR"
},
SC_CURSED_SOIL_OPTION = {
	Icon = "SI_CURSED_SOIL_OPTION"
},
SC_MOVHASTE_INFINITY = {
	Icon = "SI_MOVHASTE_INFINITY"
},
SC_GOLDENE_FERSE = {
	Icon = "SI_GOLDENE_FERSE"
},
SC_GS_ACCURACY = {
	Icon = "SI_GS_ACCURACY"
},
SC_GENSOU = {
	Icon = "SI_GENSOU"
},
SC_MAGMA_FLOW = {
	Icon = "SI_MAGMA_FLOW"
},
SC_SHRIMP = {
	Icon = "SI_SHRIMP"
},
SC_SPELLBOOK1 = {
	Icon = "SI_SPELLBOOK1"
},
SC_UNLIMIT = {
	Icon = "SI_UNLIMIT"
},
SC_AQUAPLAY_OPTION = {
	Icon = "SI_AQUAPLAY_OPTION"
},
SC_GS_GATLINGFEVER = {
	Icon = "SI_GS_GATLINGFEVER"
},
SC_ROCK_CRUSHER_ATK = {
	Icon = "SI_ROCK_CRUSHER_ATK"
},
SC_HEATER_OPTION = {
	Icon = "SI_HEATER_OPTION"
},
SC_FALLENEMPIRE = {
	Icon = "SI_FALLENEMPIRE"
},
SC_MANDRAGORA = {
	Icon = "SI_MANDRAGORA"
},
SC_ANKLESNARE = {
	Icon = "SI_ANKLESNARE"
},
SC_KAIZEL = {
	Icon = "SI_KAIZEL"
},
SC_DC_WINKCHARM = {
	Icon = "SI_DC_WINKCHARM"
},
SC_WUGRIDER = {
	Icon = "SI_WUGRIDER"
},
SC_SPELLBOOK7 = {
	Icon = "SI_SPELLBOOK7"
},
SC_CATNIPPOWDER = {
	Icon = "SI_CATNIPPOWDER"
},
SC_TIDAL_WEAPON_OPTION = {
	Icon = "SI_TIDAL_WEAPON_OPTION"
},
SC_ANGRIFFS_MODUS = {
	Icon = "SI_ANGRIFFS_MODUS"
},
SC_AUTOBERSERK = {
	Icon = "SI_AUTOBERSERK"
},
SC_CRUCIS = {
	Icon = "SI_CRUCIS"
},
SC_SECRAMENT = {
	Icon = "SI_SECRAMENT"
},
SC_CRUSHSTRIKE = {
	Icon = "SI_CRUSHSTRIKE"
},
SC_SPELLBOOK3 = {
	Icon = "SI_SPELLBOOK3"
},
SC_BLAST = {
	Icon = "SI_BLAST"
},
SC_IZAYOI = {
	Icon = "SI_IZAYOI"
},
SC_ODINS_POWER = {
	Icon = "SI_ODINS_POWER"
},
SC_TING = {
	Icon = "SI_TING"
},
SC_SIT = {
	Icon = "SI_SIT"
},
SC_GS_MADNESSCANCEL = {
	Icon = "SI_GS_MADNESSCANCEL"
},
SC_SV_ROOTTWIST = {
	Icon = "SI_SV_ROOTTWIST"
},
SC_COOLER = {
	Icon = "SI_COOLER"
},
SC_WIND_STEP_OPTION = {
	Icon = "SI_WIND_STEP_OPTION"
},
SC_RESIST_PROPERTY_GROUND = {
	Icon = "SI_RESIST_PROPERTY_GROUND"
},
SC_ILLUSIONDOPING = {
	Icon = "SI_ILLUSIONDOPING"
},
SC_KO_JYUMONJIKIRI = {
	Icon = "SI_KO_JYUMONJIKIRI"
},
SC_PHI_DEMON = {
	Icon = "SI_PHI_DEMON"
},
SC_KYOUGAKU = {
	Icon = "SI_KYOUGAKU"
},
SC_KAGEMUSYA = {
	Icon = "SI_KAGEMUSYA"
},
SC_SPELLBOOK6 = {
	Icon = "SI_SPELLBOOK6"
},
SC_BLAST_OPTION = {
	Icon = "SI_BLAST_OPTION"
},
SC_DARKCROW = {
	Icon = "SI_DARKCROW"
},
SC_PYROTECHNIC = {
	Icon = "SI_PYROTECHNIC"
},
SC_STAR_COMFORT = {
	Icon = "SI_STAR_COMFORT"
},
SC_LG_REFLECTDAMAGE = {
	Icon = "SI_LG_REFLECTDAMAGE"
},
SC_GENTLETOUCH_REVITALIZE = {
	Icon = "SI_GENTLETOUCH_REVITALIZE"
},
SC_HEATER = {
	Icon = "SI_HEATER"
},
SC_CIRCLE_OF_FIRE_OPTION = {
	Icon = "SI_CIRCLE_OF_FIRE_OPTION"
},
SC_ROCK_CRUSHER = {
	Icon = "SI_ROCK_CRUSHER"
},
SC_MOON = {
	Icon = "SI_MOON"
},
SC_PETROLOGY = {
	Icon = "SI_PETROLOGY"
},
SC_SUN_COMFORT = {
	Icon = "SI_SUN_COMFORT"
},
SC_TROPIC_OPTION = {
	Icon = "SI_TROPIC_OPTION"
},
SC_ARCLOUSEDASH = {
	Icon = "SI_ARCLOUSEDASH"
},
SC_STRIKING = {
	Icon = "SI_STRIKING"
},
SC_AQUAPLAY = {
	Icon = "SI_AQUAPLAY"
},
SC_WATER_DROP = {
	Icon = "SI_WATER_DROP"
},
SC_GM_BATTLE2 = {
	Icon = "SI_GM_BATTLE2"
},
SC_BROKENWEAPON = {
	Icon = "SI_BROKENWEAPON"
},
SC_CUP_OF_BOZA = {
	Icon = "SI_CUP_OF_BOZA"
},
SC_FRIGG_SONG = {
	Icon = "SI_FRIGG_SONG"
},
SC_POSTDELAY = {
	Icon = "SI_POSTDELAY"
},
SC_BROKENARMOR = {
	Icon = "SI_BROKENARMOR"
},
SC_DRESS_UP = {
	Icon = "SI_DRESS_UP"
},
SC_2011RWC = {
	Icon = "SI_2011RWC"
},
SC_WATER_SCREEN_OPTION = {
	Icon = "SI_WATER_SCREEN_OPTION"
},
SC_FIRE_CLOAK = {
	Icon = "SI_FIRE_CLOAK"
},
SC_FALCON = {
	Icon = "SI_FALCON"
},
SC_ZENKAI = {
	Icon = "SI_ZENKAI"
},
SC_CLAIRVOYANCE = {
	Icon = "SI_CLAIRVOYANCE"
},
SC_STONE_SHIELD = {
	Icon = "SI_STONE_SHIELD"
},
SC_FIRE_EXPANSION_TEAR_GAS = {
	Icon = "SI_FIRE_EXPANSION_TEAR_GAS"
},
SC_ZANGETSU = {
	Icon = "SI_ZANGETSU"
},
SC_RESIST_PROPERTY_WIND = {
	Icon = "SI_RESIST_PROPERTY_WIND"
},
SC_FLASHCOMBO = {
	Icon = "SI_FLASHCOMBO"
},
SC_GUST_OPTION = {
	Icon = "SI_GUST_OPTION"
},
SC_GENTLETOUCH_ENERGYGAIN = {
	Icon = "SI_GENTLETOUCH_ENERGYGAIN"
},
SC_PYROTECHNIC_OPTION = {
	Icon = "SI_PYROTECHNIC_OPTION"
},
SC_CIRCLE_OF_FIRE = {
	Icon = "SI_CIRCLE_OF_FIRE"
},
SC_DEVIL1 = {
	Icon = "SI_DEVIL1"
},
SC_GS_ADJUSTMENT = {
	Icon = "SI_GS_ADJUSTMENT"
},
SC_SPELLBOOK5 = {
	Icon = "SI_SPELLBOOK5"
},
SC_UPHEAVAL_OPTION = {
	Icon = "SI_UPHEAVAL_OPTION"
},
SC_SUHIDE = {
	Icon = "SI_SUHIDE"
},
SC_NJ_NEN = {
	Icon = "SI_NJ_NEN"
},
SC_VOLCANIC_ASH = {
	Icon = "SI_VOLCANIC_ASH"
},
SC_KYOMU = {
	Icon = "SI_KYOMU"
},
SC_WILD_STORM = {
	Icon = "SI_WILD_STORM"
},
SC_PETROLOGY_OPTION = {
	Icon = "SI_PETROLOGY_OPTION"
},
SC_SPELLBOOK2 = {
	Icon = "SI_SPELLBOOK2"
},
SC_MYSTICPOWDER = {
	Icon = "SI_MYSTICPOWDER"
},
SC_RESIST_PROPERTY_FIRE = {
	Icon = "SI_RESIST_PROPERTY_FIRE"
},
SC_COOLER_OPTION = {
	Icon = "SI_COOLER_OPTION"
},
SC_TROPIC = {
	Icon = "SI_TROPIC"
},
SC_UPHEAVAL = {
	Icon = "SI_UPHEAVAL"
},
SC_GENTLETOUCH_CHANGE = {
	Icon = "SI_GENTLETOUCH_CHANGE"
},
SC_WATER_DROP_OPTION = {
	Icon = "SI_WATER_DROP_OPTION"
},
SC_CHILLY_AIR_OPTION = {
	Icon = "SI_CHILLY_AIR_OPTION"
},
SC_FENRIR_CARD = {
	Icon = "SI_FENRIR_CARD"
},
SC_CLIENT_ONLY_EQUIP_ARROW = {
	Icon = "SI_CLIENT_ONLY_EQUIP_ARROW"
},
SC_STASIS = {
	Icon = "SI_STASIS"
},
SC_KINGS_GRACE = {
	Icon = "SI_KINGS_GRACE"
},
SC_OVERED_BOOST = {
	Icon = "SI_OVERED_BOOST"
},
SC_AKAITSUKI = {
	Icon = "SI_AKAITSUKI"
},
SC_MARIONETTE = {
	Icon = "SI_MARIONETTE"
},
SC_WIND_CURTAIN = {
	Icon = "SI_WIND_CURTAIN"
},
SC_ON_PUSH_CART = {
	Icon = "SI_ON_PUSH_CART"
},
SC_SPELLBOOK4 = {
	Icon = "SI_SPELLBOOK4"
},
SC_ILLUSION = {
	Icon = "SI_ILLUSION"
},
SC_WIND_CURTAIN_OPTION = {
	Icon = "SI_WIND_CURTAIN_OPTION"
},
SC_SU_STOOP = {
	Icon = "SI_SU_STOOP"
},
SC_SOLID_SKIN_OPTION = {
	Icon = "SI_SOLID_SKIN_OPTION"
},
SC_TUNAPARTY = {
	Icon = "SI_TUNAPARTY"
},
SC_RESIST_PROPERTY_WATER = {
	Icon = "SI_RESIST_PROPERTY_WATER"
},
SC_KG_KAGEHUMI = {
	Icon = "SI_KG_KAGEHUMI"
},
SC_SMA_READY = {
	Icon = "SI_SMA_READY"
},
SC_FIRE_CLOAK_OPTION = {
	Icon = "SI_FIRE_CLOAK_OPTION"
},
SC_WATER_SCREEN = {
	Icon = "SI_WATER_SCREEN"
},
SC_GM_BATTLE = {
	Icon = "SI_GM_BATTLE"
},
SC_GUST = {
	Icon = "SI_GUST"
},
SC_SOLID_SKIN = {
	Icon = "SI_SOLID_SKIN"
},
SC_CHILLY_AIR = {
	Icon = "SI_CHILLY_AIR"
},
SC_MEIKYOUSISUI = {
	Icon = "SI_MEIKYOUSISUI"
},
SC_FIRE_EXPANSION_SMOKE_POWDER = {
	Icon = "SI_FIRE_EXPANSION_SMOKE_POWDER"
},
SC_MARIONETTE_MASTER = {
	Icon = "SI_MARIONETTE_MASTER"
},
SC_FRESHSHRIMP = {
	Icon = "SI_FRESHSHRIMP"
},
SC_STONE_SHIELD_OPTION = {
	Icon = "SI_STONE_SHIELD_OPTION"
},
SC_SWORDREJECT = {
	Icon = "SI_SWORDREJECT"
},
SC_WILD_STORM_OPTION = {
	Icon = "SI_WILD_STORM_OPTION"
},
SC_BABY = {
	Icon = "SI_PROTECTEXP"
},
SC_EXTREMITYFIST2 = {
	Icon = "SI_EXTREMITYFIST"
},
SC_GN_CARTBOOST = {
	Icon = "SI_CARTSBOOST"
},
SC_MIRACLE = {
	Icon = "SI_SOULLINK"
},
SC_POISON = {
	Icon = "SI_CLOUDKILL"
},
SC_SILENCE = {
	Icon = "SI_SILENT_BREEZE"
},
SC_THORNS_TRAP = {
	Icon = "SI_THORNTRAP"
},
SC_WARM = {
	Icon = "SI_SG_SUN_WARM"
},
SC_COMA = {
	Flags = {
		NoBoss = true,
	},
},
SC_RICHMANKIM = {
	Flags = {
		NoBoss = true,
	},
},
SC_ROKISWEIL = {
	Flags = {
		NoBoss = true,
	},
},
SC_BURNING = {
	Flags = {
		NoBoss = true,
	},
},
SC_VACUUM_EXTREME = {
	Flags = {
		NoBoss = true,
	},
},
SC_FRESHSHRIMP = {
	Flags = {
		NoBoss = true,
	},
},
SC_SV_ROOTTWIST = {
	Flags = {
		NoBoss = true,
	},
},
SC_MADOGEAR = {
	Visible = true,
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
		NoAllReset = true,
		NoBoss = true,
	},
	Icon = "SI_MADOGEAR"
},
SC_POPECOOKIE = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_POPECOOKIE"
},
SC_VITALIZE_POTION = {
	Flags = {
		NoDispelReset = true,
	},
	Icon = "SI_VITALIZE_POTION"
},
SC_SKF_MATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SKF_MATK"
},
SC_SKF_ATK = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SKF_ATK"
},
SC_SKF_ASPD = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SKF_ASPD"
},
SC_SKF_CAST = {
	Flags = {
		NoDispelReset = true,
		NoClearanceReset = true,
		Buff = true,
	},
	Icon = "SI_SKF_CAST"
},
SC_ALMIGHTY = {
	Flags = {
		NoDeathReset = true,
		NoDispelReset = true,
		NoClearanceReset = true,
	},
	Icon = "SI_ALMIGHTY"
},
SC_SKE = {
	Icon = "SI_SKE"
},
},