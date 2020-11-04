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

/* Altera - ALT_MBOX */

#ifndef __ALT_SOCAL_MBOX_H__
#define __ALT_SOCAL_MBOX_H__

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
 * Component : external_master_mailbox - MBOX
 * external_master_mailbox
 * 
 * External master Mailbox
 * 
 * This is a 256 byte mailbox which allows message exchange between SDM and
 * external master
 * 
 * External master: SCP, APS, FPGA
 * 
 * mreqinfo decoding needed to determine the which mailbox box is used.
 * 
 * mreqinfo[7:6] = 00 --> SCP
 * 
 * mreqinfo[7:6] = 01 --> APS
 * 
 * mreqinfo[7:6] = 10 --> APS
 * 
 */
/*
 * Register : reg0
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG0_FLD register field. */
#define ALT_MBOX_REG0_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG0_FLD register field. */
#define ALT_MBOX_REG0_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG0_FLD register field. */
#define ALT_MBOX_REG0_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG0_FLD register field value. */
#define ALT_MBOX_REG0_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG0_FLD register field value. */
#define ALT_MBOX_REG0_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG0_FLD register field. */
#define ALT_MBOX_REG0_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG0_FLD field value from a register. */
#define ALT_MBOX_REG0_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG0_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG0_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG0.
 */
struct ALT_MBOX_REG0_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG0. */
typedef struct ALT_MBOX_REG0_s  ALT_MBOX_REG0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG0 register. */
#define ALT_MBOX_REG0_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG0 register from the beginning of the component. */
#define ALT_MBOX_REG0_OFST        0x0

/*
 * Register : reg1
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG1_FLD register field. */
#define ALT_MBOX_REG1_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG1_FLD register field. */
#define ALT_MBOX_REG1_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG1_FLD register field. */
#define ALT_MBOX_REG1_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG1_FLD register field value. */
#define ALT_MBOX_REG1_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG1_FLD register field value. */
#define ALT_MBOX_REG1_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG1_FLD register field. */
#define ALT_MBOX_REG1_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG1_FLD field value from a register. */
#define ALT_MBOX_REG1_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG1_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG1_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG1.
 */
struct ALT_MBOX_REG1_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG1. */
typedef struct ALT_MBOX_REG1_s  ALT_MBOX_REG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG1 register. */
#define ALT_MBOX_REG1_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG1 register from the beginning of the component. */
#define ALT_MBOX_REG1_OFST        0x4

/*
 * Register : reg2
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG2_FLD register field. */
#define ALT_MBOX_REG2_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG2_FLD register field. */
#define ALT_MBOX_REG2_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG2_FLD register field. */
#define ALT_MBOX_REG2_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG2_FLD register field value. */
#define ALT_MBOX_REG2_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG2_FLD register field value. */
#define ALT_MBOX_REG2_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG2_FLD register field. */
#define ALT_MBOX_REG2_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG2_FLD field value from a register. */
#define ALT_MBOX_REG2_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG2_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG2_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG2.
 */
struct ALT_MBOX_REG2_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG2. */
typedef struct ALT_MBOX_REG2_s  ALT_MBOX_REG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG2 register. */
#define ALT_MBOX_REG2_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG2 register from the beginning of the component. */
#define ALT_MBOX_REG2_OFST        0x8

/*
 * Register : reg3
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG3_FLD register field. */
#define ALT_MBOX_REG3_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG3_FLD register field. */
#define ALT_MBOX_REG3_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG3_FLD register field. */
#define ALT_MBOX_REG3_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG3_FLD register field value. */
#define ALT_MBOX_REG3_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG3_FLD register field value. */
#define ALT_MBOX_REG3_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG3_FLD register field. */
#define ALT_MBOX_REG3_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG3_FLD field value from a register. */
#define ALT_MBOX_REG3_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG3_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG3_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG3.
 */
struct ALT_MBOX_REG3_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG3. */
typedef struct ALT_MBOX_REG3_s  ALT_MBOX_REG3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG3 register. */
#define ALT_MBOX_REG3_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG3 register from the beginning of the component. */
#define ALT_MBOX_REG3_OFST        0xc

/*
 * Register : reg4
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG4_FLD register field. */
#define ALT_MBOX_REG4_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG4_FLD register field. */
#define ALT_MBOX_REG4_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG4_FLD register field. */
#define ALT_MBOX_REG4_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG4_FLD register field value. */
#define ALT_MBOX_REG4_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG4_FLD register field value. */
#define ALT_MBOX_REG4_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG4_FLD register field. */
#define ALT_MBOX_REG4_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG4_FLD field value from a register. */
#define ALT_MBOX_REG4_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG4_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG4_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG4.
 */
struct ALT_MBOX_REG4_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG4. */
typedef struct ALT_MBOX_REG4_s  ALT_MBOX_REG4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG4 register. */
#define ALT_MBOX_REG4_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG4 register from the beginning of the component. */
#define ALT_MBOX_REG4_OFST        0x10

/*
 * Register : reg5
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG5_FLD register field. */
#define ALT_MBOX_REG5_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG5_FLD register field. */
#define ALT_MBOX_REG5_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG5_FLD register field. */
#define ALT_MBOX_REG5_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG5_FLD register field value. */
#define ALT_MBOX_REG5_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG5_FLD register field value. */
#define ALT_MBOX_REG5_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG5_FLD register field. */
#define ALT_MBOX_REG5_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG5_FLD field value from a register. */
#define ALT_MBOX_REG5_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG5_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG5_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG5.
 */
struct ALT_MBOX_REG5_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG5. */
typedef struct ALT_MBOX_REG5_s  ALT_MBOX_REG5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG5 register. */
#define ALT_MBOX_REG5_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG5 register from the beginning of the component. */
#define ALT_MBOX_REG5_OFST        0x14

/*
 * Register : reg6
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG6_FLD register field. */
#define ALT_MBOX_REG6_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG6_FLD register field. */
#define ALT_MBOX_REG6_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG6_FLD register field. */
#define ALT_MBOX_REG6_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG6_FLD register field value. */
#define ALT_MBOX_REG6_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG6_FLD register field value. */
#define ALT_MBOX_REG6_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG6_FLD register field. */
#define ALT_MBOX_REG6_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG6_FLD field value from a register. */
#define ALT_MBOX_REG6_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG6_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG6_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG6.
 */
struct ALT_MBOX_REG6_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG6. */
typedef struct ALT_MBOX_REG6_s  ALT_MBOX_REG6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG6 register. */
#define ALT_MBOX_REG6_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG6 register from the beginning of the component. */
#define ALT_MBOX_REG6_OFST        0x18

/*
 * Register : reg7
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG7_FLD register field. */
#define ALT_MBOX_REG7_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG7_FLD register field. */
#define ALT_MBOX_REG7_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG7_FLD register field. */
#define ALT_MBOX_REG7_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG7_FLD register field value. */
#define ALT_MBOX_REG7_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG7_FLD register field value. */
#define ALT_MBOX_REG7_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG7_FLD register field. */
#define ALT_MBOX_REG7_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG7_FLD field value from a register. */
#define ALT_MBOX_REG7_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG7_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG7_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG7.
 */
struct ALT_MBOX_REG7_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG7. */
typedef struct ALT_MBOX_REG7_s  ALT_MBOX_REG7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG7 register. */
#define ALT_MBOX_REG7_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG7 register from the beginning of the component. */
#define ALT_MBOX_REG7_OFST        0x1c

/*
 * Register : reg8
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG8_FLD register field. */
#define ALT_MBOX_REG8_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG8_FLD register field. */
#define ALT_MBOX_REG8_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG8_FLD register field. */
#define ALT_MBOX_REG8_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG8_FLD register field value. */
#define ALT_MBOX_REG8_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG8_FLD register field value. */
#define ALT_MBOX_REG8_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG8_FLD register field. */
#define ALT_MBOX_REG8_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG8_FLD field value from a register. */
#define ALT_MBOX_REG8_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG8_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG8_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG8.
 */
struct ALT_MBOX_REG8_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG8. */
typedef struct ALT_MBOX_REG8_s  ALT_MBOX_REG8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG8 register. */
#define ALT_MBOX_REG8_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG8 register from the beginning of the component. */
#define ALT_MBOX_REG8_OFST        0x20

