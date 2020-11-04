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

/* Altera - ALT_CLKMGR_PERPLL */

#ifndef __ALT_SOCAL_CLKMGR_PERPLL_H__
#define __ALT_SOCAL_CLKMGR_PERPLL_H__

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
 * Component : Peripheral PLL Group - CLKMGR_PERPLL
 * Peripheral PLL Group
 * 
 * Contains registers with settings for the Peripheral PLL.
 * 
 */
/*
 * Register : Enable Register - en
 * 
 * Contains fields that control clock enables for clocks derived from the
 * Peripheral PLL.
 * 
 * 1: The clock is enabled.
 * 
 * 0: The clock is disabled.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [0]     | RW     | 0x1   | emac0_clk Enable    
 *  [1]     | RW     | 0x1   | emac1_clk_clk Enable
 *  [2]     | RW     | 0x1   | emac2_clk Enable    
 *  [3]     | RW     | 0x1   | emac_ptp_clk Enable 
 *  [4]     | RW     | 0x1   | gpio_db_clk Enable  
 *  [5]     | RW     | 0x1   | SDMMC Clock Enable  
 *  [6]     | RW     | 0x1   | s2f_user1_clk Enable
 *  [7]     | RW     | 0x1   | PSI_REF Clock Enable
 *  [8]     | RW     | 0x1   | USB Clock Enable    
 *  [9]     | RW     | 0x1   | SPIM Clock Enable   
 *  [10]    | RW     | 0x1   | NAND Clock Enable   
 *  [31:11] | ???    | 0x1   | *UNDEFINED*         
 * 
 */
/*
 * Field : emac0_clk Enable - emac0en
 * 
 * Enables clock emac0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMAC0EN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMAC0EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : emac1_clk_clk Enable - emac1en
 * 
 * Enables clock emac1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMAC1EN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMAC1EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : emac2_clk Enable - emac2en
 * 
 * Enables clock emac2_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMAC2EN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMAC2EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : emac_ptp_clk Enable - emacptpen
 * 
 * Enables clock emac_ptp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMACPTPEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : gpio_db_clk Enable - gpiodben
 * 
 * Enables clock gpio_db_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_GPIODBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_EN_GPIODBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SDMMC Clock Enable - sdmmcclken
 * 
 * Enables SDMMC peripheral clock.   This enable goes outside of the Clock Manger
 * to the SDMMC directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user1_clk Enable - s2fuser1clken
 * 
 * Enables clock s2f_user1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : PSI_REF Clock Enable - psiclken
 * 
 * Enables psi_ref clock.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_PSICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_PSICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_PERPLL_EN_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_PSICLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_PERPLL_EN_PSICLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_PSICLKEN_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : USB Clock Enable - usbclken
 * 
 * Enables USB peripheral clock.   This enable goes outside of the Clock Manger to
 * the USB directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_USBCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_EN_USBCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SPIM Clock Enable - spimclken
 * 
 * Enables SPI Master peripheral clock.   This enable goes outside of the Clock
 * Manger to the SPIM directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : NAND Clock Enable - nandclken
 * 
 * Enables NAND peripheral clock.   This enable goes outside of the Clock Manger to
 * the NAND directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_NANDCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET(value) (((value) << 10) & 0x00000400)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_EN.
 */
