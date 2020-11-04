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

/* Altera - ALT_MBOX_STREAM */

#ifndef __ALT_SOCAL_MBOX_STREAM_H__
#define __ALT_SOCAL_MBOX_STREAM_H__

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
 * Component : MBOX_STREAM
 * 
 */
/*
 * Register : reg0
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG0_FLD register field. */
#define ALT_MBOX_STREAM_REG0_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG0_FLD register field. */
#define ALT_MBOX_STREAM_REG0_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG0_FLD register field. */
#define ALT_MBOX_STREAM_REG0_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG0_FLD register field value. */
#define ALT_MBOX_STREAM_REG0_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG0_FLD register field value. */
#define ALT_MBOX_STREAM_REG0_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG0_FLD register field. */
#define ALT_MBOX_STREAM_REG0_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG0_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG0_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG0_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG0_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG0.
 */
struct ALT_MBOX_STREAM_REG0_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG0. */
typedef struct ALT_MBOX_STREAM_REG0_s  ALT_MBOX_STREAM_REG0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG0 register. */
#define ALT_MBOX_STREAM_REG0_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG0 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG0_OFST        0x0

/*
 * Register : reg1
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG1_FLD register field. */
#define ALT_MBOX_STREAM_REG1_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG1_FLD register field. */
#define ALT_MBOX_STREAM_REG1_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG1_FLD register field. */
#define ALT_MBOX_STREAM_REG1_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG1_FLD register field value. */
#define ALT_MBOX_STREAM_REG1_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG1_FLD register field value. */
#define ALT_MBOX_STREAM_REG1_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG1_FLD register field. */
#define ALT_MBOX_STREAM_REG1_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG1_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG1_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG1_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG1_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG1.
 */
struct ALT_MBOX_STREAM_REG1_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG1. */
typedef struct ALT_MBOX_STREAM_REG1_s  ALT_MBOX_STREAM_REG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG1 register. */
#define ALT_MBOX_STREAM_REG1_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG1 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG1_OFST        0x4

/*
 * Register : reg2
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG2_FLD register field. */
#define ALT_MBOX_STREAM_REG2_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG2_FLD register field. */
#define ALT_MBOX_STREAM_REG2_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG2_FLD register field. */
#define ALT_MBOX_STREAM_REG2_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG2_FLD register field value. */
#define ALT_MBOX_STREAM_REG2_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG2_FLD register field value. */
#define ALT_MBOX_STREAM_REG2_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG2_FLD register field. */
#define ALT_MBOX_STREAM_REG2_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG2_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG2_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG2_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG2_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG2.
 */
struct ALT_MBOX_STREAM_REG2_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG2. */
typedef struct ALT_MBOX_STREAM_REG2_s  ALT_MBOX_STREAM_REG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG2 register. */
#define ALT_MBOX_STREAM_REG2_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG2 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG2_OFST        0x8

/*
 * Register : reg3
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG3_FLD register field. */
#define ALT_MBOX_STREAM_REG3_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG3_FLD register field. */
#define ALT_MBOX_STREAM_REG3_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG3_FLD register field. */
#define ALT_MBOX_STREAM_REG3_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG3_FLD register field value. */
#define ALT_MBOX_STREAM_REG3_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG3_FLD register field value. */
#define ALT_MBOX_STREAM_REG3_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG3_FLD register field. */
#define ALT_MBOX_STREAM_REG3_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG3_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG3_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG3_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG3_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG3.
 */
struct ALT_MBOX_STREAM_REG3_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG3. */
typedef struct ALT_MBOX_STREAM_REG3_s  ALT_MBOX_STREAM_REG3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG3 register. */
#define ALT_MBOX_STREAM_REG3_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG3 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG3_OFST        0xc

/*
 * Register : reg4
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG4_FLD register field. */
#define ALT_MBOX_STREAM_REG4_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG4_FLD register field. */
#define ALT_MBOX_STREAM_REG4_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG4_FLD register field. */
#define ALT_MBOX_STREAM_REG4_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG4_FLD register field value. */
#define ALT_MBOX_STREAM_REG4_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG4_FLD register field value. */
#define ALT_MBOX_STREAM_REG4_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG4_FLD register field. */
#define ALT_MBOX_STREAM_REG4_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG4_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG4_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG4_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG4_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG4.
 */
struct ALT_MBOX_STREAM_REG4_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG4. */
typedef struct ALT_MBOX_STREAM_REG4_s  ALT_MBOX_STREAM_REG4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG4 register. */
#define ALT_MBOX_STREAM_REG4_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG4 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG4_OFST        0x10

/*
 * Register : reg5
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG5_FLD register field. */
#define ALT_MBOX_STREAM_REG5_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG5_FLD register field. */
#define ALT_MBOX_STREAM_REG5_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG5_FLD register field. */
#define ALT_MBOX_STREAM_REG5_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG5_FLD register field value. */
#define ALT_MBOX_STREAM_REG5_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG5_FLD register field value. */
#define ALT_MBOX_STREAM_REG5_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG5_FLD register field. */
#define ALT_MBOX_STREAM_REG5_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG5_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG5_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG5_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG5_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG5.
 */