/*
 * Register : reg9
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG9_FLD register field. */
#define ALT_MBOX_REG9_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG9_FLD register field. */
#define ALT_MBOX_REG9_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG9_FLD register field. */
#define ALT_MBOX_REG9_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG9_FLD register field value. */
#define ALT_MBOX_REG9_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG9_FLD register field value. */
#define ALT_MBOX_REG9_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG9_FLD register field. */
#define ALT_MBOX_REG9_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG9_FLD field value from a register. */
#define ALT_MBOX_REG9_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG9_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG9_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG9.
 */
struct ALT_MBOX_REG9_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG9. */
typedef struct ALT_MBOX_REG9_s  ALT_MBOX_REG9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG9 register. */
#define ALT_MBOX_REG9_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG9 register from the beginning of the component. */
#define ALT_MBOX_REG9_OFST        0x24

/*
 * Register : reg10
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG10_FLD register field. */
#define ALT_MBOX_REG10_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG10_FLD register field. */
#define ALT_MBOX_REG10_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG10_FLD register field. */
#define ALT_MBOX_REG10_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG10_FLD register field value. */
#define ALT_MBOX_REG10_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG10_FLD register field value. */
#define ALT_MBOX_REG10_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG10_FLD register field. */
#define ALT_MBOX_REG10_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG10_FLD field value from a register. */
#define ALT_MBOX_REG10_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG10_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG10_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG10.
 */
struct ALT_MBOX_REG10_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG10. */
typedef struct ALT_MBOX_REG10_s  ALT_MBOX_REG10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG10 register. */
#define ALT_MBOX_REG10_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG10 register from the beginning of the component. */
#define ALT_MBOX_REG10_OFST        0x28

/*
 * Register : reg11
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG11_FLD register field. */
#define ALT_MBOX_REG11_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG11_FLD register field. */
#define ALT_MBOX_REG11_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG11_FLD register field. */
#define ALT_MBOX_REG11_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG11_FLD register field value. */
#define ALT_MBOX_REG11_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG11_FLD register field value. */
#define ALT_MBOX_REG11_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG11_FLD register field. */
#define ALT_MBOX_REG11_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG11_FLD field value from a register. */
#define ALT_MBOX_REG11_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG11_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG11_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG11.
 */
struct ALT_MBOX_REG11_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG11. */
typedef struct ALT_MBOX_REG11_s  ALT_MBOX_REG11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG11 register. */
#define ALT_MBOX_REG11_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG11 register from the beginning of the component. */
#define ALT_MBOX_REG11_OFST        0x2c

/*
 * Register : reg12
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG12_FLD register field. */
#define ALT_MBOX_REG12_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG12_FLD register field. */
#define ALT_MBOX_REG12_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG12_FLD register field. */
#define ALT_MBOX_REG12_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG12_FLD register field value. */
#define ALT_MBOX_REG12_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG12_FLD register field value. */
#define ALT_MBOX_REG12_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG12_FLD register field. */
#define ALT_MBOX_REG12_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG12_FLD field value from a register. */
#define ALT_MBOX_REG12_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG12_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG12_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG12.
 */
struct ALT_MBOX_REG12_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG12. */
typedef struct ALT_MBOX_REG12_s  ALT_MBOX_REG12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG12 register. */
#define ALT_MBOX_REG12_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG12 register from the beginning of the component. */
#define ALT_MBOX_REG12_OFST        0x30

/*
 * Register : reg13
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG13_FLD register field. */
#define ALT_MBOX_REG13_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG13_FLD register field. */
#define ALT_MBOX_REG13_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG13_FLD register field. */
#define ALT_MBOX_REG13_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG13_FLD register field value. */
#define ALT_MBOX_REG13_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG13_FLD register field value. */
#define ALT_MBOX_REG13_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG13_FLD register field. */
#define ALT_MBOX_REG13_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG13_FLD field value from a register. */
#define ALT_MBOX_REG13_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG13_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG13_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG13.
 */
struct ALT_MBOX_REG13_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG13. */
typedef struct ALT_MBOX_REG13_s  ALT_MBOX_REG13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG13 register. */
#define ALT_MBOX_REG13_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG13 register from the beginning of the component. */
#define ALT_MBOX_REG13_OFST        0x34

/*
 * Register : reg14
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG14_FLD register field. */
#define ALT_MBOX_REG14_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG14_FLD register field. */
#define ALT_MBOX_REG14_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG14_FLD register field. */
#define ALT_MBOX_REG14_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG14_FLD register field value. */
#define ALT_MBOX_REG14_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG14_FLD register field value. */
#define ALT_MBOX_REG14_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG14_FLD register field. */
#define ALT_MBOX_REG14_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG14_FLD field value from a register. */
#define ALT_MBOX_REG14_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG14_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG14_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG14.
 */
struct ALT_MBOX_REG14_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG14. */
typedef struct ALT_MBOX_REG14_s  ALT_MBOX_REG14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG14 register. */
#define ALT_MBOX_REG14_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG14 register from the beginning of the component. */
#define ALT_MBOX_REG14_OFST        0x38

/*
 * Register : reg15
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG15_FLD register field. */
#define ALT_MBOX_REG15_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG15_FLD register field. */
#define ALT_MBOX_REG15_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG15_FLD register field. */
#define ALT_MBOX_REG15_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG15_FLD register field value. */
#define ALT_MBOX_REG15_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG15_FLD register field value. */
#define ALT_MBOX_REG15_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG15_FLD register field. */
#define ALT_MBOX_REG15_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG15_FLD field value from a register. */
#define ALT_MBOX_REG15_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG15_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG15_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG15.
 */
struct ALT_MBOX_REG15_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG15. */
typedef struct ALT_MBOX_REG15_s  ALT_MBOX_REG15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG15 register. */
#define ALT_MBOX_REG15_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG15 register from the beginning of the component. */
#define ALT_MBOX_REG15_OFST        0x3c

/*
 * Register : reg16
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG16_FLD register field. */
#define ALT_MBOX_REG16_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG16_FLD register field. */
#define ALT_MBOX_REG16_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG16_FLD register field. */
#define ALT_MBOX_REG16_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG16_FLD register field value. */
#define ALT_MBOX_REG16_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG16_FLD register field value. */
#define ALT_MBOX_REG16_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG16_FLD register field. */
#define ALT_MBOX_REG16_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG16_FLD field value from a register. */
#define ALT_MBOX_REG16_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG16_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG16_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG16.
 */
struct ALT_MBOX_REG16_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG16. */
typedef struct ALT_MBOX_REG16_s  ALT_MBOX_REG16_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG16 register. */
#define ALT_MBOX_REG16_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG16 register from the beginning of the component. */
#define ALT_MBOX_REG16_OFST        0x40

/*
 * Register : reg17
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG17_FLD register field. */
#define ALT_MBOX_REG17_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG17_FLD register field. */
#define ALT_MBOX_REG17_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG17_FLD register field. */
#define ALT_MBOX_REG17_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG17_FLD register field value. */
#define ALT_MBOX_REG17_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG17_FLD register field value. */
#define ALT_MBOX_REG17_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG17_FLD register field. */
#define ALT_MBOX_REG17_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG17_FLD field value from a register. */
#define ALT_MBOX_REG17_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG17_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG17_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG17.
 */
struct ALT_MBOX_REG17_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG17. */
typedef struct ALT_MBOX_REG17_s  ALT_MBOX_REG17_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG17 register. */
#define ALT_MBOX_REG17_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG17 register from the beginning of the component. */
#define ALT_MBOX_REG17_OFST        0x44

/*
 * Register : reg18
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG18_FLD register field. */
#define ALT_MBOX_REG18_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG18_FLD register field. */
#define ALT_MBOX_REG18_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG18_FLD register field. */
#define ALT_MBOX_REG18_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG18_FLD register field value. */
#define ALT_MBOX_REG18_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG18_FLD register field value. */
#define ALT_MBOX_REG18_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG18_FLD register field. */
#define ALT_MBOX_REG18_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG18_FLD field value from a register. */
#define ALT_MBOX_REG18_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG18_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG18_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG18.
 */
struct ALT_MBOX_REG18_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG18. */
typedef struct ALT_MBOX_REG18_s  ALT_MBOX_REG18_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG18 register. */
#define ALT_MBOX_REG18_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG18 register from the beginning of the component. */
#define ALT_MBOX_REG18_OFST        0x48

