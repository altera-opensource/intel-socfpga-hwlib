/***********************************************************************************
*                                                                                  *
* Copyright 2013-2015 Altera Corporation. All Rights Reserved.                     *
*                                                                                  *
* Redistribution and use in source and binary forms, with or without               *
* modification, are permitted provided that the following conditions are met:      *
*                                                                                  *
* 1. Redistributions of source code must retain the above copyright notice,        *
*    this list of conditions and the following disclaimer.                         *
*                                                                                  *
* 2. Redistributions in binary form must reproduce the above copyright notice,     *
*    this list of conditions and the following disclaimer in the documentation     *
*    and/or other materials provided with the distribution.                        *
*                                                                                  *
* 3. Neither the name of the copyright holder nor the names of its contributors    *
*    may be used to endorse or promote products derived from this software without *
*    specific prior written permission.                                            *
*                                                                                  *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"      *
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE        *
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE       *
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE        *
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR              *
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF             *
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS         *
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN          *
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)          *
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE       *
* POSSIBILITY OF SUCH DAMAGE.                                                      *
*                                                                                  *
***********************************************************************************/

/* Altera - ALT_IO48_HMC_MMR */

#ifndef __ALT_SOCAL_IO48_HMC_MMR_H__
#define __ALT_SOCAL_IO48_HMC_MMR_H__

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#include <cstdint>
extern "C"
{
#else   /* __cplusplus */
#include <stdint.h>
#endif  /* __cplusplus */
#endif  /* __ASSEMBLY__ */

/*
 * Component : ALT_IO48_HMC_MMR
 * 
 */
/*
 * Register : dbgcfg0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                  
 * :-------|:-------|:------|:----------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL
 *  [1]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL    
 *  [2]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL  
 *  [3]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN     
 *  [4]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL  
 *  [8:5]  | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD         
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : cfg_wdata_driver_sel
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : cfg_prbs_ctrl_sel
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_MSB        1
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_SET_MSK    0x00000002
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_CLR_MSK    0xfffffffd
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : cfg_mmr_driver_sel
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_MSB        2
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_SET_MSK    0x00000004
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : cfg_loopback_en
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : cfg_cmd_driver_sel
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_MSB        4
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_SET_MSK    0x00000010
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_CLR_MSK    0xffffffef
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : cfg_dbg_mode
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_SET_MSK    0x000001e0
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_CLR_MSK    0xfffffe1f
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD register field. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_GET(value) (((value) & 0x000001e0) >> 5)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD_SET(value) (((value) << 5) & 0x000001e0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGCFG0.
 */
struct ALT_IO48_HMC_MMR_DBGCFG0_s
{
    uint32_t  cfg_wdata_driver_sel :  1;  /* ALT_IO48_HMC_MMR_DBGCFG0_CFG_WDATA_DRIVER_SEL */
    uint32_t  cfg_prbs_ctrl_sel    :  1;  /* ALT_IO48_HMC_MMR_DBGCFG0_CFG_PRBS_CTL_SEL */
    uint32_t  cfg_mmr_driver_sel   :  1;  /* ALT_IO48_HMC_MMR_DBGCFG0_CFG_MMR_DRIVER_SEL */
    uint32_t  cfg_loopback_en      :  1;  /* ALT_IO48_HMC_MMR_DBGCFG0_CFG_LOOPBACK_EN */
    uint32_t  cfg_cmd_driver_sel   :  1;  /* ALT_IO48_HMC_MMR_DBGCFG0_CFG_CMD_DRIVER_SEL */
    uint32_t  cfg_dbg_mode         :  4;  /* ALT_IO48_HMC_MMR_DBGCFG0_CFG_DBG_MOD */
    uint32_t                       : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGCFG0. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGCFG0_s  ALT_IO48_HMC_MMR_DBGCFG0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG0 register. */
#define ALT_IO48_HMC_MMR_DBGCFG0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGCFG0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGCFG0_OFST        0x0

/*
 * Register : dbgcfg1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL
 * 
 */
/*
 * Field : cfg_dbg_ctrl
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGCFG1.
 */
struct ALT_IO48_HMC_MMR_DBGCFG1_s
{
    uint32_t  cfg_dbg_ctrl : 32;  /* ALT_IO48_HMC_MMR_DBGCFG1_CFG_DBG_CTL */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGCFG1. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGCFG1_s  ALT_IO48_HMC_MMR_DBGCFG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG1 register. */
#define ALT_IO48_HMC_MMR_DBGCFG1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGCFG1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGCFG1_OFST        0x4

/*
 * Register : dbgcfg2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U
 * 
 */
/*
 * Field : cfg_bist_cmd0_u
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGCFG2.
 */
struct ALT_IO48_HMC_MMR_DBGCFG2_s
{
    uint32_t  cfg_bist_cmd0_u : 32;  /* ALT_IO48_HMC_MMR_DBGCFG2_CFG_BIST_CMD0_U */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGCFG2. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGCFG2_s  ALT_IO48_HMC_MMR_DBGCFG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG2 register. */
#define ALT_IO48_HMC_MMR_DBGCFG2_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGCFG2 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGCFG2_OFST        0x8

/*
 * Register : dbgcfg3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L
 * 
 */
/*
 * Field : cfg_bist_cmd0_l
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGCFG3.
 */
struct ALT_IO48_HMC_MMR_DBGCFG3_s
{
    uint32_t  cfg_bist_cmd0_l : 32;  /* ALT_IO48_HMC_MMR_DBGCFG3_CFG_BIST_CMD0_L */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGCFG3. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGCFG3_s  ALT_IO48_HMC_MMR_DBGCFG3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG3 register. */
#define ALT_IO48_HMC_MMR_DBGCFG3_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGCFG3 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGCFG3_OFST        0xc

/*
 * Register : dbgcfg4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U
 * 
 */
/*
 * Field : cfg_bist_cmd1_u
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U register field. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGCFG4.
 */
struct ALT_IO48_HMC_MMR_DBGCFG4_s
{
    uint32_t  cfg_bist_cmd1_u : 32;  /* ALT_IO48_HMC_MMR_DBGCFG4_CFG_BIST_CMD1_U */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGCFG4. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGCFG4_s  ALT_IO48_HMC_MMR_DBGCFG4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG4 register. */
#define ALT_IO48_HMC_MMR_DBGCFG4_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGCFG4 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGCFG4_OFST        0x10

/*
 * Register : dbgcfg5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L
 * 
 */
/*
 * Field : cfg_bist_cmd1_l
 * 
 * TBD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L register field. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGCFG5.
 */
struct ALT_IO48_HMC_MMR_DBGCFG5_s
{
    uint32_t  cfg_bist_cmd1_l : 32;  /* ALT_IO48_HMC_MMR_DBGCFG5_CFG_BIST_CMD1_L */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGCFG5. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGCFG5_s  ALT_IO48_HMC_MMR_DBGCFG5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG5 register. */
#define ALT_IO48_HMC_MMR_DBGCFG5_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGCFG5 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGCFG5_OFST        0x14

/*
 * Register : dbgcfg6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                             
 * :--------|:-------|:------|:-----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : cfg_dbg_out_sel
 * 
 * Select which debug signals sent out for observation
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL register field value. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL register field. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGCFG6.
 */
struct ALT_IO48_HMC_MMR_DBGCFG6_s
{
    uint32_t  cfg_dbg_out_sel : 16;  /* ALT_IO48_HMC_MMR_DBGCFG6_CFG_DBG_OUT_SEL */
    uint32_t                  : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGCFG6. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGCFG6_s  ALT_IO48_HMC_MMR_DBGCFG6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGCFG6 register. */
#define ALT_IO48_HMC_MMR_DBGCFG6_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGCFG6 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGCFG6_OFST        0x18

/*
 * Register : reserve0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : cfg_reserve0
 * 
 * General purpose reserve register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 register field value. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 register field value. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 field value from a register. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_RESERVE0.
 */
struct ALT_IO48_HMC_MMR_RESERVE0_s
{
    uint32_t  cfg_reserve0 : 16;  /* ALT_IO48_HMC_MMR_RESERVE0_CFG_RESERVE0 */
    uint32_t               : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_RESERVE0. */
typedef volatile struct ALT_IO48_HMC_MMR_RESERVE0_s  ALT_IO48_HMC_MMR_RESERVE0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_RESERVE0 register. */
#define ALT_IO48_HMC_MMR_RESERVE0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_RESERVE0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_RESERVE0_OFST        0x1c

/*
 * Register : reserve1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : cfg_reserve1
 * 
 * General purpose reserve register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 register field value. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 register field value. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 field value from a register. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_RESERVE1.
 */
struct ALT_IO48_HMC_MMR_RESERVE1_s
{
    uint32_t  cfg_reserve1 : 16;  /* ALT_IO48_HMC_MMR_RESERVE1_CFG_RESERVE1 */
    uint32_t               : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_RESERVE1. */
typedef volatile struct ALT_IO48_HMC_MMR_RESERVE1_s  ALT_IO48_HMC_MMR_RESERVE1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_RESERVE1 register. */
#define ALT_IO48_HMC_MMR_RESERVE1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_RESERVE1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_RESERVE1_OFST        0x20

/*
 * Register : reserve2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : cfg_reserve2
 * 
 * General purpose reserve register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 register field value. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 register field value. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 field value from a register. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_RESERVE2.
 */
struct ALT_IO48_HMC_MMR_RESERVE2_s
{
    uint32_t  cfg_reserve2 : 16;  /* ALT_IO48_HMC_MMR_RESERVE2_CFG_RESERVE2 */
    uint32_t               : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_RESERVE2. */
typedef volatile struct ALT_IO48_HMC_MMR_RESERVE2_s  ALT_IO48_HMC_MMR_RESERVE2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_RESERVE2 register. */
#define ALT_IO48_HMC_MMR_RESERVE2_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_RESERVE2 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_RESERVE2_OFST        0x24

/*
 * Register : ctrlcfg0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                
 * :--------|:-------|:------|:--------------------------------------------
 *  [3:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE      
 *  [6:4]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE     
 *  [8:7]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS        
 *  [13:9]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN 
 *  [18:14] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN
 *  [23:19] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN
 *  [28:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN
 *  [31:29] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : cfg_mem_type
 * 
 * Selects memory type. Program this field with one of the following binary values,
 * "0000" for DDR3 SDRAM, "0001" for DDR4 SDRAM, "0010" for LPDDR3 SDRAM and "0011"
 * for RLDRAM3.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_SET_MSK    0x0000000f
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_CLR_MSK    0xfffffff0
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : cfg_dimm_type
 * 
 * Selects dimm type. Program this field with one of the following binary values,
 * "3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_MSB        6
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_SET_MSK    0x00000070
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_CLR_MSK    0xffffff8f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE_SET(value) (((value) << 4) & 0x00000070)

/*
 * Field : cfg_ac_pos
 * 
 * Specify C/A (command/address) pin position. 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_SET_MSK    0x00000180
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_CLR_MSK    0xfffffe7f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_GET(value) (((value) & 0x00000180) >> 7)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS_SET(value) (((value) << 7) & 0x00000180)

/*
 * Field : cfg_ctrl_burst_length
 * 
 * Configures burst length for control path. Legal values are valid for JEDEC
 * allowed DRAM values for the DRAM selected in cfg_type. For DDR3, DDR4 and
 * LPDDR3, this should be programmed with 8 (binary "01000"), for RLDRAM III it can
 * be programmed with 2 or 4 or 8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_MSB        13
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_SET_MSK    0x00003e00
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_CLR_MSK    0xffffc1ff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_GET(value) (((value) & 0x00003e00) >> 9)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN_SET(value) (((value) << 9) & 0x00003e00)

/*
 * Field : cfg_dbc0_burst_length
 * 
 * Configures burst length for DBC0. Legal values are valid for JEDEC allowed DRAM
 * values for the DRAM selected in cfg_type. For DDR3, DDR4 and LPDDR3, this should
 * be programmed with 8 (binary "01000"), for RLDRAM III it can be programmed with
 * 2 or 4 or 8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_MSB        18
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_SET_MSK    0x0007c000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_CLR_MSK    0xfff83fff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_GET(value) (((value) & 0x0007c000) >> 14)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN_SET(value) (((value) << 14) & 0x0007c000)

/*
 * Field : cfg_dbc1_burst_length
 * 
 * Configures burst length for DBC1. Legal values are valid for JEDEC allowed DRAM
 * values for the DRAM selected in cfg_type. For DDR3, DDR4 and LPDDR3, this should
 * be programmed with 8 (binary "01000"), for RLDRAM III it can be programmed with
 * 2 or 4 or 8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_SET_MSK    0x00f80000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_CLR_MSK    0xff07ffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_GET(value) (((value) & 0x00f80000) >> 19)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN_SET(value) (((value) << 19) & 0x00f80000)

/*
 * Field : cfg_dbc2_burst_length
 * 
 * Configures burst length for DBC2. Legal values are valid for JEDEC allowed DRAM
 * values for the DRAM selected in cfg_type. For DDR3, DDR4 and LPDDR3, this should
 * be programmed with 8 (binary "01000"), for RLDRAM III it can be programmed with
 * 2 or 4 or 8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_MSB        28
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_SET_MSK    0x1f000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_CLR_MSK    0xe0ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_GET(value) (((value) & 0x1f000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN_SET(value) (((value) << 24) & 0x1f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG0.
 */
struct ALT_IO48_HMC_MMR_CTLCFG0_s
{
    uint32_t  cfg_mem_type          :  4;  /* ALT_IO48_HMC_MMR_CTLCFG0_CFG_MEM_TYPE */
    uint32_t  cfg_dimm_type         :  3;  /* ALT_IO48_HMC_MMR_CTLCFG0_CFG_DIMM_TYPE */
    uint32_t  cfg_ac_pos            :  2;  /* ALT_IO48_HMC_MMR_CTLCFG0_CFG_AC_POS */
    uint32_t  cfg_ctrl_burst_length :  5;  /* ALT_IO48_HMC_MMR_CTLCFG0_CFG_CTL_BURST_LEN */
    uint32_t  cfg_dbc0_burst_length :  5;  /* ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC0_BURST_LEN */
    uint32_t  cfg_dbc1_burst_length :  5;  /* ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC1_BURST_LEN */
    uint32_t  cfg_dbc2_burst_length :  5;  /* ALT_IO48_HMC_MMR_CTLCFG0_CFG_DBC2_BURST_LEN */
    uint32_t                        :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG0. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG0_s  ALT_IO48_HMC_MMR_CTLCFG0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG0 register. */
#define ALT_IO48_HMC_MMR_CTLCFG0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG0_OFST        0x28

/*
 * Register : ctrlcfg1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [4:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN    
 *  [6:5]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER        
 *  [7]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC        
 *  [8]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC       
 *  [9]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC       
 *  [10]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC       
 *  [11]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC       
 *  [12]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA      
 *  [13]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA 
 *  [14]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA
 *  [15]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA
 *  [16]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA
 *  [17]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA
 *  [18]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD        
 *  [24:19] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT      
 *  [25]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN         
 *  [26]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM         
 *  [27]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM        
 *  [28]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM        
 *  [29]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM        
 *  [30]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM        
 *  [31]    | ???    | 0x0   | *UNDEFINED*                                    
 * 
 */
/*
 * Field : cfg_dbc3_burst_length
 * 
 * Configures burst length for DBC3. Legal values are valid for JEDEC allowed DRAM
 * values for the DRAM selected in cfg_type. For DDR3, DDR4 and LPDDR3, this should
 * be programmed with 8 (binary "01000"), for RLDRAM III it can be programmed with
 * 2 or 4 or 8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_MSB        4
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_SET_MSK    0x0000001f
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_CLR_MSK    0xffffffe0
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : cfg_addr_order
 * 
 * Selects the order for address interleaving. Programming this field with
 * different values gives different mappings between the AXI or Avalon-MM address
 * and the SDRAM address. Program this field with the following binary values to
 * select the ordering. "00" - chip, row, bank(BG, BA), column; "01" - chip,
 * bank(BG, BA), row, column; "10"-row, chip, bank(BG, BA), column;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_MSB        6
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_SET_MSK    0x00000060
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_CLR_MSK    0xffffff9f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_GET(value) (((value) & 0x00000060) >> 5)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER_SET(value) (((value) << 5) & 0x00000060)

/*
 * Field : cfg_ctrl_enable_ecc
 * 
 * Enable the generation and checking of ECC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_MSB        7
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_SET_MSK    0x00000080
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_CLR_MSK    0xffffff7f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : cfg_dbc0_enable_ecc
 * 
 * Enable the generation and checking of ECC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_SET_MSK    0x00000100
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : cfg_dbc1_enable_ecc
 * 
 * Enable the generation and checking of ECC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_MSB        9
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_SET_MSK    0x00000200
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_CLR_MSK    0xfffffdff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : cfg_dbc2_enable_ecc
 * 
 * Enable the generation and checking of ECC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_MSB        10
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_SET_MSK    0x00000400
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_CLR_MSK    0xfffffbff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : cfg_dbc3_enable_ecc
 * 
 * Enable the generation and checking of ECC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_SET_MSK    0x00000800
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : cfg_reorder_data
 * 
 * This bit controls whether the controller can re-order operations to optimize
 * SDRAM bandwidth. It should generally be set to a one.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_MSB        12
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_SET_MSK    0x00001000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_CLR_MSK    0xffffefff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : cfg_ctrl_reorder_rdata
 * 
 * This bit controls whether the controller need to re-order the read return data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_MSB        13
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_SET_MSK    0x00002000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_CLR_MSK    0xffffdfff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : cfg_dbc0_reorder_rdata
 * 
 * This bit controls whether the controller need to re-order the read return data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_MSB        14
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_SET_MSK    0x00004000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_CLR_MSK    0xffffbfff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : cfg_dbc1_reorder_rdata
 * 
 * This bit controls whether the controller need to re-order the read return data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_SET_MSK    0x00008000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_CLR_MSK    0xffff7fff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : cfg_dbc2_reorder_rdata
 * 
 * This bit controls whether the controller need to re-order the read return data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_MSB        16
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_SET_MSK    0x00010000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_CLR_MSK    0xfffeffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : cfg_dbc3_reorder_rdata
 * 
 * This bit controls whether the controller need to re-order the read return data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_SET_MSK    0x00020000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_CLR_MSK    0xfffdffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : cfg_reorder_read
 * 
 * This bit controls whether the controller can re-order read command to. 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_MSB        18
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_SET_MSK    0x00040000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_CLR_MSK    0xfffbffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : cfg_starve_limit
 * 
 * Specifies the number of DRAM burst transactions an individual transaction will
 * allow to reorder ahead of it before its priority is raised in the memory
 * controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_MSB        24
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_SET_MSK    0x01f80000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_CLR_MSK    0xfe07ffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_GET(value) (((value) & 0x01f80000) >> 19)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT_SET(value) (((value) << 19) & 0x01f80000)

/*
 * Field : cfg_dqstrk_en
 * 
 * Enables DQS tracking in the PHY.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_MSB        25
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_SET_MSK    0x02000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_CLR_MSK    0xfdffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : cfg_ctrl_enable_dm
 * 
 * Set to a one to enable DRAM operation if DM pins are connected.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_MSB        26
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_SET_MSK    0x04000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_CLR_MSK    0xfbffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : cfg_dbc0_enable_dm
 * 
 * Set to a one to enable DRAM operation if DM pins are connected.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_MSB        27
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_SET_MSK    0x08000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : cfg_dbc1_enable_dm
 * 
 * Set to a one to enable DRAM operation if DM pins are connected.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_MSB        28
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_SET_MSK    0x10000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_CLR_MSK    0xefffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : cfg_dbc2_enable_dm
 * 
 * Set to a one to enable DRAM operation if DM pins are connected.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_MSB        29
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_SET_MSK    0x20000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_CLR_MSK    0xdfffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : cfg_dbc3_enable_dm
 * 
 * Set to a one to enable DRAM operation if DM pins are connected.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_MSB        30
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_SET_MSK    0x40000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_CLR_MSK    0xbfffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM register field. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM_SET(value) (((value) << 30) & 0x40000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG1.
 */
struct ALT_IO48_HMC_MMR_CTLCFG1_s
{
    uint32_t  cfg_dbc3_burst_length  :  5;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_BURST_LEN */
    uint32_t  cfg_addr_order         :  2;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_ADDR_ORDER */
    uint32_t  cfg_ctrl_enable_ecc    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_ECC */
    uint32_t  cfg_dbc0_enable_ecc    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_ECC */
    uint32_t  cfg_dbc1_enable_ecc    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_ECC */
    uint32_t  cfg_dbc2_enable_ecc    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_ECC */
    uint32_t  cfg_dbc3_enable_ecc    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_ECC */
    uint32_t  cfg_reorder_data       :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_DATA */
    uint32_t  cfg_ctrl_reorder_rdata :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_REORDER_RDATA */
    uint32_t  cfg_dbc0_reorder_rdata :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_REORDER_RDATA */
    uint32_t  cfg_dbc1_reorder_rdata :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_REORDER_RDATA */
    uint32_t  cfg_dbc2_reorder_rdata :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_REORDER_RDATA */
    uint32_t  cfg_dbc3_reorder_rdata :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_REORDER_RDATA */
    uint32_t  cfg_reorder_read       :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_REORDER_RD */
    uint32_t  cfg_starve_limit       :  6;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_STARVE_LIMIT */
    uint32_t  cfg_dqstrk_en          :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DQSTRK_EN */
    uint32_t  cfg_ctrl_enable_dm     :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_CTL_EN_DM */
    uint32_t  cfg_dbc0_enable_dm     :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC0_EN_DM */
    uint32_t  cfg_dbc1_enable_dm     :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC1_EN_DM */
    uint32_t  cfg_dbc2_enable_dm     :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC2_EN_DM */
    uint32_t  cfg_dbc3_enable_dm     :  1;  /* ALT_IO48_HMC_MMR_CTLCFG1_CFG_DBC3_EN_DM */
    uint32_t                         :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG1. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG1_s  ALT_IO48_HMC_MMR_CTLCFG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG1 register. */
#define ALT_IO48_HMC_MMR_CTLCFG1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG1_OFST        0x2c

/*
 * Register : ctrlcfg2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD 
 *  [1]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD
 *  [2]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD
 *  [3]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD
 *  [4]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD
 *  [6:5]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 
 *  [8:7]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 
 *  [9]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL    
 *  [10]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL    
 *  [11]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL    
 *  [12]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL    
 *  [14:13] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL     
 *  [17:15] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT   
 *  [20:18] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT   
 *  [23:21] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT   
 *  [26:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT   
 *  [31:27] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : cfg_ctrl_output_regd
 * 
 * Set to one to register the HMC command output. Set to 0 to disable it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : cfg_dbc0_output_regd
 * 
 * Set to one to register the HMC command output. Set to 0 to disable it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_MSB        1
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_SET_MSK    0x00000002
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : cfg_dbc1_output_regd
 * 
 * Set to one to register the HMC command output. Set to 0 to disable it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_MSB        2
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_SET_MSK    0x00000004
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_CLR_MSK    0xfffffffb
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : cfg_dbc2_output_regd
 * 
 * Set to one to register the HMC command output. Set to 0 to disable it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_SET_MSK    0x00000008
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_CLR_MSK    0xfffffff7
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : cfg_dbc3_output_regd
 * 
 * Set to one to register the HMC command output. Set to 0 to disable it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_MSB        4
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_SET_MSK    0x00000010
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_CLR_MSK    0xffffffef
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : cfg_ctrl2dbc_switch0
 * 
 * Select of the MUX ctrl2dbc_switch0. 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_MSB        6
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_SET_MSK    0x00000060
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_CLR_MSK    0xffffff9f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_GET(value) (((value) & 0x00000060) >> 5)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0_SET(value) (((value) << 5) & 0x00000060)

/*
 * Field : cfg_ctrl2dbc_switch1
 * 
 * Select of the MUX ctrl2dbc_switch1. 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_SET_MSK    0x00000180
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_CLR_MSK    0xfffffe7f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_GET(value) (((value) & 0x00000180) >> 7)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1_SET(value) (((value) << 7) & 0x00000180)

/*
 * Field : cfg_dbc0_ctrl_sel
 * 
 * DBC0 - control path select. 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_MSB        9
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_SET_MSK    0x00000200
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_CLR_MSK    0xfffffdff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : cfg_dbc1_ctrl_sel
 * 
 * DBC1 - control path select. 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_MSB        10
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_SET_MSK    0x00000400
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_CLR_MSK    0xfffffbff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : cfg_dbc2_ctrl_sel
 * 
 * DBC2 - control path select. 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_SET_MSK    0x00000800
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : cfg_dbc3_ctrl_sel
 * 
 * DBC3 - control path select. 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_MSB        12
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : cfg_dbc2ctrl_sel
 * 
 * Specifies which DBC is driven by the local control path. 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_MSB        14
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_SET_MSK    0x00006000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_CLR_MSK    0xffff9fff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_GET(value) (((value) & 0x00006000) >> 13)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL_SET(value) (((value) << 13) & 0x00006000)

/*
 * Field : cfg_dbc0_pipe_lat
 * 
 * Specifies in number of controller clock cycles the latency of pipelining the
 * signals from control path to DBC0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_SET_MSK    0x00038000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_CLR_MSK    0xfffc7fff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_GET(value) (((value) & 0x00038000) >> 15)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT_SET(value) (((value) << 15) & 0x00038000)

/*
 * Field : cfg_dbc1_pipe_lat
 * 
 * Specifies in number of controller clock cycles the latency of pipelining the
 * signals from control path to DBC1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_MSB        20
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_SET_MSK    0x001c0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_CLR_MSK    0xffe3ffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_GET(value) (((value) & 0x001c0000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT_SET(value) (((value) << 18) & 0x001c0000)

/*
 * Field : cfg_dbc2_pipe_lat
 * 
 * Specifies in number of controller clock cycles the latency of pipelining the
 * signals from control path to DBC2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_SET_MSK    0x00e00000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_CLR_MSK    0xff1fffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_GET(value) (((value) & 0x00e00000) >> 21)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT_SET(value) (((value) << 21) & 0x00e00000)

/*
 * Field : cfg_dbc3_pipe_lat
 * 
 * Specifies in number of controller clock cycles the latency of pipelining the
 * signals from control path to DBC3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_MSB        26
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_SET_MSK    0x07000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_CLR_MSK    0xf8ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_GET(value) (((value) & 0x07000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT_SET(value) (((value) << 24) & 0x07000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG2.
 */
struct ALT_IO48_HMC_MMR_CTLCFG2_s
{
    uint32_t  cfg_ctrl_output_regd :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL_OUTPUT_REGD */
    uint32_t  cfg_dbc0_output_regd :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_OUTPUT_REGD */
    uint32_t  cfg_dbc1_output_regd :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_OUTPUT_REGD */
    uint32_t  cfg_dbc2_output_regd :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_OUTPUT_REGD */
    uint32_t  cfg_dbc3_output_regd :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_OUTPUT_REGD */
    uint32_t  cfg_ctrl2dbc_switch0 :  2;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH0 */
    uint32_t  cfg_ctrl2dbc_switch1 :  2;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_CTL2DBC_SWITCH1 */
    uint32_t  cfg_dbc0_ctrl_sel    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_CTL_SEL */
    uint32_t  cfg_dbc1_ctrl_sel    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_CTL_SEL */
    uint32_t  cfg_dbc2_ctrl_sel    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_CTL_SEL */
    uint32_t  cfg_dbc3_ctrl_sel    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_CTL_SEL */
    uint32_t  cfg_dbc2ctrl_sel     :  2;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2CTL_SEL */
    uint32_t  cfg_dbc0_pipe_lat    :  3;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC0_PIPE_LAT */
    uint32_t  cfg_dbc1_pipe_lat    :  3;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC1_PIPE_LAT */
    uint32_t  cfg_dbc2_pipe_lat    :  3;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC2_PIPE_LAT */
    uint32_t  cfg_dbc3_pipe_lat    :  3;  /* ALT_IO48_HMC_MMR_CTLCFG2_CFG_DBC3_PIPE_LAT */
    uint32_t                       :  5;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG2. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG2_s  ALT_IO48_HMC_MMR_CTLCFG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG2 register. */
#define ALT_IO48_HMC_MMR_CTLCFG2_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG2 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG2_OFST        0x30

/*
 * Register : ctrlcfg3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [2:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE      
 *  [5:3]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE     
 *  [8:6]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE     
 *  [11:9]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE     
 *  [14:12] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE     
 *  [15]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL   
 *  [16]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL  
 *  [17]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL  
 *  [18]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL  
 *  [19]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL  
 *  [20]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN   
 *  [21]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN  
 *  [22]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN  
 *  [23]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN  
 *  [24]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN  
 *  [25]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE      
 *  [26]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN      
 *  [27]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN         
 *  [30:28] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD
 *  [31]    | ???    | 0x0   | *UNDEFINED*                                    
 * 
 */
/*
 * Field : cfg_ctrl_cmd_rate
 * 
 * 3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_MSB        2
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_SET_MSK    0x00000007
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE_SET(value) (((value) << 0) & 0x00000007)

/*
 * Field : cfg_dbc0_cmd_rate
 * 
 * 3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_SET_MSK    0x00000038
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_CLR_MSK    0xffffffc7
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_GET(value) (((value) & 0x00000038) >> 3)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE_SET(value) (((value) << 3) & 0x00000038)

/*
 * Field : cfg_dbc1_cmd_rate
 * 
 * 3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_SET_MSK    0x000001c0
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_CLR_MSK    0xfffffe3f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_GET(value) (((value) & 0x000001c0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE_SET(value) (((value) << 6) & 0x000001c0)

/*
 * Field : cfg_dbc2_cmd_rate
 * 
 * 3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_SET_MSK    0x00000e00
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_CLR_MSK    0xfffff1ff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_GET(value) (((value) & 0x00000e00) >> 9)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE_SET(value) (((value) << 9) & 0x00000e00)

/*
 * Field : cfg_dbc3_cmd_rate
 * 
 * 3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_MSB        14
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_SET_MSK    0x00007000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_CLR_MSK    0xffff8fff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_GET(value) (((value) & 0x00007000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE_SET(value) (((value) << 12) & 0x00007000)

/*
 * Field : cfg_ctrl_in_protocol
 * 
 * 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_SET_MSK    0x00008000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_CLR_MSK    0xffff7fff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : cfg_dbc0_in_protocol
 * 
 * 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_MSB        16
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_SET_MSK    0x00010000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_CLR_MSK    0xfffeffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : cfg_dbc1_in_protocol
 * 
 * 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_SET_MSK    0x00020000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_CLR_MSK    0xfffdffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : cfg_dbc2_in_protocol
 * 
 * 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_MSB        18
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_SET_MSK    0x00040000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_CLR_MSK    0xfffbffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : cfg_dbc3_in_protocol
 * 
 * 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_MSB        19
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_SET_MSK    0x00080000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : cfg_ctrl_dualport_en
 * 
 * Enable the second command port for RLDRAM3 only (BL=2 or 4)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_MSB        20
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_SET_MSK    0x00100000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_CLR_MSK    0xffefffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : cfg_dbc0_dualport_en
 * 
 * Enable the second data port for RLDRAM3 only (BL=2 or 4)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_MSB        21
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_SET_MSK    0x00200000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_CLR_MSK    0xffdfffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : cfg_dbc1_dualport_en
 * 
 * Enable the second data port for RLDRAM3 only (BL=2 or 4)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_MSB        22
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_SET_MSK    0x00400000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_CLR_MSK    0xffbfffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : cfg_dbc2_dualport_en
 * 
 * Enable the second data port for RLDRAM3 only (BL=2 or 4)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_SET_MSK    0x00800000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_CLR_MSK    0xff7fffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : cfg_dbc3_dualport_en
 * 
 * Enable the second data port for RLDRAM3 only (BL=2 or 4)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_MSB        24
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_SET_MSK    0x01000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_CLR_MSK    0xfeffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : cfg_arbiter_type
 * 
 * Indicates controller arbiter operating mode. Set this to: - 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_MSB        25
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_SET_MSK    0x02000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_CLR_MSK    0xfdffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : cfg_open_page_en
 * 
 * Set to 1 to enable the open page policy when command reordering is disabled
 * (cfg_cmd_reorder = 0). This bit does not matter when cfg_cmd_reorder is 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_MSB        26
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_SET_MSK    0x04000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_CLR_MSK    0xfbffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : cfg_geardn_en
 * 
 * Set to 1 to enable the gear down mode for DDR4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_MSB        27
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_SET_MSK    0x08000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : cfg_rld3_multibank_mode
 * 
 * Multibank setting, specific for RLDRAM3. Set this to: - 3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_MSB        30
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_SET_MSK    0x70000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_CLR_MSK    0x8fffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_GET(value) (((value) & 0x70000000) >> 28)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD_SET(value) (((value) << 28) & 0x70000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG3.
 */
struct ALT_IO48_HMC_MMR_CTLCFG3_s
{
    uint32_t  cfg_ctrl_cmd_rate       :  3;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_CMD_RATE */
    uint32_t  cfg_dbc0_cmd_rate       :  3;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_CMD_RATE */
    uint32_t  cfg_dbc1_cmd_rate       :  3;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_CMD_RATE */
    uint32_t  cfg_dbc2_cmd_rate       :  3;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_CMD_RATE */
    uint32_t  cfg_dbc3_cmd_rate       :  3;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_CMD_RATE */
    uint32_t  cfg_ctrl_in_protocol    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_IN_PROTOCOL */
    uint32_t  cfg_dbc0_in_protocol    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_IN_PROTOCOL */
    uint32_t  cfg_dbc1_in_protocol    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_IN_PROTOCOL */
    uint32_t  cfg_dbc2_in_protocol    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_IN_PROTOCOL */
    uint32_t  cfg_dbc3_in_protocol    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_IN_PROTOCOL */
    uint32_t  cfg_ctrl_dualport_en    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_CTL_DUALPORT_EN */
    uint32_t  cfg_dbc0_dualport_en    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC0_DUALPORT_EN */
    uint32_t  cfg_dbc1_dualport_en    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC1_DUALPORT_EN */
    uint32_t  cfg_dbc2_dualport_en    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC2_DUALPORT_EN */
    uint32_t  cfg_dbc3_dualport_en    :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_DBC3_DUALPORT_EN */
    uint32_t  cfg_arbiter_type        :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_ARBITER_TYPE */
    uint32_t  cfg_open_page_en        :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_OPEN_PAGE_EN */
    uint32_t  cfg_geardn_en           :  1;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_GEARDN_EN */
    uint32_t  cfg_rld3_multibank_mode :  3;  /* ALT_IO48_HMC_MMR_CTLCFG3_CFG_RLD3_MULTIBANK_MOD */
    uint32_t                          :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG3. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG3_s  ALT_IO48_HMC_MMR_CTLCFG3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG3 register. */
#define ALT_IO48_HMC_MMR_CTLCFG3_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG3 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG3_OFST        0x34

/*
 * Register : ctrlcfg4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                     
 * :--------|:-------|:------|:-------------------------------------------------
 *  [4:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID            
 *  [6:5]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD       
 *  [9:7]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN 
 *  [12:10] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN
 *  [15:13] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN
 *  [18:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN
 *  [21:19] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN
 *  [23:22] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET    
 *  [25:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET   
 *  [27:26] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET   
 *  [29:28] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET   
 *  [31:30] | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET   
 * 
 */
/*
 * Field : cfg_tile_id
 * 
 * Tile ID
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_MSB        4
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_SET_MSK    0x0000001f
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_CLR_MSK    0xffffffe0
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : cfg_pingpong_mode
 * 
 * Ping Pong mode: 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_MSB        6
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_SET_MSK    0x00000060
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_CLR_MSK    0xffffff9f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_GET(value) (((value) & 0x00000060) >> 5)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD_SET(value) (((value) << 5) & 0x00000060)

/*
 * Field : cfg_ctrl_slot_rotate_en
 * 
 * Cmd slot rotate enable: bit[0] controls write, 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_MSB        9
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_SET_MSK    0x00000380
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_CLR_MSK    0xfffffc7f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_GET(value) (((value) & 0x00000380) >> 7)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN_SET(value) (((value) << 7) & 0x00000380)

/*
 * Field : cfg_dbc0_slot_rotate_en
 * 
 * DBC0 slot rotate enable: bit[0] controls write, 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_MSB        12
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_SET_MSK    0x00001c00
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_CLR_MSK    0xffffe3ff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_GET(value) (((value) & 0x00001c00) >> 10)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN_SET(value) (((value) << 10) & 0x00001c00)

/*
 * Field : cfg_dbc1_slot_rotate_en
 * 
 * DBC1 slot rotate enable: bit[0] controls write, 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_SET_MSK    0x0000e000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_CLR_MSK    0xffff1fff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_GET(value) (((value) & 0x0000e000) >> 13)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN_SET(value) (((value) << 13) & 0x0000e000)

/*
 * Field : cfg_dbc2_slot_rotate_en
 * 
 * DBC2 slot rotate enable: bit[0] controls write, 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_MSB        18
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_SET_MSK    0x00070000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN_SET(value) (((value) << 16) & 0x00070000)

/*
 * Field : cfg_dbc3_slot_rotate_en
 * 
 * DBC3 slot rotate enable: bit[0] controls write, 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_MSB        21
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_SET_MSK    0x00380000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : cfg_ctrl_slot_offset
 * 
 * Enables afi information to be offset by numbers of FR cycles. Affected afi
 * signal is afi_rdata_en, afi_rdata_en_full, afi_wdata_valid, afi_dqs_burst,
 * afi_mrnk_write and afi_mrnk_read. Set this to: - 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_SET_MSK    0x00c00000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_CLR_MSK    0xff3fffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_GET(value) (((value) & 0x00c00000) >> 22)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET_SET(value) (((value) << 22) & 0x00c00000)

/*
 * Field : cfg_dbc0_slot_offset
 * 
 * Enables afi information to be offset by numbers of FR cycles. Affected afi
 * signal is afi_rdata_en, afi_rdata_en_full, afi_wdata_valid, afi_dqs_burst,
 * afi_mrnk_write and afi_mrnk_read. Set this to: - 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_MSB        25
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_SET_MSK    0x03000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_CLR_MSK    0xfcffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : cfg_dbc1_slot_offset
 * 
 * Enables afi information to be offset by numbers of FR cycles. Affected afi
 * signal is afi_rdata_en, afi_rdata_en_full, afi_wdata_valid, afi_dqs_burst,
 * afi_mrnk_write and afi_mrnk_read. Set this to: - 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_MSB        27
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_SET_MSK    0x0c000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_CLR_MSK    0xf3ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_GET(value) (((value) & 0x0c000000) >> 26)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET_SET(value) (((value) << 26) & 0x0c000000)

/*
 * Field : cfg_dbc2_slot_offset
 * 
 * Enables afi information to be offset by numbers of FR cycles. Affected afi
 * signal is afi_rdata_en, afi_rdata_en_full, afi_wdata_valid, afi_dqs_burst,
 * afi_mrnk_write and afi_mrnk_read. Set this to: - 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_MSB        29
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_SET_MSK    0x30000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_CLR_MSK    0xcfffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_GET(value) (((value) & 0x30000000) >> 28)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET_SET(value) (((value) << 28) & 0x30000000)

/*
 * Field : cfg_dbc3_slot_offset
 * 
 * Enables afi information to be offset by numbers of FR cycles. Affected afi
 * signal is afi_rdata_en, afi_rdata_en_full, afi_wdata_valid, afi_dqs_burst,
 * afi_mrnk_write and afi_mrnk_read. Set this to: - 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_SET_MSK    0xc0000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_CLR_MSK    0x3fffffff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET register field. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_GET(value) (((value) & 0xc0000000) >> 30)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET_SET(value) (((value) << 30) & 0xc0000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG4.
 */
struct ALT_IO48_HMC_MMR_CTLCFG4_s
{
    uint32_t  cfg_tile_id             :  5;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_TILE_ID */
    uint32_t  cfg_pingpong_mode       :  2;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_PINGPONG_MOD */
    uint32_t  cfg_ctrl_slot_rotate_en :  3;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_ROTATE_EN */
    uint32_t  cfg_dbc0_slot_rotate_en :  3;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_ROTATE_EN */
    uint32_t  cfg_dbc1_slot_rotate_en :  3;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_ROTATE_EN */
    uint32_t  cfg_dbc2_slot_rotate_en :  3;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_ROTATE_EN */
    uint32_t  cfg_dbc3_slot_rotate_en :  3;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_ROTATE_EN */
    uint32_t  cfg_ctrl_slot_offset    :  2;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_CTL_SLOT_OFFSET */
    uint32_t  cfg_dbc0_slot_offset    :  2;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC0_SLOT_OFFSET */
    uint32_t  cfg_dbc1_slot_offset    :  2;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC1_SLOT_OFFSET */
    uint32_t  cfg_dbc2_slot_offset    :  2;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC2_SLOT_OFFSET */
    uint32_t  cfg_dbc3_slot_offset    :  2;  /* ALT_IO48_HMC_MMR_CTLCFG4_CFG_DBC3_SLOT_OFFSET */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG4. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG4_s  ALT_IO48_HMC_MMR_CTLCFG4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG4 register. */
#define ALT_IO48_HMC_MMR_CTLCFG4_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG4 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG4_OFST        0x38

/*
 * Register : ctrlcfg5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [3:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT
 *  [7:4]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT
 *  [8]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN   
 *  [9]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN  
 *  [10]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN  
 *  [11]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN  
 *  [12]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN  
 *  [31:13] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : cfg_col_cmd_slot
 * 
 * Specify the col cmd slot. One hot encoding.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : cfg_row_cmd_slot
 * 
 * Specify the row cmd slot. One hot encoding.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_MSB        7
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_SET_MSK    0x000000f0
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_CLR_MSK    0xffffff0f
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_GET(value) (((value) & 0x000000f0) >> 4)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT_SET(value) (((value) << 4) & 0x000000f0)

/*
 * Field : cfg_ctrl_rc_en
 * 
 * Set to 1 to enable the rate conversion. It converts QR input from core to HR
 * inside HMC
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : cfg_dbc0_rc_en
 * 
 * Set to 1 to enable the rate conversion. It converts QR input from core to HR
 * inside HMC
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_MSB        9
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_SET_MSK    0x00000200
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : cfg_dbc1_rc_en
 * 
 * Set to 1 to enable the rate conversion. It converts QR input from core to HR
 * inside HMC
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_MSB        10
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_SET_MSK    0x00000400
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : cfg_dbc2_rc_en
 * 
 * Set to 1 to enable the rate conversion. It converts QR input from core to HR
 * inside HMC
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_SET_MSK    0x00000800
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : cfg_dbc3_rc_en
 * 
 * Set to 1 to enable the rate conversion. It converts QR input from core to HR
 * inside HMC
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_MSB        12
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_SET_MSK    0x00001000
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_CLR_MSK    0xffffefff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN_SET(value) (((value) << 12) & 0x00001000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG5.
 */
struct ALT_IO48_HMC_MMR_CTLCFG5_s
{
    uint32_t  cfg_col_cmd_slot :  4;  /* ALT_IO48_HMC_MMR_CTLCFG5_CFG_COL_CMD_SLOT */
    uint32_t  cfg_row_cmd_slot :  4;  /* ALT_IO48_HMC_MMR_CTLCFG5_CFG_ROW_CMD_SLOT */
    uint32_t  cfg_ctrl_rc_en   :  1;  /* ALT_IO48_HMC_MMR_CTLCFG5_CFG_CTL_RC_EN */
    uint32_t  cfg_dbc0_rc_en   :  1;  /* ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC0_RC_EN */
    uint32_t  cfg_dbc1_rc_en   :  1;  /* ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC1_RC_EN */
    uint32_t  cfg_dbc2_rc_en   :  1;  /* ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC2_RC_EN */
    uint32_t  cfg_dbc3_rc_en   :  1;  /* ALT_IO48_HMC_MMR_CTLCFG5_CFG_DBC3_RC_EN */
    uint32_t                   : 19;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG5. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG5_s  ALT_IO48_HMC_MMR_CTLCFG5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG5 register. */
#define ALT_IO48_HMC_MMR_CTLCFG5_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG5 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG5_OFST        0x3c

/*
 * Register : ctrlcfg6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : cfg_cs_chip
 * 
 * Chip select mapping scheme. Mapping seperated into 4 sections:
 * [CS3][CS2][CS1][CS0] Each section consists of 4 bits to indicate which CS_n
 * signal should be active when command goes to current CS. Eg: if we set to 16
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP register field. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP register field. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP register field. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP register field. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG6.
 */
struct ALT_IO48_HMC_MMR_CTLCFG6_s
{
    uint32_t  cfg_cs_chip : 16;  /* ALT_IO48_HMC_MMR_CTLCFG6_CFG_CS_CHIP */
    uint32_t              : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG6. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG6_s  ALT_IO48_HMC_MMR_CTLCFG6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG6 register. */
#define ALT_IO48_HMC_MMR_CTLCFG6_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG6 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG6_OFST        0x40

/*
 * Register : ctrlcfg7
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN 
 *  [7:1]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY
 *  [14:8]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY
 *  [31:15] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : cfg_clkgating_en
 * 
 * Set to 1 to enable the clock gating. The clock is shut off for the whole HMC
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : cfg_rb_reserved_entry
 * 
 * Specify how many enties are reserved in read buffer before almost full is
 * asserted
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_MSB        7
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_WIDTH      7
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_SET_MSK    0x000000fe
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_CLR_MSK    0xffffff01
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_GET(value) (((value) & 0x000000fe) >> 1)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY_SET(value) (((value) << 1) & 0x000000fe)

/*
 * Field : cfg_wb_reserved_entry
 * 
 * Specify how many enties are reserved in write buffer before almost full is
 * asserted
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_MSB        14
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_WIDTH      7
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_SET_MSK    0x00007f00
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_CLR_MSK    0xffff80ff
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY register field. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_GET(value) (((value) & 0x00007f00) >> 8)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY_SET(value) (((value) << 8) & 0x00007f00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG7.
 */
struct ALT_IO48_HMC_MMR_CTLCFG7_s
{
    uint32_t  cfg_clkgating_en      :  1;  /* ALT_IO48_HMC_MMR_CTLCFG7_CFG_CLKGATING_EN */
    uint32_t  cfg_rb_reserved_entry :  7;  /* ALT_IO48_HMC_MMR_CTLCFG7_CFG_RB_RSVD_ENTRY */
    uint32_t  cfg_wb_reserved_entry :  7;  /* ALT_IO48_HMC_MMR_CTLCFG7_CFG_WB_RSVD_ENTRY */
    uint32_t                        : 17;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG7. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG7_s  ALT_IO48_HMC_MMR_CTLCFG7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG7 register. */
#define ALT_IO48_HMC_MMR_CTLCFG7_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG7 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG7_OFST        0x44

/*
 * Register : ctrlcfg8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN      
 *  [1]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV      
 *  [2]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : cfg_3ds_en
 * 
 * Setting to 1 to enable #DS support for DDR4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : cfg_ck_inv
 * 
 * Use to program CK polarity. 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_MSB        1
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_SET_MSK    0x00000002
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_CLR_MSK    0xfffffffd
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : cfg_addr_mplx_en
 * 
 * Setting to 1 enables RLD3 address mulplex mode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_MSB        2
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG8.
 */
struct ALT_IO48_HMC_MMR_CTLCFG8_s
{
    uint32_t  cfg_3ds_en       :  1;  /* ALT_IO48_HMC_MMR_CTLCFG8_CFG_3DS_EN */
    uint32_t  cfg_ck_inv       :  1;  /* ALT_IO48_HMC_MMR_CTLCFG8_CFG_CK_INV */
    uint32_t  cfg_addr_mplx_en :  1;  /* ALT_IO48_HMC_MMR_CTLCFG8_CFG_ADDR_MPLX_EN */
    uint32_t                   : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG8. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG8_s  ALT_IO48_HMC_MMR_CTLCFG8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG8 register. */
#define ALT_IO48_HMC_MMR_CTLCFG8_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG8 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG8_OFST        0x48

/*
 * Register : ctrlcfg9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : cfg_dfx_bypass_en
 * 
 * Used for dft and timing characterization only. 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN register field value. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN register field. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN field value from a register. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CTLCFG9.
 */
struct ALT_IO48_HMC_MMR_CTLCFG9_s
{
    uint32_t  cfg_dfx_bypass_en :  1;  /* ALT_IO48_HMC_MMR_CTLCFG9_CFG_DFX_BYPASS_EN */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CTLCFG9. */
typedef volatile struct ALT_IO48_HMC_MMR_CTLCFG9_s  ALT_IO48_HMC_MMR_CTLCFG9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CTLCFG9 register. */
#define ALT_IO48_HMC_MMR_CTLCFG9_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CTLCFG9 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CTLCFG9_OFST        0x4c

/*
 * Register : dramtiming0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                              
 * :--------|:-------|:------|:----------------------------------------------------------
 *  [6:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL                     
 *  [12:7]  | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES
 *  [18:13] | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                                              
 * 
 */
/*
 * Field : cfg_tcl
 * 
 * Memory read latency.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_MSB        6
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_WIDTH      7
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL register field value. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_SET_MSK    0x0000007f
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL register field value. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_CLR_MSK    0xffffff80
/* The reset value of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : cfg_power_saving_exit_cycles
 * 
 * The minimum number of cycles to stay in a low power state. This applies to both
 * power down and self-refresh and should be set to the greater of tPD and tCKESR.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_MSB        12
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES register field value. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_SET_MSK    0x00001f80
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES register field value. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_CLR_MSK    0xffffe07f
/* The reset value of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_GET(value) (((value) & 0x00001f80) >> 7)
/* Produces a ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES_SET(value) (((value) << 7) & 0x00001f80)

/*
 * Field : cfg_mem_clk_disable_entry_cycles
 * 
 * Set to a the number of clocks after the execution of an self-refresh to stop the
 * clock. This register is generally set based on PHY design latency and should
 * generally not be changed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_MSB        18
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES register field value. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_SET_MSK    0x0007e000
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES register field value. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_CLR_MSK    0xfff81fff
/* The reset value of the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES register field. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_GET(value) (((value) & 0x0007e000) >> 13)
/* Produces a ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES_SET(value) (((value) << 13) & 0x0007e000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DRAMTIMING0.
 */
struct ALT_IO48_HMC_MMR_DRAMTIMING0_s
{
    uint32_t  cfg_tcl                          :  7;  /* ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_TCL */
    uint32_t  cfg_power_saving_exit_cycles     :  6;  /* ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_POWER_SAVING_EXIT_CYCLES */
    uint32_t  cfg_mem_clk_disable_entry_cycles :  6;  /* ALT_IO48_HMC_MMR_DRAMTIMING0_CFG_MEM_CLK_DIS_ENTRY_CYCLES */
    uint32_t                                   : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DRAMTIMING0. */
typedef volatile struct ALT_IO48_HMC_MMR_DRAMTIMING0_s  ALT_IO48_HMC_MMR_DRAMTIMING0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DRAMTIMING0 register. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DRAMTIMING0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DRAMTIMING0_OFST        0x50

/*
 * Register : dramodt0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP
 *  [31:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP
 * 
 */
/*
 * Field : cfg_write_odt_chip
 * 
 * ODT scheme setting for write command. Setting seperated into 4 sections:
 * [CS3][CS2][CS1][CS0] Each section consists of 4 bits to indicate which chip
 * should ODT be asserted when write occurs on current CS. Eg: if we set to 16
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : cfg_read_odt_chip
 * 
 * ODT scheme setting for read command. Setting seperated into 4 sections:
 * [CS3][CS2][CS1][CS0] Each section consists of 4 bits to indicate which chip
 * should ODT be asserted when write occurs on current CS. Eg: if we set to 16
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_SET_MSK    0xffff0000
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_CLR_MSK    0x0000ffff
/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP register field. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DRAMODT0.
 */
struct ALT_IO48_HMC_MMR_DRAMODT0_s
{
    uint32_t  cfg_write_odt_chip : 16;  /* ALT_IO48_HMC_MMR_DRAMODT0_CFG_WR_ODT_CHIP */
    uint32_t  cfg_read_odt_chip  : 16;  /* ALT_IO48_HMC_MMR_DRAMODT0_CFG_RD_ODT_CHIP */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DRAMODT0. */
typedef volatile struct ALT_IO48_HMC_MMR_DRAMODT0_s  ALT_IO48_HMC_MMR_DRAMODT0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT0 register. */
#define ALT_IO48_HMC_MMR_DRAMODT0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DRAMODT0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DRAMODT0_OFST        0x54

/*
 * Register : dramodt1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                
 * :--------|:-------|:------|:--------------------------------------------
 *  [5:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON    
 *  [11:6]  | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON    
 *  [17:12] | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD
 *  [23:18] | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : cfg_wr_odt_on
 * 
 * Indicates number of memory clock cycle gap between write command and ODT signal
 * rising edge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_SET_MSK    0x0000003f
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_CLR_MSK    0xffffffc0
/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : cfg_rd_odt_on
 * 
 * Indicates number of memory clock cycle gap between read command and ODT signal
 * rising edge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_SET_MSK    0x00000fc0
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_CLR_MSK    0xfffff03f
/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_GET(value) (((value) & 0x00000fc0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON_SET(value) (((value) << 6) & 0x00000fc0)

/*
 * Field : cfg_wr_odt_period
 * 
 * Indicates number of memory clock cycle write ODT signal should stay asserted
 * after rising edge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_SET_MSK    0x0003f000
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_CLR_MSK    0xfffc0fff
/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_GET(value) (((value) & 0x0003f000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD_SET(value) (((value) << 12) & 0x0003f000)

/*
 * Field : cfg_rd_odt_period
 * 
 * Indicates number of memory clock cycle read ODT signal should stay asserted
 * after rising edge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_SET_MSK    0x00fc0000
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_CLR_MSK    0xff03ffff
/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD register field. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_GET(value) (((value) & 0x00fc0000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD_SET(value) (((value) << 18) & 0x00fc0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DRAMODT1.
 */
struct ALT_IO48_HMC_MMR_DRAMODT1_s
{
    uint32_t  cfg_wr_odt_on     :  6;  /* ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_ON */
    uint32_t  cfg_rd_odt_on     :  6;  /* ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_ON */
    uint32_t  cfg_wr_odt_period :  6;  /* ALT_IO48_HMC_MMR_DRAMODT1_CFG_WR_ODT_PERIOD */
    uint32_t  cfg_rd_odt_period :  6;  /* ALT_IO48_HMC_MMR_DRAMODT1_CFG_RD_ODT_PERIOD */
    uint32_t                    :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DRAMODT1. */
typedef volatile struct ALT_IO48_HMC_MMR_DRAMODT1_s  ALT_IO48_HMC_MMR_DRAMODT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DRAMODT1 register. */
#define ALT_IO48_HMC_MMR_DRAMODT1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DRAMODT1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DRAMODT1_OFST        0x58

/*
 * Register : sbcfg0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0
 *  [31:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1
 * 
 */
/*
 * Field : cfg_rld3_refresh_seq0
 * 
 * Banks to Refresh for RLD3 in sequence 0. Must not be more than 4 banks
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : cfg_rld3_refresh_seq1
 * 
 * Banks to Refresh for RLD3 in sequence 1. Must not be more than 4 banks
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_SET_MSK    0xffff0000
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_CLR_MSK    0x0000ffff
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 register field. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG0.
 */
struct ALT_IO48_HMC_MMR_SBCFG0_s
{
    uint32_t  cfg_rld3_refresh_seq0 : 16;  /* ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ0 */
    uint32_t  cfg_rld3_refresh_seq1 : 16;  /* ALT_IO48_HMC_MMR_SBCFG0_CFG_RLD3_REFRESH_SEQ1 */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG0. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG0_s  ALT_IO48_HMC_MMR_SBCFG0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG0 register. */
#define ALT_IO48_HMC_MMR_SBCFG0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG0_OFST        0x5c

/*
 * Register : sbcfg1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2
 *  [31:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3
 * 
 */
/*
 * Field : cfg_rld3_refresh_seq2
 * 
 * Banks to Refresh for RLD3 in sequence 2. Must not be more than 4 banks
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : cfg_rld3_refresh_seq3
 * 
 * Banks to Refresh for RLD3 in sequence 3. Must not be more than 4 banks
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_SET_MSK    0xffff0000
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_CLR_MSK    0x0000ffff
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG1.
 */
struct ALT_IO48_HMC_MMR_SBCFG1_s
{
    uint32_t  cfg_rld3_refresh_seq2 : 16;  /* ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ2 */
    uint32_t  cfg_rld3_refresh_seq3 : 16;  /* ALT_IO48_HMC_MMR_SBCFG1_CFG_RLD3_REFRESH_SEQ3 */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG1. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG1_s  ALT_IO48_HMC_MMR_SBCFG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG1 register. */
#define ALT_IO48_HMC_MMR_SBCFG1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG1_OFST        0x60

/*
 * Register : sbcfg2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                     
 * :-------|:-------|:------|:-------------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS       
 *  [1]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS       
 *  [2]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS      
 *  [3]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS           
 *  [4]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN        
 *  [5]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN     
 *  [7:6]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                                     
 * 
 */
/*
 * Field : cfg_srf_zqcal_disable
 * 
 * Set to 1 to disable ZQ Calibration after self refresh
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : cfg_mps_zqcal_disable
 * 
 * Set to 1 to disable ZQ Calibration after Maximum Power Saving exit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_MSB        1
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_SET_MSK    0x00000002
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : cfg_mps_dqstrk_disable
 * 
 * Set to 1 to disable DQS Tracking after Maximum Power Saving exit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_MSB        2
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_SET_MSK    0x00000004
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_CLR_MSK    0xfffffffb
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : cfg_sb_cg_disable
 * 
 * Set to 1 to disable mem_ck gating during self refresh and deep power down
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_SET_MSK    0x00000008
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_CLR_MSK    0xfffffff7
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : cfg_user_rfsh_en
 * 
 * Setting to 1 to enable user refresh
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_MSB        4
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : cfg_srf_autoexit_en
 * 
 * Setting to 1 to enable controller to exit Self Refresh when new command is
 * detected
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : cfg_srf_entry_exit_block
 * 
 * Blocking arbiter from issuing cmds for the 4 cases, 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_MSB        7
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_SET_MSK    0x000000c0
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK register field value. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_CLR_MSK    0xffffff3f
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK register field. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK_SET(value) (((value) << 6) & 0x000000c0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG2.
 */
struct ALT_IO48_HMC_MMR_SBCFG2_s
{
    uint32_t  cfg_srf_zqcal_disable    :  1;  /* ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ZQCAL_DIS */
    uint32_t  cfg_mps_zqcal_disable    :  1;  /* ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_ZQCAL_DIS */
    uint32_t  cfg_mps_dqstrk_disable   :  1;  /* ALT_IO48_HMC_MMR_SBCFG2_CFG_MPS_DQSTRK_DIS */
    uint32_t  cfg_sb_cg_disable        :  1;  /* ALT_IO48_HMC_MMR_SBCFG2_CFG_SB_CG_DIS */
    uint32_t  cfg_user_rfsh_en         :  1;  /* ALT_IO48_HMC_MMR_SBCFG2_CFG_USER_RFSH_EN */
    uint32_t  cfg_srf_autoexit_en      :  1;  /* ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_AUTOEXIT_EN */
    uint32_t  cfg_srf_entry_exit_block :  2;  /* ALT_IO48_HMC_MMR_SBCFG2_CFG_SRF_ENTRY_EXIT_BLOCK */
    uint32_t                           : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG2. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG2_s  ALT_IO48_HMC_MMR_SBCFG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG2 register. */
#define ALT_IO48_HMC_MMR_SBCFG2_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG2 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG2_OFST        0x64

/*
 * Register : sbcfg3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [19:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3
 *  [31:20] | ???    | 0x0   | *UNDEFINED*                            
 * 
 */
/*
 * Field : cfg_sb_ddr4_mr3
 * 
 * This register stores the DDR4 MR3 Content
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_MSB        19
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_WIDTH      20
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_SET_MSK    0x000fffff
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_CLR_MSK    0xfff00000
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 register field. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_GET(value) (((value) & 0x000fffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3_SET(value) (((value) << 0) & 0x000fffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG3.
 */
struct ALT_IO48_HMC_MMR_SBCFG3_s
{
    uint32_t  cfg_sb_ddr4_mr3 : 20;  /* ALT_IO48_HMC_MMR_SBCFG3_CFG_SB_DDR4_MR3 */
    uint32_t                  : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG3. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG3_s  ALT_IO48_HMC_MMR_SBCFG3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG3 register. */
#define ALT_IO48_HMC_MMR_SBCFG3_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG3 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG3_OFST        0x68

/*
 * Register : sbcfg4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [19:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4
 *  [31:20] | ???    | 0x0   | *UNDEFINED*                            
 * 
 */
/*
 * Field : cfg_sb_ddr4_mr4
 * 
 * This register stores the DDR4 MR4 Content
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 register field. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 register field. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_MSB        19
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 register field. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_WIDTH      20
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_SET_MSK    0x000fffff
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 register field value. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_CLR_MSK    0xfff00000
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 register field. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_GET(value) (((value) & 0x000fffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4_SET(value) (((value) << 0) & 0x000fffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG4.
 */
struct ALT_IO48_HMC_MMR_SBCFG4_s
{
    uint32_t  cfg_sb_ddr4_mr4 : 20;  /* ALT_IO48_HMC_MMR_SBCFG4_CFG_SB_DDR4_MR4 */
    uint32_t                  : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG4. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG4_s  ALT_IO48_HMC_MMR_SBCFG4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG4 register. */
#define ALT_IO48_HMC_MMR_SBCFG4_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG4 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG4_OFST        0x6c

/*
 * Register : sbcfg5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                     
 * :-------|:-------|:------|:-------------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN 
 *  [1]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                                     
 * 
 */
/*
 * Field : cfg_short_dqstrk_ctrl_en
 * 
 * Set to 1 to enable controller controlled DQS short tracking, Set to 0 to enable
 * sequencer controlled DQS short tracking
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : cfg_period_dqstrk_ctrl_en
 * 
 * Set to 1 to enable controller to issue periodic DQS tracking
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_MSB        1
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN register field value. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN register field. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG5.
 */
struct ALT_IO48_HMC_MMR_SBCFG5_s
{
    uint32_t  cfg_short_dqstrk_ctrl_en  :  1;  /* ALT_IO48_HMC_MMR_SBCFG5_CFG_SHORT_DQSTRK_CTL_EN */
    uint32_t  cfg_period_dqstrk_ctrl_en :  1;  /* ALT_IO48_HMC_MMR_SBCFG5_CFG_PERIOD_DQSTRK_CTL_EN */
    uint32_t                            : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG5. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG5_s  ALT_IO48_HMC_MMR_SBCFG5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG5 register. */
#define ALT_IO48_HMC_MMR_SBCFG5_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG5 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG5_OFST        0x70

/*
 * Register : sbcfg6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                             
 * :--------|:-------|:------|:---------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL      
 *  [23:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST
 *  [31:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID     
 * 
 */
/*
 * Field : cfg_period_dqstrk_interval
 * 
 * Inverval between two controller controlled periodic DQS tracking
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL register field value. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL register field value. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : cfg_t_param_dqstrk_to_valid_last
 * 
 * DQS Tracking Rd to Valid timing for the last Rank
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_WIDTH      8
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST register field value. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST register field value. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_CLR_MSK    0xff00ffff
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : cfg_t_param_dqstrk_to_valid
 * 
 * DQS Tracking Rd to Valid timing for Ranks other than the Last
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_WIDTH      8
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_SET_MSK    0xff000000
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_CLR_MSK    0x00ffffff
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG6.
 */
struct ALT_IO48_HMC_MMR_SBCFG6_s
{
    uint32_t  cfg_period_dqstrk_interval       : 16;  /* ALT_IO48_HMC_MMR_SBCFG6_CFG_PERIOD_DQSTRK_INTERVAL */
    uint32_t  cfg_t_param_dqstrk_to_valid_last :  8;  /* ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID_LAST */
    uint32_t  cfg_t_param_dqstrk_to_valid      :  8;  /* ALT_IO48_HMC_MMR_SBCFG6_CFG_T_PARAM_DQSTRK_TO_VALID */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG6. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG6_s  ALT_IO48_HMC_MMR_SBCFG6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG6 register. */
#define ALT_IO48_HMC_MMR_SBCFG6_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG6 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG6_OFST        0x74

/*
 * Register : sbcfg7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                    
 * :-------|:-------|:------|:------------------------------------------------
 *  [6:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD
 *  [31:7] | ???    | 0x0   | *UNDEFINED*                                    
 * 
 */
/*
 * Field : cfg_rfsh_warn_threshold
 * 
 * Threshold to warn a refresh is needed within the number of controller clock
 * cycles specified by the threshold
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD register field. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD register field. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_MSB        6
/* The width in bits of the ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD register field. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_WIDTH      7
/* The mask used to set the ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD register field value. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_SET_MSK    0x0000007f
/* The mask used to clear the ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD register field value. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_CLR_MSK    0xffffff80
/* The reset value of the ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD register field. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD field value from a register. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD_SET(value) (((value) << 0) & 0x0000007f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SBCFG7.
 */
struct ALT_IO48_HMC_MMR_SBCFG7_s
{
    uint32_t  cfg_rfsh_warn_threshold :  7;  /* ALT_IO48_HMC_MMR_SBCFG7_CFG_RFSH_WARN_THRESHOLD */
    uint32_t                          : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SBCFG7. */
typedef volatile struct ALT_IO48_HMC_MMR_SBCFG7_s  ALT_IO48_HMC_MMR_SBCFG7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SBCFG7 register. */
#define ALT_IO48_HMC_MMR_SBCFG7_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SBCFG7 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SBCFG7_OFST        0x78

/*
 * Register : caltiming0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                                 
 * :--------|:-------|:------|:-------------------------------------------------------------
 *  [5:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR         
 *  [11:6]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH          
 *  [17:12] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT          
 *  [23:18] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK
 *  [29:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG  
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : cfg_t_param_act_to_rdwr
 * 
 * Activate to Read/write command timing
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_SET_MSK    0x0000003f
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_CLR_MSK    0xffffffc0
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : cfg_t_param_act_to_pch
 * 
 * Active to precharge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_SET_MSK    0x00000fc0
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_CLR_MSK    0xfffff03f
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_GET(value) (((value) & 0x00000fc0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH_SET(value) (((value) << 6) & 0x00000fc0)

/*
 * Field : cfg_t_param_act_to_act
 * 
 * Active to activate timing on same bank
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_SET_MSK    0x0003f000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_CLR_MSK    0xfffc0fff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_GET(value) (((value) & 0x0003f000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_SET(value) (((value) << 12) & 0x0003f000)

/*
 * Field : cfg_t_param_act_to_act_diff_bank
 * 
 * Active to activate timing on different banks, for DDR4 same bank group
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_SET_MSK    0x00fc0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_CLR_MSK    0xff03ffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_GET(value) (((value) & 0x00fc0000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK_SET(value) (((value) << 18) & 0x00fc0000)

/*
 * Field : cfg_t_param_act_to_act_diff_bg
 * 
 * Active to activate timing on different bank groups, DDR4 only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_MSB        29
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_SET_MSK    0x3f000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_CLR_MSK    0xc0ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_GET(value) (((value) & 0x3f000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG_SET(value) (((value) << 24) & 0x3f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING0.
 */
struct ALT_IO48_HMC_MMR_CALTIMING0_s
{
    uint32_t  cfg_t_param_act_to_rdwr          :  6;  /* ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_RDWR */
    uint32_t  cfg_t_param_act_to_pch           :  6;  /* ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_PCH */
    uint32_t  cfg_t_param_act_to_act           :  6;  /* ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT */
    uint32_t  cfg_t_param_act_to_act_diff_bank :  6;  /* ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BANK */
    uint32_t  cfg_t_param_act_to_act_diff_bg   :  6;  /* ALT_IO48_HMC_MMR_CALTIMING0_CFG_T_PARAM_ACT_TO_ACT_DIFF_BG */
    uint32_t                                   :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING0. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING0_s  ALT_IO48_HMC_MMR_CALTIMING0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING0 register. */
#define ALT_IO48_HMC_MMR_CALTIMING0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING0_OFST        0x7c

/*
 * Register : caltiming1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                               
 * :--------|:-------|:------|:-----------------------------------------------------------
 *  [5:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD          
 *  [11:6]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP
 *  [17:12] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG  
 *  [23:18] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR          
 *  [29:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                                               
 * 
 */
/*
 * Field : cfg_t_param_rd_to_rd
 * 
 * Read to read command timing on same bank
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_SET_MSK    0x0000003f
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_CLR_MSK    0xffffffc0
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : cfg_t_param_rd_to_rd_diff_chip
 * 
 * Read to read command timing on different chips
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_SET_MSK    0x00000fc0
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_CLR_MSK    0xfffff03f
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_GET(value) (((value) & 0x00000fc0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP_SET(value) (((value) << 6) & 0x00000fc0)

/*
 * Field : cfg_t_param_rd_to_rd_diff_bg
 * 
 * Read to read command timing on different chips
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_SET_MSK    0x0003f000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_CLR_MSK    0xfffc0fff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_GET(value) (((value) & 0x0003f000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG_SET(value) (((value) << 12) & 0x0003f000)

/*
 * Field : cfg_t_param_rd_to_wr
 * 
 * Write to read command timing on same bank
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_SET_MSK    0x00fc0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_CLR_MSK    0xff03ffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_GET(value) (((value) & 0x00fc0000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_SET(value) (((value) << 18) & 0x00fc0000)

/*
 * Field : cfg_t_param_rd_to_wr_diff_chip
 * 
 * Read to write command timing on different chips
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_MSB        29
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_SET_MSK    0x3f000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_CLR_MSK    0xc0ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_GET(value) (((value) & 0x3f000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP_SET(value) (((value) << 24) & 0x3f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING1.
 */
struct ALT_IO48_HMC_MMR_CALTIMING1_s
{
    uint32_t  cfg_t_param_rd_to_rd           :  6;  /* ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD */
    uint32_t  cfg_t_param_rd_to_rd_diff_chip :  6;  /* ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_CHIP */
    uint32_t  cfg_t_param_rd_to_rd_diff_bg   :  6;  /* ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_RD_DIFF_BG */
    uint32_t  cfg_t_param_rd_to_wr           :  6;  /* ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR */
    uint32_t  cfg_t_param_rd_to_wr_diff_chip :  6;  /* ALT_IO48_HMC_MMR_CALTIMING1_CFG_T_PARAM_RD_TO_WR_DIFF_CHIP */
    uint32_t                                 :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING1. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING1_s  ALT_IO48_HMC_MMR_CALTIMING1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING1 register. */
#define ALT_IO48_HMC_MMR_CALTIMING1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING1_OFST        0x80

/*
 * Register : caltiming2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                               
 * :--------|:-------|:------|:-----------------------------------------------------------
 *  [5:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG  
 *  [11:6]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH         
 *  [17:12] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID    
 *  [23:18] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR          
 *  [29:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                                               
 * 
 */
/*
 * Field : cfg_t_param_rd_to_wr_diff_bg
 * 
 * Read to write command timing on different bank groups
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_SET_MSK    0x0000003f
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_CLR_MSK    0xffffffc0
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : cfg_t_param_rd_to_pch
 * 
 * Read to precharge command timing
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_SET_MSK    0x00000fc0
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_CLR_MSK    0xfffff03f
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_GET(value) (((value) & 0x00000fc0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH_SET(value) (((value) << 6) & 0x00000fc0)

/*
 * Field : cfg_t_param_rd_ap_to_valid
 * 
 * Read command with autoprecharge to data valid timing
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_SET_MSK    0x0003f000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_CLR_MSK    0xfffc0fff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_GET(value) (((value) & 0x0003f000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID_SET(value) (((value) << 12) & 0x0003f000)

/*
 * Field : cfg_t_param_wr_to_wr
 * 
 * Write to write command timing on same bank.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_SET_MSK    0x00fc0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_CLR_MSK    0xff03ffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_GET(value) (((value) & 0x00fc0000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_SET(value) (((value) << 18) & 0x00fc0000)

/*
 * Field : cfg_t_param_wr_to_wr_diff_chip
 * 
 * Write to write command timing on different chips.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_MSB        29
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_SET_MSK    0x3f000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_CLR_MSK    0xc0ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_GET(value) (((value) & 0x3f000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP_SET(value) (((value) << 24) & 0x3f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING2.
 */
struct ALT_IO48_HMC_MMR_CALTIMING2_s
{
    uint32_t  cfg_t_param_rd_to_wr_diff_bg   :  6;  /* ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_WR_DIFF_BG */
    uint32_t  cfg_t_param_rd_to_pch          :  6;  /* ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_TO_PCH */
    uint32_t  cfg_t_param_rd_ap_to_valid     :  6;  /* ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_RD_AP_TO_VALID */
    uint32_t  cfg_t_param_wr_to_wr           :  6;  /* ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR */
    uint32_t  cfg_t_param_wr_to_wr_diff_chip :  6;  /* ALT_IO48_HMC_MMR_CALTIMING2_CFG_T_PARAM_WR_TO_WR_DIFF_CHIP */
    uint32_t                                 :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING2. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING2_s  ALT_IO48_HMC_MMR_CALTIMING2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING2 register. */
#define ALT_IO48_HMC_MMR_CALTIMING2_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING2 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING2_OFST        0x84

/*
 * Register : caltiming3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                               
 * :--------|:-------|:------|:-----------------------------------------------------------
 *  [5:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG  
 *  [11:6]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD          
 *  [17:12] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP
 *  [23:18] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG  
 *  [29:24] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH         
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                                               
 * 
 */
/*
 * Field : cfg_t_param_wr_to_wr_diff_bg
 * 
 * Write to write command timing on different bank groups.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_SET_MSK    0x0000003f
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_CLR_MSK    0xffffffc0
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : cfg_t_param_wr_to_rd
 * 
 * Write to read command timing.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_SET_MSK    0x00000fc0
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_CLR_MSK    0xfffff03f
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_GET(value) (((value) & 0x00000fc0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_SET(value) (((value) << 6) & 0x00000fc0)

/*
 * Field : cfg_t_param_wr_to_rd_diff_chip
 * 
 * Write to read command timing on different chips.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_SET_MSK    0x0003f000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_CLR_MSK    0xfffc0fff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_GET(value) (((value) & 0x0003f000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP_SET(value) (((value) << 12) & 0x0003f000)

/*
 * Field : cfg_t_param_wr_to_rd_diff_bg
 * 
 * Write to read command timing on different bank groups
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_MSB        23
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_SET_MSK    0x00fc0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_CLR_MSK    0xff03ffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_GET(value) (((value) & 0x00fc0000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG_SET(value) (((value) << 18) & 0x00fc0000)

/*
 * Field : cfg_t_param_wr_to_pch
 * 
 * Write to precharge command timing.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_MSB        29
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_SET_MSK    0x3f000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_CLR_MSK    0xc0ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH register field. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_GET(value) (((value) & 0x3f000000) >> 24)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH_SET(value) (((value) << 24) & 0x3f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING3.
 */
struct ALT_IO48_HMC_MMR_CALTIMING3_s
{
    uint32_t  cfg_t_param_wr_to_wr_diff_bg   :  6;  /* ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_WR_DIFF_BG */
    uint32_t  cfg_t_param_wr_to_rd           :  6;  /* ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD */
    uint32_t  cfg_t_param_wr_to_rd_diff_chip :  6;  /* ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_CHIP */
    uint32_t  cfg_t_param_wr_to_rd_diff_bg   :  6;  /* ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_RD_DIFF_BG */
    uint32_t  cfg_t_param_wr_to_pch          :  6;  /* ALT_IO48_HMC_MMR_CALTIMING3_CFG_T_PARAM_WR_TO_PCH */
    uint32_t                                 :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING3. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING3_s  ALT_IO48_HMC_MMR_CALTIMING3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING3 register. */
#define ALT_IO48_HMC_MMR_CALTIMING3_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING3 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING3_OFST        0x88

/*
 * Register : caltiming4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                             
 * :--------|:-------|:------|:---------------------------------------------------------
 *  [5:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID  
 *  [11:6]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID    
 *  [17:12] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID
 *  [25:18] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID    
 *  [31:26] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID    
 * 
 */
/*
 * Field : cfg_t_param_wr_ap_to_valid
 * 
 * Write with autoprecharge to valid command timing.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_MSB        5
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_SET_MSK    0x0000003f
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_CLR_MSK    0xffffffc0
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : cfg_t_param_pch_to_valid
 * 
 * Precharge to valid command timing.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_MSB        11
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_SET_MSK    0x00000fc0
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_CLR_MSK    0xfffff03f
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_GET(value) (((value) & 0x00000fc0) >> 6)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID_SET(value) (((value) << 6) & 0x00000fc0)

/*
 * Field : cfg_t_param_pch_all_to_valid
 * 
 * Precharge all to banks being ready for bank activation command.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_MSB        17
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_SET_MSK    0x0003f000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_CLR_MSK    0xfffc0fff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_GET(value) (((value) & 0x0003f000) >> 12)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID_SET(value) (((value) << 12) & 0x0003f000)

/*
 * Field : cfg_t_param_arf_to_valid
 * 
 * Auto Refresh to valid DRAM command window.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_MSB        25
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_WIDTH      8
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_SET_MSK    0x03fc0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_CLR_MSK    0xfc03ffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_GET(value) (((value) & 0x03fc0000) >> 18)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID_SET(value) (((value) << 18) & 0x03fc0000)

/*
 * Field : cfg_t_param_pdn_to_valid
 * 
 * Power down to valid bank command window.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_WIDTH      6
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_SET_MSK    0xfc000000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_CLR_MSK    0x03ffffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_GET(value) (((value) & 0xfc000000) >> 26)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID_SET(value) (((value) << 26) & 0xfc000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING4.
 */
struct ALT_IO48_HMC_MMR_CALTIMING4_s
{
    uint32_t  cfg_t_param_wr_ap_to_valid   :  6;  /* ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_WR_AP_TO_VALID */
    uint32_t  cfg_t_param_pch_to_valid     :  6;  /* ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_TO_VALID */
    uint32_t  cfg_t_param_pch_all_to_valid :  6;  /* ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PCH_ALL_TO_VALID */
    uint32_t  cfg_t_param_arf_to_valid     :  8;  /* ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_ARF_TO_VALID */
    uint32_t  cfg_t_param_pdn_to_valid     :  6;  /* ALT_IO48_HMC_MMR_CALTIMING4_CFG_T_PARAM_PDN_TO_VALID */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING4. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING4_s  ALT_IO48_HMC_MMR_CALTIMING4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING4 register. */
#define ALT_IO48_HMC_MMR_CALTIMING4_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING4 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING4_OFST        0x8c

/*
 * Register : caltiming5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [9:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID 
 *  [19:10] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL
 *  [31:20] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : cfg_t_param_srf_to_valid
 * 
 * Self-refresh to valid bank command window.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_MSB        9
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_WIDTH      10
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_SET_MSK    0x000003ff
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_CLR_MSK    0xfffffc00
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : cfg_t_param_srf_to_zq_cal
 * 
 * Self refresh to ZQ calibration window
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_MSB        19
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_WIDTH      10
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_SET_MSK    0x000ffc00
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_CLR_MSK    0xfff003ff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL register field. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_GET(value) (((value) & 0x000ffc00) >> 10)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL_SET(value) (((value) << 10) & 0x000ffc00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING5.
 */
struct ALT_IO48_HMC_MMR_CALTIMING5_s
{
    uint32_t  cfg_t_param_srf_to_valid  : 10;  /* ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_VALID */
    uint32_t  cfg_t_param_srf_to_zq_cal : 10;  /* ALT_IO48_HMC_MMR_CALTIMING5_CFG_T_PARAM_SRF_TO_ZQ_CAL */
    uint32_t                            : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING5. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING5_s  ALT_IO48_HMC_MMR_CALTIMING5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING5 register. */
#define ALT_IO48_HMC_MMR_CALTIMING5_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING5 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING5_OFST        0x90

/*
 * Register : caltiming6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [12:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD
 *  [28:13] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD
 *  [31:29] | ???    | 0x0   | *UNDEFINED*                                       
 * 
 */
/*
 * Field : cfg_t_param_arf_period
 * 
 * Auto-refresh period
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_MSB        12
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_WIDTH      13
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_SET_MSK    0x00001fff
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_CLR_MSK    0xffffe000
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_GET(value) (((value) & 0x00001fff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD_SET(value) (((value) << 0) & 0x00001fff)

/*
 * Field : cfg_t_param_pdn_period
 * 
 * Clock power down recovery period.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_MSB        28
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_SET_MSK    0x1fffe000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_CLR_MSK    0xe0001fff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD register field. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_GET(value) (((value) & 0x1fffe000) >> 13)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD_SET(value) (((value) << 13) & 0x1fffe000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING6.
 */
struct ALT_IO48_HMC_MMR_CALTIMING6_s
{
    uint32_t  cfg_t_param_arf_period : 13;  /* ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_ARF_PERIOD */
    uint32_t  cfg_t_param_pdn_period : 16;  /* ALT_IO48_HMC_MMR_CALTIMING6_CFG_T_PARAM_PDN_PERIOD */
    uint32_t                         :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING6. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING6_s  ALT_IO48_HMC_MMR_CALTIMING6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING6 register. */
#define ALT_IO48_HMC_MMR_CALTIMING6_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING6 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING6_OFST        0x94

/*
 * Register : caltiming7
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [8:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID
 *  [15:9]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID
 *  [19:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID 
 *  [29:20] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID 
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : cfg_t_param_zqcl_to_valid
 * 
 * Long ZQ calibration to valid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_WIDTH      9
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_SET_MSK    0x000001ff
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_CLR_MSK    0xfffffe00
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_GET(value) (((value) & 0x000001ff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID_SET(value) (((value) << 0) & 0x000001ff)

/*
 * Field : cfg_t_param_zqcs_to_valid
 * 
 * Short ZQ calibration to valid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_WIDTH      7
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_SET_MSK    0x0000fe00
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_CLR_MSK    0xffff01ff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_GET(value) (((value) & 0x0000fe00) >> 9)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID_SET(value) (((value) << 9) & 0x0000fe00)

/*
 * Field : cfg_t_param_mrs_to_valid
 * 
 * Mode Register Setting to valid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_MSB        19
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_SET_MSK    0x000f0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : cfg_t_param_mps_to_valid
 * 
 * Timing parameter for Maximum Power Saving to any valid command. tXMP
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_MSB        29
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_WIDTH      10
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_SET_MSK    0x3ff00000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_CLR_MSK    0xc00fffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_GET(value) (((value) & 0x3ff00000) >> 20)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID_SET(value) (((value) << 20) & 0x3ff00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING7.
 */
struct ALT_IO48_HMC_MMR_CALTIMING7_s
{
    uint32_t  cfg_t_param_zqcl_to_valid :  9;  /* ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCL_TO_VALID */
    uint32_t  cfg_t_param_zqcs_to_valid :  7;  /* ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_ZQCS_TO_VALID */
    uint32_t  cfg_t_param_mrs_to_valid  :  4;  /* ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MRS_TO_VALID */
    uint32_t  cfg_t_param_mps_to_valid  : 10;  /* ALT_IO48_HMC_MMR_CALTIMING7_CFG_T_PARAM_MPS_TO_VALID */
    uint32_t                            :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING7. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING7_s  ALT_IO48_HMC_MMR_CALTIMING7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING7 register. */
#define ALT_IO48_HMC_MMR_CALTIMING7_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING7 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING7_OFST        0x98

/*
 * Register : caltiming8
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                                     
 * :--------|:-------|:------|:-----------------------------------------------------------------
 *  [3:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID            
 *  [8:4]   | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID            
 *  [12:9]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE      
 *  [16:13] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS      
 *  [19:17] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY
 *  [27:20] | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID        
 *  [31:28] | ???    | 0x0   | *UNDEFINED*                                                     
 * 
 */
/*
 * Field : cfg_t_param_mrr_to_valid
 * 
 * Timing parameter for Mode Register Read to any valid command
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_SET_MSK    0x0000000f
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_CLR_MSK    0xfffffff0
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : cfg_t_param_mpr_to_valid
 * 
 * Timing parameter for Multi Purpose Register Read to any valid command
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_MSB        8
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_SET_MSK    0x000001f0
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_CLR_MSK    0xfffffe0f
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_GET(value) (((value) & 0x000001f0) >> 4)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID_SET(value) (((value) << 4) & 0x000001f0)

/*
 * Field : cfg_t_param_mps_exit_cs_to_cke
 * 
 * Timing parameter for exit Maximum Power Saving. Timing requirement for CS
 * assertion vs CKE de-assertion. tMPX_S
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_MSB        12
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_SET_MSK    0x00001e00
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_CLR_MSK    0xffffe1ff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_GET(value) (((value) & 0x00001e00) >> 9)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE_SET(value) (((value) << 9) & 0x00001e00)

/*
 * Field : cfg_t_param_mps_exit_cke_to_cs
 * 
 * Timing parameter for exit Maximum Power Saving. Timing requirement for CKE de-
 * assertion vs CS de-assertion. tMPX_LH
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_MSB        16
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_SET_MSK    0x0001e000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_CLR_MSK    0xfffe1fff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_GET(value) (((value) & 0x0001e000) >> 13)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS_SET(value) (((value) << 13) & 0x0001e000)

/*
 * Field : cfg_t_param_rld3_multibank_ref_delay
 * 
 * RLD3 Refresh to Refresh Delay for all sequences
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_MSB        19
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_SET_MSK    0x000e0000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_CLR_MSK    0xfff1ffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_GET(value) (((value) & 0x000e0000) >> 17)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY_SET(value) (((value) << 17) & 0x000e0000)

/*
 * Field : cfg_t_param_mmr_cmd_to_valid
 * 
 * MMR cmd to valid delay
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_MSB        27
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_WIDTH      8
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_SET_MSK    0x0ff00000
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_CLR_MSK    0xf00fffff
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID register field. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_GET(value) (((value) & 0x0ff00000) >> 20)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID_SET(value) (((value) << 20) & 0x0ff00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING8.
 */
struct ALT_IO48_HMC_MMR_CALTIMING8_s
{
    uint32_t  cfg_t_param_mrr_to_valid             :  4;  /* ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MRR_TO_VALID */
    uint32_t  cfg_t_param_mpr_to_valid             :  5;  /* ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPR_TO_VALID */
    uint32_t  cfg_t_param_mps_exit_cs_to_cke       :  4;  /* ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CS_TO_CKE */
    uint32_t  cfg_t_param_mps_exit_cke_to_cs       :  4;  /* ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MPS_EXIT_CKE_TO_CS */
    uint32_t  cfg_t_param_rld3_multibank_ref_delay :  3;  /* ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_RLD3_MULTIBANK_REF_DELAY */
    uint32_t  cfg_t_param_mmr_cmd_to_valid         :  8;  /* ALT_IO48_HMC_MMR_CALTIMING8_CFG_T_PARAM_MMR_CMD_TO_VALID */
    uint32_t                                       :  4;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING8. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING8_s  ALT_IO48_HMC_MMR_CALTIMING8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING8 register. */
#define ALT_IO48_HMC_MMR_CALTIMING8_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING8 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING8_OFST        0x9c

/*
 * Register : caltiming9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                                         
 * 
 */
/*
 * Field : cfg_t_param_4_act_to_act
 * 
 * The four-activate window timing parameter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_MSB        7
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_WIDTH      8
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_CLR_MSK    0xffffff00
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING9.
 */
struct ALT_IO48_HMC_MMR_CALTIMING9_s
{
    uint32_t  cfg_t_param_4_act_to_act :  8;  /* ALT_IO48_HMC_MMR_CALTIMING9_CFG_T_PARAM_4_ACT_TO_ACT */
    uint32_t                           : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING9. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING9_s  ALT_IO48_HMC_MMR_CALTIMING9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING9 register. */
#define ALT_IO48_HMC_MMR_CALTIMING9_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING9 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING9_OFST        0xa0

/*
 * Register : caltiming10
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                           
 * :-------|:-------|:------|:-------------------------------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                                           
 * 
 */
/*
 * Field : cfg_t_param_16_act_to_act
 * 
 * The 16-activate window timing parameter (RLD3).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_MSB        7
/* The width in bits of the ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_WIDTH      8
/* The mask used to set the ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT register field value. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_CLR_MSK    0xffffff00
/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT register field. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT field value from a register. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CALTIMING10.
 */
struct ALT_IO48_HMC_MMR_CALTIMING10_s
{
    uint32_t  cfg_t_param_16_act_to_act :  8;  /* ALT_IO48_HMC_MMR_CALTIMING10_CFG_T_PARAM_16_ACT_TO_ACT */
    uint32_t                            : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CALTIMING10. */
typedef volatile struct ALT_IO48_HMC_MMR_CALTIMING10_s  ALT_IO48_HMC_MMR_CALTIMING10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CALTIMING10 register. */
#define ALT_IO48_HMC_MMR_CALTIMING10_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CALTIMING10 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CALTIMING10_OFST        0xa4

/*
 * Register : dramaddrw
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                         
 * :--------|:-------|:------|:-----------------------------------------------------
 *  [4:0]   | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH       
 *  [9:5]   | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH       
 *  [13:10] | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH      
 *  [15:14] | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH
 *  [18:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH        
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                                         
 * 
 */
/*
 * Field : cfg_col_addr_width
 * 
 * The number of column address bits for the memory devices in your memory
 * interface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_MSB        4
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_SET_MSK    0x0000001f
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_CLR_MSK    0xffffffe0
/* The reset value of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : cfg_row_addr_width
 * 
 * The number of row address bits for the memory devices in your memory interface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_MSB        9
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_WIDTH      5
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_SET_MSK    0x000003e0
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_CLR_MSK    0xfffffc1f
/* The reset value of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_GET(value) (((value) & 0x000003e0) >> 5)
/* Produces a ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_SET(value) (((value) << 5) & 0x000003e0)

/*
 * Field : cfg_bank_addr_width
 * 
 * The number of bank address bits for the memory devices in your memory interface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_MSB        13
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_SET_MSK    0x00003c00
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_CLR_MSK    0xffffc3ff
/* The reset value of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_GET(value) (((value) & 0x00003c00) >> 10)
/* Produces a ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_SET(value) (((value) << 10) & 0x00003c00)

/*
 * Field : cfg_bank_group_addr_width
 * 
 * The number of bank group address bits for the memory devices in your memory
 * interface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_WIDTH      2
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_SET_MSK    0x0000c000
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_CLR_MSK    0xffff3fff
/* The reset value of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : cfg_cs_addr_width
 * 
 * The number of chip select address bits for the memory devices in your memory
 * interface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_MSB        18
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_SET_MSK    0x00070000
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH register field value. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH register field. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DRAMADDRW.
 */
struct ALT_IO48_HMC_MMR_DRAMADDRW_s
{
    uint32_t  cfg_col_addr_width        :  5;  /* ALT_IO48_HMC_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH */
    uint32_t  cfg_row_addr_width        :  5;  /* ALT_IO48_HMC_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH */
    uint32_t  cfg_bank_addr_width       :  4;  /* ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH */
    uint32_t  cfg_bank_group_addr_width :  2;  /* ALT_IO48_HMC_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH */
    uint32_t  cfg_cs_addr_width         :  3;  /* ALT_IO48_HMC_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH */
    uint32_t                            : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DRAMADDRW. */
typedef volatile struct ALT_IO48_HMC_MMR_DRAMADDRW_s  ALT_IO48_HMC_MMR_DRAMADDRW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DRAMADDRW register. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DRAMADDRW register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DRAMADDRW_OFST        0xa8

/*
 * Register : sideband0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : mr_cmd_trigger
 * 
 * Write to 1 to trigger the execution of the mode register command. It
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND0.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND0_s
{
    uint32_t  mr_cmd_trigger :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND0_MR_CMD_TRIGGER */
    uint32_t                 : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND0. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND0_s  ALT_IO48_HMC_MMR_SIDEBAND0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND0 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND0_OFST        0xac

/*
 * Register : sideband1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [3:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : mmr_refresh_req
 * 
 * When asserted, indicates Refresh request to the specific rank. Each bit
 * corresponds to each rank. Controller clear this bit to
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_SET_MSK    0x0000000f
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_CLR_MSK    0xfffffff0
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND1.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND1_s
{
    uint32_t  mmr_refresh_req :  4;  /* ALT_IO48_HMC_MMR_SIDEBAND1_MMR_REFRESH_REQ */
    uint32_t                  : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND1. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND1_s  ALT_IO48_HMC_MMR_SIDEBAND1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND1 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND1_OFST        0xb0

/*
 * Register : sideband2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                  
 * :-------|:-------|:------|:----------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : mmr_zqcal_long_req
 * 
 * When asserted, indicates long ZQ cal request. This bit is write clear
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND2.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND2_s
{
    uint32_t  mmr_zqcal_long_req :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND2_MMR_ZQCAL_LONG_REQ */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND2. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND2_s  ALT_IO48_HMC_MMR_SIDEBAND2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND2 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND2 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND2_OFST        0xb4

/*
 * Register : sideband3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                   
 * :-------|:-------|:------|:-----------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                                   
 * 
 */
/*
 * Field : mmr_zqcal_short_req
 * 
 * When asserted, indicates short ZQ cal request. This bit is write clear
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND3.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND3_s
{
    uint32_t  mmr_zqcal_short_req :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND3_MMR_ZQCAL_SHORT_REQ */
    uint32_t                      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND3. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND3_s  ALT_IO48_HMC_MMR_SIDEBAND3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND3 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND3 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND3_OFST        0xb8

/*
 * Register : sideband4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [3:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mmr_self_rfsh_req
 * 
 * When asserted, indicates self refresh request to the specific rank. Each bit
 * corresponds to each rank. These bits are write clear
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_SET_MSK    0x0000000f
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_CLR_MSK    0xfffffff0
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND4.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND4_s
{
    uint32_t  mmr_self_rfsh_req :  4;  /* ALT_IO48_HMC_MMR_SIDEBAND4_MMR_SELF_RFSH_REQ */
    uint32_t                    : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND4. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND4_s  ALT_IO48_HMC_MMR_SIDEBAND4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND4 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND4 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND4_OFST        0xbc

/*
 * Register : sideband5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : mmr_dpd_mps_req
 * 
 * When asserted, indicates deep power down or max power saving request. This bit
 * is write clear
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND5.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND5_s
{
    uint32_t  mmr_dpd_mps_req :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND5_MMR_DPD_MPS_REQ */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND5. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND5_s  ALT_IO48_HMC_MMR_SIDEBAND5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND5 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND5 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND5_OFST        0xc0

/*
 * Register : sideband6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : mr_cmd_ack
 * 
 * Acknowledge to mode register command
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND6.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND6_s
{
    uint32_t  mr_cmd_ack :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND6_MR_CMD_ACK */
    uint32_t             : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND6. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND6_s  ALT_IO48_HMC_MMR_SIDEBAND6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND6 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND6 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND6_OFST        0xc4

/*
 * Register : sideband7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : mmr_refresh_ack
 * 
 * Acknowledge to indicate refresh is in progress
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND7.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND7_s
{
    uint32_t  mmr_refresh_ack :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND7_MMR_REFRESH_ACK */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND7. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND7_s  ALT_IO48_HMC_MMR_SIDEBAND7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND7 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND7 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND7_OFST        0xc8

/*
 * Register : sideband8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : mmr_zqcal_ack
 * 
 * Acknowledge to indicate ZQCAL is progress
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND8.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND8_s
{
    uint32_t  mmr_zqcal_ack :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND8_MMR_ZQCAL_ACK */
    uint32_t                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND8. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND8_s  ALT_IO48_HMC_MMR_SIDEBAND8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND8 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND8 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND8_OFST        0xcc

/*
 * Register : sideband9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mmr_self_rfsh_ack
 * 
 * Acknowledge to indicate self refresh is progress
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND9.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND9_s
{
    uint32_t  mmr_self_rfsh_ack :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND9_MMR_SELF_RFSH_ACK */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND9. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND9_s  ALT_IO48_HMC_MMR_SIDEBAND9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND9 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND9 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND9_OFST        0xd0

/*
 * Register : sideband10
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                
 * :-------|:-------|:------|:--------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : mmr_dpd_mps_ack
 * 
 * Acknowledge to indicate deep power down/max power saving is in progress
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND10.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND10_s
{
    uint32_t  mmr_dpd_mps_ack :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND10_MMR_DPD_MPS_ACK */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND10. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND10_s  ALT_IO48_HMC_MMR_SIDEBAND10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND10 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND10 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND10_OFST        0xd4

/*
 * Register : sideband11
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                
 * :-------|:-------|:------|:--------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : mmr_auto_pd_ack
 * 
 * Acknowledge to indicate auto power down is in progress
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND11.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND11_s
{
    uint32_t  mmr_auto_pd_ack :  1;  /* ALT_IO48_HMC_MMR_SIDEBAND11_MMR_AUTO_PD_ACK */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND11. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND11_s  ALT_IO48_HMC_MMR_SIDEBAND11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND11 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND11 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND11_OFST        0xd8

/*
 * Register : sideband12
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                            
 * :-------|:-------|:------|:----------------------------------------
 *  [2:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE
 *  [6:3]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK
 *  [31:7] | ???    | 0x0   | *UNDEFINED*                            
 * 
 */
/*
 * Field : mr_cmd_type
 * 
 * Indicates the type of Mode Register Command
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_MSB        2
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_WIDTH      3
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_SET_MSK    0x00000007
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE_SET(value) (((value) << 0) & 0x00000007)

/*
 * Field : mr_cmd_rank
 * 
 * Indicates which rank the mode register command is intended to.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_MSB        6
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_SET_MSK    0x00000078
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_CLR_MSK    0xffffff87
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_GET(value) (((value) & 0x00000078) >> 3)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK_SET(value) (((value) << 3) & 0x00000078)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND12.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND12_s
{
    uint32_t  mr_cmd_type :  3;  /* ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_TYPE */
    uint32_t  mr_cmd_rank :  4;  /* ALT_IO48_HMC_MMR_SIDEBAND12_MR_CMD_RANK */
    uint32_t              : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND12. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND12_s  ALT_IO48_HMC_MMR_SIDEBAND12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND12 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND12 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND12_OFST        0xdc

/*
 * Register : sideband13
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE
 * 
 */
/*
 * Field : mr_cmd_opcode
 * 
 * [31:27] reserved. Register Command Opcode Information to be used for Register
 * Command LPDDR3 [26:20] Reserved [19:10] falling edge CA. [9:0] rising edge CA
 * DDR4 [26:24] C2:C0 [23] ACT [22:21] BG1:BG0 [20] Reserved [19:18] BA1:BA0 [17]
 * A17 [16] RAS [15] CAS [14] WE [13:0] A13:A0 DDR3 [26:21] Reserved [20:18]
 * BA2:BA0 [17] A17 [16] RAS [15] CAS [14] WE [13] Reserved [12:0] A12:A0 RLDRAM3
 * [26] Reserved [25:22] BA3:BA0 [21] REF [20] WE [19:0] A19:A0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND13.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND13_s
{
    uint32_t  mr_cmd_opcode : 32;  /* ALT_IO48_HMC_MMR_SIDEBAND13_MR_CMD_OPCODE */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND13. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND13_s  ALT_IO48_HMC_MMR_SIDEBAND13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND13 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND13 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND13_OFST        0xe0

/*
 * Register : sideband14
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mmr_refresh_bank
 * 
 * user refresh bank information, binary representation of bank address. Enables
 * refresh to that bank address when requested
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND14.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND14_s
{
    uint32_t  mmr_refresh_bank : 16;  /* ALT_IO48_HMC_MMR_SIDEBAND14_MMR_REFRESH_BANK */
    uint32_t                   : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND14. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND14_s  ALT_IO48_HMC_MMR_SIDEBAND14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND14 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND14 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND14_OFST        0xe4

/*
 * Register : sideband15
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [3:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : mmr_stall_rank
 * 
 * Setting to 1 to stall the corresponding rank
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_MSB        3
/* The width in bits of the ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_WIDTH      4
/* The mask used to set the ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_SET_MSK    0x0000000f
/* The mask used to clear the ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK register field value. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_CLR_MSK    0xfffffff0
/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK register field. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK field value from a register. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_SIDEBAND15.
 */
struct ALT_IO48_HMC_MMR_SIDEBAND15_s
{
    uint32_t  mmr_stall_rank :  4;  /* ALT_IO48_HMC_MMR_SIDEBAND15_MMR_STALL_RANK */
    uint32_t                 : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_SIDEBAND15. */
typedef volatile struct ALT_IO48_HMC_MMR_SIDEBAND15_s  ALT_IO48_HMC_MMR_SIDEBAND15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_SIDEBAND15 register. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_SIDEBAND15 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_SIDEBAND15_OFST        0xe8

/*
 * Register : dramsts
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS
 *  [1]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL   
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : phy_cal_success
 * 
 * This bit will be set to 1 if the PHY was able to successfully calibrate.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS register field value. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS register field value. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : phy_cal_fail
 * 
 * This bit will be set to 1 if the PHY was unable to calibrate.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_MSB        1
/* The width in bits of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL register field value. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_SET_MSK    0x00000002
/* The mask used to clear the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL register field value. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_CLR_MSK    0xfffffffd
/* The reset value of the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL register field. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL field value from a register. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DRAMSTS.
 */
struct ALT_IO48_HMC_MMR_DRAMSTS_s
{
    uint32_t  phy_cal_success :  1;  /* ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_SUCCESS */
    uint32_t  phy_cal_fail    :  1;  /* ALT_IO48_HMC_MMR_DRAMSTS_PHY_CAL_FAIL */
    uint32_t                  : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DRAMSTS. */
typedef volatile struct ALT_IO48_HMC_MMR_DRAMSTS_s  ALT_IO48_HMC_MMR_DRAMSTS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DRAMSTS register. */
#define ALT_IO48_HMC_MMR_DRAMSTS_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DRAMSTS register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DRAMSTS_OFST        0xec

/*
 * Register : dbgdone
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : dbg_done
 * 
 * Indicates the debug test is completed
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE register field. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE register field. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE register field. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE register field value. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE register field value. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE register field. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE field value from a register. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGDONE.
 */
struct ALT_IO48_HMC_MMR_DBGDONE_s
{
    uint32_t  dbg_done :  1;  /* ALT_IO48_HMC_MMR_DBGDONE_DBG_DONE */
    uint32_t           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGDONE. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGDONE_s  ALT_IO48_HMC_MMR_DBGDONE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGDONE register. */
#define ALT_IO48_HMC_MMR_DBGDONE_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGDONE register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGDONE_OFST        0xf0

/*
 * Register : dbgsignals
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                
 * :-------|:-------|:------|:--------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT
 * 
 */
/*
 * Field : dbg_signals_out
 * 
 * Debug signals output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT register field. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT register field. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT register field. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT register field value. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT register field value. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT register field. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT field value from a register. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGSIGNALS.
 */
struct ALT_IO48_HMC_MMR_DBGSIGNALS_s
{
    uint32_t  dbg_signals_out : 32;  /* ALT_IO48_HMC_MMR_DBGSIGNALS_DBG_SIGNALS_OUT */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGSIGNALS. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGSIGNALS_s  ALT_IO48_HMC_MMR_DBGSIGNALS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGSIGNALS register. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGSIGNALS register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGSIGNALS_OFST        0xf4

/*
 * Register : dbgreset
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [0]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST
 *  [1]    | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST 
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : counter_zero_reset
 * 
 * Used for performance monitoring. Writing to this register resets the first
 * counter. Note that this bit auto-clears after one clock cycle.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_MSB        0
/* The width in bits of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST register field value. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_SET_MSK    0x00000001
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST register field value. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_CLR_MSK    0xfffffffe
/* The reset value of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST field value from a register. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : counter_one_reset
 * 
 * Used for performance monitoring. Writing to this register resets the second
 * counter. Note that this bit auto-clears after one clock cycle.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_MSB        1
/* The width in bits of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_WIDTH      1
/* The mask used to set the ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST register field value. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_SET_MSK    0x00000002
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST register field value. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_CLR_MSK    0xfffffffd
/* The reset value of the ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST register field. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST field value from a register. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGRST.
 */
struct ALT_IO48_HMC_MMR_DBGRST_s
{
    uint32_t  counter_zero_reset :  1;  /* ALT_IO48_HMC_MMR_DBGRST_CNTR_ZERO_RST */
    uint32_t  counter_one_reset  :  1;  /* ALT_IO48_HMC_MMR_DBGRST_CNTR_ONE_RST */
    uint32_t                     : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGRST. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGRST_s  ALT_IO48_HMC_MMR_DBGRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGRST register. */
#define ALT_IO48_HMC_MMR_DBGRST_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGRST register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGRST_OFST        0xf8

/*
 * Register : dbgmatch
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO
 *  [31:16] | RW     | 0x0   | ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE 
 * 
 */
/*
 * Field : counter_zero
 * 
 * counter value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO register field value. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO register field value. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO field value from a register. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : counter_one
 * 
 * counter value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE register field value. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_SET_MSK    0xffff0000
/* The mask used to clear the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE register field value. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_CLR_MSK    0x0000ffff
/* The reset value of the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE register field. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE field value from a register. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_DBGMATCH.
 */
struct ALT_IO48_HMC_MMR_DBGMATCH_s
{
    uint32_t  counter_zero : 16;  /* ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ZERO */
    uint32_t  counter_one  : 16;  /* ALT_IO48_HMC_MMR_DBGMATCH_CNTR_ONE */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_DBGMATCH. */
typedef volatile struct ALT_IO48_HMC_MMR_DBGMATCH_s  ALT_IO48_HMC_MMR_DBGMATCH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_DBGMATCH register. */
#define ALT_IO48_HMC_MMR_DBGMATCH_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_DBGMATCH register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_DBGMATCH_OFST        0xfc

/*
 * Register : counter0mask
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                            
 * :-------|:-------|:------|:----------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK
 * 
 */
/*
 * Field : counter_zero_mask
 * 
 * Performance monitoring register. This register is used to mask off the internal
 * signals selected by the debug select byte to either examine a bit (and expect it
 * to be a one or a zero) or to ignore the bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK register field value. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK register field value. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK field value from a register. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CNTR0MSK.
 */
struct ALT_IO48_HMC_MMR_CNTR0MSK_s
{
    uint32_t  counter_zero_mask : 32;  /* ALT_IO48_HMC_MMR_CNTR0MSK_CNTR_ZERO_MSK */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CNTR0MSK. */
typedef volatile struct ALT_IO48_HMC_MMR_CNTR0MSK_s  ALT_IO48_HMC_MMR_CNTR0MSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CNTR0MSK register. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CNTR0MSK register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CNTR0MSK_OFST        0x100

/*
 * Register : counter1mask
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK
 * 
 */
/*
 * Field : counter_one_mask
 * 
 * Performance monitoring register. This register is used to mask off the internal
 * signals selected by the debug select byte to either examine a bit (and expect it
 * to be a one or a zero) or to ignore the bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK register field value. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK register field value. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK register field. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK field value from a register. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CNTR1MSK.
 */
struct ALT_IO48_HMC_MMR_CNTR1MSK_s
{
    uint32_t  counter_one_mask : 32;  /* ALT_IO48_HMC_MMR_CNTR1MSK_CNTR_ONE_MSK */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CNTR1MSK. */
typedef volatile struct ALT_IO48_HMC_MMR_CNTR1MSK_s  ALT_IO48_HMC_MMR_CNTR1MSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CNTR1MSK register. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CNTR1MSK register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CNTR1MSK_OFST        0x104

/*
 * Register : counter0match
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                
 * :-------|:-------|:------|:--------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH
 * 
 */
/*
 * Field : counter_zero_match
 * 
 * Counts events which happens during the sample window which counter_zero_mask was
 * satisfied.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH register field value. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH register field value. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH field value from a register. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CNTR0MATCH.
 */
struct ALT_IO48_HMC_MMR_CNTR0MATCH_s
{
    uint32_t  counter_zero_match : 32;  /* ALT_IO48_HMC_MMR_CNTR0MATCH_CNTR_ZERO_MATCH */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CNTR0MATCH. */
typedef volatile struct ALT_IO48_HMC_MMR_CNTR0MATCH_s  ALT_IO48_HMC_MMR_CNTR0MATCH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CNTR0MATCH register. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CNTR0MATCH register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CNTR0MATCH_OFST        0x108

/*
 * Register : counter1match
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH
 * 
 */
/*
 * Field : counter_one_match
 * 
 * Counts events which happens during the sample window which counter_one_mask was
 * satisfied.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_MSB        31
/* The width in bits of the ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_WIDTH      32
/* The mask used to set the ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH register field value. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_SET_MSK    0xffffffff
/* The mask used to clear the ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH register field value. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_CLR_MSK    0x00000000
/* The reset value of the ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH register field. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH field value from a register. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_CNTR1MATCH.
 */
struct ALT_IO48_HMC_MMR_CNTR1MATCH_s
{
    uint32_t  counter_one_match : 32;  /* ALT_IO48_HMC_MMR_CNTR1MATCH_CNTR_ONE_MATCH */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_CNTR1MATCH. */
typedef volatile struct ALT_IO48_HMC_MMR_CNTR1MATCH_s  ALT_IO48_HMC_MMR_CNTR1MATCH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_CNTR1MATCH register. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_CNTR1MATCH register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_CNTR1MATCH_OFST        0x10c

/*
 * Register : niosreserve0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                
 * :--------|:-------|:------|:--------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : nios_reserve0
 * 
 * Reserved register0 for Nios
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 register field value. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 register field value. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 field value from a register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_NIOSRESERVE0.
 */
struct ALT_IO48_HMC_MMR_NIOSRESERVE0_s
{
    uint32_t  nios_reserve0 : 16;  /* ALT_IO48_HMC_MMR_NIOSRESERVE0_NIOS_RESERVE0 */
    uint32_t                : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_NIOSRESERVE0. */
typedef volatile struct ALT_IO48_HMC_MMR_NIOSRESERVE0_s  ALT_IO48_HMC_MMR_NIOSRESERVE0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_NIOSRESERVE0 register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_NIOSRESERVE0 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE0_OFST        0x110

/*
 * Register : niosreserve1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                
 * :--------|:-------|:------|:--------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : nios_reserve1
 * 
 * Reserved register1 for Nios
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 register field value. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 register field value. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 field value from a register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_NIOSRESERVE1.
 */
struct ALT_IO48_HMC_MMR_NIOSRESERVE1_s
{
    uint32_t  nios_reserve1 : 16;  /* ALT_IO48_HMC_MMR_NIOSRESERVE1_NIOS_RESERVE1 */
    uint32_t                : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_NIOSRESERVE1. */
typedef volatile struct ALT_IO48_HMC_MMR_NIOSRESERVE1_s  ALT_IO48_HMC_MMR_NIOSRESERVE1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_NIOSRESERVE1 register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_NIOSRESERVE1 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE1_OFST        0x114

/*
 * Register : niosreserve2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                
 * :--------|:-------|:------|:--------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : nios_reserve2
 * 
 * Reserved register2 for Nios
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_MSB        15
/* The width in bits of the ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_WIDTH      16
/* The mask used to set the ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 register field value. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 register field value. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_CLR_MSK    0xffff0000
/* The reset value of the ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 register field. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_RESET      0x0
/* Extracts the ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 field value from a register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 register field value suitable for setting the register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_IO48_HMC_MMR_NIOSRESERVE2.
 */
struct ALT_IO48_HMC_MMR_NIOSRESERVE2_s
{
    uint32_t  nios_reserve2 : 16;  /* ALT_IO48_HMC_MMR_NIOSRESERVE2_NIOS_RESERVE2 */
    uint32_t                : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_IO48_HMC_MMR_NIOSRESERVE2. */
typedef volatile struct ALT_IO48_HMC_MMR_NIOSRESERVE2_s  ALT_IO48_HMC_MMR_NIOSRESERVE2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_IO48_HMC_MMR_NIOSRESERVE2 register. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_RESET       0x00000000
/* The byte offset of the ALT_IO48_HMC_MMR_NIOSRESERVE2 register from the beginning of the component. */
#define ALT_IO48_HMC_MMR_NIOSRESERVE2_OFST        0x118

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_IO48_HMC_MMR.
 */
struct ALT_IO48_HMC_MMR_s
{
    ALT_IO48_HMC_MMR_DBGCFG0_t       dbgcfg0;                 /* ALT_IO48_HMC_MMR_DBGCFG0 */
    ALT_IO48_HMC_MMR_DBGCFG1_t       dbgcfg1;                 /* ALT_IO48_HMC_MMR_DBGCFG1 */
    ALT_IO48_HMC_MMR_DBGCFG2_t       dbgcfg2;                 /* ALT_IO48_HMC_MMR_DBGCFG2 */
    ALT_IO48_HMC_MMR_DBGCFG3_t       dbgcfg3;                 /* ALT_IO48_HMC_MMR_DBGCFG3 */
    ALT_IO48_HMC_MMR_DBGCFG4_t       dbgcfg4;                 /* ALT_IO48_HMC_MMR_DBGCFG4 */
    ALT_IO48_HMC_MMR_DBGCFG5_t       dbgcfg5;                 /* ALT_IO48_HMC_MMR_DBGCFG5 */
    ALT_IO48_HMC_MMR_DBGCFG6_t       dbgcfg6;                 /* ALT_IO48_HMC_MMR_DBGCFG6 */
    ALT_IO48_HMC_MMR_RESERVE0_t      reserve0;                /* ALT_IO48_HMC_MMR_RESERVE0 */
    ALT_IO48_HMC_MMR_RESERVE1_t      reserve1;                /* ALT_IO48_HMC_MMR_RESERVE1 */
    ALT_IO48_HMC_MMR_RESERVE2_t      reserve2;                /* ALT_IO48_HMC_MMR_RESERVE2 */
    ALT_IO48_HMC_MMR_CTLCFG0_t       ctrlcfg0;                /* ALT_IO48_HMC_MMR_CTLCFG0 */
    ALT_IO48_HMC_MMR_CTLCFG1_t       ctrlcfg1;                /* ALT_IO48_HMC_MMR_CTLCFG1 */
    ALT_IO48_HMC_MMR_CTLCFG2_t       ctrlcfg2;                /* ALT_IO48_HMC_MMR_CTLCFG2 */
    ALT_IO48_HMC_MMR_CTLCFG3_t       ctrlcfg3;                /* ALT_IO48_HMC_MMR_CTLCFG3 */
    ALT_IO48_HMC_MMR_CTLCFG4_t       ctrlcfg4;                /* ALT_IO48_HMC_MMR_CTLCFG4 */
    ALT_IO48_HMC_MMR_CTLCFG5_t       ctrlcfg5;                /* ALT_IO48_HMC_MMR_CTLCFG5 */
    ALT_IO48_HMC_MMR_CTLCFG6_t       ctrlcfg6;                /* ALT_IO48_HMC_MMR_CTLCFG6 */
    ALT_IO48_HMC_MMR_CTLCFG7_t       ctrlcfg7;                /* ALT_IO48_HMC_MMR_CTLCFG7 */
    ALT_IO48_HMC_MMR_CTLCFG8_t       ctrlcfg8;                /* ALT_IO48_HMC_MMR_CTLCFG8 */
    ALT_IO48_HMC_MMR_CTLCFG9_t       ctrlcfg9;                /* ALT_IO48_HMC_MMR_CTLCFG9 */
    ALT_IO48_HMC_MMR_DRAMTIMING0_t   dramtiming0;             /* ALT_IO48_HMC_MMR_DRAMTIMING0 */
    ALT_IO48_HMC_MMR_DRAMODT0_t      dramodt0;                /* ALT_IO48_HMC_MMR_DRAMODT0 */
    ALT_IO48_HMC_MMR_DRAMODT1_t      dramodt1;                /* ALT_IO48_HMC_MMR_DRAMODT1 */
    ALT_IO48_HMC_MMR_SBCFG0_t        sbcfg0;                  /* ALT_IO48_HMC_MMR_SBCFG0 */
    ALT_IO48_HMC_MMR_SBCFG1_t        sbcfg1;                  /* ALT_IO48_HMC_MMR_SBCFG1 */
    ALT_IO48_HMC_MMR_SBCFG2_t        sbcfg2;                  /* ALT_IO48_HMC_MMR_SBCFG2 */
    ALT_IO48_HMC_MMR_SBCFG3_t        sbcfg3;                  /* ALT_IO48_HMC_MMR_SBCFG3 */
    ALT_IO48_HMC_MMR_SBCFG4_t        sbcfg4;                  /* ALT_IO48_HMC_MMR_SBCFG4 */
    ALT_IO48_HMC_MMR_SBCFG5_t        sbcfg5;                  /* ALT_IO48_HMC_MMR_SBCFG5 */
    ALT_IO48_HMC_MMR_SBCFG6_t        sbcfg6;                  /* ALT_IO48_HMC_MMR_SBCFG6 */
    ALT_IO48_HMC_MMR_SBCFG7_t        sbcfg7;                  /* ALT_IO48_HMC_MMR_SBCFG7 */
    ALT_IO48_HMC_MMR_CALTIMING0_t    caltiming0;              /* ALT_IO48_HMC_MMR_CALTIMING0 */
    ALT_IO48_HMC_MMR_CALTIMING1_t    caltiming1;              /* ALT_IO48_HMC_MMR_CALTIMING1 */
    ALT_IO48_HMC_MMR_CALTIMING2_t    caltiming2;              /* ALT_IO48_HMC_MMR_CALTIMING2 */
    ALT_IO48_HMC_MMR_CALTIMING3_t    caltiming3;              /* ALT_IO48_HMC_MMR_CALTIMING3 */
    ALT_IO48_HMC_MMR_CALTIMING4_t    caltiming4;              /* ALT_IO48_HMC_MMR_CALTIMING4 */
    ALT_IO48_HMC_MMR_CALTIMING5_t    caltiming5;              /* ALT_IO48_HMC_MMR_CALTIMING5 */
    ALT_IO48_HMC_MMR_CALTIMING6_t    caltiming6;              /* ALT_IO48_HMC_MMR_CALTIMING6 */
    ALT_IO48_HMC_MMR_CALTIMING7_t    caltiming7;              /* ALT_IO48_HMC_MMR_CALTIMING7 */
    ALT_IO48_HMC_MMR_CALTIMING8_t    caltiming8;              /* ALT_IO48_HMC_MMR_CALTIMING8 */
    ALT_IO48_HMC_MMR_CALTIMING9_t    caltiming9;              /* ALT_IO48_HMC_MMR_CALTIMING9 */
    ALT_IO48_HMC_MMR_CALTIMING10_t   caltiming10;             /* ALT_IO48_HMC_MMR_CALTIMING10 */
    ALT_IO48_HMC_MMR_DRAMADDRW_t     dramaddrw;               /* ALT_IO48_HMC_MMR_DRAMADDRW */
    ALT_IO48_HMC_MMR_SIDEBAND0_t     sideband0;               /* ALT_IO48_HMC_MMR_SIDEBAND0 */
    ALT_IO48_HMC_MMR_SIDEBAND1_t     sideband1;               /* ALT_IO48_HMC_MMR_SIDEBAND1 */
    ALT_IO48_HMC_MMR_SIDEBAND2_t     sideband2;               /* ALT_IO48_HMC_MMR_SIDEBAND2 */
    ALT_IO48_HMC_MMR_SIDEBAND3_t     sideband3;               /* ALT_IO48_HMC_MMR_SIDEBAND3 */
    ALT_IO48_HMC_MMR_SIDEBAND4_t     sideband4;               /* ALT_IO48_HMC_MMR_SIDEBAND4 */
    ALT_IO48_HMC_MMR_SIDEBAND5_t     sideband5;               /* ALT_IO48_HMC_MMR_SIDEBAND5 */
    ALT_IO48_HMC_MMR_SIDEBAND6_t     sideband6;               /* ALT_IO48_HMC_MMR_SIDEBAND6 */
    ALT_IO48_HMC_MMR_SIDEBAND7_t     sideband7;               /* ALT_IO48_HMC_MMR_SIDEBAND7 */
    ALT_IO48_HMC_MMR_SIDEBAND8_t     sideband8;               /* ALT_IO48_HMC_MMR_SIDEBAND8 */
    ALT_IO48_HMC_MMR_SIDEBAND9_t     sideband9;               /* ALT_IO48_HMC_MMR_SIDEBAND9 */
    ALT_IO48_HMC_MMR_SIDEBAND10_t    sideband10;              /* ALT_IO48_HMC_MMR_SIDEBAND10 */
    ALT_IO48_HMC_MMR_SIDEBAND11_t    sideband11;              /* ALT_IO48_HMC_MMR_SIDEBAND11 */
    ALT_IO48_HMC_MMR_SIDEBAND12_t    sideband12;              /* ALT_IO48_HMC_MMR_SIDEBAND12 */
    ALT_IO48_HMC_MMR_SIDEBAND13_t    sideband13;              /* ALT_IO48_HMC_MMR_SIDEBAND13 */
    ALT_IO48_HMC_MMR_SIDEBAND14_t    sideband14;              /* ALT_IO48_HMC_MMR_SIDEBAND14 */
    ALT_IO48_HMC_MMR_SIDEBAND15_t    sideband15;              /* ALT_IO48_HMC_MMR_SIDEBAND15 */
    ALT_IO48_HMC_MMR_DRAMSTS_t       dramsts;                 /* ALT_IO48_HMC_MMR_DRAMSTS */
    ALT_IO48_HMC_MMR_DBGDONE_t       dbgdone;                 /* ALT_IO48_HMC_MMR_DBGDONE */
    ALT_IO48_HMC_MMR_DBGSIGNALS_t    dbgsignals;              /* ALT_IO48_HMC_MMR_DBGSIGNALS */
    ALT_IO48_HMC_MMR_DBGRST_t        dbgreset;                /* ALT_IO48_HMC_MMR_DBGRST */
    ALT_IO48_HMC_MMR_DBGMATCH_t      dbgmatch;                /* ALT_IO48_HMC_MMR_DBGMATCH */
    ALT_IO48_HMC_MMR_CNTR0MSK_t      counter0mask;            /* ALT_IO48_HMC_MMR_CNTR0MSK */
    ALT_IO48_HMC_MMR_CNTR1MSK_t      counter1mask;            /* ALT_IO48_HMC_MMR_CNTR1MSK */
    ALT_IO48_HMC_MMR_CNTR0MATCH_t    counter0match;           /* ALT_IO48_HMC_MMR_CNTR0MATCH */
    ALT_IO48_HMC_MMR_CNTR1MATCH_t    counter1match;           /* ALT_IO48_HMC_MMR_CNTR1MATCH */
    ALT_IO48_HMC_MMR_NIOSRESERVE0_t  niosreserve0;            /* ALT_IO48_HMC_MMR_NIOSRESERVE0 */
    ALT_IO48_HMC_MMR_NIOSRESERVE1_t  niosreserve1;            /* ALT_IO48_HMC_MMR_NIOSRESERVE1 */
    ALT_IO48_HMC_MMR_NIOSRESERVE2_t  niosreserve2;            /* ALT_IO48_HMC_MMR_NIOSRESERVE2 */
    volatile uint32_t                _pad_0x11c_0x1000[953];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_IO48_HMC_MMR. */
typedef volatile struct ALT_IO48_HMC_MMR_s  ALT_IO48_HMC_MMR_t;
/* The struct declaration for the raw register contents of register group ALT_IO48_HMC_MMR. */
struct ALT_IO48_HMC_MMR_raw_s
{
    volatile uint32_t  dbgcfg0;                 /* ALT_IO48_HMC_MMR_DBGCFG0 */
    volatile uint32_t  dbgcfg1;                 /* ALT_IO48_HMC_MMR_DBGCFG1 */
    volatile uint32_t  dbgcfg2;                 /* ALT_IO48_HMC_MMR_DBGCFG2 */
    volatile uint32_t  dbgcfg3;                 /* ALT_IO48_HMC_MMR_DBGCFG3 */
    volatile uint32_t  dbgcfg4;                 /* ALT_IO48_HMC_MMR_DBGCFG4 */
    volatile uint32_t  dbgcfg5;                 /* ALT_IO48_HMC_MMR_DBGCFG5 */
    volatile uint32_t  dbgcfg6;                 /* ALT_IO48_HMC_MMR_DBGCFG6 */
    volatile uint32_t  reserve0;                /* ALT_IO48_HMC_MMR_RESERVE0 */
    volatile uint32_t  reserve1;                /* ALT_IO48_HMC_MMR_RESERVE1 */
    volatile uint32_t  reserve2;                /* ALT_IO48_HMC_MMR_RESERVE2 */
    volatile uint32_t  ctrlcfg0;                /* ALT_IO48_HMC_MMR_CTLCFG0 */
    volatile uint32_t  ctrlcfg1;                /* ALT_IO48_HMC_MMR_CTLCFG1 */
    volatile uint32_t  ctrlcfg2;                /* ALT_IO48_HMC_MMR_CTLCFG2 */
    volatile uint32_t  ctrlcfg3;                /* ALT_IO48_HMC_MMR_CTLCFG3 */
    volatile uint32_t  ctrlcfg4;                /* ALT_IO48_HMC_MMR_CTLCFG4 */
    volatile uint32_t  ctrlcfg5;                /* ALT_IO48_HMC_MMR_CTLCFG5 */
    volatile uint32_t  ctrlcfg6;                /* ALT_IO48_HMC_MMR_CTLCFG6 */
    volatile uint32_t  ctrlcfg7;                /* ALT_IO48_HMC_MMR_CTLCFG7 */
    volatile uint32_t  ctrlcfg8;                /* ALT_IO48_HMC_MMR_CTLCFG8 */
    volatile uint32_t  ctrlcfg9;                /* ALT_IO48_HMC_MMR_CTLCFG9 */
    volatile uint32_t  dramtiming0;             /* ALT_IO48_HMC_MMR_DRAMTIMING0 */
    volatile uint32_t  dramodt0;                /* ALT_IO48_HMC_MMR_DRAMODT0 */
    volatile uint32_t  dramodt1;                /* ALT_IO48_HMC_MMR_DRAMODT1 */
    volatile uint32_t  sbcfg0;                  /* ALT_IO48_HMC_MMR_SBCFG0 */
    volatile uint32_t  sbcfg1;                  /* ALT_IO48_HMC_MMR_SBCFG1 */
    volatile uint32_t  sbcfg2;                  /* ALT_IO48_HMC_MMR_SBCFG2 */
    volatile uint32_t  sbcfg3;                  /* ALT_IO48_HMC_MMR_SBCFG3 */
    volatile uint32_t  sbcfg4;                  /* ALT_IO48_HMC_MMR_SBCFG4 */
    volatile uint32_t  sbcfg5;                  /* ALT_IO48_HMC_MMR_SBCFG5 */
    volatile uint32_t  sbcfg6;                  /* ALT_IO48_HMC_MMR_SBCFG6 */
    volatile uint32_t  sbcfg7;                  /* ALT_IO48_HMC_MMR_SBCFG7 */
    volatile uint32_t  caltiming0;              /* ALT_IO48_HMC_MMR_CALTIMING0 */
    volatile uint32_t  caltiming1;              /* ALT_IO48_HMC_MMR_CALTIMING1 */
    volatile uint32_t  caltiming2;              /* ALT_IO48_HMC_MMR_CALTIMING2 */
    volatile uint32_t  caltiming3;              /* ALT_IO48_HMC_MMR_CALTIMING3 */
    volatile uint32_t  caltiming4;              /* ALT_IO48_HMC_MMR_CALTIMING4 */
    volatile uint32_t  caltiming5;              /* ALT_IO48_HMC_MMR_CALTIMING5 */
    volatile uint32_t  caltiming6;              /* ALT_IO48_HMC_MMR_CALTIMING6 */
    volatile uint32_t  caltiming7;              /* ALT_IO48_HMC_MMR_CALTIMING7 */
    volatile uint32_t  caltiming8;              /* ALT_IO48_HMC_MMR_CALTIMING8 */
    volatile uint32_t  caltiming9;              /* ALT_IO48_HMC_MMR_CALTIMING9 */
    volatile uint32_t  caltiming10;             /* ALT_IO48_HMC_MMR_CALTIMING10 */
    volatile uint32_t  dramaddrw;               /* ALT_IO48_HMC_MMR_DRAMADDRW */
    volatile uint32_t  sideband0;               /* ALT_IO48_HMC_MMR_SIDEBAND0 */
    volatile uint32_t  sideband1;               /* ALT_IO48_HMC_MMR_SIDEBAND1 */
    volatile uint32_t  sideband2;               /* ALT_IO48_HMC_MMR_SIDEBAND2 */
    volatile uint32_t  sideband3;               /* ALT_IO48_HMC_MMR_SIDEBAND3 */
    volatile uint32_t  sideband4;               /* ALT_IO48_HMC_MMR_SIDEBAND4 */
    volatile uint32_t  sideband5;               /* ALT_IO48_HMC_MMR_SIDEBAND5 */
    volatile uint32_t  sideband6;               /* ALT_IO48_HMC_MMR_SIDEBAND6 */
    volatile uint32_t  sideband7;               /* ALT_IO48_HMC_MMR_SIDEBAND7 */
    volatile uint32_t  sideband8;               /* ALT_IO48_HMC_MMR_SIDEBAND8 */
    volatile uint32_t  sideband9;               /* ALT_IO48_HMC_MMR_SIDEBAND9 */
    volatile uint32_t  sideband10;              /* ALT_IO48_HMC_MMR_SIDEBAND10 */
    volatile uint32_t  sideband11;              /* ALT_IO48_HMC_MMR_SIDEBAND11 */
    volatile uint32_t  sideband12;              /* ALT_IO48_HMC_MMR_SIDEBAND12 */
    volatile uint32_t  sideband13;              /* ALT_IO48_HMC_MMR_SIDEBAND13 */
    volatile uint32_t  sideband14;              /* ALT_IO48_HMC_MMR_SIDEBAND14 */
    volatile uint32_t  sideband15;              /* ALT_IO48_HMC_MMR_SIDEBAND15 */
    volatile uint32_t  dramsts;                 /* ALT_IO48_HMC_MMR_DRAMSTS */
    volatile uint32_t  dbgdone;                 /* ALT_IO48_HMC_MMR_DBGDONE */
    volatile uint32_t  dbgsignals;              /* ALT_IO48_HMC_MMR_DBGSIGNALS */
    volatile uint32_t  dbgreset;                /* ALT_IO48_HMC_MMR_DBGRST */
    volatile uint32_t  dbgmatch;                /* ALT_IO48_HMC_MMR_DBGMATCH */
    volatile uint32_t  counter0mask;            /* ALT_IO48_HMC_MMR_CNTR0MSK */
    volatile uint32_t  counter1mask;            /* ALT_IO48_HMC_MMR_CNTR1MSK */
    volatile uint32_t  counter0match;           /* ALT_IO48_HMC_MMR_CNTR0MATCH */
    volatile uint32_t  counter1match;           /* ALT_IO48_HMC_MMR_CNTR1MATCH */
    volatile uint32_t  niosreserve0;            /* ALT_IO48_HMC_MMR_NIOSRESERVE0 */
    volatile uint32_t  niosreserve1;            /* ALT_IO48_HMC_MMR_NIOSRESERVE1 */
    volatile uint32_t  niosreserve2;            /* ALT_IO48_HMC_MMR_NIOSRESERVE2 */
    uint32_t           _pad_0x11c_0x1000[953];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_IO48_HMC_MMR. */
typedef volatile struct ALT_IO48_HMC_MMR_raw_s  ALT_IO48_HMC_MMR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_IO48_HMC_MMR_H__ */

