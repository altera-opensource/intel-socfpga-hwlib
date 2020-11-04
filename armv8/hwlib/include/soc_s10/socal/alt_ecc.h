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

/* Altera - ALT_ECC */

#ifndef __ALT_SOCAL_ECC_H__
#define __ALT_SOCAL_ECC_H__

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
 * Component : ECC
 * 
 */
/*
 * Register : IP_REV_ID
 * 
 * <p>IP slicon revision ID</p>
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description            
 * :--------|:-------|:------|:------------------------
 *  [15:0]  | R      | 0x0   | ALT_ECC_IP_REV_ID_SIREV
 *  [31:16] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : SIREV
 * 
 * <p>IP Rev#</p>
 * 
 * <p>These bits indicate the silicon revision number.</p>
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_IP_REV_ID_SIREV register field. */
#define ALT_ECC_IP_REV_ID_SIREV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_IP_REV_ID_SIREV register field. */
#define ALT_ECC_IP_REV_ID_SIREV_MSB        15
/* The width in bits of the ALT_ECC_IP_REV_ID_SIREV register field. */
#define ALT_ECC_IP_REV_ID_SIREV_WIDTH      16
/* The mask used to set the ALT_ECC_IP_REV_ID_SIREV register field value. */
#define ALT_ECC_IP_REV_ID_SIREV_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_ECC_IP_REV_ID_SIREV register field value. */
#define ALT_ECC_IP_REV_ID_SIREV_CLR_MSK    0xffff0000
/* The reset value of the ALT_ECC_IP_REV_ID_SIREV register field. */
#define ALT_ECC_IP_REV_ID_SIREV_RESET      0x0
/* Extracts the ALT_ECC_IP_REV_ID_SIREV field value from a register. */
#define ALT_ECC_IP_REV_ID_SIREV_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_ECC_IP_REV_ID_SIREV register field value suitable for setting the register. */
#define ALT_ECC_IP_REV_ID_SIREV_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_IP_REV_ID.
 */
