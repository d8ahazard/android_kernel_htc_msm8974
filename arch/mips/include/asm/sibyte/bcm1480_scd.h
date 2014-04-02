/*  *********************************************************************
    *  BCM1280/BCM1400 Board Support Package
    *
    *  SCD Constants and Macros                     File: bcm1480_scd.h
    *
    *  This module contains constants and macros useful for
    *  manipulating the System Control and Debug module.
    *
    *  BCM1400 specification level: 1X55_1X80-UM100-R (12/18/03)
    *
    *********************************************************************
    *
    *  Copyright 2000,2001,2002,2003,2004,2005
    *  Broadcom Corporation. All rights reserved.
    *
    *  This program is free software; you can redistribute it and/or
    *  modify it under the terms of the GNU General Public License as
    *  published by the Free Software Foundation; either version 2 of
    *  the License, or (at your option) any later version.
    *
    *  This program is distributed in the hope that it will be useful,
    *  but WITHOUT ANY WARRANTY; without even the implied warranty of
    *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    *  GNU General Public License for more details.
    *
    *  You should have received a copy of the GNU General Public License
    *  along with this program; if not, write to the Free Software
    *  Foundation, Inc., 59 Temple Place, Suite 330, Boston,
    *  MA 02111-1307 USA
    ********************************************************************* */

#ifndef _BCM1480_SCD_H
#define _BCM1480_SCD_H

#include "sb1250_defs.h"


#include "sb1250_scd.h"





#define K_SYS_PART_BCM1480          0x1406
#define K_SYS_PART_BCM1280          0x1206
#define K_SYS_PART_BCM1455          0x1407
#define K_SYS_PART_BCM1255          0x1257
#define K_SYS_PART_BCM1158          0x1156



#define M_BCM1480_SYS_RESERVED0             _SB_MAKEMASK1(0)
#define M_BCM1480_SYS_HT_MINRSTCNT          _SB_MAKEMASK1(1)
#define M_BCM1480_SYS_RESERVED2             _SB_MAKEMASK1(2)
#define M_BCM1480_SYS_RESERVED3             _SB_MAKEMASK1(3)
#define M_BCM1480_SYS_RESERVED4             _SB_MAKEMASK1(4)
#define M_BCM1480_SYS_IOB_DIV               _SB_MAKEMASK1(5)

#define S_BCM1480_SYS_PLL_DIV               _SB_MAKE64(6)
#define M_BCM1480_SYS_PLL_DIV               _SB_MAKEMASK(5, S_BCM1480_SYS_PLL_DIV)
#define V_BCM1480_SYS_PLL_DIV(x)            _SB_MAKEVALUE(x, S_BCM1480_SYS_PLL_DIV)
#define G_BCM1480_SYS_PLL_DIV(x)            _SB_GETVALUE(x, S_BCM1480_SYS_PLL_DIV, M_BCM1480_SYS_PLL_DIV)

#define S_BCM1480_SYS_SW_DIV                _SB_MAKE64(11)
#define M_BCM1480_SYS_SW_DIV                _SB_MAKEMASK(5, S_BCM1480_SYS_SW_DIV)
#define V_BCM1480_SYS_SW_DIV(x)             _SB_MAKEVALUE(x, S_BCM1480_SYS_SW_DIV)
#define G_BCM1480_SYS_SW_DIV(x)             _SB_GETVALUE(x, S_BCM1480_SYS_SW_DIV, M_BCM1480_SYS_SW_DIV)

#define M_BCM1480_SYS_PCMCIA_ENABLE         _SB_MAKEMASK1(16)
#define M_BCM1480_SYS_DUART1_ENABLE         _SB_MAKEMASK1(17)

#define S_BCM1480_SYS_BOOT_MODE             _SB_MAKE64(18)
#define M_BCM1480_SYS_BOOT_MODE             _SB_MAKEMASK(2, S_BCM1480_SYS_BOOT_MODE)
#define V_BCM1480_SYS_BOOT_MODE(x)          _SB_MAKEVALUE(x, S_BCM1480_SYS_BOOT_MODE)
#define G_BCM1480_SYS_BOOT_MODE(x)          _SB_GETVALUE(x, S_BCM1480_SYS_BOOT_MODE, M_BCM1480_SYS_BOOT_MODE)
#define K_BCM1480_SYS_BOOT_MODE_ROM32       0
#define K_BCM1480_SYS_BOOT_MODE_ROM8        1
#define K_BCM1480_SYS_BOOT_MODE_SMBUS_SMALL 2
#define K_BCM1480_SYS_BOOT_MODE_SMBUS_BIG   3
#define M_BCM1480_SYS_BOOT_MODE_SMBUS       _SB_MAKEMASK1(19)

