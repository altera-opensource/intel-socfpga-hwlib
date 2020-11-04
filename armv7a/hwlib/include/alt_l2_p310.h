/******************************************************************************
*
* Copyright 2013 Altera Corporation. All Rights Reserved.
* 
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
* 
* 1. Redistributions of source code must retain the above copyright notice,
* this list of conditions and the following disclaimer.
* 
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
* 
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
* 
******************************************************************************/

/*
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/alt_l2_p310.h#1 $
 */

/*! \file
 *  Altera - SoC FPGA Address Space Manager
 */

#ifndef __ALT_L2_P310_H__
#define __ALT_L2_P310_H__

#include <stdbool.h>
#include "socal/hps.h"

#ifdef soc_a10
#define ALT_MPUL2_OFST     ALT_L2_REGS_L2TYPE_ADDR
#endif

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

/*****************************************************************************
/ ARM Level 2 Cache Controller L2C-310 Register Interface
/ These definitions should match the values given in DDI0246H_l2c310_r3p3_trm.pdf 
/ provided by ARM
*****************************************************************************/


/* Cache ID Register
 * The Cache ID Registers is a read only register
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:24] | Implementer               | ID of IP provider. Should be 0x41 (ARM)
 * [23:16] | Reserved                  | SBZ/RAZ
 * [15:10] | Cache ID                  |
 * [9:6]   | Part Number               |
 * [5:0]   | RTL release               |
 * Cache ID Register Address */

#define ALT_L2_CACHE_ID_OFST                    0x000
#define ALT_L2_CACHE_ID_ADDR                    (ALT_MPUL2_OFST + ALT_L2_CACHE_ID_OFST)
/* Cache ID Register - Implementer Mask */
#define ALT_L2_CACHE_ID_IMPLEMENTER_MASK        0xFF000000
/* Cache ID Register - Cache ID Mask */
#define ALT_L2_CACHE_ID_CACHE_ID_MASK           0x0000FC00
/* Cache ID Register - Part Number Mask */
#define ALT_L2_CACHE_ID_PART_NUMBER_MASK        0x000003C0
/* Cache ID Register - RTL Relase Mask */
#define ALT_L2_CACHE_ID_RTL_RELEASE_MASK        0x0000003F

#define ALT_L2_CACHE_TYPE_OFST                  0x004
#define ALT_L2_CACHE_TYPE_ADDR                  (ALT_MPUL2_OFST + ALT_L2_CACHE_ID_OFST)

/* The Cache Control Register is a read and write register
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:1]  | Reservered                | SBZ/RAZ
 * [0]     | L2 Cache Enable           |  */

/* Cache Control Register Address */
#define ALT_L2_CACHE_REG1_CNTRL_OFST            0x100
#define ALT_L2_CACHE_REG1_CNTRL_ADDR            (ALT_MPUL2_OFST + ALT_L2_CACHE_REG1_CNTRL_OFST)
/* Cache Control Register - Enable */
#define ALT_L2_CACHE_REG1_CNTRL_DISABLE         0x0
#define ALT_L2_CACHE_REG1_CNTRL_ENABLE	        0x1
#define ALT_L2_CACHE_REG1_CNTRL_ENABLE_MASK     0x1

/* Aux Cache Control Register
 * The Aux Cache Control Register is a read and write register
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31]    | Reservered                | SBZ/RAZ
 * [30]    | Early BRESP Enabled       | 
 * [29]    | Inst Prefetch Enable      | 
 * [28]    | Data Prefetch Enable      | 
 * [27]    | N/S Int Access Cntrl      | 
 * [26]    | N/S Lockdown Enable       | 
 * [25]    | Cache Replacement Policy  | 
 * [24:23] | Force Write Allocate      | 
 * [22]    | Shared Attr Override En   | 
 * [21]    | Parity Enable             | 
 * [20]    | Event Monitor Bus Enable  | 
 * [19:17] | Way Size                  | 
 * [16]    | Associativity             | 
 * [15:14] | Reserved                  | 
 * [13]    | Shared Attribute Inv En   | 
 * [12]    | Exclusive Cache Config    | 
 * [11]    | Store Buffer Dev Limit En | 
 * [10]    | High Priority for SO En   | 
 * [9:1]   | Reserved                  | 
 * [0]     | Full Line of Zero En      |  */

