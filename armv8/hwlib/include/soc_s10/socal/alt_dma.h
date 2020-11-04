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

/* Altera - ALT_DMA */

#ifndef __ALT_SOCAL_DMA_H__
#define __ALT_SOCAL_DMA_H__

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
 * Component : DMA
 * Address space allocated to the secure DMA. For detailed information about the
 * use of this address space,
 * http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.ddi0424b/index.html
 * to access the ARM documentation for the DMA-330.
 * 
 */
/*
 * Register : Data
 * 
 * Placeholder
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description       
 * :-------|:-------|:--------|:-------------------
 *  [31:0] | RW     | Unknown | ALT_DMA_DATA_FIELD
 * 
 */
/*
 * Field : Field
 * 
 * Empty
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_DMA_DATA_FIELD register field. */
#define ALT_DMA_DATA_FIELD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_DMA_DATA_FIELD register field. */
#define ALT_DMA_DATA_FIELD_MSB        31
/* The width in bits of the ALT_DMA_DATA_FIELD register field. */
#define ALT_DMA_DATA_FIELD_WIDTH      32
/* The mask used to set the ALT_DMA_DATA_FIELD register field value. */
#define ALT_DMA_DATA_FIELD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_DMA_DATA_FIELD register field value. */
#define ALT_DMA_DATA_FIELD_CLR_MSK    0x00000000
/* The reset value of the ALT_DMA_DATA_FIELD register field is UNKNOWN. */
#define ALT_DMA_DATA_FIELD_RESET      0x0
/* Extracts the ALT_DMA_DATA_FIELD field value from a register. */
#define ALT_DMA_DATA_FIELD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_DMA_DATA_FIELD register field value suitable for setting the register. */
#define ALT_DMA_DATA_FIELD_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_DMA_DATA.
 */
struct ALT_DMA_DATA_s
{
    volatile uint32_t  Field : 32;  /* ALT_DMA_DATA_FIELD */
};

/* The typedef declaration for register ALT_DMA_DATA. */
typedef struct ALT_DMA_DATA_s  ALT_DMA_DATA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_DMA_DATA register. */
#define ALT_DMA_DATA_RESET       0x00000000
/* The byte offset of the ALT_DMA_DATA register from the beginning of the component. */
#define ALT_DMA_DATA_OFST        0x0
/* The address of the ALT_DMA_DATA register. */
#define ALT_DMA_DATA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_DMA_DATA_OFST))

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
 * The struct declaration for register group ALT_DMA.
 */
struct ALT_DMA_s
{
    volatile ALT_DMA_DATA_t  Data;                   /* ALT_DMA_DATA */
    volatile uint32_t        _pad_0x4_0x1000[1023];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_DMA. */
typedef struct ALT_DMA_s  ALT_DMA_t;
/* The struct declaration for the raw register contents of register group ALT_DMA. */
struct ALT_DMA_raw_s
{
    volatile uint32_t  Data;                   /* ALT_DMA_DATA */
    volatile uint32_t  _pad_0x4_0x1000[1023];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_DMA. */
typedef struct ALT_DMA_raw_s  ALT_DMA_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_DMA_H__ */