/*
 * Register : reg19
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG19_FLD register field. */
#define ALT_MBOX_REG19_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG19_FLD register field. */
#define ALT_MBOX_REG19_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG19_FLD register field. */
#define ALT_MBOX_REG19_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG19_FLD register field value. */
#define ALT_MBOX_REG19_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG19_FLD register field value. */
#define ALT_MBOX_REG19_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG19_FLD register field. */
#define ALT_MBOX_REG19_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG19_FLD field value from a register. */
#define ALT_MBOX_REG19_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG19_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG19_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG19.
 */
struct ALT_MBOX_REG19_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG19. */
typedef struct ALT_MBOX_REG19_s  ALT_MBOX_REG19_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG19 register. */
#define ALT_MBOX_REG19_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG19 register from the beginning of the component. */
#define ALT_MBOX_REG19_OFST        0x4c

/*
 * Register : reg20
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG20_FLD register field. */
#define ALT_MBOX_REG20_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG20_FLD register field. */
#define ALT_MBOX_REG20_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG20_FLD register field. */
#define ALT_MBOX_REG20_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG20_FLD register field value. */
#define ALT_MBOX_REG20_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG20_FLD register field value. */
#define ALT_MBOX_REG20_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG20_FLD register field. */
#define ALT_MBOX_REG20_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG20_FLD field value from a register. */
#define ALT_MBOX_REG20_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG20_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG20_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG20.
 */
struct ALT_MBOX_REG20_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG20. */
typedef struct ALT_MBOX_REG20_s  ALT_MBOX_REG20_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG20 register. */
#define ALT_MBOX_REG20_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG20 register from the beginning of the component. */
#define ALT_MBOX_REG20_OFST        0x50

/*
 * Register : reg21
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG21_FLD register field. */
#define ALT_MBOX_REG21_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG21_FLD register field. */
#define ALT_MBOX_REG21_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG21_FLD register field. */
#define ALT_MBOX_REG21_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG21_FLD register field value. */
#define ALT_MBOX_REG21_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG21_FLD register field value. */
#define ALT_MBOX_REG21_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG21_FLD register field. */
#define ALT_MBOX_REG21_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG21_FLD field value from a register. */
#define ALT_MBOX_REG21_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG21_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG21_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG21.
 */
struct ALT_MBOX_REG21_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG21. */
typedef struct ALT_MBOX_REG21_s  ALT_MBOX_REG21_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG21 register. */
#define ALT_MBOX_REG21_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG21 register from the beginning of the component. */
#define ALT_MBOX_REG21_OFST        0x54

/*
 * Register : reg22
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG22_FLD register field. */
#define ALT_MBOX_REG22_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG22_FLD register field. */
#define ALT_MBOX_REG22_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG22_FLD register field. */
#define ALT_MBOX_REG22_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG22_FLD register field value. */
#define ALT_MBOX_REG22_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG22_FLD register field value. */
#define ALT_MBOX_REG22_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG22_FLD register field. */
#define ALT_MBOX_REG22_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG22_FLD field value from a register. */
#define ALT_MBOX_REG22_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG22_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG22_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG22.
 */
struct ALT_MBOX_REG22_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG22. */
typedef struct ALT_MBOX_REG22_s  ALT_MBOX_REG22_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG22 register. */
#define ALT_MBOX_REG22_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG22 register from the beginning of the component. */
#define ALT_MBOX_REG22_OFST        0x58

/*
 * Register : reg23
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG23_FLD register field. */
#define ALT_MBOX_REG23_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG23_FLD register field. */
#define ALT_MBOX_REG23_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG23_FLD register field. */
#define ALT_MBOX_REG23_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG23_FLD register field value. */
#define ALT_MBOX_REG23_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG23_FLD register field value. */
#define ALT_MBOX_REG23_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG23_FLD register field. */
#define ALT_MBOX_REG23_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG23_FLD field value from a register. */
#define ALT_MBOX_REG23_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG23_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG23_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG23.
 */
struct ALT_MBOX_REG23_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG23. */
typedef struct ALT_MBOX_REG23_s  ALT_MBOX_REG23_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG23 register. */
#define ALT_MBOX_REG23_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG23 register from the beginning of the component. */
#define ALT_MBOX_REG23_OFST        0x5c

/*
 * Register : reg24
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG24_FLD register field. */
#define ALT_MBOX_REG24_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG24_FLD register field. */
#define ALT_MBOX_REG24_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG24_FLD register field. */
#define ALT_MBOX_REG24_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG24_FLD register field value. */
#define ALT_MBOX_REG24_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG24_FLD register field value. */
#define ALT_MBOX_REG24_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG24_FLD register field. */
#define ALT_MBOX_REG24_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG24_FLD field value from a register. */
#define ALT_MBOX_REG24_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG24_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG24_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG24.
 */
struct ALT_MBOX_REG24_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG24. */
typedef struct ALT_MBOX_REG24_s  ALT_MBOX_REG24_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG24 register. */
#define ALT_MBOX_REG24_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG24 register from the beginning of the component. */
#define ALT_MBOX_REG24_OFST        0x60

/*
 * Register : reg25
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG25_FLD register field. */
#define ALT_MBOX_REG25_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG25_FLD register field. */
#define ALT_MBOX_REG25_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG25_FLD register field. */
#define ALT_MBOX_REG25_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG25_FLD register field value. */
#define ALT_MBOX_REG25_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG25_FLD register field value. */
#define ALT_MBOX_REG25_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG25_FLD register field. */
#define ALT_MBOX_REG25_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG25_FLD field value from a register. */
#define ALT_MBOX_REG25_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG25_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG25_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG25.
 */
struct ALT_MBOX_REG25_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG25. */
typedef struct ALT_MBOX_REG25_s  ALT_MBOX_REG25_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG25 register. */
#define ALT_MBOX_REG25_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG25 register from the beginning of the component. */
#define ALT_MBOX_REG25_OFST        0x64

/*
 * Register : reg26
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG26_FLD register field. */
#define ALT_MBOX_REG26_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG26_FLD register field. */
#define ALT_MBOX_REG26_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG26_FLD register field. */
#define ALT_MBOX_REG26_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG26_FLD register field value. */
#define ALT_MBOX_REG26_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG26_FLD register field value. */
#define ALT_MBOX_REG26_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG26_FLD register field. */
#define ALT_MBOX_REG26_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG26_FLD field value from a register. */
#define ALT_MBOX_REG26_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG26_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG26_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG26.
 */
struct ALT_MBOX_REG26_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG26. */
typedef struct ALT_MBOX_REG26_s  ALT_MBOX_REG26_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG26 register. */
#define ALT_MBOX_REG26_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG26 register from the beginning of the component. */
#define ALT_MBOX_REG26_OFST        0x68

/*
 * Register : reg27
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG27_FLD register field. */
#define ALT_MBOX_REG27_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG27_FLD register field. */
#define ALT_MBOX_REG27_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG27_FLD register field. */
#define ALT_MBOX_REG27_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG27_FLD register field value. */
#define ALT_MBOX_REG27_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG27_FLD register field value. */
#define ALT_MBOX_REG27_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG27_FLD register field. */
#define ALT_MBOX_REG27_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG27_FLD field value from a register. */
#define ALT_MBOX_REG27_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG27_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG27_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG27.
 */
struct ALT_MBOX_REG27_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG27. */
typedef struct ALT_MBOX_REG27_s  ALT_MBOX_REG27_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG27 register. */
#define ALT_MBOX_REG27_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG27 register from the beginning of the component. */
#define ALT_MBOX_REG27_OFST        0x6c

/*
 * Register : reg28
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG28_FLD register field. */
#define ALT_MBOX_REG28_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG28_FLD register field. */
#define ALT_MBOX_REG28_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG28_FLD register field. */
#define ALT_MBOX_REG28_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG28_FLD register field value. */
#define ALT_MBOX_REG28_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG28_FLD register field value. */
#define ALT_MBOX_REG28_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG28_FLD register field. */
#define ALT_MBOX_REG28_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG28_FLD field value from a register. */
#define ALT_MBOX_REG28_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG28_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG28_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG28.
 */
struct ALT_MBOX_REG28_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG28. */
typedef struct ALT_MBOX_REG28_s  ALT_MBOX_REG28_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG28 register. */
#define ALT_MBOX_REG28_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG28 register from the beginning of the component. */
#define ALT_MBOX_REG28_OFST        0x70