/* Aux Cache Control Register Address */
#define ALT_L2_CACHE_REG1_AUX_CNTRL_OFST        0x104
#define ALT_L2_CACHE_REG1_AUX_CNTRL_ADDR        (ALT_MPUL2_OFST + ALT_L2_CACHE_REG1_AUX_CNTRL_OFST)
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EARLY_BRESP_EN_MASK    0x40000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EARLY_BRESP_ENABLE     0x40000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EARLY_BRESP_DISABLE    0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_INST_PREFETCH_EN_MASK  0x20000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_INST_PREFETCH_ENABLE   0x20000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_INST_PREFETCH_DISABLE  0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_DATA_PREFETCH_EN_MASK  0x10000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_DATA_PREFETCH_ENABLE   0x10000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_DATA_PREFETCH_DISABLE  0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_NS_INT_ACC_CNTRL_MASK  0x08000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_NS_INT_ACC_CNTRL_ENABLE  0x08000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_NS_INT_ACC_CNTRL_DISABLE 0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_NS_LOCKDOWN_EN_MASK    0x04000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_NS_LOCKDOWN_ENABLE     0x04000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_NS_LOCKDOWN_DISABLE    0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_CACHE_REPL_POL_MASK    0x02000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_CACHE_REPL_POL_RANDOM  0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_CACHE_REPL_POL_RR      0x02000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FORCE_WRITE_ALLOC_MASK 0x01800000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FORCE_WRITE_ALLOC_AWCACHE 0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FORCE_WRITE_ALLOC_WA0  0x00800000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FORCE_WRITE_ALLOC_WA1  0x01000000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FORCE_WRITE_ALLOC_00   0x01800000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_SHARED_ATTR_OVERRIDE_EN_MASK 0x00400000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_SHARED_ATTR_OVERRIDE_ENABLE  0x00400000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_SHARED_ATTR_OVERRIDE_DISABLE 0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_PARITY_EN_MASK         0x00200000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_PARITY_ENABLE          0x00200000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_PARITY_DISABLE         0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EVENT_MNTR_BUS_EN_MASK 0x00100000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EVENT_MNTR_BUS_ENABLE  0x00100000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EVENT_MNTR_BUS_DISABLE 0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_WAY_SIZE_MASK          0x000E0000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_WAY_SIZE_16KB          0x00020000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_WAY_SIZE_32KB          0x00040000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_WAY_SIZE_64KB          0x00060000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_WAY_SIZE_128KB         0x00080000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_WAY_SIZE_256B          0x000A0000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_WAY_SIZE_512KB         0x000C0000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_ASSOCIATIVITY_MASK     0x00010000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_ASSOCIATIVITY_8WAY     0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_ASSOCIATIVITY_16WAY    0x00010000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_SHAR_ATTR_INV_EN_MASK  0x00002000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_SHAR_ATTR_INV_ENABLE   0x00002000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_SHAR_ATTR_INV_DISABLE  0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EXCL_CACHE_CFG_MASK    0x00001000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EXCL_CACHE_CFG_ENABLE  0x00001000
#define ALT_L2_CACHE_REG1_AUX_CNTRL_EXCL_CACHE_CFG_DISABLE 0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_STOR_BUFF_DEV_LIM_EN_MASK 0x00000800
#define ALT_L2_CACHE_REG1_AUX_CNTRL_STOR_BUFF_DEV_LIM_ENABLE  0x00000800
#define ALT_L2_CACHE_REG1_AUX_CNTRL_STOR_BUFF_DEV_LIM_DISABLE 0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_H_PRI_SO_DEV_RD_EN_MASK 0x00000400
#define ALT_L2_CACHE_REG1_AUX_CNTRL_H_PRI_SO_DEV_RD_ENABLE  0x00000400
#define ALT_L2_CACHE_REG1_AUX_CNTRL_H_PRI_SO_DEV_RD_DISABLE 0
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FULL_LINE_0_EN_MASK    0x1
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FULL_LINE_0_ENABLE     0x1
#define ALT_L2_CACHE_REG1_AUX_CNTRL_FULL_LINE_0_DISABLE    0

/* Tag and Data RAM Latency Control Register
 * The Tag and Data RAM Latency Control Register is a read and write register
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:11] | Reservered                | SBZ/RAZ
 * [10:8]  | RAM Write Access Latency  |
 * [7]     | Reserved                  | 
 * [10:8]  | RAM Read Access Latency   |
 * [3]     | Reserved                  | 
 * [2:0]   | RAM Setup Latency         | */

