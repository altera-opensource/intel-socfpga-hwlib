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

/* Altera - ALT_ECC_QSPI */

#ifndef __ALT_SOCAL_ECC_QSPI_H__
#define __ALT_SOCAL_ECC_QSPI_H__

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
 * Component : ALT_ECC_QSPI
 * 
 */
/*
 * Register : IP_REV_ID
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [15:0]  | R      | 0x0   | ALT_ECC_QSPI_IP_REV_ID_SIREV
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : SIREV
 * 
 * IP Rev #
 * 
 * These bits indicate the silicon revision number.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_IP_REV_ID_SIREV register field. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_IP_REV_ID_SIREV register field. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_MSB        15
/* The width in bits of the ALT_ECC_QSPI_IP_REV_ID_SIREV register field. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_WIDTH      16
/* The mask used to set the ALT_ECC_QSPI_IP_REV_ID_SIREV register field value. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_ECC_QSPI_IP_REV_ID_SIREV register field value. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_CLR_MSK    0xffff0000
/* The reset value of the ALT_ECC_QSPI_IP_REV_ID_SIREV register field. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_RESET      0x0
/* Extracts the ALT_ECC_QSPI_IP_REV_ID_SIREV field value from a register. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_ECC_QSPI_IP_REV_ID_SIREV register field value suitable for setting the register. */
#define ALT_ECC_QSPI_IP_REV_ID_SIREV_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_IP_REV_ID.
 */