struct ALT_ECC_IP_REV_ID_s
{
    const volatile uint32_t  SIREV : 16;  /* ALT_ECC_IP_REV_ID_SIREV */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_IP_REV_ID. */
typedef struct ALT_ECC_IP_REV_ID_s  ALT_ECC_IP_REV_ID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_IP_REV_ID register. */
#define ALT_ECC_IP_REV_ID_RESET       0x00000000
/* The byte offset of the ALT_ECC_IP_REV_ID register from the beginning of the component. */
#define ALT_ECC_IP_REV_ID_OFST        0x0
/* The address of the ALT_ECC_IP_REV_ID register. */
#define ALT_ECC_IP_REV_ID_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_IP_REV_ID_OFST))

/*
 * Register : IP_REV_ID2
 * 
 * <p>IP memory configuration</p>
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [4:0]   | R      | 0x0   | ALT_ECC_IP_REV_ID2_ADDR       
 *  [9:5]   | R      | 0x0   | ALT_ECC_IP_REV_ID2_DAT        
 *  [12:10] | R      | 0x0   | ALT_ECC_IP_REV_ID2_ECC_SIZE   
 *  [15:13] | R      | 0x0   | ALT_ECC_IP_REV_ID2_RAM_TYPE   
 *  [19:16] | R      | 0x0   | ALT_ECC_IP_REV_ID2_LUT_TBL_DEP
 *  [31:20] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : ADDR
 * 
 * <p>Number of address bits (This represent the memory size)Support 32 - 0 address
 * bits.</p>
 * 
 * <p>For example:</p>
 * 
 * <p>10 - 1Kbytes memory size 2^10 - 1K</p>
 * 
 * <p>15 - 32Kbytes memory size 2^15 - 32K</p>
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_IP_REV_ID2_ADDR register field. */
#define ALT_ECC_IP_REV_ID2_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_IP_REV_ID2_ADDR register field. */
#define ALT_ECC_IP_REV_ID2_ADDR_MSB        4
/* The width in bits of the ALT_ECC_IP_REV_ID2_ADDR register field. */
#define ALT_ECC_IP_REV_ID2_ADDR_WIDTH      5
/* The mask used to set the ALT_ECC_IP_REV_ID2_ADDR register field value. */
#define ALT_ECC_IP_REV_ID2_ADDR_SET_MSK    0x0000001f
/* The mask used to clear the ALT_ECC_IP_REV_ID2_ADDR register field value. */
#define ALT_ECC_IP_REV_ID2_ADDR_CLR_MSK    0xffffffe0
/* The reset value of the ALT_ECC_IP_REV_ID2_ADDR register field. */
#define ALT_ECC_IP_REV_ID2_ADDR_RESET      0x0
/* Extracts the ALT_ECC_IP_REV_ID2_ADDR field value from a register. */
#define ALT_ECC_IP_REV_ID2_ADDR_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_ECC_IP_REV_ID2_ADDR register field value suitable for setting the register. */
#define ALT_ECC_IP_REV_ID2_ADDR_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : DAT
 * 
 * <p>Data Width. This field indicates the IP RAM data width. Refer to IP spec for
 * exact data width size.</p>
 * 
 * <p>0 - 8 bits</p>
 * 
 * <p>1 - 16 bits</p>
 * 
 * <p>2 - 32 bits</p>
 * 
 * <p>3 - 35 bits</p>
 * 
 * <p>4 - 64 bits</p>
 * 
 * <p>5 - 128 bits</p>
 * 
 * <p>6 - 256 bits</p>
 * 
 * <p>7 - 512 bits</p>
 * 
 * <p>Others - UNUSED</p>
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_IP_REV_ID2_DAT register field. */
#define ALT_ECC_IP_REV_ID2_DAT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_ECC_IP_REV_ID2_DAT register field. */
#define ALT_ECC_IP_REV_ID2_DAT_MSB        9
/* The width in bits of the ALT_ECC_IP_REV_ID2_DAT register field. */
#define ALT_ECC_IP_REV_ID2_DAT_WIDTH      5
/* The mask used to set the ALT_ECC_IP_REV_ID2_DAT register field value. */
#define ALT_ECC_IP_REV_ID2_DAT_SET_MSK    0x000003e0
/* The mask used to clear the ALT_ECC_IP_REV_ID2_DAT register field value. */
#define ALT_ECC_IP_REV_ID2_DAT_CLR_MSK    0xfffffc1f
/* The reset value of the ALT_ECC_IP_REV_ID2_DAT register field. */
#define ALT_ECC_IP_REV_ID2_DAT_RESET      0x0
/* Extracts the ALT_ECC_IP_REV_ID2_DAT field value from a register. */
#define ALT_ECC_IP_REV_ID2_DAT_GET(value) (((value) & 0x000003e0) >> 5)
/* Produces a ALT_ECC_IP_REV_ID2_DAT register field value suitable for setting the register. */
#define ALT_ECC_IP_REV_ID2_DAT_SET(value) (((value) << 5) & 0x000003e0)

/*
 * Field : ECC_SIZE
 * 
 * <p>ECC Size.</p>
 * 
 * <p>Total number of ECC bits is dependent on the number of encoder/decoder
 * implemented. This is specifying the width of the ECC syndrome.</p>
 * 
 * <p>1 - syndrome is 5 bits</p>
 * 
 * <p>2 - syndrome is 6 bits</p>
 * 
 * <p>3 - syndrome is 7 bits</p>
 * 
 * <p>4 - syndrome is 8 bits</p>
 * 
 * <p>Others - UNUSED</p>
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_IP_REV_ID2_ECC_SIZE register field. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_ECC_IP_REV_ID2_ECC_SIZE register field. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_MSB        12
/* The width in bits of the ALT_ECC_IP_REV_ID2_ECC_SIZE register field. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_WIDTH      3
/* The mask used to set the ALT_ECC_IP_REV_ID2_ECC_SIZE register field value. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_SET_MSK    0x00001c00
/* The mask used to clear the ALT_ECC_IP_REV_ID2_ECC_SIZE register field value. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_CLR_MSK    0xffffe3ff
/* The reset value of the ALT_ECC_IP_REV_ID2_ECC_SIZE register field. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_RESET      0x0
/* Extracts the ALT_ECC_IP_REV_ID2_ECC_SIZE field value from a register. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_GET(value) (((value) & 0x00001c00) >> 10)
/* Produces a ALT_ECC_IP_REV_ID2_ECC_SIZE register field value suitable for setting the register. */
#define ALT_ECC_IP_REV_ID2_ECC_SIZE_SET(value) (((value) << 10) & 0x00001c00)

/*
 * Field : RAM_TYPE
 * 
 * <p>Defines RAM type.</p>
 * 
 * <p>1 - single port</p>
 * 
 * <p>2 - simple dual port</p>
 * 
 * <p>3 - true dual port</p>
 * 
 * <p>Others - UNUSED</p>
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_IP_REV_ID2_RAM_TYPE register field. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_ECC_IP_REV_ID2_RAM_TYPE register field. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_MSB        15
/* The width in bits of the ALT_ECC_IP_REV_ID2_RAM_TYPE register field. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_WIDTH      3
/* The mask used to set the ALT_ECC_IP_REV_ID2_RAM_TYPE register field value. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_SET_MSK    0x0000e000
/* The mask used to clear the ALT_ECC_IP_REV_ID2_RAM_TYPE register field value. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_CLR_MSK    0xffff1fff
/* The reset value of the ALT_ECC_IP_REV_ID2_RAM_TYPE register field. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_RESET      0x0
/* Extracts the ALT_ECC_IP_REV_ID2_RAM_TYPE field value from a register. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_GET(value) (((value) & 0x0000e000) >> 13)
/* Produces a ALT_ECC_IP_REV_ID2_RAM_TYPE register field value suitable for setting the register. */
#define ALT_ECC_IP_REV_ID2_RAM_TYPE_SET(value) (((value) << 13) & 0x0000e000)

/*
 * Field : LUT_TBL_DEP
 * 
 * <p>Lookup Table Depth.</p>
 * 
 * <p><br />1 - 4 words (less than or equal) 64KB RAM size</p>
 * 
 * <p>2 - 8 words (less than or equal) 128KB RAM size</p>
 * 
 * <p>4 - 16 words (less than or equal) 256KB RAM size</p>
 * 
 * <p>8 - 20 words (less than or equal) 512KB RAM size</p>
 * 
 * <p>Others - UNUSED</p>
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_IP_REV_ID2_LUT_TBL_DEP register field. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_IP_REV_ID2_LUT_TBL_DEP register field. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_MSB        19
/* The width in bits of the ALT_ECC_IP_REV_ID2_LUT_TBL_DEP register field. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_WIDTH      4
/* The mask used to set the ALT_ECC_IP_REV_ID2_LUT_TBL_DEP register field value. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_SET_MSK    0x000f0000
/* The mask used to clear the ALT_ECC_IP_REV_ID2_LUT_TBL_DEP register field value. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_ECC_IP_REV_ID2_LUT_TBL_DEP register field. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_RESET      0x0
/* Extracts the ALT_ECC_IP_REV_ID2_LUT_TBL_DEP field value from a register. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_ECC_IP_REV_ID2_LUT_TBL_DEP register field value suitable for setting the register. */
#define ALT_ECC_IP_REV_ID2_LUT_TBL_DEP_SET(value) (((value) << 16) & 0x000f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_IP_REV_ID2.
 */
struct ALT_ECC_IP_REV_ID2_s
{
    const volatile uint32_t  ADDR        :  5;  /* ALT_ECC_IP_REV_ID2_ADDR */
    const volatile uint32_t  DAT         :  5;  /* ALT_ECC_IP_REV_ID2_DAT */
    const volatile uint32_t  ECC_SIZE    :  3;  /* ALT_ECC_IP_REV_ID2_ECC_SIZE */
    const volatile uint32_t  RAM_TYPE    :  3;  /* ALT_ECC_IP_REV_ID2_RAM_TYPE */
    const volatile uint32_t  LUT_TBL_DEP :  4;  /* ALT_ECC_IP_REV_ID2_LUT_TBL_DEP */
    uint32_t                             : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_IP_REV_ID2. */
typedef struct ALT_ECC_IP_REV_ID2_s  ALT_ECC_IP_REV_ID2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_IP_REV_ID2 register. */
#define ALT_ECC_IP_REV_ID2_RESET       0x00000000
/* The byte offset of the ALT_ECC_IP_REV_ID2 register from the beginning of the component. */
#define ALT_ECC_IP_REV_ID2_OFST        0x4
/* The address of the ALT_ECC_IP_REV_ID2 register. */
#define ALT_ECC_IP_REV_ID2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_IP_REV_ID2_OFST))

/*
 * Register : CTRL
 * 
 * ECC Control Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_CTRL_ECC_EN        
 *  [1]     | RW     | 0x1   | ALT_ECC_CTRL_ECC_SLVERR_DIS
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                
 *  [8]     | RW     | 0x0   | ALT_ECC_CTRL_CNT_RSTA      
 *  [9]     | RW     | 0x0   | ALT_ECC_CTRL_CNT_RSTB      
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                
 *  [16]    | RW     | 0x0   | ALT_ECC_CTRL_INITA         
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                
 *  [24]    | RW     | 0x0   | ALT_ECC_CTRL_INITB         
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : ECC_EN
 * 
 * Enable for the ECC detection and correction logic.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description
 * :------------------------------|:------|:------------
 *  ALT_ECC_CTRL_ECC_EN_E_DISABLE | 0x0   |            
 *  ALT_ECC_CTRL_ECC_EN_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_ECC_CTRL_ECC_EN
 * 
 */
#define ALT_ECC_CTRL_ECC_EN_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_ECC_CTRL_ECC_EN
 * 
 */
#define ALT_ECC_CTRL_ECC_EN_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_ECC_CTRL_ECC_EN register field. */
#define ALT_ECC_CTRL_ECC_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_CTRL_ECC_EN register field. */
#define ALT_ECC_CTRL_ECC_EN_MSB        0
/* The width in bits of the ALT_ECC_CTRL_ECC_EN register field. */
#define ALT_ECC_CTRL_ECC_EN_WIDTH      1
/* The mask used to set the ALT_ECC_CTRL_ECC_EN register field value. */
#define ALT_ECC_CTRL_ECC_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_CTRL_ECC_EN register field value. */
#define ALT_ECC_CTRL_ECC_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_CTRL_ECC_EN register field. */
#define ALT_ECC_CTRL_ECC_EN_RESET      0x0
/* Extracts the ALT_ECC_CTRL_ECC_EN field value from a register. */
#define ALT_ECC_CTRL_ECC_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_CTRL_ECC_EN register field value suitable for setting the register. */
#define ALT_ECC_CTRL_ECC_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ECC_SLVERR_DIS
 * 
 * Enable to prevent double-bit ECC error from triggering BUS ERROR on IP-
 * interface.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_ECC_CTRL_ECC_SLVERR_DIS_E_DISABLE | 0x0   |            
 *  ALT_ECC_CTRL_ECC_SLVERR_DIS_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_ECC_CTRL_ECC_SLVERR_DIS
 * 
 */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_ECC_CTRL_ECC_SLVERR_DIS
 * 
 */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_ECC_CTRL_ECC_SLVERR_DIS register field. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_CTRL_ECC_SLVERR_DIS register field. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_MSB        1
/* The width in bits of the ALT_ECC_CTRL_ECC_SLVERR_DIS register field. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_WIDTH      1
/* The mask used to set the ALT_ECC_CTRL_ECC_SLVERR_DIS register field value. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_CTRL_ECC_SLVERR_DIS register field value. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_CTRL_ECC_SLVERR_DIS register field. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_RESET      0x1
/* Extracts the ALT_ECC_CTRL_ECC_SLVERR_DIS field value from a register. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_CTRL_ECC_SLVERR_DIS register field value suitable for setting the register. */
#define ALT_ECC_CTRL_ECC_SLVERR_DIS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : CNT_RSTA
 * 
 * Clear internal single-bit error counter A value to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_CTRL_CNT_RSTA register field. */
#define ALT_ECC_CTRL_CNT_RSTA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_CTRL_CNT_RSTA register field. */
#define ALT_ECC_CTRL_CNT_RSTA_MSB        8
/* The width in bits of the ALT_ECC_CTRL_CNT_RSTA register field. */
#define ALT_ECC_CTRL_CNT_RSTA_WIDTH      1
/* The mask used to set the ALT_ECC_CTRL_CNT_RSTA register field value. */
#define ALT_ECC_CTRL_CNT_RSTA_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_CTRL_CNT_RSTA register field value. */
#define ALT_ECC_CTRL_CNT_RSTA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_CTRL_CNT_RSTA register field. */
#define ALT_ECC_CTRL_CNT_RSTA_RESET      0x0
/* Extracts the ALT_ECC_CTRL_CNT_RSTA field value from a register. */
#define ALT_ECC_CTRL_CNT_RSTA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_CTRL_CNT_RSTA register field value suitable for setting the register. */
#define ALT_ECC_CTRL_CNT_RSTA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : CNT_RSTB
 * 
 * Clear internal single-bit error counter B value to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_CTRL_CNT_RSTB register field. */
#define ALT_ECC_CTRL_CNT_RSTB_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_ECC_CTRL_CNT_RSTB register field. */
#define ALT_ECC_CTRL_CNT_RSTB_MSB        9
/* The width in bits of the ALT_ECC_CTRL_CNT_RSTB register field. */
#define ALT_ECC_CTRL_CNT_RSTB_WIDTH      1
/* The mask used to set the ALT_ECC_CTRL_CNT_RSTB register field value. */
#define ALT_ECC_CTRL_CNT_RSTB_SET_MSK    0x00000200
/* The mask used to clear the ALT_ECC_CTRL_CNT_RSTB register field value. */
#define ALT_ECC_CTRL_CNT_RSTB_CLR_MSK    0xfffffdff
/* The reset value of the ALT_ECC_CTRL_CNT_RSTB register field. */
#define ALT_ECC_CTRL_CNT_RSTB_RESET      0x0
/* Extracts the ALT_ECC_CTRL_CNT_RSTB field value from a register. */
#define ALT_ECC_CTRL_CNT_RSTB_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_ECC_CTRL_CNT_RSTB register field value suitable for setting the register. */
#define ALT_ECC_CTRL_CNT_RSTB_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : INITA
 * 
 * Start for the hardware memory initialization PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_CTRL_INITA register field. */
#define ALT_ECC_CTRL_INITA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_CTRL_INITA register field. */
#define ALT_ECC_CTRL_INITA_MSB        16
/* The width in bits of the ALT_ECC_CTRL_INITA register field. */
#define ALT_ECC_CTRL_INITA_WIDTH      1
/* The mask used to set the ALT_ECC_CTRL_INITA register field value. */
#define ALT_ECC_CTRL_INITA_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_CTRL_INITA register field value. */
#define ALT_ECC_CTRL_INITA_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_CTRL_INITA register field. */
#define ALT_ECC_CTRL_INITA_RESET      0x0
/* Extracts the ALT_ECC_CTRL_INITA field value from a register. */
#define ALT_ECC_CTRL_INITA_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_CTRL_INITA register field value suitable for setting the register. */
#define ALT_ECC_CTRL_INITA_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : INITB
 * 
 * Start for the hardware memory initialization PORTB.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_CTRL_INITB register field. */
#define ALT_ECC_CTRL_INITB_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_CTRL_INITB register field. */
#define ALT_ECC_CTRL_INITB_MSB        24
/* The width in bits of the ALT_ECC_CTRL_INITB register field. */
#define ALT_ECC_CTRL_INITB_WIDTH      1
/* The mask used to set the ALT_ECC_CTRL_INITB register field value. */
#define ALT_ECC_CTRL_INITB_SET_MSK    0x01000000
/* The mask used to clear the ALT_ECC_CTRL_INITB register field value. */
#define ALT_ECC_CTRL_INITB_CLR_MSK    0xfeffffff
/* The reset value of the ALT_ECC_CTRL_INITB register field. */
#define ALT_ECC_CTRL_INITB_RESET      0x0
/* Extracts the ALT_ECC_CTRL_INITB field value from a register. */
#define ALT_ECC_CTRL_INITB_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_ECC_CTRL_INITB register field value suitable for setting the register. */
#define ALT_ECC_CTRL_INITB_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_CTRL.
 */
struct ALT_ECC_CTRL_s
{
    volatile uint32_t  ECC_EN         :  1;  /* ALT_ECC_CTRL_ECC_EN */
    volatile uint32_t  ECC_SLVERR_DIS :  1;  /* ALT_ECC_CTRL_ECC_SLVERR_DIS */
    uint32_t                          :  6;  /* *UNDEFINED* */
    volatile uint32_t  CNT_RSTA       :  1;  /* ALT_ECC_CTRL_CNT_RSTA */
    volatile uint32_t  CNT_RSTB       :  1;  /* ALT_ECC_CTRL_CNT_RSTB */
    uint32_t                          :  6;  /* *UNDEFINED* */
    volatile uint32_t  INITA          :  1;  /* ALT_ECC_CTRL_INITA */
    uint32_t                          :  7;  /* *UNDEFINED* */
    volatile uint32_t  INITB          :  1;  /* ALT_ECC_CTRL_INITB */
    uint32_t                          :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_CTRL. */
typedef struct ALT_ECC_CTRL_s  ALT_ECC_CTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_CTRL register. */
#define ALT_ECC_CTRL_RESET       0x00000002
/* The byte offset of the ALT_ECC_CTRL register from the beginning of the component. */
#define ALT_ECC_CTRL_OFST        0x8
/* The address of the ALT_ECC_CTRL register. */
#define ALT_ECC_CTRL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_CTRL_OFST))

/*
 * Register : INITSTAT
 * 
 * Initialization status used to indicate completion of hardware memory
 * initialization done through CTRL.INITA / CTRL.INITB
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_INITSTAT_INITCOMPLETEA
 *  [7:1]  | ???    | 0x0   | *UNDEFINED*                   
 *  [8]    | RW     | 0x0   | ALT_ECC_INITSTAT_INITCOMPLETEB
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : INITCOMPLETEA
 * 
 * Indicate hardware memory initialization has completed on PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_MSB        0
/* The width in bits of the ALT_ECC_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_WIDTH      1
/* The mask used to set the ALT_ECC_INITSTAT_INITCOMPLETEA register field value. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_INITSTAT_INITCOMPLETEA register field value. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_RESET      0x0
/* Extracts the ALT_ECC_INITSTAT_INITCOMPLETEA field value from a register. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_INITSTAT_INITCOMPLETEA register field value suitable for setting the register. */
#define ALT_ECC_INITSTAT_INITCOMPLETEA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : INITCOMPLETEB
 * 
 * Indicate hardware memory initialization has completed on PORTB.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INITSTAT_INITCOMPLETEB register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_INITSTAT_INITCOMPLETEB register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_MSB        8
/* The width in bits of the ALT_ECC_INITSTAT_INITCOMPLETEB register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_WIDTH      1
/* The mask used to set the ALT_ECC_INITSTAT_INITCOMPLETEB register field value. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_INITSTAT_INITCOMPLETEB register field value. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_INITSTAT_INITCOMPLETEB register field. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_RESET      0x0
/* Extracts the ALT_ECC_INITSTAT_INITCOMPLETEB field value from a register. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_INITSTAT_INITCOMPLETEB register field value suitable for setting the register. */
#define ALT_ECC_INITSTAT_INITCOMPLETEB_SET(value) (((value) << 8) & 0x00000100)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_INITSTAT.
 */
struct ALT_ECC_INITSTAT_s
{
    volatile uint32_t  INITCOMPLETEA :  1;  /* ALT_ECC_INITSTAT_INITCOMPLETEA */
    uint32_t                         :  7;  /* *UNDEFINED* */
    volatile uint32_t  INITCOMPLETEB :  1;  /* ALT_ECC_INITSTAT_INITCOMPLETEB */
    uint32_t                         : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_INITSTAT. */
typedef struct ALT_ECC_INITSTAT_s  ALT_ECC_INITSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_INITSTAT register. */
#define ALT_ECC_INITSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_INITSTAT register from the beginning of the component. */
#define ALT_ECC_INITSTAT_OFST        0xc
/* The address of the ALT_ECC_INITSTAT register. */
#define ALT_ECC_INITSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_INITSTAT_OFST))

/*
 * Register : ERRINTEN
 * 
 * Error Interrupt enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_ERRINTEN_SERRINTEN
 *  [31:1] | ???    | 0x0   | *UNDEFINED*               
 * 
 */
/*
 * Field : SERRINTEN
 * 
 * This bit is used to enable single bit error interrupt of ECC RAM system
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_ECC_ERRINTEN_SERRINTEN_E_DISABLE | 0x0   |            
 *  ALT_ECC_ERRINTEN_SERRINTEN_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_ECC_ERRINTEN_SERRINTEN
 * 
 */
#define ALT_ECC_ERRINTEN_SERRINTEN_E_DISABLE    0x0
/*
 * Enumerated value for register field ALT_ECC_ERRINTEN_SERRINTEN
 * 
 */
#define ALT_ECC_ERRINTEN_SERRINTEN_E_ENABLE     0x1

/* The Least Significant Bit (LSB) position of the ALT_ECC_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_ERRINTEN_SERRINTEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_ERRINTEN_SERRINTEN_MSB        0
/* The width in bits of the ALT_ECC_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_ERRINTEN_SERRINTEN_WIDTH      1
/* The mask used to set the ALT_ECC_ERRINTEN_SERRINTEN register field value. */
#define ALT_ECC_ERRINTEN_SERRINTEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_ERRINTEN_SERRINTEN register field value. */
#define ALT_ECC_ERRINTEN_SERRINTEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_ERRINTEN_SERRINTEN_RESET      0x0
/* Extracts the ALT_ECC_ERRINTEN_SERRINTEN field value from a register. */
#define ALT_ECC_ERRINTEN_SERRINTEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_ERRINTEN_SERRINTEN register field value suitable for setting the register. */
#define ALT_ECC_ERRINTEN_SERRINTEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ERRINTEN.
 */
struct ALT_ECC_ERRINTEN_s
{
    volatile uint32_t  SERRINTEN :  1;  /* ALT_ECC_ERRINTEN_SERRINTEN */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ERRINTEN. */
typedef struct ALT_ECC_ERRINTEN_s  ALT_ECC_ERRINTEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ERRINTEN register. */
#define ALT_ECC_ERRINTEN_RESET       0x00000000
/* The byte offset of the ALT_ECC_ERRINTEN register from the beginning of the component. */
#define ALT_ECC_ERRINTEN_OFST        0x10
/* The address of the ALT_ECC_ERRINTEN register. */
#define ALT_ECC_ERRINTEN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ERRINTEN_OFST))

/*
 * Register : ERRINTENS
 * 
 * Error interrupt set
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_ERRINTENS_SERRINTS
 *  [31:1] | ???    | 0x0   | *UNDEFINED*               
 * 
 */
/*
 * Field : SERRINTS
 * 
 * This bit is used to enable ERRINTENS.SERRINTEN field
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_ERRINTENS_SERRINTS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_ERRINTENS_SERRINTS_MSB        0
/* The width in bits of the ALT_ECC_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_ERRINTENS_SERRINTS_WIDTH      1
/* The mask used to set the ALT_ECC_ERRINTENS_SERRINTS register field value. */
#define ALT_ECC_ERRINTENS_SERRINTS_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_ERRINTENS_SERRINTS register field value. */
#define ALT_ECC_ERRINTENS_SERRINTS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_ERRINTENS_SERRINTS_RESET      0x0
/* Extracts the ALT_ECC_ERRINTENS_SERRINTS field value from a register. */
#define ALT_ECC_ERRINTENS_SERRINTS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_ERRINTENS_SERRINTS register field value suitable for setting the register. */
#define ALT_ECC_ERRINTENS_SERRINTS_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ERRINTENS.
 */
struct ALT_ECC_ERRINTENS_s
{
    volatile uint32_t  SERRINTS :  1;  /* ALT_ECC_ERRINTENS_SERRINTS */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ERRINTENS. */
typedef struct ALT_ECC_ERRINTENS_s  ALT_ECC_ERRINTENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ERRINTENS register. */
#define ALT_ECC_ERRINTENS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ERRINTENS register from the beginning of the component. */
#define ALT_ECC_ERRINTENS_OFST        0x14
/* The address of the ALT_ECC_ERRINTENS register. */
#define ALT_ECC_ERRINTENS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ERRINTENS_OFST))

/*
 * Register : ERRINTENR
 * 
 * Error Interrupt reset
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_ERRINTENR_SERRINTR
 *  [31:1] | ???    | 0x0   | *UNDEFINED*               
 * 
 */
/*
 * Field : SERRINTR
 * 
 * This bit is used to disable ERRINTENS.SERRINTEN field
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_ERRINTENR_SERRINTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_ERRINTENR_SERRINTR_MSB        0
/* The width in bits of the ALT_ECC_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_ERRINTENR_SERRINTR_WIDTH      1
/* The mask used to set the ALT_ECC_ERRINTENR_SERRINTR register field value. */
#define ALT_ECC_ERRINTENR_SERRINTR_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_ERRINTENR_SERRINTR register field value. */
#define ALT_ECC_ERRINTENR_SERRINTR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_ERRINTENR_SERRINTR_RESET      0x0
/* Extracts the ALT_ECC_ERRINTENR_SERRINTR field value from a register. */
#define ALT_ECC_ERRINTENR_SERRINTR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_ERRINTENR_SERRINTR register field value suitable for setting the register. */
#define ALT_ECC_ERRINTENR_SERRINTR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ERRINTENR.
 */
struct ALT_ECC_ERRINTENR_s
{
    volatile uint32_t  SERRINTR :  1;  /* ALT_ECC_ERRINTENR_SERRINTR */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ERRINTENR. */
typedef struct ALT_ECC_ERRINTENR_s  ALT_ECC_ERRINTENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ERRINTENR register. */
#define ALT_ECC_ERRINTENR_RESET       0x00000000
/* The byte offset of the ALT_ECC_ERRINTENR register from the beginning of the component. */
#define ALT_ECC_ERRINTENR_OFST        0x18
/* The address of the ALT_ECC_ERRINTENR register. */
#define ALT_ECC_ERRINTENR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ERRINTENR_OFST))

/*
 * Register : INTMODE
 * 
 * Interrupt modes of ECC RAM system
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description             
 * :--------|:-------|:------|:-------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_INTMODE_INTMODE 
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*             
 *  [8]     | RW     | 0x0   | ALT_ECC_INTMODE_INTONOVF
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*             
 *  [16]    | RW     | 0x0   | ALT_ECC_INTMODE_INTONCMP
 *  [31:17] | ???    | 0x0   | *UNDEFINED*             
 * 
 */
/*
 * Field : INTMODE
 * 
 * Interrupt mode for single-bit error
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_ECC_INTMODE_INTMODE_E_INTR_ALL_ERR  | 0x0   |            
 *  ALT_ECC_INTMODE_INTMODE_E_INTR_DIST_ERR | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_ECC_INTMODE_INTMODE
 * 
 * Enable interrupt on all error mode.
 * 
 * Every single-bit error will cause interrupt.
 */
#define ALT_ECC_INTMODE_INTMODE_E_INTR_ALL_ERR  0x0
/*
 * Enumerated value for register field ALT_ECC_INTMODE_INTMODE
 * 
 * Enable interrupt on distinct error.
 * 
 * Every distinct error which is logged into LUT will cause interrupt.
 */
#define ALT_ECC_INTMODE_INTMODE_E_INTR_DIST_ERR 0x1

/* The Least Significant Bit (LSB) position of the ALT_ECC_INTMODE_INTMODE register field. */
#define ALT_ECC_INTMODE_INTMODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTMODE_INTMODE register field. */
#define ALT_ECC_INTMODE_INTMODE_MSB        0
/* The width in bits of the ALT_ECC_INTMODE_INTMODE register field. */
#define ALT_ECC_INTMODE_INTMODE_WIDTH      1
/* The mask used to set the ALT_ECC_INTMODE_INTMODE register field value. */
#define ALT_ECC_INTMODE_INTMODE_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_INTMODE_INTMODE register field value. */
#define ALT_ECC_INTMODE_INTMODE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_INTMODE_INTMODE register field. */
#define ALT_ECC_INTMODE_INTMODE_RESET      0x0
/* Extracts the ALT_ECC_INTMODE_INTMODE field value from a register. */
#define ALT_ECC_INTMODE_INTMODE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_INTMODE_INTMODE register field value suitable for setting the register. */
#define ALT_ECC_INTMODE_INTMODE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : INTONOVF
 * 
 * Enable interrupt on overflow.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description
 * :-----------------------------------|:------|:------------
 *  ALT_ECC_INTMODE_INTONOVF_E_DISABLE | 0x0   |            
 *  ALT_ECC_INTMODE_INTONOVF_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_ECC_INTMODE_INTONOVF
 * 
 * Disable interrupt on LUT overflow
 */
#define ALT_ECC_INTMODE_INTONOVF_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_ECC_INTMODE_INTONOVF
 * 
 * Enable interrupt on LUT overflow
 */
#define ALT_ECC_INTMODE_INTONOVF_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_ECC_INTMODE_INTONOVF register field. */
#define ALT_ECC_INTMODE_INTONOVF_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTMODE_INTONOVF register field. */
#define ALT_ECC_INTMODE_INTONOVF_MSB        8
/* The width in bits of the ALT_ECC_INTMODE_INTONOVF register field. */
#define ALT_ECC_INTMODE_INTONOVF_WIDTH      1
/* The mask used to set the ALT_ECC_INTMODE_INTONOVF register field value. */
#define ALT_ECC_INTMODE_INTONOVF_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_INTMODE_INTONOVF register field value. */
#define ALT_ECC_INTMODE_INTONOVF_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_INTMODE_INTONOVF register field. */
#define ALT_ECC_INTMODE_INTONOVF_RESET      0x0
/* Extracts the ALT_ECC_INTMODE_INTONOVF field value from a register. */
#define ALT_ECC_INTMODE_INTONOVF_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_INTMODE_INTONOVF register field value suitable for setting the register. */
#define ALT_ECC_INTMODE_INTONOVF_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : INTONCMP
 * 
 * Enable interrupt on compare.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description
 * :-----------------------------------|:------|:------------
 *  ALT_ECC_INTMODE_INTONCMP_E_DISABLE | 0x0   |            
 *  ALT_ECC_INTMODE_INTONCMP_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_ECC_INTMODE_INTONCMP
 * 
 * Disable interrupt on compare feature
 */
#define ALT_ECC_INTMODE_INTONCMP_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_ECC_INTMODE_INTONCMP
 * 
 * Enable interrupt on compare feature
 */
#define ALT_ECC_INTMODE_INTONCMP_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_ECC_INTMODE_INTONCMP register field. */
#define ALT_ECC_INTMODE_INTONCMP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTMODE_INTONCMP register field. */
#define ALT_ECC_INTMODE_INTONCMP_MSB        16
/* The width in bits of the ALT_ECC_INTMODE_INTONCMP register field. */
#define ALT_ECC_INTMODE_INTONCMP_WIDTH      1
/* The mask used to set the ALT_ECC_INTMODE_INTONCMP register field value. */
#define ALT_ECC_INTMODE_INTONCMP_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_INTMODE_INTONCMP register field value. */
#define ALT_ECC_INTMODE_INTONCMP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_INTMODE_INTONCMP register field. */
#define ALT_ECC_INTMODE_INTONCMP_RESET      0x0
/* Extracts the ALT_ECC_INTMODE_INTONCMP field value from a register. */
#define ALT_ECC_INTMODE_INTONCMP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_INTMODE_INTONCMP register field value suitable for setting the register. */
#define ALT_ECC_INTMODE_INTONCMP_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_INTMODE.
 */
struct ALT_ECC_INTMODE_s
{
    volatile uint32_t  INTMODE  :  1;  /* ALT_ECC_INTMODE_INTMODE */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  INTONOVF :  1;  /* ALT_ECC_INTMODE_INTONOVF */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  INTONCMP :  1;  /* ALT_ECC_INTMODE_INTONCMP */
    uint32_t                    : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_INTMODE. */
typedef struct ALT_ECC_INTMODE_s  ALT_ECC_INTMODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_INTMODE register. */
#define ALT_ECC_INTMODE_RESET       0x00000000
/* The byte offset of the ALT_ECC_INTMODE register from the beginning of the component. */
#define ALT_ECC_INTMODE_OFST        0x1c
/* The address of the ALT_ECC_INTMODE register. */
#define ALT_ECC_INTMODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_INTMODE_OFST))

/*
 * Register : INTSTAT
 * 
 * This bit is used to enable interrupt generation on SERR lookup table overflow.
 * When all the entries in the table are valid=1 and this is bit is enabled,
 * serr_req signal will be asserted.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description             
 * :--------|:-------|:------|:-------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_INTSTAT_SERRPENA
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*             
 *  [8]     | RW     | 0x0   | ALT_ECC_INTSTAT_DERRPENA
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*             
 *  [16]    | RW     | 0x0   | ALT_ECC_INTSTAT_SERRPENB
 *  [23:17] | ???    | 0x0   | *UNDEFINED*             
 *  [24]    | RW     | 0x0   | ALT_ECC_INTSTAT_DERRPENB
 *  [31:25] | ???    | 0x0   | *UNDEFINED*             
 * 
 */
/*
 * Field : SERRPENA
 * 
 * Single-bit error pending for PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTSTAT_SERRPENA register field. */
#define ALT_ECC_INTSTAT_SERRPENA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTSTAT_SERRPENA register field. */
#define ALT_ECC_INTSTAT_SERRPENA_MSB        0
/* The width in bits of the ALT_ECC_INTSTAT_SERRPENA register field. */
#define ALT_ECC_INTSTAT_SERRPENA_WIDTH      1
/* The mask used to set the ALT_ECC_INTSTAT_SERRPENA register field value. */
#define ALT_ECC_INTSTAT_SERRPENA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_INTSTAT_SERRPENA register field value. */
#define ALT_ECC_INTSTAT_SERRPENA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_INTSTAT_SERRPENA register field. */
#define ALT_ECC_INTSTAT_SERRPENA_RESET      0x0
/* Extracts the ALT_ECC_INTSTAT_SERRPENA field value from a register. */
#define ALT_ECC_INTSTAT_SERRPENA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_INTSTAT_SERRPENA register field value suitable for setting the register. */
#define ALT_ECC_INTSTAT_SERRPENA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DERRPENA
 * 
 * Double-bit error pending for PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTSTAT_DERRPENA register field. */
#define ALT_ECC_INTSTAT_DERRPENA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTSTAT_DERRPENA register field. */
#define ALT_ECC_INTSTAT_DERRPENA_MSB        8
/* The width in bits of the ALT_ECC_INTSTAT_DERRPENA register field. */
#define ALT_ECC_INTSTAT_DERRPENA_WIDTH      1
/* The mask used to set the ALT_ECC_INTSTAT_DERRPENA register field value. */
#define ALT_ECC_INTSTAT_DERRPENA_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_INTSTAT_DERRPENA register field value. */
#define ALT_ECC_INTSTAT_DERRPENA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_INTSTAT_DERRPENA register field. */
#define ALT_ECC_INTSTAT_DERRPENA_RESET      0x0
/* Extracts the ALT_ECC_INTSTAT_DERRPENA field value from a register. */
#define ALT_ECC_INTSTAT_DERRPENA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_INTSTAT_DERRPENA register field value suitable for setting the register. */
#define ALT_ECC_INTSTAT_DERRPENA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SERRPENB
 * 
 * Single-bit error pending for PORTB.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTSTAT_SERRPENB register field. */
#define ALT_ECC_INTSTAT_SERRPENB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTSTAT_SERRPENB register field. */
#define ALT_ECC_INTSTAT_SERRPENB_MSB        16
/* The width in bits of the ALT_ECC_INTSTAT_SERRPENB register field. */
#define ALT_ECC_INTSTAT_SERRPENB_WIDTH      1
/* The mask used to set the ALT_ECC_INTSTAT_SERRPENB register field value. */
#define ALT_ECC_INTSTAT_SERRPENB_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_INTSTAT_SERRPENB register field value. */
#define ALT_ECC_INTSTAT_SERRPENB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_INTSTAT_SERRPENB register field. */
#define ALT_ECC_INTSTAT_SERRPENB_RESET      0x0
/* Extracts the ALT_ECC_INTSTAT_SERRPENB field value from a register. */
#define ALT_ECC_INTSTAT_SERRPENB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_INTSTAT_SERRPENB register field value suitable for setting the register. */
#define ALT_ECC_INTSTAT_SERRPENB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : DERRPENB
 * 
 * Double-bit error pending PORTB.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTSTAT_DERRPENB register field. */
#define ALT_ECC_INTSTAT_DERRPENB_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTSTAT_DERRPENB register field. */
#define ALT_ECC_INTSTAT_DERRPENB_MSB        24
/* The width in bits of the ALT_ECC_INTSTAT_DERRPENB register field. */
#define ALT_ECC_INTSTAT_DERRPENB_WIDTH      1
/* The mask used to set the ALT_ECC_INTSTAT_DERRPENB register field value. */
#define ALT_ECC_INTSTAT_DERRPENB_SET_MSK    0x01000000
/* The mask used to clear the ALT_ECC_INTSTAT_DERRPENB register field value. */
#define ALT_ECC_INTSTAT_DERRPENB_CLR_MSK    0xfeffffff
/* The reset value of the ALT_ECC_INTSTAT_DERRPENB register field. */
#define ALT_ECC_INTSTAT_DERRPENB_RESET      0x0
/* Extracts the ALT_ECC_INTSTAT_DERRPENB field value from a register. */
#define ALT_ECC_INTSTAT_DERRPENB_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_ECC_INTSTAT_DERRPENB register field value suitable for setting the register. */
#define ALT_ECC_INTSTAT_DERRPENB_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_INTSTAT.
 */
struct ALT_ECC_INTSTAT_s
{
    volatile uint32_t  SERRPENA :  1;  /* ALT_ECC_INTSTAT_SERRPENA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  DERRPENA :  1;  /* ALT_ECC_INTSTAT_DERRPENA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  SERRPENB :  1;  /* ALT_ECC_INTSTAT_SERRPENB */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  DERRPENB :  1;  /* ALT_ECC_INTSTAT_DERRPENB */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_INTSTAT. */
typedef struct ALT_ECC_INTSTAT_s  ALT_ECC_INTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_INTSTAT register. */
#define ALT_ECC_INTSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_INTSTAT register from the beginning of the component. */
#define ALT_ECC_INTSTAT_OFST        0x20
/* The address of the ALT_ECC_INTSTAT register. */
#define ALT_ECC_INTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_INTSTAT_OFST))

/*
 * Register : INTTEST
 * 
 * This bits is used to test interrupt from ECC RAM to GIC
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description           
 * :--------|:-------|:------|:-----------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_INTTEST_TSERRA
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*           
 *  [8]     | RW     | 0x0   | ALT_ECC_INTTEST_TDERRA
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*           
 *  [16]    | RW     | 0x0   | ALT_ECC_INTTEST_TSERRB
 *  [23:17] | ???    | 0x0   | *UNDEFINED*           
 *  [24]    | RW     | 0x0   | ALT_ECC_INTTEST_TDERRB
 *  [31:25] | ???    | 0x0   | *UNDEFINED*           
 * 
 */
/*
 * Field : TSERRA
 * 
 * Test PORTA Single-bit error.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTTEST_TSERRA register field. */
#define ALT_ECC_INTTEST_TSERRA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTTEST_TSERRA register field. */
#define ALT_ECC_INTTEST_TSERRA_MSB        0
/* The width in bits of the ALT_ECC_INTTEST_TSERRA register field. */
#define ALT_ECC_INTTEST_TSERRA_WIDTH      1
/* The mask used to set the ALT_ECC_INTTEST_TSERRA register field value. */
#define ALT_ECC_INTTEST_TSERRA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_INTTEST_TSERRA register field value. */
#define ALT_ECC_INTTEST_TSERRA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_INTTEST_TSERRA register field. */
#define ALT_ECC_INTTEST_TSERRA_RESET      0x0
/* Extracts the ALT_ECC_INTTEST_TSERRA field value from a register. */
#define ALT_ECC_INTTEST_TSERRA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_INTTEST_TSERRA register field value suitable for setting the register. */
#define ALT_ECC_INTTEST_TSERRA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TDERRA
 * 
 * Test PORTA Double-bit error.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTTEST_TDERRA register field. */
#define ALT_ECC_INTTEST_TDERRA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTTEST_TDERRA register field. */
#define ALT_ECC_INTTEST_TDERRA_MSB        8
/* The width in bits of the ALT_ECC_INTTEST_TDERRA register field. */
#define ALT_ECC_INTTEST_TDERRA_WIDTH      1
/* The mask used to set the ALT_ECC_INTTEST_TDERRA register field value. */
#define ALT_ECC_INTTEST_TDERRA_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_INTTEST_TDERRA register field value. */
#define ALT_ECC_INTTEST_TDERRA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_INTTEST_TDERRA register field. */
#define ALT_ECC_INTTEST_TDERRA_RESET      0x0
/* Extracts the ALT_ECC_INTTEST_TDERRA field value from a register. */
#define ALT_ECC_INTTEST_TDERRA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_INTTEST_TDERRA register field value suitable for setting the register. */
#define ALT_ECC_INTTEST_TDERRA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : TSERRB
 * 
 * Test PORTB Single-bit error.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTTEST_TSERRB register field. */
#define ALT_ECC_INTTEST_TSERRB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTTEST_TSERRB register field. */
#define ALT_ECC_INTTEST_TSERRB_MSB        16
/* The width in bits of the ALT_ECC_INTTEST_TSERRB register field. */
#define ALT_ECC_INTTEST_TSERRB_WIDTH      1
/* The mask used to set the ALT_ECC_INTTEST_TSERRB register field value. */
#define ALT_ECC_INTTEST_TSERRB_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_INTTEST_TSERRB register field value. */
#define ALT_ECC_INTTEST_TSERRB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_INTTEST_TSERRB register field. */
#define ALT_ECC_INTTEST_TSERRB_RESET      0x0
/* Extracts the ALT_ECC_INTTEST_TSERRB field value from a register. */
#define ALT_ECC_INTTEST_TSERRB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_INTTEST_TSERRB register field value suitable for setting the register. */
#define ALT_ECC_INTTEST_TSERRB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : TDERRB
 * 
 * Test PORTB Double-bit error.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_INTTEST_TDERRB register field. */
#define ALT_ECC_INTTEST_TDERRB_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_INTTEST_TDERRB register field. */
#define ALT_ECC_INTTEST_TDERRB_MSB        24
/* The width in bits of the ALT_ECC_INTTEST_TDERRB register field. */
#define ALT_ECC_INTTEST_TDERRB_WIDTH      1
/* The mask used to set the ALT_ECC_INTTEST_TDERRB register field value. */
#define ALT_ECC_INTTEST_TDERRB_SET_MSK    0x01000000
/* The mask used to clear the ALT_ECC_INTTEST_TDERRB register field value. */
#define ALT_ECC_INTTEST_TDERRB_CLR_MSK    0xfeffffff
/* The reset value of the ALT_ECC_INTTEST_TDERRB register field. */
#define ALT_ECC_INTTEST_TDERRB_RESET      0x0
/* Extracts the ALT_ECC_INTTEST_TDERRB field value from a register. */
#define ALT_ECC_INTTEST_TDERRB_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_ECC_INTTEST_TDERRB register field value suitable for setting the register. */
#define ALT_ECC_INTTEST_TDERRB_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_INTTEST.
 */
struct ALT_ECC_INTTEST_s
{
    volatile uint32_t  TSERRA :  1;  /* ALT_ECC_INTTEST_TSERRA */
    uint32_t                  :  7;  /* *UNDEFINED* */
    volatile uint32_t  TDERRA :  1;  /* ALT_ECC_INTTEST_TDERRA */
    uint32_t                  :  7;  /* *UNDEFINED* */
    volatile uint32_t  TSERRB :  1;  /* ALT_ECC_INTTEST_TSERRB */
    uint32_t                  :  7;  /* *UNDEFINED* */
    volatile uint32_t  TDERRB :  1;  /* ALT_ECC_INTTEST_TDERRB */
    uint32_t                  :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_INTTEST. */
typedef struct ALT_ECC_INTTEST_s  ALT_ECC_INTTEST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_INTTEST register. */
#define ALT_ECC_INTTEST_RESET       0x00000000
/* The byte offset of the ALT_ECC_INTTEST register from the beginning of the component. */
#define ALT_ECC_INTTEST_OFST        0x24
/* The address of the ALT_ECC_INTTEST register. */
#define ALT_ECC_INTTEST_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_INTTEST_OFST))

/*
 * Register : MODSTAT
 * 
 * <p>Mode status flag</p>
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_MODSTAT_CMPFLGA  
 *  [1]    | RW     | 0x0   | ALT_ECC_MODSTAT_CMPFLGB  
 *  [2]    | RW     | 0x0   | ALT_ECC_MODSTAT_RMW_SERRA
 *  [3]    | RW     | 0x0   | ALT_ECC_MODSTAT_RMW_SERRB
 *  [4]    | RW     | 0x0   | ALT_ECC_MODSTAT_RMW_DERRA
 *  [5]    | RW     | 0x0   | ALT_ECC_MODSTAT_RMW_DERRB
 *  [31:6] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : CMPFLGA
 * 
 * Port A compare status flag
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_MODSTAT_CMPFLGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_MODSTAT_CMPFLGA_MSB        0
/* The width in bits of the ALT_ECC_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_MODSTAT_CMPFLGA_WIDTH      1
/* The mask used to set the ALT_ECC_MODSTAT_CMPFLGA register field value. */
#define ALT_ECC_MODSTAT_CMPFLGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_MODSTAT_CMPFLGA register field value. */
#define ALT_ECC_MODSTAT_CMPFLGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_MODSTAT_CMPFLGA_RESET      0x0
/* Extracts the ALT_ECC_MODSTAT_CMPFLGA field value from a register. */
#define ALT_ECC_MODSTAT_CMPFLGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_MODSTAT_CMPFLGA register field value suitable for setting the register. */
#define ALT_ECC_MODSTAT_CMPFLGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CMPFLGB
 * 
 * Port B compare status flag
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_MODSTAT_CMPFLGB register field. */
#define ALT_ECC_MODSTAT_CMPFLGB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_MODSTAT_CMPFLGB register field. */
#define ALT_ECC_MODSTAT_CMPFLGB_MSB        1
/* The width in bits of the ALT_ECC_MODSTAT_CMPFLGB register field. */
#define ALT_ECC_MODSTAT_CMPFLGB_WIDTH      1
/* The mask used to set the ALT_ECC_MODSTAT_CMPFLGB register field value. */
#define ALT_ECC_MODSTAT_CMPFLGB_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_MODSTAT_CMPFLGB register field value. */
#define ALT_ECC_MODSTAT_CMPFLGB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_MODSTAT_CMPFLGB register field. */
#define ALT_ECC_MODSTAT_CMPFLGB_RESET      0x0
/* Extracts the ALT_ECC_MODSTAT_CMPFLGB field value from a register. */
#define ALT_ECC_MODSTAT_CMPFLGB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_MODSTAT_CMPFLGB register field value suitable for setting the register. */
#define ALT_ECC_MODSTAT_CMPFLGB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RMW_SERRA
 * 
 * This bit indicates that a RMW access due to a subword access generated a SERR
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_MODSTAT_RMW_SERRA register field. */
#define ALT_ECC_MODSTAT_RMW_SERRA_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_ECC_MODSTAT_RMW_SERRA register field. */
#define ALT_ECC_MODSTAT_RMW_SERRA_MSB        2
/* The width in bits of the ALT_ECC_MODSTAT_RMW_SERRA register field. */
#define ALT_ECC_MODSTAT_RMW_SERRA_WIDTH      1
/* The mask used to set the ALT_ECC_MODSTAT_RMW_SERRA register field value. */
#define ALT_ECC_MODSTAT_RMW_SERRA_SET_MSK    0x00000004
/* The mask used to clear the ALT_ECC_MODSTAT_RMW_SERRA register field value. */
#define ALT_ECC_MODSTAT_RMW_SERRA_CLR_MSK    0xfffffffb
/* The reset value of the ALT_ECC_MODSTAT_RMW_SERRA register field. */
#define ALT_ECC_MODSTAT_RMW_SERRA_RESET      0x0
/* Extracts the ALT_ECC_MODSTAT_RMW_SERRA field value from a register. */
#define ALT_ECC_MODSTAT_RMW_SERRA_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_ECC_MODSTAT_RMW_SERRA register field value suitable for setting the register. */
#define ALT_ECC_MODSTAT_RMW_SERRA_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RMW_SERRB
 * 
 * This bit indicates that a RMW access due to a subword access generated a SERR
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_MODSTAT_RMW_SERRB register field. */
#define ALT_ECC_MODSTAT_RMW_SERRB_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_ECC_MODSTAT_RMW_SERRB register field. */
#define ALT_ECC_MODSTAT_RMW_SERRB_MSB        3
/* The width in bits of the ALT_ECC_MODSTAT_RMW_SERRB register field. */
#define ALT_ECC_MODSTAT_RMW_SERRB_WIDTH      1
/* The mask used to set the ALT_ECC_MODSTAT_RMW_SERRB register field value. */
#define ALT_ECC_MODSTAT_RMW_SERRB_SET_MSK    0x00000008
/* The mask used to clear the ALT_ECC_MODSTAT_RMW_SERRB register field value. */
#define ALT_ECC_MODSTAT_RMW_SERRB_CLR_MSK    0xfffffff7
/* The reset value of the ALT_ECC_MODSTAT_RMW_SERRB register field. */
#define ALT_ECC_MODSTAT_RMW_SERRB_RESET      0x0
/* Extracts the ALT_ECC_MODSTAT_RMW_SERRB field value from a register. */
#define ALT_ECC_MODSTAT_RMW_SERRB_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_ECC_MODSTAT_RMW_SERRB register field value suitable for setting the register. */
#define ALT_ECC_MODSTAT_RMW_SERRB_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RMW_DERRA
 * 
 * This bit indicates that a RMW access due to a subword access generated a DERR
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_MODSTAT_RMW_DERRA register field. */
#define ALT_ECC_MODSTAT_RMW_DERRA_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_ECC_MODSTAT_RMW_DERRA register field. */
#define ALT_ECC_MODSTAT_RMW_DERRA_MSB        4
/* The width in bits of the ALT_ECC_MODSTAT_RMW_DERRA register field. */
#define ALT_ECC_MODSTAT_RMW_DERRA_WIDTH      1
/* The mask used to set the ALT_ECC_MODSTAT_RMW_DERRA register field value. */
#define ALT_ECC_MODSTAT_RMW_DERRA_SET_MSK    0x00000010
/* The mask used to clear the ALT_ECC_MODSTAT_RMW_DERRA register field value. */
#define ALT_ECC_MODSTAT_RMW_DERRA_CLR_MSK    0xffffffef
/* The reset value of the ALT_ECC_MODSTAT_RMW_DERRA register field. */
#define ALT_ECC_MODSTAT_RMW_DERRA_RESET      0x0
/* Extracts the ALT_ECC_MODSTAT_RMW_DERRA field value from a register. */
#define ALT_ECC_MODSTAT_RMW_DERRA_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_ECC_MODSTAT_RMW_DERRA register field value suitable for setting the register. */
#define ALT_ECC_MODSTAT_RMW_DERRA_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : RMW_DERRB
 * 
 * This bit indicates that a RMW access due to a subword access generated a DERR
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_MODSTAT_RMW_DERRB register field. */
#define ALT_ECC_MODSTAT_RMW_DERRB_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_ECC_MODSTAT_RMW_DERRB register field. */
#define ALT_ECC_MODSTAT_RMW_DERRB_MSB        5
/* The width in bits of the ALT_ECC_MODSTAT_RMW_DERRB register field. */
#define ALT_ECC_MODSTAT_RMW_DERRB_WIDTH      1
/* The mask used to set the ALT_ECC_MODSTAT_RMW_DERRB register field value. */
#define ALT_ECC_MODSTAT_RMW_DERRB_SET_MSK    0x00000020
/* The mask used to clear the ALT_ECC_MODSTAT_RMW_DERRB register field value. */
#define ALT_ECC_MODSTAT_RMW_DERRB_CLR_MSK    0xffffffdf
/* The reset value of the ALT_ECC_MODSTAT_RMW_DERRB register field. */
#define ALT_ECC_MODSTAT_RMW_DERRB_RESET      0x0
/* Extracts the ALT_ECC_MODSTAT_RMW_DERRB field value from a register. */
#define ALT_ECC_MODSTAT_RMW_DERRB_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_ECC_MODSTAT_RMW_DERRB register field value suitable for setting the register. */
#define ALT_ECC_MODSTAT_RMW_DERRB_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_MODSTAT.
 */
struct ALT_ECC_MODSTAT_s
{
    volatile uint32_t  CMPFLGA   :  1;  /* ALT_ECC_MODSTAT_CMPFLGA */
    volatile uint32_t  CMPFLGB   :  1;  /* ALT_ECC_MODSTAT_CMPFLGB */
    volatile uint32_t  RMW_SERRA :  1;  /* ALT_ECC_MODSTAT_RMW_SERRA */
    volatile uint32_t  RMW_SERRB :  1;  /* ALT_ECC_MODSTAT_RMW_SERRB */
    volatile uint32_t  RMW_DERRA :  1;  /* ALT_ECC_MODSTAT_RMW_DERRA */
    volatile uint32_t  RMW_DERRB :  1;  /* ALT_ECC_MODSTAT_RMW_DERRB */
    uint32_t                     : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_MODSTAT. */
typedef struct ALT_ECC_MODSTAT_s  ALT_ECC_MODSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_MODSTAT register. */
#define ALT_ECC_MODSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_MODSTAT register from the beginning of the component. */
#define ALT_ECC_MODSTAT_OFST        0x28
/* The address of the ALT_ECC_MODSTAT register. */
#define ALT_ECC_MODSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_MODSTAT_OFST))

/*
 * Register : DERRADDRA
 * 
 * This register shows the address of PORTA current double-bit error. RAM size will
 * determine the maximum number of address bits.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [30:0] | RW     | 0x0   | ALT_ECC_DERRADDRA_ADDRESS
 *  [31]   | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : Address
 * 
 * Recent double-bit error address.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_DERRADDRA_ADDRESS register field. */
#define ALT_ECC_DERRADDRA_ADDRESS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_DERRADDRA_ADDRESS register field. */
#define ALT_ECC_DERRADDRA_ADDRESS_MSB        30
/* The width in bits of the ALT_ECC_DERRADDRA_ADDRESS register field. */
#define ALT_ECC_DERRADDRA_ADDRESS_WIDTH      31
/* The mask used to set the ALT_ECC_DERRADDRA_ADDRESS register field value. */
#define ALT_ECC_DERRADDRA_ADDRESS_SET_MSK    0x7fffffff
/* The mask used to clear the ALT_ECC_DERRADDRA_ADDRESS register field value. */
#define ALT_ECC_DERRADDRA_ADDRESS_CLR_MSK    0x80000000
/* The reset value of the ALT_ECC_DERRADDRA_ADDRESS register field. */
#define ALT_ECC_DERRADDRA_ADDRESS_RESET      0x0
/* Extracts the ALT_ECC_DERRADDRA_ADDRESS field value from a register. */
#define ALT_ECC_DERRADDRA_ADDRESS_GET(value) (((value) & 0x7fffffff) >> 0)
/* Produces a ALT_ECC_DERRADDRA_ADDRESS register field value suitable for setting the register. */
#define ALT_ECC_DERRADDRA_ADDRESS_SET(value) (((value) << 0) & 0x7fffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_DERRADDRA.
 */
struct ALT_ECC_DERRADDRA_s
{
    volatile uint32_t  Address : 31;  /* ALT_ECC_DERRADDRA_ADDRESS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_DERRADDRA. */
typedef struct ALT_ECC_DERRADDRA_s  ALT_ECC_DERRADDRA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_DERRADDRA register. */
#define ALT_ECC_DERRADDRA_RESET       0x00000000
/* The byte offset of the ALT_ECC_DERRADDRA register from the beginning of the component. */
#define ALT_ECC_DERRADDRA_OFST        0x2c
/* The address of the ALT_ECC_DERRADDRA register. */
#define ALT_ECC_DERRADDRA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_DERRADDRA_OFST))

/*
 * Register : SERRADDRA
 * 
 * This register shows the address of PORTA current single-bit error. RAM size will
 * determine the maximum number of address bits.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [30:0] | RW     | 0x0   | ALT_ECC_SERRADDRA_ADDRESS
 *  [31]   | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : Address
 * 
 * Recent single-bit error address.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRADDRA_ADDRESS register field. */
#define ALT_ECC_SERRADDRA_ADDRESS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRADDRA_ADDRESS register field. */
#define ALT_ECC_SERRADDRA_ADDRESS_MSB        30
/* The width in bits of the ALT_ECC_SERRADDRA_ADDRESS register field. */
#define ALT_ECC_SERRADDRA_ADDRESS_WIDTH      31
/* The mask used to set the ALT_ECC_SERRADDRA_ADDRESS register field value. */
#define ALT_ECC_SERRADDRA_ADDRESS_SET_MSK    0x7fffffff
/* The mask used to clear the ALT_ECC_SERRADDRA_ADDRESS register field value. */
#define ALT_ECC_SERRADDRA_ADDRESS_CLR_MSK    0x80000000
/* The reset value of the ALT_ECC_SERRADDRA_ADDRESS register field. */
#define ALT_ECC_SERRADDRA_ADDRESS_RESET      0x0
/* Extracts the ALT_ECC_SERRADDRA_ADDRESS field value from a register. */
#define ALT_ECC_SERRADDRA_ADDRESS_GET(value) (((value) & 0x7fffffff) >> 0)
/* Produces a ALT_ECC_SERRADDRA_ADDRESS register field value suitable for setting the register. */
#define ALT_ECC_SERRADDRA_ADDRESS_SET(value) (((value) << 0) & 0x7fffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_SERRADDRA.
 */
struct ALT_ECC_SERRADDRA_s
{
    volatile uint32_t  Address : 31;  /* ALT_ECC_SERRADDRA_ADDRESS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_SERRADDRA. */
typedef struct ALT_ECC_SERRADDRA_s  ALT_ECC_SERRADDRA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_SERRADDRA register. */
#define ALT_ECC_SERRADDRA_RESET       0x00000000
/* The byte offset of the ALT_ECC_SERRADDRA register from the beginning of the component. */
#define ALT_ECC_SERRADDRA_OFST        0x30
/* The address of the ALT_ECC_SERRADDRA register. */
#define ALT_ECC_SERRADDRA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_SERRADDRA_OFST))

/*
 * Register : DERRADDRB
 * 
 * This register shows the address of PORTB current double-bit error. RAM size will
 * determine the maximum number of address bits.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [30:0] | RW     | 0x0   | ALT_ECC_DERRADDRB_ADDRESS
 *  [31]   | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : Address
 * 
 * Recent double-bit error address.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_DERRADDRB_ADDRESS register field. */
#define ALT_ECC_DERRADDRB_ADDRESS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_DERRADDRB_ADDRESS register field. */
#define ALT_ECC_DERRADDRB_ADDRESS_MSB        30
/* The width in bits of the ALT_ECC_DERRADDRB_ADDRESS register field. */
#define ALT_ECC_DERRADDRB_ADDRESS_WIDTH      31
/* The mask used to set the ALT_ECC_DERRADDRB_ADDRESS register field value. */
#define ALT_ECC_DERRADDRB_ADDRESS_SET_MSK    0x7fffffff
/* The mask used to clear the ALT_ECC_DERRADDRB_ADDRESS register field value. */
#define ALT_ECC_DERRADDRB_ADDRESS_CLR_MSK    0x80000000
/* The reset value of the ALT_ECC_DERRADDRB_ADDRESS register field. */
#define ALT_ECC_DERRADDRB_ADDRESS_RESET      0x0
/* Extracts the ALT_ECC_DERRADDRB_ADDRESS field value from a register. */
#define ALT_ECC_DERRADDRB_ADDRESS_GET(value) (((value) & 0x7fffffff) >> 0)
/* Produces a ALT_ECC_DERRADDRB_ADDRESS register field value suitable for setting the register. */
#define ALT_ECC_DERRADDRB_ADDRESS_SET(value) (((value) << 0) & 0x7fffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_DERRADDRB.
 */
struct ALT_ECC_DERRADDRB_s
{
    volatile uint32_t  Address : 31;  /* ALT_ECC_DERRADDRB_ADDRESS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_DERRADDRB. */
typedef struct ALT_ECC_DERRADDRB_s  ALT_ECC_DERRADDRB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_DERRADDRB register. */
#define ALT_ECC_DERRADDRB_RESET       0x00000000
/* The byte offset of the ALT_ECC_DERRADDRB register from the beginning of the component. */
#define ALT_ECC_DERRADDRB_OFST        0x34
/* The address of the ALT_ECC_DERRADDRB register. */
#define ALT_ECC_DERRADDRB_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_DERRADDRB_OFST))

/*
 * Register : SERRADDRB
 * 
 * This register shows the address of PORTB current single-bit error. RAM size will
 * determine the maximum number of address bits.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [30:0] | RW     | 0x0   | ALT_ECC_SERRADDRB_ADDRESS
 *  [31]   | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : Address
 * 
 * Recent single-bit error address.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRADDRB_ADDRESS register field. */
#define ALT_ECC_SERRADDRB_ADDRESS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRADDRB_ADDRESS register field. */
#define ALT_ECC_SERRADDRB_ADDRESS_MSB        30
/* The width in bits of the ALT_ECC_SERRADDRB_ADDRESS register field. */
#define ALT_ECC_SERRADDRB_ADDRESS_WIDTH      31
/* The mask used to set the ALT_ECC_SERRADDRB_ADDRESS register field value. */
#define ALT_ECC_SERRADDRB_ADDRESS_SET_MSK    0x7fffffff
/* The mask used to clear the ALT_ECC_SERRADDRB_ADDRESS register field value. */
#define ALT_ECC_SERRADDRB_ADDRESS_CLR_MSK    0x80000000
/* The reset value of the ALT_ECC_SERRADDRB_ADDRESS register field. */
#define ALT_ECC_SERRADDRB_ADDRESS_RESET      0x0
/* Extracts the ALT_ECC_SERRADDRB_ADDRESS field value from a register. */
#define ALT_ECC_SERRADDRB_ADDRESS_GET(value) (((value) & 0x7fffffff) >> 0)
/* Produces a ALT_ECC_SERRADDRB_ADDRESS register field value suitable for setting the register. */
#define ALT_ECC_SERRADDRB_ADDRESS_SET(value) (((value) << 0) & 0x7fffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_SERRADDRB.
 */
struct ALT_ECC_SERRADDRB_s
{
    volatile uint32_t  Address : 31;  /* ALT_ECC_SERRADDRB_ADDRESS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_SERRADDRB. */
typedef struct ALT_ECC_SERRADDRB_s  ALT_ECC_SERRADDRB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_SERRADDRB register. */
#define ALT_ECC_SERRADDRB_RESET       0x00000000
/* The byte offset of the ALT_ECC_SERRADDRB register from the beginning of the component. */
#define ALT_ECC_SERRADDRB_OFST        0x38
/* The address of the ALT_ECC_SERRADDRB register. */
#define ALT_ECC_SERRADDRB_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_SERRADDRB_OFST))

/*
 * Register : SERRCNTREG
 * 
 * Maximum counter value for single-bit error interrupt
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_SERRCNTREG_SERRCNT
 * 
 */
/*
 * Field : SERRCNT
 * 
 * Counter value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_SERRCNTREG_SERRCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_SERRCNTREG_SERRCNT_MSB        31
/* The width in bits of the ALT_ECC_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_SERRCNTREG_SERRCNT_WIDTH      32
/* The mask used to set the ALT_ECC_SERRCNTREG_SERRCNT register field value. */
#define ALT_ECC_SERRCNTREG_SERRCNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_SERRCNTREG_SERRCNT register field value. */
#define ALT_ECC_SERRCNTREG_SERRCNT_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_SERRCNTREG_SERRCNT_RESET      0x0
/* Extracts the ALT_ECC_SERRCNTREG_SERRCNT field value from a register. */
#define ALT_ECC_SERRCNTREG_SERRCNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_SERRCNTREG_SERRCNT register field value suitable for setting the register. */
#define ALT_ECC_SERRCNTREG_SERRCNT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_SERRCNTREG.
 */
struct ALT_ECC_SERRCNTREG_s
{
    volatile uint32_t  SERRCNT : 32;  /* ALT_ECC_SERRCNTREG_SERRCNT */
};

/* The typedef declaration for register ALT_ECC_SERRCNTREG. */
typedef struct ALT_ECC_SERRCNTREG_s  ALT_ECC_SERRCNTREG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_SERRCNTREG register. */
#define ALT_ECC_SERRCNTREG_RESET       0x00000000
/* The byte offset of the ALT_ECC_SERRCNTREG register from the beginning of the component. */
#define ALT_ECC_SERRCNTREG_OFST        0x3c
/* The address of the ALT_ECC_SERRCNTREG register. */
#define ALT_ECC_SERRCNTREG_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_SERRCNTREG_OFST))

/*
 * Register : ECC_Addrbus
 * 
 * MSB bit of address is determined by ADR.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [30:0] | RW     | 0x0   | ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS
 *  [31]   | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : ECC_AddrBUS
 * 
 * Address will be driven to RAM to either read or write the data. Address will be
 * latched by the RAM when the Enbus is asserted.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_MSB        30
/* The width in bits of the ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_WIDTH      31
/* The mask used to set the ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS register field value. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_SET_MSK    0x7fffffff
/* The mask used to clear the ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS register field value. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_CLR_MSK    0x80000000
/* The reset value of the ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS field value from a register. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_GET(value) (((value) & 0x7fffffff) >> 0)
/* Produces a ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS_SET(value) (((value) << 0) & 0x7fffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_ADDRBUS.
 */
struct ALT_ECC_ECC_ADDRBUS_s
{
    volatile uint32_t  ECC_AddrBUS : 31;  /* ALT_ECC_ECC_ADDRBUS_ECC_ADDRBUS */
    uint32_t                       :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ECC_ADDRBUS. */
typedef struct ALT_ECC_ECC_ADDRBUS_s  ALT_ECC_ECC_ADDRBUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_ADDRBUS register. */
#define ALT_ECC_ECC_ADDRBUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_ADDRBUS register from the beginning of the component. */
#define ALT_ECC_ECC_ADDRBUS_OFST        0x40
/* The address of the ALT_ECC_ECC_ADDRBUS register. */
#define ALT_ECC_ECC_ADDRBUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_ADDRBUS_OFST))

/*
 * Register : ECC_RData0bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS
 * 
 */
/*
 * Field : ECC_RDataBUS
 * 
 * ECC_RDataBUS[31:0].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_RDATA0BUS.
 */
struct ALT_ECC_ECC_RDATA0BUS_s
{
    volatile uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_ECC_RDATA0BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_RDATA0BUS. */
typedef struct ALT_ECC_ECC_RDATA0BUS_s  ALT_ECC_ECC_RDATA0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_RDATA0BUS register. */
#define ALT_ECC_ECC_RDATA0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_RDATA0BUS register from the beginning of the component. */
#define ALT_ECC_ECC_RDATA0BUS_OFST        0x44
/* The address of the ALT_ECC_ECC_RDATA0BUS register. */
#define ALT_ECC_ECC_RDATA0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_RDATA0BUS_OFST))

/*
 * Register : ECC_RData1bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS
 * 
 */
/*
 * Field : ECC_RDataBUS
 * 
 * ECC_RDataBUS[63:32].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_RDATA1BUS.
 */
struct ALT_ECC_ECC_RDATA1BUS_s
{
    volatile uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_ECC_RDATA1BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_RDATA1BUS. */
typedef struct ALT_ECC_ECC_RDATA1BUS_s  ALT_ECC_ECC_RDATA1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_RDATA1BUS register. */
#define ALT_ECC_ECC_RDATA1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_RDATA1BUS register from the beginning of the component. */
#define ALT_ECC_ECC_RDATA1BUS_OFST        0x48
/* The address of the ALT_ECC_ECC_RDATA1BUS register. */
#define ALT_ECC_ECC_RDATA1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_RDATA1BUS_OFST))

/*
 * Register : ECC_RData2bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS
 * 
 */
/*
 * Field : ECC_RDataBUS
 * 
 * ECC_RDataBUS[95:64].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_RDATA2BUS.
 */
struct ALT_ECC_ECC_RDATA2BUS_s
{
    volatile uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_ECC_RDATA2BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_RDATA2BUS. */
typedef struct ALT_ECC_ECC_RDATA2BUS_s  ALT_ECC_ECC_RDATA2BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_RDATA2BUS register. */
#define ALT_ECC_ECC_RDATA2BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_RDATA2BUS register from the beginning of the component. */
#define ALT_ECC_ECC_RDATA2BUS_OFST        0x4c
/* The address of the ALT_ECC_ECC_RDATA2BUS register. */
#define ALT_ECC_ECC_RDATA2BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_RDATA2BUS_OFST))

/*
 * Register : ECC_RData3bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS
 * 
 */
/*
 * Field : ECC_RDataBUS
 * 
 * ECC_RDataBUS[127-96].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_RDATA3BUS.
 */
struct ALT_ECC_ECC_RDATA3BUS_s
{
    volatile uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_ECC_RDATA3BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_RDATA3BUS. */
typedef struct ALT_ECC_ECC_RDATA3BUS_s  ALT_ECC_ECC_RDATA3BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_RDATA3BUS register. */
#define ALT_ECC_ECC_RDATA3BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_RDATA3BUS register from the beginning of the component. */
#define ALT_ECC_ECC_RDATA3BUS_OFST        0x50
/* The address of the ALT_ECC_ECC_RDATA3BUS register. */
#define ALT_ECC_ECC_RDATA3BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_RDATA3BUS_OFST))

/*
 * Register : ECC_WData0bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS
 * 
 */
/*
 * Field : ECC_WDataBUS
 * 
 * ECC_WDataBUS[31:0].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_WDATA0BUS.
 */
struct ALT_ECC_ECC_WDATA0BUS_s
{
    volatile uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_ECC_WDATA0BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_WDATA0BUS. */
typedef struct ALT_ECC_ECC_WDATA0BUS_s  ALT_ECC_ECC_WDATA0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_WDATA0BUS register. */
#define ALT_ECC_ECC_WDATA0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_WDATA0BUS register from the beginning of the component. */
#define ALT_ECC_ECC_WDATA0BUS_OFST        0x54
/* The address of the ALT_ECC_ECC_WDATA0BUS register. */
#define ALT_ECC_ECC_WDATA0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_WDATA0BUS_OFST))

/*
 * Register : ECC_WData1bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS
 * 
 */
/*
 * Field : ECC_WDataBUS
 * 
 * ECC_WDataBUS[63:32].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_WDATA1BUS.
 */
struct ALT_ECC_ECC_WDATA1BUS_s
{
    volatile uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_ECC_WDATA1BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_WDATA1BUS. */
typedef struct ALT_ECC_ECC_WDATA1BUS_s  ALT_ECC_ECC_WDATA1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_WDATA1BUS register. */
#define ALT_ECC_ECC_WDATA1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_WDATA1BUS register from the beginning of the component. */
#define ALT_ECC_ECC_WDATA1BUS_OFST        0x58
/* The address of the ALT_ECC_ECC_WDATA1BUS register. */
#define ALT_ECC_ECC_WDATA1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_WDATA1BUS_OFST))

/*
 * Register : ECC_WData2bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS
 * 
 */
/*
 * Field : ECC_WDataBUS
 * 
 * ECC_WDataBUS[95-64].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_WDATA2BUS.
 */
struct ALT_ECC_ECC_WDATA2BUS_s
{
    volatile uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_ECC_WDATA2BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_WDATA2BUS. */
typedef struct ALT_ECC_ECC_WDATA2BUS_s  ALT_ECC_ECC_WDATA2BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_WDATA2BUS register. */
#define ALT_ECC_ECC_WDATA2BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_WDATA2BUS register from the beginning of the component. */
#define ALT_ECC_ECC_WDATA2BUS_OFST        0x5c
/* The address of the ALT_ECC_ECC_WDATA2BUS register. */
#define ALT_ECC_ECC_WDATA2BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_WDATA2BUS_OFST))

/*
 * Register : ECC_WData3bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS
 * 
 */
/*
 * Field : ECC_WDataBUS
 * 
 * ECC_WDataBUS[127-96].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_WDATA3BUS.
 */
struct ALT_ECC_ECC_WDATA3BUS_s
{
    volatile uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_ECC_WDATA3BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_ECC_WDATA3BUS. */
typedef struct ALT_ECC_ECC_WDATA3BUS_s  ALT_ECC_ECC_WDATA3BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_WDATA3BUS register. */
#define ALT_ECC_ECC_WDATA3BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_WDATA3BUS register from the beginning of the component. */
#define ALT_ECC_ECC_WDATA3BUS_OFST        0x60
/* The address of the ALT_ECC_ECC_WDATA3BUS register. */
#define ALT_ECC_ECC_WDATA3BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_WDATA3BUS_OFST))

/*
 * Register : ECC_RDataecc0bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS
 * 
 */
/*
 * Field : ECC_RDataecc0BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC_RDataecc1BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC_RDataecc2BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC_RDataecc3BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS register field value. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_RDATAECC0BUS.
 */
struct ALT_ECC_ECC_RDATAECC0BUS_s
{
    volatile uint32_t  ECC_RDataecc0BUS :  8;  /* ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC0BUS */
    volatile uint32_t  ECC_RDataecc1BUS :  8;  /* ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC1BUS */
    volatile uint32_t  ECC_RDataecc2BUS :  8;  /* ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC2BUS */
    volatile uint32_t  ECC_RDataecc3BUS :  8;  /* ALT_ECC_ECC_RDATAECC0BUS_ECC_RDATAECC3BUS */
};

/* The typedef declaration for register ALT_ECC_ECC_RDATAECC0BUS. */
typedef struct ALT_ECC_ECC_RDATAECC0BUS_s  ALT_ECC_ECC_RDATAECC0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_RDATAECC0BUS register. */
#define ALT_ECC_ECC_RDATAECC0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_RDATAECC0BUS register from the beginning of the component. */
#define ALT_ECC_ECC_RDATAECC0BUS_OFST        0x64
/* The address of the ALT_ECC_ECC_RDATAECC0BUS register. */
#define ALT_ECC_ECC_RDATAECC0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_RDATAECC0BUS_OFST))

/*
 * Register : ECC_RDataecc1bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS
 * 
 */
/*
 * Field : ECC_RDataecc4BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_MSB        7
/* The width in bits of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC_RDataecc5BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_MSB        15
/* The width in bits of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC_RDataecc6BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_MSB        23
/* The width in bits of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC_RDataecc7BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS register field value. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS field value from a register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_RDATAECC1BUS.
 */
struct ALT_ECC_ECC_RDATAECC1BUS_s
{
    volatile uint32_t  ECC_RDataecc4BUS :  8;  /* ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC4BUS */
    volatile uint32_t  ECC_RDataecc5BUS :  8;  /* ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC5BUS */
    volatile uint32_t  ECC_RDataecc6BUS :  8;  /* ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC6BUS */
    volatile uint32_t  ECC_RDataecc7BUS :  8;  /* ALT_ECC_ECC_RDATAECC1BUS_ECC_RDATAECC7BUS */
};

/* The typedef declaration for register ALT_ECC_ECC_RDATAECC1BUS. */
typedef struct ALT_ECC_ECC_RDATAECC1BUS_s  ALT_ECC_ECC_RDATAECC1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_RDATAECC1BUS register. */
#define ALT_ECC_ECC_RDATAECC1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_RDATAECC1BUS register from the beginning of the component. */
#define ALT_ECC_ECC_RDATAECC1BUS_OFST        0x68
/* The address of the ALT_ECC_ECC_RDATAECC1BUS register. */
#define ALT_ECC_ECC_RDATAECC1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_RDATAECC1BUS_OFST))

/*
 * Register : ECC_WDataecc0bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS
 * 
 */
/*
 * Field : ECC_WDataecc0BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC_WDataecc1BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC_WDataecc2BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC_WDataecc3BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS register field value. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_WDATAECC0BUS.
 */
struct ALT_ECC_ECC_WDATAECC0BUS_s
{
    volatile uint32_t  ECC_WDataecc0BUS :  8;  /* ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC0BUS */
    volatile uint32_t  ECC_WDataecc1BUS :  8;  /* ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC1BUS */
    volatile uint32_t  ECC_WDataecc2BUS :  8;  /* ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC2BUS */
    volatile uint32_t  ECC_WDataecc3BUS :  8;  /* ALT_ECC_ECC_WDATAECC0BUS_ECC_WDATAECC3BUS */
};

/* The typedef declaration for register ALT_ECC_ECC_WDATAECC0BUS. */
typedef struct ALT_ECC_ECC_WDATAECC0BUS_s  ALT_ECC_ECC_WDATAECC0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_WDATAECC0BUS register. */
#define ALT_ECC_ECC_WDATAECC0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_WDATAECC0BUS register from the beginning of the component. */
#define ALT_ECC_ECC_WDATAECC0BUS_OFST        0x6c
/* The address of the ALT_ECC_ECC_WDATAECC0BUS register. */
#define ALT_ECC_ECC_WDATAECC0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_WDATAECC0BUS_OFST))

/*
 * Register : ECC_WDataecc1bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS
 * 
 */
/*
 * Field : ECC_WDataecc4BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_MSB        7
/* The width in bits of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC_WDataecc5BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_MSB        15
/* The width in bits of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC_WDataecc6BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_MSB        23
/* The width in bits of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC_WDataecc7BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_MSB        31
/* The width in bits of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS register field value. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS field value from a register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_WDATAECC1BUS.
 */
struct ALT_ECC_ECC_WDATAECC1BUS_s
{
    volatile uint32_t  ECC_WDataecc4BUS :  8;  /* ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC4BUS */
    volatile uint32_t  ECC_WDataecc5BUS :  8;  /* ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC5BUS */
    volatile uint32_t  ECC_WDataecc6BUS :  8;  /* ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC6BUS */
    volatile uint32_t  ECC_WDataecc7BUS :  8;  /* ALT_ECC_ECC_WDATAECC1BUS_ECC_WDATAECC7BUS */
};

/* The typedef declaration for register ALT_ECC_ECC_WDATAECC1BUS. */
typedef struct ALT_ECC_ECC_WDATAECC1BUS_s  ALT_ECC_ECC_WDATAECC1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_WDATAECC1BUS register. */
#define ALT_ECC_ECC_WDATAECC1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_WDATAECC1BUS register from the beginning of the component. */
#define ALT_ECC_ECC_WDATAECC1BUS_OFST        0x70
/* The address of the ALT_ECC_ECC_WDATAECC1BUS register. */
#define ALT_ECC_ECC_WDATAECC1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_WDATAECC1BUS_OFST))

/*
 * Register : ECC_dbytectrl
 * 
 * Max number of implemented byte enabled is DAT/8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [7:0]  | RW     | 0x0   | ALT_ECC_ECC_DBYTECTRL_DBEN
 *  [31:8] | ???    | 0x0   | *UNDEFINED*               
 * 
 */
/*
 * Field : DBEN
 * 
 * Byte or word enable for access.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DBYTECTRL_DBEN register field. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DBYTECTRL_DBEN register field. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_MSB        7
/* The width in bits of the ALT_ECC_ECC_DBYTECTRL_DBEN register field. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_WIDTH      8
/* The mask used to set the ALT_ECC_ECC_DBYTECTRL_DBEN register field value. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_ECC_DBYTECTRL_DBEN register field value. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_ECC_DBYTECTRL_DBEN register field. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_RESET      0x0
/* Extracts the ALT_ECC_ECC_DBYTECTRL_DBEN field value from a register. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_ECC_DBYTECTRL_DBEN register field value suitable for setting the register. */
#define ALT_ECC_ECC_DBYTECTRL_DBEN_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_DBYTECTRL.
 */
struct ALT_ECC_ECC_DBYTECTRL_s
{
    volatile uint32_t  DBEN :  8;  /* ALT_ECC_ECC_DBYTECTRL_DBEN */
    uint32_t                : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ECC_DBYTECTRL. */
typedef struct ALT_ECC_ECC_DBYTECTRL_s  ALT_ECC_ECC_DBYTECTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_DBYTECTRL register. */
#define ALT_ECC_ECC_DBYTECTRL_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_DBYTECTRL register from the beginning of the component. */
#define ALT_ECC_ECC_DBYTECTRL_OFST        0x74
/* The address of the ALT_ECC_ECC_DBYTECTRL register. */
#define ALT_ECC_ECC_DBYTECTRL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_DBYTECTRL_OFST))

/*
 * Register : ECC_accctrl
 * 
 * These bits determine which byte of data/ecc to write to RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_ECC_ACCCTRL_DATAOVR
 *  [1]    | RW     | 0x0   | ALT_ECC_ECC_ACCCTRL_ECCOVR 
 *  [7:2]  | ???    | 0x0   | *UNDEFINED*                
 *  [8]    | RW     | 0x0   | ALT_ECC_ECC_ACCCTRL_RDWR   
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : DATAOVR
 * 
 * RAM Data Override. Override the ECC_dataBUS register with RAM data in read mode
 * set by ECC_RW.
 * 
 * 1'b0: Data override disabled.
 * 
 * 1'b1: Data override enabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_ACCCTRL_DATAOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_ACCCTRL_DATAOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_MSB        0
/* The width in bits of the ALT_ECC_ECC_ACCCTRL_DATAOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_ACCCTRL_DATAOVR register field value. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_ECC_ACCCTRL_DATAOVR register field value. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_ECC_ACCCTRL_DATAOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_RESET      0x0
/* Extracts the ALT_ECC_ECC_ACCCTRL_DATAOVR field value from a register. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_ECC_ACCCTRL_DATAOVR register field value suitable for setting the register. */
#define ALT_ECC_ECC_ACCCTRL_DATAOVR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ECCOVR
 * 
 * ECC Data Override.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_ACCCTRL_ECCOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_ACCCTRL_ECCOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_MSB        1
/* The width in bits of the ALT_ECC_ECC_ACCCTRL_ECCOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_ACCCTRL_ECCOVR register field value. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_ECC_ACCCTRL_ECCOVR register field value. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_ECC_ACCCTRL_ECCOVR register field. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_RESET      0x0
/* Extracts the ALT_ECC_ECC_ACCCTRL_ECCOVR field value from a register. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_ECC_ACCCTRL_ECCOVR register field value suitable for setting the register. */
#define ALT_ECC_ECC_ACCCTRL_ECCOVR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RDWR
 * 
 * Control for read/write.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_ACCCTRL_RDWR register field. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_ACCCTRL_RDWR register field. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_MSB        8
/* The width in bits of the ALT_ECC_ECC_ACCCTRL_RDWR register field. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_ACCCTRL_RDWR register field value. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_ECC_ACCCTRL_RDWR register field value. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_ECC_ACCCTRL_RDWR register field. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_RESET      0x0
/* Extracts the ALT_ECC_ECC_ACCCTRL_RDWR field value from a register. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_ECC_ACCCTRL_RDWR register field value suitable for setting the register. */
#define ALT_ECC_ECC_ACCCTRL_RDWR_SET(value) (((value) << 8) & 0x00000100)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_ACCCTRL.
 */
struct ALT_ECC_ECC_ACCCTRL_s
{
    volatile uint32_t  DATAOVR :  1;  /* ALT_ECC_ECC_ACCCTRL_DATAOVR */
    volatile uint32_t  ECCOVR  :  1;  /* ALT_ECC_ECC_ACCCTRL_ECCOVR */
    uint32_t                   :  6;  /* *UNDEFINED* */
    volatile uint32_t  RDWR    :  1;  /* ALT_ECC_ECC_ACCCTRL_RDWR */
    uint32_t                   : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ECC_ACCCTRL. */
typedef struct ALT_ECC_ECC_ACCCTRL_s  ALT_ECC_ECC_ACCCTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_ACCCTRL register. */
#define ALT_ECC_ECC_ACCCTRL_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_ACCCTRL register from the beginning of the component. */
#define ALT_ECC_ECC_ACCCTRL_OFST        0x78
/* The address of the ALT_ECC_ECC_ACCCTRL register. */
#define ALT_ECC_ECC_ACCCTRL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_ACCCTRL_OFST))

/*
 * Register : ECC_startacc
 * 
 * These bits determine which byte of data/ecc to write to RAM.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_ECC_STARTACC_ENBUSB
 *  [15:1]  | ???    | 0x0   | *UNDEFINED*                
 *  [16]    | RW     | 0x0   | ALT_ECC_ECC_STARTACC_ENBUSA
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : ENBUSB
 * 
 * Start RAM access for PORTB.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_STARTACC_ENBUSB register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_STARTACC_ENBUSB register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_MSB        0
/* The width in bits of the ALT_ECC_ECC_STARTACC_ENBUSB register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_STARTACC_ENBUSB register field value. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_ECC_STARTACC_ENBUSB register field value. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_ECC_STARTACC_ENBUSB register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_RESET      0x0
/* Extracts the ALT_ECC_ECC_STARTACC_ENBUSB field value from a register. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_ECC_STARTACC_ENBUSB register field value suitable for setting the register. */
#define ALT_ECC_ECC_STARTACC_ENBUSB_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ENBUSA
 * 
 * Start RAM access for PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_STARTACC_ENBUSA register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_STARTACC_ENBUSA register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_MSB        16
/* The width in bits of the ALT_ECC_ECC_STARTACC_ENBUSA register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_STARTACC_ENBUSA register field value. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_ECC_STARTACC_ENBUSA register field value. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_ECC_STARTACC_ENBUSA register field. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_RESET      0x0
/* Extracts the ALT_ECC_ECC_STARTACC_ENBUSA field value from a register. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_ECC_STARTACC_ENBUSA register field value suitable for setting the register. */
#define ALT_ECC_ECC_STARTACC_ENBUSA_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_STARTACC.
 */
struct ALT_ECC_ECC_STARTACC_s
{
    volatile uint32_t  ENBUSB :  1;  /* ALT_ECC_ECC_STARTACC_ENBUSB */
    uint32_t                  : 15;  /* *UNDEFINED* */
    volatile uint32_t  ENBUSA :  1;  /* ALT_ECC_ECC_STARTACC_ENBUSA */
    uint32_t                  : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ECC_STARTACC. */
typedef struct ALT_ECC_ECC_STARTACC_s  ALT_ECC_ECC_STARTACC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_STARTACC register. */
#define ALT_ECC_ECC_STARTACC_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_STARTACC register from the beginning of the component. */
#define ALT_ECC_ECC_STARTACC_OFST        0x7c
/* The address of the ALT_ECC_ECC_STARTACC register. */
#define ALT_ECC_ECC_STARTACC_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_STARTACC_OFST))

/*
 * Register : ECC_wdctrl
 * 
 * Bits to Enable/Disable Watch Dog Timer
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_ECC_WDCTRL_WDEN_RAM
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : WDEN_RAM
 * 
 * Enable watchdog timeout for OCP register access to IP RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_WDCTRL_WDEN_RAM register field. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_WDCTRL_WDEN_RAM register field. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_MSB        0
/* The width in bits of the ALT_ECC_ECC_WDCTRL_WDEN_RAM register field. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_WDCTRL_WDEN_RAM register field value. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_ECC_WDCTRL_WDEN_RAM register field value. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_ECC_WDCTRL_WDEN_RAM register field. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_RESET      0x0
/* Extracts the ALT_ECC_ECC_WDCTRL_WDEN_RAM field value from a register. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_ECC_WDCTRL_WDEN_RAM register field value suitable for setting the register. */
#define ALT_ECC_ECC_WDCTRL_WDEN_RAM_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_WDCTRL.
 */
struct ALT_ECC_ECC_WDCTRL_s
{
    volatile uint32_t  WDEN_RAM :  1;  /* ALT_ECC_ECC_WDCTRL_WDEN_RAM */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ECC_WDCTRL. */
typedef struct ALT_ECC_ECC_WDCTRL_s  ALT_ECC_ECC_WDCTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_WDCTRL register. */
#define ALT_ECC_ECC_WDCTRL_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_WDCTRL register from the beginning of the component. */
#define ALT_ECC_ECC_WDCTRL_OFST        0x80
/* The address of the ALT_ECC_ECC_WDCTRL register. */
#define ALT_ECC_ECC_WDCTRL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_WDCTRL_OFST))

/*
 * Register : ECC_DECODERSTAT
 * 
 * <p>Individual decoder flags for single and double bits errors.</p>
 * 
 * <p>Each decoder flags used represent one decoder in the design.</p>
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG
 *  [1]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG
 *  [2]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG
 *  [3]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG
 *  [4]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG
 *  [5]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG
 *  [6]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG
 *  [7]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG
 *  [8]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG
 *  [9]     | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG
 *  [10]    | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG
 *  [11]    | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG
 *  [12]    | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG
 *  [13]    | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG
 *  [14]    | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG
 *  [15]    | RW     | 0x0   | ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : DEC0SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_MSB        0
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DEC1SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_MSB        1
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : DEC2SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_MSB        2
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_SET_MSK    0x00000004
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_CLR_MSK    0xfffffffb
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DEC3SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_MSB        3
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_SET_MSK    0x00000008
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_CLR_MSK    0xfffffff7
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : DEC4SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_MSB        4
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_SET_MSK    0x00000010
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_CLR_MSK    0xffffffef
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : DEC5SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_MSB        5
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_SET_MSK    0x00000020
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_CLR_MSK    0xffffffdf
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : DEC6SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_MSB        6
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_SET_MSK    0x00000040
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_CLR_MSK    0xffffffbf
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : DEC7SERRFLG
 * 
 * This bit indicates deocder(*) has detected single-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a single-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_MSB        7
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_SET_MSK    0x00000080
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_CLR_MSK    0xffffff7f
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : DEC0DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_MSB        8
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : DEC1DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_MSB        9
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_SET_MSK    0x00000200
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_CLR_MSK    0xfffffdff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : DEC2DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_MSB        10
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_SET_MSK    0x00000400
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_CLR_MSK    0xfffffbff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : DEC3DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_MSB        11
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_SET_MSK    0x00000800
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : DEC4DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_MSB        12
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_SET_MSK    0x00001000
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_CLR_MSK    0xffffefff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : DEC5DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_MSB        13
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_SET_MSK    0x00002000
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_CLR_MSK    0xffffdfff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : DEC6DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_MSB        14
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_SET_MSK    0x00004000
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_CLR_MSK    0xffffbfff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : DEC7DERRFLG
 * 
 * This bit indicates decoder(*) has detected double-bit error.
 * 
 * 1'b0: No error has been captured with this flag
 * 
 * 1'b1: Decoder (*) detected a double-bit error. This flag will be set by hardware
 * and it will be cleared by writing 1. This flag will be set till SW clears.
 * Additional errors will not change the state of this bit. Error flag is set on
 * the first beat of erred data.
 * 
 * This wont be reset by the ecc_en bit. Number of decoders implemented is IP
 * dependent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_MSB        15
/* The width in bits of the ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_SET_MSK    0x00008000
/* The mask used to clear the ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG register field value. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_CLR_MSK    0xffff7fff
/* The reset value of the ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG register field. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG field value from a register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG_SET(value) (((value) << 15) & 0x00008000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_ECC_DECODERSTAT.
 */
struct ALT_ECC_ECC_DECODERSTAT_s
{
    volatile uint32_t  DEC0SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC0SERRFLG */
    volatile uint32_t  DEC1SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC1SERRFLG */
    volatile uint32_t  DEC2SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC2SERRFLG */
    volatile uint32_t  DEC3SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC3SERRFLG */
    volatile uint32_t  DEC4SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC4SERRFLG */
    volatile uint32_t  DEC5SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC5SERRFLG */
    volatile uint32_t  DEC6SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC6SERRFLG */
    volatile uint32_t  DEC7SERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC7SERRFLG */
    volatile uint32_t  DEC0DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC0DERRFLG */
    volatile uint32_t  DEC1DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC1DERRFLG */
    volatile uint32_t  DEC2DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC2DERRFLG */
    volatile uint32_t  DEC3DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC3DERRFLG */
    volatile uint32_t  DEC4DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC4DERRFLG */
    volatile uint32_t  DEC5DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC5DERRFLG */
    volatile uint32_t  DEC6DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC6DERRFLG */
    volatile uint32_t  DEC7DERRFLG :  1;  /* ALT_ECC_ECC_DECODERSTAT_DEC7DERRFLG */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_ECC_DECODERSTAT. */
typedef struct ALT_ECC_ECC_DECODERSTAT_s  ALT_ECC_ECC_DECODERSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_ECC_DECODERSTAT register. */
#define ALT_ECC_ECC_DECODERSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_ECC_DECODERSTAT register from the beginning of the component. */
#define ALT_ECC_ECC_DECODERSTAT_OFST        0x84
/* The address of the ALT_ECC_ECC_DECODERSTAT register. */
#define ALT_ECC_ECC_DECODERSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_ECC_DECODERSTAT_OFST))

/*
 * Register : SERRLKUPA0
 * 
 * Single-bit error address in LOOKUP TABLE for PORTA.
 * 
 * Valid flag bit. Valid bit indicates if the address in this register is current
 * or stale.
 * 
 * IF IP is having a single decoder, VALID8 will be used
 * 
 * IF IP is having multiple decoder, The lowest decoder will be represented on
 * VALID1 and the next will on VALID2.
 * 
 * It increases onward to VALID8.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [23:0] | R      | 0x0   | ALT_ECC_SERRLKUPA0_ADDRESS
 *  [24]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID1 
 *  [25]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID2 
 *  [26]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID3 
 *  [27]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID4 
 *  [28]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID5 
 *  [29]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID6 
 *  [30]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID7 
 *  [31]   | RW     | 0x0   | ALT_ECC_SERRLKUPA0_VALID8 
 * 
 */
/*
 * Field : Address
 * 
 * Recent Single-bit error address.
 * 
 * This register shows the address of the each single-bit error. RAM size will
 * determine the maximum number of address bits. If ram size is 32 Kbytes, bit
 * 30-16 will be reserved and read as zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_MSB        23
/* The width in bits of the ALT_ECC_SERRLKUPA0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_WIDTH      24
/* The mask used to set the ALT_ECC_SERRLKUPA0_ADDRESS register field value. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_ECC_SERRLKUPA0_ADDRESS register field value. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_CLR_MSK    0xff000000
/* The reset value of the ALT_ECC_SERRLKUPA0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_ADDRESS field value from a register. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_ECC_SERRLKUPA0_ADDRESS register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_ADDRESS_SET(value) (((value) << 0) & 0x00ffffff)

/*
 * Field : VALID1
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID1 register field. */
#define ALT_ECC_SERRLKUPA0_VALID1_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID1 register field. */
#define ALT_ECC_SERRLKUPA0_VALID1_MSB        24
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID1 register field. */
#define ALT_ECC_SERRLKUPA0_VALID1_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID1 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID1_SET_MSK    0x01000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID1 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID1_CLR_MSK    0xfeffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID1 register field. */
#define ALT_ECC_SERRLKUPA0_VALID1_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID1 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID1_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_ECC_SERRLKUPA0_VALID1 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID1_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : VALID2
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID2 register field. */
#define ALT_ECC_SERRLKUPA0_VALID2_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID2 register field. */
#define ALT_ECC_SERRLKUPA0_VALID2_MSB        25
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID2 register field. */
#define ALT_ECC_SERRLKUPA0_VALID2_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID2 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID2_SET_MSK    0x02000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID2 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID2_CLR_MSK    0xfdffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID2 register field. */
#define ALT_ECC_SERRLKUPA0_VALID2_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID2 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID2_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_ECC_SERRLKUPA0_VALID2 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID2_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : VALID3
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID3 register field. */
#define ALT_ECC_SERRLKUPA0_VALID3_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID3 register field. */
#define ALT_ECC_SERRLKUPA0_VALID3_MSB        26
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID3 register field. */
#define ALT_ECC_SERRLKUPA0_VALID3_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID3 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID3_SET_MSK    0x04000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID3 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID3_CLR_MSK    0xfbffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID3 register field. */
#define ALT_ECC_SERRLKUPA0_VALID3_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID3 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID3_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_ECC_SERRLKUPA0_VALID3 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID3_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : VALID4
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID4 register field. */
#define ALT_ECC_SERRLKUPA0_VALID4_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID4 register field. */
#define ALT_ECC_SERRLKUPA0_VALID4_MSB        27
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID4 register field. */
#define ALT_ECC_SERRLKUPA0_VALID4_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID4 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID4_SET_MSK    0x08000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID4 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID4_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID4 register field. */
#define ALT_ECC_SERRLKUPA0_VALID4_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID4 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID4_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_ECC_SERRLKUPA0_VALID4 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID4_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : VALID5
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID5 register field. */
#define ALT_ECC_SERRLKUPA0_VALID5_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID5 register field. */
#define ALT_ECC_SERRLKUPA0_VALID5_MSB        28
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID5 register field. */
#define ALT_ECC_SERRLKUPA0_VALID5_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID5 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID5_SET_MSK    0x10000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID5 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID5_CLR_MSK    0xefffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID5 register field. */
#define ALT_ECC_SERRLKUPA0_VALID5_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID5 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID5_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_ECC_SERRLKUPA0_VALID5 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID5_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : VALID6
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID6 register field. */
#define ALT_ECC_SERRLKUPA0_VALID6_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID6 register field. */
#define ALT_ECC_SERRLKUPA0_VALID6_MSB        29
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID6 register field. */
#define ALT_ECC_SERRLKUPA0_VALID6_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID6 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID6_SET_MSK    0x20000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID6 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID6_CLR_MSK    0xdfffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID6 register field. */
#define ALT_ECC_SERRLKUPA0_VALID6_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID6 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID6_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_ECC_SERRLKUPA0_VALID6 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID6_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : VALID7
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID7 register field. */
#define ALT_ECC_SERRLKUPA0_VALID7_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID7 register field. */
#define ALT_ECC_SERRLKUPA0_VALID7_MSB        30
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID7 register field. */
#define ALT_ECC_SERRLKUPA0_VALID7_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID7 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID7_SET_MSK    0x40000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID7 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID7_CLR_MSK    0xbfffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID7 register field. */
#define ALT_ECC_SERRLKUPA0_VALID7_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID7 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID7_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_ECC_SERRLKUPA0_VALID7 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID7_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : VALID8
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPA0_VALID8 register field. */
#define ALT_ECC_SERRLKUPA0_VALID8_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPA0_VALID8 register field. */
#define ALT_ECC_SERRLKUPA0_VALID8_MSB        31
/* The width in bits of the ALT_ECC_SERRLKUPA0_VALID8 register field. */
#define ALT_ECC_SERRLKUPA0_VALID8_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPA0_VALID8 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID8_SET_MSK    0x80000000
/* The mask used to clear the ALT_ECC_SERRLKUPA0_VALID8 register field value. */
#define ALT_ECC_SERRLKUPA0_VALID8_CLR_MSK    0x7fffffff
/* The reset value of the ALT_ECC_SERRLKUPA0_VALID8 register field. */
#define ALT_ECC_SERRLKUPA0_VALID8_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPA0_VALID8 field value from a register. */
#define ALT_ECC_SERRLKUPA0_VALID8_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_ECC_SERRLKUPA0_VALID8 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPA0_VALID8_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_SERRLKUPA0.
 */
struct ALT_ECC_SERRLKUPA0_s
{
    const volatile uint32_t  Address : 24;  /* ALT_ECC_SERRLKUPA0_ADDRESS */
    volatile uint32_t        VALID1  :  1;  /* ALT_ECC_SERRLKUPA0_VALID1 */
    volatile uint32_t        VALID2  :  1;  /* ALT_ECC_SERRLKUPA0_VALID2 */
    volatile uint32_t        VALID3  :  1;  /* ALT_ECC_SERRLKUPA0_VALID3 */
    volatile uint32_t        VALID4  :  1;  /* ALT_ECC_SERRLKUPA0_VALID4 */
    volatile uint32_t        VALID5  :  1;  /* ALT_ECC_SERRLKUPA0_VALID5 */
    volatile uint32_t        VALID6  :  1;  /* ALT_ECC_SERRLKUPA0_VALID6 */
    volatile uint32_t        VALID7  :  1;  /* ALT_ECC_SERRLKUPA0_VALID7 */
    volatile uint32_t        VALID8  :  1;  /* ALT_ECC_SERRLKUPA0_VALID8 */
};

/* The typedef declaration for register ALT_ECC_SERRLKUPA0. */
typedef struct ALT_ECC_SERRLKUPA0_s  ALT_ECC_SERRLKUPA0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_SERRLKUPA0 register. */
#define ALT_ECC_SERRLKUPA0_RESET       0x00000000
/* The byte offset of the ALT_ECC_SERRLKUPA0 register from the beginning of the component. */
#define ALT_ECC_SERRLKUPA0_OFST        0x90
/* The address of the ALT_ECC_SERRLKUPA0 register. */
#define ALT_ECC_SERRLKUPA0_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_SERRLKUPA0_OFST))

/*
 * Register : SERRLKUPB0
 * 
 * Single-bit error address in LOOKUP TABLE for PORTB.
 * 
 * Valid flag bit. Valid bit indicates if the address in this register is current
 * or stale.
 * 
 * IF IP is having a single decoder, VALID8 will be used
 * 
 * IF IP is having multiple decoder, The lowest decoder will be represented on
 * VALID1 and the next will on VALID2.
 * 
 * It increases onward to VALID8.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [23:0] | R      | 0x0   | ALT_ECC_SERRLKUPB0_ADDRESS
 *  [24]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID1 
 *  [25]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID2 
 *  [26]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID3 
 *  [27]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID4 
 *  [28]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID5 
 *  [29]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID6 
 *  [30]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID7 
 *  [31]   | RW     | 0x0   | ALT_ECC_SERRLKUPB0_VALID8 
 * 
 */
/*
 * Field : Address
 * 
 * Recent Single-bit error address.
 * 
 * This register shows the address of the each single-bit error. RAM size will
 * determine the maximum number of address bits. If ram size is 32 Kbytes, bit
 * 30-16 will be reserved and read as zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_MSB        23
/* The width in bits of the ALT_ECC_SERRLKUPB0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_WIDTH      24
/* The mask used to set the ALT_ECC_SERRLKUPB0_ADDRESS register field value. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_ECC_SERRLKUPB0_ADDRESS register field value. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_CLR_MSK    0xff000000
/* The reset value of the ALT_ECC_SERRLKUPB0_ADDRESS register field. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_ADDRESS field value from a register. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_ECC_SERRLKUPB0_ADDRESS register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_ADDRESS_SET(value) (((value) << 0) & 0x00ffffff)

/*
 * Field : VALID1
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID1 register field. */
#define ALT_ECC_SERRLKUPB0_VALID1_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID1 register field. */
#define ALT_ECC_SERRLKUPB0_VALID1_MSB        24
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID1 register field. */
#define ALT_ECC_SERRLKUPB0_VALID1_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID1 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID1_SET_MSK    0x01000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID1 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID1_CLR_MSK    0xfeffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID1 register field. */
#define ALT_ECC_SERRLKUPB0_VALID1_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID1 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID1_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_ECC_SERRLKUPB0_VALID1 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID1_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : VALID2
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID2 register field. */
#define ALT_ECC_SERRLKUPB0_VALID2_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID2 register field. */
#define ALT_ECC_SERRLKUPB0_VALID2_MSB        25
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID2 register field. */
#define ALT_ECC_SERRLKUPB0_VALID2_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID2 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID2_SET_MSK    0x02000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID2 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID2_CLR_MSK    0xfdffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID2 register field. */
#define ALT_ECC_SERRLKUPB0_VALID2_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID2 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID2_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_ECC_SERRLKUPB0_VALID2 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID2_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : VALID3
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID3 register field. */
#define ALT_ECC_SERRLKUPB0_VALID3_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID3 register field. */
#define ALT_ECC_SERRLKUPB0_VALID3_MSB        26
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID3 register field. */
#define ALT_ECC_SERRLKUPB0_VALID3_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID3 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID3_SET_MSK    0x04000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID3 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID3_CLR_MSK    0xfbffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID3 register field. */
#define ALT_ECC_SERRLKUPB0_VALID3_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID3 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID3_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_ECC_SERRLKUPB0_VALID3 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID3_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : VALID4
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID4 register field. */
#define ALT_ECC_SERRLKUPB0_VALID4_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID4 register field. */
#define ALT_ECC_SERRLKUPB0_VALID4_MSB        27
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID4 register field. */
#define ALT_ECC_SERRLKUPB0_VALID4_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID4 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID4_SET_MSK    0x08000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID4 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID4_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID4 register field. */
#define ALT_ECC_SERRLKUPB0_VALID4_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID4 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID4_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_ECC_SERRLKUPB0_VALID4 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID4_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : VALID5
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID5 register field. */
#define ALT_ECC_SERRLKUPB0_VALID5_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID5 register field. */
#define ALT_ECC_SERRLKUPB0_VALID5_MSB        28
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID5 register field. */
#define ALT_ECC_SERRLKUPB0_VALID5_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID5 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID5_SET_MSK    0x10000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID5 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID5_CLR_MSK    0xefffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID5 register field. */
#define ALT_ECC_SERRLKUPB0_VALID5_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID5 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID5_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_ECC_SERRLKUPB0_VALID5 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID5_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : VALID6
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID6 register field. */
#define ALT_ECC_SERRLKUPB0_VALID6_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID6 register field. */
#define ALT_ECC_SERRLKUPB0_VALID6_MSB        29
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID6 register field. */
#define ALT_ECC_SERRLKUPB0_VALID6_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID6 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID6_SET_MSK    0x20000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID6 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID6_CLR_MSK    0xdfffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID6 register field. */
#define ALT_ECC_SERRLKUPB0_VALID6_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID6 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID6_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_ECC_SERRLKUPB0_VALID6 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID6_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : VALID7
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID7 register field. */
#define ALT_ECC_SERRLKUPB0_VALID7_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID7 register field. */
#define ALT_ECC_SERRLKUPB0_VALID7_MSB        30
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID7 register field. */
#define ALT_ECC_SERRLKUPB0_VALID7_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID7 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID7_SET_MSK    0x40000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID7 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID7_CLR_MSK    0xbfffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID7 register field. */
#define ALT_ECC_SERRLKUPB0_VALID7_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID7 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID7_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_ECC_SERRLKUPB0_VALID7 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID7_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : VALID8
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_SERRLKUPB0_VALID8 register field. */
#define ALT_ECC_SERRLKUPB0_VALID8_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_ECC_SERRLKUPB0_VALID8 register field. */
#define ALT_ECC_SERRLKUPB0_VALID8_MSB        31
/* The width in bits of the ALT_ECC_SERRLKUPB0_VALID8 register field. */
#define ALT_ECC_SERRLKUPB0_VALID8_WIDTH      1
/* The mask used to set the ALT_ECC_SERRLKUPB0_VALID8 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID8_SET_MSK    0x80000000
/* The mask used to clear the ALT_ECC_SERRLKUPB0_VALID8 register field value. */
#define ALT_ECC_SERRLKUPB0_VALID8_CLR_MSK    0x7fffffff
/* The reset value of the ALT_ECC_SERRLKUPB0_VALID8 register field. */
#define ALT_ECC_SERRLKUPB0_VALID8_RESET      0x0
/* Extracts the ALT_ECC_SERRLKUPB0_VALID8 field value from a register. */
#define ALT_ECC_SERRLKUPB0_VALID8_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_ECC_SERRLKUPB0_VALID8 register field value suitable for setting the register. */
#define ALT_ECC_SERRLKUPB0_VALID8_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_ECC_SERRLKUPB0.
 */
struct ALT_ECC_SERRLKUPB0_s
{
    const volatile uint32_t  Address : 24;  /* ALT_ECC_SERRLKUPB0_ADDRESS */
    volatile uint32_t        VALID1  :  1;  /* ALT_ECC_SERRLKUPB0_VALID1 */
    volatile uint32_t        VALID2  :  1;  /* ALT_ECC_SERRLKUPB0_VALID2 */
    volatile uint32_t        VALID3  :  1;  /* ALT_ECC_SERRLKUPB0_VALID3 */
    volatile uint32_t        VALID4  :  1;  /* ALT_ECC_SERRLKUPB0_VALID4 */
    volatile uint32_t        VALID5  :  1;  /* ALT_ECC_SERRLKUPB0_VALID5 */
    volatile uint32_t        VALID6  :  1;  /* ALT_ECC_SERRLKUPB0_VALID6 */
    volatile uint32_t        VALID7  :  1;  /* ALT_ECC_SERRLKUPB0_VALID7 */
    volatile uint32_t        VALID8  :  1;  /* ALT_ECC_SERRLKUPB0_VALID8 */
};

/* The typedef declaration for register ALT_ECC_SERRLKUPB0. */
typedef struct ALT_ECC_SERRLKUPB0_s  ALT_ECC_SERRLKUPB0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_SERRLKUPB0 register. */
#define ALT_ECC_SERRLKUPB0_RESET       0x00000000
/* The byte offset of the ALT_ECC_SERRLKUPB0 register from the beginning of the component. */
#define ALT_ECC_SERRLKUPB0_OFST        0xd0
/* The address of the ALT_ECC_SERRLKUPB0 register. */
#define ALT_ECC_SERRLKUPB0_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_SERRLKUPB0_OFST))

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register group ALT_ECC.
 */
struct ALT_ECC_s
{
    volatile ALT_ECC_IP_REV_ID_t         IP_REV_ID;             /* ALT_ECC_IP_REV_ID */
    volatile ALT_ECC_IP_REV_ID2_t        IP_REV_ID2;            /* ALT_ECC_IP_REV_ID2 */
    volatile ALT_ECC_CTRL_t              CTRL;                  /* ALT_ECC_CTRL */
    volatile ALT_ECC_INITSTAT_t          INITSTAT;              /* ALT_ECC_INITSTAT */
    volatile ALT_ECC_ERRINTEN_t          ERRINTEN;              /* ALT_ECC_ERRINTEN */
    volatile ALT_ECC_ERRINTENS_t         ERRINTENS;             /* ALT_ECC_ERRINTENS */
    volatile ALT_ECC_ERRINTENR_t         ERRINTENR;             /* ALT_ECC_ERRINTENR */
    volatile ALT_ECC_INTMODE_t           INTMODE;               /* ALT_ECC_INTMODE */
    volatile ALT_ECC_INTSTAT_t           INTSTAT;               /* ALT_ECC_INTSTAT */
    volatile ALT_ECC_INTTEST_t           INTTEST;               /* ALT_ECC_INTTEST */
    volatile ALT_ECC_MODSTAT_t           MODSTAT;               /* ALT_ECC_MODSTAT */
    volatile ALT_ECC_DERRADDRA_t         DERRADDRA;             /* ALT_ECC_DERRADDRA */
    volatile ALT_ECC_SERRADDRA_t         SERRADDRA;             /* ALT_ECC_SERRADDRA */
    volatile ALT_ECC_DERRADDRB_t         DERRADDRB;             /* ALT_ECC_DERRADDRB */
    volatile ALT_ECC_SERRADDRB_t         SERRADDRB;             /* ALT_ECC_SERRADDRB */
    volatile ALT_ECC_SERRCNTREG_t        SERRCNTREG;            /* ALT_ECC_SERRCNTREG */
    volatile ALT_ECC_ECC_ADDRBUS_t       ECC_Addrbus;           /* ALT_ECC_ECC_ADDRBUS */
    volatile ALT_ECC_ECC_RDATA0BUS_t     ECC_RData0bus;         /* ALT_ECC_ECC_RDATA0BUS */
    volatile ALT_ECC_ECC_RDATA1BUS_t     ECC_RData1bus;         /* ALT_ECC_ECC_RDATA1BUS */
    volatile ALT_ECC_ECC_RDATA2BUS_t     ECC_RData2bus;         /* ALT_ECC_ECC_RDATA2BUS */
    volatile ALT_ECC_ECC_RDATA3BUS_t     ECC_RData3bus;         /* ALT_ECC_ECC_RDATA3BUS */
    volatile ALT_ECC_ECC_WDATA0BUS_t     ECC_WData0bus;         /* ALT_ECC_ECC_WDATA0BUS */
    volatile ALT_ECC_ECC_WDATA1BUS_t     ECC_WData1bus;         /* ALT_ECC_ECC_WDATA1BUS */
    volatile ALT_ECC_ECC_WDATA2BUS_t     ECC_WData2bus;         /* ALT_ECC_ECC_WDATA2BUS */
    volatile ALT_ECC_ECC_WDATA3BUS_t     ECC_WData3bus;         /* ALT_ECC_ECC_WDATA3BUS */
    volatile ALT_ECC_ECC_RDATAECC0BUS_t  ECC_RDataecc0bus;      /* ALT_ECC_ECC_RDATAECC0BUS */
    volatile ALT_ECC_ECC_RDATAECC1BUS_t  ECC_RDataecc1bus;      /* ALT_ECC_ECC_RDATAECC1BUS */
    volatile ALT_ECC_ECC_WDATAECC0BUS_t  ECC_WDataecc0bus;      /* ALT_ECC_ECC_WDATAECC0BUS */
    volatile ALT_ECC_ECC_WDATAECC1BUS_t  ECC_WDataecc1bus;      /* ALT_ECC_ECC_WDATAECC1BUS */
    volatile ALT_ECC_ECC_DBYTECTRL_t     ECC_dbytectrl;         /* ALT_ECC_ECC_DBYTECTRL */
    volatile ALT_ECC_ECC_ACCCTRL_t       ECC_accctrl;           /* ALT_ECC_ECC_ACCCTRL */
    volatile ALT_ECC_ECC_STARTACC_t      ECC_startacc;          /* ALT_ECC_ECC_STARTACC */
    volatile ALT_ECC_ECC_WDCTRL_t        ECC_wdctrl;            /* ALT_ECC_ECC_WDCTRL */
    volatile ALT_ECC_ECC_DECODERSTAT_t   ECC_DECODERSTAT;       /* ALT_ECC_ECC_DECODERSTAT */
    volatile uint32_t                    _pad_0x88_0x8f[2];     /* *UNDEFINED* */
    volatile ALT_ECC_SERRLKUPA0_t        SERRLKUPA0;            /* ALT_ECC_SERRLKUPA0 */
    volatile uint32_t                    _pad_0x94_0xcf[15];    /* *UNDEFINED* */
    volatile ALT_ECC_SERRLKUPB0_t        SERRLKUPB0;            /* ALT_ECC_SERRLKUPB0 */
    volatile uint32_t                    _pad_0xd4_0x400[203];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_ECC. */
typedef struct ALT_ECC_s  ALT_ECC_t;
/* The struct declaration for the raw register contents of register group ALT_ECC. */
struct ALT_ECC_raw_s
{
    volatile uint32_t  IP_REV_ID;             /* ALT_ECC_IP_REV_ID */
    volatile uint32_t  IP_REV_ID2;            /* ALT_ECC_IP_REV_ID2 */
    volatile uint32_t  CTRL;                  /* ALT_ECC_CTRL */
    volatile uint32_t  INITSTAT;              /* ALT_ECC_INITSTAT */
    volatile uint32_t  ERRINTEN;              /* ALT_ECC_ERRINTEN */
    volatile uint32_t  ERRINTENS;             /* ALT_ECC_ERRINTENS */
    volatile uint32_t  ERRINTENR;             /* ALT_ECC_ERRINTENR */
    volatile uint32_t  INTMODE;               /* ALT_ECC_INTMODE */
    volatile uint32_t  INTSTAT;               /* ALT_ECC_INTSTAT */
    volatile uint32_t  INTTEST;               /* ALT_ECC_INTTEST */
    volatile uint32_t  MODSTAT;               /* ALT_ECC_MODSTAT */
    volatile uint32_t  DERRADDRA;             /* ALT_ECC_DERRADDRA */
    volatile uint32_t  SERRADDRA;             /* ALT_ECC_SERRADDRA */
    volatile uint32_t  DERRADDRB;             /* ALT_ECC_DERRADDRB */
    volatile uint32_t  SERRADDRB;             /* ALT_ECC_SERRADDRB */
    volatile uint32_t  SERRCNTREG;            /* ALT_ECC_SERRCNTREG */
    volatile uint32_t  ECC_Addrbus;           /* ALT_ECC_ECC_ADDRBUS */
    volatile uint32_t  ECC_RData0bus;         /* ALT_ECC_ECC_RDATA0BUS */
    volatile uint32_t  ECC_RData1bus;         /* ALT_ECC_ECC_RDATA1BUS */
    volatile uint32_t  ECC_RData2bus;         /* ALT_ECC_ECC_RDATA2BUS */
    volatile uint32_t  ECC_RData3bus;         /* ALT_ECC_ECC_RDATA3BUS */
    volatile uint32_t  ECC_WData0bus;         /* ALT_ECC_ECC_WDATA0BUS */
    volatile uint32_t  ECC_WData1bus;         /* ALT_ECC_ECC_WDATA1BUS */
    volatile uint32_t  ECC_WData2bus;         /* ALT_ECC_ECC_WDATA2BUS */
    volatile uint32_t  ECC_WData3bus;         /* ALT_ECC_ECC_WDATA3BUS */
    volatile uint32_t  ECC_RDataecc0bus;      /* ALT_ECC_ECC_RDATAECC0BUS */
    volatile uint32_t  ECC_RDataecc1bus;      /* ALT_ECC_ECC_RDATAECC1BUS */
    volatile uint32_t  ECC_WDataecc0bus;      /* ALT_ECC_ECC_WDATAECC0BUS */
    volatile uint32_t  ECC_WDataecc1bus;      /* ALT_ECC_ECC_WDATAECC1BUS */
    volatile uint32_t  ECC_dbytectrl;         /* ALT_ECC_ECC_DBYTECTRL */
    volatile uint32_t  ECC_accctrl;           /* ALT_ECC_ECC_ACCCTRL */
    volatile uint32_t  ECC_startacc;          /* ALT_ECC_ECC_STARTACC */
    volatile uint32_t  ECC_wdctrl;            /* ALT_ECC_ECC_WDCTRL */
    volatile uint32_t  ECC_DECODERSTAT;       /* ALT_ECC_ECC_DECODERSTAT */
    volatile uint32_t  _pad_0x88_0x8f[2];     /* *UNDEFINED* */
    volatile uint32_t  SERRLKUPA0;            /* ALT_ECC_SERRLKUPA0 */
    volatile uint32_t  _pad_0x94_0xcf[15];    /* *UNDEFINED* */
    volatile uint32_t  SERRLKUPB0;            /* ALT_ECC_SERRLKUPB0 */
    volatile uint32_t  _pad_0xd4_0x400[203];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_ECC. */
typedef struct ALT_ECC_raw_s  ALT_ECC_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_ECC_H__ */