#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_OFST    0x108
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_ADDR    (ALT_MPUL2_OFST + ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_OFST)
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_MASK  0x00000700
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_1     0x00000000
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_2     0x00000100
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_3     0x00000200
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_4     0x00000300
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_5     0x00000400
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_6     0x00000500
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_7     0x00000600
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_8     0x00000700

#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_MASK   0x00000070
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_1      0x00000000
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_2      0x00000010
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_3      0x00000020
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_4      0x00000030
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_5      0x00000040
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_6      0x00000050
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_7      0x00000060
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_8      0x00000070

#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_MASK  0x00000007
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_1     0x00000000
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_2     0x00000001
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_3     0x00000002
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_4     0x00000003
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_5     0x00000004
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_6     0x00000005
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_7     0x00000006
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_8     0x00000007

#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_WRITE_LATENCY_LSB   8
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_READ_LATENCY_LSB    4
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_SETUP_LATENCY_LSB   0
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_1           0x00000000
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_2           0x00000001
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_3           0x00000002
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_4           0x00000003
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_5           0x00000004
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_6           0x00000005
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_7           0x00000006
#define ALT_L2_CACHE_REG1_TAG_RAM_CNTRL_LATENCY_8           0x00000007

#define ALT_L2_CACHE_REG1_DATA_RAM_CNTRL_OFST   0x10C
#define ALT_L2_CACHE_REG1_DATA_RAM_CNTRL_ADDR   (ALT_MPUL2_OFST + ALT_L2_CACHE_REG1_DATA_RAM_CNTRL_OFST)

/* Event Counter Control Register
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:3]  | Reservered                | SBZ/RAZ
 * [2:1]   | Counter Reset             |
 * [0]     | Event Counter Enable      | */

#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_OFST     0x200
#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_ADDR     (ALT_MPUL2_OFST + ALT_L2_CACHE_REG1_EV_CNT_CNTRL_OFST)

#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_RESET_MASK 0x00000006
#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_RESET_0  0x00000002
#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_RESET_1  0x00000004
#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_EN_MASK  1
/* Enable Counter */
#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_ENABLE   1
#define ALT_L2_CACHE_REG2_EV_CNT_CNTRL_DISABLE  0


/* Event Counter Configuration Registers
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:6]  | Reservered                | SBZ/RAZ
 * [5:2]   | Counter Event Source      |
 * [1:0]   | Event Counter Interupt En | */

/* Event Counter Configuration Register Addresses */
#define ALT_L2_CACHE_REG2_EV_CNT1_CFG_OFST      0x204
#define ALT_L2_CACHE_REG2_EV_CNT1_CFG_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG1_EV_CNT1_CFG_OFST)
#define ALT_L2_CACHE_REG2_EV_CNT0_CFG_OFST      0x208
#define ALT_L2_CACHE_REG2_EV_CNT0_CFG_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG1_EV_CNT0_CFG_OFST)

#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_MASK        0x0000003C
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_DISABLE     0x00000000
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_CO          0x00000004
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_DRHIT       0x00000008
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_DRREQ       0x0000000C
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_DWHIT       0x00000010
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_DWREQ       0x00000014
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_DWTREQ      0x00000018
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_IRHIT       0x0000001C
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_IRREQ       0x00000020
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_WA          0x00000024
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_IPFALLOC    0x00000028
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_EPFHIT      0x0000002C
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_EPFALLOC    0x00000030
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_SRRCVD      0x00000034
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_SRCONF      0x00000038
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_SRC_EPFRCVD     0x0000003C
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_INT_MASK        0x3
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_INT_DISABLED    0
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_INT_ENABLE_INC  0x00000001
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_INT_ENABLE_OF   0x00000002
#define ALT_L2_CACHE_REG2_EV_CNT_CFG_INT_GEN_DIS     0x00000003


/* Event Counter Registers */
#define ALT_L2_CACHE_REG2_EV_CNT1_OFST          0x20C
#define ALT_L2_CACHE_REG2_EV_CNT1_ADDR          (ALT_MPUL2_OFST + ALT_L2_CACHE_REG2_EV_CNT1_OFST)
#define ALT_L2_CACHE_REG2_EV_CNT0_OFST          0x210
#define ALT_L2_CACHE_REG2_EV_CNT0_ADDR          (ALT_MPUL2_OFST + ALT_L2_CACHE_REG2_EV_CNT0_OFST)