#define M_BCM1480_SYS_PCI_HOST              _SB_MAKEMASK1(20)
#define M_BCM1480_SYS_PCI_ARBITER           _SB_MAKEMASK1(21)
#define M_BCM1480_SYS_BIG_ENDIAN            _SB_MAKEMASK1(22)
#define M_BCM1480_SYS_GENCLK_EN             _SB_MAKEMASK1(23)
#define M_BCM1480_SYS_GEN_PARITY_EN         _SB_MAKEMASK1(24)
#define M_BCM1480_SYS_RESERVED25            _SB_MAKEMASK1(25)

#define S_BCM1480_SYS_CONFIG                26
#define M_BCM1480_SYS_CONFIG                _SB_MAKEMASK(6, S_BCM1480_SYS_CONFIG)
#define V_BCM1480_SYS_CONFIG(x)             _SB_MAKEVALUE(x, S_BCM1480_SYS_CONFIG)
#define G_BCM1480_SYS_CONFIG(x)             _SB_GETVALUE(x, S_BCM1480_SYS_CONFIG, M_BCM1480_SYS_CONFIG)

#define M_BCM1480_SYS_RESERVED32            _SB_MAKEMASK(32, 15)

#define S_BCM1480_SYS_NODEID                47
#define M_BCM1480_SYS_NODEID                _SB_MAKEMASK(4, S_BCM1480_SYS_NODEID)
#define V_BCM1480_SYS_NODEID(x)             _SB_MAKEVALUE(x, S_BCM1480_SYS_NODEID)
#define G_BCM1480_SYS_NODEID(x)             _SB_GETVALUE(x, S_BCM1480_SYS_NODEID, M_BCM1480_SYS_NODEID)

#define M_BCM1480_SYS_CCNUMA_EN             _SB_MAKEMASK1(51)
#define M_BCM1480_SYS_CPU_RESET_0           _SB_MAKEMASK1(52)
#define M_BCM1480_SYS_CPU_RESET_1           _SB_MAKEMASK1(53)
#define M_BCM1480_SYS_CPU_RESET_2           _SB_MAKEMASK1(54)
#define M_BCM1480_SYS_CPU_RESET_3           _SB_MAKEMASK1(55)
#define S_BCM1480_SYS_DISABLECPU0           56
#define M_BCM1480_SYS_DISABLECPU0           _SB_MAKEMASK1(S_BCM1480_SYS_DISABLECPU0)
#define S_BCM1480_SYS_DISABLECPU1           57
#define M_BCM1480_SYS_DISABLECPU1           _SB_MAKEMASK1(S_BCM1480_SYS_DISABLECPU1)
#define S_BCM1480_SYS_DISABLECPU2           58
#define M_BCM1480_SYS_DISABLECPU2           _SB_MAKEMASK1(S_BCM1480_SYS_DISABLECPU2)
#define S_BCM1480_SYS_DISABLECPU3           59
#define M_BCM1480_SYS_DISABLECPU3           _SB_MAKEMASK1(S_BCM1480_SYS_DISABLECPU3)

#define M_BCM1480_SYS_SB_SOFTRES            _SB_MAKEMASK1(60)
#define M_BCM1480_SYS_EXT_RESET             _SB_MAKEMASK1(61)
#define M_BCM1480_SYS_SYSTEM_RESET          _SB_MAKEMASK1(62)
#define M_BCM1480_SYS_SW_FLAG               _SB_MAKEMASK1(63)










#define M_BCM1480_SCD_WDOG_ENABLE           _SB_MAKEMASK1(0)

#define S_BCM1480_SCD_WDOG_RESET_TYPE       2
#define M_BCM1480_SCD_WDOG_RESET_TYPE       _SB_MAKEMASK(5, S_BCM1480_SCD_WDOG_RESET_TYPE)
#define V_BCM1480_SCD_WDOG_RESET_TYPE(x)    _SB_MAKEVALUE(x, S_BCM1480_SCD_WDOG_RESET_TYPE)
#define G_BCM1480_SCD_WDOG_RESET_TYPE(x)    _SB_GETVALUE(x, S_BCM1480_SCD_WDOG_RESET_TYPE, M_BCM1480_SCD_WDOG_RESET_TYPE)

