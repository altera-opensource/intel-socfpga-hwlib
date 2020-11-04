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

/* Altera - ALT_PSI_PSI_USER */

#ifndef __ALT_SOCAL_PSI_H__
#define __ALT_SOCAL_PSI_H__

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
 * Component : PSI_PSI_USER
 * 
 */
/*
 * Register : LLI_Targ_Svc_PSI_User_TxWidthList
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                   
 * :--------|:-------|:--------|:---------------------------------------------------------------
 *  [11:0]  | R      | 0x201   | ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST
 *  [31:12] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : TXWIDTHLIST
 * 
 * Implemented Tx widths
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_MSB        11
/* The width in bits of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_WIDTH      12
/* The mask used to set the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_SET_MSK    0x00000fff
/* The mask used to clear the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_CLR_MSK    0xfffff000
/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_RESET      0x201
/* Extracts the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST field value from a register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_GET(value) (((value) & 0x00000fff) >> 0)
/* Produces a ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST register field value suitable for setting the register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST_SET(value) (((value) << 0) & 0x00000fff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST.
 */
struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_s
{
    const volatile uint32_t  TXWIDTHLIST : 12;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_TXWIDTHLIST */
    uint32_t                             : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST. */
typedef struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_s  ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_RESET       0x00000201
/* The byte offset of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST register from the beginning of the component. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_OFST        0x0

/*
 * Register : LLI_Targ_Svc_PSI_User_RxWidthList
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                   
 * :--------|:-------|:--------|:---------------------------------------------------------------
 *  [11:0]  | R      | 0x201   | ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST
 *  [31:12] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : RXWIDTHLIST
 * 
 * Implemented Rx widths
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_MSB        11
/* The width in bits of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_WIDTH      12
/* The mask used to set the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_SET_MSK    0x00000fff
/* The mask used to clear the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_CLR_MSK    0xfffff000
/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_RESET      0x201
/* Extracts the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST field value from a register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_GET(value) (((value) & 0x00000fff) >> 0)
/* Produces a ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST register field value suitable for setting the register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST_SET(value) (((value) << 0) & 0x00000fff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST.
 */
struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_s
{
    const volatile uint32_t  RXWIDTHLIST : 12;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RXWIDTHLIST */
    uint32_t                             : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST. */
typedef struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_s  ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_RESET       0x00000201
/* The byte offset of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST register from the beginning of the component. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_OFST        0x4

/*
 * Register : LLI_Targ_Svc_PSI_User_TxWidth
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH
 *  [31:4] | ???    | Unknown | *UNDEFINED*                                           
 * 
 */
/*
 * Field : TXWIDTH
 * 
 * Current Tx width
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_MSB        3
/* The width in bits of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_WIDTH      4
/* The mask used to set the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_RESET      0x0
/* Extracts the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH field value from a register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH register field value suitable for setting the register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH.
 */
struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_s
{
    volatile uint32_t  TXWIDTH :  4;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_TXWIDTH */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH. */
typedef struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_s  ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_RESET       0x00000000
/* The byte offset of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH register from the beginning of the component. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_OFST        0x8

/*
 * Register : LLI_Targ_Svc_PSI_User_WidthBusy
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [0]    | R      | Unknown | ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : WIDTHBUSY
 * 
 * Current TxWidth not yet effective on the PSI link
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_MSB        0
/* The width in bits of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY register field. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_WIDTH      1
/* The mask used to set the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY register field value. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY register field is UNKNOWN. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_RESET      0x0
/* Extracts the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY field value from a register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY register field value suitable for setting the register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY.
 */
struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_s
{
    const volatile uint32_t  WIDTHBUSY :  1;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_WIDTHBUSY */
    uint32_t                           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY. */
typedef struct ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_s  ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY register. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_RESET       0x00000000
/* The byte offset of the ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY register from the beginning of the component. */
#define ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_OFST        0xc

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PSI_PSI_USER.
 */
struct ALT_PSI_PSI_USER_s
{
    volatile ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST_t  LLI_Targ_Svc_PSI_User_TxWidthList;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST */
    volatile ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST_t  LLI_Targ_Svc_PSI_User_RxWidthList;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST */
    volatile ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH_t      LLI_Targ_Svc_PSI_User_TxWidth;      /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH */
    volatile ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY_t    LLI_Targ_Svc_PSI_User_WidthBusy;    /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY */
    volatile uint32_t                                              _pad_0x10_0x400[252];               /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PSI_PSI_USER. */
typedef struct ALT_PSI_PSI_USER_s  ALT_PSI_PSI_USER_t;
/* The struct declaration for the raw register contents of register group ALT_PSI_PSI_USER. */
struct ALT_PSI_PSI_USER_raw_s
{
    volatile uint32_t  LLI_Targ_Svc_PSI_User_TxWidthList;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTHLIST */
    volatile uint32_t  LLI_Targ_Svc_PSI_User_RxWidthList;  /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_RXWIDTHLIST */
    volatile uint32_t  LLI_Targ_Svc_PSI_User_TxWidth;      /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_TXWIDTH */
    volatile uint32_t  LLI_Targ_Svc_PSI_User_WidthBusy;    /* ALT_PSI_PSI_USER_LLI_TARG_SVC_PSI_USER_WIDTHBUSY */
    volatile uint32_t  _pad_0x10_0x400[252];               /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PSI_PSI_USER. */
typedef struct ALT_PSI_PSI_USER_raw_s  ALT_PSI_PSI_USER_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : PSI_LLI_CTRL
 * 
 */
/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_LL_Initiator_socket_present
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                   
 * :-------|:-------|:--------|:-----------------------------------------------------------------------------------------------
 *  [0]    | R      | 0x1     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                                   
 * 
 */
/*
 * Field : LL_INITIATOR_SOCKET_PRESENT
 * 
 * An Initiator socket is present on the TL_LL_SAP when is at '1'. (Capability)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_RESET      0x1
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_s
{
    const volatile uint32_t  LL_INITIATOR_SOCKET_PRESENT :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_LL_INITIATOR_SOCKET_PRESENT */
    uint32_t                                             : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_OFST        0x0

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_LL_Target_socket_present
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                             
 * :-------|:-------|:--------|:-----------------------------------------------------------------------------------------
 *  [0]    | R      | 0x1     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                             
 * 
 */
/*
 * Field : LL_TARGET_SOCKET_PRESENT
 * 
 * A Target socket is present on the TL_LL_SAP when is at '1'. (Capability)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_RESET      0x1
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_s
{
    const volatile uint32_t  LL_TARGET_SOCKET_PRESENT :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_LL_TARGET_SOCKET_PRESENT */
    uint32_t                                          : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_OFST        0x4

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_BE_Initiator_socket_present
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                   
 * :-------|:-------|:--------|:-----------------------------------------------------------------------------------------------
 *  [0]    | R      | 0x1     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                                   
 * 
 */
/*
 * Field : BE_INITIATOR_SOCKET_PRESENT
 * 
 * An Initiator socket is present on the TL_BE_SAP when is at '1'. (Capability)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_RESET      0x1
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_s
{
    const volatile uint32_t  BE_INITIATOR_SOCKET_PRESENT :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_BE_INITIATOR_SOCKET_PRESENT */
    uint32_t                                             : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_OFST        0x8

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_BE_Target_socket_present
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                             
 * :-------|:-------|:--------|:-----------------------------------------------------------------------------------------
 *  [0]    | R      | 0x1     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                             
 * 
 */
/*
 * Field : BE_TARGET_SOCKET_PRESENT
 * 
 * A Target socket is present on the TL_BE_SAP when is at '1'. (Capability)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_RESET      0x1
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_s
{
    const volatile uint32_t  BE_TARGET_SOCKET_PRESENT :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_BE_TARGET_SOCKET_PRESENT */
    uint32_t                                          : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_OFST        0xc

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_SVC_Initiator_socket_present
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                     
 * :-------|:-------|:--------|:-------------------------------------------------------------------------------------------------
 *  [0]    | R      | 0x1     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                                     
 * 
 */
/*
 * Field : SVC_INITIATOR_SOCKET_PRESENT
 * 
 * An Initiator socket is present on the TL_SVC_SAP when is at '1'. (Capability)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_RESET      0x1
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_s
{
    const volatile uint32_t  SVC_INITIATOR_SOCKET_PRESENT :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_SVC_INITIATOR_SOCKET_PRESENT */
    uint32_t                                              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_OFST        0x10

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_LL_TC_disable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : LL_TC_DISABLE
 * 
 * Disable the LL traffic class when set the value is set to '1'.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_s
{
    volatile uint32_t  LL_TC_DISABLE :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_LL_TC_DISABLE */
    uint32_t                         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_OFST        0x100

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_BE_TC_disable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : BE_TC_DISABLE
 * 
 * Disable the BE traffic class when set the value is set to '1'.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_s
{
    volatile uint32_t  BE_TC_DISABLE :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_BE_TC_DISABLE */
    uint32_t                         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_OFST        0x104

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_CSA_System_Status
 * 
 * Status of the CSA_System.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                     
 * :-------|:-------|:--------|:---------------------------------------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED            
 *  [1]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE       
 *  [2]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL         
 *  [3]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED
 *  [4]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION  
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                                                     
 * 
 */
/*
 * Field : LLI_MOUNTED
 * 
 * Status of LLI mounted state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : MASTER_NOT_SLAVE
 * 
 * Status of the LLI master/slave setting.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_MSB        1
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LLI_MOUNT_CTRL
 * 
 * Status of the LLI mount control.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_MSB        2
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_SET_MSK    0x00000004
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RESET_ON_ERROR_DETECTED
 * 
 * Status of the LLI reset on error detection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_MSB        3
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_SET_MSK    0x00000008
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_CLR_MSK    0xfffffff7
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : IPC_STATUS_INDICATION
 * 
 * Status of the LLI IPC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_MSB        4
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_SET_MSK    0x00000010
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_CLR_MSK    0xffffffef
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION_SET(value) (((value) << 4) & 0x00000010)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_s
{
    const volatile uint32_t  LLI_MOUNTED             :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNTED */
    const volatile uint32_t  MASTER_NOT_SLAVE        :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_MASTER_NOT_SLAVE */
    const volatile uint32_t  LLI_MOUNT_CTRL          :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_LLI_MOUNT_CTRL */
    const volatile uint32_t  RESET_ON_ERROR_DETECTED :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET_ON_ERROR_DETECTED */
    const volatile uint32_t  IPC_STATUS_INDICATION   :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_IPC_STATUS_INDICATION */
    uint32_t                                         : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_OFST        0x108

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_CSA_System_Set
 * 
 * The bit fields of the CSA_System are set by writing a '1' in the desired field
 * in the CSA_System_Set attribute.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                  
 * :-------|:-------|:--------|:------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED            
 *  [1]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE       
 *  [2]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL         
 *  [3]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED
 *  [4]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION  
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                                                  
 * 
 */
/*
 * Field : LLI_MOUNTED
 * 
 * Sets LLI_Mounted.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : MASTER_NOT_SLAVE
 * 
 * Sets Master_Not_Slave.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_MSB        1
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LLI_MOUNT_CTRL
 * 
 * Sets LLI_Mount_CTRL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_MSB        2
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_SET_MSK    0x00000004
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RESET_ON_ERROR_DETECTED
 * 
 * Sets Reset_On_Error_Detected.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_MSB        3
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_SET_MSK    0x00000008
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_CLR_MSK    0xfffffff7
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : IPC_STATUS_INDICATION
 * 
 * Sets IPC_Status_Indication.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_MSB        4
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_SET_MSK    0x00000010
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_CLR_MSK    0xffffffef
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION_SET(value) (((value) << 4) & 0x00000010)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_s
{
    volatile uint32_t  LLI_MOUNTED             :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNTED */
    volatile uint32_t  MASTER_NOT_SLAVE        :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_MASTER_NOT_SLAVE */
    volatile uint32_t  LLI_MOUNT_CTRL          :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_LLI_MOUNT_CTRL */
    volatile uint32_t  RESET_ON_ERROR_DETECTED :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET_ON_ERROR_DETECTED */
    volatile uint32_t  IPC_STATUS_INDICATION   :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_IPC_STATUS_INDICATION */
    uint32_t                                   : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_OFST        0x10c

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_CSA_System_Clear
 * 
 * The bit fields of the CSA_System are cleared by writing a '1' in the desired
 * field in the CSA_System_Clear attribute.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                    
 * :-------|:-------|:--------|:--------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED            
 *  [1]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE       
 *  [2]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL         
 *  [3]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED
 *  [4]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION  
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                                                    
 * 
 */
/*
 * Field : LLI_MOUNTED
 * 
 * Clears LLI_Mounted.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : MASTER_NOT_SLAVE
 * 
 * Clears Master_Not_Slave.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_MSB        1
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LLI_MOUNT_CTRL
 * 
 * Clears LLI_Mount_CTRL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_MSB        2
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_SET_MSK    0x00000004
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RESET_ON_ERROR_DETECTED
 * 
 * Clears Reset_On_Error_Detected.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_MSB        3
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_SET_MSK    0x00000008
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_CLR_MSK    0xfffffff7
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : IPC_STATUS_INDICATION
 * 
 * Clears IPC_Status_Indication.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_MSB        4
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_SET_MSK    0x00000010
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_CLR_MSK    0xffffffef
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION_SET(value) (((value) << 4) & 0x00000010)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_s
{
    volatile uint32_t  LLI_MOUNTED             :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNTED */
    volatile uint32_t  MASTER_NOT_SLAVE        :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_MASTER_NOT_SLAVE */
    volatile uint32_t  LLI_MOUNT_CTRL          :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_LLI_MOUNT_CTRL */
    volatile uint32_t  RESET_ON_ERROR_DETECTED :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET_ON_ERROR_DETECTED */
    volatile uint32_t  IPC_STATUS_INDICATION   :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_IPC_STATUS_INDICATION */
    uint32_t                                   : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_OFST        0x110

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_TL_Address_Mode
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                           
 * :-------|:-------|:--------|:-----------------------------------------------------------------------
 *  [0]    | RW     | 0x1     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                           
 * 
 */
/*
 * Field : TL_ADDRESS_MODE
 * 
 * When set to 1, extend the address to 40 bits.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_RESET      0x1
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_s
{
    volatile uint32_t  TL_ADDRESS_MODE :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_TL_ADDRESS_MODE */
    uint32_t                           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_OFST        0x114

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_LL_PHIT36_enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                             
 * :-------|:-------|:--------|:-------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                             
 * 
 */
/*
 * Field : LL_PHIT36_ENABLE
 * 
 * When set to 1, the LLI IP is allowed to generate PHIT-36 from LL TC traffic.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_s
{
    volatile uint32_t  LL_PHIT36_ENABLE :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_LL_PHIT36_ENABLE */
    uint32_t                            : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_OFST        0x118

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_BE_PHIT36_enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                             
 * :-------|:-------|:--------|:-------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                             
 * 
 */
/*
 * Field : BE_PHIT36_ENABLE
 * 
 * When set to 1, the LLI IP is allowed to generate PHIT-36 from BE TC traffic.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_s
{
    volatile uint32_t  BE_PHIT36_ENABLE :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_BE_PHIT36_ENABLE */
    uint32_t                            : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_OFST        0x11c

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_WakeUp_Latency_Bound
 * 
 * Attribute for communicating the Wakeup latency bound.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                             
 * :--------|:-------|:--------|:-----------------------------------------------------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND       
 *  [2:1]   | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE         
 *  [7:3]   | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED                    
 *  [15:8]  | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE   
 *  [16]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES          
 *  [17]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP             
 *  [18]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP             
 *  [19]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP
 *  [31:20] | ???    | Unknown | *UNDEFINED*                                                                             
 * 
 */
/*
 * Field : ACTIVATE_WAKEUP_BOUND
 * 
 * Activates the bits [15:1] in the Wake up bound constraint attribute.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WAKE_UP_BOUND_VALUE
 * 
 * Wake up bound Value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_MSB        2
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_WIDTH      2
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_SET_MSK    0x00000006
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_CLR_MSK    0xfffffff9
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_GET(value) (((value) & 0x00000006) >> 1)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE_SET(value) (((value) << 1) & 0x00000006)

/*
 * Field : RESERVED
 * 
 * Reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_MSB        7
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_SET_MSK    0x000000f8
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_CLR_MSK    0xffffff07
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_GET(value) (((value) & 0x000000f8) >> 3)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED_SET(value) (((value) << 3) & 0x000000f8)

/*
 * Field : PROPRIETARY_WAKE_UP_VALUE
 * 
 * Proprietary Wake up value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_MSB        15
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_WIDTH      8
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_CLR_MSK    0xffff00ff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ACTIVATE_RESOURCES
 * 
 * Activates the bits [19:17] in the Wake up bound constraint attribute.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_MSB        16
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_SET_MSK    0x00010000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LL_PATH_WAKE_UP
 * 
 * Wake up LL path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_MSB        17
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_SET_MSK    0x00020000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_CLR_MSK    0xfffdffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : BE_PATH_WAKE_UP
 * 
 * Wake up BE path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_MSB        18
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_SET_MSK    0x00040000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_CLR_MSK    0xfffbffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : INTERCONNECT_AND_MPU_WAKE_UP
 * 
 * Wake up Interconnect and MPU.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_MSB        19
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_SET_MSK    0x00080000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP_SET(value) (((value) << 19) & 0x00080000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_s
{
    volatile uint32_t        ACTIVATE_WAKEUP_BOUND        :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_WAKEUP_BOUND */
    volatile uint32_t        WAKE_UP_BOUND_VALUE          :  2;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_WAKE_UP_BOUND_VALUE */
    const volatile uint32_t  RESERVED                     :  5;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESERVED */
    volatile uint32_t        PROPRIETARY_WAKE_UP_VALUE    :  8;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_PROPRIETARY_WAKE_UP_VALUE */
    volatile uint32_t        ACTIVATE_RESOURCES           :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_ACTIVATE_RESOURCES */
    volatile uint32_t        LL_PATH_WAKE_UP              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_LL_PATH_WAKE_UP */
    volatile uint32_t        BE_PATH_WAKE_UP              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_BE_PATH_WAKE_UP */
    volatile uint32_t        INTERCONNECT_AND_MPU_WAKE_UP :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_INTERCONNECT_AND_MPU_WAKE_UP */
    uint32_t                                              : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_OFST        0x120

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOff
 * 
 * Attribute requesting powering off a Resource.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                            
 * :--------|:-------|:--------|:----------------------------------------------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED                      
 *  [16]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES            
 *  [17]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF             
 *  [18]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF             
 *  [19]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF
 *  [31:20] | ???    | Unknown | *UNDEFINED*                                                                            
 * 
 */
/*
 * Field : RESERVED
 * 
 * Reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_MSB        15
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_WIDTH      16
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_CLR_MSK    0xffff0000
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : ACTIVATE_RESOURCES
 * 
 * deactivates the bits [19:17].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_MSB        16
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_SET_MSK    0x00010000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LL_PATH_POWER_OFF
 * 
 * Power off LL path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_MSB        17
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_SET_MSK    0x00020000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_CLR_MSK    0xfffdffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : BE_PATH_POWER_OFF
 * 
 * Power off BE path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_MSB        18
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_SET_MSK    0x00040000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_CLR_MSK    0xfffbffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : INTERCONNECT_AND_MPU_POWER_OFF
 * 
 * Power off Interconnect and MPU.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_MSB        19
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_SET_MSK    0x00080000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF_SET(value) (((value) << 19) & 0x00080000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_s
{
    const volatile uint32_t  RESERVED                       : 16;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESERVED */
    volatile uint32_t        ACTIVATE_RESOURCES             :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_ACTIVATE_RESOURCES */
    volatile uint32_t        LL_PATH_POWER_OFF              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_LL_PATH_POWER_OFF */
    volatile uint32_t        BE_PATH_POWER_OFF              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_BE_PATH_POWER_OFF */
    volatile uint32_t        INTERCONNECT_AND_MPU_POWER_OFF :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_INTERCONNECT_AND_MPU_POWER_OFF */
    uint32_t                                                : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_OFST        0x124

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn
 * 
 * Attribute requesting powering on a Resource.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                          
 * :--------|:-------|:--------|:--------------------------------------------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED                     
 *  [16]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES           
 *  [17]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON             
 *  [18]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON             
 *  [19]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON
 *  [31:20] | ???    | Unknown | *UNDEFINED*                                                                          
 * 
 */
/*
 * Field : RESERVED
 * 
 * Reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_MSB        15
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_WIDTH      16
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_CLR_MSK    0xffff0000
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : ACTIVATE_RESOURCES
 * 
 * activates the bits [19:17].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_MSB        16
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_SET_MSK    0x00010000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LL_PATH_POWER_ON
 * 
 * Power on LL path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_MSB        17
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_SET_MSK    0x00020000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_CLR_MSK    0xfffdffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : BE_PATH_POWER_ON
 * 
 * Power on BE path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_MSB        18
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_SET_MSK    0x00040000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_CLR_MSK    0xfffbffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : INTERCONNECT_AND_MPU_POWER_ON
 * 
 * Power on Interconnect and MPU.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_MSB        19
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_SET_MSK    0x00080000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON_SET(value) (((value) << 19) & 0x00080000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_s
{
    const volatile uint32_t  RESERVED                      : 16;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESERVED */
    volatile uint32_t        ACTIVATE_RESOURCES            :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACTIVATE_RESOURCES */
    volatile uint32_t        LL_PATH_POWER_ON              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_LL_PATH_POWER_ON */
    volatile uint32_t        BE_PATH_POWER_ON              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_BE_PATH_POWER_ON */
    volatile uint32_t        INTERCONNECT_AND_MPU_POWER_ON :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_INTERCONNECT_AND_MPU_POWER_ON */
    uint32_t                                               : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_OFST        0x128

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Status
 * 
 * Attribute for receiving acknowledge for powering on request for a particular
 * request.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                         
 * :-------|:-------|:--------|:-----------------------------------------------------------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK             
 *  [1]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK             
 *  [2]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                                                         
 * 
 */
/*
 * Field : LL_PATH_POWER_ON_ACK
 * 
 * Status Ack for request to power on LL path on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : BE_PATH_POWER_ON_ACK
 * 
 * Status Ack for request to power on BE path on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_MSB        1
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : INTERCONNECT_AND_MPU_POWER_ON_ACK
 * 
 * Status Ack for request to power on Interconnect and MPU on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_MSB        2
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_SET_MSK    0x00000004
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_s
{
    const volatile uint32_t  LL_PATH_POWER_ON_ACK              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_LL_PATH_POWER_ON_ACK */
    const volatile uint32_t  BE_PATH_POWER_ON_ACK              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_BE_PATH_POWER_ON_ACK */
    const volatile uint32_t  INTERCONNECT_AND_MPU_POWER_ON_ACK :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_INTERCONNECT_AND_MPU_POWER_ON_ACK */
    uint32_t                                                   : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_OFST        0x12c

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Set
 * 
 * The bit fields of Resource_PowerOn_Ack are set to '1' by setting the desired bit
 * field in Resource_PowerOn_Ack_Set to '1'.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                      
 * :-------|:-------|:--------|:--------------------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK             
 *  [1]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK             
 *  [2]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                                                      
 * 
 */
/*
 * Field : LL_PATH_POWER_ON_ACK
 * 
 * Set Ack for request to power on LL path on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : BE_PATH_POWER_ON_ACK
 * 
 * Set Ack for request to power on BE path on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_MSB        1
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : INTERCONNECT_AND_MPU_POWER_ON_ACK
 * 
 * Set Ack for request to power on Interconnect and MPU on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_MSB        2
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_SET_MSK    0x00000004
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_s
{
    volatile uint32_t  LL_PATH_POWER_ON_ACK              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_LL_PATH_POWER_ON_ACK */
    volatile uint32_t  BE_PATH_POWER_ON_ACK              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_BE_PATH_POWER_ON_ACK */
    volatile uint32_t  INTERCONNECT_AND_MPU_POWER_ON_ACK :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_INTERCONNECT_AND_MPU_POWER_ON_ACK */
    uint32_t                                             : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_OFST        0x130

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Clear
 * 
 * The bit fields of Resource_PowerOn_Ack are set to '0' by setting the desired bit
 * field in Resource_PowerOn_Ack_Clear to '1'.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                        
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK             
 *  [1]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK             
 *  [2]    | RW     | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                                                        
 * 
 */
/*
 * Field : LL_PATH_POWER_ON_ACK
 * 
 * Clear Ack for request to power on LL path on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_MSB        0
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : BE_PATH_POWER_ON_ACK
 * 
 * Clear Ack for request to power on BE path on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_MSB        1
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : INTERCONNECT_AND_MPU_POWER_ON_ACK
 * 
 * Clear Ack for request to power on Interconnect and MPU on remote chip.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_MSB        2
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_SET_MSK    0x00000004
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_s
{
    volatile uint32_t  LL_PATH_POWER_ON_ACK              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_LL_PATH_POWER_ON_ACK */
    volatile uint32_t  BE_PATH_POWER_ON_ACK              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_BE_PATH_POWER_ON_ACK */
    volatile uint32_t  INTERCONNECT_AND_MPU_POWER_ON_ACK :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_INTERCONNECT_AND_MPU_POWER_ON_ACK */
    uint32_t                                             : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_OFST        0x134

/*
 * Register : LLI_Targ_Svc_LLI_Ctrl_Resource_PowerStatus
 * 
 * Get the status resulting from a write operation in the Resource_PowerOff and
 * Resource_PowerOn attributes.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                              
 * :--------|:-------|:--------|:------------------------------------------------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED                     
 *  [16]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES           
 *  [17]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON             
 *  [18]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON             
 *  [19]    | R      | 0x0     | ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON
 *  [31:20] | ???    | Unknown | *UNDEFINED*                                                                              
 * 
 */
/*
 * Field : RESERVED
 * 
 * Reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_MSB        15
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_WIDTH      16
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_CLR_MSK    0xffff0000
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : ACTIVATE_RESOURCES
 * 
 * Validity of bits [19:17].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_MSB        16
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_SET_MSK    0x00010000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LL_PATH_POWER_ON
 * 
 * Power status LL path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_MSB        17
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_SET_MSK    0x00020000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_CLR_MSK    0xfffdffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : BE_PATH_POWER_ON
 * 
 * Power status BE path.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_MSB        18
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_SET_MSK    0x00040000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_CLR_MSK    0xfffbffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : INTERCONNECT_AND_MPU_POWER_ON
 * 
 * Power status Interconnect and MPU.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_MSB        19
/* The width in bits of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_SET_MSK    0x00080000
/* The mask used to clear the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON register field value. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON register field. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_RESET      0x0
/* Extracts the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON field value from a register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON register field value suitable for setting the register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON_SET(value) (((value) << 19) & 0x00080000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS.
 */
struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_s
{
    const volatile uint32_t  RESERVED                      : 16;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESERVED */
    const volatile uint32_t  ACTIVATE_RESOURCES            :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_ACTIVATE_RESOURCES */
    const volatile uint32_t  LL_PATH_POWER_ON              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_LL_PATH_POWER_ON */
    const volatile uint32_t  BE_PATH_POWER_ON              :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_BE_PATH_POWER_ON */
    const volatile uint32_t  INTERCONNECT_AND_MPU_POWER_ON :  1;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_INTERCONNECT_AND_MPU_POWER_ON */
    uint32_t                                               : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS. */
typedef struct ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_s  ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS register. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS register from the beginning of the component. */
#define ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_OFST        0x138

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PSI_LLI_CTRL.
 */
struct ALT_PSI_LLI_CTRL_s
{
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT_t   LLI_Targ_Svc_LLI_Ctrl_LL_Initiator_socket_present;   /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT_t      LLI_Targ_Svc_LLI_Ctrl_LL_Target_socket_present;      /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT_t   LLI_Targ_Svc_LLI_Ctrl_BE_Initiator_socket_present;   /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT_t      LLI_Targ_Svc_LLI_Ctrl_BE_Target_socket_present;      /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT_t  LLI_Targ_Svc_LLI_Ctrl_SVC_Initiator_socket_present;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT */
    volatile uint32_t                                                               _pad_0x14_0xff[59];                                  /* *UNDEFINED* */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE_t                 LLI_Targ_Svc_LLI_Ctrl_LL_TC_disable;                 /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE_t                 LLI_Targ_Svc_LLI_Ctrl_BE_TC_disable;                 /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS_t             LLI_Targ_Svc_LLI_Ctrl_CSA_System_Status;             /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET_t                LLI_Targ_Svc_LLI_Ctrl_CSA_System_Set;                /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR_t              LLI_Targ_Svc_LLI_Ctrl_CSA_System_Clear;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE_t               LLI_Targ_Svc_LLI_Ctrl_TL_Address_Mode;               /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE_t              LLI_Targ_Svc_LLI_Ctrl_LL_PHIT36_enable;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE_t              LLI_Targ_Svc_LLI_Ctrl_BE_PHIT36_enable;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND_t          LLI_Targ_Svc_LLI_Ctrl_WakeUp_Latency_Bound;          /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF_t             LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOff;             /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_t              LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS_t   LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Status;   /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET_t      LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Set;      /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR_t    LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Clear;    /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR */
    volatile ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS_t          LLI_Targ_Svc_LLI_Ctrl_Resource_PowerStatus;          /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS */
    volatile uint32_t                                                               _pad_0x13c_0x800[433];                               /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PSI_LLI_CTRL. */
typedef struct ALT_PSI_LLI_CTRL_s  ALT_PSI_LLI_CTRL_t;
/* The struct declaration for the raw register contents of register group ALT_PSI_LLI_CTRL. */
struct ALT_PSI_LLI_CTRL_raw_s
{
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_LL_Initiator_socket_present;   /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_INITIATOR_SOCKET_PRESENT */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_LL_Target_socket_present;      /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TARGET_SOCKET_PRESENT */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_BE_Initiator_socket_present;   /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_INITIATOR_SOCKET_PRESENT */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_BE_Target_socket_present;      /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TARGET_SOCKET_PRESENT */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_SVC_Initiator_socket_present;  /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_SVC_INITIATOR_SOCKET_PRESENT */
    volatile uint32_t  _pad_0x14_0xff[59];                                  /* *UNDEFINED* */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_LL_TC_disable;                 /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_TC_DISABLE */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_BE_TC_disable;                 /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_TC_DISABLE */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_CSA_System_Status;             /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_STATUS */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_CSA_System_Set;                /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_SET */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_CSA_System_Clear;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_CSA_SYSTEM_CLEAR */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_TL_Address_Mode;               /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_TL_ADDRESS_MODE */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_LL_PHIT36_enable;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_LL_PHIT36_ENABLE */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_BE_PHIT36_enable;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_BE_PHIT36_ENABLE */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_WakeUp_Latency_Bound;          /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_WAKEUP_LATENCY_BOUND */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOff;             /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWEROFF */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn;              /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Status;   /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_STATUS */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Set;      /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_SET */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_Resource_PowerOn_Ack_Clear;    /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERON_ACK_CLEAR */
    volatile uint32_t  LLI_Targ_Svc_LLI_Ctrl_Resource_PowerStatus;          /* ALT_PSI_LLI_CTRL_LLI_TARG_SVC_LLI_CTRL_RESOURCE_POWERSTATUS */
    volatile uint32_t  _pad_0x13c_0x800[433];                               /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PSI_LLI_CTRL. */
typedef struct ALT_PSI_LLI_CTRL_raw_s  ALT_PSI_LLI_CTRL_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : PSI_LLI_USER
 * 
 */
/*
 * Register : LLI_Targ_Svc_LLI_User_ArbiterMode
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [1:0]  | RW     | 0x1     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : ARBITERMODE
 * 
 * This 2 bits register indicates the sub-priority between channels 0 (Low Latency
 * requests) and 1 (Low Latency responses). This value must be constant when LLI is
 * mounted. Values are: 0 = Fixed priority for channel 0; 1 = Fixed priority for
 * channel 1; 2 and 3: Rotating priority.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_MSB        1
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_WIDTH      2
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_SET_MSK    0x00000003
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_CLR_MSK    0xfffffffc
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_RESET      0x1
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_s
{
    volatile uint32_t  ARBITERMODE :  2;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_ARBITERMODE */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_OFST        0x0

/*
 * Register : LLI_Targ_Svc_LLI_User_CreditDelay
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [7:0]  | RW     | 0x0     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY
 *  [31:8] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : CREDITDELAY
 * 
 * This 8 bits register sets the number of inactivity cycles before a low priority
 * Credit Frame may be sent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_MSB        7
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_WIDTH      8
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_SET_MSK    0x000000ff
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_CLR_MSK    0xffffff00
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_RESET      0x0
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_s
{
    volatile uint32_t  CREDITDELAY :  8;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_CREDITDELAY */
    uint32_t                       : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_OFST        0x4

/*
 * Register : LLI_Targ_Svc_LLI_User_MaskSystemIrq
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : MASKSYSTEMIRQ
 * 
 * Mask vector for LLI DL and TL interrupts on output signal SystemIrqLevel.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_MSB        0
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_WIDTH      1
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_RESET      0x0
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_s
{
    volatile uint32_t  MASKSYSTEMIRQ :  1;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_MASKSYSTEMIRQ */
    uint32_t                         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_OFST        0x8

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x3e    | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER0
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 0.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_RESET      0x3e
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_s
{
    volatile uint32_t  DATALINKUSER0 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_DATALINKUSER0 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_RESET       0x0000003e
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_OFST        0x80

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x3e    | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER1
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 1.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_RESET      0x3e
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_s
{
    volatile uint32_t  DATALINKUSER1 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_DATALINKUSER1 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_RESET       0x0000003e
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_OFST        0x84

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x3e    | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER2
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 2.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_RESET      0x3e
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_s
{
    volatile uint32_t  DATALINKUSER2 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_DATALINKUSER2 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_RESET       0x0000003e
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_OFST        0x88

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x3e    | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER3
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 3.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_RESET      0x3e
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_s
{
    volatile uint32_t  DATALINKUSER3 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_DATALINKUSER3 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_RESET       0x0000003e
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_OFST        0x8c

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER4
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 4.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_RESET      0x0
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_s
{
    volatile uint32_t  DATALINKUSER4 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_DATALINKUSER4 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_OFST        0x90

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x1     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER5
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 5.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_RESET      0x1
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_s
{
    volatile uint32_t  DATALINKUSER5 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_DATALINKUSER5 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_RESET       0x00000001
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_OFST        0x94

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x2     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER6
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 6.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_RESET      0x2
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_s
{
    volatile uint32_t  DATALINKUSER6 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_DATALINKUSER6 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_RESET       0x00000002
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_OFST        0x98

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x3     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER7
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 7.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_RESET      0x3
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_s
{
    volatile uint32_t  DATALINKUSER7 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_DATALINKUSER7 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_RESET       0x00000003
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_OFST        0x9c

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x4     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER8
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 8.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_RESET      0x4
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_s
{
    volatile uint32_t  DATALINKUSER8 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_DATALINKUSER8 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_RESET       0x00000004
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_OFST        0xa0

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [5:0]  | RW     | 0x5     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : DATALINKUSER9
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 9.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_RESET      0x5
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_s
{
    volatile uint32_t  DATALINKUSER9 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_DATALINKUSER9 */
    uint32_t                         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_RESET       0x00000005
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_OFST        0xa4

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser10
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0x6     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKUSER10
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 10.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_RESET      0x6
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_s
{
    volatile uint32_t  DATALINKUSER10 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_DATALINKUSER10 */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_RESET       0x00000006
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_OFST        0xa8

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser11
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0x7     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKUSER11
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 11.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_RESET      0x7
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_s
{
    volatile uint32_t  DATALINKUSER11 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_DATALINKUSER11 */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_RESET       0x00000007
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_OFST        0xac

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser12
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0x8     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKUSER12
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 12.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_RESET      0x8
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_s
{
    volatile uint32_t  DATALINKUSER12 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_DATALINKUSER12 */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_RESET       0x00000008
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_OFST        0xb0

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser13
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0x9     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKUSER13
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 13.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_RESET      0x9
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_s
{
    volatile uint32_t  DATALINKUSER13 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_DATALINKUSER13 */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_RESET       0x00000009
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_OFST        0xb4

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser14
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0xa     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKUSER14
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 14.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_RESET      0xa
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_s
{
    volatile uint32_t  DATALINKUSER14 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_DATALINKUSER14 */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_RESET       0x0000000a
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_OFST        0xb8

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser15
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0xb     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKUSER15
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 15.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_RESET      0xb
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_s
{
    volatile uint32_t  DATALINKUSER15 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_DATALINKUSER15 */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_RESET       0x0000000b
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_OFST        0xbc

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkUser16
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0x20    | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKUSER16
 * 
 * This 6 bits register sets the slave interfaces source of the LLI User bit 16.
 * When the selected source bit is not implemented or the register value is not
 * assigned, the LLI User bit is set to 0. Each register (r) uses the following
 * value (v) encoding. 0x00 to 0x1F: LLI.User[r] <<= Req.User[v]; 0x20 to 0x27:
 * LLI.User[r] <<= Req.Security[v-0x20]; 0x30 to 0x31: LLI.User[r] <<=
 * Req.Urgency[v-0x30]; 0x3E: LLI.User[r] <<= 0
 * 
 * 0x3F LLI.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_RESET      0x20
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_s
{
    volatile uint32_t  DATALINKUSER16 :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_DATALINKUSER16 */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_RESET       0x00000020
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_OFST        0xc0

/*
 * Register : LLI_Targ_Svc_LLI_User_DataLinkPosted
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                         
 * :-------|:-------|:--------|:---------------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : DATALINKPOSTED
 * 
 * This 6 bits register sets the slave interfaces source of the LLI WRP Opcode, and
 * this bit is only significant for Writes. When the selected source bit is not
 * implemented or the register value is not assigned, the Non-Posted Opcode is
 * used. This register uses the following value (v) encoding: 0x00 to 0x20: LLI.WRP
 * <<= Targ.Req.User[v]; 0x3E LLI.WRP <<= 0; 0x3F LLI.WRP <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_MSB        5
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_WIDTH      6
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_RESET      0x0
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_s
{
    volatile uint32_t  DATALINKPOSTED :  6;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_DATALINKPOSTED */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_RESET       0x00000000
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_OFST        0xfc

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0x4     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER0
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_RESET      0x4
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_s
{
    volatile uint32_t  GENUSER0 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_GENUSER0 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_RESET       0x00000004
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_OFST        0x100

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0x5     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER1
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_RESET      0x5
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_s
{
    volatile uint32_t  GENUSER1 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_GENUSER1 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_RESET       0x00000005
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_OFST        0x104

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0x6     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER2
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_RESET      0x6
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_s
{
    volatile uint32_t  GENUSER2 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_GENUSER2 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_RESET       0x00000006
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_OFST        0x108

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0x7     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER3
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_RESET      0x7
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_s
{
    volatile uint32_t  GENUSER3 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_GENUSER3 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_RESET       0x00000007
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_OFST        0x10c

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0x8     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER4
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_RESET      0x8
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_s
{
    volatile uint32_t  GENUSER4 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_GENUSER4 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_RESET       0x00000008
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_OFST        0x110

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0x9     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER5
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_RESET      0x9
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_s
{
    volatile uint32_t  GENUSER5 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_GENUSER5 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_RESET       0x00000009
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_OFST        0x114

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0xa     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER6
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_RESET      0xa
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_s
{
    volatile uint32_t  GENUSER6 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_GENUSER6 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_RESET       0x0000000a
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_OFST        0x118

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0xb     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER7
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_RESET      0xb
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_s
{
    volatile uint32_t  GENUSER7 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_GENUSER7 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_RESET       0x0000000b
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_OFST        0x11c

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0xc     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER8
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_RESET      0xc
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_s
{
    volatile uint32_t  GENUSER8 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_GENUSER8 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_RESET       0x0000000c
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_OFST        0x120

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [4:0]  | RW     | 0xd     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : GENUSER9
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_RESET      0xd
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_s
{
    volatile uint32_t  GENUSER9 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_GENUSER9 */
    uint32_t                    : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_RESET       0x0000000d
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_OFST        0x124

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser10
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [4:0]  | RW     | 0xe     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : GENUSER10
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_RESET      0xe
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_s
{
    volatile uint32_t  GENUSER10 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_GENUSER10 */
    uint32_t                     : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_RESET       0x0000000e
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_OFST        0x128

/*
 * Register : LLI_Targ_Svc_LLI_User_GenUser11
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [4:0]  | RW     | 0xf     | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : GENUSER11
 * 
 * This 5 bits register sets the source of the corresponding Req.User bit on master
 * interfaces. When the register value is not assigned, the User bit is set to 0.
 * Each register (r) uses the following value (v) encoding: 0x00 to 0x010:
 * Req.User[r] <<= LLI.User[v]; 0x1D: Req.User[r] <<= LLI.WRP; 0x1E: Req.User[r]
 * <<= 0; 0x1F: Req.User[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_RESET      0xf
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_s
{
    volatile uint32_t  GENUSER11 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_GENUSER11 */
    uint32_t                     : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_RESET       0x0000000f
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_OFST        0x12c

/*
 * Register : LLI_Targ_Svc_LLI_User_GenSecurity0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                     
 * :-------|:-------|:--------|:-----------------------------------------------------------------
 *  [4:0]  | RW     | 0x10    | ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                                     
 * 
 */
/*
 * Field : GENSECURITY0
 * 
 * This 5 bits register sets the source of the corresponding Req.Security bit on
 * master interfaces. When the register value is not assigned, the Security bit is
 * set to 0. Each register (r) uses the following value (v) encoding. 0x00 to 0x10:
 * Req.Security[r] <<= LLI.User[v]; 0x1E: Req.Security[r] <<= 0; 0x1F:
 * Req.Security[r] <<= 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_MSB        4
/* The width in bits of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_WIDTH      5
/* The mask used to set the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 register field value. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 register field. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_RESET      0x10
/* Extracts the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 field value from a register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 register field value suitable for setting the register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0.
 */
struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_s
{
    volatile uint32_t  GENSECURITY0 :  5;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_GENSECURITY0 */
    uint32_t                        : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0. */
typedef struct ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_s  ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0 register. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_RESET       0x00000010
/* The byte offset of the ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0 register from the beginning of the component. */
#define ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_OFST        0x180

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PSI_LLI_USER.
 */
struct ALT_PSI_LLI_USER_s
{
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE_t     LLI_Targ_Svc_LLI_User_ArbiterMode;     /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY_t     LLI_Targ_Svc_LLI_User_CreditDelay;     /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ_t   LLI_Targ_Svc_LLI_User_MaskSystemIrq;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ */
    volatile uint32_t                                                 _pad_0xc_0x7f[29];                     /* *UNDEFINED* */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0_t   LLI_Targ_Svc_LLI_User_DataLinkUser0;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1_t   LLI_Targ_Svc_LLI_User_DataLinkUser1;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2_t   LLI_Targ_Svc_LLI_User_DataLinkUser2;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3_t   LLI_Targ_Svc_LLI_User_DataLinkUser3;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4_t   LLI_Targ_Svc_LLI_User_DataLinkUser4;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5_t   LLI_Targ_Svc_LLI_User_DataLinkUser5;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6_t   LLI_Targ_Svc_LLI_User_DataLinkUser6;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7_t   LLI_Targ_Svc_LLI_User_DataLinkUser7;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8_t   LLI_Targ_Svc_LLI_User_DataLinkUser8;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9_t   LLI_Targ_Svc_LLI_User_DataLinkUser9;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10_t  LLI_Targ_Svc_LLI_User_DataLinkUser10;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11_t  LLI_Targ_Svc_LLI_User_DataLinkUser11;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12_t  LLI_Targ_Svc_LLI_User_DataLinkUser12;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13_t  LLI_Targ_Svc_LLI_User_DataLinkUser13;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14_t  LLI_Targ_Svc_LLI_User_DataLinkUser14;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15_t  LLI_Targ_Svc_LLI_User_DataLinkUser15;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16_t  LLI_Targ_Svc_LLI_User_DataLinkUser16;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16 */
    volatile uint32_t                                                 _pad_0xc4_0xfb[14];                    /* *UNDEFINED* */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED_t  LLI_Targ_Svc_LLI_User_DataLinkPosted;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0_t        LLI_Targ_Svc_LLI_User_GenUser0;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1_t        LLI_Targ_Svc_LLI_User_GenUser1;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2_t        LLI_Targ_Svc_LLI_User_GenUser2;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3_t        LLI_Targ_Svc_LLI_User_GenUser3;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4_t        LLI_Targ_Svc_LLI_User_GenUser4;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5_t        LLI_Targ_Svc_LLI_User_GenUser5;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6_t        LLI_Targ_Svc_LLI_User_GenUser6;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7_t        LLI_Targ_Svc_LLI_User_GenUser7;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8_t        LLI_Targ_Svc_LLI_User_GenUser8;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9_t        LLI_Targ_Svc_LLI_User_GenUser9;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10_t       LLI_Targ_Svc_LLI_User_GenUser10;       /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10 */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11_t       LLI_Targ_Svc_LLI_User_GenUser11;       /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11 */
    volatile uint32_t                                                 _pad_0x130_0x17f[20];                  /* *UNDEFINED* */
    volatile ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0_t    LLI_Targ_Svc_LLI_User_GenSecurity0;    /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0 */
    volatile uint32_t                                                 _pad_0x184_0x1000[927];                /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PSI_LLI_USER. */
typedef struct ALT_PSI_LLI_USER_s  ALT_PSI_LLI_USER_t;
/* The struct declaration for the raw register contents of register group ALT_PSI_LLI_USER. */
struct ALT_PSI_LLI_USER_raw_s
{
    volatile uint32_t  LLI_Targ_Svc_LLI_User_ArbiterMode;     /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_ARBITERMODE */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_CreditDelay;     /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_CREDITDELAY */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_MaskSystemIrq;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_MASKSYSTEMIRQ */
    volatile uint32_t  _pad_0xc_0x7f[29];                     /* *UNDEFINED* */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser0;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER0 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser1;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER1 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser2;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER2 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser3;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER3 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser4;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER4 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser5;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER5 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser6;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER6 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser7;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER7 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser8;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER8 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser9;   /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER9 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser10;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER10 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser11;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER11 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser12;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER12 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser13;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER13 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser14;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER14 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser15;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER15 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkUser16;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKUSER16 */
    volatile uint32_t  _pad_0xc4_0xfb[14];                    /* *UNDEFINED* */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_DataLinkPosted;  /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_DATALINKPOSTED */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser0;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER0 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser1;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER1 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser2;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER2 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser3;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER3 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser4;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER4 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser5;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER5 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser6;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER6 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser7;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER7 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser8;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER8 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser9;        /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER9 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser10;       /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER10 */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenUser11;       /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENUSER11 */
    volatile uint32_t  _pad_0x130_0x17f[20];                  /* *UNDEFINED* */
    volatile uint32_t  LLI_Targ_Svc_LLI_User_GenSecurity0;    /* ALT_PSI_LLI_USER_LLI_TARG_SVC_LLI_USER_GENSECURITY0 */
    volatile uint32_t  _pad_0x184_0x1000[927];                /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PSI_LLI_USER. */
typedef struct ALT_PSI_LLI_USER_raw_s  ALT_PSI_LLI_USER_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : PSI_SIG
 * 
 */
/*
 * Register : LLI_Targ_Svc_SIG_sig_reg_num
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [31:0] | R      | 0x20  | ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM
 * 
 */
/*
 * Field : SIG_REG_NUM
 * 
 * Number of LLI signal attributes; (Capability)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_MSB        31
/* The width in bits of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_WIDTH      32
/* The mask used to set the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_RESET      0x20
/* Extracts the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM field value from a register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM register field value suitable for setting the register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM.
 */
struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_s
{
    const volatile uint32_t  SIG_REG_NUM : 32;  /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_SIG_REG_NUM */
};

/* The typedef declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM. */
typedef struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_s  ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_RESET       0x00000020
/* The byte offset of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM register from the beginning of the component. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_OFST        0x0

/*
 * Register : LLI_Targ_Svc_SIG_Signal_Status
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                             
 * :-------|:-------|:------|:---------------------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS
 * 
 */
/*
 * Field : SIGNAL_STATUS
 * 
 * Get the status of signals.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_MSB        31
/* The width in bits of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_WIDTH      32
/* The mask used to set the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_RESET      0x0
/* Extracts the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS field value from a register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS register field value suitable for setting the register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS.
 */
struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_s
{
    const volatile uint32_t  SIGNAL_STATUS : 32;  /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_SIGNAL_STATUS */
};

/* The typedef declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS. */
typedef struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_s  ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_RESET       0x00000000
/* The byte offset of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS register from the beginning of the component. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_OFST        0x4

/*
 * Register : LLI_Targ_Svc_SIG_Signal_Set
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET
 * 
 */
/*
 * Field : SIGNAL_SET
 * 
 * Sets signals. Writing a bit to '1' sets the corresponding signal; Writing '0'
 * has no effect. If read, then returns '0'.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_MSB        31
/* The width in bits of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_WIDTH      32
/* The mask used to set the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_RESET      0x0
/* Extracts the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET field value from a register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET register field value suitable for setting the register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET.
 */
struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_s
{
    volatile uint32_t  SIGNAL_SET : 32;  /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_SIGNAL_SET */
};

/* The typedef declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET. */
typedef struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_s  ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_RESET       0x00000000
/* The byte offset of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET register from the beginning of the component. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_OFST        0x8

/*
 * Register : LLI_Targ_Svc_SIG_Signal_Clear
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                           
 * :-------|:-------|:------|:-------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR
 * 
 */
/*
 * Field : SIGNAL_CLEAR
 * 
 * Clears signals. Writing a bit to '1' clears the corresponding signal; Writing
 * '0' has no effect. If read, then returns '0'.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_MSB        31
/* The width in bits of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_WIDTH      32
/* The mask used to set the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR register field value. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR register field. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_RESET      0x0
/* Extracts the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR field value from a register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR register field value suitable for setting the register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR.
 */
struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_s
{
    volatile uint32_t  SIGNAL_CLEAR : 32;  /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_SIGNAL_CLEAR */
};

/* The typedef declaration for register ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR. */
typedef struct ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_s  ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR register. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_RESET       0x00000000
/* The byte offset of the ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR register from the beginning of the component. */
#define ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_OFST        0xc

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PSI_SIG.
 */
struct ALT_PSI_SIG_s
{
    volatile ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM_t    LLI_Targ_Svc_SIG_sig_reg_num;    /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM */
    volatile ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS_t  LLI_Targ_Svc_SIG_Signal_Status;  /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS */
    volatile ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET_t     LLI_Targ_Svc_SIG_Signal_Set;     /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET */
    volatile ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR_t   LLI_Targ_Svc_SIG_Signal_Clear;   /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR */
    volatile uint32_t                                      _pad_0x10_0x200[124];            /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PSI_SIG. */
typedef struct ALT_PSI_SIG_s  ALT_PSI_SIG_t;
/* The struct declaration for the raw register contents of register group ALT_PSI_SIG. */
struct ALT_PSI_SIG_raw_s
{
    volatile uint32_t  LLI_Targ_Svc_SIG_sig_reg_num;    /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIG_REG_NUM */
    volatile uint32_t  LLI_Targ_Svc_SIG_Signal_Status;  /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_STATUS */
    volatile uint32_t  LLI_Targ_Svc_SIG_Signal_Set;     /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_SET */
    volatile uint32_t  LLI_Targ_Svc_SIG_Signal_Clear;   /* ALT_PSI_SIG_LLI_TARG_SVC_SIG_SIGNAL_CLEAR */
    volatile uint32_t  _pad_0x10_0x200[124];            /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PSI_SIG. */
typedef struct ALT_PSI_SIG_raw_s  ALT_PSI_SIG_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : PSI_SIG_USER
 * 
 */
/*
 * Register : LLI_Targ_Svc_SIG_User_SigIn
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [31:0] | R      | Unknown | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN
 * 
 */
/*
 * Field : SIGIN
 * 
 * Contains the value of the re-synchronized version of the SigIn input.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_MSB        31
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_WIDTH      32
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN register field is UNKNOWN. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_RESET      0x0
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_s
{
    const volatile uint32_t  SIGIN : 32;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_SIGIN */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_RESET       0x00000000
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_OFST        0x0

/*
 * Register : LLI_Targ_Svc_SIG_User_PowerCtl
 * 
 * This register controls the Generic Master disconnect.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                            
 * :-------|:-------|:--------|:--------------------------------------------------------
 *  [0]    | RW     | 0x1     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ
 *  [1]    | R      | Unknown | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                            
 * 
 */
/*
 * Field : IDLEREQ
 * 
 * Stop Generic Master traffic request.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_MSB        0
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_WIDTH      1
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_RESET      0x1
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : IDLEACK
 * 
 * Generic Master Stopped.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_MSB        1
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_WIDTH      1
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK register field is UNKNOWN. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_RESET      0x0
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_s
{
    volatile uint32_t        IDLEREQ :  1;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEREQ */
    const volatile uint32_t  IDLEACK :  1;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_IDLEACK */
    uint32_t                         : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_RESET       0x00000001
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_OFST        0x18

/*
 * Register : LLI_Targ_Svc_SIG_User_FaultCtl
 * 
 * This register contains the Status and the Clear of the Fault signal.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS
 *  [1]    | RW     | 0x0     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR   
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                           
 * 
 */
/*
 * Field : STATUS
 * 
 * Value of the Fault output signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_MSB        0
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_WIDTH      1
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_SET_MSK    0x00000001
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_RESET      0x0
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CLR
 * 
 * Clear Fault signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_MSB        1
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_WIDTH      1
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_SET_MSK    0x00000002
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_RESET      0x0
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_s
{
    const volatile uint32_t  STATUS :  1;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_STATUS */
    volatile uint32_t        CLR    :  1;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_CLR */
    uint32_t                        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_RESET       0x00000000
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_OFST        0x1c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC0
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 0. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_RESET      0x0
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_s
{
    volatile uint32_t  SIGOUTSRC0 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_SIGOUTSRC0 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_RESET       0x00000000
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_OFST        0x20

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x1     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC1
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 1. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_RESET      0x1
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_s
{
    volatile uint32_t  SIGOUTSRC1 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_SIGOUTSRC1 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_RESET       0x00000001
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_OFST        0x24

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x2     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC2
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 2. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_RESET      0x2
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_s
{
    volatile uint32_t  SIGOUTSRC2 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_SIGOUTSRC2 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_RESET       0x00000002
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_OFST        0x28

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x3     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC3
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 3. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_RESET      0x3
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_s
{
    volatile uint32_t  SIGOUTSRC3 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_SIGOUTSRC3 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_RESET       0x00000003
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_OFST        0x2c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x4     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC4
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 4. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_RESET      0x4
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_s
{
    volatile uint32_t  SIGOUTSRC4 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_SIGOUTSRC4 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_RESET       0x00000004
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_OFST        0x30

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x5     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC5
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 5. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_RESET      0x5
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_s
{
    volatile uint32_t  SIGOUTSRC5 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_SIGOUTSRC5 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_RESET       0x00000005
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_OFST        0x34

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x6     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC6
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 6. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_RESET      0x6
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_s
{
    volatile uint32_t  SIGOUTSRC6 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_SIGOUTSRC6 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_RESET       0x00000006
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_OFST        0x38

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x7     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC7
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 7. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_RESET      0x7
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_s
{
    volatile uint32_t  SIGOUTSRC7 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_SIGOUTSRC7 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_RESET       0x00000007
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_OFST        0x3c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x8     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC8
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 8. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_RESET      0x8
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_s
{
    volatile uint32_t  SIGOUTSRC8 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_SIGOUTSRC8 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_RESET       0x00000008
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_OFST        0x40

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x9     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : SIGOUTSRC9
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 9. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_RESET      0x9
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_s
{
    volatile uint32_t  SIGOUTSRC9 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_SIGOUTSRC9 */
    uint32_t                      : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_RESET       0x00000009
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_OFST        0x44

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc10
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0xa     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC10
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 10. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_RESET      0xa
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_s
{
    volatile uint32_t  SIGOUTSRC10 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_SIGOUTSRC10 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_RESET       0x0000000a
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_OFST        0x48

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc11
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0xb     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC11
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 11. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_RESET      0xb
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_s
{
    volatile uint32_t  SIGOUTSRC11 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_SIGOUTSRC11 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_RESET       0x0000000b
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_OFST        0x4c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc12
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0xc     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC12
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 12. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_RESET      0xc
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_s
{
    volatile uint32_t  SIGOUTSRC12 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_SIGOUTSRC12 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_RESET       0x0000000c
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_OFST        0x50

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc13
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0xd     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC13
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 13. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_RESET      0xd
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_s
{
    volatile uint32_t  SIGOUTSRC13 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_SIGOUTSRC13 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_RESET       0x0000000d
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_OFST        0x54

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc14
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0xe     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC14
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 14. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_RESET      0xe
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_s
{
    volatile uint32_t  SIGOUTSRC14 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_SIGOUTSRC14 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_RESET       0x0000000e
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_OFST        0x58

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc15
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0xf     | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC15
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 15. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_RESET      0xf
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_s
{
    volatile uint32_t  SIGOUTSRC15 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_SIGOUTSRC15 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_RESET       0x0000000f
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_OFST        0x5c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc16
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x10    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC16
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 16. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_RESET      0x10
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_s
{
    volatile uint32_t  SIGOUTSRC16 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_SIGOUTSRC16 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_RESET       0x00000010
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_OFST        0x60

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc17
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x11    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC17
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 17. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_RESET      0x11
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_s
{
    volatile uint32_t  SIGOUTSRC17 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_SIGOUTSRC17 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_RESET       0x00000011
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_OFST        0x64

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc18
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x12    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC18
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 18. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_RESET      0x12
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_s
{
    volatile uint32_t  SIGOUTSRC18 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_SIGOUTSRC18 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_RESET       0x00000012
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_OFST        0x68

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc19
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x13    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC19
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 19. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_RESET      0x13
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_s
{
    volatile uint32_t  SIGOUTSRC19 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_SIGOUTSRC19 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_RESET       0x00000013
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_OFST        0x6c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc20
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x14    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC20
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 20. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_RESET      0x14
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_s
{
    volatile uint32_t  SIGOUTSRC20 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_SIGOUTSRC20 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_RESET       0x00000014
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_OFST        0x70

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc21
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x15    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC21
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 21. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_RESET      0x15
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_s
{
    volatile uint32_t  SIGOUTSRC21 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_SIGOUTSRC21 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_RESET       0x00000015
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_OFST        0x74

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc22
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x16    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC22
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 22. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_RESET      0x16
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_s
{
    volatile uint32_t  SIGOUTSRC22 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_SIGOUTSRC22 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_RESET       0x00000016
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_OFST        0x78

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc23
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x17    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC23
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 23. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_RESET      0x17
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_s
{
    volatile uint32_t  SIGOUTSRC23 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_SIGOUTSRC23 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_RESET       0x00000017
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_OFST        0x7c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc24
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x18    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC24
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 24. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_RESET      0x18
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_s
{
    volatile uint32_t  SIGOUTSRC24 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_SIGOUTSRC24 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_RESET       0x00000018
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_OFST        0x80

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc25
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x19    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC25
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 25. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_RESET      0x19
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_s
{
    volatile uint32_t  SIGOUTSRC25 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_SIGOUTSRC25 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_RESET       0x00000019
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_OFST        0x84

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc26
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x1a    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC26
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 26. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_RESET      0x1a
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_s
{
    volatile uint32_t  SIGOUTSRC26 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_SIGOUTSRC26 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_RESET       0x0000001a
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_OFST        0x88

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc27
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x1b    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC27
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 27. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_RESET      0x1b
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_s
{
    volatile uint32_t  SIGOUTSRC27 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_SIGOUTSRC27 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_RESET       0x0000001b
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_OFST        0x8c

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc28
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x1c    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC28
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 28. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_RESET      0x1c
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_s
{
    volatile uint32_t  SIGOUTSRC28 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_SIGOUTSRC28 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_RESET       0x0000001c
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_OFST        0x90

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc29
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x1d    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC29
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 29. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_RESET      0x1d
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_s
{
    volatile uint32_t  SIGOUTSRC29 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_SIGOUTSRC29 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_RESET       0x0000001d
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_OFST        0x94

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc30
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x1e    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC30
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 30. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_RESET      0x1e
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_s
{
    volatile uint32_t  SIGOUTSRC30 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_SIGOUTSRC30 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_RESET       0x0000001e
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_OFST        0x98

/*
 * Register : LLI_Targ_Svc_SIG_User_SigOutSrc31
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x1f    | ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                   
 * 
 */
/*
 * Field : SIGOUTSRC31
 * 
 * This 6 bits register selects the Signal_Status bit that will be connected to the
 * SigOut bit 31. Each register (r) uses the following value (v) encoding. 0x00 to
 * 0x1F: SigOut[r] <<= Signal_Status[v]; 0x20 to 0x3F: SigOut[r] <<= 0;
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_MSB        5
/* The width in bits of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_WIDTH      6
/* The mask used to set the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_SET_MSK    0x0000003f
/* The mask used to clear the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 register field value. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_CLR_MSK    0xffffffc0
/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 register field. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_RESET      0x1f
/* Extracts the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 field value from a register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 register field value suitable for setting the register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31.
 */
struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_s
{
    volatile uint32_t  SIGOUTSRC31 :  6;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_SIGOUTSRC31 */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31. */
typedef struct ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_s  ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31 register. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_RESET       0x0000001f
/* The byte offset of the ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31 register from the beginning of the component. */
#define ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_OFST        0x9c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PSI_SIG_USER.
 */
struct ALT_PSI_SIG_USER_s
{
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN_t        LLI_Targ_Svc_SIG_User_SigIn;        /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN */
    volatile uint32_t                                              _pad_0x4_0x17[5];                   /* *UNDEFINED* */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL_t     LLI_Targ_Svc_SIG_User_PowerCtl;     /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL_t     LLI_Targ_Svc_SIG_User_FaultCtl;     /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0_t   LLI_Targ_Svc_SIG_User_SigOutSrc0;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1_t   LLI_Targ_Svc_SIG_User_SigOutSrc1;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2_t   LLI_Targ_Svc_SIG_User_SigOutSrc2;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3_t   LLI_Targ_Svc_SIG_User_SigOutSrc3;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4_t   LLI_Targ_Svc_SIG_User_SigOutSrc4;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5_t   LLI_Targ_Svc_SIG_User_SigOutSrc5;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6_t   LLI_Targ_Svc_SIG_User_SigOutSrc6;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7_t   LLI_Targ_Svc_SIG_User_SigOutSrc7;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8_t   LLI_Targ_Svc_SIG_User_SigOutSrc8;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9_t   LLI_Targ_Svc_SIG_User_SigOutSrc9;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10_t  LLI_Targ_Svc_SIG_User_SigOutSrc10;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11_t  LLI_Targ_Svc_SIG_User_SigOutSrc11;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12_t  LLI_Targ_Svc_SIG_User_SigOutSrc12;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13_t  LLI_Targ_Svc_SIG_User_SigOutSrc13;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14_t  LLI_Targ_Svc_SIG_User_SigOutSrc14;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15_t  LLI_Targ_Svc_SIG_User_SigOutSrc15;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16_t  LLI_Targ_Svc_SIG_User_SigOutSrc16;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17_t  LLI_Targ_Svc_SIG_User_SigOutSrc17;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18_t  LLI_Targ_Svc_SIG_User_SigOutSrc18;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19_t  LLI_Targ_Svc_SIG_User_SigOutSrc19;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20_t  LLI_Targ_Svc_SIG_User_SigOutSrc20;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21_t  LLI_Targ_Svc_SIG_User_SigOutSrc21;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22_t  LLI_Targ_Svc_SIG_User_SigOutSrc22;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23_t  LLI_Targ_Svc_SIG_User_SigOutSrc23;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24_t  LLI_Targ_Svc_SIG_User_SigOutSrc24;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25_t  LLI_Targ_Svc_SIG_User_SigOutSrc25;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26_t  LLI_Targ_Svc_SIG_User_SigOutSrc26;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27_t  LLI_Targ_Svc_SIG_User_SigOutSrc27;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28_t  LLI_Targ_Svc_SIG_User_SigOutSrc28;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29_t  LLI_Targ_Svc_SIG_User_SigOutSrc29;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30_t  LLI_Targ_Svc_SIG_User_SigOutSrc30;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30 */
    volatile ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31_t  LLI_Targ_Svc_SIG_User_SigOutSrc31;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31 */
    volatile uint32_t                                              _pad_0xa0_0x200[88];                /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PSI_SIG_USER. */
typedef struct ALT_PSI_SIG_USER_s  ALT_PSI_SIG_USER_t;
/* The struct declaration for the raw register contents of register group ALT_PSI_SIG_USER. */
struct ALT_PSI_SIG_USER_raw_s
{
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigIn;        /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGIN */
    volatile uint32_t  _pad_0x4_0x17[5];                   /* *UNDEFINED* */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_PowerCtl;     /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_POWERCTL */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_FaultCtl;     /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_FAULTCTL */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc0;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC0 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc1;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC1 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc2;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC2 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc3;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC3 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc4;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC4 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc5;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC5 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc6;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC6 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc7;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC7 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc8;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC8 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc9;   /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC9 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc10;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC10 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc11;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC11 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc12;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC12 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc13;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC13 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc14;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC14 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc15;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC15 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc16;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC16 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc17;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC17 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc18;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC18 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc19;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC19 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc20;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC20 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc21;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC21 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc22;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC22 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc23;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC23 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc24;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC24 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc25;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC25 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc26;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC26 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc27;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC27 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc28;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC28 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc29;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC29 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc30;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC30 */
    volatile uint32_t  LLI_Targ_Svc_SIG_User_SigOutSrc31;  /* ALT_PSI_SIG_USER_LLI_TARG_SVC_SIG_USER_SIGOUTSRC31 */
    volatile uint32_t  _pad_0xa0_0x200[88];                /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PSI_SIG_USER. */
typedef struct ALT_PSI_SIG_USER_raw_s  ALT_PSI_SIG_USER_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : PSI_DDB
 * 
 */
/*
 * Register : LLI_Targ_Svc_DDB_Revision
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                   
 * :-------|:-------|:------|:-----------------------------------------------
 *  [31:0] | R      | 0x10  | ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION
 * 
 */
/*
 * Field : REVISION
 * 
 * The revision of the DDB specification supported by this Device encoded as major-
 * version * 0x10 + minor-version.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_MSB        31
/* The width in bits of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_WIDTH      32
/* The mask used to set the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_RESET      0x10
/* Extracts the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION field value from a register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION register field value suitable for setting the register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION.
 */
struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_s
{
    const volatile uint32_t  REVISION : 32;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_REVISION */
};

/* The typedef declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION. */
typedef struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_s  ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_RESET       0x00000010
/* The byte offset of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION register from the beginning of the component. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_OFST        0x0

/*
 * Register : LLI_Targ_Svc_DDB_Level
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [31:0] | R      | 0x1   | ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL
 * 
 */
/*
 * Field : LEVEL
 * 
 * Eight bit field indicating the DDB support: b0: DDB Level 1 supported b1: GET-
 * DDB-LEVEL2 Service supported b2: SET-DDB-LEVEL2 Service supported b[7:3]:
 * Reserved and shall be 0b00000.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_MSB        31
/* The width in bits of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_WIDTH      32
/* The mask used to set the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_RESET      0x1
/* Extracts the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL field value from a register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL register field value suitable for setting the register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL.
 */
struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_s
{
    const volatile uint32_t  LEVEL : 32;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_LEVEL */
};

/* The typedef declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL. */
typedef struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_s  ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_RESET       0x00000001
/* The byte offset of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL register from the beginning of the component. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_OFST        0x4

/*
 * Register : LLI_Targ_Svc_DDB_DeviceClass
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [31:0] | R      | 0x9ff | ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS
 * 
 */
/*
 * Field : DEVICECLASS
 * 
 * The device class ID of the Device as specified by the MIPI Alliance [MIPI02].
 * The group ID is 0x09 and the class ID is 0xFF for the current specification. The
 * class ID from 0x00 to 0xFE are reserved for future needs.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_MSB        31
/* The width in bits of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_WIDTH      32
/* The mask used to set the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_RESET      0x9ff
/* Extracts the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS field value from a register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS register field value suitable for setting the register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS.
 */
struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_s
{
    const volatile uint32_t  DEVICECLASS : 32;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_DEVICECLASS */
};

/* The typedef declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS. */
typedef struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_s  ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_RESET       0x000009ff
/* The byte offset of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS register from the beginning of the component. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_OFST        0x8

/*
 * Register : LLI_Targ_Svc_DDB_ManufacturerID
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                               
 * :-------|:-------|:------|:-----------------------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID
 * 
 */
/*
 * Field : MANUFACTURERID
 * 
 * The manufacturer ID of the Device's manufacturer as specified by the MIPI
 * Alliance [MIPI02].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_MSB        31
/* The width in bits of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_WIDTH      32
/* The mask used to set the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_RESET      0x0
/* Extracts the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID field value from a register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID register field value suitable for setting the register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID.
 */
struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_s
{
    const volatile uint32_t  MANUFACTURERID : 32;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_MANUFACTURERID */
};

/* The typedef declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID. */
typedef struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_s  ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_RESET       0x00000000
/* The byte offset of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID register from the beginning of the component. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_OFST        0xc

/*
 * Register : LLI_Targ_Svc_DDB_ProductID
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                     
 * :-------|:-------|:------|:-------------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID
 * 
 */
/*
 * Field : PRODUCTID
 * 
 * The product ID as specified by the Device manufacturer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_MSB        31
/* The width in bits of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_WIDTH      32
/* The mask used to set the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_RESET      0x0
/* Extracts the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID field value from a register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID register field value suitable for setting the register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID.
 */
struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_s
{
    const volatile uint32_t  PRODUCTID : 32;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_PRODUCTID */
};

/* The typedef declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID. */
typedef struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_s  ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_RESET       0x00000000
/* The byte offset of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID register from the beginning of the component. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_OFST        0x10

/*
 * Register : LLI_Targ_Svc_DDB_Length
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH
 * 
 */
/*
 * Field : LENGTH
 * 
 * The length of any DDB Level 2 data. For Devices supporting only DDB Level 1, the
 * value shall be 0. For Devices supporting DDB Level 2, the value shall be the
 * size of the available DDB Level 2 data in bytes.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_MSB        31
/* The width in bits of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_WIDTH      32
/* The mask used to set the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH register field value. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_CLR_MSK    0x00000000
/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH register field. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_RESET      0x0
/* Extracts the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH field value from a register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH register field value suitable for setting the register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH.
 */
struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_s
{
    const volatile uint32_t  LENGTH : 32;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_LENGTH */
};

/* The typedef declaration for register ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH. */
typedef struct ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_s  ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH register. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_RESET       0x00000000
/* The byte offset of the ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH register from the beginning of the component. */
#define ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_OFST        0x14

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PSI_DDB.
 */
struct ALT_PSI_DDB_s
{
    volatile ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION_t        LLI_Targ_Svc_DDB_Revision;        /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION */
    volatile ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL_t           LLI_Targ_Svc_DDB_Level;           /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL */
    volatile ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS_t     LLI_Targ_Svc_DDB_DeviceClass;     /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS */
    volatile ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID_t  LLI_Targ_Svc_DDB_ManufacturerID;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID */
    volatile ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID_t       LLI_Targ_Svc_DDB_ProductID;       /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID */
    volatile ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH_t          LLI_Targ_Svc_DDB_Length;          /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH */
    volatile uint32_t                                       _pad_0x18_0x400[250];             /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PSI_DDB. */
typedef struct ALT_PSI_DDB_s  ALT_PSI_DDB_t;
/* The struct declaration for the raw register contents of register group ALT_PSI_DDB. */
struct ALT_PSI_DDB_raw_s
{
    volatile uint32_t  LLI_Targ_Svc_DDB_Revision;        /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_REVISION */
    volatile uint32_t  LLI_Targ_Svc_DDB_Level;           /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_LEVEL */
    volatile uint32_t  LLI_Targ_Svc_DDB_DeviceClass;     /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_DEVICECLASS */
    volatile uint32_t  LLI_Targ_Svc_DDB_ManufacturerID;  /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_MANUFACTURERID */
    volatile uint32_t  LLI_Targ_Svc_DDB_ProductID;       /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_PRODUCTID */
    volatile uint32_t  LLI_Targ_Svc_DDB_Length;          /* ALT_PSI_DDB_LLI_TARG_SVC_DDB_LENGTH */
    volatile uint32_t  _pad_0x18_0x400[250];             /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PSI_DDB. */
typedef struct ALT_PSI_DDB_raw_s  ALT_PSI_DDB_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_PSI_H__ */