/*
 * Register : reg29
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG29_FLD register field. */
#define ALT_MBOX_REG29_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG29_FLD register field. */
#define ALT_MBOX_REG29_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG29_FLD register field. */
#define ALT_MBOX_REG29_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG29_FLD register field value. */
#define ALT_MBOX_REG29_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG29_FLD register field value. */
#define ALT_MBOX_REG29_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG29_FLD register field. */
#define ALT_MBOX_REG29_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG29_FLD field value from a register. */
#define ALT_MBOX_REG29_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG29_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG29_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG29.
 */
struct ALT_MBOX_REG29_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG29. */
typedef struct ALT_MBOX_REG29_s  ALT_MBOX_REG29_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG29 register. */
#define ALT_MBOX_REG29_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG29 register from the beginning of the component. */
#define ALT_MBOX_REG29_OFST        0x74

/*
 * Register : reg30
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG30_FLD register field. */
#define ALT_MBOX_REG30_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG30_FLD register field. */
#define ALT_MBOX_REG30_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG30_FLD register field. */
#define ALT_MBOX_REG30_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG30_FLD register field value. */
#define ALT_MBOX_REG30_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG30_FLD register field value. */
#define ALT_MBOX_REG30_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG30_FLD register field. */
#define ALT_MBOX_REG30_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG30_FLD field value from a register. */
#define ALT_MBOX_REG30_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG30_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG30_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG30.
 */
struct ALT_MBOX_REG30_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG30. */
typedef struct ALT_MBOX_REG30_s  ALT_MBOX_REG30_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG30 register. */
#define ALT_MBOX_REG30_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG30 register from the beginning of the component. */
#define ALT_MBOX_REG30_OFST        0x78

/*
 * Register : reg31
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG31_FLD register field. */
#define ALT_MBOX_REG31_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG31_FLD register field. */
#define ALT_MBOX_REG31_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG31_FLD register field. */
#define ALT_MBOX_REG31_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG31_FLD register field value. */
#define ALT_MBOX_REG31_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG31_FLD register field value. */
#define ALT_MBOX_REG31_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG31_FLD register field. */
#define ALT_MBOX_REG31_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG31_FLD field value from a register. */
#define ALT_MBOX_REG31_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG31_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG31_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG31.
 */
struct ALT_MBOX_REG31_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG31. */
typedef struct ALT_MBOX_REG31_s  ALT_MBOX_REG31_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG31 register. */
#define ALT_MBOX_REG31_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG31 register from the beginning of the component. */
#define ALT_MBOX_REG31_OFST        0x7c

/*
 * Register : aps_mailbox - reg32
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG32_FLD register field. */
#define ALT_MBOX_REG32_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG32_FLD register field. */
#define ALT_MBOX_REG32_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG32_FLD register field. */
#define ALT_MBOX_REG32_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG32_FLD register field value. */
#define ALT_MBOX_REG32_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG32_FLD register field value. */
#define ALT_MBOX_REG32_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG32_FLD register field. */
#define ALT_MBOX_REG32_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG32_FLD field value from a register. */
#define ALT_MBOX_REG32_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG32_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG32_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG32.
 */
struct ALT_MBOX_REG32_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG32. */
typedef struct ALT_MBOX_REG32_s  ALT_MBOX_REG32_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG32 register. */
#define ALT_MBOX_REG32_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG32 register from the beginning of the component. */
#define ALT_MBOX_REG32_OFST        0x80

/*
 * Register : reg33
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG33_FLD register field. */
#define ALT_MBOX_REG33_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG33_FLD register field. */
#define ALT_MBOX_REG33_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG33_FLD register field. */
#define ALT_MBOX_REG33_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG33_FLD register field value. */
#define ALT_MBOX_REG33_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG33_FLD register field value. */
#define ALT_MBOX_REG33_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG33_FLD register field. */
#define ALT_MBOX_REG33_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG33_FLD field value from a register. */
#define ALT_MBOX_REG33_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG33_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG33_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG33.
 */
struct ALT_MBOX_REG33_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG33. */
typedef struct ALT_MBOX_REG33_s  ALT_MBOX_REG33_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG33 register. */
#define ALT_MBOX_REG33_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG33 register from the beginning of the component. */
#define ALT_MBOX_REG33_OFST        0x84

/*
 * Register : reg34
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG34_FLD register field. */
#define ALT_MBOX_REG34_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG34_FLD register field. */
#define ALT_MBOX_REG34_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG34_FLD register field. */
#define ALT_MBOX_REG34_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG34_FLD register field value. */
#define ALT_MBOX_REG34_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG34_FLD register field value. */
#define ALT_MBOX_REG34_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG34_FLD register field. */
#define ALT_MBOX_REG34_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG34_FLD field value from a register. */
#define ALT_MBOX_REG34_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG34_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG34_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG34.
 */
struct ALT_MBOX_REG34_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG34. */
typedef struct ALT_MBOX_REG34_s  ALT_MBOX_REG34_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG34 register. */
#define ALT_MBOX_REG34_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG34 register from the beginning of the component. */
#define ALT_MBOX_REG34_OFST        0x88

/*
 * Register : reg35
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG35_FLD register field. */
#define ALT_MBOX_REG35_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG35_FLD register field. */
#define ALT_MBOX_REG35_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG35_FLD register field. */
#define ALT_MBOX_REG35_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG35_FLD register field value. */
#define ALT_MBOX_REG35_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG35_FLD register field value. */
#define ALT_MBOX_REG35_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG35_FLD register field. */
#define ALT_MBOX_REG35_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG35_FLD field value from a register. */
#define ALT_MBOX_REG35_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG35_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG35_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG35.
 */
struct ALT_MBOX_REG35_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG35. */
typedef struct ALT_MBOX_REG35_s  ALT_MBOX_REG35_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG35 register. */
#define ALT_MBOX_REG35_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG35 register from the beginning of the component. */
#define ALT_MBOX_REG35_OFST        0x8c

/*
 * Register : reg36
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG36_FLD register field. */
#define ALT_MBOX_REG36_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG36_FLD register field. */
#define ALT_MBOX_REG36_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG36_FLD register field. */
#define ALT_MBOX_REG36_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG36_FLD register field value. */
#define ALT_MBOX_REG36_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG36_FLD register field value. */
#define ALT_MBOX_REG36_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG36_FLD register field. */
#define ALT_MBOX_REG36_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG36_FLD field value from a register. */
#define ALT_MBOX_REG36_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG36_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG36_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG36.
 */
struct ALT_MBOX_REG36_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG36. */
typedef struct ALT_MBOX_REG36_s  ALT_MBOX_REG36_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG36 register. */
#define ALT_MBOX_REG36_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG36 register from the beginning of the component. */
#define ALT_MBOX_REG36_OFST        0x90

/*
 * Register : reg37
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG37_FLD register field. */
#define ALT_MBOX_REG37_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG37_FLD register field. */
#define ALT_MBOX_REG37_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG37_FLD register field. */
#define ALT_MBOX_REG37_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG37_FLD register field value. */
#define ALT_MBOX_REG37_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG37_FLD register field value. */
#define ALT_MBOX_REG37_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG37_FLD register field. */
#define ALT_MBOX_REG37_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG37_FLD field value from a register. */
#define ALT_MBOX_REG37_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG37_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG37_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG37.
 */
struct ALT_MBOX_REG37_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG37. */
typedef struct ALT_MBOX_REG37_s  ALT_MBOX_REG37_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG37 register. */
#define ALT_MBOX_REG37_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG37 register from the beginning of the component. */
#define ALT_MBOX_REG37_OFST        0x94

/*
 * Register : reg38
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG38_FLD register field. */
#define ALT_MBOX_REG38_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG38_FLD register field. */
#define ALT_MBOX_REG38_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG38_FLD register field. */
#define ALT_MBOX_REG38_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG38_FLD register field value. */
#define ALT_MBOX_REG38_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG38_FLD register field value. */
#define ALT_MBOX_REG38_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG38_FLD register field. */
#define ALT_MBOX_REG38_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG38_FLD field value from a register. */
#define ALT_MBOX_REG38_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG38_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG38_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG38.
 */
struct ALT_MBOX_REG38_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG38. */
typedef struct ALT_MBOX_REG38_s  ALT_MBOX_REG38_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG38 register. */
#define ALT_MBOX_REG38_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG38 register from the beginning of the component. */
#define ALT_MBOX_REG38_OFST        0x98