struct ALT_ECC_QSPI_IP_REV_ID_s
{
    const uint32_t  SIREV : 16;  /* ALT_ECC_QSPI_IP_REV_ID_SIREV */
    uint32_t              : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_IP_REV_ID. */
typedef volatile struct ALT_ECC_QSPI_IP_REV_ID_s  ALT_ECC_QSPI_IP_REV_ID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_IP_REV_ID register. */
#define ALT_ECC_QSPI_IP_REV_ID_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_IP_REV_ID register from the beginning of the component. */
#define ALT_ECC_QSPI_IP_REV_ID_OFST        0x0

/*
 * Register : CTRL
 * 
 * ECC Control Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description              
 * :--------|:-------|:------|:--------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_QSPI_CTL_ECC_EN  
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*              
 *  [8]     | RW     | 0x0   | ALT_ECC_QSPI_CTL_CNT_RSTA
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*              
 *  [16]    | RW     | 0x0   | ALT_ECC_QSPI_CTL_INITA   
 *  [31:17] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : ECC_EN
 * 
 * Enable for the ECC detection and correction logic.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_CTL_ECC_EN register field. */
#define ALT_ECC_QSPI_CTL_ECC_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_CTL_ECC_EN register field. */
#define ALT_ECC_QSPI_CTL_ECC_EN_MSB        0
/* The width in bits of the ALT_ECC_QSPI_CTL_ECC_EN register field. */
#define ALT_ECC_QSPI_CTL_ECC_EN_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_CTL_ECC_EN register field value. */
#define ALT_ECC_QSPI_CTL_ECC_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_CTL_ECC_EN register field value. */
#define ALT_ECC_QSPI_CTL_ECC_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_CTL_ECC_EN register field. */
#define ALT_ECC_QSPI_CTL_ECC_EN_RESET      0x0
/* Extracts the ALT_ECC_QSPI_CTL_ECC_EN field value from a register. */
#define ALT_ECC_QSPI_CTL_ECC_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_CTL_ECC_EN register field value suitable for setting the register. */
#define ALT_ECC_QSPI_CTL_ECC_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CNT_RSTA
 * 
 * Enable to reset internal single-bit error counter A value to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_CTL_CNT_RSTA register field. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_CTL_CNT_RSTA register field. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_MSB        8
/* The width in bits of the ALT_ECC_QSPI_CTL_CNT_RSTA register field. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_CTL_CNT_RSTA register field value. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_QSPI_CTL_CNT_RSTA register field value. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_QSPI_CTL_CNT_RSTA register field. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_CTL_CNT_RSTA field value from a register. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_QSPI_CTL_CNT_RSTA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_CTL_CNT_RSTA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : INITA
 * 
 * Enable for the hardware memory initialization PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_CTL_INITA register field. */
#define ALT_ECC_QSPI_CTL_INITA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_CTL_INITA register field. */
#define ALT_ECC_QSPI_CTL_INITA_MSB        16
/* The width in bits of the ALT_ECC_QSPI_CTL_INITA register field. */
#define ALT_ECC_QSPI_CTL_INITA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_CTL_INITA register field value. */
#define ALT_ECC_QSPI_CTL_INITA_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_QSPI_CTL_INITA register field value. */
#define ALT_ECC_QSPI_CTL_INITA_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_QSPI_CTL_INITA register field. */
#define ALT_ECC_QSPI_CTL_INITA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_CTL_INITA field value from a register. */
#define ALT_ECC_QSPI_CTL_INITA_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_QSPI_CTL_INITA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_CTL_INITA_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_CTL.
 */
struct ALT_ECC_QSPI_CTL_s
{
    uint32_t  ECC_EN   :  1;  /* ALT_ECC_QSPI_CTL_ECC_EN */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  CNT_RSTA :  1;  /* ALT_ECC_QSPI_CTL_CNT_RSTA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  INITA    :  1;  /* ALT_ECC_QSPI_CTL_INITA */
    uint32_t           : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_CTL. */
typedef volatile struct ALT_ECC_QSPI_CTL_s  ALT_ECC_QSPI_CTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_CTL register. */
#define ALT_ECC_QSPI_CTL_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_CTL register from the beginning of the component. */
#define ALT_ECC_QSPI_CTL_OFST        0x8

/*
 * Register : INITSTAT
 * 
 * This bit is used to set the initialize the memory and ecc to a known value
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : INITCOMPLETEA
 * 
 * This bit is used to verify if the hardware memory initialization has completed
 * PORTB.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_MSB        0
/* The width in bits of the ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA register field value. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA register field value. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA register field. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA field value from a register. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_INITSTAT.
 */
struct ALT_ECC_QSPI_INITSTAT_s
{
    uint32_t  INITCOMPLETEA :  1;  /* ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA */
    uint32_t                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_INITSTAT. */
typedef volatile struct ALT_ECC_QSPI_INITSTAT_s  ALT_ECC_QSPI_INITSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_INITSTAT register. */
#define ALT_ECC_QSPI_INITSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_INITSTAT register from the beginning of the component. */
#define ALT_ECC_QSPI_INITSTAT_OFST        0xc

/*
 * Register : ERRINTEN
 * 
 * Error Interrupt enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_ERRINTEN_SERRINTEN
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : SERRINTEN
 * 
 * This bit is used to enable the single bit error interrupt of ECC RAM system
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_MSB        0
/* The width in bits of the ALT_ECC_QSPI_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_ERRINTEN_SERRINTEN register field value. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_ERRINTEN_SERRINTEN register field value. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_RESET      0x0
/* Extracts the ALT_ECC_QSPI_ERRINTEN_SERRINTEN field value from a register. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_ERRINTEN_SERRINTEN register field value suitable for setting the register. */
#define ALT_ECC_QSPI_ERRINTEN_SERRINTEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_ERRINTEN.
 */
struct ALT_ECC_QSPI_ERRINTEN_s
{
    uint32_t  SERRINTEN :  1;  /* ALT_ECC_QSPI_ERRINTEN_SERRINTEN */
    uint32_t            : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_ERRINTEN. */
typedef volatile struct ALT_ECC_QSPI_ERRINTEN_s  ALT_ECC_QSPI_ERRINTEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_ERRINTEN register. */
#define ALT_ECC_QSPI_ERRINTEN_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_ERRINTEN register from the beginning of the component. */
#define ALT_ECC_QSPI_ERRINTEN_OFST        0x10

/*
 * Register : ERRINTENS
 * 
 * Error Interrupt set
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_ERRINTENS_SERRINTS
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : SERRINTS
 * 
 * This bit is used to set the single-bit error interrupt bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_MSB        0
/* The width in bits of the ALT_ECC_QSPI_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_ERRINTENS_SERRINTS register field value. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_ERRINTENS_SERRINTS register field value. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_ERRINTENS_SERRINTS field value from a register. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_ERRINTENS_SERRINTS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_ERRINTENS_SERRINTS_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_ERRINTENS.
 */
struct ALT_ECC_QSPI_ERRINTENS_s
{
    uint32_t  SERRINTS :  1;  /* ALT_ECC_QSPI_ERRINTENS_SERRINTS */
    uint32_t           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_ERRINTENS. */
typedef volatile struct ALT_ECC_QSPI_ERRINTENS_s  ALT_ECC_QSPI_ERRINTENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_ERRINTENS register. */
#define ALT_ECC_QSPI_ERRINTENS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_ERRINTENS register from the beginning of the component. */
#define ALT_ECC_QSPI_ERRINTENS_OFST        0x14

/*
 * Register : ERRINTENR
 * 
 * Error Interrupt reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_ERRINTENR_SERRINTR
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : SERRINTR
 * 
 * This bit is used to reset the single-bit error interrupt bit. o
 * 
 * Reads reflect SERRINTEN.
 * 
 * 1'b0: Writing of zero has no effect.
 * 
 * 1'b1: By writing one, this bit will reset SERRINTEN bit to 0. This is performing
 * a bitwise writing of this feature.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_MSB        0
/* The width in bits of the ALT_ECC_QSPI_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_ERRINTENR_SERRINTR register field value. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_ERRINTENR_SERRINTR register field value. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_RESET      0x0
/* Extracts the ALT_ECC_QSPI_ERRINTENR_SERRINTR field value from a register. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_ERRINTENR_SERRINTR register field value suitable for setting the register. */
#define ALT_ECC_QSPI_ERRINTENR_SERRINTR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_ERRINTENR.
 */
struct ALT_ECC_QSPI_ERRINTENR_s
{
    uint32_t  SERRINTR :  1;  /* ALT_ECC_QSPI_ERRINTENR_SERRINTR */
    uint32_t           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_ERRINTENR. */
typedef volatile struct ALT_ECC_QSPI_ERRINTENR_s  ALT_ECC_QSPI_ERRINTENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_ERRINTENR register. */
#define ALT_ECC_QSPI_ERRINTENR_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_ERRINTENR register from the beginning of the component. */
#define ALT_ECC_QSPI_ERRINTENR_OFST        0x18

/*
 * Register : INTMODE
 * 
 * Reads reflect SERRINTEN.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_QSPI_INTMOD_INTMOD  
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                 
 *  [8]     | RW     | 0x0   | ALT_ECC_QSPI_INTMOD_INTONOVF
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                 
 *  [16]    | RW     | 0x0   | ALT_ECC_QSPI_INTMOD_INTONCMP
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : INTMODE
 * 
 * Interrupt mode for single-bit errors.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INTMOD_INTMOD register field. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INTMOD_INTMOD register field. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_MSB        0
/* The width in bits of the ALT_ECC_QSPI_INTMOD_INTMOD register field. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INTMOD_INTMOD register field value. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_INTMOD_INTMOD register field value. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_INTMOD_INTMOD register field. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INTMOD_INTMOD field value from a register. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_INTMOD_INTMOD register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INTMOD_INTMOD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : INTONOVF
 * 
 * Enable interrupt on overflow.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INTMOD_INTONOVF register field. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INTMOD_INTONOVF register field. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_MSB        8
/* The width in bits of the ALT_ECC_QSPI_INTMOD_INTONOVF register field. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INTMOD_INTONOVF register field value. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_QSPI_INTMOD_INTONOVF register field value. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_QSPI_INTMOD_INTONOVF register field. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INTMOD_INTONOVF field value from a register. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_QSPI_INTMOD_INTONOVF register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INTMOD_INTONOVF_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : INTONCMP
 * 
 * Enable interrupt on compare.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INTMOD_INTONCMP register field. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INTMOD_INTONCMP register field. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_MSB        16
/* The width in bits of the ALT_ECC_QSPI_INTMOD_INTONCMP register field. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INTMOD_INTONCMP register field value. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_QSPI_INTMOD_INTONCMP register field value. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_QSPI_INTMOD_INTONCMP register field. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INTMOD_INTONCMP field value from a register. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_QSPI_INTMOD_INTONCMP register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INTMOD_INTONCMP_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_INTMOD.
 */
struct ALT_ECC_QSPI_INTMOD_s
{
    uint32_t  INTMODE  :  1;  /* ALT_ECC_QSPI_INTMOD_INTMOD */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  INTONOVF :  1;  /* ALT_ECC_QSPI_INTMOD_INTONOVF */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  INTONCMP :  1;  /* ALT_ECC_QSPI_INTMOD_INTONCMP */
    uint32_t           : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_INTMOD. */
typedef volatile struct ALT_ECC_QSPI_INTMOD_s  ALT_ECC_QSPI_INTMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_INTMOD register. */
#define ALT_ECC_QSPI_INTMOD_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_INTMOD register from the beginning of the component. */
#define ALT_ECC_QSPI_INTMOD_OFST        0x1c

/*
 * Register : INTSTAT
 * 
 * This bit is used to enable interrupt generation on SERR lookup table overflow.
 * When all the entries in the table are valid=1 and this is bit is enabled,
 * serr_req signal will be asserted.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_INTSTAT_SERRPENA
 *  [7:1]  | ???    | 0x0   | *UNDEFINED*                  
 *  [8]    | RW     | 0x0   | ALT_ECC_QSPI_INTSTAT_DERRPENA
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                  
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INTSTAT_SERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INTSTAT_SERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_MSB        0
/* The width in bits of the ALT_ECC_QSPI_INTSTAT_SERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INTSTAT_SERRPENA register field value. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_INTSTAT_SERRPENA register field value. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_INTSTAT_SERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INTSTAT_SERRPENA field value from a register. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_INTSTAT_SERRPENA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INTSTAT_SERRPENA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DERRPENA
 * 
 * Double-bit error pending for PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INTSTAT_DERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INTSTAT_DERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_MSB        8
/* The width in bits of the ALT_ECC_QSPI_INTSTAT_DERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INTSTAT_DERRPENA register field value. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_QSPI_INTSTAT_DERRPENA register field value. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_QSPI_INTSTAT_DERRPENA register field. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INTSTAT_DERRPENA field value from a register. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_QSPI_INTSTAT_DERRPENA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INTSTAT_DERRPENA_SET(value) (((value) << 8) & 0x00000100)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_INTSTAT.
 */
struct ALT_ECC_QSPI_INTSTAT_s
{
    uint32_t  SERRPENA :  1;  /* ALT_ECC_QSPI_INTSTAT_SERRPENA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  DERRPENA :  1;  /* ALT_ECC_QSPI_INTSTAT_DERRPENA */
    uint32_t           : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_INTSTAT. */
typedef volatile struct ALT_ECC_QSPI_INTSTAT_s  ALT_ECC_QSPI_INTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_INTSTAT register. */
#define ALT_ECC_QSPI_INTSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_INTSTAT register from the beginning of the component. */
#define ALT_ECC_QSPI_INTSTAT_OFST        0x20

/*
 * Register : INTTEST
 * 
 * This bits is used to test interrupt from ECC RAM to GIC
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_INTTEST_TSERRA
 *  [7:1]  | ???    | 0x0   | *UNDEFINED*                
 *  [8]    | RW     | 0x0   | ALT_ECC_QSPI_INTTEST_TDERRA
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INTTEST_TSERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INTTEST_TSERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_MSB        0
/* The width in bits of the ALT_ECC_QSPI_INTTEST_TSERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INTTEST_TSERRA register field value. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_INTTEST_TSERRA register field value. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_INTTEST_TSERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INTTEST_TSERRA field value from a register. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_INTTEST_TSERRA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INTTEST_TSERRA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TDERRA
 * 
 * Test PORTA Double-bit error.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_INTTEST_TDERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_INTTEST_TDERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_MSB        8
/* The width in bits of the ALT_ECC_QSPI_INTTEST_TDERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_INTTEST_TDERRA register field value. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_QSPI_INTTEST_TDERRA register field value. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_QSPI_INTTEST_TDERRA register field. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_INTTEST_TDERRA field value from a register. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_QSPI_INTTEST_TDERRA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_INTTEST_TDERRA_SET(value) (((value) << 8) & 0x00000100)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_INTTEST.
 */
struct ALT_ECC_QSPI_INTTEST_s
{
    uint32_t  TSERRA :  1;  /* ALT_ECC_QSPI_INTTEST_TSERRA */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  TDERRA :  1;  /* ALT_ECC_QSPI_INTTEST_TDERRA */
    uint32_t         : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_INTTEST. */
typedef volatile struct ALT_ECC_QSPI_INTTEST_s  ALT_ECC_QSPI_INTTEST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_INTTEST register. */
#define ALT_ECC_QSPI_INTTEST_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_INTTEST register from the beginning of the component. */
#define ALT_ECC_QSPI_INTTEST_OFST        0x24

/*
 * Register : MODSTAT
 * 
 * Counter feature status flag
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                 
 * :-------|:-------|:------|:-----------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_MODSTAT_CMPFLGA
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                 
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_MSB        0
/* The width in bits of the ALT_ECC_QSPI_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_MODSTAT_CMPFLGA register field value. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_MODSTAT_CMPFLGA register field value. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_MODSTAT_CMPFLGA field value from a register. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_MODSTAT_CMPFLGA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_MODSTAT_CMPFLGA_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_MODSTAT.
 */
struct ALT_ECC_QSPI_MODSTAT_s
{
    uint32_t  CMPFLGA :  1;  /* ALT_ECC_QSPI_MODSTAT_CMPFLGA */
    uint32_t          : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_MODSTAT. */
typedef volatile struct ALT_ECC_QSPI_MODSTAT_s  ALT_ECC_QSPI_MODSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_MODSTAT register. */
#define ALT_ECC_QSPI_MODSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_MODSTAT register from the beginning of the component. */
#define ALT_ECC_QSPI_MODSTAT_OFST        0x28

/*
 * Register : DERRADDRA
 * 
 * This register shows the address of PORTA current double-bit error. RAM size will
 * determine the maximum number of address bits.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [6:0]  | RW     | 0x0   | ALT_ECC_QSPI_DERRADDRA_ADDR
 *  [31:7] | ???    | 0x0   | *UNDEFINED*                
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_DERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_DERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_MSB        6
/* The width in bits of the ALT_ECC_QSPI_DERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_DERRADDRA_ADDR register field value. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_DERRADDRA_ADDR register field value. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_DERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_RESET      0x0
/* Extracts the ALT_ECC_QSPI_DERRADDRA_ADDR field value from a register. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_DERRADDRA_ADDR register field value suitable for setting the register. */
#define ALT_ECC_QSPI_DERRADDRA_ADDR_SET(value) (((value) << 0) & 0x0000007f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_DERRADDRA.
 */
struct ALT_ECC_QSPI_DERRADDRA_s
{
    uint32_t  Address :  7;  /* ALT_ECC_QSPI_DERRADDRA_ADDR */
    uint32_t          : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_DERRADDRA. */
typedef volatile struct ALT_ECC_QSPI_DERRADDRA_s  ALT_ECC_QSPI_DERRADDRA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_DERRADDRA register. */
#define ALT_ECC_QSPI_DERRADDRA_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_DERRADDRA register from the beginning of the component. */
#define ALT_ECC_QSPI_DERRADDRA_OFST        0x2c

/*
 * Register : SERRADDRA
 * 
 * This register shows the address of PORTA current single-bit error. RAM size will
 * determine the maximum number of address bits.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [6:0]  | RW     | 0x0   | ALT_ECC_QSPI_SERRADDRA_ADDR
 *  [31:7] | ???    | 0x0   | *UNDEFINED*                
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_SERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_SERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_MSB        6
/* The width in bits of the ALT_ECC_QSPI_SERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_SERRADDRA_ADDR register field value. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_SERRADDRA_ADDR register field value. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_SERRADDRA_ADDR register field. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_RESET      0x0
/* Extracts the ALT_ECC_QSPI_SERRADDRA_ADDR field value from a register. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_SERRADDRA_ADDR register field value suitable for setting the register. */
#define ALT_ECC_QSPI_SERRADDRA_ADDR_SET(value) (((value) << 0) & 0x0000007f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_SERRADDRA.
 */
struct ALT_ECC_QSPI_SERRADDRA_s
{
    uint32_t  Address :  7;  /* ALT_ECC_QSPI_SERRADDRA_ADDR */
    uint32_t          : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_SERRADDRA. */
typedef volatile struct ALT_ECC_QSPI_SERRADDRA_s  ALT_ECC_QSPI_SERRADDRA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_SERRADDRA register. */
#define ALT_ECC_QSPI_SERRADDRA_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_SERRADDRA register from the beginning of the component. */
#define ALT_ECC_QSPI_SERRADDRA_OFST        0x30

/*
 * Register : SERRCNTREG
 * 
 * Maximum counter value for single-bit error interrupt
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_SERRCNTREG_SERRCNT
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_MSB        31
/* The width in bits of the ALT_ECC_QSPI_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_SERRCNTREG_SERRCNT register field value. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_SERRCNTREG_SERRCNT register field value. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_RESET      0x0
/* Extracts the ALT_ECC_QSPI_SERRCNTREG_SERRCNT field value from a register. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_SERRCNTREG_SERRCNT register field value suitable for setting the register. */
#define ALT_ECC_QSPI_SERRCNTREG_SERRCNT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_SERRCNTREG.
 */
struct ALT_ECC_QSPI_SERRCNTREG_s
{
    uint32_t  SERRCNT : 32;  /* ALT_ECC_QSPI_SERRCNTREG_SERRCNT */
};

/* The typedef declaration for register ALT_ECC_QSPI_SERRCNTREG. */
typedef volatile struct ALT_ECC_QSPI_SERRCNTREG_s  ALT_ECC_QSPI_SERRCNTREG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_SERRCNTREG register. */
#define ALT_ECC_QSPI_SERRCNTREG_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_SERRCNTREG register from the beginning of the component. */
#define ALT_ECC_QSPI_SERRCNTREG_OFST        0x3c

/*
 * Register : ECC_Addrbus
 * 
 * MSB bit of address is determined by ADR.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [6:0]  | RW     | 0x0   | ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS
 *  [31:7] | ???    | 0x0   | *UNDEFINED*                     
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_MSB        6
/* The width in bits of the ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS register field value. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS register field value. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS register field. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS field value from a register. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS_SET(value) (((value) << 0) & 0x0000007f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_ADDRBUS.
 */
struct ALT_ECC_QSPI_ADDRBUS_s
{
    uint32_t  ECC_AddrBUS :  7;  /* ALT_ECC_QSPI_ADDRBUS_ECC_ADDRBUS */
    uint32_t              : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_ADDRBUS. */
typedef volatile struct ALT_ECC_QSPI_ADDRBUS_s  ALT_ECC_QSPI_ADDRBUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_ADDRBUS register. */
#define ALT_ECC_QSPI_ADDRBUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_ADDRBUS register from the beginning of the component. */
#define ALT_ECC_QSPI_ADDRBUS_OFST        0x40
/* The address of the ALT_ECC_QSPI_ADDRBUS register. */
#define ALT_ECC_QSPI_ADDRBUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_ADDRBUS_OFST))

/*
 * Register : ECC_RData0bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_RDATA0BUS.
 */
struct ALT_ECC_QSPI_RDATA0BUS_s
{
    uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_QSPI_RDATA0BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_RDATA0BUS. */
typedef volatile struct ALT_ECC_QSPI_RDATA0BUS_s  ALT_ECC_QSPI_RDATA0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_RDATA0BUS register. */
#define ALT_ECC_QSPI_RDATA0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_RDATA0BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_RDATA0BUS_OFST        0x44
/* The address of the ALT_ECC_QSPI_RDATA0BUS register. */
#define ALT_ECC_QSPI_RDATA0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_RDATA0BUS_OFST))

/*
 * Register : ECC_RData1bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_RDATA1BUS.
 */
struct ALT_ECC_QSPI_RDATA1BUS_s
{
    uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_QSPI_RDATA1BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_RDATA1BUS. */
typedef volatile struct ALT_ECC_QSPI_RDATA1BUS_s  ALT_ECC_QSPI_RDATA1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_RDATA1BUS register. */
#define ALT_ECC_QSPI_RDATA1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_RDATA1BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_RDATA1BUS_OFST        0x48
/* The address of the ALT_ECC_QSPI_RDATA1BUS register. */
#define ALT_ECC_QSPI_RDATA1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_RDATA1BUS_OFST))

/*
 * Register : ECC_RData2bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_RDATA2BUS.
 */
struct ALT_ECC_QSPI_RDATA2BUS_s
{
    uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_QSPI_RDATA2BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_RDATA2BUS. */
typedef volatile struct ALT_ECC_QSPI_RDATA2BUS_s  ALT_ECC_QSPI_RDATA2BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_RDATA2BUS register. */
#define ALT_ECC_QSPI_RDATA2BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_RDATA2BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_RDATA2BUS_OFST        0x4c
/* The address of the ALT_ECC_QSPI_RDATA2BUS register. */
#define ALT_ECC_QSPI_RDATA2BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_RDATA2BUS_OFST))

/*
 * Register : ECC_RData3bus
 * 
 * Data will be read to this register field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS register field value. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS register field. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS field value from a register. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_RDATA3BUS.
 */
struct ALT_ECC_QSPI_RDATA3BUS_s
{
    uint32_t  ECC_RDataBUS : 32;  /* ALT_ECC_QSPI_RDATA3BUS_ECC_RDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_RDATA3BUS. */
typedef volatile struct ALT_ECC_QSPI_RDATA3BUS_s  ALT_ECC_QSPI_RDATA3BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_RDATA3BUS register. */
#define ALT_ECC_QSPI_RDATA3BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_RDATA3BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_RDATA3BUS_OFST        0x50
/* The address of the ALT_ECC_QSPI_RDATA3BUS register. */
#define ALT_ECC_QSPI_RDATA3BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_RDATA3BUS_OFST))

/*
 * Register : ECC_WData0bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_WDATA0BUS.
 */
struct ALT_ECC_QSPI_WDATA0BUS_s
{
    uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_QSPI_WDATA0BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_WDATA0BUS. */
typedef volatile struct ALT_ECC_QSPI_WDATA0BUS_s  ALT_ECC_QSPI_WDATA0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_WDATA0BUS register. */
#define ALT_ECC_QSPI_WDATA0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_WDATA0BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_WDATA0BUS_OFST        0x54
/* The address of the ALT_ECC_QSPI_WDATA0BUS register. */
#define ALT_ECC_QSPI_WDATA0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_WDATA0BUS_OFST))

/*
 * Register : ECC_WData1bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_WDATA1BUS.
 */
struct ALT_ECC_QSPI_WDATA1BUS_s
{
    uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_QSPI_WDATA1BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_WDATA1BUS. */
typedef volatile struct ALT_ECC_QSPI_WDATA1BUS_s  ALT_ECC_QSPI_WDATA1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_WDATA1BUS register. */
#define ALT_ECC_QSPI_WDATA1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_WDATA1BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_WDATA1BUS_OFST        0x58
/* The address of the ALT_ECC_QSPI_WDATA1BUS register. */
#define ALT_ECC_QSPI_WDATA1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_WDATA1BUS_OFST))

/*
 * Register : ECC_WData2bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_WDATA2BUS.
 */
struct ALT_ECC_QSPI_WDATA2BUS_s
{
    uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_QSPI_WDATA2BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_WDATA2BUS. */
typedef volatile struct ALT_ECC_QSPI_WDATA2BUS_s  ALT_ECC_QSPI_WDATA2BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_WDATA2BUS register. */
#define ALT_ECC_QSPI_WDATA2BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_WDATA2BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_WDATA2BUS_OFST        0x5c
/* The address of the ALT_ECC_QSPI_WDATA2BUS register. */
#define ALT_ECC_QSPI_WDATA2BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_WDATA2BUS_OFST))

/*
 * Register : ECC_WData3bus
 * 
 * Data from the register will be written to the RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_MSB        31
/* The width in bits of the ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_WIDTH      32
/* The mask used to set the ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS register field value. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS register field. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS field value from a register. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_WDATA3BUS.
 */
struct ALT_ECC_QSPI_WDATA3BUS_s
{
    uint32_t  ECC_WDataBUS : 32;  /* ALT_ECC_QSPI_WDATA3BUS_ECC_WDATABUS */
};

/* The typedef declaration for register ALT_ECC_QSPI_WDATA3BUS. */
typedef volatile struct ALT_ECC_QSPI_WDATA3BUS_s  ALT_ECC_QSPI_WDATA3BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_WDATA3BUS register. */
#define ALT_ECC_QSPI_WDATA3BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_WDATA3BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_WDATA3BUS_OFST        0x60
/* The address of the ALT_ECC_QSPI_WDATA3BUS register. */
#define ALT_ECC_QSPI_WDATA3BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_WDATA3BUS_OFST))

/*
 * Register : ECC_RDataecc0bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [6:0]   | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS
 *  [7]     | ???    | 0x0   | *UNDEFINED*                               
 *  [14:8]  | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS
 *  [15]    | ???    | 0x0   | *UNDEFINED*                               
 *  [22:16] | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS
 *  [23]    | ???    | 0x0   | *UNDEFINED*                               
 *  [30:24] | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS
 *  [31]    | ???    | 0x0   | *UNDEFINED*                               
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_MSB        6
/* The width in bits of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : ECC_RDataecc1BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_MSB        14
/* The width in bits of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_SET_MSK    0x00007f00
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_CLR_MSK    0xffff80ff
/* The reset value of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_GET(value) (((value) & 0x00007f00) >> 8)
/* Produces a ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS_SET(value) (((value) << 8) & 0x00007f00)

/*
 * Field : ECC_RDataecc2BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_MSB        22
/* The width in bits of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_SET_MSK    0x007f0000
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_CLR_MSK    0xff80ffff
/* The reset value of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_GET(value) (((value) & 0x007f0000) >> 16)
/* Produces a ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS_SET(value) (((value) << 16) & 0x007f0000)

/*
 * Field : ECC_RDataecc3BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_MSB        30
/* The width in bits of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_SET_MSK    0x7f000000
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_CLR_MSK    0x80ffffff
/* The reset value of the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS register field. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_GET(value) (((value) & 0x7f000000) >> 24)
/* Produces a ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS_SET(value) (((value) << 24) & 0x7f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_RDATAECC0BUS.
 */
struct ALT_ECC_QSPI_RDATAECC0BUS_s
{
    uint32_t  ECC_RDataecc0BUS :  7;  /* ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC0BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_RDataecc1BUS :  7;  /* ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC1BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_RDataecc2BUS :  7;  /* ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC2BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_RDataecc3BUS :  7;  /* ALT_ECC_QSPI_RDATAECC0BUS_ECC_RDATAECC3BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_RDATAECC0BUS. */
typedef volatile struct ALT_ECC_QSPI_RDATAECC0BUS_s  ALT_ECC_QSPI_RDATAECC0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_RDATAECC0BUS register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_RDATAECC0BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_RDATAECC0BUS_OFST        0x64
/* The address of the ALT_ECC_QSPI_RDATAECC0BUS register. */
#define ALT_ECC_QSPI_RDATAECC0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_RDATAECC0BUS_OFST))

/*
 * Register : ECC_RDataecc1bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [6:0]   | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS
 *  [7]     | ???    | 0x0   | *UNDEFINED*                               
 *  [14:8]  | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS
 *  [15]    | ???    | 0x0   | *UNDEFINED*                               
 *  [22:16] | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS
 *  [23]    | ???    | 0x0   | *UNDEFINED*                               
 *  [30:24] | RW     | 0x0   | ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS
 *  [31]    | ???    | 0x0   | *UNDEFINED*                               
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_MSB        6
/* The width in bits of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : ECC_RDataecc5BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_MSB        14
/* The width in bits of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_SET_MSK    0x00007f00
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_CLR_MSK    0xffff80ff
/* The reset value of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_GET(value) (((value) & 0x00007f00) >> 8)
/* Produces a ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS_SET(value) (((value) << 8) & 0x00007f00)

/*
 * Field : ECC_RDataecc6BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_MSB        22
/* The width in bits of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_SET_MSK    0x007f0000
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_CLR_MSK    0xff80ffff
/* The reset value of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_GET(value) (((value) & 0x007f0000) >> 16)
/* Produces a ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS_SET(value) (((value) << 16) & 0x007f0000)

/*
 * Field : ECC_RDataecc7BUS
 * 
 * Eccdata will be read to this register field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_MSB        30
/* The width in bits of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_SET_MSK    0x7f000000
/* The mask used to clear the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS register field value. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_CLR_MSK    0x80ffffff
/* The reset value of the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS register field. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS field value from a register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_GET(value) (((value) & 0x7f000000) >> 24)
/* Produces a ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS_SET(value) (((value) << 24) & 0x7f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_RDATAECC1BUS.
 */
struct ALT_ECC_QSPI_RDATAECC1BUS_s
{
    uint32_t  ECC_RDataecc4BUS :  7;  /* ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC4BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_RDataecc5BUS :  7;  /* ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC5BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_RDataecc6BUS :  7;  /* ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC6BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_RDataecc7BUS :  7;  /* ALT_ECC_QSPI_RDATAECC1BUS_ECC_RDATAECC7BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_RDATAECC1BUS. */
typedef volatile struct ALT_ECC_QSPI_RDATAECC1BUS_s  ALT_ECC_QSPI_RDATAECC1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_RDATAECC1BUS register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_RDATAECC1BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_RDATAECC1BUS_OFST        0x68
/* The address of the ALT_ECC_QSPI_RDATAECC1BUS register. */
#define ALT_ECC_QSPI_RDATAECC1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_RDATAECC1BUS_OFST))

/*
 * Register : ECC_WDataecc0bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [6:0]   | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS
 *  [7]     | ???    | 0x0   | *UNDEFINED*                               
 *  [14:8]  | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS
 *  [15]    | ???    | 0x0   | *UNDEFINED*                               
 *  [22:16] | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS
 *  [23]    | ???    | 0x0   | *UNDEFINED*                               
 *  [30:24] | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS
 *  [31]    | ???    | 0x0   | *UNDEFINED*                               
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_MSB        6
/* The width in bits of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : ECC_WDataecc1BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_MSB        14
/* The width in bits of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_SET_MSK    0x00007f00
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_CLR_MSK    0xffff80ff
/* The reset value of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_GET(value) (((value) & 0x00007f00) >> 8)
/* Produces a ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS_SET(value) (((value) << 8) & 0x00007f00)

/*
 * Field : ECC_WDataecc2BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_MSB        22
/* The width in bits of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_SET_MSK    0x007f0000
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_CLR_MSK    0xff80ffff
/* The reset value of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_GET(value) (((value) & 0x007f0000) >> 16)
/* Produces a ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS_SET(value) (((value) << 16) & 0x007f0000)

/*
 * Field : ECC_WDataecc3BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_MSB        30
/* The width in bits of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_SET_MSK    0x7f000000
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_CLR_MSK    0x80ffffff
/* The reset value of the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS register field. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_GET(value) (((value) & 0x7f000000) >> 24)
/* Produces a ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS_SET(value) (((value) << 24) & 0x7f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_WDATAECC0BUS.
 */
struct ALT_ECC_QSPI_WDATAECC0BUS_s
{
    uint32_t  ECC_WDataecc0BUS :  7;  /* ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC0BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_WDataecc1BUS :  7;  /* ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC1BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_WDataecc2BUS :  7;  /* ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC2BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_WDataecc3BUS :  7;  /* ALT_ECC_QSPI_WDATAECC0BUS_ECC_WDATAECC3BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_WDATAECC0BUS. */
typedef volatile struct ALT_ECC_QSPI_WDATAECC0BUS_s  ALT_ECC_QSPI_WDATAECC0BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_WDATAECC0BUS register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_WDATAECC0BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_WDATAECC0BUS_OFST        0x6c
/* The address of the ALT_ECC_QSPI_WDATAECC0BUS register. */
#define ALT_ECC_QSPI_WDATAECC0BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_WDATAECC0BUS_OFST))

/*
 * Register : ECC_WDataecc1bus
 * 
 * The msb bit for the register is configured based on DAT parameter (RAM word
 * size). Unimplemented bytes of this register will be reserved.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [6:0]   | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS
 *  [7]     | ???    | 0x0   | *UNDEFINED*                               
 *  [14:8]  | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS
 *  [15]    | ???    | 0x0   | *UNDEFINED*                               
 *  [22:16] | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS
 *  [23]    | ???    | 0x0   | *UNDEFINED*                               
 *  [30:24] | RW     | 0x0   | ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS
 *  [31]    | ???    | 0x0   | *UNDEFINED*                               
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_MSB        6
/* The width in bits of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : ECC_WDataecc5BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_MSB        14
/* The width in bits of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_SET_MSK    0x00007f00
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_CLR_MSK    0xffff80ff
/* The reset value of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_GET(value) (((value) & 0x00007f00) >> 8)
/* Produces a ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS_SET(value) (((value) << 8) & 0x00007f00)

/*
 * Field : ECC_WDataecc6BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_MSB        22
/* The width in bits of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_SET_MSK    0x007f0000
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_CLR_MSK    0xff80ffff
/* The reset value of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_GET(value) (((value) & 0x007f0000) >> 16)
/* Produces a ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS_SET(value) (((value) << 16) & 0x007f0000)

/*
 * Field : ECC_WDataecc7BUS
 * 
 * Eccdata from the register will be written to the RAM.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_MSB        30
/* The width in bits of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_SET_MSK    0x7f000000
/* The mask used to clear the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS register field value. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_CLR_MSK    0x80ffffff
/* The reset value of the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS register field. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS field value from a register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_GET(value) (((value) & 0x7f000000) >> 24)
/* Produces a ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS_SET(value) (((value) << 24) & 0x7f000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_WDATAECC1BUS.
 */
struct ALT_ECC_QSPI_WDATAECC1BUS_s
{
    uint32_t  ECC_WDataecc4BUS :  7;  /* ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC4BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_WDataecc5BUS :  7;  /* ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC5BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_WDataecc6BUS :  7;  /* ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC6BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
    uint32_t  ECC_WDataecc7BUS :  7;  /* ALT_ECC_QSPI_WDATAECC1BUS_ECC_WDATAECC7BUS */
    uint32_t                   :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_WDATAECC1BUS. */
typedef volatile struct ALT_ECC_QSPI_WDATAECC1BUS_s  ALT_ECC_QSPI_WDATAECC1BUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_WDATAECC1BUS register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_WDATAECC1BUS register from the beginning of the component. */
#define ALT_ECC_QSPI_WDATAECC1BUS_OFST        0x70
/* The address of the ALT_ECC_QSPI_WDATAECC1BUS register. */
#define ALT_ECC_QSPI_WDATAECC1BUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_WDATAECC1BUS_OFST))

/*
 * Register : ECC_dbytectrl
 * 
 * Max number of implemented byte enabled is DAT/8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_DBYTECTL_DBEN
 *  [31:1] | ???    | 0x0   | *UNDEFINED*               
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_DBYTECTL_DBEN register field. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_DBYTECTL_DBEN register field. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_MSB        0
/* The width in bits of the ALT_ECC_QSPI_DBYTECTL_DBEN register field. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_DBYTECTL_DBEN register field value. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_DBYTECTL_DBEN register field value. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_DBYTECTL_DBEN register field. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_RESET      0x0
/* Extracts the ALT_ECC_QSPI_DBYTECTL_DBEN field value from a register. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_DBYTECTL_DBEN register field value suitable for setting the register. */
#define ALT_ECC_QSPI_DBYTECTL_DBEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_DBYTECTL.
 */
struct ALT_ECC_QSPI_DBYTECTL_s
{
    uint32_t  DBEN :  1;  /* ALT_ECC_QSPI_DBYTECTL_DBEN */
    uint32_t       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_DBYTECTL. */
typedef volatile struct ALT_ECC_QSPI_DBYTECTL_s  ALT_ECC_QSPI_DBYTECTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_DBYTECTL register. */
#define ALT_ECC_QSPI_DBYTECTL_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_DBYTECTL register from the beginning of the component. */
#define ALT_ECC_QSPI_DBYTECTL_OFST        0x74
/* The address of the ALT_ECC_QSPI_DBYTECTL register. */
#define ALT_ECC_QSPI_DBYTECTL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_DBYTECTL_OFST))

/*
 * Register : ECC_accctrl
 * 
 * These bits determine which byte of data/ecc to write to RAM.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_ACCCTL_DATAOVR
 *  [1]    | RW     | 0x0   | ALT_ECC_QSPI_ACCCTL_ECCOVR 
 *  [7:2]  | ???    | 0x0   | *UNDEFINED*                
 *  [8]    | RW     | 0x0   | ALT_ECC_QSPI_ACCCTL_RDWR   
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_ACCCTL_DATAOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_ACCCTL_DATAOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_MSB        0
/* The width in bits of the ALT_ECC_QSPI_ACCCTL_DATAOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_ACCCTL_DATAOVR register field value. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_ACCCTL_DATAOVR register field value. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_ACCCTL_DATAOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_RESET      0x0
/* Extracts the ALT_ECC_QSPI_ACCCTL_DATAOVR field value from a register. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_ACCCTL_DATAOVR register field value suitable for setting the register. */
#define ALT_ECC_QSPI_ACCCTL_DATAOVR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ECCOVR
 * 
 * ECC Data Override.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_ACCCTL_ECCOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_ACCCTL_ECCOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_MSB        1
/* The width in bits of the ALT_ECC_QSPI_ACCCTL_ECCOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_ACCCTL_ECCOVR register field value. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_QSPI_ACCCTL_ECCOVR register field value. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_QSPI_ACCCTL_ECCOVR register field. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_RESET      0x0
/* Extracts the ALT_ECC_QSPI_ACCCTL_ECCOVR field value from a register. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_QSPI_ACCCTL_ECCOVR register field value suitable for setting the register. */
#define ALT_ECC_QSPI_ACCCTL_ECCOVR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RDWR
 * 
 * Control for read/write.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_ACCCTL_RDWR register field. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_ACCCTL_RDWR register field. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_MSB        8
/* The width in bits of the ALT_ECC_QSPI_ACCCTL_RDWR register field. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_ACCCTL_RDWR register field value. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_QSPI_ACCCTL_RDWR register field value. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_QSPI_ACCCTL_RDWR register field. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_RESET      0x0
/* Extracts the ALT_ECC_QSPI_ACCCTL_RDWR field value from a register. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_QSPI_ACCCTL_RDWR register field value suitable for setting the register. */
#define ALT_ECC_QSPI_ACCCTL_RDWR_SET(value) (((value) << 8) & 0x00000100)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_ACCCTL.
 */
struct ALT_ECC_QSPI_ACCCTL_s
{
    uint32_t  DATAOVR :  1;  /* ALT_ECC_QSPI_ACCCTL_DATAOVR */
    uint32_t  ECCOVR  :  1;  /* ALT_ECC_QSPI_ACCCTL_ECCOVR */
    uint32_t          :  6;  /* *UNDEFINED* */
    uint32_t  RDWR    :  1;  /* ALT_ECC_QSPI_ACCCTL_RDWR */
    uint32_t          : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_ACCCTL. */
typedef volatile struct ALT_ECC_QSPI_ACCCTL_s  ALT_ECC_QSPI_ACCCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_ACCCTL register. */
#define ALT_ECC_QSPI_ACCCTL_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_ACCCTL register from the beginning of the component. */
#define ALT_ECC_QSPI_ACCCTL_OFST        0x78
/* The address of the ALT_ECC_QSPI_ACCCTL register. */
#define ALT_ECC_QSPI_ACCCTL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_ACCCTL_OFST))

/*
 * Register : ECC_startacc
 * 
 * These bits determine which byte of data/ecc to write to RAM.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [15:0]  | ???    | 0x0   | *UNDEFINED*                 
 *  [16]    | RW     | 0x0   | ALT_ECC_QSPI_STARTACC_ENBUSA
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : ENBUSA
 * 
 * Start RAM access for PORTA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_STARTACC_ENBUSA register field. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_STARTACC_ENBUSA register field. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_MSB        16
/* The width in bits of the ALT_ECC_QSPI_STARTACC_ENBUSA register field. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_STARTACC_ENBUSA register field value. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_QSPI_STARTACC_ENBUSA register field value. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_QSPI_STARTACC_ENBUSA register field. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_RESET      0x0
/* Extracts the ALT_ECC_QSPI_STARTACC_ENBUSA field value from a register. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_QSPI_STARTACC_ENBUSA register field value suitable for setting the register. */
#define ALT_ECC_QSPI_STARTACC_ENBUSA_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_STARTACC.
 */
struct ALT_ECC_QSPI_STARTACC_s
{
    uint32_t         : 16;  /* *UNDEFINED* */
    uint32_t  ENBUSA :  1;  /* ALT_ECC_QSPI_STARTACC_ENBUSA */
    uint32_t         : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_STARTACC. */
typedef volatile struct ALT_ECC_QSPI_STARTACC_s  ALT_ECC_QSPI_STARTACC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_STARTACC register. */
#define ALT_ECC_QSPI_STARTACC_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_STARTACC register from the beginning of the component. */
#define ALT_ECC_QSPI_STARTACC_OFST        0x7c
/* The address of the ALT_ECC_QSPI_STARTACC register. */
#define ALT_ECC_QSPI_STARTACC_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_STARTACC_OFST))

/*
 * Register : ECC_wdctrl
 * 
 * Bits to Enable/Disable Watch Dog Timer
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_QSPI_WDCTL_WDEN_RAM
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_WDCTL_WDEN_RAM register field. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_WDCTL_WDEN_RAM register field. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_MSB        0
/* The width in bits of the ALT_ECC_QSPI_WDCTL_WDEN_RAM register field. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_WDCTL_WDEN_RAM register field value. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_QSPI_WDCTL_WDEN_RAM register field value. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_QSPI_WDCTL_WDEN_RAM register field. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_RESET      0x0
/* Extracts the ALT_ECC_QSPI_WDCTL_WDEN_RAM field value from a register. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_QSPI_WDCTL_WDEN_RAM register field value suitable for setting the register. */
#define ALT_ECC_QSPI_WDCTL_WDEN_RAM_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_WDCTL.
 */
struct ALT_ECC_QSPI_WDCTL_s
{
    uint32_t  WDEN_RAM :  1;  /* ALT_ECC_QSPI_WDCTL_WDEN_RAM */
    uint32_t           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_QSPI_WDCTL. */
typedef volatile struct ALT_ECC_QSPI_WDCTL_s  ALT_ECC_QSPI_WDCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_WDCTL register. */
#define ALT_ECC_QSPI_WDCTL_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_WDCTL register from the beginning of the component. */
#define ALT_ECC_QSPI_WDCTL_OFST        0x80
/* The address of the ALT_ECC_QSPI_WDCTL register. */
#define ALT_ECC_QSPI_WDCTL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_ECC_QSPI_WDCTL_OFST))

/*
 * Register : SERRLKUPA0
 * 
 * Single-bit error address in LOOKUP TABLE for PORTA.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [6:0]  | R      | 0x0   | ALT_ECC_QSPI_SERRLKUPA0_ADDR 
 *  [30:7] | ???    | 0x0   | *UNDEFINED*                  
 *  [31]   | RW     | 0x0   | ALT_ECC_QSPI_SERRLKUPA0_VALID
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
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_SERRLKUPA0_ADDR register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_SERRLKUPA0_ADDR register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_MSB        6
/* The width in bits of the ALT_ECC_QSPI_SERRLKUPA0_ADDR register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_WIDTH      7
/* The mask used to set the ALT_ECC_QSPI_SERRLKUPA0_ADDR register field value. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_SET_MSK    0x0000007f
/* The mask used to clear the ALT_ECC_QSPI_SERRLKUPA0_ADDR register field value. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_CLR_MSK    0xffffff80
/* The reset value of the ALT_ECC_QSPI_SERRLKUPA0_ADDR register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_RESET      0x0
/* Extracts the ALT_ECC_QSPI_SERRLKUPA0_ADDR field value from a register. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_ECC_QSPI_SERRLKUPA0_ADDR register field value suitable for setting the register. */
#define ALT_ECC_QSPI_SERRLKUPA0_ADDR_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : VALID
 * 
 * Valid flag bit. Valid bit indicates if the address in this register is current
 * or stale.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_QSPI_SERRLKUPA0_VALID register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_ECC_QSPI_SERRLKUPA0_VALID register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_MSB        31
/* The width in bits of the ALT_ECC_QSPI_SERRLKUPA0_VALID register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_WIDTH      1
/* The mask used to set the ALT_ECC_QSPI_SERRLKUPA0_VALID register field value. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_SET_MSK    0x80000000
/* The mask used to clear the ALT_ECC_QSPI_SERRLKUPA0_VALID register field value. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_CLR_MSK    0x7fffffff
/* The reset value of the ALT_ECC_QSPI_SERRLKUPA0_VALID register field. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_RESET      0x0
/* Extracts the ALT_ECC_QSPI_SERRLKUPA0_VALID field value from a register. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_ECC_QSPI_SERRLKUPA0_VALID register field value suitable for setting the register. */
#define ALT_ECC_QSPI_SERRLKUPA0_VALID_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_QSPI_SERRLKUPA0.
 */
struct ALT_ECC_QSPI_SERRLKUPA0_s
{
    const uint32_t  Address :  7;  /* ALT_ECC_QSPI_SERRLKUPA0_ADDR */
    uint32_t                : 24;  /* *UNDEFINED* */
    uint32_t        VALID   :  1;  /* ALT_ECC_QSPI_SERRLKUPA0_VALID */
};

/* The typedef declaration for register ALT_ECC_QSPI_SERRLKUPA0. */
typedef volatile struct ALT_ECC_QSPI_SERRLKUPA0_s  ALT_ECC_QSPI_SERRLKUPA0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_QSPI_SERRLKUPA0 register. */
#define ALT_ECC_QSPI_SERRLKUPA0_RESET       0x00000000
/* The byte offset of the ALT_ECC_QSPI_SERRLKUPA0 register from the beginning of the component. */
#define ALT_ECC_QSPI_SERRLKUPA0_OFST        0x90

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_ECC_QSPI.
 */
struct ALT_ECC_QSPI_s
{
    ALT_ECC_QSPI_IP_REV_ID_t     IP_REV_ID;             /* ALT_ECC_QSPI_IP_REV_ID */
    volatile uint32_t            _pad_0x4_0x7;          /* *UNDEFINED* */
    ALT_ECC_QSPI_CTL_t           CTRL;                  /* ALT_ECC_QSPI_CTL */
    ALT_ECC_QSPI_INITSTAT_t      INITSTAT;              /* ALT_ECC_QSPI_INITSTAT */
    ALT_ECC_QSPI_ERRINTEN_t      ERRINTEN;              /* ALT_ECC_QSPI_ERRINTEN */
    ALT_ECC_QSPI_ERRINTENS_t     ERRINTENS;             /* ALT_ECC_QSPI_ERRINTENS */
    ALT_ECC_QSPI_ERRINTENR_t     ERRINTENR;             /* ALT_ECC_QSPI_ERRINTENR */
    ALT_ECC_QSPI_INTMOD_t        INTMODE;               /* ALT_ECC_QSPI_INTMOD */
    ALT_ECC_QSPI_INTSTAT_t       INTSTAT;               /* ALT_ECC_QSPI_INTSTAT */
    ALT_ECC_QSPI_INTTEST_t       INTTEST;               /* ALT_ECC_QSPI_INTTEST */
    ALT_ECC_QSPI_MODSTAT_t       MODSTAT;               /* ALT_ECC_QSPI_MODSTAT */
    ALT_ECC_QSPI_DERRADDRA_t     DERRADDRA;             /* ALT_ECC_QSPI_DERRADDRA */
    ALT_ECC_QSPI_SERRADDRA_t     SERRADDRA;             /* ALT_ECC_QSPI_SERRADDRA */
    volatile uint32_t            _pad_0x34_0x3b[2];     /* *UNDEFINED* */
    ALT_ECC_QSPI_SERRCNTREG_t    SERRCNTREG;            /* ALT_ECC_QSPI_SERRCNTREG */
    ALT_ECC_QSPI_ADDRBUS_t       ECC_Addrbus;           /* ALT_ECC_QSPI_ADDRBUS */
    ALT_ECC_QSPI_RDATA0BUS_t     ECC_RData0bus;         /* ALT_ECC_QSPI_RDATA0BUS */
    ALT_ECC_QSPI_RDATA1BUS_t     ECC_RData1bus;         /* ALT_ECC_QSPI_RDATA1BUS */
    ALT_ECC_QSPI_RDATA2BUS_t     ECC_RData2bus;         /* ALT_ECC_QSPI_RDATA2BUS */
    ALT_ECC_QSPI_RDATA3BUS_t     ECC_RData3bus;         /* ALT_ECC_QSPI_RDATA3BUS */
    ALT_ECC_QSPI_WDATA0BUS_t     ECC_WData0bus;         /* ALT_ECC_QSPI_WDATA0BUS */
    ALT_ECC_QSPI_WDATA1BUS_t     ECC_WData1bus;         /* ALT_ECC_QSPI_WDATA1BUS */
    ALT_ECC_QSPI_WDATA2BUS_t     ECC_WData2bus;         /* ALT_ECC_QSPI_WDATA2BUS */
    ALT_ECC_QSPI_WDATA3BUS_t     ECC_WData3bus;         /* ALT_ECC_QSPI_WDATA3BUS */
    ALT_ECC_QSPI_RDATAECC0BUS_t  ECC_RDataecc0bus;      /* ALT_ECC_QSPI_RDATAECC0BUS */
    ALT_ECC_QSPI_RDATAECC1BUS_t  ECC_RDataecc1bus;      /* ALT_ECC_QSPI_RDATAECC1BUS */
    ALT_ECC_QSPI_WDATAECC0BUS_t  ECC_WDataecc0bus;      /* ALT_ECC_QSPI_WDATAECC0BUS */
    ALT_ECC_QSPI_WDATAECC1BUS_t  ECC_WDataecc1bus;      /* ALT_ECC_QSPI_WDATAECC1BUS */
    ALT_ECC_QSPI_DBYTECTL_t      ECC_dbytectrl;         /* ALT_ECC_QSPI_DBYTECTL */
    ALT_ECC_QSPI_ACCCTL_t        ECC_accctrl;           /* ALT_ECC_QSPI_ACCCTL */
    ALT_ECC_QSPI_STARTACC_t      ECC_startacc;          /* ALT_ECC_QSPI_STARTACC */
    ALT_ECC_QSPI_WDCTL_t         ECC_wdctrl;            /* ALT_ECC_QSPI_WDCTL */
    volatile uint32_t            _pad_0x84_0x8f[3];     /* *UNDEFINED* */
    ALT_ECC_QSPI_SERRLKUPA0_t    SERRLKUPA0;            /* ALT_ECC_QSPI_SERRLKUPA0 */
    volatile uint32_t            _pad_0x94_0x400[219];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_ECC_QSPI. */
typedef volatile struct ALT_ECC_QSPI_s  ALT_ECC_QSPI_t;
/* The struct declaration for the raw register contents of register group ALT_ECC_QSPI. */
struct ALT_ECC_QSPI_raw_s
{
    volatile uint32_t  IP_REV_ID;             /* ALT_ECC_QSPI_IP_REV_ID */
    uint32_t           _pad_0x4_0x7;          /* *UNDEFINED* */
    volatile uint32_t  CTRL;                  /* ALT_ECC_QSPI_CTL */
    volatile uint32_t  INITSTAT;              /* ALT_ECC_QSPI_INITSTAT */
    volatile uint32_t  ERRINTEN;              /* ALT_ECC_QSPI_ERRINTEN */
    volatile uint32_t  ERRINTENS;             /* ALT_ECC_QSPI_ERRINTENS */
    volatile uint32_t  ERRINTENR;             /* ALT_ECC_QSPI_ERRINTENR */
    volatile uint32_t  INTMODE;               /* ALT_ECC_QSPI_INTMOD */
    volatile uint32_t  INTSTAT;               /* ALT_ECC_QSPI_INTSTAT */
    volatile uint32_t  INTTEST;               /* ALT_ECC_QSPI_INTTEST */
    volatile uint32_t  MODSTAT;               /* ALT_ECC_QSPI_MODSTAT */
    volatile uint32_t  DERRADDRA;             /* ALT_ECC_QSPI_DERRADDRA */
    volatile uint32_t  SERRADDRA;             /* ALT_ECC_QSPI_SERRADDRA */
    uint32_t           _pad_0x34_0x3b[2];     /* *UNDEFINED* */
    volatile uint32_t  SERRCNTREG;            /* ALT_ECC_QSPI_SERRCNTREG */
    volatile uint32_t  ECC_Addrbus;           /* ALT_ECC_QSPI_ADDRBUS */
    volatile uint32_t  ECC_RData0bus;         /* ALT_ECC_QSPI_RDATA0BUS */
    volatile uint32_t  ECC_RData1bus;         /* ALT_ECC_QSPI_RDATA1BUS */
    volatile uint32_t  ECC_RData2bus;         /* ALT_ECC_QSPI_RDATA2BUS */
    volatile uint32_t  ECC_RData3bus;         /* ALT_ECC_QSPI_RDATA3BUS */
    volatile uint32_t  ECC_WData0bus;         /* ALT_ECC_QSPI_WDATA0BUS */
    volatile uint32_t  ECC_WData1bus;         /* ALT_ECC_QSPI_WDATA1BUS */
    volatile uint32_t  ECC_WData2bus;         /* ALT_ECC_QSPI_WDATA2BUS */
    volatile uint32_t  ECC_WData3bus;         /* ALT_ECC_QSPI_WDATA3BUS */
    volatile uint32_t  ECC_RDataecc0bus;      /* ALT_ECC_QSPI_RDATAECC0BUS */
    volatile uint32_t  ECC_RDataecc1bus;      /* ALT_ECC_QSPI_RDATAECC1BUS */
    volatile uint32_t  ECC_WDataecc0bus;      /* ALT_ECC_QSPI_WDATAECC0BUS */
    volatile uint32_t  ECC_WDataecc1bus;      /* ALT_ECC_QSPI_WDATAECC1BUS */
    volatile uint32_t  ECC_dbytectrl;         /* ALT_ECC_QSPI_DBYTECTL */
    volatile uint32_t  ECC_accctrl;           /* ALT_ECC_QSPI_ACCCTL */
    volatile uint32_t  ECC_startacc;          /* ALT_ECC_QSPI_STARTACC */
    volatile uint32_t  ECC_wdctrl;            /* ALT_ECC_QSPI_WDCTL */
    uint32_t           _pad_0x84_0x8f[3];     /* *UNDEFINED* */
    volatile uint32_t  SERRLKUPA0;            /* ALT_ECC_QSPI_SERRLKUPA0 */
    uint32_t           _pad_0x94_0x400[219];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_ECC_QSPI. */
typedef volatile struct ALT_ECC_QSPI_raw_s  ALT_ECC_QSPI_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_ECC_QSPI_H__ */

