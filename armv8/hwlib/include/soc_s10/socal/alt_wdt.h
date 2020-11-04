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

/* Altera - ALT_WDT */

#ifndef __ALT_SOCAL_WDT_H__
#define __ALT_SOCAL_WDT_H__

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
 * Component : WDT
 * 
 */
/*
 * Register : Control Register - WDT_CR
 * 
 * Control Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | RW     | 0x0   | ALT_WDT_WDT_CR_WDT_EN
 *  [1]    | RW     | 0x0   | ALT_WDT_WDT_CR_RMOD  
 *  [4:2]  | RW     | 0x4   | ALT_WDT_WDT_CR_RPL   
 *  [31:5] | ???    | 0x0   | *UNDEFINED*          
 * 
 */
/*
 * Field : WDT_EN
 * 
 * When the configuration parameter WDT_ALWAYS_EN = 0, this bit can be set
 * 
 * otherwise, it is read-only. This bit is used to enable and disable the
 * DW_apb_wdt.
 * 
 * When disabled, the counter does not decrement. Thus, no interrupts or system
 * resets
 * 
 * are generated.
 * 
 * The DW_apb_wdt is used to prevent system lock-up. To prevent a software bug from
 * 
 * disabling the DW_apb_wdt, once this bit has been enabled, it can be cleared only
 * by
 * 
 * a system reset.
 * 
 * 0 = WDT disabled.
 * 
 * 1 = WDT enabled.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description            
 * :---------------------------------|:------|:------------------------
 *  ALT_WDT_WDT_CR_WDT_EN_E_DISABLED | 0x0   | Watchdog timer disabled
 *  ALT_WDT_WDT_CR_WDT_EN_E_ENABLED  | 0x1   | Watchdog timer enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_WDT_EN
 * 
 * Watchdog timer disabled
 */
#define ALT_WDT_WDT_CR_WDT_EN_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_WDT_EN
 * 
 * Watchdog timer enabled
 */
#define ALT_WDT_WDT_CR_WDT_EN_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_CR_WDT_EN register field. */
#define ALT_WDT_WDT_CR_WDT_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_CR_WDT_EN register field. */
#define ALT_WDT_WDT_CR_WDT_EN_MSB        0
/* The width in bits of the ALT_WDT_WDT_CR_WDT_EN register field. */
#define ALT_WDT_WDT_CR_WDT_EN_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_CR_WDT_EN register field value. */
#define ALT_WDT_WDT_CR_WDT_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_WDT_WDT_CR_WDT_EN register field value. */
#define ALT_WDT_WDT_CR_WDT_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_WDT_WDT_CR_WDT_EN register field. */
#define ALT_WDT_WDT_CR_WDT_EN_RESET      0x0
/* Extracts the ALT_WDT_WDT_CR_WDT_EN field value from a register. */
#define ALT_WDT_WDT_CR_WDT_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_WDT_WDT_CR_WDT_EN register field value suitable for setting the register. */
#define ALT_WDT_WDT_CR_WDT_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RMOD
 * 
 * Response mode. Writes have no effect when the parameter
 * 
 * WDT_HC_RMOD = 1, thus this register becomes read-only.
 * 
 * Selects the output response generated to a timeout.
 * 
 * 0 = Generate a system reset.
 * 
 * 1 = First generate an interrupt and if it is not cleared by the time
 * 
 * a second timeout occurs then generate a system reset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                                     
 * :--------------------------------|:------|:-------------------------------------------------
 *  ALT_WDT_WDT_CR_RMOD_E_RESET     | 0x0   | Generate a system reset                         
 *  ALT_WDT_WDT_CR_RMOD_E_INTERRUPT | 0x1   | First generate an interrupt and if it is not    
 * :                                |       | cleared by                                      
 * :                                |       | the time a second timeout occurs then generate a
 * :                                |       | system reset                                    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RMOD
 * 
 * Generate a system reset
 */
#define ALT_WDT_WDT_CR_RMOD_E_RESET     0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RMOD
 * 
 * First generate an interrupt and if it is not cleared by
 * 
 * the time a second timeout occurs then generate a system reset
 */
#define ALT_WDT_WDT_CR_RMOD_E_INTERRUPT 0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_CR_RMOD register field. */
#define ALT_WDT_WDT_CR_RMOD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_CR_RMOD register field. */
#define ALT_WDT_WDT_CR_RMOD_MSB        1
/* The width in bits of the ALT_WDT_WDT_CR_RMOD register field. */
#define ALT_WDT_WDT_CR_RMOD_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_CR_RMOD register field value. */
#define ALT_WDT_WDT_CR_RMOD_SET_MSK    0x00000002
/* The mask used to clear the ALT_WDT_WDT_CR_RMOD register field value. */
#define ALT_WDT_WDT_CR_RMOD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_WDT_WDT_CR_RMOD register field. */
#define ALT_WDT_WDT_CR_RMOD_RESET      0x0
/* Extracts the ALT_WDT_WDT_CR_RMOD field value from a register. */
#define ALT_WDT_WDT_CR_RMOD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_WDT_WDT_CR_RMOD register field value suitable for setting the register. */
#define ALT_WDT_WDT_CR_RMOD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RPL
 * 
 * Reset pulse length. Writes have no effect when the configuration parameter
 * 
 * WDT_HC_RPL is 1, making the register bits read-only. This is used to select
 * 
 * the number of pclk cycles for which the system reset stays asserted. The
 * 
 * range of values available is 2 to 256 pclk cycles.
 * 
 * 000 - 2 pclk cycles
 * 
 * 001 - 4 pclk cycles
 * 
 * 010 - 8 pclk cycles
 * 
 * 011 - 16 pclk cycles
 * 
 * 100 - 32 pclk cycles
 * 
 * 101 - 64 pclk cycles
 * 
 * 110 - 128 pclk cycles
 * 
 * 111 - 256 pclk cycles
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description    
 * :------------------------------------|:------|:----------------
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES2   | 0x0   | 2   pclk cycles
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES4   | 0x1   | 4   pclk cycles
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES8   | 0x2   | 8   pclk cycles
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES16  | 0x3   | 16  pclk cycles
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES32  | 0x4   | 32  pclk cycles
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES64  | 0x5   | 64  pclk cycles
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES128 | 0x6   | 128 pclk cycles
 *  ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES256 | 0x7   | 256 pclk cycles
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 2   pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES2   0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 4   pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES4   0x1
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 8   pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES8   0x2
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 16  pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES16  0x3
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 32  pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES32  0x4
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 64  pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES64  0x5
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 128 pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES128 0x6
/*
 * Enumerated value for register field ALT_WDT_WDT_CR_RPL
 * 
 * 256 pclk cycles
 */