#define K_BCM1480_SCD_WDOG_RESET_FULL       0	
#define K_BCM1480_SCD_WDOG_RESET_SOFT       1
#define K_BCM1480_SCD_WDOG_RESET_CPU0       3
#define K_BCM1480_SCD_WDOG_RESET_CPU1       5
#define K_BCM1480_SCD_WDOG_RESET_CPU2       9
#define K_BCM1480_SCD_WDOG_RESET_CPU3       17
#define K_BCM1480_SCD_WDOG_RESET_ALL_CPUS   31


#define M_BCM1480_SCD_WDOG_HAS_RESET        _SB_MAKEMASK1(8)







#define S_SPC_CFG_SRC4              32
#define M_SPC_CFG_SRC4              _SB_MAKEMASK(8, S_SPC_CFG_SRC4)
#define V_SPC_CFG_SRC4(x)           _SB_MAKEVALUE(x, S_SPC_CFG_SRC4)
#define G_SPC_CFG_SRC4(x)           _SB_GETVALUE(x, S_SPC_CFG_SRC4, M_SPC_CFG_SRC4)

#define S_SPC_CFG_SRC5              40
#define M_SPC_CFG_SRC5              _SB_MAKEMASK(8, S_SPC_CFG_SRC5)
#define V_SPC_CFG_SRC5(x)           _SB_MAKEVALUE(x, S_SPC_CFG_SRC5)
#define G_SPC_CFG_SRC5(x)           _SB_GETVALUE(x, S_SPC_CFG_SRC5, M_SPC_CFG_SRC5)

#define S_SPC_CFG_SRC6              48
#define M_SPC_CFG_SRC6              _SB_MAKEMASK(8, S_SPC_CFG_SRC6)
#define V_SPC_CFG_SRC6(x)           _SB_MAKEVALUE(x, S_SPC_CFG_SRC6)
#define G_SPC_CFG_SRC6(x)           _SB_GETVALUE(x, S_SPC_CFG_SRC6, M_SPC_CFG_SRC6)

#define S_SPC_CFG_SRC7              56
#define M_SPC_CFG_SRC7              _SB_MAKEMASK(8, S_SPC_CFG_SRC7)
#define V_SPC_CFG_SRC7(x)           _SB_MAKEVALUE(x, S_SPC_CFG_SRC7)
#define G_SPC_CFG_SRC7(x)           _SB_GETVALUE(x, S_SPC_CFG_SRC7, M_SPC_CFG_SRC7)

#define M_BCM1480_SPC_CFG_CLEAR     _SB_MAKEMASK1(0)
#define M_BCM1480_SPC_CFG_ENABLE    _SB_MAKEMASK1(1)
#if SIBYTE_HDR_FEATURE_CHIP(1480)
#define M_SPC_CFG_CLEAR			M_BCM1480_SPC_CFG_CLEAR
#define M_SPC_CFG_ENABLE		M_BCM1480_SPC_CFG_ENABLE
#endif


#define S_BCM1480_SPC_CNT_COUNT             0
#define M_BCM1480_SPC_CNT_COUNT             _SB_MAKEMASK(40, S_BCM1480_SPC_CNT_COUNT)
#define V_BCM1480_SPC_CNT_COUNT(x)          _SB_MAKEVALUE(x, S_BCM1480_SPC_CNT_COUNT)
#define G_BCM1480_SPC_CNT_COUNT(x)          _SB_GETVALUE(x, S_BCM1480_SPC_CNT_COUNT, M_BCM1480_SPC_CNT_COUNT)

#define M_BCM1480_SPC_CNT_OFLOW             _SB_MAKEMASK1(40)









#define M_BCM1480_ATRAP_INDEX		  _SB_MAKEMASK(4, 0)
#define M_BCM1480_ATRAP_ADDRESS		  _SB_MAKEMASK(40, 0)

#define S_BCM1480_ATRAP_CFG_CNT            0
#define M_BCM1480_ATRAP_CFG_CNT            _SB_MAKEMASK(3, S_BCM1480_ATRAP_CFG_CNT)
#define V_BCM1480_ATRAP_CFG_CNT(x)         _SB_MAKEVALUE(x, S_BCM1480_ATRAP_CFG_CNT)
#define G_BCM1480_ATRAP_CFG_CNT(x)         _SB_GETVALUE(x, S_BCM1480_ATRAP_CFG_CNT, M_BCM1480_ATRAP_CFG_CNT)

