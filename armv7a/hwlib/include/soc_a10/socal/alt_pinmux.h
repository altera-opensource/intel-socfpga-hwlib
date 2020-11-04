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

/* Altera - ALT_PINMUX_SHARED_3V_IO_GRP */

#ifndef __ALT_SOCAL_PINMUX_H__
#define __ALT_SOCAL_PINMUX_H__

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
 * Component : ALT_PINMUX_SHARED_3V_IO_GRP
 * 
 */
/*
 * Register : Shared IO 48 Q1 1 Mux Selection Register - pinmux_shared_io_q1_1
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 1
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 1 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 1 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 1
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.clk
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.ss1_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data0
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.clk
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.cts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq0
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_1.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_1_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 1 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_1_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_1. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_1_s  ALT_PINMUX_SHARED_3V_IO_Q1_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_1 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_1 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_1_OFST        0x0

/*
 * Register : Shared IO 48 Q1 2 Mux Selection Register - pinmux_shared_io_q1_2
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 2
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 2 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 2 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 2
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.mosi
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.ss1_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.cmd
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.stp
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.rts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq1
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_2.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_2_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 2 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_2_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_2. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_2_s  ALT_PINMUX_SHARED_3V_IO_Q1_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_2 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_2 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_2_OFST        0x4

/*
 * Register : Shared IO 48 Q1 3 Mux Selection Register - pinmux_shared_io_q1_3
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 3
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 3 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 3 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 3
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.ss0_n
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.cclk
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.dir
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.we_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_3.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_3_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 3 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_3_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_3. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_3_s  ALT_PINMUX_SHARED_3V_IO_Q1_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_3 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_3 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_3_OFST        0x8

/*
 * Register : Shared IO 48 Q1 4 Mux Selection Register - pinmux_shared_io_q1_4
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 4
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 4 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 4 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 4
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.miso
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data1
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data0
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.re_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_4.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_4_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 4 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_4_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_4. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_4_s  ALT_PINMUX_SHARED_3V_IO_Q1_4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_4 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_4 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_4_OFST        0xc

/*
 * Register : Shared IO 48 Q1 5 Mux Selection Register - pinmux_shared_io_q1_5
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 5
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 5 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 5 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 5
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c0.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.clk
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data2
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal qspi.ss2
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.cts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.wp_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_5.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_5_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 5 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_5_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_5. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_5_s  ALT_PINMUX_SHARED_3V_IO_Q1_5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_5 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_5 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_5_OFST        0x10

/*
 * Register : Shared IO 48 Q1 6 Mux Selection Register - pinmux_shared_io_q1_6
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 6
 * 
 * Only reset by a cold reset (ignores warm reset)
 * 
 * .NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 6 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 6 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 6
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c0.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.mosi
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data3
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.nxt
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal qspi.ss3
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq2
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io5
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_6.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_6_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 6 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_6_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_6. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_6_s  ALT_PINMUX_SHARED_3V_IO_Q1_6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_6 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_6 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_6_OFST        0x14

/*
 * Register : Shared IO 48 Q1 7 Mux Selection Register - pinmux_shared_io_q1_7
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 7
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 7 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 7 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 7
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac2.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.miso
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data4
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq3
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io6
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_7.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_7_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 7 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_7_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_7. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_7_s  ALT_PINMUX_SHARED_3V_IO_Q1_7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_7 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_7 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_7_OFST        0x18

/*
 * Register : Shared IO 48 Q1 8 Mux Selection Register - pinmux_shared_io_q1_8
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 8
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 8 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 8 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 8
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac2.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.ss0_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data5
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.cle
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io7
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_8.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_8_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 8 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_8_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_8. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_8_s  ALT_PINMUX_SHARED_3V_IO_Q1_8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_8 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_8 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_8_OFST        0x1c

/*
 * Register : Shared IO 48 Q1 9 Mux Selection Register - pinmux_shared_io_q1_9
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 9
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 9 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 9 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 9
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac1.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac1.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.clk
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.clk
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data6
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data4
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq4
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_9.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_9_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 9 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_9_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_9. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_9_s  ALT_PINMUX_SHARED_3V_IO_Q1_9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_9 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_9 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_9_OFST        0x20

/*
 * Register : Shared IO 48 Q1 10 Mux Selection Register - pinmux_shared_io_q1_10
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 10
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 10 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 10 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 10
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac1.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac1.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.mosi
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.mosi
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data7
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data5
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq5
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io9
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_10.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_10_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 10 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_10_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_10. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_10_s  ALT_PINMUX_SHARED_3V_IO_Q1_10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_10 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_10 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_10_OFST        0x24

/*
 * Register : Shared IO 48 Q1 11 Mux Selection Register - pinmux_shared_io_q1_11
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 11
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 11 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 11 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 11
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.ss0_n
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.miso
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data6
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq6
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io10
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_11.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_11_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 11 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_11_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_11. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_11_s  ALT_PINMUX_SHARED_3V_IO_Q1_11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_11 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_11 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_11_OFST        0x28

/*
 * Register : Shared IO 48 Q1 12 Mux Selection Register - pinmux_shared_io_q1_12
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q1
 * 12
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q1 12 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q1 12 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q1 12
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.miso
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.ss0_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb0.data7
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq7
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io11
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_12.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q1_12_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q1 12 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q1_12_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q1_12. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q1_12_s  ALT_PINMUX_SHARED_3V_IO_Q1_12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q1_12 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q1_12 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q1_12_OFST        0x2c

/*
 * Register : Shared IO 48 Q2 1 Mux Selection Register - pinmux_shared_io_q2_1
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 1
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 1 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 1 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 1
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.tx_clk
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.clk
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.ale
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io12
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_1.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_1_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 1 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_1_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_1. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_1_s  ALT_PINMUX_SHARED_3V_IO_Q2_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_1 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_1 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_1_OFST        0x30

/*
 * Register : Shared IO 48 Q2 2 Mux Selection Register - pinmux_shared_io_q2_2
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 2
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 2 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 2 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 2
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.tx_ctl
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.stp
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.rb
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io13
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_2.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_2_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 2 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_2_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_2. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_2_s  ALT_PINMUX_SHARED_3V_IO_Q2_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_2 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_2 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_2_OFST        0x34

/*
 * Register : Shared IO 48 Q2 3 Mux Selection Register - pinmux_shared_io_q2_3
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 3
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 3 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 3 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 3
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.rx_clk
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.dir
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.ce_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io14
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_3.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_3_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 3 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_3_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_3. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_3_s  ALT_PINMUX_SHARED_3V_IO_Q2_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_3 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_3 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_3_OFST        0x38

/*
 * Register : Shared IO 48 Q2 4 Mux Selection Register - pinmux_shared_io_q2_4
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 4
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 4 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 4 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 4
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.rx_ctl
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data0
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal not applicable
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io15
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_4.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_4_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 4 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_4_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_4. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_4_s  ALT_PINMUX_SHARED_3V_IO_Q2_4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_4 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_4 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_4_OFST        0x3c

/*
 * Register : Shared IO 48 Q2 5 Mux Selection Register - pinmux_shared_io_q2_5
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 5
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 5 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 5 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 5
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.txd0
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq8
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io16
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_5.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_5_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 5 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_5_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_5. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_5_s  ALT_PINMUX_SHARED_3V_IO_Q2_5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_5 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_5 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_5_OFST        0x40

/*
 * Register : Shared IO 48 Q2 6 Mux Selection Register - pinmux_shared_io_q2_6
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 6
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 6 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 6 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 6
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.txd1
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.nxt
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq9
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io17
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_6.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_6_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 6 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_6_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_6. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_6_s  ALT_PINMUX_SHARED_3V_IO_Q2_6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_6 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_6 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_6_OFST        0x44

/*
 * Register : Shared IO 48 Q2 7 Mux Selection Register - pinmux_shared_io_q2_7
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 7
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 7 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 7 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 7
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.rxd0
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq10
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io18
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_7.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_7_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 7 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_7_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_7. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_7_s  ALT_PINMUX_SHARED_3V_IO_Q2_7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_7 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_7 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_7_OFST        0x48

/*
 * Register : Shared IO 48 Q2 8 Mux Selection Register - pinmux_shared_io_q2_8
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 8
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 8 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 8 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 8
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.ss1_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.rxd1
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq11
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io19
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_8.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_8_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 8 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_8_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_8. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_8_s  ALT_PINMUX_SHARED_3V_IO_Q2_8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_8 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_8 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_8_OFST        0x4c

/*
 * Register : Shared IO 48 Q2 9 Mux Selection Register - pinmux_shared_io_q2_9
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 9
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 9 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 9 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 9
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.clk
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.clk
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.txd2
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data4
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.cts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq12
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io20
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_9.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_9_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 9 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_9_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_9. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_9_s  ALT_PINMUX_SHARED_3V_IO_Q2_9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_9 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_9 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_9_OFST        0x50

/*
 * Register : Shared IO 48 Q2 10 Mux Selection Register - pinmux_shared_io_q2_10
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 10
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 10 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 10 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 10
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.mosi
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.mosi
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.txd3
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data5
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.rts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq13
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io21
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_10.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_10_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 10 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_10_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_10. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_10_s  ALT_PINMUX_SHARED_3V_IO_Q2_10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_10 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_10 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_10_OFST        0x54

/*
 * Register : Shared IO 48 Q2 11 Mux Selection Register - pinmux_shared_io_q2_11
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 11
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 11 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 11 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 11
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c0.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.ss0_n
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.miso
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.rxd2
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data6
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq14
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io22
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_11.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_11_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 11 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_11_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_11. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_11_s  ALT_PINMUX_SHARED_3V_IO_Q2_11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_11 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_11 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_11_OFST        0x58

/*
 * Register : Shared IO 48 Q2 12 Mux Selection Register - pinmux_shared_io_q2_12
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q2
 * 12
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q2 12 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q2 12 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q2 12
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c0.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.miso
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.ss0_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal emac0.rxd3
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal usb1.data7
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq15
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio0.io23
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_12.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q2_12_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q2 12 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q2_12_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q2_12. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q2_12_s  ALT_PINMUX_SHARED_3V_IO_Q2_12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q2_12 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q2_12 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q2_12_OFST        0x5c

/*
 * Register : Shared IO 48 Q3 1 Mux Selection Register - pinmux_shared_io_q3_1
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 1
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 1 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 1 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 1
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.clk
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.tx_clk
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.cts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq0
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_1.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_1_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 1 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_1_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_1. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_1_s  ALT_PINMUX_SHARED_3V_IO_Q3_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_1 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_1 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_1_OFST        0x60

/*
 * Register : Shared IO 48 Q3 2 Mux Selection Register - pinmux_shared_io_q3_2
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 2
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 2 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 2 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 2
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.mosi
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.tx_ctl
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.rts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq1
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_2.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_2_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 2 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_2_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_2. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_2_s  ALT_PINMUX_SHARED_3V_IO_Q3_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_2 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_2 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_2_OFST        0x64

/*
 * Register : Shared IO 48 Q3 3 Mux Selection Register - pinmux_shared_io_q3_3
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 3
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 3 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 3 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 3
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c0.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.miso
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.rx_clk
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.we_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_3.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_3_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 3 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_3_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_3. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_3_s  ALT_PINMUX_SHARED_3V_IO_Q3_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_3 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_3 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_3_OFST        0x68

/*
 * Register : Shared IO 48 Q3 4 Mux Selection Register - pinmux_shared_io_q3_4
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 4
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 4 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 4 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 4
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c0.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.ss0_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.rx_ctl
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart0.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.re_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_4.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_4_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 4 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_4_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_4. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_4_s  ALT_PINMUX_SHARED_3V_IO_Q3_4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_4 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_4 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_4_OFST        0x6c

/*
 * Register : Shared IO 48 Q3 5 Mux Selection Register - pinmux_shared_io_q3_5
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 5
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 5 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 5 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 5
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.clk
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim1.ss1_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.txd0
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.cts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.wp_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_5.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_5_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 5 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_5_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_5. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_5_s  ALT_PINMUX_SHARED_3V_IO_Q3_5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_5 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_5 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_5_OFST        0x70

/*
 * Register : Shared IO 48 Q3 6 Mux Selection Register - pinmux_shared_io_q3_6
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 6
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 6 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 6 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 6
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.mosi
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.txd1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq2
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io5
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_6.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_6_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 6 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_6_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_6. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_6_s  ALT_PINMUX_SHARED_3V_IO_Q3_6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_6 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_6 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_6_OFST        0x74

/*
 * Register : Shared IO 48 Q3 7 Mux Selection Register - pinmux_shared_io_q3_7
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 7
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 7 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 7 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 7
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.ss0_n
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.rxd0
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq3
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io6
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_7.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_7_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 7 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_7_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_7. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_7_s  ALT_PINMUX_SHARED_3V_IO_Q3_7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_7 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_7 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_7_OFST        0x78

/*
 * Register : Shared IO 48 Q3 8 Mux Selection Register - pinmux_shared_io_q3_8
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 8
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 8 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 8 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 8
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.miso
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.rxd1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.cle
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io7
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_8.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_8_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 8 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_8_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_8. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_8_s  ALT_PINMUX_SHARED_3V_IO_Q3_8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_8 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_8 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_8_OFST        0x7c

/*
 * Register : Shared IO 48 Q3 9 Mux Selection Register - pinmux_shared_io_q3_9
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 9
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 9 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 9 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 9
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac2.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.clk
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.txd2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq4
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_9.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_9_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 9 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_9_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_9. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_9_s  ALT_PINMUX_SHARED_3V_IO_Q3_9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_9 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_9 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_9_OFST        0x80

/*
 * Register : Shared IO 48 Q3 10 Mux Selection Register - pinmux_shared_io_q3_10
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 10
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 10 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 10 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 10
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac2.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.mosi
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.txd3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq5
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io9
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_10.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_10_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 10 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_10_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_10. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_10_s  ALT_PINMUX_SHARED_3V_IO_Q3_10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_10 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_10 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_10_OFST        0x84

/*
 * Register : Shared IO 48 Q3 11 Mux Selection Register - pinmux_shared_io_q3_11
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 11
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 11 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 11 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 11
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.ss0_n
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.rxd2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq6
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io10
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_11.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_11_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 11 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_11_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_11. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_11_s  ALT_PINMUX_SHARED_3V_IO_Q3_11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_11 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_11 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_11_OFST        0x88

/*
 * Register : Shared IO 48 Q3 12 Mux Selection Register - pinmux_shared_io_q3_12
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q3
 * 12
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q3 12 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q3 12 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q3 12
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.miso
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac1.rxd3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq7
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io11
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_12.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q3_12_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q3 12 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q3_12_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q3_12. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q3_12_s  ALT_PINMUX_SHARED_3V_IO_Q3_12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q3_12 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q3_12 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q3_12_OFST        0x8c

/*
 * Register : Shared IO 48 Q4 1 Mux Selection Register - pinmux_shared_io_q4_1
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 1
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 1 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 1 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 1
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data0
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.tx_clk
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.ale
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io12
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_1.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_1_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 1 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_1_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_1. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_1_s  ALT_PINMUX_SHARED_3V_IO_Q4_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_1 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_1 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_1_OFST        0x90

/*
 * Register : Shared IO 48 Q4 2 Mux Selection Register - pinmux_shared_io_q4_2
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 2
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 2 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 2 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 2
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c1.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.cmd
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.tx_ctl
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.rb
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io13
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_2.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_2_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 2 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_2_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_2. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_2_s  ALT_PINMUX_SHARED_3V_IO_Q4_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_2 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_2 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_2_OFST        0x94

/*
 * Register : Shared IO 48 Q4 3 Mux Selection Register - pinmux_shared_io_q4_3
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 3
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 3 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 3 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 3
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.cclk
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.rx_clk
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.ce_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io14
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_3.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_3_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 3 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_3_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_3. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_3_s  ALT_PINMUX_SHARED_3V_IO_Q4_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_3 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_3 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_3_OFST        0x98

/*
 * Register : Shared IO 48 Q4 4 Mux Selection Register - pinmux_shared_io_q4_4
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 4
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 4 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 4 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 4
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data1
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.rx_ctl
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal trace.clk
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal not applicable
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io15
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_4.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_4_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 4 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_4_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_4. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_4_s  ALT_PINMUX_SHARED_3V_IO_Q4_4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_4 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_4 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_4_OFST        0x9c

/*
 * Register : Shared IO 48 Q4 5 Mux Selection Register - pinmux_shared_io_q4_5
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 5
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 5 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 5 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 5
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data2
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.txd0
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal qspi.ss2
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.cts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq8
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io16
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_5.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_5_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 5 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_5_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_5. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_5_s  ALT_PINMUX_SHARED_3V_IO_Q4_5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_5 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_5 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_5_OFST        0xa0

/*
 * Register : Shared IO 48 Q4 6 Mux Selection Register - pinmux_shared_io_q4_6
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 6
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 6 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 6 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 6
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.ss1_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data3
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.txd1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal qspi.ss3
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq9
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io17
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_6.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_6_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 6 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_6_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_6. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_6_s  ALT_PINMUX_SHARED_3V_IO_Q4_6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_6 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_6 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_6_OFST        0xa4

/*
 * Register : Shared IO 48 Q4 7 Mux Selection Register - pinmux_shared_io_q4_7
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 7
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 7 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 7 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 7
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac1.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac1.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.miso
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data4
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.rxd0
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq10
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io18
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_7.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_7_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 7 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_7_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_7. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_7_s  ALT_PINMUX_SHARED_3V_IO_Q4_7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_7 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_7 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_7_OFST        0xa8

/*
 * Register : Shared IO 48 Q4 8 Mux Selection Register - pinmux_shared_io_q4_8
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 8
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 8 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 8 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 8
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac1.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac1.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.ss0_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data5
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.rxd1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal trace.clk
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq11
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io19
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_8.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_8_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 8 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_8_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_8. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_8_s  ALT_PINMUX_SHARED_3V_IO_Q4_8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_8 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_8 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_8_OFST        0xac

/*
 * Register : Shared IO 48 Q4 9 Mux Selection Register - pinmux_shared_io_q4_9
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 9
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 9 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 9 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 9
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.clk
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.clk
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data6
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.txd2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal trace.d0
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq12
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io20
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_9.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_9_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 9 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_9_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_9. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_9_s  ALT_PINMUX_SHARED_3V_IO_Q4_9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_9 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_9 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_9_OFST        0xb0

/*
 * Register : Shared IO 48 Q4 10 Mux Selection Register - pinmux_shared_io_q4_10
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 10
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 10 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 10 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 10
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.mosi
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.mosi
 * 
 * 0100 (4) Pin is connected to Peripheral signal sdmmc.data7
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.txd3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal trace.d1
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq13
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io21
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_10.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_10_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 10 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_10_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_10. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_10_s  ALT_PINMUX_SHARED_3V_IO_Q4_10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_10 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_10 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_10_OFST        0xb4

/*
 * Register : Shared IO 48 Q4 11 Mux Selection Register - pinmux_shared_io_q4_11
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 11
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 11 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 11 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 11
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.ss0_n
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.miso
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.rxd2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal trace.d2
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq14
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io22
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_11.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_11_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 11 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_11_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_11. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_11_s  ALT_PINMUX_SHARED_3V_IO_Q4_11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_11 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_11 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_11_OFST        0xb8

/*
 * Register : Shared IO 48 Q4 12 Mux Selection Register - pinmux_shared_io_q4_12
 * 
 * This register is used to control the peripherals connected to shared IO48 pin Q4
 * 12
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [3:0]  | RW     | 0xf   | Shared IO48 Q4 12 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD   
 * 
 */