struct ALT_MBOX_STREAM_REG5_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG5. */
typedef struct ALT_MBOX_STREAM_REG5_s  ALT_MBOX_STREAM_REG5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG5 register. */
#define ALT_MBOX_STREAM_REG5_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG5 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG5_OFST        0x14

/*
 * Register : reg6
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG6_FLD register field. */
#define ALT_MBOX_STREAM_REG6_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG6_FLD register field. */
#define ALT_MBOX_STREAM_REG6_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG6_FLD register field. */
#define ALT_MBOX_STREAM_REG6_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG6_FLD register field value. */
#define ALT_MBOX_STREAM_REG6_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG6_FLD register field value. */
#define ALT_MBOX_STREAM_REG6_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG6_FLD register field. */
#define ALT_MBOX_STREAM_REG6_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG6_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG6_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG6_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG6_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG6.
 */
struct ALT_MBOX_STREAM_REG6_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG6. */
typedef struct ALT_MBOX_STREAM_REG6_s  ALT_MBOX_STREAM_REG6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG6 register. */
#define ALT_MBOX_STREAM_REG6_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG6 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG6_OFST        0x18

/*
 * Register : reg7
 * 
 * stream phantom register
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
/* The Least Significant Bit (LSB) position of the ALT_MBOX_STREAM_REG7_FLD register field. */
#define ALT_MBOX_STREAM_REG7_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_MBOX_STREAM_REG7_FLD register field. */
#define ALT_MBOX_STREAM_REG7_FLD_MSB        31
/* The width in bits of the ALT_MBOX_STREAM_REG7_FLD register field. */
#define ALT_MBOX_STREAM_REG7_FLD_WIDTH      32
/* The mask used to set the ALT_MBOX_STREAM_REG7_FLD register field value. */
#define ALT_MBOX_STREAM_REG7_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_MBOX_STREAM_REG7_FLD register field value. */
#define ALT_MBOX_STREAM_REG7_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_MBOX_STREAM_REG7_FLD register field. */
#define ALT_MBOX_STREAM_REG7_FLD_RESET      0x0
/* Extracts the ALT_MBOX_STREAM_REG7_FLD field value from a register. */
#define ALT_MBOX_STREAM_REG7_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_MBOX_STREAM_REG7_FLD register field value suitable for setting the register. */
#define ALT_MBOX_STREAM_REG7_FLD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_MBOX_STREAM_REG7.
 */
struct ALT_MBOX_STREAM_REG7_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_MBOX_STREAM_REG7. */
typedef struct ALT_MBOX_STREAM_REG7_s  ALT_MBOX_STREAM_REG7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_MBOX_STREAM_REG7 register. */
#define ALT_MBOX_STREAM_REG7_RESET       0x00000000
/* The byte offset of the ALT_MBOX_STREAM_REG7 register from the beginning of the component. */
#define ALT_MBOX_STREAM_REG7_OFST        0x1c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_MBOX_STREAM.
 */
struct ALT_MBOX_STREAM_s
{
    volatile ALT_MBOX_STREAM_REG0_t  reg0;               /* ALT_MBOX_STREAM_REG0 */
    volatile ALT_MBOX_STREAM_REG1_t  reg1;               /* ALT_MBOX_STREAM_REG1 */
    volatile ALT_MBOX_STREAM_REG2_t  reg2;               /* ALT_MBOX_STREAM_REG2 */
    volatile ALT_MBOX_STREAM_REG3_t  reg3;               /* ALT_MBOX_STREAM_REG3 */
    volatile ALT_MBOX_STREAM_REG4_t  reg4;               /* ALT_MBOX_STREAM_REG4 */
    volatile ALT_MBOX_STREAM_REG5_t  reg5;               /* ALT_MBOX_STREAM_REG5 */
    volatile ALT_MBOX_STREAM_REG6_t  reg6;               /* ALT_MBOX_STREAM_REG6 */
    volatile ALT_MBOX_STREAM_REG7_t  reg7;               /* ALT_MBOX_STREAM_REG7 */
    volatile uint32_t                _pad_0x20_0x44[9];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_MBOX_STREAM. */
typedef struct ALT_MBOX_STREAM_s  ALT_MBOX_STREAM_t;
/* The struct declaration for the raw register contents of register group ALT_MBOX_STREAM. */
struct ALT_MBOX_STREAM_raw_s
{
    volatile uint32_t  reg0;               /* ALT_MBOX_STREAM_REG0 */
    volatile uint32_t  reg1;               /* ALT_MBOX_STREAM_REG1 */
    volatile uint32_t  reg2;               /* ALT_MBOX_STREAM_REG2 */
    volatile uint32_t  reg3;               /* ALT_MBOX_STREAM_REG3 */
    volatile uint32_t  reg4;               /* ALT_MBOX_STREAM_REG4 */
    volatile uint32_t  reg5;               /* ALT_MBOX_STREAM_REG5 */
    volatile uint32_t  reg6;               /* ALT_MBOX_STREAM_REG6 */
    volatile uint32_t  reg7;               /* ALT_MBOX_STREAM_REG7 */
    volatile uint32_t  _pad_0x20_0x44[9];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_MBOX_STREAM. */
typedef struct ALT_MBOX_STREAM_raw_s  ALT_MBOX_STREAM_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_MBOX_STREAM_H__ */