/*
 * Register : reg39
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG39_FLD register field. */
#define ALT_MBOX_REG39_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG39_FLD register field. */
#define ALT_MBOX_REG39_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG39_FLD register field. */
#define ALT_MBOX_REG39_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG39_FLD register field value. */
#define ALT_MBOX_REG39_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG39_FLD register field value. */
#define ALT_MBOX_REG39_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG39_FLD register field. */
#define ALT_MBOX_REG39_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG39_FLD field value from a register. */
#define ALT_MBOX_REG39_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG39_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG39_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG39.
 */
struct ALT_MBOX_REG39_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG39. */
typedef struct ALT_MBOX_REG39_s  ALT_MBOX_REG39_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG39 register. */
#define ALT_MBOX_REG39_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG39 register from the beginning of the component. */
#define ALT_MBOX_REG39_OFST        0x9c

/*
 * Register : reg40
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG40_FLD register field. */
#define ALT_MBOX_REG40_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG40_FLD register field. */
#define ALT_MBOX_REG40_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG40_FLD register field. */
#define ALT_MBOX_REG40_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG40_FLD register field value. */
#define ALT_MBOX_REG40_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG40_FLD register field value. */
#define ALT_MBOX_REG40_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG40_FLD register field. */
#define ALT_MBOX_REG40_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG40_FLD field value from a register. */
#define ALT_MBOX_REG40_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG40_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG40_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG40.
 */
struct ALT_MBOX_REG40_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG40. */
typedef struct ALT_MBOX_REG40_s  ALT_MBOX_REG40_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG40 register. */
#define ALT_MBOX_REG40_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG40 register from the beginning of the component. */
#define ALT_MBOX_REG40_OFST        0xa0

/*
 * Register : fpga_mailbox - reg41
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG41_FLD register field. */
#define ALT_MBOX_REG41_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG41_FLD register field. */
#define ALT_MBOX_REG41_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG41_FLD register field. */
#define ALT_MBOX_REG41_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG41_FLD register field value. */
#define ALT_MBOX_REG41_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG41_FLD register field value. */
#define ALT_MBOX_REG41_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG41_FLD register field. */
#define ALT_MBOX_REG41_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG41_FLD field value from a register. */
#define ALT_MBOX_REG41_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG41_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG41_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG41.
 */
struct ALT_MBOX_REG41_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG41. */
typedef struct ALT_MBOX_REG41_s  ALT_MBOX_REG41_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG41 register. */
#define ALT_MBOX_REG41_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG41 register from the beginning of the component. */
#define ALT_MBOX_REG41_OFST        0xa4

/*
 * Register : reg42
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG42_FLD register field. */
#define ALT_MBOX_REG42_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG42_FLD register field. */
#define ALT_MBOX_REG42_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG42_FLD register field. */
#define ALT_MBOX_REG42_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG42_FLD register field value. */
#define ALT_MBOX_REG42_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG42_FLD register field value. */
#define ALT_MBOX_REG42_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG42_FLD register field. */
#define ALT_MBOX_REG42_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG42_FLD field value from a register. */
#define ALT_MBOX_REG42_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG42_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG42_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG42.
 */
struct ALT_MBOX_REG42_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG42. */
typedef struct ALT_MBOX_REG42_s  ALT_MBOX_REG42_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG42 register. */
#define ALT_MBOX_REG42_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG42 register from the beginning of the component. */
#define ALT_MBOX_REG42_OFST        0xa8

/*
 * Register : reg43
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG43_FLD register field. */
#define ALT_MBOX_REG43_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG43_FLD register field. */
#define ALT_MBOX_REG43_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG43_FLD register field. */
#define ALT_MBOX_REG43_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG43_FLD register field value. */
#define ALT_MBOX_REG43_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG43_FLD register field value. */
#define ALT_MBOX_REG43_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG43_FLD register field. */
#define ALT_MBOX_REG43_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG43_FLD field value from a register. */
#define ALT_MBOX_REG43_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG43_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG43_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG43.
 */
struct ALT_MBOX_REG43_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG43. */
typedef struct ALT_MBOX_REG43_s  ALT_MBOX_REG43_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG43 register. */
#define ALT_MBOX_REG43_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG43 register from the beginning of the component. */
#define ALT_MBOX_REG43_OFST        0xac

/*
 * Register : reg44
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG44_FLD register field. */
#define ALT_MBOX_REG44_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG44_FLD register field. */
#define ALT_MBOX_REG44_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG44_FLD register field. */
#define ALT_MBOX_REG44_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG44_FLD register field value. */
#define ALT_MBOX_REG44_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG44_FLD register field value. */
#define ALT_MBOX_REG44_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG44_FLD register field. */
#define ALT_MBOX_REG44_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG44_FLD field value from a register. */
#define ALT_MBOX_REG44_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG44_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG44_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG44.
 */
struct ALT_MBOX_REG44_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG44. */
typedef struct ALT_MBOX_REG44_s  ALT_MBOX_REG44_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG44 register. */
#define ALT_MBOX_REG44_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG44 register from the beginning of the component. */
#define ALT_MBOX_REG44_OFST        0xb0

/*
 * Register : reg45
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG45_FLD register field. */
#define ALT_MBOX_REG45_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG45_FLD register field. */
#define ALT_MBOX_REG45_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG45_FLD register field. */
#define ALT_MBOX_REG45_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG45_FLD register field value. */
#define ALT_MBOX_REG45_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG45_FLD register field value. */
#define ALT_MBOX_REG45_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG45_FLD register field. */
#define ALT_MBOX_REG45_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG45_FLD field value from a register. */
#define ALT_MBOX_REG45_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG45_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG45_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG45.
 */
struct ALT_MBOX_REG45_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG45. */
typedef struct ALT_MBOX_REG45_s  ALT_MBOX_REG45_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG45 register. */
#define ALT_MBOX_REG45_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG45 register from the beginning of the component. */
#define ALT_MBOX_REG45_OFST        0xb4

/*
 * Register : reg46
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG46_FLD register field. */
#define ALT_MBOX_REG46_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG46_FLD register field. */
#define ALT_MBOX_REG46_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG46_FLD register field. */
#define ALT_MBOX_REG46_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG46_FLD register field value. */
#define ALT_MBOX_REG46_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG46_FLD register field value. */
#define ALT_MBOX_REG46_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG46_FLD register field. */
#define ALT_MBOX_REG46_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG46_FLD field value from a register. */
#define ALT_MBOX_REG46_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG46_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG46_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG46.
 */
struct ALT_MBOX_REG46_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG46. */
typedef struct ALT_MBOX_REG46_s  ALT_MBOX_REG46_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG46 register. */
#define ALT_MBOX_REG46_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG46 register from the beginning of the component. */
#define ALT_MBOX_REG46_OFST        0xb8

/*
 * Register : reg47
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG47_FLD register field. */
#define ALT_MBOX_REG47_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG47_FLD register field. */
#define ALT_MBOX_REG47_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG47_FLD register field. */
#define ALT_MBOX_REG47_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG47_FLD register field value. */
#define ALT_MBOX_REG47_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG47_FLD register field value. */
#define ALT_MBOX_REG47_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG47_FLD register field. */
#define ALT_MBOX_REG47_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG47_FLD field value from a register. */
#define ALT_MBOX_REG47_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG47_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG47_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG47.
 */
struct ALT_MBOX_REG47_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG47. */
typedef struct ALT_MBOX_REG47_s  ALT_MBOX_REG47_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG47 register. */
#define ALT_MBOX_REG47_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG47 register from the beginning of the component. */
#define ALT_MBOX_REG47_OFST        0xbc

/*
 * Register : reg48
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG48_FLD register field. */
#define ALT_MBOX_REG48_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG48_FLD register field. */
#define ALT_MBOX_REG48_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG48_FLD register field. */
#define ALT_MBOX_REG48_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG48_FLD register field value. */
#define ALT_MBOX_REG48_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG48_FLD register field value. */
#define ALT_MBOX_REG48_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG48_FLD register field. */
#define ALT_MBOX_REG48_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG48_FLD field value from a register. */
#define ALT_MBOX_REG48_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG48_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG48_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG48.
 */
struct ALT_MBOX_REG48_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG48. */
typedef struct ALT_MBOX_REG48_s  ALT_MBOX_REG48_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG48 register. */
#define ALT_MBOX_REG48_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG48 register from the beginning of the component. */
#define ALT_MBOX_REG48_OFST        0xc0