#define ALT_WDT_WDT_CR_RPL_E_PCLK_CYCLES256 0x7

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_CR_RPL register field. */
#define ALT_WDT_WDT_CR_RPL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_CR_RPL register field. */
#define ALT_WDT_WDT_CR_RPL_MSB        4
/* The width in bits of the ALT_WDT_WDT_CR_RPL register field. */
#define ALT_WDT_WDT_CR_RPL_WIDTH      3
/* The mask used to set the ALT_WDT_WDT_CR_RPL register field value. */
#define ALT_WDT_WDT_CR_RPL_SET_MSK    0x0000001c
/* The mask used to clear the ALT_WDT_WDT_CR_RPL register field value. */
#define ALT_WDT_WDT_CR_RPL_CLR_MSK    0xffffffe3
/* The reset value of the ALT_WDT_WDT_CR_RPL register field. */
#define ALT_WDT_WDT_CR_RPL_RESET      0x4
/* Extracts the ALT_WDT_WDT_CR_RPL field value from a register. */
#define ALT_WDT_WDT_CR_RPL_GET(value) (((value) & 0x0000001c) >> 2)
/* Produces a ALT_WDT_WDT_CR_RPL register field value suitable for setting the register. */
#define ALT_WDT_WDT_CR_RPL_SET(value) (((value) << 2) & 0x0000001c)

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
 * The struct declaration for register ALT_WDT_WDT_CR.
 */