#define M_BCM1480_ATRAP_CFG_WRITE	   _SB_MAKEMASK1(3)
#define M_BCM1480_ATRAP_CFG_ALL	  	   _SB_MAKEMASK1(4)
#define M_BCM1480_ATRAP_CFG_INV	   	   _SB_MAKEMASK1(5)
#define M_BCM1480_ATRAP_CFG_USESRC	   _SB_MAKEMASK1(6)
#define M_BCM1480_ATRAP_CFG_SRCINV	   _SB_MAKEMASK1(7)

#define S_BCM1480_ATRAP_CFG_AGENTID     8
#define M_BCM1480_ATRAP_CFG_AGENTID     _SB_MAKEMASK(4, S_BCM1480_ATRAP_CFG_AGENTID)
#define V_BCM1480_ATRAP_CFG_AGENTID(x)  _SB_MAKEVALUE(x, S_BCM1480_ATRAP_CFG_AGENTID)
#define G_BCM1480_ATRAP_CFG_AGENTID(x)  _SB_GETVALUE(x, S_BCM1480_ATRAP_CFG_AGENTID, M_BCM1480_ATRAP_CFG_AGENTID)


#define K_BCM1480_BUS_AGENT_CPU0            0
#define K_BCM1480_BUS_AGENT_CPU1            1
#define K_BCM1480_BUS_AGENT_NC              2
#define K_BCM1480_BUS_AGENT_IOB             3
#define K_BCM1480_BUS_AGENT_SCD             4
#define K_BCM1480_BUS_AGENT_L2C             6
#define K_BCM1480_BUS_AGENT_MC              7
#define K_BCM1480_BUS_AGENT_CPU2            8
#define K_BCM1480_BUS_AGENT_CPU3            9
#define K_BCM1480_BUS_AGENT_PM              10

#define S_BCM1480_ATRAP_CFG_CATTR           12
#define M_BCM1480_ATRAP_CFG_CATTR           _SB_MAKEMASK(2, S_BCM1480_ATRAP_CFG_CATTR)
#define V_BCM1480_ATRAP_CFG_CATTR(x)        _SB_MAKEVALUE(x, S_BCM1480_ATRAP_CFG_CATTR)
#define G_BCM1480_ATRAP_CFG_CATTR(x)        _SB_GETVALUE(x, S_BCM1480_ATRAP_CFG_CATTR, M_BCM1480_ATRAP_CFG_CATTR)

#define K_BCM1480_ATRAP_CFG_CATTR_IGNORE    0
#define K_BCM1480_ATRAP_CFG_CATTR_UNC       1
#define K_BCM1480_ATRAP_CFG_CATTR_NONCOH    2
#define K_BCM1480_ATRAP_CFG_CATTR_COHERENT  3

#define M_BCM1480_ATRAP_CFG_CATTRINV        _SB_MAKEMASK1(14)





#define M_BCM1480_SCD_TRSEQ_TID_MATCH_EN    _SB_MAKEMASK1(25)

#define S_BCM1480_SCD_TRSEQ_SWFUNC          26
#define M_BCM1480_SCD_TRSEQ_SWFUNC          _SB_MAKEMASK(2, S_BCM1480_SCD_TRSEQ_SWFUNC)
#define V_BCM1480_SCD_TRSEQ_SWFUNC(x)       _SB_MAKEVALUE(x, S_BCM1480_SCD_TRSEQ_SWFUNC)
#define G_BCM1480_SCD_TRSEQ_SWFUNC(x)       _SB_GETVALUE(x, S_BCM1480_SCD_TRSEQ_SWFUNC, M_BCM1480_SCD_TRSEQ_SWFUNC)


#define S_BCM1480_SCD_TRACE_CFG_MODE        16
#define M_BCM1480_SCD_TRACE_CFG_MODE        _SB_MAKEMASK(2, S_BCM1480_SCD_TRACE_CFG_MODE)
#define V_BCM1480_SCD_TRACE_CFG_MODE(x)     _SB_MAKEVALUE(x, S_BCM1480_SCD_TRACE_CFG_MODE)
#define G_BCM1480_SCD_TRACE_CFG_MODE(x)     _SB_GETVALUE(x, S_BCM1480_SCD_TRACE_CFG_MODE, M_BCM1480_SCD_TRACE_CFG_MODE)

#define K_BCM1480_SCD_TRACE_CFG_MODE_BLOCKERS	0
#define K_BCM1480_SCD_TRACE_CFG_MODE_BYTEEN_INT	1
#define K_BCM1480_SCD_TRACE_CFG_MODE_FLOW_ID	2

#endif 