/*
 * Field : Shared IO48 Q4 12 Mux Selection Field - sel
 * 
 * Select peripheral signals connected shared IO48 Q4 12
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis1.miso
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.ss0_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal emac2.rxd3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal trace.d3
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq15
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio1.io23
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD register field value. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD register field. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD field value from a register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_12.
 */
struct ALT_PINMUX_SHARED_3V_IO_Q4_12_s
{
    uint32_t        sel      :  4;  /* Shared IO48 Q4 12 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_SHARED_3V_IO_Q4_12_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_SHARED_3V_IO_Q4_12. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_Q4_12_s  ALT_PINMUX_SHARED_3V_IO_Q4_12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_SHARED_3V_IO_Q4_12 register. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_SHARED_3V_IO_Q4_12 register from the beginning of the component. */
#define ALT_PINMUX_SHARED_3V_IO_Q4_12_OFST        0xbc

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PINMUX_SHARED_3V_IO_GRP.
 */
struct ALT_PINMUX_SHARED_3V_IO_GRP_s
{
    ALT_PINMUX_SHARED_3V_IO_Q1_1_t   pinmux_shared_io_q1_1;   /* ALT_PINMUX_SHARED_3V_IO_Q1_1 */
    ALT_PINMUX_SHARED_3V_IO_Q1_2_t   pinmux_shared_io_q1_2;   /* ALT_PINMUX_SHARED_3V_IO_Q1_2 */
    ALT_PINMUX_SHARED_3V_IO_Q1_3_t   pinmux_shared_io_q1_3;   /* ALT_PINMUX_SHARED_3V_IO_Q1_3 */
    ALT_PINMUX_SHARED_3V_IO_Q1_4_t   pinmux_shared_io_q1_4;   /* ALT_PINMUX_SHARED_3V_IO_Q1_4 */
    ALT_PINMUX_SHARED_3V_IO_Q1_5_t   pinmux_shared_io_q1_5;   /* ALT_PINMUX_SHARED_3V_IO_Q1_5 */
    ALT_PINMUX_SHARED_3V_IO_Q1_6_t   pinmux_shared_io_q1_6;   /* ALT_PINMUX_SHARED_3V_IO_Q1_6 */
    ALT_PINMUX_SHARED_3V_IO_Q1_7_t   pinmux_shared_io_q1_7;   /* ALT_PINMUX_SHARED_3V_IO_Q1_7 */
    ALT_PINMUX_SHARED_3V_IO_Q1_8_t   pinmux_shared_io_q1_8;   /* ALT_PINMUX_SHARED_3V_IO_Q1_8 */
    ALT_PINMUX_SHARED_3V_IO_Q1_9_t   pinmux_shared_io_q1_9;   /* ALT_PINMUX_SHARED_3V_IO_Q1_9 */
    ALT_PINMUX_SHARED_3V_IO_Q1_10_t  pinmux_shared_io_q1_10;  /* ALT_PINMUX_SHARED_3V_IO_Q1_10 */
    ALT_PINMUX_SHARED_3V_IO_Q1_11_t  pinmux_shared_io_q1_11;  /* ALT_PINMUX_SHARED_3V_IO_Q1_11 */
    ALT_PINMUX_SHARED_3V_IO_Q1_12_t  pinmux_shared_io_q1_12;  /* ALT_PINMUX_SHARED_3V_IO_Q1_12 */
    ALT_PINMUX_SHARED_3V_IO_Q2_1_t   pinmux_shared_io_q2_1;   /* ALT_PINMUX_SHARED_3V_IO_Q2_1 */
    ALT_PINMUX_SHARED_3V_IO_Q2_2_t   pinmux_shared_io_q2_2;   /* ALT_PINMUX_SHARED_3V_IO_Q2_2 */
    ALT_PINMUX_SHARED_3V_IO_Q2_3_t   pinmux_shared_io_q2_3;   /* ALT_PINMUX_SHARED_3V_IO_Q2_3 */
    ALT_PINMUX_SHARED_3V_IO_Q2_4_t   pinmux_shared_io_q2_4;   /* ALT_PINMUX_SHARED_3V_IO_Q2_4 */
    ALT_PINMUX_SHARED_3V_IO_Q2_5_t   pinmux_shared_io_q2_5;   /* ALT_PINMUX_SHARED_3V_IO_Q2_5 */
    ALT_PINMUX_SHARED_3V_IO_Q2_6_t   pinmux_shared_io_q2_6;   /* ALT_PINMUX_SHARED_3V_IO_Q2_6 */
    ALT_PINMUX_SHARED_3V_IO_Q2_7_t   pinmux_shared_io_q2_7;   /* ALT_PINMUX_SHARED_3V_IO_Q2_7 */
    ALT_PINMUX_SHARED_3V_IO_Q2_8_t   pinmux_shared_io_q2_8;   /* ALT_PINMUX_SHARED_3V_IO_Q2_8 */
    ALT_PINMUX_SHARED_3V_IO_Q2_9_t   pinmux_shared_io_q2_9;   /* ALT_PINMUX_SHARED_3V_IO_Q2_9 */
    ALT_PINMUX_SHARED_3V_IO_Q2_10_t  pinmux_shared_io_q2_10;  /* ALT_PINMUX_SHARED_3V_IO_Q2_10 */
    ALT_PINMUX_SHARED_3V_IO_Q2_11_t  pinmux_shared_io_q2_11;  /* ALT_PINMUX_SHARED_3V_IO_Q2_11 */
    ALT_PINMUX_SHARED_3V_IO_Q2_12_t  pinmux_shared_io_q2_12;  /* ALT_PINMUX_SHARED_3V_IO_Q2_12 */
    ALT_PINMUX_SHARED_3V_IO_Q3_1_t   pinmux_shared_io_q3_1;   /* ALT_PINMUX_SHARED_3V_IO_Q3_1 */
    ALT_PINMUX_SHARED_3V_IO_Q3_2_t   pinmux_shared_io_q3_2;   /* ALT_PINMUX_SHARED_3V_IO_Q3_2 */
    ALT_PINMUX_SHARED_3V_IO_Q3_3_t   pinmux_shared_io_q3_3;   /* ALT_PINMUX_SHARED_3V_IO_Q3_3 */
    ALT_PINMUX_SHARED_3V_IO_Q3_4_t   pinmux_shared_io_q3_4;   /* ALT_PINMUX_SHARED_3V_IO_Q3_4 */
    ALT_PINMUX_SHARED_3V_IO_Q3_5_t   pinmux_shared_io_q3_5;   /* ALT_PINMUX_SHARED_3V_IO_Q3_5 */
    ALT_PINMUX_SHARED_3V_IO_Q3_6_t   pinmux_shared_io_q3_6;   /* ALT_PINMUX_SHARED_3V_IO_Q3_6 */
    ALT_PINMUX_SHARED_3V_IO_Q3_7_t   pinmux_shared_io_q3_7;   /* ALT_PINMUX_SHARED_3V_IO_Q3_7 */
    ALT_PINMUX_SHARED_3V_IO_Q3_8_t   pinmux_shared_io_q3_8;   /* ALT_PINMUX_SHARED_3V_IO_Q3_8 */
    ALT_PINMUX_SHARED_3V_IO_Q3_9_t   pinmux_shared_io_q3_9;   /* ALT_PINMUX_SHARED_3V_IO_Q3_9 */
    ALT_PINMUX_SHARED_3V_IO_Q3_10_t  pinmux_shared_io_q3_10;  /* ALT_PINMUX_SHARED_3V_IO_Q3_10 */
    ALT_PINMUX_SHARED_3V_IO_Q3_11_t  pinmux_shared_io_q3_11;  /* ALT_PINMUX_SHARED_3V_IO_Q3_11 */
    ALT_PINMUX_SHARED_3V_IO_Q3_12_t  pinmux_shared_io_q3_12;  /* ALT_PINMUX_SHARED_3V_IO_Q3_12 */
    ALT_PINMUX_SHARED_3V_IO_Q4_1_t   pinmux_shared_io_q4_1;   /* ALT_PINMUX_SHARED_3V_IO_Q4_1 */
    ALT_PINMUX_SHARED_3V_IO_Q4_2_t   pinmux_shared_io_q4_2;   /* ALT_PINMUX_SHARED_3V_IO_Q4_2 */
    ALT_PINMUX_SHARED_3V_IO_Q4_3_t   pinmux_shared_io_q4_3;   /* ALT_PINMUX_SHARED_3V_IO_Q4_3 */
    ALT_PINMUX_SHARED_3V_IO_Q4_4_t   pinmux_shared_io_q4_4;   /* ALT_PINMUX_SHARED_3V_IO_Q4_4 */
    ALT_PINMUX_SHARED_3V_IO_Q4_5_t   pinmux_shared_io_q4_5;   /* ALT_PINMUX_SHARED_3V_IO_Q4_5 */
    ALT_PINMUX_SHARED_3V_IO_Q4_6_t   pinmux_shared_io_q4_6;   /* ALT_PINMUX_SHARED_3V_IO_Q4_6 */
    ALT_PINMUX_SHARED_3V_IO_Q4_7_t   pinmux_shared_io_q4_7;   /* ALT_PINMUX_SHARED_3V_IO_Q4_7 */
    ALT_PINMUX_SHARED_3V_IO_Q4_8_t   pinmux_shared_io_q4_8;   /* ALT_PINMUX_SHARED_3V_IO_Q4_8 */
    ALT_PINMUX_SHARED_3V_IO_Q4_9_t   pinmux_shared_io_q4_9;   /* ALT_PINMUX_SHARED_3V_IO_Q4_9 */
    ALT_PINMUX_SHARED_3V_IO_Q4_10_t  pinmux_shared_io_q4_10;  /* ALT_PINMUX_SHARED_3V_IO_Q4_10 */
    ALT_PINMUX_SHARED_3V_IO_Q4_11_t  pinmux_shared_io_q4_11;  /* ALT_PINMUX_SHARED_3V_IO_Q4_11 */
    ALT_PINMUX_SHARED_3V_IO_Q4_12_t  pinmux_shared_io_q4_12;  /* ALT_PINMUX_SHARED_3V_IO_Q4_12 */
    volatile uint32_t                _pad_0xc0_0x200[80];     /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PINMUX_SHARED_3V_IO_GRP. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_GRP_s  ALT_PINMUX_SHARED_3V_IO_GRP_t;
/* The struct declaration for the raw register contents of register group ALT_PINMUX_SHARED_3V_IO_GRP. */
struct ALT_PINMUX_SHARED_3V_IO_GRP_raw_s
{
    volatile uint32_t  pinmux_shared_io_q1_1;   /* ALT_PINMUX_SHARED_3V_IO_Q1_1 */
    volatile uint32_t  pinmux_shared_io_q1_2;   /* ALT_PINMUX_SHARED_3V_IO_Q1_2 */
    volatile uint32_t  pinmux_shared_io_q1_3;   /* ALT_PINMUX_SHARED_3V_IO_Q1_3 */
    volatile uint32_t  pinmux_shared_io_q1_4;   /* ALT_PINMUX_SHARED_3V_IO_Q1_4 */
    volatile uint32_t  pinmux_shared_io_q1_5;   /* ALT_PINMUX_SHARED_3V_IO_Q1_5 */
    volatile uint32_t  pinmux_shared_io_q1_6;   /* ALT_PINMUX_SHARED_3V_IO_Q1_6 */
    volatile uint32_t  pinmux_shared_io_q1_7;   /* ALT_PINMUX_SHARED_3V_IO_Q1_7 */
    volatile uint32_t  pinmux_shared_io_q1_8;   /* ALT_PINMUX_SHARED_3V_IO_Q1_8 */
    volatile uint32_t  pinmux_shared_io_q1_9;   /* ALT_PINMUX_SHARED_3V_IO_Q1_9 */
    volatile uint32_t  pinmux_shared_io_q1_10;  /* ALT_PINMUX_SHARED_3V_IO_Q1_10 */
    volatile uint32_t  pinmux_shared_io_q1_11;  /* ALT_PINMUX_SHARED_3V_IO_Q1_11 */
    volatile uint32_t  pinmux_shared_io_q1_12;  /* ALT_PINMUX_SHARED_3V_IO_Q1_12 */
    volatile uint32_t  pinmux_shared_io_q2_1;   /* ALT_PINMUX_SHARED_3V_IO_Q2_1 */
    volatile uint32_t  pinmux_shared_io_q2_2;   /* ALT_PINMUX_SHARED_3V_IO_Q2_2 */
    volatile uint32_t  pinmux_shared_io_q2_3;   /* ALT_PINMUX_SHARED_3V_IO_Q2_3 */
    volatile uint32_t  pinmux_shared_io_q2_4;   /* ALT_PINMUX_SHARED_3V_IO_Q2_4 */
    volatile uint32_t  pinmux_shared_io_q2_5;   /* ALT_PINMUX_SHARED_3V_IO_Q2_5 */
    volatile uint32_t  pinmux_shared_io_q2_6;   /* ALT_PINMUX_SHARED_3V_IO_Q2_6 */
    volatile uint32_t  pinmux_shared_io_q2_7;   /* ALT_PINMUX_SHARED_3V_IO_Q2_7 */
    volatile uint32_t  pinmux_shared_io_q2_8;   /* ALT_PINMUX_SHARED_3V_IO_Q2_8 */
    volatile uint32_t  pinmux_shared_io_q2_9;   /* ALT_PINMUX_SHARED_3V_IO_Q2_9 */
    volatile uint32_t  pinmux_shared_io_q2_10;  /* ALT_PINMUX_SHARED_3V_IO_Q2_10 */
    volatile uint32_t  pinmux_shared_io_q2_11;  /* ALT_PINMUX_SHARED_3V_IO_Q2_11 */
    volatile uint32_t  pinmux_shared_io_q2_12;  /* ALT_PINMUX_SHARED_3V_IO_Q2_12 */
    volatile uint32_t  pinmux_shared_io_q3_1;   /* ALT_PINMUX_SHARED_3V_IO_Q3_1 */
    volatile uint32_t  pinmux_shared_io_q3_2;   /* ALT_PINMUX_SHARED_3V_IO_Q3_2 */
    volatile uint32_t  pinmux_shared_io_q3_3;   /* ALT_PINMUX_SHARED_3V_IO_Q3_3 */
    volatile uint32_t  pinmux_shared_io_q3_4;   /* ALT_PINMUX_SHARED_3V_IO_Q3_4 */
    volatile uint32_t  pinmux_shared_io_q3_5;   /* ALT_PINMUX_SHARED_3V_IO_Q3_5 */
    volatile uint32_t  pinmux_shared_io_q3_6;   /* ALT_PINMUX_SHARED_3V_IO_Q3_6 */
    volatile uint32_t  pinmux_shared_io_q3_7;   /* ALT_PINMUX_SHARED_3V_IO_Q3_7 */
    volatile uint32_t  pinmux_shared_io_q3_8;   /* ALT_PINMUX_SHARED_3V_IO_Q3_8 */
    volatile uint32_t  pinmux_shared_io_q3_9;   /* ALT_PINMUX_SHARED_3V_IO_Q3_9 */
    volatile uint32_t  pinmux_shared_io_q3_10;  /* ALT_PINMUX_SHARED_3V_IO_Q3_10 */
    volatile uint32_t  pinmux_shared_io_q3_11;  /* ALT_PINMUX_SHARED_3V_IO_Q3_11 */
    volatile uint32_t  pinmux_shared_io_q3_12;  /* ALT_PINMUX_SHARED_3V_IO_Q3_12 */
    volatile uint32_t  pinmux_shared_io_q4_1;   /* ALT_PINMUX_SHARED_3V_IO_Q4_1 */
    volatile uint32_t  pinmux_shared_io_q4_2;   /* ALT_PINMUX_SHARED_3V_IO_Q4_2 */
    volatile uint32_t  pinmux_shared_io_q4_3;   /* ALT_PINMUX_SHARED_3V_IO_Q4_3 */
    volatile uint32_t  pinmux_shared_io_q4_4;   /* ALT_PINMUX_SHARED_3V_IO_Q4_4 */
    volatile uint32_t  pinmux_shared_io_q4_5;   /* ALT_PINMUX_SHARED_3V_IO_Q4_5 */
    volatile uint32_t  pinmux_shared_io_q4_6;   /* ALT_PINMUX_SHARED_3V_IO_Q4_6 */
    volatile uint32_t  pinmux_shared_io_q4_7;   /* ALT_PINMUX_SHARED_3V_IO_Q4_7 */
    volatile uint32_t  pinmux_shared_io_q4_8;   /* ALT_PINMUX_SHARED_3V_IO_Q4_8 */
    volatile uint32_t  pinmux_shared_io_q4_9;   /* ALT_PINMUX_SHARED_3V_IO_Q4_9 */
    volatile uint32_t  pinmux_shared_io_q4_10;  /* ALT_PINMUX_SHARED_3V_IO_Q4_10 */
    volatile uint32_t  pinmux_shared_io_q4_11;  /* ALT_PINMUX_SHARED_3V_IO_Q4_11 */
    volatile uint32_t  pinmux_shared_io_q4_12;  /* ALT_PINMUX_SHARED_3V_IO_Q4_12 */
    uint32_t           _pad_0xc0_0x200[80];     /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PINMUX_SHARED_3V_IO_GRP. */
typedef volatile struct ALT_PINMUX_SHARED_3V_IO_GRP_raw_s  ALT_PINMUX_SHARED_3V_IO_GRP_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_PINMUX_DCTD_IO_GRP
 * 
 */
/*
 * Register : Dedicated IO 1 OSC_CLK - pinmux_dedicated_io_1
 * 
 * reserved
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [31:0] | R      | 0x0   | ALT_PINMUX_DCTD_IO_1_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_1_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_1_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_1_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_WIDTH      32
/* The mask used to set the ALT_PINMUX_DCTD_IO_1_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PINMUX_DCTD_IO_1_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_PINMUX_DCTD_IO_1_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_1_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_1_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_1_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_1.
 */
struct ALT_PINMUX_DCTD_IO_1_s
{
    const uint32_t  Reserved : 32;  /* ALT_PINMUX_DCTD_IO_1_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_1. */
typedef volatile struct ALT_PINMUX_DCTD_IO_1_s  ALT_PINMUX_DCTD_IO_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_1 register. */
#define ALT_PINMUX_DCTD_IO_1_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_DCTD_IO_1 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_1_OFST        0x0

/*
 * Register : Dedicated IO 2 nPOR - pinmux_dedicated_io_2
 * 
 * reserved
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [31:0] | R      | 0x0   | ALT_PINMUX_DCTD_IO_2_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_2_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_2_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_2_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_WIDTH      32
/* The mask used to set the ALT_PINMUX_DCTD_IO_2_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PINMUX_DCTD_IO_2_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_PINMUX_DCTD_IO_2_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_2_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_2_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_2_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_2.
 */
struct ALT_PINMUX_DCTD_IO_2_s
{
    const uint32_t  Reserved : 32;  /* ALT_PINMUX_DCTD_IO_2_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_2. */
typedef volatile struct ALT_PINMUX_DCTD_IO_2_s  ALT_PINMUX_DCTD_IO_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_2 register. */
#define ALT_PINMUX_DCTD_IO_2_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_DCTD_IO_2 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_2_OFST        0x4

/*
 * Register : Dedicated IO 3 nRST - pinmux_dedicated_io_3
 * 
 * reserved
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [31:0] | R      | 0x0   | ALT_PINMUX_DCTD_IO_3_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_3_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_3_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_3_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_WIDTH      32
/* The mask used to set the ALT_PINMUX_DCTD_IO_3_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_PINMUX_DCTD_IO_3_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_PINMUX_DCTD_IO_3_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_3_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_3_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_3_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_3.
 */
struct ALT_PINMUX_DCTD_IO_3_s
{
    const uint32_t  Reserved : 32;  /* ALT_PINMUX_DCTD_IO_3_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_3. */
typedef volatile struct ALT_PINMUX_DCTD_IO_3_s  ALT_PINMUX_DCTD_IO_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_3 register. */
#define ALT_PINMUX_DCTD_IO_3_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_DCTD_IO_3 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_3_OFST        0x8

/*
 * Register : Dedicated IO 4 Mux Selection Register - pinmux_dedicated_io_4
 * 
 * This register is used to control the peripherals connected to dedicated IO pin 4
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 4 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_4_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 4 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 4
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal qspi.clk
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data0
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq0
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_4_SEL register field. */
#define ALT_PINMUX_DCTD_IO_4_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_4_SEL register field. */
#define ALT_PINMUX_DCTD_IO_4_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_4_SEL register field. */
#define ALT_PINMUX_DCTD_IO_4_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_4_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_4_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_4_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_4_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_4_SEL register field. */
#define ALT_PINMUX_DCTD_IO_4_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_4_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_4_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_4_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_4_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_4_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_4_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_4_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_4_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_4_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_4_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_4_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_4_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_4_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_4.
 */
struct ALT_PINMUX_DCTD_IO_4_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 4 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_4_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_4. */
typedef volatile struct ALT_PINMUX_DCTD_IO_4_s  ALT_PINMUX_DCTD_IO_4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_4 register. */
#define ALT_PINMUX_DCTD_IO_4_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_4 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_4_OFST        0xc

/*
 * Register : Dedicated IO 5 Mux Selection Register - pinmux_dedicated_io_5
 * 
 * This register is used to control the peripherals connected to dedicated IO pin 5
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 5 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_5_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 5 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 5
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal qspi.io0
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.cmd
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq1
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_5_SEL register field. */
#define ALT_PINMUX_DCTD_IO_5_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_5_SEL register field. */
#define ALT_PINMUX_DCTD_IO_5_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_5_SEL register field. */
#define ALT_PINMUX_DCTD_IO_5_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_5_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_5_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_5_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_5_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_5_SEL register field. */
#define ALT_PINMUX_DCTD_IO_5_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_5_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_5_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_5_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_5_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_5_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_5_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_5_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_5_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_5_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_5_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_5_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_5_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_5_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_5.
 */
struct ALT_PINMUX_DCTD_IO_5_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 5 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_5_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_5. */
typedef volatile struct ALT_PINMUX_DCTD_IO_5_s  ALT_PINMUX_DCTD_IO_5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_5 register. */
#define ALT_PINMUX_DCTD_IO_5_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_5 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_5_OFST        0x10

/*
 * Register : Dedicated IO 6 Mux Selection Register - pinmux_dedicated_io_6
 * 
 * This register is used to control the peripherals connected to dedicated IO pin 6
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 6 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_6_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 6 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 6
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal qspi.ss0
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.cclk
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.we_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_6_SEL register field. */
#define ALT_PINMUX_DCTD_IO_6_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_6_SEL register field. */
#define ALT_PINMUX_DCTD_IO_6_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_6_SEL register field. */
#define ALT_PINMUX_DCTD_IO_6_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_6_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_6_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_6_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_6_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_6_SEL register field. */
#define ALT_PINMUX_DCTD_IO_6_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_6_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_6_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_6_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_6_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_6_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_6_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_6_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_6_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_6_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_6_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_6_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_6_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_6_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_6.
 */
struct ALT_PINMUX_DCTD_IO_6_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 6 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_6_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_6. */
typedef volatile struct ALT_PINMUX_DCTD_IO_6_s  ALT_PINMUX_DCTD_IO_6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_6 register. */
#define ALT_PINMUX_DCTD_IO_6_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_6 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_6_OFST        0x14

/*
 * Register : Dedicated IO 7 Mux Selection Register - pinmux_dedicated_io_7
 * 
 * This register is used to control the peripherals connected to dedicated IO pin 7
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 7 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_7_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 7 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 7
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal qspi.io1
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.re_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_7_SEL register field. */
#define ALT_PINMUX_DCTD_IO_7_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_7_SEL register field. */
#define ALT_PINMUX_DCTD_IO_7_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_7_SEL register field. */
#define ALT_PINMUX_DCTD_IO_7_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_7_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_7_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_7_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_7_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_7_SEL register field. */
#define ALT_PINMUX_DCTD_IO_7_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_7_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_7_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_7_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_7_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_7_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_7_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_7_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_7_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_7_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_7_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_7_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_7_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_7_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_7.
 */
struct ALT_PINMUX_DCTD_IO_7_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 7 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_7_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_7. */
typedef volatile struct ALT_PINMUX_DCTD_IO_7_s  ALT_PINMUX_DCTD_IO_7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_7 register. */
#define ALT_PINMUX_DCTD_IO_7_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_7 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_7_OFST        0x18

/*
 * Register : Dedicated IO 8 Mux Selection Register - pinmux_dedicated_io_8
 * 
 * This register is used to control the peripherals connected to dedicated IO pin 8
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 8 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_8_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 8 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 8
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal qspi.io2_wpn
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq2
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_8_SEL register field. */
#define ALT_PINMUX_DCTD_IO_8_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_8_SEL register field. */
#define ALT_PINMUX_DCTD_IO_8_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_8_SEL register field. */
#define ALT_PINMUX_DCTD_IO_8_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_8_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_8_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_8_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_8_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_8_SEL register field. */
#define ALT_PINMUX_DCTD_IO_8_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_8_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_8_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_8_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_8_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_8_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_8_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_8_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_8_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_8_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_8_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_8_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_8_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_8_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_8.
 */
struct ALT_PINMUX_DCTD_IO_8_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 8 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_8_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_8. */
typedef volatile struct ALT_PINMUX_DCTD_IO_8_s  ALT_PINMUX_DCTD_IO_8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_8 register. */
#define ALT_PINMUX_DCTD_IO_8_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_8 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_8_OFST        0x1c

/*
 * Register : Dedicated IO 9 Mux Selection Register - pinmux_dedicated_io_9
 * 
 * This register is used to control the peripherals connected to dedicated IO pin 9
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 9 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_9_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 9 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 9
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal qspi.io3_hold
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq3
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io5
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_9_SEL register field. */
#define ALT_PINMUX_DCTD_IO_9_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_9_SEL register field. */
#define ALT_PINMUX_DCTD_IO_9_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_9_SEL register field. */
#define ALT_PINMUX_DCTD_IO_9_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_9_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_9_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_9_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_9_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_9_SEL register field. */
#define ALT_PINMUX_DCTD_IO_9_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_9_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_9_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_9_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_9_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_9_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_9_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_9_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_9_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_9_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_9_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_9_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_9_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_9_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_9.
 */
struct ALT_PINMUX_DCTD_IO_9_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 9 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_9_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_9. */
typedef volatile struct ALT_PINMUX_DCTD_IO_9_s  ALT_PINMUX_DCTD_IO_9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_9 register. */
#define ALT_PINMUX_DCTD_IO_9_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_9 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_9_OFST        0x20

/*
 * Register : Dedicated IO 10 Mux Selection Register - pinmux_dedicated_io_10
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 10
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 10 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_10_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 10 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 10
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.miso
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.ss1_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.pwr_ena
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.cle
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io6
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_10_SEL register field. */
#define ALT_PINMUX_DCTD_IO_10_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_10_SEL register field. */
#define ALT_PINMUX_DCTD_IO_10_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_10_SEL register field. */
#define ALT_PINMUX_DCTD_IO_10_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_10_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_10_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_10_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_10_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_10_SEL register field. */
#define ALT_PINMUX_DCTD_IO_10_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_10_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_10_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_10_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_10_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_10_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_10_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_10_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_10_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_10_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_10_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_10_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_10_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_10_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_10.
 */
struct ALT_PINMUX_DCTD_IO_10_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 10 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_10_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_10. */
typedef volatile struct ALT_PINMUX_DCTD_IO_10_s  ALT_PINMUX_DCTD_IO_10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_10 register. */
#define ALT_PINMUX_DCTD_IO_10_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_10 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_10_OFST        0x24

/*
 * Register : Dedicated IO 11 Mux Selection Register - pinmux_dedicated_io_11
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 11
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 11 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_11_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 11 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 11
 * 
 * 0000 (0) Pin is connected to Peripheral signal not applicable
 * 
 * 0001 (1) Pin is connected to Peripheral signal not applicable
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.clk
 * 
 * 0100 (4) Pin is connected to Peripheral signal cm.pll_clk0
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal qspi.ss1
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal not applicable
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.ale
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io7
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_11_SEL register field. */
#define ALT_PINMUX_DCTD_IO_11_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_11_SEL register field. */
#define ALT_PINMUX_DCTD_IO_11_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_11_SEL register field. */
#define ALT_PINMUX_DCTD_IO_11_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_11_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_11_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_11_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_11_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_11_SEL register field. */
#define ALT_PINMUX_DCTD_IO_11_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_11_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_11_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_11_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_11_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_11_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_11_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_11_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_11_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_11_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_11_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_11_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_11_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_11_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_11.
 */
struct ALT_PINMUX_DCTD_IO_11_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 11 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_11_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_11. */
typedef volatile struct ALT_PINMUX_DCTD_IO_11_s  ALT_PINMUX_DCTD_IO_11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_11 register. */
#define ALT_PINMUX_DCTD_IO_11_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_11 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_11_OFST        0x28

/*
 * Register : Dedicated IO 12 Mux Selection Register - pinmux_dedicated_io_12
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 12
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 12 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_12_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 12 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 12
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac1.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac1.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.mosi
 * 
 * 0100 (4) Pin is connected to Peripheral signal cm.pll_clk1
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data4
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.rb
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_12_SEL register field. */
#define ALT_PINMUX_DCTD_IO_12_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_12_SEL register field. */
#define ALT_PINMUX_DCTD_IO_12_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_12_SEL register field. */
#define ALT_PINMUX_DCTD_IO_12_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_12_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_12_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_12_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_12_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_12_SEL register field. */
#define ALT_PINMUX_DCTD_IO_12_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_12_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_12_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_12_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_12_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_12_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_12_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_12_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_12_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_12_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_12_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_12_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_12_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_12_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_12.
 */
struct ALT_PINMUX_DCTD_IO_12_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 12 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_12_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_12. */
typedef volatile struct ALT_PINMUX_DCTD_IO_12_s  ALT_PINMUX_DCTD_IO_12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_12 register. */
#define ALT_PINMUX_DCTD_IO_12_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_12 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_12_OFST        0x2c

/*
 * Register : Dedicated IO 13 Mux Selection Register - pinmux_dedicated_io_13
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 13
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 13 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_13_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 13 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 13
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac1.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac1.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.miso
 * 
 * 0100 (4) Pin is connected to Peripheral signal cm.pll_clk2
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data5
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.ce_n
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io9
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_13_SEL register field. */
#define ALT_PINMUX_DCTD_IO_13_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_13_SEL register field. */
#define ALT_PINMUX_DCTD_IO_13_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_13_SEL register field. */
#define ALT_PINMUX_DCTD_IO_13_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_13_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_13_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_13_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_13_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_13_SEL register field. */
#define ALT_PINMUX_DCTD_IO_13_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_13_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_13_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_13_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_13_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_13_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_13_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_13_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_13_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_13_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_13_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_13_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_13_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_13_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_13.
 */
struct ALT_PINMUX_DCTD_IO_13_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 13 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_13_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_13. */
typedef volatile struct ALT_PINMUX_DCTD_IO_13_s  ALT_PINMUX_DCTD_IO_13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_13 register. */
#define ALT_PINMUX_DCTD_IO_13_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_13 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_13_OFST        0x30

/*
 * Register : Dedicated IO 14 Mux Selection Register - pinmux_dedicated_io_14
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 14
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 14 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_14_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 14 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 14
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac2.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal not applicable
 * 
 * 0011 (3) Pin is connected to Peripheral signal spim0.ss0_n
 * 
 * 0100 (4) Pin is connected to Peripheral signal cm.pll_clk3
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data6
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.cts_n
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq4
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io10
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_14_SEL register field. */
#define ALT_PINMUX_DCTD_IO_14_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_14_SEL register field. */
#define ALT_PINMUX_DCTD_IO_14_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_14_SEL register field. */
#define ALT_PINMUX_DCTD_IO_14_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_14_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_14_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_14_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_14_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_14_SEL register field. */
#define ALT_PINMUX_DCTD_IO_14_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_14_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_14_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_14_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_14_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_14_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_14_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_14_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_14_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_14_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_14_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_14_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_14_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_14_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_14.
 */
struct ALT_PINMUX_DCTD_IO_14_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 14 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_14_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_14. */
typedef volatile struct ALT_PINMUX_DCTD_IO_14_s  ALT_PINMUX_DCTD_IO_14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_14 register. */
#define ALT_PINMUX_DCTD_IO_14_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_14 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_14_OFST        0x34

/*
 * Register : Dedicated IO 15 Mux Selection Register - pinmux_dedicated_io_15
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 15
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 15 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_15_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 15 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 15
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac2.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac2.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.clk
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal cm.pll_clk4
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal sdmmc.data7
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq5
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io11
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_15_SEL register field. */
#define ALT_PINMUX_DCTD_IO_15_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_15_SEL register field. */
#define ALT_PINMUX_DCTD_IO_15_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_15_SEL register field. */
#define ALT_PINMUX_DCTD_IO_15_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_15_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_15_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_15_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_15_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_15_SEL register field. */
#define ALT_PINMUX_DCTD_IO_15_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_15_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_15_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_15_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_15_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_15_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_15_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_15_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_15_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_15_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_15_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_15_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_15_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_15_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_15.
 */
struct ALT_PINMUX_DCTD_IO_15_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 15 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_15_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_15. */
typedef volatile struct ALT_PINMUX_DCTD_IO_15_s  ALT_PINMUX_DCTD_IO_15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_15 register. */
#define ALT_PINMUX_DCTD_IO_15_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_15 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_15_OFST        0x38

/*
 * Register : Dedicated IO 16 Mux Selection Register - pinmux_dedicated_io_16
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 16
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 16 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_16_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 16 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 16
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.sda
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdio
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.mosi
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal qspi.ss2
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.tx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq6
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io12
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_16_SEL register field. */
#define ALT_PINMUX_DCTD_IO_16_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_16_SEL register field. */
#define ALT_PINMUX_DCTD_IO_16_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_16_SEL register field. */
#define ALT_PINMUX_DCTD_IO_16_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_16_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_16_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_16_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_16_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_16_SEL register field. */
#define ALT_PINMUX_DCTD_IO_16_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_16_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_16_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_16_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_16_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_16_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_16_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_16_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_16_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_16_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_16_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_16_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_16_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_16_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_16.
 */
struct ALT_PINMUX_DCTD_IO_16_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 16 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_16_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_16. */
typedef volatile struct ALT_PINMUX_DCTD_IO_16_s  ALT_PINMUX_DCTD_IO_16_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_16 register. */
#define ALT_PINMUX_DCTD_IO_16_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_16 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_16_OFST        0x3c

/*
 * Register : Dedicated IO 17 Mux Selection Register - pinmux_dedicated_io_17
 * 
 * This register is used to control the peripherals connected to dedicated IO pin
 * 17
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [3:0]  | RW     | 0xf   | Dedicated IO 17 Mux Selection Field
 *  [31:4] | R      | 0x0   | ALT_PINMUX_DCTD_IO_17_RSVD         
 * 
 */
/*
 * Field : Dedicated IO 17 Mux Selection Field - sel
 * 
 * Select peripheral signals connected Dedicated IO 17
 * 
 * 0000 (0) Pin is connected to Peripheral signal i2c_emac0.scl
 * 
 * 0001 (1) Pin is connected to Peripheral signal emac0.mdc
 * 
 * 0010 (2) Pin is connected to Peripheral signal spis0.ss0_n
 * 
 * 0011 (3) Pin is connected to Peripheral signal not applicable
 * 
 * 0100 (4) Pin is connected to Peripheral signal not applicable
 * 
 * 0101 (5) Pin is connected to Peripheral signal not applicable
 * 
 * 0110 (6) Pin is connected to Peripheral signal not applicable
 * 
 * 0111 (7) Pin is connected to Peripheral signal not applicable
 * 
 * 1000 (8) Pin is connected to Peripheral signal qspi.ss3
 * 
 * 1001 (9) Pin is connected to Peripheral signal not applicable
 * 
 * 1010 (10) Pin is connected to Peripheral signal not applicable
 * 
 * 1011 (11) Pin is connected to Peripheral signal not applicable
 * 
 * 1100 (12) Pin is connected to Peripheral signal not applicable
 * 
 * 1101 (13) Pin is connected to Peripheral signal uart1.rx
 * 
 * 1110 (14) Pin is connected to Peripheral signal nand.adq7
 * 
 * 1111 (15) Pin is connected to Peripheral signal gpio2.io13
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_17_SEL register field. */
#define ALT_PINMUX_DCTD_IO_17_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_17_SEL register field. */
#define ALT_PINMUX_DCTD_IO_17_SEL_MSB        3
/* The width in bits of the ALT_PINMUX_DCTD_IO_17_SEL register field. */
#define ALT_PINMUX_DCTD_IO_17_SEL_WIDTH      4
/* The mask used to set the ALT_PINMUX_DCTD_IO_17_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_17_SEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_17_SEL register field value. */
#define ALT_PINMUX_DCTD_IO_17_SEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_PINMUX_DCTD_IO_17_SEL register field. */
#define ALT_PINMUX_DCTD_IO_17_SEL_RESET      0xf
/* Extracts the ALT_PINMUX_DCTD_IO_17_SEL field value from a register. */
#define ALT_PINMUX_DCTD_IO_17_SEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_17_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_17_SEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_17_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_17_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_17_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_WIDTH      28
/* The mask used to set the ALT_PINMUX_DCTD_IO_17_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_17_RSVD register field value. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_CLR_MSK    0x0000000f
/* The reset value of the ALT_PINMUX_DCTD_IO_17_RSVD register field. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_17_RSVD field value from a register. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_PINMUX_DCTD_IO_17_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_17_RSVD_SET(value) (((value) << 4) & 0xfffffff0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_17.
 */
struct ALT_PINMUX_DCTD_IO_17_s
{
    uint32_t        sel      :  4;  /* Dedicated IO 17 Mux Selection Field */
    const uint32_t  Reserved : 28;  /* ALT_PINMUX_DCTD_IO_17_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_17. */
typedef volatile struct ALT_PINMUX_DCTD_IO_17_s  ALT_PINMUX_DCTD_IO_17_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_17 register. */
#define ALT_PINMUX_DCTD_IO_17_RESET       0x0000000f
/* The byte offset of the ALT_PINMUX_DCTD_IO_17 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_17_OFST        0x40

/*
 * Register : Voltage Level Configuration Register - configuration_dedicated_io_bank
 * 
 * This register is used to control the voltage select for all dedicated IO.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [1:0]   | RW     | 0x0   | Voltage select                         
 *  [7:2]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2  
 *  [9:8]   | RW     | 0x0   | Voltage select                         
 *  [31:10] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10
 * 
 */
/*
 * Field : Voltage select - VOLTAGE_SEL_PERI_IO
 * 
 * Configuration bits for voltage select. This only affects peripheral IO (exclude
 * CLK and RST IO).
 * 
 * 00 : 3.0V operation
 * 
 * 01 : 1.8V operation
 * 
 * 10 : 2.5V operation
 * 
 * 11 : RSVD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_MSB        1
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_SET_MSK    0x00000003
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_CLR_MSK    0xfffffffc
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_PERI_IO_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : Reserved_7to2
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_WIDTH      6
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_SET_MSK    0x000000fc
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_CLR_MSK    0xffffff03
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_GET(value) (((value) & 0x000000fc) >> 2)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2_SET(value) (((value) << 2) & 0x000000fc)

/*
 * Field : Voltage select - VOLTAGE_SEL_CLKRST_IO
 * 
 * Configuration bits for voltage select. This only affects CLK and RST IO.
 * 
 * 00 : 3.0V operation
 * 
 * 01 : 1.8V operation
 * 
 * 10 : 2.5V operation
 * 
 * 11 : RSVD
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_MSB        9
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_SET_MSK    0x00000300
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_CLR_MSK    0xfffffcff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_VOLTAGE_SEL_CLKRST_IO_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : Reserved_31to10
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_WIDTH      22
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_SET_MSK    0xfffffc00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_CLR_MSK    0x000003ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_GET(value) (((value) & 0xfffffc00) >> 10)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10_SET(value) (((value) << 10) & 0xfffffc00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_BANK.
 */
struct ALT_PINMUX_DCTD_IO_CFG_BANK_s
{
    uint32_t        VOLTAGE_SEL_PERI_IO   :  2;  /* Voltage select */
    const uint32_t  Reserved_7to2         :  6;  /* ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_7TO2 */
    uint32_t        VOLTAGE_SEL_CLKRST_IO :  2;  /* Voltage select */
    const uint32_t  Reserved_31to10       : 22;  /* ALT_PINMUX_DCTD_IO_CFG_BANK_RSVD_31TO10 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_BANK. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_BANK_s  ALT_PINMUX_DCTD_IO_CFG_BANK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_BANK register. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_BANK register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_BANK_OFST        0x100

/*
 * Register : Dedicated IO 1 Configuration Register - configuration_dedicated_io_1
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 1
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x0   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_1.
 */
struct ALT_PINMUX_DCTD_IO_CFG_1_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_1_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_1_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_1_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_1. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_1_s  ALT_PINMUX_DCTD_IO_CFG_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_1 register. */
#define ALT_PINMUX_DCTD_IO_CFG_1_RESET       0x000d0000
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_1 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_1_OFST        0x104

/*
 * Register : Dedicated IO 2 Configuration Register - configuration_dedicated_io_2
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 2
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x0   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_2.
 */
struct ALT_PINMUX_DCTD_IO_CFG_2_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_2_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_2_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_2_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_2. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_2_s  ALT_PINMUX_DCTD_IO_CFG_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_2 register. */
#define ALT_PINMUX_DCTD_IO_CFG_2_RESET       0x000d0000
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_2 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_2_OFST        0x108

/*
 * Register : Dedicated IO 3 Configuration Register - configuration_dedicated_io_3
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 3
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14
 *  [16]    | RW     | 0x0   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_3.
 */
struct ALT_PINMUX_DCTD_IO_CFG_3_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_3_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_3_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_3_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_3. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_3_s  ALT_PINMUX_DCTD_IO_CFG_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_3 register. */
#define ALT_PINMUX_DCTD_IO_CFG_3_RESET       0x000c0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_3 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_3_OFST        0x10c

/*
 * Register : Dedicated IO 4 Configuration Register - configuration_dedicated_io_4
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 4
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_4.
 */
struct ALT_PINMUX_DCTD_IO_CFG_4_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_4_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_4_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_4_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_4. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_4_s  ALT_PINMUX_DCTD_IO_CFG_4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_4 register. */
#define ALT_PINMUX_DCTD_IO_CFG_4_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_4 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_4_OFST        0x110

/*
 * Register : Dedicated IO 5 Configuration Register - configuration_dedicated_io_5
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 5
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_5.
 */
struct ALT_PINMUX_DCTD_IO_CFG_5_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_5_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_5_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_5_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_5. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_5_s  ALT_PINMUX_DCTD_IO_CFG_5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_5 register. */
#define ALT_PINMUX_DCTD_IO_CFG_5_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_5 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_5_OFST        0x114

/*
 * Register : Dedicated IO 6 Configuration Register - configuration_dedicated_io_6
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 6
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_6.
 */
struct ALT_PINMUX_DCTD_IO_CFG_6_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_6_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_6_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_6_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_6. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_6_s  ALT_PINMUX_DCTD_IO_CFG_6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_6 register. */
#define ALT_PINMUX_DCTD_IO_CFG_6_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_6 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_6_OFST        0x118

/*
 * Register : Dedicated IO 7 Configuration Register - configuration_dedicated_io_7
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 7
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_7.
 */
struct ALT_PINMUX_DCTD_IO_CFG_7_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_7_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_7_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_7_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_7. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_7_s  ALT_PINMUX_DCTD_IO_CFG_7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_7 register. */
#define ALT_PINMUX_DCTD_IO_CFG_7_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_7 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_7_OFST        0x11c

/*
 * Register : Dedicated IO 8 Configuration Register - configuration_dedicated_io_8
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 8
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_8.
 */
struct ALT_PINMUX_DCTD_IO_CFG_8_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_8_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_8_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_8_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_8. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_8_s  ALT_PINMUX_DCTD_IO_CFG_8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_8 register. */
#define ALT_PINMUX_DCTD_IO_CFG_8_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_8 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_8_OFST        0x120

/*
 * Register : Dedicated IO 9 Configuration Register - configuration_dedicated_io_9
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 9
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength            
 *  [5]     | RW     | 0x0   | NMOS slew rate                      
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength              
 *  [13]    | RW     | 0x0   | PMOS slew rate                      
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                 
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal    
 *  [21:19] | RW     | 0x1   | Bias trim bits                      
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_9.
 */
struct ALT_PINMUX_DCTD_IO_CFG_9_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_9_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_9_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_9_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_9. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_9_s  ALT_PINMUX_DCTD_IO_CFG_9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_9 register. */
#define ALT_PINMUX_DCTD_IO_CFG_9_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_9 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_9_OFST        0x124

/*
 * Register : Dedicated IO 10 Configuration Register - configuration_dedicated_io_10
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 10
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_10.
 */
struct ALT_PINMUX_DCTD_IO_CFG_10_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_10_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_10_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_10_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_10. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_10_s  ALT_PINMUX_DCTD_IO_CFG_10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_10 register. */
#define ALT_PINMUX_DCTD_IO_CFG_10_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_10 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_10_OFST        0x128

/*
 * Register : Dedicated IO 11 Configuration Register - configuration_dedicated_io_11
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 11
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_11.
 */
struct ALT_PINMUX_DCTD_IO_CFG_11_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_11_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_11_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_11_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_11. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_11_s  ALT_PINMUX_DCTD_IO_CFG_11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_11 register. */
#define ALT_PINMUX_DCTD_IO_CFG_11_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_11 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_11_OFST        0x12c

/*
 * Register : Dedicated IO 12 Configuration Register - configuration_dedicated_io_12
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 12
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_12.
 */
struct ALT_PINMUX_DCTD_IO_CFG_12_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_12_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_12_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_12_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_12. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_12_s  ALT_PINMUX_DCTD_IO_CFG_12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_12 register. */
#define ALT_PINMUX_DCTD_IO_CFG_12_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_12 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_12_OFST        0x130

/*
 * Register : Dedicated IO 13 Configuration Register - configuration_dedicated_io_13
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 13
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_13.
 */
struct ALT_PINMUX_DCTD_IO_CFG_13_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_13_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_13_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_13_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_13. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_13_s  ALT_PINMUX_DCTD_IO_CFG_13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_13 register. */
#define ALT_PINMUX_DCTD_IO_CFG_13_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_13 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_13_OFST        0x134

/*
 * Register : Dedicated IO 14 Configuration Register - configuration_dedicated_io_14
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 14
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_14.
 */
struct ALT_PINMUX_DCTD_IO_CFG_14_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_14_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_14_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_14_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_14. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_14_s  ALT_PINMUX_DCTD_IO_CFG_14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_14 register. */
#define ALT_PINMUX_DCTD_IO_CFG_14_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_14 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_14_OFST        0x138

/*
 * Register : Dedicated IO 15 Configuration Register - configuration_dedicated_io_15
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 15
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_15.
 */
struct ALT_PINMUX_DCTD_IO_CFG_15_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_15_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_15_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_15_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_15. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_15_s  ALT_PINMUX_DCTD_IO_CFG_15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_15 register. */
#define ALT_PINMUX_DCTD_IO_CFG_15_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_15 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_15_OFST        0x13c

/*
 * Register : Dedicated IO 16 Configuration Register - configuration_dedicated_io_16
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 16
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_16.
 */
struct ALT_PINMUX_DCTD_IO_CFG_16_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_16_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_16_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_16_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_16. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_16_s  ALT_PINMUX_DCTD_IO_CFG_16_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_16 register. */
#define ALT_PINMUX_DCTD_IO_CFG_16_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_16 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_16_OFST        0x140

/*
 * Register : Dedicated IO 17 Configuration Register - configuration_dedicated_io_17
 * 
 * This register is used to control the electrical behavior and direction of
 * Dedicated IO 17
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [4:0]   | RW     | 0x8   | Pull down drive strength             
 *  [5]     | RW     | 0x0   | NMOS slew rate                       
 *  [7:6]   | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6  
 *  [12:8]  | RW     | 0x0   | Pull up drive strength               
 *  [13]    | RW     | 0x0   | PMOS slew rate                       
 *  [15:14] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14
 *  [16]    | RW     | 0x1   | Weak pull up signal                  
 *  [18:17] | RW     | 0x2   | LVTTL input buffer enable signal     
 *  [21:19] | RW     | 0x1   | Bias trim bits                       
 *  [31:22] | R      | 0x0   | ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22
 * 
 */
/*
 * Field : Pull down drive strength - PD_DRV_STRG
 * 
 * Configuration bits for NMOS pull down drive strength.
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_MSB        4
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_SET_MSK    0x0000001f
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_CLR_MSK    0xffffffe0
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_RESET      0x8
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_DRV_STRG_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : NMOS slew rate - PD_SLW_RT
 * 
 * Configuration bit for output pull down slew rate control
 * 
 * 0 : slow N slew
 * 
 * 1 : fast N slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_MSB        5
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_SET_MSK    0x00000020
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PD_SLW_RT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Reserved_7to6
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_MSB        7
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_SET_MSK    0x000000c0
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_CLR_MSK    0xffffff3f
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : Pull up drive strength - PU_DRV_STRG
 * 
 * Configuration bits for PMOS pull up drive strength
 * 
 * Pending Characterization
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_MSB        12
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_WIDTH      5
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_SET_MSK    0x00001f00
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_DRV_STRG_SET(value) (((value) << 8) & 0x00001f00)

/*
 * Field : PMOS slew rate - PU_SLW_RT
 * 
 * Configuration bit for output pull up slew rate control
 * 
 * 0 : slow P slew
 * 
 * 1 : fast P slew
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_MSB        13
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_SET_MSK    0x00002000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_PU_SLW_RT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15to14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_MSB        15
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : Weak pull up signal - WK_PU_EN
 * 
 * Configuration bit for weak pull up enable
 * 
 * 0 : weak pull up disable
 * 
 * 1 : weak pull up enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_MSB        16
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_WIDTH      1
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_WK_PU_EN_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : LVTTL input buffer enable signal - INPUT_BUF_EN
 * 
 * Configuration bits for LVTTL input buffer enable
 * 
 * 00 : disable
 * 
 * 01 : 1.8V TTL
 * 
 * 10 : 2.5V/3.0V TTL
 * 
 * 11 : 1.8V TTL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_MSB        18
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_WIDTH      2
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_SET_MSK    0x00060000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_CLR_MSK    0xfff9ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_RESET      0x2
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_GET(value) (((value) & 0x00060000) >> 17)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_INPUT_BUF_EN_SET(value) (((value) << 17) & 0x00060000)

/*
 * Field : Bias trim bits - RTRIM
 * 
 * Configuration bits for bias trim
 * 
 * 000 : disable
 * 
 * 001 : default
 * 
 * 010 : trim low
 * 
 * 100 : trim high
 * 
 * others : invalid/reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_MSB        21
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_WIDTH      3
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_SET_MSK    0x00380000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_RTRIM register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_CLR_MSK    0xffc7ffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_RTRIM register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_RESET      0x1
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_RTRIM field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_GET(value) (((value) & 0x00380000) >> 19)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_RTRIM register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RTRIM_SET(value) (((value) << 19) & 0x00380000)

/*
 * Field : Reserved_31to22
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_MSB        31
/* The width in bits of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_WIDTH      10
/* The mask used to set the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_SET_MSK    0xffc00000
/* The mask used to clear the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 register field value. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_CLR_MSK    0x003fffff
/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 register field. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_RESET      0x0
/* Extracts the ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 field value from a register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_GET(value) (((value) & 0xffc00000) >> 22)
/* Produces a ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 register field value suitable for setting the register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22_SET(value) (((value) << 22) & 0xffc00000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_DCTD_IO_CFG_17.
 */
struct ALT_PINMUX_DCTD_IO_CFG_17_s
{
    uint32_t        PD_DRV_STRG     :  5;  /* Pull down drive strength */
    uint32_t        PD_SLW_RT       :  1;  /* NMOS slew rate */
    const uint32_t  Reserved_7to6   :  2;  /* ALT_PINMUX_DCTD_IO_CFG_17_RSVD_7TO6 */
    uint32_t        PU_DRV_STRG     :  5;  /* Pull up drive strength */
    uint32_t        PU_SLW_RT       :  1;  /* PMOS slew rate */
    const uint32_t  Reserved_15to14 :  2;  /* ALT_PINMUX_DCTD_IO_CFG_17_RSVD_15TO14 */
    uint32_t        WK_PU_EN        :  1;  /* Weak pull up signal */
    uint32_t        INPUT_BUF_EN    :  2;  /* LVTTL input buffer enable signal */
    uint32_t        RTRIM           :  3;  /* Bias trim bits */
    const uint32_t  Reserved_31to22 : 10;  /* ALT_PINMUX_DCTD_IO_CFG_17_RSVD_31TO22 */
};

/* The typedef declaration for register ALT_PINMUX_DCTD_IO_CFG_17. */
typedef volatile struct ALT_PINMUX_DCTD_IO_CFG_17_s  ALT_PINMUX_DCTD_IO_CFG_17_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_DCTD_IO_CFG_17 register. */
#define ALT_PINMUX_DCTD_IO_CFG_17_RESET       0x000d0008
/* The byte offset of the ALT_PINMUX_DCTD_IO_CFG_17 register from the beginning of the component. */
#define ALT_PINMUX_DCTD_IO_CFG_17_OFST        0x144

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PINMUX_DCTD_IO_GRP.
 */
struct ALT_PINMUX_DCTD_IO_GRP_s
{
    ALT_PINMUX_DCTD_IO_1_t         pinmux_dedicated_io_1;            /* ALT_PINMUX_DCTD_IO_1 */
    ALT_PINMUX_DCTD_IO_2_t         pinmux_dedicated_io_2;            /* ALT_PINMUX_DCTD_IO_2 */
    ALT_PINMUX_DCTD_IO_3_t         pinmux_dedicated_io_3;            /* ALT_PINMUX_DCTD_IO_3 */
    ALT_PINMUX_DCTD_IO_4_t         pinmux_dedicated_io_4;            /* ALT_PINMUX_DCTD_IO_4 */
    ALT_PINMUX_DCTD_IO_5_t         pinmux_dedicated_io_5;            /* ALT_PINMUX_DCTD_IO_5 */
    ALT_PINMUX_DCTD_IO_6_t         pinmux_dedicated_io_6;            /* ALT_PINMUX_DCTD_IO_6 */
    ALT_PINMUX_DCTD_IO_7_t         pinmux_dedicated_io_7;            /* ALT_PINMUX_DCTD_IO_7 */
    ALT_PINMUX_DCTD_IO_8_t         pinmux_dedicated_io_8;            /* ALT_PINMUX_DCTD_IO_8 */
    ALT_PINMUX_DCTD_IO_9_t         pinmux_dedicated_io_9;            /* ALT_PINMUX_DCTD_IO_9 */
    ALT_PINMUX_DCTD_IO_10_t        pinmux_dedicated_io_10;           /* ALT_PINMUX_DCTD_IO_10 */
    ALT_PINMUX_DCTD_IO_11_t        pinmux_dedicated_io_11;           /* ALT_PINMUX_DCTD_IO_11 */
    ALT_PINMUX_DCTD_IO_12_t        pinmux_dedicated_io_12;           /* ALT_PINMUX_DCTD_IO_12 */
    ALT_PINMUX_DCTD_IO_13_t        pinmux_dedicated_io_13;           /* ALT_PINMUX_DCTD_IO_13 */
    ALT_PINMUX_DCTD_IO_14_t        pinmux_dedicated_io_14;           /* ALT_PINMUX_DCTD_IO_14 */
    ALT_PINMUX_DCTD_IO_15_t        pinmux_dedicated_io_15;           /* ALT_PINMUX_DCTD_IO_15 */
    ALT_PINMUX_DCTD_IO_16_t        pinmux_dedicated_io_16;           /* ALT_PINMUX_DCTD_IO_16 */
    ALT_PINMUX_DCTD_IO_17_t        pinmux_dedicated_io_17;           /* ALT_PINMUX_DCTD_IO_17 */
    volatile uint32_t              _pad_0x44_0xff[47];               /* *UNDEFINED* */
    ALT_PINMUX_DCTD_IO_CFG_BANK_t  configuration_dedicated_io_bank;  /* ALT_PINMUX_DCTD_IO_CFG_BANK */
    ALT_PINMUX_DCTD_IO_CFG_1_t     configuration_dedicated_io_1;     /* ALT_PINMUX_DCTD_IO_CFG_1 */
    ALT_PINMUX_DCTD_IO_CFG_2_t     configuration_dedicated_io_2;     /* ALT_PINMUX_DCTD_IO_CFG_2 */
    ALT_PINMUX_DCTD_IO_CFG_3_t     configuration_dedicated_io_3;     /* ALT_PINMUX_DCTD_IO_CFG_3 */
    ALT_PINMUX_DCTD_IO_CFG_4_t     configuration_dedicated_io_4;     /* ALT_PINMUX_DCTD_IO_CFG_4 */
    ALT_PINMUX_DCTD_IO_CFG_5_t     configuration_dedicated_io_5;     /* ALT_PINMUX_DCTD_IO_CFG_5 */
    ALT_PINMUX_DCTD_IO_CFG_6_t     configuration_dedicated_io_6;     /* ALT_PINMUX_DCTD_IO_CFG_6 */
    ALT_PINMUX_DCTD_IO_CFG_7_t     configuration_dedicated_io_7;     /* ALT_PINMUX_DCTD_IO_CFG_7 */
    ALT_PINMUX_DCTD_IO_CFG_8_t     configuration_dedicated_io_8;     /* ALT_PINMUX_DCTD_IO_CFG_8 */
    ALT_PINMUX_DCTD_IO_CFG_9_t     configuration_dedicated_io_9;     /* ALT_PINMUX_DCTD_IO_CFG_9 */
    ALT_PINMUX_DCTD_IO_CFG_10_t    configuration_dedicated_io_10;    /* ALT_PINMUX_DCTD_IO_CFG_10 */
    ALT_PINMUX_DCTD_IO_CFG_11_t    configuration_dedicated_io_11;    /* ALT_PINMUX_DCTD_IO_CFG_11 */
    ALT_PINMUX_DCTD_IO_CFG_12_t    configuration_dedicated_io_12;    /* ALT_PINMUX_DCTD_IO_CFG_12 */
    ALT_PINMUX_DCTD_IO_CFG_13_t    configuration_dedicated_io_13;    /* ALT_PINMUX_DCTD_IO_CFG_13 */
    ALT_PINMUX_DCTD_IO_CFG_14_t    configuration_dedicated_io_14;    /* ALT_PINMUX_DCTD_IO_CFG_14 */
    ALT_PINMUX_DCTD_IO_CFG_15_t    configuration_dedicated_io_15;    /* ALT_PINMUX_DCTD_IO_CFG_15 */
    ALT_PINMUX_DCTD_IO_CFG_16_t    configuration_dedicated_io_16;    /* ALT_PINMUX_DCTD_IO_CFG_16 */
    ALT_PINMUX_DCTD_IO_CFG_17_t    configuration_dedicated_io_17;    /* ALT_PINMUX_DCTD_IO_CFG_17 */
    volatile uint32_t              _pad_0x148_0x200[46];             /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PINMUX_DCTD_IO_GRP. */
typedef volatile struct ALT_PINMUX_DCTD_IO_GRP_s  ALT_PINMUX_DCTD_IO_GRP_t;
/* The struct declaration for the raw register contents of register group ALT_PINMUX_DCTD_IO_GRP. */
struct ALT_PINMUX_DCTD_IO_GRP_raw_s
{
    volatile uint32_t  pinmux_dedicated_io_1;            /* ALT_PINMUX_DCTD_IO_1 */
    volatile uint32_t  pinmux_dedicated_io_2;            /* ALT_PINMUX_DCTD_IO_2 */
    volatile uint32_t  pinmux_dedicated_io_3;            /* ALT_PINMUX_DCTD_IO_3 */
    volatile uint32_t  pinmux_dedicated_io_4;            /* ALT_PINMUX_DCTD_IO_4 */
    volatile uint32_t  pinmux_dedicated_io_5;            /* ALT_PINMUX_DCTD_IO_5 */
    volatile uint32_t  pinmux_dedicated_io_6;            /* ALT_PINMUX_DCTD_IO_6 */
    volatile uint32_t  pinmux_dedicated_io_7;            /* ALT_PINMUX_DCTD_IO_7 */
    volatile uint32_t  pinmux_dedicated_io_8;            /* ALT_PINMUX_DCTD_IO_8 */
    volatile uint32_t  pinmux_dedicated_io_9;            /* ALT_PINMUX_DCTD_IO_9 */
    volatile uint32_t  pinmux_dedicated_io_10;           /* ALT_PINMUX_DCTD_IO_10 */
    volatile uint32_t  pinmux_dedicated_io_11;           /* ALT_PINMUX_DCTD_IO_11 */
    volatile uint32_t  pinmux_dedicated_io_12;           /* ALT_PINMUX_DCTD_IO_12 */
    volatile uint32_t  pinmux_dedicated_io_13;           /* ALT_PINMUX_DCTD_IO_13 */
    volatile uint32_t  pinmux_dedicated_io_14;           /* ALT_PINMUX_DCTD_IO_14 */
    volatile uint32_t  pinmux_dedicated_io_15;           /* ALT_PINMUX_DCTD_IO_15 */
    volatile uint32_t  pinmux_dedicated_io_16;           /* ALT_PINMUX_DCTD_IO_16 */
    volatile uint32_t  pinmux_dedicated_io_17;           /* ALT_PINMUX_DCTD_IO_17 */
    uint32_t           _pad_0x44_0xff[47];               /* *UNDEFINED* */
    volatile uint32_t  configuration_dedicated_io_bank;  /* ALT_PINMUX_DCTD_IO_CFG_BANK */
    volatile uint32_t  configuration_dedicated_io_1;     /* ALT_PINMUX_DCTD_IO_CFG_1 */
    volatile uint32_t  configuration_dedicated_io_2;     /* ALT_PINMUX_DCTD_IO_CFG_2 */
    volatile uint32_t  configuration_dedicated_io_3;     /* ALT_PINMUX_DCTD_IO_CFG_3 */
    volatile uint32_t  configuration_dedicated_io_4;     /* ALT_PINMUX_DCTD_IO_CFG_4 */
    volatile uint32_t  configuration_dedicated_io_5;     /* ALT_PINMUX_DCTD_IO_CFG_5 */
    volatile uint32_t  configuration_dedicated_io_6;     /* ALT_PINMUX_DCTD_IO_CFG_6 */
    volatile uint32_t  configuration_dedicated_io_7;     /* ALT_PINMUX_DCTD_IO_CFG_7 */
    volatile uint32_t  configuration_dedicated_io_8;     /* ALT_PINMUX_DCTD_IO_CFG_8 */
    volatile uint32_t  configuration_dedicated_io_9;     /* ALT_PINMUX_DCTD_IO_CFG_9 */
    volatile uint32_t  configuration_dedicated_io_10;    /* ALT_PINMUX_DCTD_IO_CFG_10 */
    volatile uint32_t  configuration_dedicated_io_11;    /* ALT_PINMUX_DCTD_IO_CFG_11 */
    volatile uint32_t  configuration_dedicated_io_12;    /* ALT_PINMUX_DCTD_IO_CFG_12 */
    volatile uint32_t  configuration_dedicated_io_13;    /* ALT_PINMUX_DCTD_IO_CFG_13 */
    volatile uint32_t  configuration_dedicated_io_14;    /* ALT_PINMUX_DCTD_IO_CFG_14 */
    volatile uint32_t  configuration_dedicated_io_15;    /* ALT_PINMUX_DCTD_IO_CFG_15 */
    volatile uint32_t  configuration_dedicated_io_16;    /* ALT_PINMUX_DCTD_IO_CFG_16 */
    volatile uint32_t  configuration_dedicated_io_17;    /* ALT_PINMUX_DCTD_IO_CFG_17 */
    uint32_t           _pad_0x148_0x200[46];             /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PINMUX_DCTD_IO_GRP. */
typedef volatile struct ALT_PINMUX_DCTD_IO_GRP_raw_s  ALT_PINMUX_DCTD_IO_GRP_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_PINMUX_FPGA_INTERFACE_GRP
 * 
 */
/*
 * Register : Select source for EMAC0 signals (HPS Pins or FPGA Interface) - pinmux_emac0_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for EMAC0 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for EMAC0 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for EMAC0 signals - sel
 * 
 * Select connection for EMAC0.
 * 
 * 0 : EMAC0 uses HPS IO Pins.
 * 
 * 1 : EMAC0 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_EMAC0_USEFPGA.
 */
struct ALT_PINMUX_FPGA_EMAC0_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for EMAC0 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_EMAC0_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_EMAC0_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_EMAC0_USEFPGA_s  ALT_PINMUX_FPGA_EMAC0_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_EMAC0_USEFPGA register. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_EMAC0_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_EMAC0_USEFPGA_OFST        0x0

/*
 * Register : Select source for EMAC1 signals (HPS Pins or FPGA Interface) - pinmux_emac1_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for EMAC1 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for EMAC1 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for EMAC1 signals - sel
 * 
 * Select connection for EMAC1.
 * 
 * 0 : EMAC1 uses HPS IO Pins.
 * 
 * 1 : EMAC1 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_EMAC1_USEFPGA.
 */
struct ALT_PINMUX_FPGA_EMAC1_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for EMAC1 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_EMAC1_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_EMAC1_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_EMAC1_USEFPGA_s  ALT_PINMUX_FPGA_EMAC1_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_EMAC1_USEFPGA register. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_EMAC1_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_EMAC1_USEFPGA_OFST        0x4

/*
 * Register : Select source for EMAC2 signals (HPS Pins or FPGA Interface) - pinmux_emac2_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for EMAC2 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for EMAC2 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for EMAC2 signals - sel
 * 
 * Select connection for EMAC2.
 * 
 * 0 : EMAC2 uses HPS IO Pins.
 * 
 * 1 : EMAC2 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_EMAC2_USEFPGA.
 */
struct ALT_PINMUX_FPGA_EMAC2_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for EMAC2 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_EMAC2_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_EMAC2_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_EMAC2_USEFPGA_s  ALT_PINMUX_FPGA_EMAC2_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_EMAC2_USEFPGA register. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_EMAC2_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_EMAC2_USEFPGA_OFST        0x8

/*
 * Register : Select source for I2C0 signals (HPS Pins or FPGA Interface) - pinmux_i2c0_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for I2C0 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | RW     | 0x0   | Selection for I2C0 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for I2C0 signals - sel
 * 
 * Select connection for I2C0.
 * 
 * 0 : I2C0 uses HPS IO Pins.
 * 
 * 1 : I2C0 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_I2C0_USEFPGA.
 */
struct ALT_PINMUX_FPGA_I2C0_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for I2C0 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_I2C0_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_I2C0_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_I2C0_USEFPGA_s  ALT_PINMUX_FPGA_I2C0_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_I2C0_USEFPGA register. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_I2C0_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_I2C0_USEFPGA_OFST        0xc

/*
 * Register : Select source for I2C1 signals (HPS Pins or FPGA Interface) - pinmux_i2c1_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for I2C1 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | RW     | 0x0   | Selection for I2C1 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for I2C1 signals - sel
 * 
 * Select connection for I2C1.
 * 
 * 0 : I2C1 uses HPS IO Pins.
 * 
 * 1 : I2C1 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_I2C1_USEFPGA.
 */
struct ALT_PINMUX_FPGA_I2C1_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for I2C1 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_I2C1_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_I2C1_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_I2C1_USEFPGA_s  ALT_PINMUX_FPGA_I2C1_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_I2C1_USEFPGA register. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_I2C1_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_I2C1_USEFPGA_OFST        0x10

/*
 * Register : Select source for I2C_EMAC0 signals (HPS Pins or FPGA Interface) - pinmux_i2c_emac0_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for I2C_EMAC0 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [0]    | RW     | 0x0   | Selection for I2C_EMAC0 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for I2C_EMAC0 signals - sel
 * 
 * Select connection for I2C_EMAC0.
 * 
 * 0 : I2C_EMAC0 uses HPS IO Pins.
 * 
 * 1 : I2C_EMAC0 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA.
 */
struct ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for I2C_EMAC0 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_s  ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA register. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_OFST        0x14

/*
 * Register : Select source for I2C_EMAC1 signals (HPS Pins or FPGA Interface) - pinmux_i2c_emac1_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for I2C_EMAC1 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [0]    | RW     | 0x0   | Selection for I2C_EMAC1 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for I2C_EMAC1 signals - sel
 * 
 * Select connection for I2C_EMAC1.
 * 
 * 0 : I2C_EMAC1 uses HPS IO Pins.
 * 
 * 1 : I2C_EMAC1 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA.
 */
struct ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for I2C_EMAC1 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_s  ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA register. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_OFST        0x18

/*
 * Register : Select source for I2C_EMAC2 signals (HPS Pins or FPGA Interface) - pinmux_i2c_emac2_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for I2C_EMAC2 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [0]    | RW     | 0x0   | Selection for I2C_EMAC2 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for I2C_EMAC2 signals - sel
 * 
 * Select connection for I2C_EMAC2.
 * 
 * 0 : I2C_EMAC2 uses HPS IO Pins.
 * 
 * 1 : I2C_EMAC2 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA.
 */
struct ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for I2C_EMAC2 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_s  ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA register. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_OFST        0x1c

/*
 * Register : Select source for NAND signals (HPS Pins or FPGA Interface) - pinmux_nand_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for NAND signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | RW     | 0x0   | Selection for NAND signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for NAND signals - sel
 * 
 * Select connection for NAND.
 * 
 * 0 : NAND uses HPS IO Pins.
 * 
 * 1 : NAND uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_NAND_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_NAND_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_NAND_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_NAND_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_NAND_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_NAND_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_NAND_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_NAND_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_NAND_USEFPGA.
 */
struct ALT_PINMUX_FPGA_NAND_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for NAND signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_NAND_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_NAND_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_NAND_USEFPGA_s  ALT_PINMUX_FPGA_NAND_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_NAND_USEFPGA register. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_NAND_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_NAND_USEFPGA_OFST        0x20

/*
 * Register : Select source for QSPI signals (HPS Pins or FPGA Interface) - pinmux_qspi_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for QSPI signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | RW     | 0x0   | Selection for QSPI signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for QSPI signals - sel
 * 
 * Select connection for QSPI.
 * 
 * 0 : QPSI uses HPS IO Pins.
 * 
 * 1 : QSPI uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_QSPI_USEFPGA.
 */
struct ALT_PINMUX_FPGA_QSPI_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for QSPI signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_QSPI_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_QSPI_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_QSPI_USEFPGA_s  ALT_PINMUX_FPGA_QSPI_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_QSPI_USEFPGA register. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_QSPI_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_QSPI_USEFPGA_OFST        0x24

/*
 * Register : Select source for SDMMC signals (HPS Pins or FPGA Interface) - pinmux_sdmmc_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for SDMMC signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for SDMMC signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for SDMMC signals - sel
 * 
 * Select connection for SDMMC.
 * 
 * 0 : SDMMC uses HPS IO Pins.
 * 
 * 1 : SDMMC uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_SDMMC_USEFPGA.
 */
struct ALT_PINMUX_FPGA_SDMMC_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for SDMMC signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_SDMMC_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_SDMMC_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_SDMMC_USEFPGA_s  ALT_PINMUX_FPGA_SDMMC_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_SDMMC_USEFPGA register. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_SDMMC_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_SDMMC_USEFPGA_OFST        0x28

/*
 * Register : Select source for SPIM0 signals (HPS Pins or FPGA Interface) - pinmux_spim0_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for SPIM0 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for SPIM0 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for SPIM0 signals - sel
 * 
 * Select connection for SPIM0.
 * 
 * 0 : SPIM0 uses HPS IO Pins.
 * 
 * 1 : SPIM0 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_SPIM0_USEFPGA.
 */
struct ALT_PINMUX_FPGA_SPIM0_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for SPIM0 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_SPIM0_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_SPIM0_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_SPIM0_USEFPGA_s  ALT_PINMUX_FPGA_SPIM0_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_SPIM0_USEFPGA register. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_SPIM0_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_SPIM0_USEFPGA_OFST        0x2c

/*
 * Register : Select source for SPIM1 signals (HPS Pins or FPGA Interface) - pinmux_spim1_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for SPIM1 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for SPIM1 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for SPIM1 signals - sel
 * 
 * Select connection for SPIM1.
 * 
 * 0 : SPIM1 uses HPS IO Pins.
 * 
 * 1 : SPIM1 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_SPIM1_USEFPGA.
 */
struct ALT_PINMUX_FPGA_SPIM1_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for SPIM1 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_SPIM1_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_SPIM1_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_SPIM1_USEFPGA_s  ALT_PINMUX_FPGA_SPIM1_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_SPIM1_USEFPGA register. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_SPIM1_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_SPIM1_USEFPGA_OFST        0x30

/*
 * Register : Select source for SPIS0 signals (HPS Pins or FPGA Interface) - pinmux_spis0_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for SPIS0 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for SPIS0 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for SPIS0 signals - sel
 * 
 * Select connection for SPIS0.
 * 
 * 0 : SPIS0 uses HPS IO Pins.
 * 
 * 1 : SPIS0 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_SPIS0_USEFPGA.
 */
struct ALT_PINMUX_FPGA_SPIS0_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for SPIS0 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_SPIS0_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_SPIS0_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_SPIS0_USEFPGA_s  ALT_PINMUX_FPGA_SPIS0_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_SPIS0_USEFPGA register. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_SPIS0_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_SPIS0_USEFPGA_OFST        0x34

/*
 * Register : Select source for SPIS1 signals (HPS Pins or FPGA Interface) - pinmux_spis1_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for SPIS1 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for SPIS1 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for SPIS1 signals - sel
 * 
 * Select connection for SPIS1.
 * 
 * 0 : SPIS1 uses HPS IO Pins.
 * 
 * 1 : SPIS1 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_SPIS1_USEFPGA.
 */
struct ALT_PINMUX_FPGA_SPIS1_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for SPIS1 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_SPIS1_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_SPIS1_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_SPIS1_USEFPGA_s  ALT_PINMUX_FPGA_SPIS1_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_SPIS1_USEFPGA register. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_SPIS1_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_SPIS1_USEFPGA_OFST        0x38

/*
 * Register : Select source for UART0 signals (HPS Pins or FPGA Interface) - pinmux_uart0_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for UART0 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for UART0 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for UART0 signals - sel
 * 
 * Select connection for UART0.
 * 
 * 0 : UART0 uses HPS IO Pins.
 * 
 * 1 : UART0 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_UART0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_UART0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_UART0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_UART0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_UART0_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_UART0_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_UART0_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_UART0_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_UART0_USEFPGA.
 */
struct ALT_PINMUX_FPGA_UART0_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for UART0 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_UART0_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_UART0_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_UART0_USEFPGA_s  ALT_PINMUX_FPGA_UART0_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_UART0_USEFPGA register. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_UART0_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_UART0_USEFPGA_OFST        0x3c

/*
 * Register : Select source for UART1 signals (HPS Pins or FPGA Interface) - pinmux_uart1_usefpga
 * 
 * Selection between HPS Pin and FPGA Interface for UART1 signals
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * NOTE: These registers should not be modified after IO configuration.There is no
 * support for dynamically changing the Pin Mux selections.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | Selection for UART1 signals       
 *  [31:1] | R      | 0x0   | ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD
 * 
 */
/*
 * Field : Selection for UART1 signals - sel
 * 
 * Select connection for UART1.
 * 
 * 0 : UART1 uses HPS IO Pins.
 * 
 * 1 : UART1 uses the FPGA Inteface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_UART1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_UART1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_MSB        0
/* The width in bits of the ALT_PINMUX_FPGA_UART1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_WIDTH      1
/* The mask used to set the ALT_PINMUX_FPGA_UART1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_PINMUX_FPGA_UART1_USEFPGA_SEL register field value. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_PINMUX_FPGA_UART1_USEFPGA_SEL register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_UART1_USEFPGA_SEL field value from a register. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_PINMUX_FPGA_UART1_USEFPGA_SEL register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_SEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Reserved
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_MSB        31
/* The width in bits of the ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_WIDTH      31
/* The mask used to set the ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD register field value. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_CLR_MSK    0x00000001
/* The reset value of the ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD register field. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_RESET      0x0
/* Extracts the ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD field value from a register. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD register field value suitable for setting the register. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_PINMUX_FPGA_UART1_USEFPGA.
 */
struct ALT_PINMUX_FPGA_UART1_USEFPGA_s
{
    uint32_t        sel      :  1;  /* Selection for UART1 signals */
    const uint32_t  Reserved : 31;  /* ALT_PINMUX_FPGA_UART1_USEFPGA_RSVD */
};

/* The typedef declaration for register ALT_PINMUX_FPGA_UART1_USEFPGA. */
typedef volatile struct ALT_PINMUX_FPGA_UART1_USEFPGA_s  ALT_PINMUX_FPGA_UART1_USEFPGA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_PINMUX_FPGA_UART1_USEFPGA register. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_RESET       0x00000000
/* The byte offset of the ALT_PINMUX_FPGA_UART1_USEFPGA register from the beginning of the component. */
#define ALT_PINMUX_FPGA_UART1_USEFPGA_OFST        0x40

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_PINMUX_FPGA_INTERFACE_GRP.
 */
struct ALT_PINMUX_FPGA_INTERFACE_GRP_s
{
    ALT_PINMUX_FPGA_EMAC0_USEFPGA_t      pinmux_emac0_usefpga;      /* ALT_PINMUX_FPGA_EMAC0_USEFPGA */
    ALT_PINMUX_FPGA_EMAC1_USEFPGA_t      pinmux_emac1_usefpga;      /* ALT_PINMUX_FPGA_EMAC1_USEFPGA */
    ALT_PINMUX_FPGA_EMAC2_USEFPGA_t      pinmux_emac2_usefpga;      /* ALT_PINMUX_FPGA_EMAC2_USEFPGA */
    ALT_PINMUX_FPGA_I2C0_USEFPGA_t       pinmux_i2c0_usefpga;       /* ALT_PINMUX_FPGA_I2C0_USEFPGA */
    ALT_PINMUX_FPGA_I2C1_USEFPGA_t       pinmux_i2c1_usefpga;       /* ALT_PINMUX_FPGA_I2C1_USEFPGA */
    ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA_t  pinmux_i2c_emac0_usefpga;  /* ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA */
    ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA_t  pinmux_i2c_emac1_usefpga;  /* ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA */
    ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA_t  pinmux_i2c_emac2_usefpga;  /* ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA */
    ALT_PINMUX_FPGA_NAND_USEFPGA_t       pinmux_nand_usefpga;       /* ALT_PINMUX_FPGA_NAND_USEFPGA */
    ALT_PINMUX_FPGA_QSPI_USEFPGA_t       pinmux_qspi_usefpga;       /* ALT_PINMUX_FPGA_QSPI_USEFPGA */
    ALT_PINMUX_FPGA_SDMMC_USEFPGA_t      pinmux_sdmmc_usefpga;      /* ALT_PINMUX_FPGA_SDMMC_USEFPGA */
    ALT_PINMUX_FPGA_SPIM0_USEFPGA_t      pinmux_spim0_usefpga;      /* ALT_PINMUX_FPGA_SPIM0_USEFPGA */
    ALT_PINMUX_FPGA_SPIM1_USEFPGA_t      pinmux_spim1_usefpga;      /* ALT_PINMUX_FPGA_SPIM1_USEFPGA */
    ALT_PINMUX_FPGA_SPIS0_USEFPGA_t      pinmux_spis0_usefpga;      /* ALT_PINMUX_FPGA_SPIS0_USEFPGA */
    ALT_PINMUX_FPGA_SPIS1_USEFPGA_t      pinmux_spis1_usefpga;      /* ALT_PINMUX_FPGA_SPIS1_USEFPGA */
    ALT_PINMUX_FPGA_UART0_USEFPGA_t      pinmux_uart0_usefpga;      /* ALT_PINMUX_FPGA_UART0_USEFPGA */
    ALT_PINMUX_FPGA_UART1_USEFPGA_t      pinmux_uart1_usefpga;      /* ALT_PINMUX_FPGA_UART1_USEFPGA */
    volatile uint32_t                    _pad_0x44_0x100[47];       /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_PINMUX_FPGA_INTERFACE_GRP. */
typedef volatile struct ALT_PINMUX_FPGA_INTERFACE_GRP_s  ALT_PINMUX_FPGA_INTERFACE_GRP_t;
/* The struct declaration for the raw register contents of register group ALT_PINMUX_FPGA_INTERFACE_GRP. */
struct ALT_PINMUX_FPGA_INTERFACE_GRP_raw_s
{
    volatile uint32_t  pinmux_emac0_usefpga;      /* ALT_PINMUX_FPGA_EMAC0_USEFPGA */
    volatile uint32_t  pinmux_emac1_usefpga;      /* ALT_PINMUX_FPGA_EMAC1_USEFPGA */
    volatile uint32_t  pinmux_emac2_usefpga;      /* ALT_PINMUX_FPGA_EMAC2_USEFPGA */
    volatile uint32_t  pinmux_i2c0_usefpga;       /* ALT_PINMUX_FPGA_I2C0_USEFPGA */
    volatile uint32_t  pinmux_i2c1_usefpga;       /* ALT_PINMUX_FPGA_I2C1_USEFPGA */
    volatile uint32_t  pinmux_i2c_emac0_usefpga;  /* ALT_PINMUX_FPGA_I2C_EMAC0_USEFPGA */
    volatile uint32_t  pinmux_i2c_emac1_usefpga;  /* ALT_PINMUX_FPGA_I2C_EMAC1_USEFPGA */
    volatile uint32_t  pinmux_i2c_emac2_usefpga;  /* ALT_PINMUX_FPGA_I2C_EMAC2_USEFPGA */
    volatile uint32_t  pinmux_nand_usefpga;       /* ALT_PINMUX_FPGA_NAND_USEFPGA */
    volatile uint32_t  pinmux_qspi_usefpga;       /* ALT_PINMUX_FPGA_QSPI_USEFPGA */
    volatile uint32_t  pinmux_sdmmc_usefpga;      /* ALT_PINMUX_FPGA_SDMMC_USEFPGA */
    volatile uint32_t  pinmux_spim0_usefpga;      /* ALT_PINMUX_FPGA_SPIM0_USEFPGA */
    volatile uint32_t  pinmux_spim1_usefpga;      /* ALT_PINMUX_FPGA_SPIM1_USEFPGA */
    volatile uint32_t  pinmux_spis0_usefpga;      /* ALT_PINMUX_FPGA_SPIS0_USEFPGA */
    volatile uint32_t  pinmux_spis1_usefpga;      /* ALT_PINMUX_FPGA_SPIS1_USEFPGA */
    volatile uint32_t  pinmux_uart0_usefpga;      /* ALT_PINMUX_FPGA_UART0_USEFPGA */
    volatile uint32_t  pinmux_uart1_usefpga;      /* ALT_PINMUX_FPGA_UART1_USEFPGA */
    uint32_t           _pad_0x44_0x100[47];       /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_PINMUX_FPGA_INTERFACE_GRP. */
typedef volatile struct ALT_PINMUX_FPGA_INTERFACE_GRP_raw_s  ALT_PINMUX_FPGA_INTERFACE_GRP_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_PINMUX_H__ */