/*
 * Register : reg49
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG49_FLD register field. */
#define ALT_MBOX_REG49_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG49_FLD register field. */
#define ALT_MBOX_REG49_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG49_FLD register field. */
#define ALT_MBOX_REG49_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG49_FLD register field value. */
#define ALT_MBOX_REG49_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG49_FLD register field value. */
#define ALT_MBOX_REG49_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG49_FLD register field. */
#define ALT_MBOX_REG49_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG49_FLD field value from a register. */
#define ALT_MBOX_REG49_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG49_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG49_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG49.
 */
struct ALT_MBOX_REG49_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG49. */
typedef struct ALT_MBOX_REG49_s  ALT_MBOX_REG49_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG49 register. */
#define ALT_MBOX_REG49_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG49 register from the beginning of the component. */
#define ALT_MBOX_REG49_OFST        0xc4

/*
 * Register : reg50
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG50_FLD register field. */
#define ALT_MBOX_REG50_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG50_FLD register field. */
#define ALT_MBOX_REG50_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG50_FLD register field. */
#define ALT_MBOX_REG50_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG50_FLD register field value. */
#define ALT_MBOX_REG50_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG50_FLD register field value. */
#define ALT_MBOX_REG50_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG50_FLD register field. */
#define ALT_MBOX_REG50_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG50_FLD field value from a register. */
#define ALT_MBOX_REG50_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG50_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG50_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG50.
 */
struct ALT_MBOX_REG50_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG50. */
typedef struct ALT_MBOX_REG50_s  ALT_MBOX_REG50_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG50 register. */
#define ALT_MBOX_REG50_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG50 register from the beginning of the component. */
#define ALT_MBOX_REG50_OFST        0xc8

/*
 * Register : reg51
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG51_FLD register field. */
#define ALT_MBOX_REG51_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG51_FLD register field. */
#define ALT_MBOX_REG51_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG51_FLD register field. */
#define ALT_MBOX_REG51_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG51_FLD register field value. */
#define ALT_MBOX_REG51_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG51_FLD register field value. */
#define ALT_MBOX_REG51_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG51_FLD register field. */
#define ALT_MBOX_REG51_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG51_FLD field value from a register. */
#define ALT_MBOX_REG51_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG51_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG51_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG51.
 */
struct ALT_MBOX_REG51_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG51. */
typedef struct ALT_MBOX_REG51_s  ALT_MBOX_REG51_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG51 register. */
#define ALT_MBOX_REG51_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG51 register from the beginning of the component. */
#define ALT_MBOX_REG51_OFST        0xcc

/*
 * Register : reg52
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG52_FLD register field. */
#define ALT_MBOX_REG52_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG52_FLD register field. */
#define ALT_MBOX_REG52_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG52_FLD register field. */
#define ALT_MBOX_REG52_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG52_FLD register field value. */
#define ALT_MBOX_REG52_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG52_FLD register field value. */
#define ALT_MBOX_REG52_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG52_FLD register field. */
#define ALT_MBOX_REG52_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG52_FLD field value from a register. */
#define ALT_MBOX_REG52_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG52_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG52_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG52.
 */
struct ALT_MBOX_REG52_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG52. */
typedef struct ALT_MBOX_REG52_s  ALT_MBOX_REG52_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG52 register. */
#define ALT_MBOX_REG52_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG52 register from the beginning of the component. */
#define ALT_MBOX_REG52_OFST        0xd0

/*
 * Register : reg53
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG53_FLD register field. */
#define ALT_MBOX_REG53_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG53_FLD register field. */
#define ALT_MBOX_REG53_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG53_FLD register field. */
#define ALT_MBOX_REG53_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG53_FLD register field value. */
#define ALT_MBOX_REG53_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG53_FLD register field value. */
#define ALT_MBOX_REG53_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG53_FLD register field. */
#define ALT_MBOX_REG53_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG53_FLD field value from a register. */
#define ALT_MBOX_REG53_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG53_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG53_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG53.
 */
struct ALT_MBOX_REG53_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG53. */
typedef struct ALT_MBOX_REG53_s  ALT_MBOX_REG53_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG53 register. */
#define ALT_MBOX_REG53_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG53 register from the beginning of the component. */
#define ALT_MBOX_REG53_OFST        0xd4

/*
 * Register : reg54
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG54_FLD register field. */
#define ALT_MBOX_REG54_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG54_FLD register field. */
#define ALT_MBOX_REG54_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG54_FLD register field. */
#define ALT_MBOX_REG54_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG54_FLD register field value. */
#define ALT_MBOX_REG54_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG54_FLD register field value. */
#define ALT_MBOX_REG54_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG54_FLD register field. */
#define ALT_MBOX_REG54_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG54_FLD field value from a register. */
#define ALT_MBOX_REG54_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG54_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG54_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG54.
 */
struct ALT_MBOX_REG54_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG54. */
typedef struct ALT_MBOX_REG54_s  ALT_MBOX_REG54_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG54 register. */
#define ALT_MBOX_REG54_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG54 register from the beginning of the component. */
#define ALT_MBOX_REG54_OFST        0xd8

/*
 * Register : reg55
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG55_FLD register field. */
#define ALT_MBOX_REG55_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG55_FLD register field. */
#define ALT_MBOX_REG55_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG55_FLD register field. */
#define ALT_MBOX_REG55_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG55_FLD register field value. */
#define ALT_MBOX_REG55_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG55_FLD register field value. */
#define ALT_MBOX_REG55_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG55_FLD register field. */
#define ALT_MBOX_REG55_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG55_FLD field value from a register. */
#define ALT_MBOX_REG55_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG55_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG55_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG55.
 */
struct ALT_MBOX_REG55_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG55. */
typedef struct ALT_MBOX_REG55_s  ALT_MBOX_REG55_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG55 register. */
#define ALT_MBOX_REG55_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG55 register from the beginning of the component. */
#define ALT_MBOX_REG55_OFST        0xdc

/*
 * Register : reg56
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG56_FLD register field. */
#define ALT_MBOX_REG56_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG56_FLD register field. */
#define ALT_MBOX_REG56_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG56_FLD register field. */
#define ALT_MBOX_REG56_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG56_FLD register field value. */
#define ALT_MBOX_REG56_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG56_FLD register field value. */
#define ALT_MBOX_REG56_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG56_FLD register field. */
#define ALT_MBOX_REG56_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG56_FLD field value from a register. */
#define ALT_MBOX_REG56_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG56_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG56_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG56.
 */
struct ALT_MBOX_REG56_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG56. */
typedef struct ALT_MBOX_REG56_s  ALT_MBOX_REG56_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG56 register. */
#define ALT_MBOX_REG56_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG56 register from the beginning of the component. */
#define ALT_MBOX_REG56_OFST        0xe0

/*
 * Register : reg57
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG57_FLD register field. */
#define ALT_MBOX_REG57_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG57_FLD register field. */
#define ALT_MBOX_REG57_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG57_FLD register field. */
#define ALT_MBOX_REG57_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG57_FLD register field value. */
#define ALT_MBOX_REG57_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG57_FLD register field value. */
#define ALT_MBOX_REG57_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG57_FLD register field. */
#define ALT_MBOX_REG57_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG57_FLD field value from a register. */
#define ALT_MBOX_REG57_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG57_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG57_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG57.
 */
struct ALT_MBOX_REG57_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG57. */
typedef struct ALT_MBOX_REG57_s  ALT_MBOX_REG57_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG57 register. */
#define ALT_MBOX_REG57_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG57 register from the beginning of the component. */
#define ALT_MBOX_REG57_OFST        0xe4

/*
 * Register : reg58
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG58_FLD register field. */
#define ALT_MBOX_REG58_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG58_FLD register field. */
#define ALT_MBOX_REG58_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG58_FLD register field. */
#define ALT_MBOX_REG58_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG58_FLD register field value. */
#define ALT_MBOX_REG58_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG58_FLD register field value. */
#define ALT_MBOX_REG58_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG58_FLD register field. */
#define ALT_MBOX_REG58_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG58_FLD field value from a register. */
#define ALT_MBOX_REG58_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG58_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG58_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG58.
 */
struct ALT_MBOX_REG58_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG58. */
typedef struct ALT_MBOX_REG58_s  ALT_MBOX_REG58_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG58 register. */
#define ALT_MBOX_REG58_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG58 register from the beginning of the component. */
#define ALT_MBOX_REG58_OFST        0xe8