/* Interrupt Registers. The following defines are used for the next several registers
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:9]  | Reservered                | SBZ/RAZ
 * [8]     | DECERR                    |
 * [7]     | SLVERR                    |
 * [6]     | ERRRD                     |
 * [5]     | ERRRT                     |
 * [4]     | ERRWD                     |
 * [3]     | ERRWT                     |
 * [2]     | PARRD                     |
 * [1]     | PARRT                     | 
 * [0]     | ECNTR                     | */

#define ALT_L2_CACHE_REG2_INT_DECERR       0x100
#define ALT_L2_CACHE_REG2_INT_SLVERR       0x080
#define ALT_L2_CACHE_REG2_INT_ERRRD        0x040
#define ALT_L2_CACHE_REG2_INT_ERRRT        0x020
#define ALT_L2_CACHE_REG2_INT_ERRWD        0x010
#define ALT_L2_CACHE_REG2_INT_ERRWT        0x008
#define ALT_L2_CACHE_REG2_INT_PARRD        0x004
#define ALT_L2_CACHE_REG2_INT_PARRT        0x002
#define ALT_L2_CACHE_REG2_INT_ECNTR        0x001

/* Interrupt Enable Mask Register
 * See "Interrupt Registers" above */
#define ALT_L2_CACHE_REG2_INT_MASK_OFST         0x214
#define ALT_L2_CACHE_REG2_INT_MASK_ADDR         (ALT_MPUL2_OFST + ALT_L2_CACHE_REG2_INT_MASK_OFST)

/* Interrupt Status Register (Should be RAW_STATUS & INT_MASK
 * See "Interrupt Registers" above */
#define ALT_L2_CACHE_REG2_INT_MASK_STATUS_OFST  0x218
#define ALT_L2_CACHE_REG2_INT_MASK_STATUS_ADDR  (ALT_MPUL2_OFST + ALT_L2_CACHE_REG2_INT_MASK_STATUS_OFST)

/* Interrupt Raw Status Register (Excludes Masks)
 * See "Interrupt Registers" above */
#define ALT_L2_CACHE_REG2_INT_RAW_STATUS_OFST   0x21C
#define ALT_L2_CACHE_REG2_INT_RAW_STATUS_ADDR   (ALT_MPUL2_OFST + ALT_L2_CACHE_REG2_INT_RAW_STATUS_OFST)

/* Interrupt Clear Status Register
 * See "Interrupt Registers" above */
#define ALT_L2_CACHE_REG2_INT_CLEAR_OFST        0x220
#define ALT_L2_CACHE_REG2_INT_CLEAR_ADDR        (ALT_MPUL2_OFST + ALT_L2_CACHE_REG2_INT_CLEAR_OFST)

/* PA Format
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:12] | Tag                       |
 * [11:5]  | Index                     |
 * [4:1]   | Reserved                  |
 * [0]     | Complete                  | */

/* Index or Way Format
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:28] | Way                       |
 * [27:12] | Reserved                  |
 * [11:5]  | Index                     |
 * [4:1]   | Reserved                  |
 * [0]     | Complete                  | */
 
/* Way Format
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:16] | Reserved                  |
 * [15:0]  | Way Bits                  | */

/* Cache Sync Register
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:1]  | Reserved                  |
 * [0]     | Complete                  | */
#define ALT_L2_CACHE_REG7_CACHE_SYNC_OFST       0x730
#define ALT_L2_CACHE_REG7_CACHE_SYNC_ADDR       (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_CACHE_SYNC_OFST)

/* Invalidate Line by Physical Address
 * See the "PA Format" above for description of the fields of this register */
#define ALT_L2_CACHE_REG7_INV_PA_OFST           0x770
#define ALT_L2_CACHE_REG7_INV_PA_ADDR           (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_INV_PA_OFST)

/* Invalidate Line by Way
 * See the "Way Format" above for description of the fields of this register */
#define ALT_L2_CACHE_REG7_INV_WAY_OFST          0x77C
#define ALT_L2_CACHE_REG7_INV_WAY_ADDR          (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_INV_WAY_OFST)

/* Clean Line by Physical Address
 * See the "PA Format" above for description of the fields of this register */