struct ALT_WDT_WDT_CR_s
{
    volatile uint32_t  WDT_EN :  1;  /* ALT_WDT_WDT_CR_WDT_EN */
    volatile uint32_t  RMOD   :  1;  /* ALT_WDT_WDT_CR_RMOD */
    volatile uint32_t  RPL    :  3;  /* ALT_WDT_WDT_CR_RPL */
    uint32_t                  : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_WDT_WDT_CR. */
typedef struct ALT_WDT_WDT_CR_s  ALT_WDT_WDT_CR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_CR register. */
#define ALT_WDT_WDT_CR_RESET       0x00000010
/* The byte offset of the ALT_WDT_WDT_CR register from the beginning of the component. */
#define ALT_WDT_WDT_CR_OFST        0x0
/* The address of the ALT_WDT_WDT_CR register. */
#define ALT_WDT_WDT_CR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_CR_OFST))

/*
 * Register : Timeout Range Register - WDT_TORR
 * 
 * Timeout Range Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [3:0]  | RW     | 0xf   | ALT_WDT_WDT_TORR_TOP     
 *  [7:4]  | RW     | 0xf   | ALT_WDT_WDT_TORR_TOP_INIT
 *  [31:8] | R      | 0x0   | ALT_WDT_WDT_TORR_RESERVED
 * 
 */
/*
 * Field : TOP
 * 
 * Timeout period. Writes have no effect when the configuration parameter
 * 
 * WDT_HC_TOP = 1, thus making this register read-only. This field is used
 * 
 * to select the timeout period from which the watchdog counter restarts.
 * 
 * A change of the timeout period takes effect only after the next counter
 * 
 * restart (kick). The range of values is limited by the WDT_CNT_WIDTH. If
 * 
 * TOP is programmed to select a range that is greater than the counter width,
 * 
 * the timeout period is truncated to fit to the counter width. This affects
 * 
 * only the non-user specified values as users are limited to these boundaries
 * 
 * during configuration. The range of values available for a 32-bit watchdog
 * 
 * counter are:
 * 
 * Where i = TOP and
 * 
 * t = timeout period
 * 
 * For i = 0 to 15
 * 
 * if WDT_USE_FIX_TOP==1
 * 
 * t = 2(16 + i)
 * 
 * else
 * 
 * t = WDT_USER_TOP_(i)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                               
 * :--------------------------------------|:------|:-------------------------------------------
 *  ALT_WDT_WDT_TORR_TOP_E_USER0_OR_64K   | 0x0   | Time out of WDT_USER_TOP_0 or 64K Clocks  
 *  ALT_WDT_WDT_TORR_TOP_E_USER1_OR_128K  | 0x1   | Time out of WDT_USER_TOP_1 or 128K Clocks 
 *  ALT_WDT_WDT_TORR_TOP_E_USER2_OR_256K  | 0x2   | Time out of WDT_USER_TOP_2 or 256K Clocks 
 *  ALT_WDT_WDT_TORR_TOP_E_USER3_OR_512K  | 0x3   | Time out of WDT_USER_TOP_3 or 512K Clocks 
 *  ALT_WDT_WDT_TORR_TOP_E_USER4_OR_1M    | 0x4   | Time out of WDT_USER_TOP_4 or 1M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_E_USER5_OR_2M    | 0x5   | Time out of WDT_USER_TOP_5 or 2M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_E_USER6_OR_4M    | 0x6   | Time out of WDT_USER_TOP_6 or 4M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_E_USER7_OR_8M    | 0x7   | Time out of WDT_USER_TOP_7 or 8M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_E_USER8_OR_16M   | 0x8   | Time out of WDT_USER_TOP_8 or 16M Clocks  
 *  ALT_WDT_WDT_TORR_TOP_E_USER9_OR_32M   | 0x9   | Time out of WDT_USER_TOP_9 or 32M Clocks  
 *  ALT_WDT_WDT_TORR_TOP_E_USER10_OR_64M  | 0xa   | Time out of WDT_USER_TOP_10 or 64M Clocks 
 *  ALT_WDT_WDT_TORR_TOP_E_USER11_OR_128M | 0xb   | Time out of WDT_USER_TOP_11 or 128M Clocks
 *  ALT_WDT_WDT_TORR_TOP_E_USER12_OR_256M | 0xc   | Time out of WDT_USER_TOP_12 or 256M Clocks
 *  ALT_WDT_WDT_TORR_TOP_E_USER13_OR_512M | 0xd   | Time out of WDT_USER_TOP_13 or 512M Clocks
 *  ALT_WDT_WDT_TORR_TOP_E_USER14_OR_1G   | 0xe   | Time out of WDT_USER_TOP_14 or 1G Clocks  
 *  ALT_WDT_WDT_TORR_TOP_E_USER15_OR_2G   | 0xf   | Time out of WDT_USER_TOP_15 or 2G Clocks  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_0 or 64K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER0_OR_64K     0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_1 or 128K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER1_OR_128K    0x1
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_2 or 256K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER2_OR_256K    0x2
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_3 or 512K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER3_OR_512K    0x3
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_4 or 1M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER4_OR_1M      0x4
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_5 or 2M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER5_OR_2M      0x5
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_6 or 4M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER6_OR_4M      0x6
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_7 or 8M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER7_OR_8M      0x7
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_8 or 16M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER8_OR_16M     0x8
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_9 or 32M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER9_OR_32M     0x9
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_10 or 64M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER10_OR_64M    0xa
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_11 or 128M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER11_OR_128M   0xb
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_12 or 256M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER12_OR_256M   0xc
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_13 or 512M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER13_OR_512M   0xd
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_14 or 1G Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER14_OR_1G     0xe
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP
 * 
 * Time out of WDT_USER_TOP_15 or 2G Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_E_USER15_OR_2G     0xf

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_TORR_TOP register field. */
#define ALT_WDT_WDT_TORR_TOP_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_TORR_TOP register field. */
#define ALT_WDT_WDT_TORR_TOP_MSB        3
/* The width in bits of the ALT_WDT_WDT_TORR_TOP register field. */
#define ALT_WDT_WDT_TORR_TOP_WIDTH      4
/* The mask used to set the ALT_WDT_WDT_TORR_TOP register field value. */
#define ALT_WDT_WDT_TORR_TOP_SET_MSK    0x0000000f
/* The mask used to clear the ALT_WDT_WDT_TORR_TOP register field value. */
#define ALT_WDT_WDT_TORR_TOP_CLR_MSK    0xfffffff0
/* The reset value of the ALT_WDT_WDT_TORR_TOP register field. */
#define ALT_WDT_WDT_TORR_TOP_RESET      0xf
/* Extracts the ALT_WDT_WDT_TORR_TOP field value from a register. */
#define ALT_WDT_WDT_TORR_TOP_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_WDT_WDT_TORR_TOP register field value suitable for setting the register. */
#define ALT_WDT_WDT_TORR_TOP_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : TOP_INIT
 * 
 * Timeout period for initialization.
 * 
 * Writes to these register bits have no effect when the configuration
 * 
 * parameter WDT_HC_TOP = 1 or WDT_ALWAYS_EN = 1. Used to
 * 
 * select the timeout period that the watchdog counter restarts from for
 * 
 * the first counter restart (kick). This register should be written after
 * 
 * reset and before the WDT is enabled.
 * 
 * A change of the TOP_INIT is seen only once the WDT has been
 * 
 * enabled, and any change after the first kick is not seen as subsequent
 * 
 * kicks use the period specified by the TOP bits.
 * 
 * The range of values is limited by the WDT_CNT_WIDTH. If
 * 
 * TOP_INIT is programmed to select a range that is greater than the
 * 
 * counter width, the timeout period is truncated to fit to the counter
 * 
 * width. This affects only the non-user specified values as users are
 * 
 * limited to these boundaries during configuration.
 * 
 * The range of values available for a 32-bit watchdog counter are:
 * 
 * Where i = TOP_INIT and
 * 
 * t = timeout period
 * 
 * For i = 0 to 15
 * 
 * if WDT_USE_FIX_TOP==1
 * 
 * t = 2(16 + i)
 * 
 * else
 * 
 * t = WDT_USER_TOP_INIT_(i)
 * 
 * NOTE: These bits exist only when the configuration parameter
 * 
 * WDT_DUAL_TOP = 1, otherwise, they are fixed at zero.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                                    
 * :-------------------------------------------|:------|:------------------------------------------------
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER0_OR_64K   | 0x0   | Time out of WDT_USER_TOP_INIT_0 or 64K Clocks  
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER1_OR_128K  | 0x1   | Time out of WDT_USER_TOP_INIT_1 or 128K Clocks 
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER2_OR_256K  | 0x2   | Time out of WDT_USER_TOP_INIT_2 or 256K Clocks 
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER3_OR_512K  | 0x3   | Time out of WDT_USER_TOP_INIT_3 or 512K Clocks 
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER4_OR_1M    | 0x4   | Time out of WDT_USER_TOP_INIT_4 or 1M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER5_OR_2M    | 0x5   | Time out of WDT_USER_TOP_INIT_5 or 2M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER6_OR_4M    | 0x6   | Time out of WDT_USER_TOP_INIT_6 or 4M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER7_OR_8M    | 0x7   | Time out of WDT_USER_TOP_INIT_7 or 8M Clocks   
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER8_OR_16M   | 0x8   | Time out of WDT_USER_TOP_INIT_8 or 16M Clocks  
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER9_OR_32M   | 0x9   | Time out of WDT_USER_TOP_INIT_9 or 32M Clocks  
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER10_OR_64M  | 0xa   | Time out of WDT_USER_TOP_INIT_10 or 64M Clocks 
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER11_OR_128M | 0xb   | Time out of WDT_USER_TOP_INIT_11 or 128M Clocks
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER12_OR_256M | 0xc   | Time out of WDT_USER_TOP_INIT_12 or 256M Clocks
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER13_OR_512M | 0xd   | Time out of WDT_USER_TOP_INIT_13 or 512M Clocks
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER14_OR_1G   | 0xe   | Time out of WDT_USER_TOP_INIT_14 or 1G Clocks  
 *  ALT_WDT_WDT_TORR_TOP_INIT_E_USER15_OR_2G   | 0xf   | Time out of WDT_USER_TOP_INIT_15 or 2G Clocks  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_0 or 64K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER0_OR_64K    0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_1 or 128K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER1_OR_128K   0x1
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_2 or 256K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER2_OR_256K   0x2
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_3 or 512K Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER3_OR_512K   0x3
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_4 or 1M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER4_OR_1M     0x4
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_5 or 2M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER5_OR_2M     0x5
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_6 or 4M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER6_OR_4M     0x6
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_7 or 8M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER7_OR_8M     0x7
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_8 or 16M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER8_OR_16M    0x8
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_9 or 32M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER9_OR_32M    0x9
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_10 or 64M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER10_OR_64M   0xa
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_11 or 128M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER11_OR_128M  0xb
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_12 or 256M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER12_OR_256M  0xc
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_13 or 512M Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER13_OR_512M  0xd
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_14 or 1G Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER14_OR_1G    0xe
/*
 * Enumerated value for register field ALT_WDT_WDT_TORR_TOP_INIT
 * 
 * Time out of WDT_USER_TOP_INIT_15 or 2G Clocks
 */
#define ALT_WDT_WDT_TORR_TOP_INIT_E_USER15_OR_2G    0xf

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_TORR_TOP_INIT register field. */
#define ALT_WDT_WDT_TORR_TOP_INIT_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_TORR_TOP_INIT register field. */
#define ALT_WDT_WDT_TORR_TOP_INIT_MSB        7
/* The width in bits of the ALT_WDT_WDT_TORR_TOP_INIT register field. */
#define ALT_WDT_WDT_TORR_TOP_INIT_WIDTH      4
/* The mask used to set the ALT_WDT_WDT_TORR_TOP_INIT register field value. */
#define ALT_WDT_WDT_TORR_TOP_INIT_SET_MSK    0x000000f0
/* The mask used to clear the ALT_WDT_WDT_TORR_TOP_INIT register field value. */
#define ALT_WDT_WDT_TORR_TOP_INIT_CLR_MSK    0xffffff0f
/* The reset value of the ALT_WDT_WDT_TORR_TOP_INIT register field. */
#define ALT_WDT_WDT_TORR_TOP_INIT_RESET      0xf
/* Extracts the ALT_WDT_WDT_TORR_TOP_INIT field value from a register. */
#define ALT_WDT_WDT_TORR_TOP_INIT_GET(value) (((value) & 0x000000f0) >> 4)
/* Produces a ALT_WDT_WDT_TORR_TOP_INIT register field value suitable for setting the register. */
#define ALT_WDT_WDT_TORR_TOP_INIT_SET(value) (((value) << 4) & 0x000000f0)

/*
 * Field : Reserved
 * 
 * Reserved and read as 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_TORR_RESERVED register field. */
#define ALT_WDT_WDT_TORR_RESERVED_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_TORR_RESERVED register field. */
#define ALT_WDT_WDT_TORR_RESERVED_MSB        31
/* The width in bits of the ALT_WDT_WDT_TORR_RESERVED register field. */
#define ALT_WDT_WDT_TORR_RESERVED_WIDTH      24
/* The mask used to set the ALT_WDT_WDT_TORR_RESERVED register field value. */
#define ALT_WDT_WDT_TORR_RESERVED_SET_MSK    0xffffff00
/* The mask used to clear the ALT_WDT_WDT_TORR_RESERVED register field value. */
#define ALT_WDT_WDT_TORR_RESERVED_CLR_MSK    0x000000ff
/* The reset value of the ALT_WDT_WDT_TORR_RESERVED register field. */
#define ALT_WDT_WDT_TORR_RESERVED_RESET      0x0
/* Extracts the ALT_WDT_WDT_TORR_RESERVED field value from a register. */
#define ALT_WDT_WDT_TORR_RESERVED_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_WDT_WDT_TORR_RESERVED register field value suitable for setting the register. */
#define ALT_WDT_WDT_TORR_RESERVED_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_WDT_WDT_TORR.
 */
struct ALT_WDT_WDT_TORR_s
{
    volatile uint32_t        TOP      :  4;  /* ALT_WDT_WDT_TORR_TOP */
    volatile uint32_t        TOP_INIT :  4;  /* ALT_WDT_WDT_TORR_TOP_INIT */
    const volatile uint32_t  Reserved : 24;  /* ALT_WDT_WDT_TORR_RESERVED */
};

/* The typedef declaration for register ALT_WDT_WDT_TORR. */
typedef struct ALT_WDT_WDT_TORR_s  ALT_WDT_WDT_TORR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_TORR register. */
#define ALT_WDT_WDT_TORR_RESET       0x000000ff
/* The byte offset of the ALT_WDT_WDT_TORR register from the beginning of the component. */
#define ALT_WDT_WDT_TORR_OFST        0x4
/* The address of the ALT_WDT_WDT_TORR register. */
#define ALT_WDT_WDT_TORR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_TORR_OFST))

/*
 * Register : Current Counter Value Register - WDT_CCVR
 * 
 * Current Counter Value Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description              
 * :-------|:-------|:-----------|:--------------------------
 *  [31:0] | R      | 0x7fffffff | ALT_WDT_WDT_CCVR_WDT_CCVR
 * 
 */
/*
 * Field : wdt_ccvr
 * 
 * This register, when read, is the current value of the internal
 * 
 * counter. This value is read coherently when ever it is read,
 * 
 * which is relevant when the APB_DATA_WIDTH is less than the
 * 
 * counter width.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_CCVR_WDT_CCVR register field. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_CCVR_WDT_CCVR register field. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_MSB        31
/* The width in bits of the ALT_WDT_WDT_CCVR_WDT_CCVR register field. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_WIDTH      32
/* The mask used to set the ALT_WDT_WDT_CCVR_WDT_CCVR register field value. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_WDT_WDT_CCVR_WDT_CCVR register field value. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_CLR_MSK    0x00000000
/* The reset value of the ALT_WDT_WDT_CCVR_WDT_CCVR register field. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_RESET      0x7fffffff
/* Extracts the ALT_WDT_WDT_CCVR_WDT_CCVR field value from a register. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_WDT_WDT_CCVR_WDT_CCVR register field value suitable for setting the register. */
#define ALT_WDT_WDT_CCVR_WDT_CCVR_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_WDT_WDT_CCVR.
 */
struct ALT_WDT_WDT_CCVR_s
{
    const volatile uint32_t  wdt_ccvr : 32;  /* ALT_WDT_WDT_CCVR_WDT_CCVR */
};

/* The typedef declaration for register ALT_WDT_WDT_CCVR. */
typedef struct ALT_WDT_WDT_CCVR_s  ALT_WDT_WDT_CCVR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_CCVR register. */
#define ALT_WDT_WDT_CCVR_RESET       0x7fffffff
/* The byte offset of the ALT_WDT_WDT_CCVR register from the beginning of the component. */
#define ALT_WDT_WDT_CCVR_OFST        0x8
/* The address of the ALT_WDT_WDT_CCVR register. */
#define ALT_WDT_WDT_CCVR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_CCVR_OFST))

/*
 * Register : Counter Restart Register - WDT_CRR
 * 
 * Counter Restart Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description            
 * :-------|:-------|:------|:------------------------
 *  [7:0]  | W      | 0x0   | ALT_WDT_WDT_CRR_WDT_CRR
 *  [31:8] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : wdt_crr
 * 
 * This register is used to restart the WDT counter. As a safety feature to
 * 
 * prevent accidental restarts, the value 0x76 must be written. A restart also
 * 
 * clears the WDT interrupt. Reading this register returns zero.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description                   
 * :----------------------------------|:------|:-------------------------------
 *  ALT_WDT_WDT_CRR_WDT_CRR_E_RESTART | 0x76  | Watchdog timer restart command
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_CRR_WDT_CRR
 * 
 * Watchdog timer restart command
 */
#define ALT_WDT_WDT_CRR_WDT_CRR_E_RESTART   0x76

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_CRR_WDT_CRR register field. */
#define ALT_WDT_WDT_CRR_WDT_CRR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_CRR_WDT_CRR register field. */
#define ALT_WDT_WDT_CRR_WDT_CRR_MSB        7
/* The width in bits of the ALT_WDT_WDT_CRR_WDT_CRR register field. */
#define ALT_WDT_WDT_CRR_WDT_CRR_WIDTH      8
/* The mask used to set the ALT_WDT_WDT_CRR_WDT_CRR register field value. */
#define ALT_WDT_WDT_CRR_WDT_CRR_SET_MSK    0x000000ff
/* The mask used to clear the ALT_WDT_WDT_CRR_WDT_CRR register field value. */
#define ALT_WDT_WDT_CRR_WDT_CRR_CLR_MSK    0xffffff00
/* The reset value of the ALT_WDT_WDT_CRR_WDT_CRR register field. */
#define ALT_WDT_WDT_CRR_WDT_CRR_RESET      0x0
/* Extracts the ALT_WDT_WDT_CRR_WDT_CRR field value from a register. */
#define ALT_WDT_WDT_CRR_WDT_CRR_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_WDT_WDT_CRR_WDT_CRR register field value suitable for setting the register. */
#define ALT_WDT_WDT_CRR_WDT_CRR_SET(value) (((value) << 0) & 0x000000ff)

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
 * The struct declaration for register ALT_WDT_WDT_CRR.
 */
struct ALT_WDT_WDT_CRR_s
{
    volatile uint32_t  wdt_crr :  8;  /* ALT_WDT_WDT_CRR_WDT_CRR */
    uint32_t                   : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_WDT_WDT_CRR. */
typedef struct ALT_WDT_WDT_CRR_s  ALT_WDT_WDT_CRR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_CRR register. */
#define ALT_WDT_WDT_CRR_RESET       0x00000000
/* The byte offset of the ALT_WDT_WDT_CRR register from the beginning of the component. */
#define ALT_WDT_WDT_CRR_OFST        0xc
/* The address of the ALT_WDT_WDT_CRR register. */
#define ALT_WDT_WDT_CRR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_CRR_OFST))

/*
 * Register : Interrupt Status Register - WDT_STAT
 * 
 * Interrupt Status Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [0]    | R      | 0x0   | ALT_WDT_WDT_STAT_WDT_STAT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : wdt_stat
 * 
 * This register shows the interrupt status of the WDT.
 * 
 * 1 = Interrupt is active regardless of polarity.
 * 
 * 0 = Interrupt is inactive.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                               
 * :-------------------------------------|:------|:-------------------------------------------
 *  ALT_WDT_WDT_STAT_WDT_STAT_E_INACTIVE | 0x0   | Interrupt is inactive                     
 *  ALT_WDT_WDT_STAT_WDT_STAT_E_ACTIVE   | 0x1   | Interrupt is active regardless of polarity
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_STAT_WDT_STAT
 * 
 * Interrupt is inactive
 */
#define ALT_WDT_WDT_STAT_WDT_STAT_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_STAT_WDT_STAT
 * 
 * Interrupt is active regardless of polarity
 */
#define ALT_WDT_WDT_STAT_WDT_STAT_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_STAT_WDT_STAT register field. */
#define ALT_WDT_WDT_STAT_WDT_STAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_STAT_WDT_STAT register field. */
#define ALT_WDT_WDT_STAT_WDT_STAT_MSB        0
/* The width in bits of the ALT_WDT_WDT_STAT_WDT_STAT register field. */
#define ALT_WDT_WDT_STAT_WDT_STAT_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_STAT_WDT_STAT register field value. */
#define ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_WDT_WDT_STAT_WDT_STAT register field value. */
#define ALT_WDT_WDT_STAT_WDT_STAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_WDT_WDT_STAT_WDT_STAT register field. */
#define ALT_WDT_WDT_STAT_WDT_STAT_RESET      0x0
/* Extracts the ALT_WDT_WDT_STAT_WDT_STAT field value from a register. */
#define ALT_WDT_WDT_STAT_WDT_STAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_WDT_WDT_STAT_WDT_STAT register field value suitable for setting the register. */
#define ALT_WDT_WDT_STAT_WDT_STAT_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_WDT_WDT_STAT.
 */
struct ALT_WDT_WDT_STAT_s
{
    const volatile uint32_t  wdt_stat :  1;  /* ALT_WDT_WDT_STAT_WDT_STAT */
    uint32_t                          : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_WDT_WDT_STAT. */
typedef struct ALT_WDT_WDT_STAT_s  ALT_WDT_WDT_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_STAT register. */
#define ALT_WDT_WDT_STAT_RESET       0x00000000
/* The byte offset of the ALT_WDT_WDT_STAT register from the beginning of the component. */
#define ALT_WDT_WDT_STAT_OFST        0x10
/* The address of the ALT_WDT_WDT_STAT register. */
#define ALT_WDT_WDT_STAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_STAT_OFST))

/*
 * Register : Interrupt Clear Register - WDT_EOI
 * 
 * Interrupt Clear Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description            
 * :-------|:-------|:------|:------------------------
 *  [0]    | R      | 0x0   | ALT_WDT_WDT_EOI_WDT_EOI
 *  [31:1] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : wdt_eoi
 * 
 * Clears the watchdog interrupt. This can be used to clear the interrupt
 * 
 * without restarting the watchdog counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_EOI_WDT_EOI register field. */
#define ALT_WDT_WDT_EOI_WDT_EOI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_EOI_WDT_EOI register field. */
#define ALT_WDT_WDT_EOI_WDT_EOI_MSB        0
/* The width in bits of the ALT_WDT_WDT_EOI_WDT_EOI register field. */
#define ALT_WDT_WDT_EOI_WDT_EOI_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_EOI_WDT_EOI register field value. */
#define ALT_WDT_WDT_EOI_WDT_EOI_SET_MSK    0x00000001
/* The mask used to clear the ALT_WDT_WDT_EOI_WDT_EOI register field value. */
#define ALT_WDT_WDT_EOI_WDT_EOI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_WDT_WDT_EOI_WDT_EOI register field. */
#define ALT_WDT_WDT_EOI_WDT_EOI_RESET      0x0
/* Extracts the ALT_WDT_WDT_EOI_WDT_EOI field value from a register. */
#define ALT_WDT_WDT_EOI_WDT_EOI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_WDT_WDT_EOI_WDT_EOI register field value suitable for setting the register. */
#define ALT_WDT_WDT_EOI_WDT_EOI_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_WDT_WDT_EOI.
 */
struct ALT_WDT_WDT_EOI_s
{
    const volatile uint32_t  wdt_eoi :  1;  /* ALT_WDT_WDT_EOI_WDT_EOI */
    uint32_t                         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_WDT_WDT_EOI. */
typedef struct ALT_WDT_WDT_EOI_s  ALT_WDT_WDT_EOI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_EOI register. */
#define ALT_WDT_WDT_EOI_RESET       0x00000000
/* The byte offset of the ALT_WDT_WDT_EOI register from the beginning of the component. */
#define ALT_WDT_WDT_EOI_OFST        0x14
/* The address of the ALT_WDT_WDT_EOI register. */
#define ALT_WDT_WDT_EOI_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_EOI_OFST))

/*
 * Register : Component Parameters Register 5 - WDT_COMP_PARAM_5
 * 
 * Component Parameters Register 5
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
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_5_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_5_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_MSB        31
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_5_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_WIDTH      32
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_5_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_5_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_5_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_5_FLD field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_WDT_WDT_COMP_PARAM_5_FLD register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_5_FLD_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_WDT_WDT_COMP_PARAM_5.
 */
struct ALT_WDT_WDT_COMP_PARAM_5_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_WDT_WDT_COMP_PARAM_5. */
typedef struct ALT_WDT_WDT_COMP_PARAM_5_s  ALT_WDT_WDT_COMP_PARAM_5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_COMP_PARAM_5 register. */
#define ALT_WDT_WDT_COMP_PARAM_5_RESET       0x00000000
/* The byte offset of the ALT_WDT_WDT_COMP_PARAM_5 register from the beginning of the component. */
#define ALT_WDT_WDT_COMP_PARAM_5_OFST        0xe4
/* The address of the ALT_WDT_WDT_COMP_PARAM_5 register. */
#define ALT_WDT_WDT_COMP_PARAM_5_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_COMP_PARAM_5_OFST))

/*
 * Register : Component Parameters Register 4 - WDT_COMP_PARAM_4
 * 
 * Component Parameters Register 4
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
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_4_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_4_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_MSB        31
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_4_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_WIDTH      32
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_4_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_4_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_4_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_4_FLD field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_WDT_WDT_COMP_PARAM_4_FLD register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_4_FLD_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_WDT_WDT_COMP_PARAM_4.
 */
struct ALT_WDT_WDT_COMP_PARAM_4_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_WDT_WDT_COMP_PARAM_4. */
typedef struct ALT_WDT_WDT_COMP_PARAM_4_s  ALT_WDT_WDT_COMP_PARAM_4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_COMP_PARAM_4 register. */
#define ALT_WDT_WDT_COMP_PARAM_4_RESET       0x00000000
/* The byte offset of the ALT_WDT_WDT_COMP_PARAM_4 register from the beginning of the component. */
#define ALT_WDT_WDT_COMP_PARAM_4_OFST        0xe8
/* The address of the ALT_WDT_WDT_COMP_PARAM_4 register. */
#define ALT_WDT_WDT_COMP_PARAM_4_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_COMP_PARAM_4_OFST))

/*
 * Register : Component Parameters Register 3 - WDT_COMP_PARAM_3
 * 
 * Component Parameters Register 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0xff  | Empty      
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
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_3_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_3_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_MSB        31
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_3_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_WIDTH      32
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_3_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_3_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_3_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_RESET      0xff
/* Extracts the ALT_WDT_WDT_COMP_PARAM_3_FLD field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_WDT_WDT_COMP_PARAM_3_FLD register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_3_FLD_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_WDT_WDT_COMP_PARAM_3.
 */
struct ALT_WDT_WDT_COMP_PARAM_3_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_WDT_WDT_COMP_PARAM_3. */
typedef struct ALT_WDT_WDT_COMP_PARAM_3_s  ALT_WDT_WDT_COMP_PARAM_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_COMP_PARAM_3 register. */
#define ALT_WDT_WDT_COMP_PARAM_3_RESET       0x000000ff
/* The byte offset of the ALT_WDT_WDT_COMP_PARAM_3 register from the beginning of the component. */
#define ALT_WDT_WDT_COMP_PARAM_3_OFST        0xec
/* The address of the ALT_WDT_WDT_COMP_PARAM_3 register. */
#define ALT_WDT_WDT_COMP_PARAM_3_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_COMP_PARAM_3_OFST))

/*
 * Register : Component Parameters Register 2 - WDT_COMP_PARAM_2
 * 
 * Component Parameters Register 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description
 * :-------|:-------|:-----------|:------------
 *  [31:0] | RW     | 0x7fffffff | Empty      
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
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_2_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_2_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_MSB        31
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_2_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_WIDTH      32
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_2_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_2_FLD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_CLR_MSK    0x00000000
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_2_FLD register field. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_RESET      0x7fffffff
/* Extracts the ALT_WDT_WDT_COMP_PARAM_2_FLD field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_WDT_WDT_COMP_PARAM_2_FLD register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_2_FLD_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_WDT_WDT_COMP_PARAM_2.
 */
struct ALT_WDT_WDT_COMP_PARAM_2_s
{
    volatile uint32_t  fld : 32;  /* Empty */
};

/* The typedef declaration for register ALT_WDT_WDT_COMP_PARAM_2. */
typedef struct ALT_WDT_WDT_COMP_PARAM_2_s  ALT_WDT_WDT_COMP_PARAM_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_COMP_PARAM_2 register. */
#define ALT_WDT_WDT_COMP_PARAM_2_RESET       0x7fffffff
/* The byte offset of the ALT_WDT_WDT_COMP_PARAM_2 register from the beginning of the component. */
#define ALT_WDT_WDT_COMP_PARAM_2_OFST        0xf0
/* The address of the ALT_WDT_WDT_COMP_PARAM_2 register. */
#define ALT_WDT_WDT_COMP_PARAM_2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_COMP_PARAM_2_OFST))

/*
 * Register : Component Parameters Register 1 - WDT_COMP_PARAM_1
 * 
 * Component Parameters Register 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [0]     | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN    
 *  [1]     | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD    
 *  [2]     | R      | 0x1   | ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP     
 *  [3]     | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD      
 *  [4]     | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL       
 *  [5]     | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP       
 *  [6]     | R      | 0x1   | ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP  
 *  [7]     | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE        
 *  [9:8]   | R      | 0x2   | ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH   
 *  [12:10] | R      | 0x4   | ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL     
 *  [15:13] | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13       
 *  [19:16] | R      | 0xf   | ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP     
 *  [23:20] | R      | 0xf   | ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT
 *  [28:24] | R      | 0x10  | ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH    
 *  [31:29] | R      | 0x0   | ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29       
 * 
 */
/*
 * Field : WDT_ALWAYS_EN
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                     
 * :--------------------------------------------------|:------|:---------------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_E_DISABLED | 0x0   | Watchdog timer disabled on reset
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_E_ENABLED  | 0x1   | Watchdog timer enabled on reset 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN
 * 
 * Watchdog timer disabled on reset
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN
 * 
 * Watchdog timer enabled on reset
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_MSB        0
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WDT_DFLT_RMOD
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description               
 * :--------------------------------------------------|:------|:---------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_E_DISABLED | 0x0   | System reset only         
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_E_ENABLED  | 0x1   | Interrupt and system reset
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD
 * 
 * System reset only
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD
 * 
 * Interrupt and system reset
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_MSB        1
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_SET_MSK    0x00000002
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : WDT_DUAL_TOP
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                         
 * :-------------------------------------------------|:------|:-------------------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_E_DISABLED | 0x0   | Second timeout period is not present
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_E_ENABLED  | 0x1   | Second timeout period is present    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP
 * 
 * Second timeout period is not present
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP
 * 
 * Second timeout period is present
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_MSB        2
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_SET_MSK    0x00000004
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_RESET      0x1
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : WDT_HC_RMOD
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                | Value | Description                         
 * :----------------------------------------------------|:------|:-------------------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_E_PROGRAMMABLE | 0x0   | Output response mode is programmable
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_E_HARDCODED    | 0x1   | Output response mode is hard coded  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD
 * 
 * Output response mode is programmable
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_E_PROGRAMMABLE 0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD
 * 
 * Output response mode is hard coded
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_E_HARDCODED    0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_MSB        3
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_SET_MSK    0x00000008
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_CLR_MSK    0xfffffff7
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : WDT_HC_RPL
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                       
 * :---------------------------------------------------|:------|:-----------------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_E_PROGRAMMABLE | 0x0   | Reset pulse length is programmable
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_E_HARDCODED    | 0x1   | Reset pulse length is hardcoded   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL
 * 
 * Reset pulse length is programmable
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_E_PROGRAMMABLE  0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL
 * 
 * Reset pulse length is hardcoded
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_E_HARDCODED     0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_MSB        4
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_SET_MSK    0x00000010
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_CLR_MSK    0xffffffef
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : WDT_HC_TOP
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                   
 * :---------------------------------------------------|:------|:-------------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_E_PROGRAMMABLE | 0x0   | Timeout period is programmable
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_E_HARDCODED    | 0x1   | Timeout period is hard coded  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP
 * 
 * Timeout period is programmable
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_E_PROGRAMMABLE  0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP
 * 
 * Timeout period is hard coded
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_E_HARDCODED     0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_MSB        5
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_SET_MSK    0x00000020
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_CLR_MSK    0xffffffdf
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : WDT_USE_FIX_TOP
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description                    
 * :-------------------------------------------------------|:------|:--------------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_E_USERDEFINED | 0x0   | User must define timeout values
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_E_PREDEFINED  | 0x1   | Use predefined timeout values  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP
 * 
 * User must define timeout values
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_E_USERDEFINED  0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP
 * 
 * Use predefined timeout values
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_E_PREDEFINED   0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_MSB        6
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_SET_MSK    0x00000040
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_CLR_MSK    0xffffffbf
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_RESET      0x1
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : WDT_PAUSE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                        
 * :----------------------------------------------|:------|:------------------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_E_DISABLED | 0x0   | Pause enable signal is non existent
 *  ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_E_ENABLED  | 0x1   | Pause enable signal is included    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE
 * 
 * Pause enable signal is non existent
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE
 * 
 * Pause enable signal is included
 */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_MSB        7
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_WIDTH      1
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_SET_MSK    0x00000080
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : APB_DATA_WIDTH
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description              
 * :-----------------------------------------------------|:------|:--------------------------
 *  ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_8BITS  | 0x0   | APB data width is 8 bits 
 *  ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_16BITS | 0x1   | APB data width is 16 bits
 *  ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_32BITS | 0x2   | APB data width is 32 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH
 * 
 * APB data width is 8 bits
 */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_8BITS     0x0
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH
 * 
 * APB data width is 16 bits
 */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_16BITS    0x1
/*
 * Enumerated value for register field ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH
 * 
 * APB data width is 32 bits
 */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_32BITS    0x2

/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_MSB        9
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_WIDTH      2
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_SET_MSK    0x00000300
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_CLR_MSK    0xfffffcff
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_RESET      0x2
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : WDT_DFLT_RPL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_MSB        12
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_WIDTH      3
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_SET_MSK    0x00001c00
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_CLR_MSK    0xffffe3ff
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_RESET      0x4
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_GET(value) (((value) & 0x00001c00) >> 10)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL_SET(value) (((value) << 10) & 0x00001c00)

/*
 * Field : RSVD_15_13
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_MSB        15
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_WIDTH      3
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_SET_MSK    0x0000e000
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_CLR_MSK    0xffff1fff
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_GET(value) (((value) & 0x0000e000) >> 13)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13_SET(value) (((value) << 13) & 0x0000e000)

/*
 * Field : WDT_DFLT_TOP
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_MSB        19
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_WIDTH      4
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_SET_MSK    0x000f0000
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_RESET      0xf
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : WDT_DFLT_TOP_INIT
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_MSB        23
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_WIDTH      4
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_SET_MSK    0x00f00000
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_CLR_MSK    0xff0fffff
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_RESET      0xf
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT_SET(value) (((value) << 20) & 0x00f00000)

/*
 * Field : WDT_CNT_WIDTH
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_MSB        28
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_WIDTH      5
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_SET_MSK    0x1f000000
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_CLR_MSK    0xe0ffffff
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_RESET      0x10
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_GET(value) (((value) & 0x1f000000) >> 24)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH_SET(value) (((value) << 24) & 0x1f000000)

/*
 * Field : RSVD_31_29
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_MSB        31
/* The width in bits of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_WIDTH      3
/* The mask used to set the ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_SET_MSK    0xe0000000
/* The mask used to clear the ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 register field value. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_CLR_MSK    0x1fffffff
/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 register field. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_RESET      0x0
/* Extracts the ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 field value from a register. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_GET(value) (((value) & 0xe0000000) >> 29)
/* Produces a ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29_SET(value) (((value) << 29) & 0xe0000000)

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
 * The struct declaration for register ALT_WDT_WDT_COMP_PARAM_1.
 */
struct ALT_WDT_WDT_COMP_PARAM_1_s
{
    const volatile uint32_t  WDT_ALWAYS_EN     :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_ALWAYS_EN */
    const volatile uint32_t  WDT_DFLT_RMOD     :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RMOD */
    const volatile uint32_t  WDT_DUAL_TOP      :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_DUAL_TOP */
    const volatile uint32_t  WDT_HC_RMOD       :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RMOD */
    const volatile uint32_t  WDT_HC_RPL        :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_RPL */
    const volatile uint32_t  WDT_HC_TOP        :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_HC_TOP */
    const volatile uint32_t  WDT_USE_FIX_TOP   :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_USE_FIX_TOP */
    const volatile uint32_t  WDT_PAUSE         :  1;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_PAUSE */
    const volatile uint32_t  APB_DATA_WIDTH    :  2;  /* ALT_WDT_WDT_COMP_PARAM_1_APB_DATA_WIDTH */
    const volatile uint32_t  WDT_DFLT_RPL      :  3;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_RPL */
    const volatile uint32_t  RSVD_15_13        :  3;  /* ALT_WDT_WDT_COMP_PARAM_1_RSVD_15_13 */
    const volatile uint32_t  WDT_DFLT_TOP      :  4;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP */
    const volatile uint32_t  WDT_DFLT_TOP_INIT :  4;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_DFLT_TOP_INIT */
    const volatile uint32_t  WDT_CNT_WIDTH     :  5;  /* ALT_WDT_WDT_COMP_PARAM_1_WDT_CNT_WIDTH */
    const volatile uint32_t  RSVD_31_29        :  3;  /* ALT_WDT_WDT_COMP_PARAM_1_RSVD_31_29 */
};

/* The typedef declaration for register ALT_WDT_WDT_COMP_PARAM_1. */
typedef struct ALT_WDT_WDT_COMP_PARAM_1_s  ALT_WDT_WDT_COMP_PARAM_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_COMP_PARAM_1 register. */
#define ALT_WDT_WDT_COMP_PARAM_1_RESET       0x10ff1244
/* The byte offset of the ALT_WDT_WDT_COMP_PARAM_1 register from the beginning of the component. */
#define ALT_WDT_WDT_COMP_PARAM_1_OFST        0xf4
/* The address of the ALT_WDT_WDT_COMP_PARAM_1 register. */
#define ALT_WDT_WDT_COMP_PARAM_1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_COMP_PARAM_1_OFST))

/*
 * Register : Component Version Register - WDT_COMP_VERSION
 * 
 * Component Version Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                              
 * :-------|:-------|:-----------|:------------------------------------------
 *  [31:0] | R      | 0x3130382a | ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION
 * 
 */
/*
 * Field : wdt_comp_version
 * 
 * ASCII value for each number in the version, followed by *. For example,
 * 
 * 32_30_31_2A represents the version 2.01*. Reset Value: See the Releases
 * 
 * table in the DW_apb_rtc Release Notes.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION register field. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION register field. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_MSB        31
/* The width in bits of the ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION register field. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_WIDTH      32
/* The mask used to set the ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION register field value. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_SET_MSK    0xffffffff
/* The mask used to clear the ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION register field value. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_CLR_MSK    0x00000000
/* The reset value of the ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION register field. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_RESET      0x3130382a
/* Extracts the ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION field value from a register. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_WDT_WDT_COMP_VERSION.
 */
struct ALT_WDT_WDT_COMP_VERSION_s
{
    const volatile uint32_t  wdt_comp_version : 32;  /* ALT_WDT_WDT_COMP_VERSION_WDT_COMP_VERSION */
};

/* The typedef declaration for register ALT_WDT_WDT_COMP_VERSION. */
typedef struct ALT_WDT_WDT_COMP_VERSION_s  ALT_WDT_WDT_COMP_VERSION_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_COMP_VERSION register. */
#define ALT_WDT_WDT_COMP_VERSION_RESET       0x3130382a
/* The byte offset of the ALT_WDT_WDT_COMP_VERSION register from the beginning of the component. */
#define ALT_WDT_WDT_COMP_VERSION_OFST        0xf8
/* The address of the ALT_WDT_WDT_COMP_VERSION register. */
#define ALT_WDT_WDT_COMP_VERSION_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_COMP_VERSION_OFST))

/*
 * Register : Component Type Register - WDT_COMP_TYPE
 * 
 * Component Type Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                        
 * :-------|:-------|:-----------|:------------------------------------
 *  [31:0] | R      | 0x44570120 | ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE
 * 
 */
/*
 * Field : wdt_comp_type
 * 
 * Component Type Register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE register field. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE register field. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_MSB        31
/* The width in bits of the ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE register field. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_WIDTH      32
/* The mask used to set the ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE register field value. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE register field value. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_CLR_MSK    0x00000000
/* The reset value of the ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE register field. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_RESET      0x44570120
/* Extracts the ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE field value from a register. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE register field value suitable for setting the register. */
#define ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_WDT_WDT_COMP_TYPE.
 */
struct ALT_WDT_WDT_COMP_TYPE_s
{
    const volatile uint32_t  wdt_comp_type : 32;  /* ALT_WDT_WDT_COMP_TYPE_WDT_COMP_TYPE */
};

/* The typedef declaration for register ALT_WDT_WDT_COMP_TYPE. */
typedef struct ALT_WDT_WDT_COMP_TYPE_s  ALT_WDT_WDT_COMP_TYPE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_WDT_WDT_COMP_TYPE register. */
#define ALT_WDT_WDT_COMP_TYPE_RESET       0x44570120
/* The byte offset of the ALT_WDT_WDT_COMP_TYPE register from the beginning of the component. */
#define ALT_WDT_WDT_COMP_TYPE_OFST        0xfc
/* The address of the ALT_WDT_WDT_COMP_TYPE register. */
#define ALT_WDT_WDT_COMP_TYPE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_WDT_WDT_COMP_TYPE_OFST))

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
 * The struct declaration for register group ALT_WDT.
 */
struct ALT_WDT_s
{
    volatile ALT_WDT_WDT_CR_t            WDT_CR;              /* ALT_WDT_WDT_CR */
    volatile ALT_WDT_WDT_TORR_t          WDT_TORR;            /* ALT_WDT_WDT_TORR */
    volatile ALT_WDT_WDT_CCVR_t          WDT_CCVR;            /* ALT_WDT_WDT_CCVR */
    volatile ALT_WDT_WDT_CRR_t           WDT_CRR;             /* ALT_WDT_WDT_CRR */
    volatile ALT_WDT_WDT_STAT_t          WDT_STAT;            /* ALT_WDT_WDT_STAT */
    volatile ALT_WDT_WDT_EOI_t           WDT_EOI;             /* ALT_WDT_WDT_EOI */
    volatile uint32_t                    _pad_0x18_0xe3[51];  /* *UNDEFINED* */
    volatile ALT_WDT_WDT_COMP_PARAM_5_t  WDT_COMP_PARAM_5;    /* ALT_WDT_WDT_COMP_PARAM_5 */
    volatile ALT_WDT_WDT_COMP_PARAM_4_t  WDT_COMP_PARAM_4;    /* ALT_WDT_WDT_COMP_PARAM_4 */
    volatile ALT_WDT_WDT_COMP_PARAM_3_t  WDT_COMP_PARAM_3;    /* ALT_WDT_WDT_COMP_PARAM_3 */
    volatile ALT_WDT_WDT_COMP_PARAM_2_t  WDT_COMP_PARAM_2;    /* ALT_WDT_WDT_COMP_PARAM_2 */
    volatile ALT_WDT_WDT_COMP_PARAM_1_t  WDT_COMP_PARAM_1;    /* ALT_WDT_WDT_COMP_PARAM_1 */
    volatile ALT_WDT_WDT_COMP_VERSION_t  WDT_COMP_VERSION;    /* ALT_WDT_WDT_COMP_VERSION */
    volatile ALT_WDT_WDT_COMP_TYPE_t     WDT_COMP_TYPE;       /* ALT_WDT_WDT_COMP_TYPE */
};

/* The typedef declaration for register group ALT_WDT. */
typedef struct ALT_WDT_s  ALT_WDT_t;
/* The struct declaration for the raw register contents of register group ALT_WDT. */
struct ALT_WDT_raw_s
{
    volatile uint32_t  WDT_CR;              /* ALT_WDT_WDT_CR */
    volatile uint32_t  WDT_TORR;            /* ALT_WDT_WDT_TORR */
    volatile uint32_t  WDT_CCVR;            /* ALT_WDT_WDT_CCVR */
    volatile uint32_t  WDT_CRR;             /* ALT_WDT_WDT_CRR */
    volatile uint32_t  WDT_STAT;            /* ALT_WDT_WDT_STAT */
    volatile uint32_t  WDT_EOI;             /* ALT_WDT_WDT_EOI */
    volatile uint32_t  _pad_0x18_0xe3[51];  /* *UNDEFINED* */
    volatile uint32_t  WDT_COMP_PARAM_5;    /* ALT_WDT_WDT_COMP_PARAM_5 */
    volatile uint32_t  WDT_COMP_PARAM_4;    /* ALT_WDT_WDT_COMP_PARAM_4 */
    volatile uint32_t  WDT_COMP_PARAM_3;    /* ALT_WDT_WDT_COMP_PARAM_3 */
    volatile uint32_t  WDT_COMP_PARAM_2;    /* ALT_WDT_WDT_COMP_PARAM_2 */
    volatile uint32_t  WDT_COMP_PARAM_1;    /* ALT_WDT_WDT_COMP_PARAM_1 */
    volatile uint32_t  WDT_COMP_VERSION;    /* ALT_WDT_WDT_COMP_VERSION */
    volatile uint32_t  WDT_COMP_TYPE;       /* ALT_WDT_WDT_COMP_TYPE */
};

/* The typedef declaration for the raw register contents of register group ALT_WDT. */
typedef struct ALT_WDT_raw_s  ALT_WDT_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_WDT_H__ */