/*
 * Register : reg59
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG59_FLD register field. */
#define ALT_MBOX_REG59_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG59_FLD register field. */
#define ALT_MBOX_REG59_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG59_FLD register field. */
#define ALT_MBOX_REG59_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG59_FLD register field value. */
#define ALT_MBOX_REG59_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG59_FLD register field value. */
#define ALT_MBOX_REG59_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG59_FLD register field. */
#define ALT_MBOX_REG59_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG59_FLD field value from a register. */
#define ALT_MBOX_REG59_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG59_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG59_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG59.
 */
struct ALT_MBOX_REG59_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG59. */
typedef struct ALT_MBOX_REG59_s  ALT_MBOX_REG59_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG59 register. */
#define ALT_MBOX_REG59_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG59 register from the beginning of the component. */
#define ALT_MBOX_REG59_OFST        0xec

/*
 * Register : reg60
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG60_FLD register field. */
#define ALT_MBOX_REG60_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG60_FLD register field. */
#define ALT_MBOX_REG60_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG60_FLD register field. */
#define ALT_MBOX_REG60_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG60_FLD register field value. */
#define ALT_MBOX_REG60_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG60_FLD register field value. */
#define ALT_MBOX_REG60_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG60_FLD register field. */
#define ALT_MBOX_REG60_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG60_FLD field value from a register. */
#define ALT_MBOX_REG60_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG60_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG60_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG60.
 */
struct ALT_MBOX_REG60_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG60. */
typedef struct ALT_MBOX_REG60_s  ALT_MBOX_REG60_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG60 register. */
#define ALT_MBOX_REG60_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG60 register from the beginning of the component. */
#define ALT_MBOX_REG60_OFST        0xf0

/*
 * Register : reg61
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG61_FLD register field. */
#define ALT_MBOX_REG61_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG61_FLD register field. */
#define ALT_MBOX_REG61_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG61_FLD register field. */
#define ALT_MBOX_REG61_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG61_FLD register field value. */
#define ALT_MBOX_REG61_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG61_FLD register field value. */
#define ALT_MBOX_REG61_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG61_FLD register field. */
#define ALT_MBOX_REG61_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG61_FLD field value from a register. */
#define ALT_MBOX_REG61_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG61_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG61_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG61.
 */
struct ALT_MBOX_REG61_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG61. */
typedef struct ALT_MBOX_REG61_s  ALT_MBOX_REG61_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG61 register. */
#define ALT_MBOX_REG61_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG61 register from the beginning of the component. */
#define ALT_MBOX_REG61_OFST        0xf4

/*
 * Register : reg62
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG62_FLD register field. */
#define ALT_MBOX_REG62_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG62_FLD register field. */
#define ALT_MBOX_REG62_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG62_FLD register field. */
#define ALT_MBOX_REG62_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG62_FLD register field value. */
#define ALT_MBOX_REG62_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG62_FLD register field value. */
#define ALT_MBOX_REG62_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG62_FLD register field. */
#define ALT_MBOX_REG62_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG62_FLD field value from a register. */
#define ALT_MBOX_REG62_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG62_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG62_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG62.
 */
struct ALT_MBOX_REG62_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG62. */
typedef struct ALT_MBOX_REG62_s  ALT_MBOX_REG62_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG62 register. */
#define ALT_MBOX_REG62_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG62 register from the beginning of the component. */
#define ALT_MBOX_REG62_OFST        0xf8

/*
 * Register : reg63
 * 
 * mailbox phantom register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Empty      
 * 
 */
/*
 * Field : Empty - fld
 * 
 * Placeholder
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_MBOX_REG63_FLD register field. */
#define ALT_MBOX_REG63_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_REG63_FLD register field. */
#define ALT_MBOX_REG63_FLD_MSB        31
/* The width in bits of the ALT_MBOX_REG63_FLD register field. */
#define ALT_MBOX_REG63_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_REG63_FLD register field value. */
#define ALT_MBOX_REG63_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_REG63_FLD register field value. */
#define ALT_MBOX_REG63_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_REG63_FLD register field. */
#define ALT_MBOX_REG63_FLD_RESET      0x0
/* Extracts the ALT_MBOX_REG63_FLD field value from a register. */
#define ALT_MBOX_REG63_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_REG63_FLD register field value suitable for setting the register. */
#define ALT_MBOX_REG63_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_REG63.
 */
struct ALT_MBOX_REG63_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_REG63. */
typedef struct ALT_MBOX_REG63_s  ALT_MBOX_REG63_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_REG63 register. */
#define ALT_MBOX_REG63_RESET       0x00000000
/* The byte offset of the ALT_MBOX_REG63 register from the beginning of the component. */
#define ALT_MBOX_REG63_OFST        0xfc

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_MBOX.
 */
struct ALT_MBOX_s
{
    volatile ALT_MBOX_REG0_t   reg0;   /* ALT_MBOX_REG0 */
    volatile ALT_MBOX_REG1_t   reg1;   /* ALT_MBOX_REG1 */
    volatile ALT_MBOX_REG2_t   reg2;   /* ALT_MBOX_REG2 */
    volatile ALT_MBOX_REG3_t   reg3;   /* ALT_MBOX_REG3 */
    volatile ALT_MBOX_REG4_t   reg4;   /* ALT_MBOX_REG4 */
    volatile ALT_MBOX_REG5_t   reg5;   /* ALT_MBOX_REG5 */
    volatile ALT_MBOX_REG6_t   reg6;   /* ALT_MBOX_REG6 */
    volatile ALT_MBOX_REG7_t   reg7;   /* ALT_MBOX_REG7 */
    volatile ALT_MBOX_REG8_t   reg8;   /* ALT_MBOX_REG8 */
    volatile ALT_MBOX_REG9_t   reg9;   /* ALT_MBOX_REG9 */
    volatile ALT_MBOX_REG10_t  reg10;  /* ALT_MBOX_REG10 */
    volatile ALT_MBOX_REG11_t  reg11;  /* ALT_MBOX_REG11 */
    volatile ALT_MBOX_REG12_t  reg12;  /* ALT_MBOX_REG12 */
    volatile ALT_MBOX_REG13_t  reg13;  /* ALT_MBOX_REG13 */
    volatile ALT_MBOX_REG14_t  reg14;  /* ALT_MBOX_REG14 */
    volatile ALT_MBOX_REG15_t  reg15;  /* ALT_MBOX_REG15 */
    volatile ALT_MBOX_REG16_t  reg16;  /* ALT_MBOX_REG16 */
    volatile ALT_MBOX_REG17_t  reg17;  /* ALT_MBOX_REG17 */
    volatile ALT_MBOX_REG18_t  reg18;  /* ALT_MBOX_REG18 */
    volatile ALT_MBOX_REG19_t  reg19;  /* ALT_MBOX_REG19 */
    volatile ALT_MBOX_REG20_t  reg20;  /* ALT_MBOX_REG20 */
    volatile ALT_MBOX_REG21_t  reg21;  /* ALT_MBOX_REG21 */
    volatile ALT_MBOX_REG22_t  reg22;  /* ALT_MBOX_REG22 */
    volatile ALT_MBOX_REG23_t  reg23;  /* ALT_MBOX_REG23 */
    volatile ALT_MBOX_REG24_t  reg24;  /* ALT_MBOX_REG24 */
    volatile ALT_MBOX_REG25_t  reg25;  /* ALT_MBOX_REG25 */
    volatile ALT_MBOX_REG26_t  reg26;  /* ALT_MBOX_REG26 */
    volatile ALT_MBOX_REG27_t  reg27;  /* ALT_MBOX_REG27 */
    volatile ALT_MBOX_REG28_t  reg28;  /* ALT_MBOX_REG28 */
    volatile ALT_MBOX_REG29_t  reg29;  /* ALT_MBOX_REG29 */
    volatile ALT_MBOX_REG30_t  reg30;  /* ALT_MBOX_REG30 */
    volatile ALT_MBOX_REG31_t  reg31;  /* ALT_MBOX_REG31 */
    volatile ALT_MBOX_REG32_t  reg32;  /* ALT_MBOX_REG32 */
    volatile ALT_MBOX_REG33_t  reg33;  /* ALT_MBOX_REG33 */
    volatile ALT_MBOX_REG34_t  reg34;  /* ALT_MBOX_REG34 */
    volatile ALT_MBOX_REG35_t  reg35;  /* ALT_MBOX_REG35 */
    volatile ALT_MBOX_REG36_t  reg36;  /* ALT_MBOX_REG36 */
    volatile ALT_MBOX_REG37_t  reg37;  /* ALT_MBOX_REG37 */
    volatile ALT_MBOX_REG38_t  reg38;  /* ALT_MBOX_REG38 */
    volatile ALT_MBOX_REG39_t  reg39;  /* ALT_MBOX_REG39 */
    volatile ALT_MBOX_REG40_t  reg40;  /* ALT_MBOX_REG40 */
    volatile ALT_MBOX_REG41_t  reg41;  /* ALT_MBOX_REG41 */
    volatile ALT_MBOX_REG42_t  reg42;  /* ALT_MBOX_REG42 */
    volatile ALT_MBOX_REG43_t  reg43;  /* ALT_MBOX_REG43 */
    volatile ALT_MBOX_REG44_t  reg44;  /* ALT_MBOX_REG44 */
    volatile ALT_MBOX_REG45_t  reg45;  /* ALT_MBOX_REG45 */
    volatile ALT_MBOX_REG46_t  reg46;  /* ALT_MBOX_REG46 */
    volatile ALT_MBOX_REG47_t  reg47;  /* ALT_MBOX_REG47 */
    volatile ALT_MBOX_REG48_t  reg48;  /* ALT_MBOX_REG48 */
    volatile ALT_MBOX_REG49_t  reg49;  /* ALT_MBOX_REG49 */
    volatile ALT_MBOX_REG50_t  reg50;  /* ALT_MBOX_REG50 */
    volatile ALT_MBOX_REG51_t  reg51;  /* ALT_MBOX_REG51 */
    volatile ALT_MBOX_REG52_t  reg52;  /* ALT_MBOX_REG52 */
    volatile ALT_MBOX_REG53_t  reg53;  /* ALT_MBOX_REG53 */
    volatile ALT_MBOX_REG54_t  reg54;  /* ALT_MBOX_REG54 */
    volatile ALT_MBOX_REG55_t  reg55;  /* ALT_MBOX_REG55 */
    volatile ALT_MBOX_REG56_t  reg56;  /* ALT_MBOX_REG56 */
    volatile ALT_MBOX_REG57_t  reg57;  /* ALT_MBOX_REG57 */
    volatile ALT_MBOX_REG58_t  reg58;  /* ALT_MBOX_REG58 */
    volatile ALT_MBOX_REG59_t  reg59;  /* ALT_MBOX_REG59 */
    volatile ALT_MBOX_REG60_t  reg60;  /* ALT_MBOX_REG60 */
    volatile ALT_MBOX_REG61_t  reg61;  /* ALT_MBOX_REG61 */
    volatile ALT_MBOX_REG62_t  reg62;  /* ALT_MBOX_REG62 */
    volatile ALT_MBOX_REG63_t  reg63;  /* ALT_MBOX_REG63 */
};