#define ALT_L2_CACHE_REG7_CLEAN_PA_OFST         0x7B0
#define ALT_L2_CACHE_REG7_CLEAN_PA_ADDR         (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_CLEAN_PA_OFST)

/* Clean Line by Set/Way
 * See the "Index or Way Format" above for a description of the fields of this register */
#define ALT_L2_CACHE_REG7_CLEAN_INDEX_OFST      0x7B8
#define ALT_L2_CACHE_REG7_CLEAN_INDEX_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_CLEAN_INDEX_OFST)

/* Invalidate Line by Way
 * See the "Way Format" above for description of the fields of this register */
#define ALT_L2_CACHE_REG7_CLEAN_WAY_OFST        0x7BC
#define ALT_L2_CACHE_REG7_CLEAN_WAY_ADDR        (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_CLEAN_WAY_OFST)

/* Clean and Invalidate Line by Physical Address
 * See the "PA Format" above for description of the fields of this register */
#define ALT_L2_CACHE_REG7_CLEAN_INV_PA_OFST     0x7F0
#define ALT_L2_CACHE_REG7_CLEAN_INV_PA_ADDR     (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_CLEAN_INV_PA_OFST)

/* Clean and Invalidate Line by Set/Way
 * See the "Index or Way Format" above for a description of the fields of this register */
#define ALT_L2_CACHE_REG7_CLEAN_INV_INDEX_OFST  0x7F8
#define ALT_L2_CACHE_REG7_CLEAN_INV_INDEX_ADDR  (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_CLEAN_INV_INDEX_OFST)

/* Invalidate Line by Way
 * See the "Way Format" above for description of the fields of this register */
#define ALT_L2_CACHE_REG7_CLEAN_INV_WAY_OFST    0x7FC
#define ALT_L2_CACHE_REG7_CLEAN_INV_WAY_ADDR    (ALT_MPUL2_OFST + ALT_L2_CACHE_REG7_CLEAN_INV_WAY_OFST)

/* Lockdown Registers
 * The format for each of these lockdown registers is the same
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:16] | Reserved                  |
 * [15:0]  | Way Bits                  | */


#define ALT_L2_CACHE_REG9_D_LOCKDOWN_OFST(X)    (0x900 + (X)*0x10)
#define ALT_L2_CACHE_REG9_D_LOCKDOWN_ADDR(X)    (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN_OFST(X))

#define ALT_L2_CACHE_REG9_I_LOCKDOWN_OFST(X)    (0x904 + (X)*0x10)
#define ALT_L2_CACHE_REG9_I_LOCKDOWN_ADDR(X)    (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN_OFST(X))

#define ALT_L2_CACHE_REG9_D_LOCKDOWN0_OFST      0x900
#define ALT_L2_CACHE_REG9_D_LOCKDOWN0_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN0_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN0_OFST      0x904
#define ALT_L2_CACHE_REG9_I_LOCKDOWN0_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN0_OFST)

#define ALT_L2_CACHE_REG9_D_LOCKDOWN1_OFST      0x908
#define ALT_L2_CACHE_REG9_D_LOCKDOWN1_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN1_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN1_OFST      0x90C
#define ALT_L2_CACHE_REG9_I_LOCKDOWN1_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN1_OFST)

#define ALT_L2_CACHE_REG9_D_LOCKDOWN2_OFST      0x910
#define ALT_L2_CACHE_REG9_D_LOCKDOWN2_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN2_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN2_OFST      0x914
#define ALT_L2_CACHE_REG9_I_LOCKDOWN2_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN2_OFST)

#define ALT_L2_CACHE_REG9_D_LOCKDOWN3_OFST      0x918
#define ALT_L2_CACHE_REG9_D_LOCKDOWN3_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN3_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN3_OFST      0x91C
#define ALT_L2_CACHE_REG9_I_LOCKDOWN3_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN3_OFST)

#define ALT_L2_CACHE_REG9_D_LOCKDOWN4_OFST      0x920
#define ALT_L2_CACHE_REG9_D_LOCKDOWN4_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN4_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN4_OFST      0x924
#define ALT_L2_CACHE_REG9_I_LOCKDOWN4_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN4_OFST)

#define ALT_L2_CACHE_REG9_D_LOCKDOWN5_OFST      0x928
#define ALT_L2_CACHE_REG9_D_LOCKDOWN5_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN5_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN5_OFST      0x92C
#define ALT_L2_CACHE_REG9_I_LOCKDOWN5_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN5_OFST)