struct ALT_CLKMGR_PERPLL_EN_s
{
    volatile uint32_t  emac0en       :  1;  /* emac0_clk Enable */
    volatile uint32_t  emac1en       :  1;  /* emac1_clk_clk Enable */
    volatile uint32_t  emac2en       :  1;  /* emac2_clk Enable */
    volatile uint32_t  emacptpen     :  1;  /* emac_ptp_clk Enable */
    volatile uint32_t  gpiodben      :  1;  /* gpio_db_clk Enable */
    volatile uint32_t  sdmmcclken    :  1;  /* SDMMC Clock Enable */
    volatile uint32_t  s2fuser1clken :  1;  /* s2f_user1_clk Enable */
    volatile uint32_t  psiclken      :  1;  /* PSI_REF Clock Enable */
    volatile uint32_t  usbclken      :  1;  /* USB Clock Enable */
    volatile uint32_t  spimclken     :  1;  /* SPIM Clock Enable */
    volatile uint32_t  nandclken     :  1;  /* NAND Clock Enable */
    uint32_t                         : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_EN. */
typedef struct ALT_CLKMGR_PERPLL_EN_s  ALT_CLKMGR_PERPLL_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_EN register. */
#define ALT_CLKMGR_PERPLL_EN_RESET       0x00000fff
/* The byte offset of the ALT_CLKMGR_PERPLL_EN register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_EN_OFST        0x0

/*
 * Register : Enable Set Register - ens
 * 
 * Write One to Set corresonding fields in Enable Register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [0]     | RW     | 0x1   | emac0_clk Enable    
 *  [1]     | RW     | 0x1   | emac1_clk_clk Enable
 *  [2]     | RW     | 0x1   | emac2_clk Enable    
 *  [3]     | RW     | 0x1   | emac_ptp_clk Enable 
 *  [4]     | RW     | 0x1   | gpio_db_clk Enable  
 *  [5]     | RW     | 0x1   | SDMMC Clock Enable  
 *  [6]     | RW     | 0x1   | s2f_user1_clk Enable
 *  [7]     | RW     | 0x1   | PSI_REF Clock Enable
 *  [8]     | RW     | 0x1   | USB Clock Enable    
 *  [9]     | RW     | 0x1   | SPIM Clock Enable   
 *  [10]    | RW     | 0x1   | NAND Clock Enable   
 *  [31:11] | ???    | 0x1   | *UNDEFINED*         
 * 
 */
/*
 * Field : emac0_clk Enable - emac0en
 * 
 * Enables clock emac0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMAC0EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : emac1_clk_clk Enable - emac1en
 * 
 * Enables clock emac1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMAC1EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : emac2_clk Enable - emac2en
 * 
 * Enables clock emac2_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMAC2EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : emac_ptp_clk Enable - emacptpen
 * 
 * Enables clock emac_ptp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : gpio_db_clk Enable - gpiodben
 * 
 * Enables clock gpio_db_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_GPIODBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SDMMC Clock Enable - sdmmcclken
 * 
 * Enables SDMMC peripheral clock.   This enable goes outside of the Clock Manger
 * to the SDMMC directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user1_clk Enable - s2fuser1clken
 * 
 * Enables clock s2f_user1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : PSI_REF Clock Enable - psiclken
 * 
 * Enables psi_ref clock.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_PSICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_PSICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_PSICLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_PERPLL_ENS_PSICLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_PSICLKEN_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : USB Clock Enable - usbclken
 * 
 * Enables USB peripheral clock.   This enable goes outside of the Clock Manger to
 * the USB directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_USBCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SPIM Clock Enable - spimclken
 * 
 * Enables SPI Master peripheral clock.   This enable goes outside of the Clock
 * Manger to the SPIM directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : NAND Clock Enable - nandclken
 * 
 * Enables NAND peripheral clock.   This enable goes outside of the Clock Manger to
 * the NAND directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_SET(value) (((value) << 10) & 0x00000400)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_ENS.
 */
struct ALT_CLKMGR_PERPLL_ENS_s
{
    volatile uint32_t  emac0en       :  1;  /* emac0_clk Enable */
    volatile uint32_t  emac1en       :  1;  /* emac1_clk_clk Enable */
    volatile uint32_t  emac2en       :  1;  /* emac2_clk Enable */
    volatile uint32_t  emacptpen     :  1;  /* emac_ptp_clk Enable */
    volatile uint32_t  gpiodben      :  1;  /* gpio_db_clk Enable */
    volatile uint32_t  sdmmcclken    :  1;  /* SDMMC Clock Enable */
    volatile uint32_t  s2fuser1clken :  1;  /* s2f_user1_clk Enable */
    volatile uint32_t  psiclken      :  1;  /* PSI_REF Clock Enable */
    volatile uint32_t  usbclken      :  1;  /* USB Clock Enable */
    volatile uint32_t  spimclken     :  1;  /* SPIM Clock Enable */
    volatile uint32_t  nandclken     :  1;  /* NAND Clock Enable */
    uint32_t                         : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_ENS. */
typedef struct ALT_CLKMGR_PERPLL_ENS_s  ALT_CLKMGR_PERPLL_ENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_ENS register. */
#define ALT_CLKMGR_PERPLL_ENS_RESET       0x00000fff
/* The byte offset of the ALT_CLKMGR_PERPLL_ENS register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_ENS_OFST        0x4

/*
 * Register : Enable Reset Register - enr
 * 
 * Write One to Clear corresponding fields in Enable Register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [0]     | RW     | 0x1   | emac0_clk Enable    
 *  [1]     | RW     | 0x1   | emac1_clk_clk Enable
 *  [2]     | RW     | 0x1   | emac2_clk Enable    
 *  [3]     | RW     | 0x1   | emac_ptp_clk Enable 
 *  [4]     | RW     | 0x1   | gpio_db_clk Enable  
 *  [5]     | RW     | 0x1   | SDMMC Clock Enable  
 *  [6]     | RW     | 0x1   | s2f_user1_clk Enable
 *  [7]     | RW     | 0x1   | PSI_REF Clock Enable
 *  [8]     | RW     | 0x1   | USB Clock Enable    
 *  [9]     | RW     | 0x1   | SPIM Clock Enable   
 *  [10]    | RW     | 0x1   | NAND Clock Enable   
 *  [31:11] | ???    | 0x1   | *UNDEFINED*         
 * 
 */
/*
 * Field : emac0_clk Enable - emac0en
 * 
 * Enables clock emac0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMAC0EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : emac1_clk_clk Enable - emac1en
 * 
 * Enables clock emac1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMAC1EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : emac2_clk Enable - emac2en
 * 
 * Enables clock emac2_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMAC2EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : emac_ptp_clk Enable - emacptpen
 * 
 * Enables clock emac_ptp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : gpio_db_clk Enable - gpiodben
 * 
 * Enables clock gpio_db_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_GPIODBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SDMMC Clock Enable - sdmmcclken
 * 
 * Enables SDMMC peripheral clock.   This enable goes outside of the Clock Manger
 * to the SDMMC directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user1_clk Enable - s2fuser1clken
 * 
 * Enables clock s2f_user1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : PSI_REF Clock Enable - psiclken
 * 
 * Enables psi_ref clock.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_PSICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_PSICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_PSICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_PSICLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_PERPLL_ENR_PSICLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_PSICLKEN_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : USB Clock Enable - usbclken
 * 
 * Enables USB peripheral clock.   This enable goes outside of the Clock Manger to
 * the USB directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_USBCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SPIM Clock Enable - spimclken
 * 
 * Enables SPI Master peripheral clock.   This enable goes outside of the Clock
 * Manger to the SPIM directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : NAND Clock Enable - nandclken
 * 
 * Enables NAND peripheral clock.   This enable goes outside of the Clock Manger to
 * the NAND directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_SET(value) (((value) << 10) & 0x00000400)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_ENR.
 */
struct ALT_CLKMGR_PERPLL_ENR_s
{
    volatile uint32_t  emac0en       :  1;  /* emac0_clk Enable */
    volatile uint32_t  emac1en       :  1;  /* emac1_clk_clk Enable */
    volatile uint32_t  emac2en       :  1;  /* emac2_clk Enable */
    volatile uint32_t  emacptpen     :  1;  /* emac_ptp_clk Enable */
    volatile uint32_t  gpiodben      :  1;  /* gpio_db_clk Enable */
    volatile uint32_t  sdmmcclken    :  1;  /* SDMMC Clock Enable */
    volatile uint32_t  s2fuser1clken :  1;  /* s2f_user1_clk Enable */
    volatile uint32_t  psiclken      :  1;  /* PSI_REF Clock Enable */
    volatile uint32_t  usbclken      :  1;  /* USB Clock Enable */
    volatile uint32_t  spimclken     :  1;  /* SPIM Clock Enable */
    volatile uint32_t  nandclken     :  1;  /* NAND Clock Enable */
    uint32_t                         : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_ENR. */
typedef struct ALT_CLKMGR_PERPLL_ENR_s  ALT_CLKMGR_PERPLL_ENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_ENR register. */
#define ALT_CLKMGR_PERPLL_ENR_RESET       0x00000fff
/* The byte offset of the ALT_CLKMGR_PERPLL_ENR register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_ENR_OFST        0x8

/*
 * Register : Bypass Register - bypass
 * 
 * Contains fields that control bypass for clocks derived from the Peripheral PLL.
 * 
 * 1: The clock is bypassed.
 * 
 * 0: The clock is derived from the 5:1 active mux.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description         
 * :-------|:-------|:------|:---------------------
 *  [0]    | RW     | 0x1   | EMACA Bypass        
 *  [1]    | RW     | 0x1   | EMACB Bypass        
 *  [2]    | RW     | 0x1   | EMAC PTP Bypass     
 *  [3]    | RW     | 0x1   | GPIO Debounce Bypass
 *  [4]    | RW     | 0x1   | SDMMC Bypass        
 *  [5]    | RW     | 0x1   | S2F User1 Bypass    
 *  [6]    | RW     | 0x1   | PSI_REF Bypass      
 *  [31:7] | ???    | 0x1   | *UNDEFINED*         
 * 
 */
/*
 * Field : EMACA Bypass - emaca
 * 
 * If set, the emaca_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_EMACA field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_EMACA register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMACB Bypass - emacb
 * 
 * If set, the emacb_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_EMACB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_EMACB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC PTP Bypass - emacptp
 * 
 * If set, the emac_ptp_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : GPIO Debounce Bypass - gpiodb
 * 
 * If set, the gpio_db_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_GPIODB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SDMMC Bypass - sdmmc
 * 
 * If set, the sdmmc_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_SDMMC field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : S2F User1 Bypass - s2fuser1
 * 
 * If set, the s2f_user1_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PSI_REF Bypass - psiref
 * 
 * If set, the psi_ref_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_PSIREF register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_PSIREF register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_PSIREF field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_PSIREF register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_PSIREF_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_BYPASS.
 */
struct ALT_CLKMGR_PERPLL_BYPASS_s
{
    volatile uint32_t  emaca    :  1;  /* EMACA Bypass */
    volatile uint32_t  emacb    :  1;  /* EMACB Bypass */
    volatile uint32_t  emacptp  :  1;  /* EMAC PTP Bypass */
    volatile uint32_t  gpiodb   :  1;  /* GPIO Debounce Bypass */
    volatile uint32_t  sdmmc    :  1;  /* SDMMC Bypass */
    volatile uint32_t  s2fuser1 :  1;  /* S2F User1 Bypass */
    volatile uint32_t  psiref   :  1;  /* PSI_REF Bypass */
    uint32_t                    : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_BYPASS. */
typedef struct ALT_CLKMGR_PERPLL_BYPASS_s  ALT_CLKMGR_PERPLL_BYPASS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS register. */
#define ALT_CLKMGR_PERPLL_BYPASS_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_PERPLL_BYPASS register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_BYPASS_OFST        0xc

/*
 * Register : Bypass Set Register - bypasss
 * 
 * Write One to Set corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description         
 * :-------|:-------|:------|:---------------------
 *  [0]    | RW     | 0x1   | EMACA Bypass        
 *  [1]    | RW     | 0x1   | EMACB Bypass        
 *  [2]    | RW     | 0x1   | EMAC PTP Bypass     
 *  [3]    | RW     | 0x1   | GPIO Debounce Bypass
 *  [4]    | RW     | 0x1   | SDMMC Bypass        
 *  [5]    | RW     | 0x1   | S2F User1 Bypass    
 *  [6]    | RW     | 0x1   | PSI_REF Bypass      
 *  [31:7] | ???    | 0x1   | *UNDEFINED*         
 * 
 */
/*
 * Field : EMACA Bypass - emaca
 * 
 * If set, the emaca_free_clk will be bypassed to the input clock reference of the
 * Periphal PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_EMACA field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMACB Bypass - emacb
 * 
 * If set, the emacb_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_EMACB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC PTP Bypass - emacptp
 * 
 * If set, the emac_ptp_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : GPIO Debounce Bypass - gpiodb
 * 
 * If set, the gpio_db_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SDMMC Bypass - sdmmc
 * 
 * If set, the sdmmc_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : S2F User1 Bypass - s2fuser1
 * 
 * If set, the s2f_user1_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PSI_REF Bypass - psiref
 * 
 * If set, the psi_ref_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_PSIREF register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_PSIREF register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_PSIREF field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_PSIREF register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_PSIREF_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_BYPASSS.
 */
struct ALT_CLKMGR_PERPLL_BYPASSS_s
{
    volatile uint32_t  emaca    :  1;  /* EMACA Bypass */
    volatile uint32_t  emacb    :  1;  /* EMACB Bypass */
    volatile uint32_t  emacptp  :  1;  /* EMAC PTP Bypass */
    volatile uint32_t  gpiodb   :  1;  /* GPIO Debounce Bypass */
    volatile uint32_t  sdmmc    :  1;  /* SDMMC Bypass */
    volatile uint32_t  s2fuser1 :  1;  /* S2F User1 Bypass */
    volatile uint32_t  psiref   :  1;  /* PSI_REF Bypass */
    uint32_t                    : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_BYPASSS. */
typedef struct ALT_CLKMGR_PERPLL_BYPASSS_s  ALT_CLKMGR_PERPLL_BYPASSS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_PERPLL_BYPASSS register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_BYPASSS_OFST        0x10

/*
 * Register : Bypass Reset Register - bypassr
 * 
 * Write One to Clear corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description         
 * :-------|:-------|:------|:---------------------
 *  [0]    | RW     | 0x1   | EMACA Bypass        
 *  [1]    | RW     | 0x1   | EMACB Bypass        
 *  [2]    | RW     | 0x1   | EMAC PTP Bypass     
 *  [3]    | RW     | 0x1   | GPIO Debounce Bypass
 *  [4]    | RW     | 0x1   | SDMMC Bypass        
 *  [5]    | RW     | 0x1   | S2F User1 Bypass    
 *  [6]    | RW     | 0x1   | PSI_REF Bypass      
 *  [31:7] | ???    | 0x1   | *UNDEFINED*         
 * 
 */
/*
 * Field : EMACA Bypass - emaca
 * 
 * If set, the emaca_free_clk will be bypassed to the input clock reference of the
 * Periphal PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_EMACA field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMACB Bypass - emacb
 * 
 * If set, the emacb_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_EMACB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC PTP Bypass - emacptp
 * 
 * If set, the emac_ptp_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : GPIO Debounce Bypass - gpiodb
 * 
 * If set, the gpio_db_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SDMMC Bypass - sdmmc
 * 
 * If set, the sdmmc_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : S2F User1 Bypass - s2fuser1
 * 
 * If set, the s2f_user1_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PSI_REF Bypass - psiref
 * 
 * If set, the psi_ref_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_PSIREF register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_PSIREF register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_PSIREF register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_PSIREF field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_PSIREF register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_PSIREF_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_BYPASSR.
 */
struct ALT_CLKMGR_PERPLL_BYPASSR_s
{
    volatile uint32_t  emaca    :  1;  /* EMACA Bypass */
    volatile uint32_t  emacb    :  1;  /* EMACB Bypass */
    volatile uint32_t  emacptp  :  1;  /* EMAC PTP Bypass */
    volatile uint32_t  gpiodb   :  1;  /* GPIO Debounce Bypass */
    volatile uint32_t  sdmmc    :  1;  /* SDMMC Bypass */
    volatile uint32_t  s2fuser1 :  1;  /* S2F User1 Bypass */
    volatile uint32_t  psiref   :  1;  /* PSI_REF Bypass */
    uint32_t                    : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_BYPASSR. */
typedef struct ALT_CLKMGR_PERPLL_BYPASSR_s  ALT_CLKMGR_PERPLL_BYPASSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_PERPLL_BYPASSR register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_BYPASSR_OFST        0x14

/*
 * Register : Peripheral PLL Control Register for Counter 2 Clock - cntr2clk
 * 
 * Contains settings that control Couner 2 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x1   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x1   | ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR2CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR2CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR2CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR2CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR2CLK_s  ALT_CLKMGR_PERPLL_CNTR2CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR2CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_RESET       0x00010001
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR2CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_OFST        0x18

/*
 * Register : Peripheral PLL Control Register for Counter 3 Clock - cntr3clk
 * 
 * Contains settings that control Counter 3 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x1   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x1   | ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR3CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR3CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR3CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR3CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR3CLK_s  ALT_CLKMGR_PERPLL_CNTR3CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR3CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_RESET       0x00010001
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR3CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_OFST        0x1c

/*
 * Register : Peripheral PLL Control Register for Counter 4 Clock - cntr4clk
 * 
 * Contains settings that control Couner 4 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x4   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x1   | ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_RESET      0x4
/* Extracts the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR4CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR4CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR4CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR4CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR4CLK_s  ALT_CLKMGR_PERPLL_CNTR4CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR4CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_RESET       0x00010004
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR4CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_OFST        0x20

/*
 * Register : Peripheral PLL Control Register for Counter 5 Clock - cntr5clk
 * 
 * Contains settings that control Couner 5 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x1   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR5CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR5CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR5CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR5CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR5CLK_s  ALT_CLKMGR_PERPLL_CNTR5CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR5CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR5CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_OFST        0x24

/*
 * Register : Peripheral PLL Control Register for Counter 6 Clock - cntr6clk
 * 
 * Contains settings that control Couner 6 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x1   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR6CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR6CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR6CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR6CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR6CLK_s  ALT_CLKMGR_PERPLL_CNTR6CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR6CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR6CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_OFST        0x28

/*
 * Register : Peripheral PLL Control Register for Counter 7 Clock - cntr7clk
 * 
 * Contains settings that control Couner 7 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x0   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR7CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR7CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR7CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR7CLK_s  ALT_CLKMGR_PERPLL_CNTR7CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR7CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR7CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_OFST        0x2c

/*
 * Register : Peripheral PLL Control Register for Counter 8 Clock - cntr8clk
 * 
 * Contains settings that control Couner 8 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x1   | ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR8CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR8CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR8CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR8CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR8CLK_s  ALT_CLKMGR_PERPLL_CNTR8CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR8CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_RESET       0x00010000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR8CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_OFST        0x30

/*
 * Register : periph PLL Control Register for Counter 10 Clock - cntr9clk
 * 
 * Contains settings that control Couner 10 clock generated from the periph PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x1   | ALT_CLKMGR_PERPLL_CNTR9CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR9CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR9CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_CNTR9CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR9CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR9CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR9CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR9CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR9CLK. */
typedef struct ALT_CLKMGR_PERPLL_CNTR9CLK_s  ALT_CLKMGR_PERPLL_CNTR9CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR9CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_RESET       0x00010000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR9CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_OFST        0x34

/*
 * Register : Main Divide Register - emacctl
 * 
 * Contains fields that control clock dividers for main clocks derived from the
 * Main PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [25:0]  | ???    | 0x0   | *UNDEFINED*       
 *  [26]    | RW     | 0x0   | EMAC0 clock select
 *  [27]    | RW     | 0x0   | EMAC1 clock select
 *  [28]    | RW     | 0x0   | EMAC2 clock select
 *  [31:29] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : EMAC0 clock select - emac0sel
 * 
 * Selects the source for emac0_clk as either emaca_free_clk or emacb_free_clk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACA | 0x0   | EMAC A     
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACB | 0x1   | EMAC B     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL
 * 
 * EMAC A
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACA  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL
 * 
 * EMAC B
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACB  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_MSB        26
/* The width in bits of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_SET_MSK    0x04000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_CLR_MSK    0xfbffffff
/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL field value from a register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : EMAC1 clock select - emac1sel
 * 
 * Selects the source for emac1_clk as either emaca_free_clk or emacb_free_clk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACA | 0x0   | EMAC A     
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACB | 0x1   | EMAC B     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL
 * 
 * EMAC A
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACA  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL
 * 
 * EMAC B
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACB  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_MSB        27
/* The width in bits of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_SET_MSK    0x08000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL field value from a register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : EMAC2 clock select - emac2sel
 * 
 * Selects the source for emac2_clk as either emaca_free_clk or emacb_free_clk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACA | 0x0   | EMAC A     
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACB | 0x1   | EMAC B     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL
 * 
 * EMAC A
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACA  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL
 * 
 * EMAC B
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACB  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_MSB        28
/* The width in bits of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_SET_MSK    0x10000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_CLR_MSK    0xefffffff
/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL field value from a register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_SET(value) (((value) << 28) & 0x10000000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_EMACCTL.
 */
struct ALT_CLKMGR_PERPLL_EMACCTL_s
{
    uint32_t                    : 26;  /* *UNDEFINED* */
    volatile uint32_t  emac0sel :  1;  /* EMAC0 clock select */
    volatile uint32_t  emac1sel :  1;  /* EMAC1 clock select */
    volatile uint32_t  emac2sel :  1;  /* EMAC2 clock select */
    uint32_t                    :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_EMACCTL. */
typedef struct ALT_CLKMGR_PERPLL_EMACCTL_s  ALT_CLKMGR_PERPLL_EMACCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_EMACCTL register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_EMACCTL_OFST        0x38

/*
 * Register : GPIO Divide Register - gpiodiv
 * 
 * Contains a field that controls the clock divider for the GPIO De-bounce clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [15:0]  | RW     | 0x1   | GPIO De-bounce Clock Divider
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : GPIO De-bounce Clock Divider - gpiodbclk
 * 
 * The gpio_db_clk is divided down from the periph_base_clk by the value plus one
 * specified in this field. The value 0 (divide by 1) is illegal. A value of 1
 * indicates divide by 2, 2 divide by 3, etc.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_MSB        15
/* The width in bits of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_WIDTH      16
/* The mask used to set the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field value. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field value. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_CLR_MSK    0xffff0000
/* The reset value of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK field value from a register. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_SET(value) (((value) << 0) & 0x0000ffff)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_GPIODIV.
 */
struct ALT_CLKMGR_PERPLL_GPIODIV_s
{
    volatile uint32_t  gpiodbclk : 16;  /* GPIO De-bounce Clock Divider */
    uint32_t                     : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_GPIODIV. */
typedef struct ALT_CLKMGR_PERPLL_GPIODIV_s  ALT_CLKMGR_PERPLL_GPIODIV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_GPIODIV register. */
#define ALT_CLKMGR_PERPLL_GPIODIV_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_PERPLL_GPIODIV register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_GPIODIV_OFST        0x3c

/*
 * Register : pllglob
 * 
 * This refects register settings for both the channels of the periph PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [0]     | RW     | 0x0   | main PLL power down                
 *  [1]     | RW     | 0x0   | main PLL reset                     
 *  [2]     | RW     | 0x0   | main PLL mute                      
 *  [3]     | RW     | 0x0   | Int mode sel                       
 *  [4]     | RW     | 0x0   | Bypass clock source select control 
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                        
 *  [13:8]  | RW     | 0x1   | ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                        
 *  [17:16] | RW     | 0x0   | Clock Source                       
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : main PLL power down - pd
 * 
 * PLL Disable/Power-Down Control:
 * 
 * 1: PLL Analog circuits are Enabled;
 * 
 * 0: PLL is Disabled.
 * 
 * By default the signal is asserted. Software should come and write '1' in this
 * reg to bring up the PLL
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLGLOB_PD_E_POWERDOWN | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLGLOB_PD_E_POWERUP   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_PD
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_E_POWERDOWN    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_PD
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_E_POWERUP      0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLGLOB_PD register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLGLOB_PD register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLGLOB_PD field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_PLLGLOB_PD register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : main PLL reset - rst
 * 
 * PLL Reset. Used to power down and initialize the synthesizer. Must be asserted
 * when power supply pins are applied.
 * 
 * 1- Hard Reset Is De-Asserted;
 * 
 * 0-Hard Reset Is Asserted.
 * 
 * By default the signal is asserted. Software should come and write '1' in this
 * reg to bring up the PLL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLGLOB_RST register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLGLOB_RST register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLGLOB_RST field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_PLLGLOB_RST register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RST_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : main PLL mute - mute
 * 
 * Mutes All PLL Outputs Glitch-Free:
 * 
 * 1 - Output Clocks Are Muted To 1'B0;
 * 
 * 0 - Output Clocks Are Active
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_E_UNMUTE | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_E_MUTE   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_MUTE
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_E_UNMUTE 0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_MUTE
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_E_MUTE   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLGLOB_MUTE register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLGLOB_MUTE register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLGLOB_MUTE field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_PLLGLOB_MUTE register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MUTE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Int mode sel - modsel
 * 
 * terger mode, feedback divident to PLL is considered integer. It can be only set
 * while the PLL is at reset or power down state. It cannot be switched
 * dynamically.
 * 
 * Select: 1'B1 - Fractional Mode
 * 
 * 1'B0 - Integer Mode;
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_E_INT   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_E_FLOAT | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_E_INT      0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_E_FLOAT    0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_MODSEL_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Bypass clock source select control - bysctl
 * 
 * This bit is resposible for selecting source for bypass clock in PLL bypass mode.
 * In the current version of the PLL. this feature is not supported.
 * 
 * Therefore it can be '0' or '1'. The value does not matter at all.
 * 
 * Making it '0' by defaut
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_BYSCTL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : refclkdiv
 * 
 * Reference Clock Divider Control Registers;
 * 
 * Fref_eff    = (Fref)/(refdiv[5:0])
 * 
 * Frq_mul = {(6+ mdiv[7:0]* (fdiv[23:0]/ (2^24)))}
 * 
 * Fsyn = Frq_mul * Fref_eff
 * 
 * (Fsyn /6) >= 3* Fref_eff
 * 
 * Fock_vpll_pr1   =    Fsyn /(pr1[7:0])
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_MSB        13
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_WIDTH      6
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_SET_MSK    0x00003f00
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_CLR_MSK    0xffffc0ff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_GET(value) (((value) & 0x00003f00) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_SET(value) (((value) << 8) & 0x00003f00)

/*
 * Field : Clock Source - psrc
 * 
 * Controls the VCO input clock source.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description  
 * :----------------------------------------|:------|:--------------
 *  ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_EOSC1  | 0x0   | eosc1_clk    
 *  ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_INTOSC | 0x1   | cb_intosc_clk
 *  ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_F2S    | 0x2   | f2s_free_clk 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_PSRC
 * 
 * eosc1_clk
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_EOSC1  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_PSRC
 * 
 * cb_intosc_clk
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_INTOSC 0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLGLOB_PSRC
 * 
 * f2s_free_clk
 */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_F2S    0x2

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_MSB        17
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_WIDTH      2
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLGLOB_PSRC register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_SET_MSK    0x00030000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLGLOB_PSRC register field value. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_CLR_MSK    0xfffcffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLGLOB_PSRC field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_PLLGLOB_PSRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_SET(value) (((value) << 16) & 0x00030000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_PLLGLOB.
 */
struct ALT_CLKMGR_PERPLL_PLLGLOB_s
{
    volatile uint32_t  pd        :  1;  /* main PLL power down */
    volatile uint32_t  rst       :  1;  /* main PLL reset */
    volatile uint32_t  mute      :  1;  /* main PLL mute */
    volatile uint32_t  modsel    :  1;  /* Int mode sel */
    volatile uint32_t  bysctl    :  1;  /* Bypass clock source select control */
    uint32_t                     :  3;  /* *UNDEFINED* */
    volatile uint32_t  refclkdiv :  6;  /* ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV */
    uint32_t                     :  2;  /* *UNDEFINED* */
    volatile uint32_t  psrc      :  2;  /* Clock Source */
    uint32_t                     : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_PLLGLOB. */
typedef struct ALT_CLKMGR_PERPLL_PLLGLOB_s  ALT_CLKMGR_PERPLL_PLLGLOB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_PLLGLOB register. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_RESET       0x00000100
/* The byte offset of the ALT_CLKMGR_PERPLL_PLLGLOB register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_PLLGLOB_OFST        0x40

/*
 * Register : fdbck
 * 
 * VCO freq register counters
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [23:0]  | RW     | 0x0   | ALT_CLKMGR_PERPLL_FDBCK_FDIV
 *  [31:24] | RW     | 0x22  | ALT_CLKMGR_PERPLL_FDBCK_MDIV
 * 
 */
/*
 * Field : fdiv
 * 
 * Fractional Synthesizer Center Frequency Control Word. The PLL Initially Operates
 * At The Frequency Based On The Mdiv Value Set At Reset. After Pll Exits Reset,
 * Any Change In Mdiv Value At The Interface Is Stored Internally.
 * 
 * Fref_eff    = (Fref)/(refdiv[5:0])
 * 
 * Frq_mul = {(6+ mdiv[7:0]* (fdiv[23:0]/ (2^24)))}
 * 
 * Fsyn = Frq_mul * Fref_eff
 * 
 * (Fsyn /6) >= 3* Fref_eff
 * 
 * Fock_vpll_pr1   =    Fsyn /(pr1[7:0])
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_MSB        23
/* The width in bits of the ALT_CLKMGR_PERPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_WIDTH      24
/* The mask used to set the ALT_CLKMGR_PERPLL_FDBCK_FDIV register field value. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_CLKMGR_PERPLL_FDBCK_FDIV register field value. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_CLR_MSK    0xff000000
/* The reset value of the ALT_CLKMGR_PERPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_FDBCK_FDIV field value from a register. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_FDBCK_FDIV register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_FDBCK_FDIV_SET(value) (((value) << 0) & 0x00ffffff)

/*
 * Field : mdiv
 * 
 * Feedback Clock Divider. The Pll Initially Operates At The Frequency Based On The
 * Mdiv And Fdiv Values Set At Reset. After Pll Exits Reset, Any Change In Mdiv Or
 * Fdiv Values At The Interface Are Stored Internally. ictl_vpll_mdiv_a_[7:0] =
 * (Fvco /( Fref / ictl_vpll_refdiv_nt_[5:0])) - 6.
 * 
 * Fref_eff = (Fref)/(refdiv[5:0])
 * 
 * Frq_mul = {(6+ mdiv[7:0]* (fdiv[23:0] / (2^24)))}
 * 
 * Fsyn = Frq_mul * Fref_eff
 * 
 * (Fsyn /6) >= 3* Fref_eff
 * 
 * Fock_vpll_pr1 = Fsyn /(pr1[7:0])
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_MSB        31
/* The width in bits of the ALT_CLKMGR_PERPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_WIDTH      8
/* The mask used to set the ALT_CLKMGR_PERPLL_FDBCK_MDIV register field value. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_SET_MSK    0xff000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_FDBCK_MDIV register field value. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_CLR_MSK    0x00ffffff
/* The reset value of the ALT_CLKMGR_PERPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_RESET      0x22
/* Extracts the ALT_CLKMGR_PERPLL_FDBCK_MDIV field value from a register. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_CLKMGR_PERPLL_FDBCK_MDIV register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_FDBCK_MDIV_SET(value) (((value) << 24) & 0xff000000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_FDBCK.
 */
struct ALT_CLKMGR_PERPLL_FDBCK_s
{
    volatile uint32_t  fdiv : 24;  /* ALT_CLKMGR_PERPLL_FDBCK_FDIV */
    volatile uint32_t  mdiv :  8;  /* ALT_CLKMGR_PERPLL_FDBCK_MDIV */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_FDBCK. */
typedef struct ALT_CLKMGR_PERPLL_FDBCK_s  ALT_CLKMGR_PERPLL_FDBCK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_FDBCK register. */
#define ALT_CLKMGR_PERPLL_FDBCK_RESET       0x22000000
/* The byte offset of the ALT_CLKMGR_PERPLL_FDBCK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_FDBCK_OFST        0x44

/*
 * Register : mem
 * 
 * Registers dealing with PLL internal memory access.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description               
 * :--------|:-------|:------|:---------------------------
 *  [9:0]   | RW     | 0x0   | ALT_CLKMGR_PERPLL_MEM_ADDR
 *  [15:10] | ???    | 0x0   | *UNDEFINED*               
 *  [23:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_MEM_WDAT
 *  [24]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_MEM_REQ 
 *  [25]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_MEM_WR  
 *  [31:26] | ???    | 0x0   | *UNDEFINED*               
 * 
 */
/*
 * Field : addr
 * 
 * PLL Memory Addressing
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_WIDTH      10
/* The mask used to set the ALT_CLKMGR_PERPLL_MEM_ADDR register field value. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_SET_MSK    0x000003ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_MEM_ADDR register field value. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_CLR_MSK    0xfffffc00
/* The reset value of the ALT_CLKMGR_PERPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_MEM_ADDR field value from a register. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_MEM_ADDR register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_MEM_ADDR_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : wdat
 * 
 * Memory Write Data
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_MSB        23
/* The width in bits of the ALT_CLKMGR_PERPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_WIDTH      8
/* The mask used to set the ALT_CLKMGR_PERPLL_MEM_WDAT register field value. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_CLKMGR_PERPLL_MEM_WDAT register field value. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_CLR_MSK    0xff00ffff
/* The reset value of the ALT_CLKMGR_PERPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_MEM_WDAT field value from a register. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_MEM_WDAT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_MEM_WDAT_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : req
 * 
 * Memory Request Signal
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_MEM_REQ register field. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_MEM_REQ register field. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_MSB        24
/* The width in bits of the ALT_CLKMGR_PERPLL_MEM_REQ register field. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_MEM_REQ register field value. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_SET_MSK    0x01000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_MEM_REQ register field value. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_CLR_MSK    0xfeffffff
/* The reset value of the ALT_CLKMGR_PERPLL_MEM_REQ register field. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_MEM_REQ field value from a register. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_CLKMGR_PERPLL_MEM_REQ register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_MEM_REQ_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : wr
 * 
 * Memory Read/Write Signal. 0 - Indicates A Read Transaction. 1 - Indicates A
 * Write Transaction
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description
 * :---------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_MEM_WR_E_READ  | 0x0   |            
 *  ALT_CLKMGR_PERPLL_MEM_WR_E_WRITE | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_MEM_WR
 * 
 */
#define ALT_CLKMGR_PERPLL_MEM_WR_E_READ     0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_MEM_WR
 * 
 */
#define ALT_CLKMGR_PERPLL_MEM_WR_E_WRITE    0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_MEM_WR register field. */
#define ALT_CLKMGR_PERPLL_MEM_WR_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_MEM_WR register field. */
#define ALT_CLKMGR_PERPLL_MEM_WR_MSB        25
/* The width in bits of the ALT_CLKMGR_PERPLL_MEM_WR register field. */
#define ALT_CLKMGR_PERPLL_MEM_WR_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_MEM_WR register field value. */
#define ALT_CLKMGR_PERPLL_MEM_WR_SET_MSK    0x02000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_MEM_WR register field value. */
#define ALT_CLKMGR_PERPLL_MEM_WR_CLR_MSK    0xfdffffff
/* The reset value of the ALT_CLKMGR_PERPLL_MEM_WR register field. */
#define ALT_CLKMGR_PERPLL_MEM_WR_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_MEM_WR field value from a register. */
#define ALT_CLKMGR_PERPLL_MEM_WR_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_CLKMGR_PERPLL_MEM_WR register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_MEM_WR_SET(value) (((value) << 25) & 0x02000000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_MEM.
 */
struct ALT_CLKMGR_PERPLL_MEM_s
{
    volatile uint32_t  addr : 10;  /* ALT_CLKMGR_PERPLL_MEM_ADDR */
    uint32_t                :  6;  /* *UNDEFINED* */
    volatile uint32_t  wdat :  8;  /* ALT_CLKMGR_PERPLL_MEM_WDAT */
    volatile uint32_t  req  :  1;  /* ALT_CLKMGR_PERPLL_MEM_REQ */
    volatile uint32_t  wr   :  1;  /* ALT_CLKMGR_PERPLL_MEM_WR */
    uint32_t                :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_MEM. */
typedef struct ALT_CLKMGR_PERPLL_MEM_s  ALT_CLKMGR_PERPLL_MEM_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_MEM register. */
#define ALT_CLKMGR_PERPLL_MEM_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_MEM register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_MEM_OFST        0x48

/*
 * Register : memstat
 * 
 * Periph PLL memstatus register. contains ack and memory read data
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_CLKMGR_PERPLL_MEMSTAT_RDATA
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : rdata
 * 
 * Memory Read Data
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_WIDTH      8
/* The mask used to set the ALT_CLKMGR_PERPLL_MEMSTAT_RDATA register field value. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_MEMSTAT_RDATA register field value. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_PERPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_MEMSTAT_RDATA field value from a register. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_MEMSTAT_RDATA register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RDATA_SET(value) (((value) << 0) & 0x000000ff)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_MEMSTAT.
 */
struct ALT_CLKMGR_PERPLL_MEMSTAT_s
{
    const volatile uint32_t  rdata :  8;  /* ALT_CLKMGR_PERPLL_MEMSTAT_RDATA */
    uint32_t                       : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_MEMSTAT. */
typedef struct ALT_CLKMGR_PERPLL_MEMSTAT_s  ALT_CLKMGR_PERPLL_MEMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_MEMSTAT register. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_MEMSTAT register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_MEMSTAT_OFST        0x4c

/*
 * Register : pllc0
 * 
 * Channel C0 frequency settings for the periph PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [7:0]   | RW     | 0x2   | ALT_CLKMGR_PERPLL_PLLC0_DIV  
 *  [23:8]  | ???    | 0x0   | *UNDEFINED*                  
 *  [24]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_PLLC0_PHINC
 *  [25]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_PLLC0_PHRST
 *  [26]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_PLLC0_BYPAS
 *  [27]    | RW     | 0x1   | ALT_CLKMGR_PERPLL_PLLC0_EN   
 *  [31:28] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : div
 * 
 * PLL channel 0 divider ratio in binary code; Can be dynamically updated after
 * lock signal is asserted, glitch-free from 8'd3 to 8'd255; could encounter
 * glitches for 8'd1 and 8d'2 cases.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_WIDTH      8
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC0_DIV register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC0_DIV register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_RESET      0x2
/* Extracts the ALT_CLKMGR_PERPLL_PLLC0_DIV field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_PLLC0_DIV register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC0_DIV_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : phinc
 * 
 * When a positive edge is induced, one of the positive edges of PLLC0 clock is
 * pushed out by 1/8th of VCO period.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC0_PHINC_E_UNPUSH | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC0_PHINC_E_PUSH   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_PHINC
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_E_UNPUSH  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_PHINC
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_E_PUSH    0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_MSB        24
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC0_PHINC register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_SET_MSK    0x01000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC0_PHINC register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_CLR_MSK    0xfeffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLC0_PHINC field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_CLKMGR_PERPLL_PLLC0_PHINC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHINC_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : phrst
 * 
 * If ictl_vpll_pr1_phrst_a=1'b1, the phase of PLLC0 clock is reset to default
 * phase as the PLL is just started.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description
 * :--------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC0_PHRST_E_RSTDEASSERT | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC0_PHRST_E_RSTASSERT   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_PHRST
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_E_RSTDEASSERT 0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_PHRST
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_E_RSTASSERT   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_MSB        25
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC0_PHRST register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_SET_MSK    0x02000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC0_PHRST register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_CLR_MSK    0xfdffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLC0_PHRST field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_CLKMGR_PERPLL_PLLC0_PHRST register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC0_PHRST_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : bypas
 * 
 * PLL channel 0 output bypass; before lock, it is muted, regardless of its value.
 * After lock, if enabled and bypass=1, this outputs refclk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC0_BYPAS_E_UNBYPASS | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC0_BYPAS_E_BYPASS   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_BYPAS
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_E_UNBYPASS    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_BYPAS
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_E_BYPASS      0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_MSB        26
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC0_BYPAS register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_SET_MSK    0x04000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC0_BYPAS register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_CLR_MSK    0xfbffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLC0_BYPAS field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_CLKMGR_PERPLL_PLLC0_BYPAS register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC0_BYPAS_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : en
 * 
 * PLL channel 0 output enable; the output is muted before lock signal is asserted,
 * regardless of the value; after lock is asserted, it is glitch-free enable
 * ock_vpll_pr1, if enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC0_EN_E_DISABLE | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC0_EN_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_EN
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_E_DISABLE    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC0_EN
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_E_ENABLE     0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_MSB        27
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC0_EN register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_SET_MSK    0x08000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC0_EN register field value. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_PLLC0_EN field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_CLKMGR_PERPLL_PLLC0_EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC0_EN_SET(value) (((value) << 27) & 0x08000000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_PLLC0.
 */
struct ALT_CLKMGR_PERPLL_PLLC0_s
{
    volatile uint32_t  div   :  8;  /* ALT_CLKMGR_PERPLL_PLLC0_DIV */
    uint32_t                 : 16;  /* *UNDEFINED* */
    volatile uint32_t  phinc :  1;  /* ALT_CLKMGR_PERPLL_PLLC0_PHINC */
    volatile uint32_t  phrst :  1;  /* ALT_CLKMGR_PERPLL_PLLC0_PHRST */
    volatile uint32_t  bypas :  1;  /* ALT_CLKMGR_PERPLL_PLLC0_BYPAS */
    volatile uint32_t  en    :  1;  /* ALT_CLKMGR_PERPLL_PLLC0_EN */
    uint32_t                 :  4;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_PLLC0. */
typedef struct ALT_CLKMGR_PERPLL_PLLC0_s  ALT_CLKMGR_PERPLL_PLLC0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_PLLC0 register. */
#define ALT_CLKMGR_PERPLL_PLLC0_RESET       0x08000002
/* The byte offset of the ALT_CLKMGR_PERPLL_PLLC0 register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_PLLC0_OFST        0x50

/*
 * Register : pllc1
 * 
 * Channel C1 settings for the periph PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [7:0]   | RW     | 0x4   | ALT_CLKMGR_PERPLL_PLLC1_DIV  
 *  [23:8]  | ???    | 0x0   | *UNDEFINED*                  
 *  [24]    | RW     | 0x1   | ALT_CLKMGR_PERPLL_PLLC1_EN   
 *  [25]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_PLLC1_BYPAS
 *  [26]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_PLLC1_PHINC
 *  [27]    | RW     | 0x0   | ALT_CLKMGR_PERPLL_PLLC1_PHRST
 *  [31:28] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : div
 * 
 * PLL channel 1 divider ratio in binary code; Can be dynamically updated after
 * lock signal is asserted, glitch-free from 8'd3 to 8'd255; could encounter
 * glitches for 8'd1 and 8d'2 cases.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_WIDTH      8
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC1_DIV register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC1_DIV register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_RESET      0x4
/* Extracts the ALT_CLKMGR_PERPLL_PLLC1_DIV field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_PLLC1_DIV register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC1_DIV_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : en
 * 
 * PLL channel 1 output enable; the output is muted before lock signal is asserted,
 * regardless of the value; after lock is asserted, it is glitch-free enable
 * ock_vpll_pr1, if enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC1_EN_E_DISABLE | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC1_EN_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_EN
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_E_DISABLE    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_EN
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_E_ENABLE     0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_MSB        24
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC1_EN register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_SET_MSK    0x01000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC1_EN register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_CLR_MSK    0xfeffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_PLLC1_EN field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_CLKMGR_PERPLL_PLLC1_EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC1_EN_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : bypas
 * 
 * PLL channel 1 output bypass; before lock, it is muted, regardless of its value.
 * After lock, if enabled and bypass=1, this outputs refclk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC1_BYPAS_E_UNBYPASS | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC1_BYPAS_E_BYPASS   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_BYPAS
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_E_UNBYPASS    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_BYPAS
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_E_BYPASS      0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_MSB        25
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC1_BYPAS register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_SET_MSK    0x02000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC1_BYPAS register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_CLR_MSK    0xfdffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLC1_BYPAS field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_CLKMGR_PERPLL_PLLC1_BYPAS register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC1_BYPAS_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : phinc
 * 
 * When a positive edge is induced, one of the positive edges of PLLC1 clock is
 * pushed out by 1/8th of VCO period.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC1_PHINC_E_UNPUSH | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC1_PHINC_E_PUSH   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_PHINC
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_E_UNPUSH  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_PHINC
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_E_PUSH    0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_MSB        26
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC1_PHINC register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_SET_MSK    0x04000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC1_PHINC register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_CLR_MSK    0xfbffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLC1_PHINC field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_CLKMGR_PERPLL_PLLC1_PHINC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHINC_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : phrst
 * 
 * If ictl_vpll_pr1_phrst_a=1'b1, the phase of PLLC1 clock is reset to default
 * phase as the PLL is just started.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description
 * :--------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_PLLC1_PHRST_E_RSTDEASSERT | 0x0   |            
 *  ALT_CLKMGR_PERPLL_PLLC1_PHRST_E_RSTASSERT   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_PHRST
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_E_RSTDEASSERT 0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_PLLC1_PHRST
 * 
 */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_E_RSTASSERT   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_MSB        27
/* The width in bits of the ALT_CLKMGR_PERPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_PLLC1_PHRST register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_SET_MSK    0x08000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_PLLC1_PHRST register field value. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_CLKMGR_PERPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_PLLC1_PHRST field value from a register. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_CLKMGR_PERPLL_PLLC1_PHRST register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_PLLC1_PHRST_SET(value) (((value) << 27) & 0x08000000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_PLLC1.
 */
struct ALT_CLKMGR_PERPLL_PLLC1_s
{
    volatile uint32_t  div   :  8;  /* ALT_CLKMGR_PERPLL_PLLC1_DIV */
    uint32_t                 : 16;  /* *UNDEFINED* */
    volatile uint32_t  en    :  1;  /* ALT_CLKMGR_PERPLL_PLLC1_EN */
    volatile uint32_t  bypas :  1;  /* ALT_CLKMGR_PERPLL_PLLC1_BYPAS */
    volatile uint32_t  phinc :  1;  /* ALT_CLKMGR_PERPLL_PLLC1_PHINC */
    volatile uint32_t  phrst :  1;  /* ALT_CLKMGR_PERPLL_PLLC1_PHRST */
    uint32_t                 :  4;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_PLLC1. */
typedef struct ALT_CLKMGR_PERPLL_PLLC1_s  ALT_CLKMGR_PERPLL_PLLC1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_PLLC1 register. */
#define ALT_CLKMGR_PERPLL_PLLC1_RESET       0x01000004
/* The byte offset of the ALT_CLKMGR_PERPLL_PLLC1 register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_PLLC1_OFST        0x54

/*
 * Register : vcocalib
 * 
 * VCO calibration control registers.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [7:0]   | RW     | 0xbf  | ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT 
 *  [8]     | ???    | 0x0   | *UNDEFINED*                      
 *  [16:9]  | RW     | 0x5   | ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT 
 *  [22:17] | ???    | 0x0   | *UNDEFINED*                      
 *  [24:23] | RW     | 0x0   | ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : hscnt
 * 
 * VCO calibration parameter.
 * 
 * hscnt= (mdiv+ 6) * mscnt/ refdiv-9.
 * 
 * It can be only set while the pll is at reset or power down state.
 * 
 * It cannot be switched dynamically.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_WIDTH      8
/* The mask used to set the ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT register field value. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT register field value. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_RESET      0xbf
/* Extracts the ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT field value from a register. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : mscnt
 * 
 * mscnt = 200/(fvco/fref).
 * 
 * It can be only set while the PLL is at reset or power down state.
 * 
 * It cannot be switched dynamically.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_MSB        16
/* The width in bits of the ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_WIDTH      8
/* The mask used to set the ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT register field value. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_SET_MSK    0x0001fe00
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT register field value. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_CLR_MSK    0xfffe01ff
/* The reset value of the ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_RESET      0x5
/* Extracts the ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT field value from a register. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_GET(value) (((value) & 0x0001fe00) >> 9)
/* Produces a ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT_SET(value) (((value) << 9) & 0x0001fe00)

/*
 * Field : termin
 * 
 * Termination Calibration Control Look-Up Table Select
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_MSB        24
/* The width in bits of the ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_WIDTH      2
/* The mask used to set the ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN register field value. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_SET_MSK    0x01800000
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN register field value. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_CLR_MSK    0xfe7fffff
/* The reset value of the ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN field value from a register. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_GET(value) (((value) & 0x01800000) >> 23)
/* Produces a ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN_SET(value) (((value) << 23) & 0x01800000)

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
 * The struct declaration for register ALT_CLKMGR_PERPLL_VCOCALIB.
 */
struct ALT_CLKMGR_PERPLL_VCOCALIB_s
{
    volatile uint32_t  hscnt  :  8;  /* ALT_CLKMGR_PERPLL_VCOCALIB_HSCNT */
    uint32_t                  :  1;  /* *UNDEFINED* */
    volatile uint32_t  mscnt  :  8;  /* ALT_CLKMGR_PERPLL_VCOCALIB_MSCNT */
    uint32_t                  :  6;  /* *UNDEFINED* */
    volatile uint32_t  termin :  2;  /* ALT_CLKMGR_PERPLL_VCOCALIB_TERMIN */
    uint32_t                  :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_VCOCALIB. */
typedef struct ALT_CLKMGR_PERPLL_VCOCALIB_s  ALT_CLKMGR_PERPLL_VCOCALIB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_VCOCALIB register. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_RESET       0x00000abf
/* The byte offset of the ALT_CLKMGR_PERPLL_VCOCALIB register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_VCOCALIB_OFST        0x58

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
 * The struct declaration for register group ALT_CLKMGR_PERPLL.
 */
struct ALT_CLKMGR_PERPLL_s
{
    volatile ALT_CLKMGR_PERPLL_EN_t        en;                 /* ALT_CLKMGR_PERPLL_EN */
    volatile ALT_CLKMGR_PERPLL_ENS_t       ens;                /* ALT_CLKMGR_PERPLL_ENS */
    volatile ALT_CLKMGR_PERPLL_ENR_t       enr;                /* ALT_CLKMGR_PERPLL_ENR */
    volatile ALT_CLKMGR_PERPLL_BYPASS_t    bypass;             /* ALT_CLKMGR_PERPLL_BYPASS */
    volatile ALT_CLKMGR_PERPLL_BYPASSS_t   bypasss;            /* ALT_CLKMGR_PERPLL_BYPASSS */
    volatile ALT_CLKMGR_PERPLL_BYPASSR_t   bypassr;            /* ALT_CLKMGR_PERPLL_BYPASSR */
    volatile ALT_CLKMGR_PERPLL_CNTR2CLK_t  cntr2clk;           /* ALT_CLKMGR_PERPLL_CNTR2CLK */
    volatile ALT_CLKMGR_PERPLL_CNTR3CLK_t  cntr3clk;           /* ALT_CLKMGR_PERPLL_CNTR3CLK */
    volatile ALT_CLKMGR_PERPLL_CNTR4CLK_t  cntr4clk;           /* ALT_CLKMGR_PERPLL_CNTR4CLK */
    volatile ALT_CLKMGR_PERPLL_CNTR5CLK_t  cntr5clk;           /* ALT_CLKMGR_PERPLL_CNTR5CLK */
    volatile ALT_CLKMGR_PERPLL_CNTR6CLK_t  cntr6clk;           /* ALT_CLKMGR_PERPLL_CNTR6CLK */
    volatile ALT_CLKMGR_PERPLL_CNTR7CLK_t  cntr7clk;           /* ALT_CLKMGR_PERPLL_CNTR7CLK */
    volatile ALT_CLKMGR_PERPLL_CNTR8CLK_t  cntr8clk;           /* ALT_CLKMGR_PERPLL_CNTR8CLK */
    volatile ALT_CLKMGR_PERPLL_CNTR9CLK_t  cntr9clk;           /* ALT_CLKMGR_PERPLL_CNTR9CLK */
    volatile ALT_CLKMGR_PERPLL_EMACCTL_t   emacctl;            /* ALT_CLKMGR_PERPLL_EMACCTL */
    volatile ALT_CLKMGR_PERPLL_GPIODIV_t   gpiodiv;            /* ALT_CLKMGR_PERPLL_GPIODIV */
    volatile ALT_CLKMGR_PERPLL_PLLGLOB_t   pllglob;            /* ALT_CLKMGR_PERPLL_PLLGLOB */
    volatile ALT_CLKMGR_PERPLL_FDBCK_t     fdbck;              /* ALT_CLKMGR_PERPLL_FDBCK */
    volatile ALT_CLKMGR_PERPLL_MEM_t       mem;                /* ALT_CLKMGR_PERPLL_MEM */
    volatile ALT_CLKMGR_PERPLL_MEMSTAT_t   memstat;            /* ALT_CLKMGR_PERPLL_MEMSTAT */
    volatile ALT_CLKMGR_PERPLL_PLLC0_t     pllc0;              /* ALT_CLKMGR_PERPLL_PLLC0 */
    volatile ALT_CLKMGR_PERPLL_PLLC1_t     pllc1;              /* ALT_CLKMGR_PERPLL_PLLC1 */
    volatile ALT_CLKMGR_PERPLL_VCOCALIB_t  vcocalib;           /* ALT_CLKMGR_PERPLL_VCOCALIB */
    volatile uint32_t                      _pad_0x5c_0x80[9];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR_PERPLL. */
typedef struct ALT_CLKMGR_PERPLL_s  ALT_CLKMGR_PERPLL_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR_PERPLL. */
struct ALT_CLKMGR_PERPLL_raw_s
{
    volatile uint32_t  en;                 /* ALT_CLKMGR_PERPLL_EN */
    volatile uint32_t  ens;                /* ALT_CLKMGR_PERPLL_ENS */
    volatile uint32_t  enr;                /* ALT_CLKMGR_PERPLL_ENR */
    volatile uint32_t  bypass;             /* ALT_CLKMGR_PERPLL_BYPASS */
    volatile uint32_t  bypasss;            /* ALT_CLKMGR_PERPLL_BYPASSS */
    volatile uint32_t  bypassr;            /* ALT_CLKMGR_PERPLL_BYPASSR */
    volatile uint32_t  cntr2clk;           /* ALT_CLKMGR_PERPLL_CNTR2CLK */
    volatile uint32_t  cntr3clk;           /* ALT_CLKMGR_PERPLL_CNTR3CLK */
    volatile uint32_t  cntr4clk;           /* ALT_CLKMGR_PERPLL_CNTR4CLK */
    volatile uint32_t  cntr5clk;           /* ALT_CLKMGR_PERPLL_CNTR5CLK */
    volatile uint32_t  cntr6clk;           /* ALT_CLKMGR_PERPLL_CNTR6CLK */
    volatile uint32_t  cntr7clk;           /* ALT_CLKMGR_PERPLL_CNTR7CLK */
    volatile uint32_t  cntr8clk;           /* ALT_CLKMGR_PERPLL_CNTR8CLK */
    volatile uint32_t  cntr9clk;           /* ALT_CLKMGR_PERPLL_CNTR9CLK */
    volatile uint32_t  emacctl;            /* ALT_CLKMGR_PERPLL_EMACCTL */
    volatile uint32_t  gpiodiv;            /* ALT_CLKMGR_PERPLL_GPIODIV */
    volatile uint32_t  pllglob;            /* ALT_CLKMGR_PERPLL_PLLGLOB */
    volatile uint32_t  fdbck;              /* ALT_CLKMGR_PERPLL_FDBCK */
    volatile uint32_t  mem;                /* ALT_CLKMGR_PERPLL_MEM */
    volatile uint32_t  memstat;            /* ALT_CLKMGR_PERPLL_MEMSTAT */
    volatile uint32_t  pllc0;              /* ALT_CLKMGR_PERPLL_PLLC0 */
    volatile uint32_t  pllc1;              /* ALT_CLKMGR_PERPLL_PLLC1 */
    volatile uint32_t  vcocalib;           /* ALT_CLKMGR_PERPLL_VCOCALIB */
    volatile uint32_t  _pad_0x5c_0x80[9];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR_PERPLL. */
typedef struct ALT_CLKMGR_PERPLL_raw_s  ALT_CLKMGR_PERPLL_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_CLKMGR_PERPLL_H__ */