/* The typedef declaration for register group ALT_MBOX. */
typedef struct ALT_MBOX_s  ALT_MBOX_t;
/* The struct declaration for the raw register contents of register group ALT_MBOX. */
struct ALT_MBOX_raw_s
{
    volatile uint32_t  reg0;   /* ALT_MBOX_REG0 */
    volatile uint32_t  reg1;   /* ALT_MBOX_REG1 */
    volatile uint32_t  reg2;   /* ALT_MBOX_REG2 */
    volatile uint32_t  reg3;   /* ALT_MBOX_REG3 */
    volatile uint32_t  reg4;   /* ALT_MBOX_REG4 */
    volatile uint32_t  reg5;   /* ALT_MBOX_REG5 */
    volatile uint32_t  reg6;   /* ALT_MBOX_REG6 */
    volatile uint32_t  reg7;   /* ALT_MBOX_REG7 */
    volatile uint32_t  reg8;   /* ALT_MBOX_REG8 */
    volatile uint32_t  reg9;   /* ALT_MBOX_REG9 */
    volatile uint32_t  reg10;  /* ALT_MBOX_REG10 */
    volatile uint32_t  reg11;  /* ALT_MBOX_REG11 */
    volatile uint32_t  reg12;  /* ALT_MBOX_REG12 */
    volatile uint32_t  reg13;  /* ALT_MBOX_REG13 */
    volatile uint32_t  reg14;  /* ALT_MBOX_REG14 */
    volatile uint32_t  reg15;  /* ALT_MBOX_REG15 */
    volatile uint32_t  reg16;  /* ALT_MBOX_REG16 */
    volatile uint32_t  reg17;  /* ALT_MBOX_REG17 */
    volatile uint32_t  reg18;  /* ALT_MBOX_REG18 */
    volatile uint32_t  reg19;  /* ALT_MBOX_REG19 */
    volatile uint32_t  reg20;  /* ALT_MBOX_REG20 */
    volatile uint32_t  reg21;  /* ALT_MBOX_REG21 */
    volatile uint32_t  reg22;  /* ALT_MBOX_REG22 */
    volatile uint32_t  reg23;  /* ALT_MBOX_REG23 */
    volatile uint32_t  reg24;  /* ALT_MBOX_REG24 */
    volatile uint32_t  reg25;  /* ALT_MBOX_REG25 */
    volatile uint32_t  reg26;  /* ALT_MBOX_REG26 */
    volatile uint32_t  reg27;  /* ALT_MBOX_REG27 */
    volatile uint32_t  reg28;  /* ALT_MBOX_REG28 */
    volatile uint32_t  reg29;  /* ALT_MBOX_REG29 */
    volatile uint32_t  reg30;  /* ALT_MBOX_REG30 */
    volatile uint32_t  reg31;  /* ALT_MBOX_REG31 */
    volatile uint32_t  reg32;  /* ALT_MBOX_REG32 */
    volatile uint32_t  reg33;  /* ALT_MBOX_REG33 */
    volatile uint32_t  reg34;  /* ALT_MBOX_REG34 */
    volatile uint32_t  reg35;  /* ALT_MBOX_REG35 */
    volatile uint32_t  reg36;  /* ALT_MBOX_REG36 */
    volatile uint32_t  reg37;  /* ALT_MBOX_REG37 */
    volatile uint32_t  reg38;  /* ALT_MBOX_REG38 */
    volatile uint32_t  reg39;  /* ALT_MBOX_REG39 */
    volatile uint32_t  reg40;  /* ALT_MBOX_REG40 */
    volatile uint32_t  reg41;  /* ALT_MBOX_REG41 */
    volatile uint32_t  reg42;  /* ALT_MBOX_REG42 */
    volatile uint32_t  reg43;  /* ALT_MBOX_REG43 */
    volatile uint32_t  reg44;  /* ALT_MBOX_REG44 */
    volatile uint32_t  reg45;  /* ALT_MBOX_REG45 */
    volatile uint32_t  reg46;  /* ALT_MBOX_REG46 */
    volatile uint32_t  reg47;  /* ALT_MBOX_REG47 */
    volatile uint32_t  reg48;  /* ALT_MBOX_REG48 */
    volatile uint32_t  reg49;  /* ALT_MBOX_REG49 */
    volatile uint32_t  reg50;  /* ALT_MBOX_REG50 */
    volatile uint32_t  reg51;  /* ALT_MBOX_REG51 */
    volatile uint32_t  reg52;  /* ALT_MBOX_REG52 */
    volatile uint32_t  reg53;  /* ALT_MBOX_REG53 */
    volatile uint32_t  reg54;  /* ALT_MBOX_REG54 */
    volatile uint32_t  reg55;  /* ALT_MBOX_REG55 */
    volatile uint32_t  reg56;  /* ALT_MBOX_REG56 */
    volatile uint32_t  reg57;  /* ALT_MBOX_REG57 */
    volatile uint32_t  reg58;  /* ALT_MBOX_REG58 */
    volatile uint32_t  reg59;  /* ALT_MBOX_REG59 */
    volatile uint32_t  reg60;  /* ALT_MBOX_REG60 */
    volatile uint32_t  reg61;  /* ALT_MBOX_REG61 */
    volatile uint32_t  reg62;  /* ALT_MBOX_REG62 */
    volatile uint32_t  reg63;  /* ALT_MBOX_REG63 */
};

/* The typedef declaration for the raw register contents of register group ALT_MBOX. */
typedef struct ALT_MBOX_raw_s  ALT_MBOX_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_MBOX_H__ */