#define ALT_L2_CACHE_REG9_D_LOCKDOWN6_OFST      0x930
#define ALT_L2_CACHE_REG9_D_LOCKDOWN6_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN6_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN6_OFST      0x934
#define ALT_L2_CACHE_REG9_I_LOCKDOWN6_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN6_OFST)

#define ALT_L2_CACHE_REG9_D_LOCKDOWN7_OFST      0x938
#define ALT_L2_CACHE_REG9_D_LOCKDOWN7_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_D_LOCKDOWN7_OFST)

#define ALT_L2_CACHE_REG9_I_LOCKDOWN7_OFST      0x93C
#define ALT_L2_CACHE_REG9_I_LOCKDOWN7_ADDR      (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_I_LOCKDOWN7_OFST)

/* Lockdown by Line Enable
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:1]  | Reserved                  |
 * [0]     | Enable                    | */

#define ALT_L2_CACHE_REG9_LOCK_LINE_EN_OFST     0x950
#define ALT_L2_CACHE_REG9_LOCK_LINE_EN_ADDR     (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_LOCK_LINE_EN_OFST)
#define ALT_L2_CACHE_REG9_LOCK_LINE_EN_MASK     0x00000001
#define ALT_L2_CACHE_REG9_LOCK_LINE_ENABLE      0x00000001
#define ALT_L2_CACHE_REG9_LOCK_LINE_DISABLE     0

#define ALT_L2_CACHE_REG9_UNLOCK_WAY_OFST       0x954
#define ALT_L2_CACHE_REG9_UNLOCK_WAY_ADDR       (ALT_MPUL2_OFST + ALT_L2_CACHE_REG9_UNLOCK_WAY_OFST)

/* Address Filtering Start Register
 * The Address Filtering Start Register is a read and write register.
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:20] | address_filtering_start   | Address filtering start address for
 *         |                           | bits [31:20] of the filtering address.
 * [19:1]  | Reserved                  | SBZ/RAZ
 * [0]     | address_filtering_enable  | 0 - address filtering disabled
 *         |                           | 1 - address filtering enabled. */

/* Address Filtering Start Register Address */
#define ALT_L2_CACHE_ADDR_FILTERING_START_OFST      0xC00
#define ALT_L2_CACHE_ADDR_FILTERING_START_ADDR      ALT_CAST(void *, (ALT_CAST(char *, ALT_MPUL2_OFST) + ALT_L2_CACHE_ADDR_FILTERING_START_OFST))
/* Address Filtering Start Register - Start Value Mask */
#define ALT_L2_CACHE_ADDR_FILTERING_START_ADDR_MASK 0xFFF00000
/* Address Filtering Start Register - Reset Start Address Value (1 MB) */
#define ALT_L2_CACHE_ADDR_FILTERING_START_RESET     0x100000
/* Address Filtering Start Register - Enable Flag Mask */
#define ALT_L2_CACHE_ADDR_FILTERING_ENABLE_MASK     0x00000001
/* Address Filtering Start Register - Reset Enable Flag Value (Enabled) */
#define ALT_L2_CACHE_ADDR_FILTERING_ENABLE_RESET    0x1

/* Address Filtering End Register
 * The Address Filtering End Register is a read and write register.
 * Bits     Field                       Description
 * :-------|:--------------------------|:-----------------------------------------
 * [31:20] | address_filtering_end     | Address filtering end address for bits
 *         |                           | [31:20] of the filtering address.
 * [19:0]  | Reserved                  | SBZ/RAZ */

/* Address Filtering End Register Address */
#define ALT_L2_CACHE_ADDR_FILTERING_END_OFST        0xC04
#define ALT_L2_CACHE_ADDR_FILTERING_END_ADDR      ALT_CAST(void *, (ALT_CAST(char *, ALT_MPUL2_OFST) + ALT_L2_CACHE_ADDR_FILTERING_END_OFST))
/* Address Filtering End Register - End Value Mask */
#define ALT_L2_CACHE_ADDR_FILTERING_END_ADDR_MASK   0xFFF00000
/* Address Filtering End Register - Reset End Address Value (3 GiB) */
#define ALT_L2_CACHE_ADDR_FILTERING_END_RESET       0xC0000000

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_L2_P310_H__ */
