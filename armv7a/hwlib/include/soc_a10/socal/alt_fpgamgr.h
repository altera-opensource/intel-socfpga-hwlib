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

/* Altera - ALT_FPGAMGR */

#ifndef __ALT_SOCAL_FPGAMGR_H__
#define __ALT_SOCAL_FPGAMGR_H__

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
 * Component : ALT_FPGAMGR
 * 
 */
/*
 * Register : DCLK Count Register - dclkcnt
 * 
 * Used to give software control in enabling DCLK at any time.
 * 
 * SW will need control of the DCLK in specific configuration and partial
 * reconfiguration initialization steps to send spurious DCLKs required by the CB.
 * SW takes ownership for DCLK during normal configuration, partial
 * reconfiguration, error scenerio handshakes including SEU CRC error during
 * partial reconfiguration, SW early abort of partial reconfiguration, and
 * initializatin phase DCLK driving.
 * 
 * During initialization phase, a configuration image loaded into the FPGA can
 * request that DCLK be used as the initialization phase clock instead of the
 * default internal oscillator or optionally the CLKUSR pin. In the case that DCLK
 * is requested, the DCLKCNT register is used by software to control DCLK during
 * the initialization phase.
 * 
 * Software should poll the DCLKSTAT.DCNTDONE write one to clear register to be set
 * when the correct number of DCLKs have completed.  Software should clear
 * DCLKSTAT.DCNTDONE before writing to the DCLKCNT register again.
 * 
 * This field only affects the FPGA if CTRL.EN is 1.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Count      
 * 
 */
/*
 * Field : Count - cnt
 * 
 * Controls DCLK counter.
 * 
 * Software writes a non-zero value into CNT and the FPGA Manager generates the
 * specified number of DCLK pulses and decrements COUNT.  This register will read
 * back the original value written by software.
 * 
 * Software can write CNT at any time.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_DCLKCNT_CNT register field. */
#define ALT_FPGAMGR_DCLKCNT_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_DCLKCNT_CNT register field. */
#define ALT_FPGAMGR_DCLKCNT_CNT_MSB        31
/* The width in bits of the ALT_FPGAMGR_DCLKCNT_CNT register field. */
#define ALT_FPGAMGR_DCLKCNT_CNT_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_DCLKCNT_CNT register field value. */
#define ALT_FPGAMGR_DCLKCNT_CNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_DCLKCNT_CNT register field value. */
#define ALT_FPGAMGR_DCLKCNT_CNT_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_DCLKCNT_CNT register field. */
#define ALT_FPGAMGR_DCLKCNT_CNT_RESET      0x0
/* Extracts the ALT_FPGAMGR_DCLKCNT_CNT field value from a register. */
#define ALT_FPGAMGR_DCLKCNT_CNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_DCLKCNT_CNT register field value suitable for setting the register. */
#define ALT_FPGAMGR_DCLKCNT_CNT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_DCLKCNT.
 */
struct ALT_FPGAMGR_DCLKCNT_s
{
    uint32_t  cnt : 32;  /* Count */
};

/* The typedef declaration for register ALT_FPGAMGR_DCLKCNT. */
typedef volatile struct ALT_FPGAMGR_DCLKCNT_s  ALT_FPGAMGR_DCLKCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_DCLKCNT register. */
#define ALT_FPGAMGR_DCLKCNT_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_DCLKCNT register from the beginning of the component. */
#define ALT_FPGAMGR_DCLKCNT_OFST        0x8

/*
 * Register : DCLK Status Register - dclkstat
 * 
 * This write one to clear register indicates that the DCLKCNT has counted down to
 * zero.  The DCLKCNT is used by software to drive spurious DCLKs to the FPGA.
 * Software will poll this bit after writing DCLKCNT to know when all of the DCLKs
 * have been sent.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description    
 * :-------|:-------|:------|:----------------
 *  [0]    | RW     | 0x0   | DCLK Count Done
 *  [31:1] | ???    | 0x0   | *UNDEFINED*    
 * 
 */
/*
 * Field : DCLK Count Done - dcntdone
 * 
 * This bit is write one to clear.   This bit gets set after the DCLKCNT has
 * counted down to zero (transition from 1 to 0).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                    
 * :----------------------------------------|:------|:--------------------------------
 *  ALT_FPGAMGR_DCLKSTAT_DCNTDONE_E_NOTDONE | 0x0   | DCLKCNT is still counting down.
 *  ALT_FPGAMGR_DCLKSTAT_DCNTDONE_E_DONE    | 0x1   | DCLKCNT is done counting down. 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_DCLKSTAT_DCNTDONE
 * 
 * DCLKCNT is still counting down.
 */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_E_NOTDONE 0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_DCLKSTAT_DCNTDONE
 * 
 * DCLKCNT is done counting down.
 */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_E_DONE    0x1

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_DCLKSTAT_DCNTDONE register field. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_DCLKSTAT_DCNTDONE register field. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_MSB        0
/* The width in bits of the ALT_FPGAMGR_DCLKSTAT_DCNTDONE register field. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_DCLKSTAT_DCNTDONE register field value. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_DCLKSTAT_DCNTDONE register field value. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_DCLKSTAT_DCNTDONE register field. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_RESET      0x0
/* Extracts the ALT_FPGAMGR_DCLKSTAT_DCNTDONE field value from a register. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_DCLKSTAT_DCNTDONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_DCLKSTAT_DCNTDONE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_DCLKSTAT.
 */
struct ALT_FPGAMGR_DCLKSTAT_s
{
    uint32_t  dcntdone :  1;  /* DCLK Count Done */
    uint32_t           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_DCLKSTAT. */
typedef volatile struct ALT_FPGAMGR_DCLKSTAT_s  ALT_FPGAMGR_DCLKSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_DCLKSTAT register. */
#define ALT_FPGAMGR_DCLKSTAT_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_DCLKSTAT register from the beginning of the component. */
#define ALT_FPGAMGR_DCLKSTAT_OFST        0xc

/*
 * Register : General-Purpose Output Register - gpo
 * 
 * Provides a low-latency, low-performance, and simple way to drive general-purpose
 * signals to the FPGA fabric.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * Drives s2f_gp[31:0] with specified value. When read, returns the current value
 * being driven to the FPGA fabric.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_GPO_VALUE register field. */
#define ALT_FPGAMGR_GPO_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_GPO_VALUE register field. */
#define ALT_FPGAMGR_GPO_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_GPO_VALUE register field. */
#define ALT_FPGAMGR_GPO_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_GPO_VALUE register field value. */
#define ALT_FPGAMGR_GPO_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_GPO_VALUE register field value. */
#define ALT_FPGAMGR_GPO_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_GPO_VALUE register field. */
#define ALT_FPGAMGR_GPO_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_GPO_VALUE field value from a register. */
#define ALT_FPGAMGR_GPO_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_GPO_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_GPO_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_GPO.
 */
struct ALT_FPGAMGR_GPO_s
{
    uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_GPO. */
typedef volatile struct ALT_FPGAMGR_GPO_s  ALT_FPGAMGR_GPO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_GPO register. */
#define ALT_FPGAMGR_GPO_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_GPO register from the beginning of the component. */
#define ALT_FPGAMGR_GPO_OFST        0x10

/*
 * Register : General-Purpose Input Register - gpi
 * 
 * Provides a low-latency, low-performance, and simple way to read general-purpose
 * signals driven from the FPGA fabric.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | R      | 0x0   | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * The value being driven from the FPGA fabric on f2s_gp[31:0]. If the FPGA is not
 * in User Mode, the value of this field is undefined.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_GPI_VALUE register field. */
#define ALT_FPGAMGR_GPI_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_GPI_VALUE register field. */
#define ALT_FPGAMGR_GPI_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_GPI_VALUE register field. */
#define ALT_FPGAMGR_GPI_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_GPI_VALUE register field value. */
#define ALT_FPGAMGR_GPI_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_GPI_VALUE register field value. */
#define ALT_FPGAMGR_GPI_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_GPI_VALUE register field. */
#define ALT_FPGAMGR_GPI_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_GPI_VALUE field value from a register. */
#define ALT_FPGAMGR_GPI_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_GPI_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_GPI_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_GPI.
 */
struct ALT_FPGAMGR_GPI_s
{
    const uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_GPI. */
typedef volatile struct ALT_FPGAMGR_GPI_s  ALT_FPGAMGR_GPI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_GPI register. */
#define ALT_FPGAMGR_GPI_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_GPI register from the beginning of the component. */
#define ALT_FPGAMGR_GPI_OFST        0x14

/*
 * Register : Miscellaneous Input Register - misci
 * 
 * Provides a low-latency, low-performance, and simple way to read specific
 * handshaking signals driven from the FPGA fabric.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description              
 * :-------|:-------|:--------|:--------------------------
 *  [0]    | R      | Unknown | Boot From FPGA on Failure
 *  [1]    | R      | Unknown | Boot From FPGA Ready     
 *  [31:2] | ???    | 0x0     | *UNDEFINED*              
 * 
 */
/*
 * Field : Boot From FPGA on Failure - bootFPGAfail
 * 
 * The value of the f2s_boot_from_fpga_on_failure signal from the FPGA fabric. If
 * the FPGA is not in User Mode, the value of this field is undefined.
 * 
 * 1 = Boot ROM will boot from FPGA if boot from normal boot device fails.
 * 
 * 0 = Boot ROM will not boot from FPGA if boot from normal boot device fails.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_MISCI_BOOTFPGAFAIL register field. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_MISCI_BOOTFPGAFAIL register field. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_MSB        0
/* The width in bits of the ALT_FPGAMGR_MISCI_BOOTFPGAFAIL register field. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_MISCI_BOOTFPGAFAIL register field value. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_MISCI_BOOTFPGAFAIL register field value. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_MISCI_BOOTFPGAFAIL register field is UNKNOWN. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_RESET      0x0
/* Extracts the ALT_FPGAMGR_MISCI_BOOTFPGAFAIL field value from a register. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_MISCI_BOOTFPGAFAIL register field value suitable for setting the register. */
#define ALT_FPGAMGR_MISCI_BOOTFPGAFAIL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Boot From FPGA Ready - bootFPGArdy
 * 
 * The value of the f2s_boot_from_fpga_ready signal from the FPGA fabric. If the
 * FPGA is not in User Mode, the value of this field is undefined.
 * 
 * 1 = FPGA fabric is ready to accept AXI master requests from the HPS2FPGA bridge.
 * 
 * 0 = FPGA fabric is not ready (probably still processing a reset).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_MISCI_BOOTFPGARDY register field. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_MISCI_BOOTFPGARDY register field. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_MSB        1
/* The width in bits of the ALT_FPGAMGR_MISCI_BOOTFPGARDY register field. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_MISCI_BOOTFPGARDY register field value. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_MISCI_BOOTFPGARDY register field value. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_MISCI_BOOTFPGARDY register field is UNKNOWN. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_RESET      0x0
/* Extracts the ALT_FPGAMGR_MISCI_BOOTFPGARDY field value from a register. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_MISCI_BOOTFPGARDY register field value suitable for setting the register. */
#define ALT_FPGAMGR_MISCI_BOOTFPGARDY_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_MISCI.
 */
struct ALT_FPGAMGR_MISCI_s
{
    const uint32_t  bootFPGAfail :  1;  /* Boot From FPGA on Failure */
    const uint32_t  bootFPGArdy  :  1;  /* Boot From FPGA Ready */
    uint32_t                     : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_MISCI. */
typedef volatile struct ALT_FPGAMGR_MISCI_s  ALT_FPGAMGR_MISCI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_MISCI register. */
#define ALT_FPGAMGR_MISCI_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_MISCI register from the beginning of the component. */
#define ALT_FPGAMGR_MISCI_OFST        0x18

/*
 * Register : Extracted EMR register content - emr_data0
 * 
 * bits [31:0] of EMR register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | R      | 0x0   | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * EMR register bits
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_DATA0_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_DATA0_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_EMR_DATA0_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_EMR_DATA0_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_EMR_DATA0_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_EMR_DATA0_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_DATA0_VALUE field value from a register. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_EMR_DATA0_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_DATA0_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_DATA0.
 */
struct ALT_FPGAMGR_EMR_DATA0_s
{
    const uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_DATA0. */
typedef volatile struct ALT_FPGAMGR_EMR_DATA0_s  ALT_FPGAMGR_EMR_DATA0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_DATA0 register. */
#define ALT_FPGAMGR_EMR_DATA0_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_EMR_DATA0 register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_DATA0_OFST        0x30

/*
 * Register : Extracted EMR register content - emr_data1
 * 
 * bits [63:32] of EMR register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | R      | 0x0   | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * EMR register bits
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_DATA1_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_DATA1_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_EMR_DATA1_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_EMR_DATA1_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_EMR_DATA1_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_EMR_DATA1_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_DATA1_VALUE field value from a register. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_EMR_DATA1_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_DATA1_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_DATA1.
 */
struct ALT_FPGAMGR_EMR_DATA1_s
{
    const uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_DATA1. */
typedef volatile struct ALT_FPGAMGR_EMR_DATA1_s  ALT_FPGAMGR_EMR_DATA1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_DATA1 register. */
#define ALT_FPGAMGR_EMR_DATA1_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_EMR_DATA1 register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_DATA1_OFST        0x34

/*
 * Register : emr_data2
 * 
 * bits [95:64] of EMR register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description
 * :-------|:-------|:--------|:------------
 *  [31:0] | R      | Unknown | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * EMR register bits
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_DATA2_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_DATA2_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_EMR_DATA2_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_EMR_DATA2_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_EMR_DATA2_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_EMR_DATA2_VALUE register field is UNKNOWN. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_DATA2_VALUE field value from a register. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_EMR_DATA2_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_DATA2_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_DATA2.
 */
struct ALT_FPGAMGR_EMR_DATA2_s
{
    const uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_DATA2. */
typedef volatile struct ALT_FPGAMGR_EMR_DATA2_s  ALT_FPGAMGR_EMR_DATA2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_DATA2 register. */
#define ALT_FPGAMGR_EMR_DATA2_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_EMR_DATA2 register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_DATA2_OFST        0x38

/*
 * Register : emr_data3
 * 
 * bits [119:96] of EMR register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description
 * :-------|:-------|:--------|:------------
 *  [31:0] | R      | Unknown | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * EMR register bits
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_DATA3_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_DATA3_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_EMR_DATA3_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_EMR_DATA3_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_EMR_DATA3_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_EMR_DATA3_VALUE register field is UNKNOWN. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_DATA3_VALUE field value from a register. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_EMR_DATA3_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_DATA3_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_DATA3.
 */
struct ALT_FPGAMGR_EMR_DATA3_s
{
    const uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_DATA3. */
typedef volatile struct ALT_FPGAMGR_EMR_DATA3_s  ALT_FPGAMGR_EMR_DATA3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_DATA3 register. */
#define ALT_FPGAMGR_EMR_DATA3_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_EMR_DATA3 register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_DATA3_OFST        0x3c

/*
 * Register : emr_data4
 * 
 * bits [159:128] of EMR register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description
 * :-------|:-------|:--------|:------------
 *  [31:0] | R      | Unknown | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * EMR register bits
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_DATA4_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_DATA4_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_EMR_DATA4_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_EMR_DATA4_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_EMR_DATA4_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_EMR_DATA4_VALUE register field is UNKNOWN. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_DATA4_VALUE field value from a register. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_EMR_DATA4_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_DATA4_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_DATA4.
 */
struct ALT_FPGAMGR_EMR_DATA4_s
{
    const uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_DATA4. */
typedef volatile struct ALT_FPGAMGR_EMR_DATA4_s  ALT_FPGAMGR_EMR_DATA4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_DATA4 register. */
#define ALT_FPGAMGR_EMR_DATA4_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_EMR_DATA4 register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_DATA4_OFST        0x40

/*
 * Register : emr_data5
 * 
 * bits [171:160] of EMR register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description
 * :-------|:-------|:--------|:------------
 *  [31:0] | R      | Unknown | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * EMR register bits
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_DATA5_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_DATA5_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_MSB        31
/* The width in bits of the ALT_FPGAMGR_EMR_DATA5_VALUE register field. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_WIDTH      32
/* The mask used to set the ALT_FPGAMGR_EMR_DATA5_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_FPGAMGR_EMR_DATA5_VALUE register field value. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_FPGAMGR_EMR_DATA5_VALUE register field is UNKNOWN. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_DATA5_VALUE field value from a register. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_FPGAMGR_EMR_DATA5_VALUE register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_DATA5_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_DATA5.
 */
struct ALT_FPGAMGR_EMR_DATA5_s
{
    const uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_DATA5. */
typedef volatile struct ALT_FPGAMGR_EMR_DATA5_s  ALT_FPGAMGR_EMR_DATA5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_DATA5 register. */
#define ALT_FPGAMGR_EMR_DATA5_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_EMR_DATA5 register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_DATA5_OFST        0x44

/*
 * Register : emr_valid
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [0]    | RW     | 0x0   | ALT_FPGAMGR_EMR_VALID_VLD
 *  [31:1] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : vld
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_VALID_VLD register field. */
#define ALT_FPGAMGR_EMR_VALID_VLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_VALID_VLD register field. */
#define ALT_FPGAMGR_EMR_VALID_VLD_MSB        0
/* The width in bits of the ALT_FPGAMGR_EMR_VALID_VLD register field. */
#define ALT_FPGAMGR_EMR_VALID_VLD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_EMR_VALID_VLD register field value. */
#define ALT_FPGAMGR_EMR_VALID_VLD_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_EMR_VALID_VLD register field value. */
#define ALT_FPGAMGR_EMR_VALID_VLD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_EMR_VALID_VLD register field. */
#define ALT_FPGAMGR_EMR_VALID_VLD_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_VALID_VLD field value from a register. */
#define ALT_FPGAMGR_EMR_VALID_VLD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_EMR_VALID_VLD register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_VALID_VLD_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_VALID.
 */
struct ALT_FPGAMGR_EMR_VALID_s
{
    uint32_t  vld :  1;  /* ALT_FPGAMGR_EMR_VALID_VLD */
    uint32_t      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_VALID. */
typedef volatile struct ALT_FPGAMGR_EMR_VALID_s  ALT_FPGAMGR_EMR_VALID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_VALID register. */
#define ALT_FPGAMGR_EMR_VALID_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_EMR_VALID register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_VALID_OFST        0x48

/*
 * Register : emr_en
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description
 * :-------|:-------|:-----------|:------------
 *  [0]    | RW     | 0x0        | EMR_EN     
 *  [31:1] | ???    | 0x3b800000 | *UNDEFINED*
 * 
 */
/*
 * Field : EMR_EN - en
 * 
 * Enable HPS EMR extraction from CSS.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_EMR_EN_EN register field. */
#define ALT_FPGAMGR_EMR_EN_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_EMR_EN_EN register field. */
#define ALT_FPGAMGR_EMR_EN_EN_MSB        0
/* The width in bits of the ALT_FPGAMGR_EMR_EN_EN register field. */
#define ALT_FPGAMGR_EMR_EN_EN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_EMR_EN_EN register field value. */
#define ALT_FPGAMGR_EMR_EN_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_EMR_EN_EN register field value. */
#define ALT_FPGAMGR_EMR_EN_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_EMR_EN_EN register field. */
#define ALT_FPGAMGR_EMR_EN_EN_RESET      0x0
/* Extracts the ALT_FPGAMGR_EMR_EN_EN field value from a register. */
#define ALT_FPGAMGR_EMR_EN_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_EMR_EN_EN register field value suitable for setting the register. */
#define ALT_FPGAMGR_EMR_EN_EN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_EMR_EN.
 */
struct ALT_FPGAMGR_EMR_EN_s
{
    uint32_t  en :  1;  /* EMR_EN */
    uint32_t     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_EMR_EN. */
typedef volatile struct ALT_FPGAMGR_EMR_EN_s  ALT_FPGAMGR_EMR_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_EMR_EN register. */
#define ALT_FPGAMGR_EMR_EN_RESET       0x77000000
/* The byte offset of the ALT_FPGAMGR_EMR_EN register from the beginning of the component. */
#define ALT_FPGAMGR_EMR_EN_OFST        0x4c

/*
 * Register : Scan-Chain Enable Register - jtag_config
 * 
 * This register is used to configure the JTAG master interface.
 * 
 * It is recommended that software write this register before initiating a
 * transfer.
 * 
 * If the software writes to this register while an active session is in progress
 * (as indicated by jtag_status.SessionStatus), the expected behavior is
 * "undefined".
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [0]     | RW     | 0x0   | Jtag Host Enable           
 *  [1]     | RW     | 0x0   | Jtag Port Enable           
 *  [2]     | RW     | 0x0   | Loop Back Enable           
 *  [3]     | ???    | 0x0   | *UNDEFINED*                
 *  [4]     | RW     | 0x0   | ALT_FPGAMGR_JTAG_CFG_TRSTEN
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                
 *  [15:8]  | RW     | 0x14  | TCK Divide Ratio           
 *  [31:16] | RW     | 0x0   | Number of TX bits          
 * 
 */
/*
 * Field : Jtag Host Enable - JtagHostEn
 * 
 * This bit field drives the enable signal to the FPGA CSS. Please note that this
 * enable should be driven long before you start any JTAG transactions.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description       
 * :--------------------------------------|:------|:-------------------
 *  ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_E_DIS | 0x0   | Disable scan-chain
 *  ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_E_EN  | 0x1   | Enable scan-chain 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN
 * 
 * Disable scan-chain
 */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_E_DIS   0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN
 * 
 * Enable scan-chain
 */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_MSB        0
/* The width in bits of the ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN field value from a register. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGHOSTEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Jtag Port Enable - jtagPortEn
 * 
 * This bit field gates off TDI/TMS/TCK driven to the FPGA CSS interface. This
 * allows the software to take over JTAG but keep them tied low. If this bit is 0
 * the internal core logic will still be active and all the status will be updated
 * as in regular operation.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description       
 * :--------------------------------------|:------|:-------------------
 *  ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_E_DIS | 0x0   | Disable scan-chain
 *  ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_E_EN  | 0x1   | Enable scan-chain 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN
 * 
 * Disable scan-chain
 */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_E_DIS   0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN
 * 
 * Enable scan-chain
 */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_MSB        1
/* The width in bits of the ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN field value from a register. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_CFG_JTAGPORTEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Loop Back Enable - loopBackEn
 * 
 * Enables the internal loopback mode. A typical scenario will be to set
 * JtagHostEn=0, JtagPortEn=0, and then initiate transmits by software writes to
 * TXFifo. All transfers should receive back on RxFifo. Also this should not affect
 * anything external, since the Jtag ports will be gated off.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description       
 * :--------------------------------------|:------|:-------------------
 *  ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_E_DIS | 0x0   | Disable scan-chain
 *  ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_E_EN  | 0x1   | Enable scan-chain 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN
 * 
 * Disable scan-chain
 */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_E_DIS   0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN
 * 
 * Enable scan-chain
 */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_MSB        2
/* The width in bits of the ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN field value from a register. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_CFG_LOOPBACKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : trstEn
 * 
 * Set this bit and then writing at least 1 data in jtag_data_w will cause a JTAG
 * reset to happen. Please note that writing TRSTEN while a data transmission is
 * undergoing could cause undesired effects, so it is recommended that software
 * poll the SESSIONSTATUS bit to make sure there is no existing transfers before
 * writing TRSTEN. Software should manually write 0 to this bit after the
 * completion of the reset and after the SESSIONSTATUS is inactive.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_CFG_TRSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_CFG_TRSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_MSB        4
/* The width in bits of the ALT_FPGAMGR_JTAG_CFG_TRSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_CFG_TRSTEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_FPGAMGR_JTAG_CFG_TRSTEN register field value. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_FPGAMGR_JTAG_CFG_TRSTEN register field. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_CFG_TRSTEN field value from a register. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_FPGAMGR_JTAG_CFG_TRSTEN register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_CFG_TRSTEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : TCK Divide Ratio - tckRatio
 * 
 * Ratio of TCK division. The FPGA manager clock is 100MHz.
 * 
 * value of 4 provides a 25MHz TCK
 * 
 * value of 20 (0x14) provides a 5MHz TCK.
 * 
 * Maximum supported TCK frequency is 25MHz.
 * 
 * So writing a value less than 4 to this field will cause unexpected behavior.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_CFG_TCKRATIO register field. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_CFG_TCKRATIO register field. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_MSB        15
/* The width in bits of the ALT_FPGAMGR_JTAG_CFG_TCKRATIO register field. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_WIDTH      8
/* The mask used to set the ALT_FPGAMGR_JTAG_CFG_TCKRATIO register field value. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_FPGAMGR_JTAG_CFG_TCKRATIO register field value. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_CLR_MSK    0xffff00ff
/* The reset value of the ALT_FPGAMGR_JTAG_CFG_TCKRATIO register field. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_RESET      0x14
/* Extracts the ALT_FPGAMGR_JTAG_CFG_TCKRATIO field value from a register. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_FPGAMGR_JTAG_CFG_TCKRATIO register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_CFG_TCKRATIO_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : Number of TX bits - txSize
 * 
 * Defines the number of bits to be transmitted. Once the software kicks of the
 * transfer via Start_Transfer bits, the hardware will stop the transfer, when
 * either of the below conditions are reached.
 * 
 * a)      Completed a transfer of programmed Number of TX Bits +1.
 * 
 * b)      TxFifo became empty (under-run of TxFifo).
 * 
 * c)      A Stop Transfer request received from software.
 * 
 * So for a successful transfer of fixed number of bits, software has to make sure
 * continuous flow of data.
 * 
 * The exact number of bits to be  transferred in the current session is 1+ the
 * value in this register field.
 * 
 * For example
 * 
 * 0 -> 1 bit to be transmitted once start session is triggered.
 * 
 * 1-> 2 bits to be transmitted.once start session is triggered.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_CFG_TXSIZE register field. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_CFG_TXSIZE register field. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_MSB        31
/* The width in bits of the ALT_FPGAMGR_JTAG_CFG_TXSIZE register field. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_WIDTH      16
/* The mask used to set the ALT_FPGAMGR_JTAG_CFG_TXSIZE register field value. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_SET_MSK    0xffff0000
/* The mask used to clear the ALT_FPGAMGR_JTAG_CFG_TXSIZE register field value. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_CLR_MSK    0x0000ffff
/* The reset value of the ALT_FPGAMGR_JTAG_CFG_TXSIZE register field. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_CFG_TXSIZE field value from a register. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_FPGAMGR_JTAG_CFG_TXSIZE register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_CFG_TXSIZE_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_JTAG_CFG.
 */
struct ALT_FPGAMGR_JTAG_CFG_s
{
    uint32_t  JtagHostEn :  1;  /* Jtag Host Enable */
    uint32_t  jtagPortEn :  1;  /* Jtag Port Enable */
    uint32_t  loopBackEn :  1;  /* Loop Back Enable */
    uint32_t             :  1;  /* *UNDEFINED* */
    uint32_t  trstEn     :  1;  /* ALT_FPGAMGR_JTAG_CFG_TRSTEN */
    uint32_t             :  3;  /* *UNDEFINED* */
    uint32_t  tckRatio   :  8;  /* TCK Divide Ratio */
    uint32_t  txSize     : 16;  /* Number of TX bits */
};

/* The typedef declaration for register ALT_FPGAMGR_JTAG_CFG. */
typedef volatile struct ALT_FPGAMGR_JTAG_CFG_s  ALT_FPGAMGR_JTAG_CFG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_JTAG_CFG register. */
#define ALT_FPGAMGR_JTAG_CFG_RESET       0x00001400
/* The byte offset of the ALT_FPGAMGR_JTAG_CFG register from the beginning of the component. */
#define ALT_FPGAMGR_JTAG_CFG_OFST        0x50

/*
 * Register : Control/Status Word Register - jtag_status
 * 
 * status of the currently ongoing JTAG transmit or receive
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                   
 * :--------|:-------|:--------|:-------------------------------
 *  [3:0]   | RW     | 0x0     | Current Tx Fifo level         
 *  [7:4]   | RW     | 0x0     | Current RX FIFO Level         
 *  [8]     | RW     | 0x1     | Tx Fifo Empty Status          
 *  [9]     | RW     | 0x0     | Tx Fifo Full Status           
 *  [10]    | RW     | 0x1     | Rx Fifo Empty Status          
 *  [11]    | RW     | 0x0     | Rx Fifo Full Status           
 *  [14:12] | ???    | 0x0     | *UNDEFINED*                   
 *  [15]    | RW     | 0x0     | Valid Ongoing Transfer Session
 *  [31:16] | RW     | Unknown | Number of bits Transmitted    
 * 
 */
/*
 * Field : Current Tx Fifo level - txFifoLevel
 * 
 * Number of words remaining in Tx Fifo.
 * 
 * Maximum value is 0x8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_MSB        3
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_WIDTH      4
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOLEVEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Current RX FIFO Level - rxFifoLevel
 * 
 * Number of Words remaining in the Rx Fifo.
 * 
 * Maximum value is 0x8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_MSB        7
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_WIDTH      4
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_SET_MSK    0x000000f0
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_CLR_MSK    0xffffff0f
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_GET(value) (((value) & 0x000000f0) >> 4)
/* Produces a ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOLEVEL_SET(value) (((value) << 4) & 0x000000f0)

/*
 * Field : Tx Fifo Empty Status - txFifoEmpty
 * 
 * Read
 * 
 * 1 -> Tx Fifo Empty
 * 
 * 0 -> Tx Fifo NOT Empty
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_MSB        8
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_RESET      0x1
/* Extracts the ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOEMPTY_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Tx Fifo Full Status - txFifoFull
 * 
 * Read
 * 
 * 1 -> Tx Fifo Full
 * 
 * 0 -> Tx Fifo NOT full
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_MSB        9
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_SET_MSK    0x00000200
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_CLR_MSK    0xfffffdff
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_TXFIFOFULL_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Rx Fifo Empty Status - rxFifoEmpty
 * 
 * Read
 * 
 * 1 -> Rx Fifo Empty
 * 
 * 0 -> Rx Fifo NOT Empty
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_MSB        10
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY register field value. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_SET_MSK    0x00000400
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY register field value. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_CLR_MSK    0xfffffbff
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_RESET      0x1
/* Extracts the ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOEMPTY_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Rx Fifo Full Status - rxFifoFull
 * 
 * Read
 * 
 * 1 -> Rx Fifo Full
 * 
 * 0 -> Rx Fifo NOT full
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_MSB        11
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_SET_MSK    0x00000800
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL register field value. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL register field. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_RXFIFOFULL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : Valid Ongoing Transfer Session - SessionStatus
 * 
 * A read of 1 indicates that there is an ongoing transfer session.
 * 
 * A read of 0 indicates that there is no ongoing transfer session.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description       
 * :----------------------------------------|:------|:-------------------
 *  ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_E_DIS | 0x0   | Disable scan-chain
 *  ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_E_EN  | 0x1   | Enable scan-chain 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT
 * 
 * Disable scan-chain
 */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_E_DIS 0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT
 * 
 * Enable scan-chain
 */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_E_EN  0x1

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT register field. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT register field. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_MSB        15
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT register field. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT register field value. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_SET_MSK    0x00008000
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT register field value. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_CLR_MSK    0xffff7fff
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT register field. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_SESSIONSTAT_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : Number of bits Transmitted - txDoneSize
 * 
 * Total Number of Successful bits transferred in the current session.
 * 
 * The exact number of bits transferred in the current session is 1+ the value in
 * this register.
 * 
 * For example
 * 
 * 0 -> 1 bit completed transmit or in the process of transmitting.
 * 
 * 1-> 2 bits completed transmit or in the process of transmitting.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_STAT_TXDONESIZE register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_STAT_TXDONESIZE register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_MSB        31
/* The width in bits of the ALT_FPGAMGR_JTAG_STAT_TXDONESIZE register field. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_WIDTH      16
/* The mask used to set the ALT_FPGAMGR_JTAG_STAT_TXDONESIZE register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_SET_MSK    0xffff0000
/* The mask used to clear the ALT_FPGAMGR_JTAG_STAT_TXDONESIZE register field value. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_CLR_MSK    0x0000ffff
/* The reset value of the ALT_FPGAMGR_JTAG_STAT_TXDONESIZE register field is UNKNOWN. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_STAT_TXDONESIZE field value from a register. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_FPGAMGR_JTAG_STAT_TXDONESIZE register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_STAT_TXDONESIZE_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_JTAG_STAT.
 */
struct ALT_FPGAMGR_JTAG_STAT_s
{
    uint32_t  txFifoLevel   :  4;  /* Current Tx Fifo level */
    uint32_t  rxFifoLevel   :  4;  /* Current RX FIFO Level */
    uint32_t  txFifoEmpty   :  1;  /* Tx Fifo Empty Status */
    uint32_t  txFifoFull    :  1;  /* Tx Fifo Full Status */
    uint32_t  rxFifoEmpty   :  1;  /* Rx Fifo Empty Status */
    uint32_t  rxFifoFull    :  1;  /* Rx Fifo Full Status */
    uint32_t                :  3;  /* *UNDEFINED* */
    uint32_t  SessionStatus :  1;  /* Valid Ongoing Transfer Session */
    uint32_t  txDoneSize    : 16;  /* Number of bits Transmitted */
};

/* The typedef declaration for register ALT_FPGAMGR_JTAG_STAT. */
typedef volatile struct ALT_FPGAMGR_JTAG_STAT_s  ALT_FPGAMGR_JTAG_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_JTAG_STAT register. */
#define ALT_FPGAMGR_JTAG_STAT_RESET       0x00000500
/* The byte offset of the ALT_FPGAMGR_JTAG_STAT register from the beginning of the component. */
#define ALT_FPGAMGR_JTAG_STAT_OFST        0x54

/*
 * Register : TCK Divide ratio - jtag_kick
 * 
 * Jtag Master Control Triggers. Each of this bit field triggers a specific
 * hardware operation.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                   
 * :-------|:-------|:--------|:-------------------------------
 *  [0]    | RW     | 0x0     | Kick off a new Session        
 *  [1]    | RW     | 0x0     | force stop an ongoing session.
 *  [2]    | RW     | 0x0     | Clear TX FIFO                 
 *  [3]    | RW     | 0x0     | Clear RX FIFO                 
 *  [31:4] | ???    | Unknown | *UNDEFINED*                   
 * 
 */
/*
 * Field : Kick off a new Session - startSession
 * 
 * A write 1 to this bit field will kick off a session of TX and RX. Please note
 * that there should be alteast 1 word available in the Tx Fifo for this kick off
 * to be successful. The status of this kick off can be read from status register
 * SessionStatus field.
 * 
 * stopSession has priority over startSession.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_KICK_STARTSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_KICK_STARTSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_MSB        0
/* The width in bits of the ALT_FPGAMGR_JTAG_KICK_STARTSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_KICK_STARTSESSION register field value. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_JTAG_KICK_STARTSESSION register field value. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_JTAG_KICK_STARTSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_KICK_STARTSESSION field value from a register. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_JTAG_KICK_STARTSESSION register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_KICK_STARTSESSION_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : force stop an ongoing session. - stopSession
 * 
 * A write 1 to this bit field will kick off stop of an ongoing session of TX and
 * RX. Please note that there should be alteast 1 word available in the Tx Fifo for
 * this kick off to be successful. The status of this kick off can be read from
 * status register SessionStatus field.
 * 
 * stopSession has priority over startSession.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_KICK_STOPSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_KICK_STOPSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_MSB        1
/* The width in bits of the ALT_FPGAMGR_JTAG_KICK_STOPSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_KICK_STOPSESSION register field value. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_JTAG_KICK_STOPSESSION register field value. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_JTAG_KICK_STOPSESSION register field. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_KICK_STOPSESSION field value from a register. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_JTAG_KICK_STOPSESSION register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_KICK_STOPSESSION_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Clear TX FIFO - clearTxFifo
 * 
 * A write 1 to this bit field will empty the TxFifo. A read will always return 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_MSB        2
/* The width in bits of the ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO register field value. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_SET_MSK    0x00000004
/* The mask used to clear the ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO register field value. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_CLR_MSK    0xfffffffb
/* The reset value of the ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO field value from a register. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_KICK_CLRTXFIFO_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Clear RX FIFO - clearRxFifo
 * 
 * A write 1 to this bit field will empty the RxFifo. A read will always return 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_MSB        3
/* The width in bits of the ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO register field value. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_SET_MSK    0x00000008
/* The mask used to clear the ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO register field value. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_CLR_MSK    0xfffffff7
/* The reset value of the ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO register field. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO field value from a register. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_KICK_CLRRXFIFO_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_JTAG_KICK.
 */
struct ALT_FPGAMGR_JTAG_KICK_s
{
    uint32_t  startSession :  1;  /* Kick off a new Session */
    uint32_t  stopSession  :  1;  /* force stop an ongoing session. */
    uint32_t  clearTxFifo  :  1;  /* Clear TX FIFO */
    uint32_t  clearRxFifo  :  1;  /* Clear RX FIFO */
    uint32_t               : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_JTAG_KICK. */
typedef volatile struct ALT_FPGAMGR_JTAG_KICK_s  ALT_FPGAMGR_JTAG_KICK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_JTAG_KICK register. */
#define ALT_FPGAMGR_JTAG_KICK_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_JTAG_KICK register from the beginning of the component. */
#define ALT_FPGAMGR_JTAG_KICK_OFST        0x58

/*
 * Register : TX FIFO Write - jtag_data_w
 * 
 * A write to this field initiates a write to the TxFifo with the value provided.
 * Please note that this is always a 32bit write, and lower 16 of these bits will
 * be transferred over TDI and upper 16 of these bits will be transferred over TMS
 * once the transfer is initiated. A write to this fifo when full will just be
 * ignored. Also it is allowed to keep writing this fifo without actually intiating
 * a transfer. A typical scenario where this is applicable is if the software want
 * to keep a fixed number of bits ready for JTAG interface before kicking it off.
 * 
 * Both the fifos are 8 words deep. So you can have up to 128 bits buffered in the
 * FIFOs. If you have more than 128 bits to be transferred, and want continuous
 * transfer software should make sure proper data flow to avoid a Tx-Fifo under-run
 * or Rx-Fifo over-run. A Rx-Fifo over-run will cause silent data loss, and a Tx-
 * Fifo under-run will stop the transfer, and will stop the TCK toggles, till
 * another transfer is initiated by software.
 * 
 * At 5MHz jtag clock 16x100/5 = 320 cycles of FPGA manager clock to transfer 1
 * word of data
 * 
 * At 25Mhz jtag clock 16x100/25 = 64 cycles of FPGA manager clock to transfer 1
 * word of data.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [15:0]  | RW     | 0x0   | TDI  Data  
 *  [31:16] | RW     | 0x0   | TMS Data   
 * 
 */
/*
 * Field : TDI  Data - tdiData
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_DATA_W_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_DATA_W_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_MSB        15
/* The width in bits of the ALT_FPGAMGR_JTAG_DATA_W_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_WIDTH      16
/* The mask used to set the ALT_FPGAMGR_JTAG_DATA_W_TDIDATA register field value. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_FPGAMGR_JTAG_DATA_W_TDIDATA register field value. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_CLR_MSK    0xffff0000
/* The reset value of the ALT_FPGAMGR_JTAG_DATA_W_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_DATA_W_TDIDATA field value from a register. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_FPGAMGR_JTAG_DATA_W_TDIDATA register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_DATA_W_TDIDATA_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : TMS Data - tmsData
 * 
 * Data to be transferred over TMS.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_DATA_W_TMSDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_DATA_W_TMSDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_MSB        31
/* The width in bits of the ALT_FPGAMGR_JTAG_DATA_W_TMSDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_WIDTH      16
/* The mask used to set the ALT_FPGAMGR_JTAG_DATA_W_TMSDATA register field value. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_SET_MSK    0xffff0000
/* The mask used to clear the ALT_FPGAMGR_JTAG_DATA_W_TMSDATA register field value. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_CLR_MSK    0x0000ffff
/* The reset value of the ALT_FPGAMGR_JTAG_DATA_W_TMSDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_DATA_W_TMSDATA field value from a register. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_FPGAMGR_JTAG_DATA_W_TMSDATA register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_DATA_W_TMSDATA_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_JTAG_DATA_W.
 */
struct ALT_FPGAMGR_JTAG_DATA_W_s
{
    uint32_t  tdiData : 16;  /* TDI  Data */
    uint32_t  tmsData : 16;  /* TMS Data */
};

/* The typedef declaration for register ALT_FPGAMGR_JTAG_DATA_W. */
typedef volatile struct ALT_FPGAMGR_JTAG_DATA_W_s  ALT_FPGAMGR_JTAG_DATA_W_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_JTAG_DATA_W register. */
#define ALT_FPGAMGR_JTAG_DATA_W_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_JTAG_DATA_W register from the beginning of the component. */
#define ALT_FPGAMGR_JTAG_DATA_W_OFST        0x60

/*
 * Register : RX FIFO Read - jtag_data_r
 * 
 * A read to this field initiates a read to the RxFifo. Please note that the read
 * always returns a 16 bit value. If the received number of bits are not aligned
 * with 16, lower most n bits should be ignored by software. For example in the
 * case of 6 bits received, rdata[15:10] will contain received bits and rdata[9:0]
 * should be ignored. A read of the fifo while empty is not defined.
 * 
 * Both the fifos are 8 words deep. So you can have up to 128 bits buffered in the
 * FIFOs. If you have more than 128 bits to be transferred, and want continuous
 * transfer software should make sure proper data flow to avoid a Tx-Fifo under-run
 * or Rx-Fifo over-run. A Rx-Fifo over-run will cause silent data loss, and a Tx-
 * Fifo under-run will stop the transfer, and will stop the TCK toggles, till
 * another transfer is initiated by software.
 * 
 * At 5MHz jtag clock 16x100/5 = 320 cycles of FPGA manager clock to transfer 1
 * word of data
 * 
 * At 25Mhz jtag clock 16x100/25 = 64 cycles of FPGA manager clock to transfer 1
 * word of data.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [15:0]  | RW     | 0x0   | TDI  Data                   
 *  [31:16] | RW     | 0x0   | ALT_FPGAMGR_JTAG_DATA_R_RSVD
 * 
 */
/*
 * Field : TDI  Data - tdiData
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_DATA_R_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_DATA_R_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_MSB        15
/* The width in bits of the ALT_FPGAMGR_JTAG_DATA_R_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_WIDTH      16
/* The mask used to set the ALT_FPGAMGR_JTAG_DATA_R_TDIDATA register field value. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_FPGAMGR_JTAG_DATA_R_TDIDATA register field value. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_CLR_MSK    0xffff0000
/* The reset value of the ALT_FPGAMGR_JTAG_DATA_R_TDIDATA register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_DATA_R_TDIDATA field value from a register. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_FPGAMGR_JTAG_DATA_R_TDIDATA register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_DATA_R_TDIDATA_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_JTAG_DATA_R_RSVD register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_JTAG_DATA_R_RSVD register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_MSB        31
/* The width in bits of the ALT_FPGAMGR_JTAG_DATA_R_RSVD register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_WIDTH      16
/* The mask used to set the ALT_FPGAMGR_JTAG_DATA_R_RSVD register field value. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_SET_MSK    0xffff0000
/* The mask used to clear the ALT_FPGAMGR_JTAG_DATA_R_RSVD register field value. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_CLR_MSK    0x0000ffff
/* The reset value of the ALT_FPGAMGR_JTAG_DATA_R_RSVD register field. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_RESET      0x0
/* Extracts the ALT_FPGAMGR_JTAG_DATA_R_RSVD field value from a register. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_FPGAMGR_JTAG_DATA_R_RSVD register field value suitable for setting the register. */
#define ALT_FPGAMGR_JTAG_DATA_R_RSVD_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_JTAG_DATA_R.
 */
struct ALT_FPGAMGR_JTAG_DATA_R_s
{
    uint32_t  tdiData  : 16;  /* TDI  Data */
    uint32_t  Reserved : 16;  /* ALT_FPGAMGR_JTAG_DATA_R_RSVD */
};

/* The typedef declaration for register ALT_FPGAMGR_JTAG_DATA_R. */
typedef volatile struct ALT_FPGAMGR_JTAG_DATA_R_s  ALT_FPGAMGR_JTAG_DATA_R_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_JTAG_DATA_R register. */
#define ALT_FPGAMGR_JTAG_DATA_R_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_JTAG_DATA_R register from the beginning of the component. */
#define ALT_FPGAMGR_JTAG_DATA_R_OFST        0x64

/*
 * Register : imgcfg_ctrl_00
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [0]     | RW     | 0x1   | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG   
 *  [1]     | RW     | 0x1   | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT  
 *  [2]     | RW     | 0x1   | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE
 *  [7:3]   | ???    | 0x0   | *UNDEFINED*                              
 *  [8]     | RW     | 0x1   | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG       
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                              
 *  [16]    | RW     | 0x0   | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE   
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                              
 *  [24]    | RW     | 0x0   | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE 
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : s2f_nenable_nconfig
 * 
 * HPS override Enable for nCONFIG to CSS
 * 
 * 1: override is disabled
 * 
 * 0: override is enabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_MSB        0
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : s2f_nenable_nstatus
 * 
 * HPS override Enable for nSTATUS to PIN
 * 
 * 1: override is disabled
 * 
 * 0: override is enabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_MSB        1
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : s2f_nenable_condone
 * 
 * HPS override Enable for CONF_DONE to PIN
 * 
 * 1: override is disabled
 * 
 * 0: override is enabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_MSB        2
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_SET_MSK    0x00000004
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : s2f_nconfig
 * 
 * This bit has an effect on CSS only if curresponding override is enabled.
 * 
 * 1: Drive nCONFIG input to CSS 1.
 * 
 * 0: Drive nCONFIG input to CSS 0
 * 
 * The nCONFIG input is used to put the FPGA into its reset phase. If the FPGA was
 * configured, its operation stops and it will have to be configured again to start
 * operation.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_MSB        8
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : s2f_nstatus_oe
 * 
 * This bit has an effect on CSS only if curresponding override is enabled.
 * 
 * 1: Drive nSTATUS pin to 0.
 * 
 * 0: Disable nSTATUS pin drive from HPS, and allow default pull-up to take over.
 * 
 * Driving this pin has no effect on CSS once the FPGA is in user mode.
 * 
 * HPS can drive this pin 0 to delay the initialization phase of CSS.
 * 
 * During configuation phase, HPS can drive this pin 0 to end the current
 * configuration and initialize a reconfiguration.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_MSB        16
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_SET_MSK    0x00010000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_CLR_MSK    0xfffeffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : s2f_condone_oe
 * 
 * This bit has an effect on CSS/PIN only if curresponding override is enabled.
 * 
 * 1: Drive CONF_DONE pin to 0.
 * 
 * 0: Disable CONF_DONE pin drive from HPS, and allow default pull-up to take over.
 * 
 * HPS can drive CONF_DONE pin 0 to delay the FPGA from entering user mode.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_MSB        24
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_SET_MSK    0x01000000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_CLR_MSK    0xfeffffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_IMGCFG_CTL_00.
 */
struct ALT_FPGAMGR_IMGCFG_CTL_00_s
{
    uint32_t  s2f_nenable_nconfig :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG */
    uint32_t  s2f_nenable_nstatus :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT */
    uint32_t  s2f_nenable_condone :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE */
    uint32_t                      :  5;  /* *UNDEFINED* */
    uint32_t  s2f_nconfig         :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG */
    uint32_t                      :  7;  /* *UNDEFINED* */
    uint32_t  s2f_nstatus_oe      :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE */
    uint32_t                      :  7;  /* *UNDEFINED* */
    uint32_t  s2f_condone_oe      :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE */
    uint32_t                      :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_IMGCFG_CTL_00. */
typedef volatile struct ALT_FPGAMGR_IMGCFG_CTL_00_s  ALT_FPGAMGR_IMGCFG_CTL_00_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_00 register. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_RESET       0x00000107
/* The byte offset of the ALT_FPGAMGR_IMGCFG_CTL_00 register from the beginning of the component. */
#define ALT_FPGAMGR_IMGCFG_CTL_00_OFST        0x70

/*
 * Register : imgcfg_ctrl_01
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                             
 * :--------|:-------|:------|:-----------------------------------------
 *  [0]     | RW     | 0x1   | ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG   
 *  [15:1]  | ???    | 0x0   | *UNDEFINED*                             
 *  [16]    | RW     | 0x0   | ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                             
 *  [24]    | RW     | 0x1   | ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE       
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : s2f_nenable_config
 * 
 * HPS override Enable for DATA, DCLK, NCE and PR_REQUEST to CSS
 * 
 * 1: override is disabled
 * 
 * 0: override is enabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_MSB        0
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : s2f_pr_request
 * 
 * This bit carries the override value of PR_REQUEST to CSS.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_MSB        16
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_SET_MSK    0x00010000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_CLR_MSK    0xfffeffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : s2f_nce
 * 
 * This bit carries the override value of nCE to CSS.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_MSB        24
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_SET_MSK    0x01000000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_CLR_MSK    0xfeffffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_IMGCFG_CTL_01.
 */
struct ALT_FPGAMGR_IMGCFG_CTL_01_s
{
    uint32_t  s2f_nenable_config :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG */
    uint32_t                     : 15;  /* *UNDEFINED* */
    uint32_t  s2f_pr_request     :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST */
    uint32_t                     :  7;  /* *UNDEFINED* */
    uint32_t  s2f_nce            :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE */
    uint32_t                     :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_IMGCFG_CTL_01. */
typedef volatile struct ALT_FPGAMGR_IMGCFG_CTL_01_s  ALT_FPGAMGR_IMGCFG_CTL_01_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_01 register. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_RESET       0x01000001
/* The byte offset of the ALT_FPGAMGR_IMGCFG_CTL_01 register from the beginning of the component. */
#define ALT_FPGAMGR_IMGCFG_CTL_01_OFST        0x74

/*
 * Register : Control Register - imgcfg_ctrl_02
 * 
 * Allows HPS to control FPGA configuration.
 * 
 * The NCONFIGPULL, NSTATUSPULL, and CONFDONEPULL fields drive signals to the FPGA
 * Control Block that are logically ORed into their respective pins. These signals
 * are always driven independent of the value of EN. The polarity of the
 * NCONFIGPULL, NSTATUSPULL, and CONFDONEPULL fields is inverted relative to their
 * associated pins.
 * 
 * The MSEL (external pins), CDRATIO and CFGWDTH signals determine the mode of
 * operation for Normal Configuration. For Partial Reconfiguration, CDRATIO is used
 * to set the appropriate clock to data ratio, and CFGWDTH should always be set to
 * 16-bit Passive Parallel.
 * 
 * AXICFGEN is used to enable transfer of configuration data by enabling or
 * disabling DCLK during data transfers.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [0]     | RW     | 0x0   | ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL 
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                          
 *  [8]     | RW     | 0x0   | ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA
 *  [15:9]  | ???    | 0x1   | *UNDEFINED*                          
 *  [17:16] | RW     | 0x0   | CD Ratio                             
 *  [23:18] | ???    | 0x0   | *UNDEFINED*                          
 *  [24]    | RW     | 0x0   | Configuration Data Width             
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : en_cfg_ctrl
 * 
 * If this bit is not enabled, the s2f_dclk as well as s2f_data will be always
 * driven 0.
 * 
 * This is to provide a mechanism by which HPS can take over the DCLK/DATA by first
 * setting the nenable_dclk even while s2f_dclk and s2f_data from HPS is silent.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_MSB        0
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : en_cfg_data
 * 
 * this is an unused software bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_MSB        8
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : CD Ratio - cdratio
 * 
 * This field controls the Clock to Data Ratio (CDRATIO) for Normal Configuration
 * and Partial Reconfiguration data transfer from the AXI Slave to the FPGA.
 * 
 * For Normal Configuration, the value in this field must be set to be consistent
 * to the implied CD ratio of the MSEL setting.
 * 
 * For Partial Reconfiguration, the value in this field must be set to the same
 * clock to data ratio in the options bits in the Normal Configuration file.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description 
 * :---------------------------------------|:------|:-------------
 *  ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X1 | 0x0   | CDRATIO of 1
 *  ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X2 | 0x1   | CDRATIO of 2
 *  ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X4 | 0x2   | CDRATIO of 4
 *  ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X8 | 0x3   | CDRATIO of 8
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO
 * 
 * CDRATIO of 1
 */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X1  0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO
 * 
 * CDRATIO of 2
 */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X2  0x1
/*
 * Enumerated value for register field ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO
 * 
 * CDRATIO of 4
 */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X4  0x2
/*
 * Enumerated value for register field ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO
 * 
 * CDRATIO of 8
 */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X8  0x3

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_MSB        17
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_WIDTH      2
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET_MSK    0x00030000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_CLR_MSK    0xfffcffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : Configuration Data Width - cfgwidth
 * 
 * This field determines the Configuration Passive Parallel data bus width when HPS
 * configures the FPGA.   Only 32-bit Passive Parallel or 16-bit Passive Parallel
 * are supported.
 * 
 * When HPS does Normal Configuration, configuration should use 32-bit Passive
 * Parallel Mode.   The external pins MSEL must be set appropriately for the
 * configuration selected.
 * 
 * For Partial Reconfiguration, 16-bit Passive Parallel must be used.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description            
 * :-------------------------------------------|:------|:------------------------
 *  ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX16 | 0x0   | 16-bit Passive Parallel
 *  ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX32 | 0x1   | 32-bit Passive Parallel
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH
 * 
 * 16-bit Passive Parallel
 */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX16  0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH
 * 
 * 32-bit Passive Parallel
 */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX32  0x1

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_MSB        24
/* The width in bits of the ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET_MSK    0x01000000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH register field value. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_CLR_MSK    0xfeffffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH register field. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH field value from a register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_IMGCFG_CTL_02.
 */
struct ALT_FPGAMGR_IMGCFG_CTL_02_s
{
    uint32_t  en_cfg_ctrl :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  en_cfg_data :  1;  /* ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  cdratio     :  2;  /* CD Ratio */
    uint32_t              :  6;  /* *UNDEFINED* */
    uint32_t  cfgwidth    :  1;  /* Configuration Data Width */
    uint32_t              :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_IMGCFG_CTL_02. */
typedef volatile struct ALT_FPGAMGR_IMGCFG_CTL_02_s  ALT_FPGAMGR_IMGCFG_CTL_02_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_IMGCFG_CTL_02 register. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_RESET       0x00000200
/* The byte offset of the ALT_FPGAMGR_IMGCFG_CTL_02 register from the beginning of the component. */
#define ALT_FPGAMGR_IMGCFG_CTL_02_OFST        0x78

/*
 * Register : imgcfg_stat
 * 
 * This is the unmasked status.
 * 
 * Value of corresponding inputs from CSS or PINs, without considering the
 * intr_mask or intr_polarity.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [0]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR    
 *  [1]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD
 *  [2]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD      
 *  [3]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE  
 *  [4]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN    
 *  [5]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE     
 *  [6]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN  
 *  [7]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE   
 *  [8]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE
 *  [9]     | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY       
 *  [10]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE      
 *  [11]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR     
 *  [12]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN     
 *  [13]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE      
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                              
 *  [16]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0        
 *  [17]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1        
 *  [18]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2        
 *  [23:19] | ???    | 0x0   | *UNDEFINED*                              
 *  [24]    | R      | 0x1   | ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY 
 *  [25]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL  
 *  [27:26] | ???    | 0x0   | *UNDEFINED*                              
 *  [28]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_JTAGM            
 *  [29]    | R      | 0x0   | ALT_FPGAMGR_IMGCFG_STAT_EMR              
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : f2s_crc_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_MSB        0
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : f2s_early_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_MSB        1
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : f2s_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_MSB        2
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_SET_MSK    0x00000004
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_CLR_MSK    0xfffffffb
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : f2s_initdone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_MSB        3
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_SET_MSK    0x00000008
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : f2s_nstatus_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_MSB        4
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_SET_MSK    0x00000010
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_CLR_MSK    0xffffffef
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : f2s_nstatus_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_MSB        5
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_SET_MSK    0x00000020
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : f2s_condone_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_MSB        6
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_SET_MSK    0x00000040
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : f2s_condone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_MSB        7
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_SET_MSK    0x00000080
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : f2s_cvp_conf_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_MSB        8
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : f2s_pr_ready
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_MSB        9
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_SET_MSK    0x00000200
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_CLR_MSK    0xfffffdff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : f2s_pr_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_MSB        10
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_SET_MSK    0x00000400
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : f2s_pr_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_MSB        11
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_SET_MSK    0x00000800
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : f2s_nconfig_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_MSB        12
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_SET_MSK    0x00001000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_CLR_MSK    0xffffefff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : f2s_nceo_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_MSB        13
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_SET_MSK    0x00002000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : f2s_msel0
 * 
 * This read-only field allows software to observe the MSEL inputs from the device
 * pins. The MSEL pins define the FPGA configuration mode.
 * 
 * Please refer to CSS functional specifications for the exact definisions of MSEL
 * encoding.
 * 
 * In Baum only 3 of these are used. Other bits will always read 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_MSB        16
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_SET_MSK    0x00010000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : f2s_msel1
 * 
 * This read-only field allows software to observe the MSEL inputs from the device
 * pins. The MSEL pins define the FPGA configuration mode.
 * 
 * Please refer to CSS functional specifications for the exact definisions of MSEL
 * encoding.
 * 
 * In Baum only 3 of these are used. Other bits will always read 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_MSB        17
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_SET_MSK    0x00020000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : f2s_msel2
 * 
 * This read-only field allows software to observe the MSEL inputs from the device
 * pins. The MSEL pins define the FPGA configuration mode.
 * 
 * Please refer to CSS functional specifications for the exact definisions of MSEL
 * encoding.
 * 
 * In Baum only 3 of these are used. Other bits will always read 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_MSB        18
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_SET_MSK    0x00040000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : imgcfg_FifoEmpty
 * 
 * FIfoEmpty Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_MSB        24
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_SET_MSK    0x01000000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_CLR_MSK    0xfeffffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : imgcfg_FifoFull
 * 
 * FIfoFull Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_MSB        25
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_SET_MSK    0x02000000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_CLR_MSK    0xfdffffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : jtagm
 * 
 * JTAG Master Session Status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_JTAGM register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_JTAGM register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_MSB        28
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_JTAGM register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_JTAGM register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_SET_MSK    0x10000000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_JTAGM register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_CLR_MSK    0xefffffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_JTAGM register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_JTAGM field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_JTAGM register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_JTAGM_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : emr
 * 
 * EMR valid bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_STAT_EMR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_STAT_EMR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_MSB        29
/* The width in bits of the ALT_FPGAMGR_IMGCFG_STAT_EMR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_STAT_EMR register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_SET_MSK    0x20000000
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_STAT_EMR register field value. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_CLR_MSK    0xdfffffff
/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT_EMR register field. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_STAT_EMR field value from a register. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_FPGAMGR_IMGCFG_STAT_EMR register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_STAT_EMR_SET(value) (((value) << 29) & 0x20000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_IMGCFG_STAT.
 */
struct ALT_FPGAMGR_IMGCFG_STAT_s
{
    const uint32_t  f2s_crc_error      :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_CRC_ERROR */
    const uint32_t  f2s_early_usermode :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_EARLY_USERMOD */
    const uint32_t  f2s_usermode       :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD */
    const uint32_t  f2s_initdone_oe    :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_INITDONE_OE */
    const uint32_t  f2s_nstatus_pin    :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN */
    const uint32_t  f2s_nstatus_oe     :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_OE */
    const uint32_t  f2s_condone_pin    :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN */
    const uint32_t  f2s_condone_oe     :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE */
    const uint32_t  f2s_cvp_conf_done  :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_CVP_CONF_DONE */
    const uint32_t  f2s_pr_ready       :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_RDY */
    const uint32_t  f2s_pr_done        :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_DONE */
    const uint32_t  f2s_pr_error       :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_PR_ERROR */
    const uint32_t  f2s_nconfig_pin    :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN */
    const uint32_t  f2s_nceo_oe        :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_NCEO_OE */
    uint32_t                           :  2;  /* *UNDEFINED* */
    const uint32_t  f2s_msel0          :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0 */
    const uint32_t  f2s_msel1          :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1 */
    const uint32_t  f2s_msel2          :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2 */
    uint32_t                           :  5;  /* *UNDEFINED* */
    const uint32_t  imgcfg_FifoEmpty   :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOEMPTY */
    const uint32_t  imgcfg_FifoFull    :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_IMGCFG_FIFOFULL */
    uint32_t                           :  2;  /* *UNDEFINED* */
    const uint32_t  jtagm              :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_JTAGM */
    const uint32_t  emr                :  1;  /* ALT_FPGAMGR_IMGCFG_STAT_EMR */
    uint32_t                           :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_IMGCFG_STAT. */
typedef volatile struct ALT_FPGAMGR_IMGCFG_STAT_s  ALT_FPGAMGR_IMGCFG_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_IMGCFG_STAT register. */
#define ALT_FPGAMGR_IMGCFG_STAT_RESET       0x01000000
/* The byte offset of the ALT_FPGAMGR_IMGCFG_STAT register from the beginning of the component. */
#define ALT_FPGAMGR_IMGCFG_STAT_OFST        0x80

/*
 * Register : intr_masked_status
 * 
 * When you read this register you read the active high pending interrupt status of
 * corresponding bit.
 * 
 * This value is after the masking specified by intr_mask and after the polarity
 * conversion as specified in intr_polarity
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR    
 *  [1]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD
 *  [2]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD      
 *  [3]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE  
 *  [4]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN    
 *  [5]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE     
 *  [6]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN  
 *  [7]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE   
 *  [8]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE
 *  [9]     | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY       
 *  [10]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE      
 *  [11]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR     
 *  [12]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN     
 *  [13]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE      
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                                  
 *  [16]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0        
 *  [17]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1        
 *  [18]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2        
 *  [23:19] | ???    | 0x0   | *UNDEFINED*                                  
 *  [24]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY 
 *  [25]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL  
 *  [27:26] | ???    | 0x0   | *UNDEFINED*                                  
 *  [28]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM            
 *  [29]    | RW     | 0x0   | ALT_FPGAMGR_INTR_MSKED_STAT_EMR              
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : f2s_crc_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_MSB        0
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : f2s_early_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_MSB        1
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : f2s_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_MSB        2
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_SET_MSK    0x00000004
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_CLR_MSK    0xfffffffb
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : f2s_initdone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_MSB        3
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_SET_MSK    0x00000008
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : f2s_nstatus_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_MSB        4
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_SET_MSK    0x00000010
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_CLR_MSK    0xffffffef
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : f2s_nstatus_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_MSB        5
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_SET_MSK    0x00000020
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : f2s_condone_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_MSB        6
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_SET_MSK    0x00000040
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : f2s_condone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_MSB        7
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_SET_MSK    0x00000080
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : f2s_cvp_conf_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_MSB        8
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : f2s_pr_ready
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_MSB        9
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_SET_MSK    0x00000200
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_CLR_MSK    0xfffffdff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : f2s_pr_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_MSB        10
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_SET_MSK    0x00000400
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : f2s_pr_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_MSB        11
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_SET_MSK    0x00000800
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : f2s_nconfig_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_MSB        12
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_SET_MSK    0x00001000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_CLR_MSK    0xffffefff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : f2s_nceo_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_MSB        13
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_SET_MSK    0x00002000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : f2s_msel0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_MSB        16
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_SET_MSK    0x00010000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : f2s_msel1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_MSB        17
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_SET_MSK    0x00020000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : f2s_msel2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_MSB        18
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_SET_MSK    0x00040000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : imgcfg_FifoEmpty
 * 
 * FIfoEmpty Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_MSB        24
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_SET_MSK    0x01000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_CLR_MSK    0xfeffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : imgcfg_FifoFull
 * 
 * FIfoFull Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_MSB        25
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_SET_MSK    0x02000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_CLR_MSK    0xfdffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : jtagm
 * 
 * JTAG Master Session Status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_MSB        28
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_SET_MSK    0x10000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_CLR_MSK    0xefffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : emr
 * 
 * EMR valid bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_EMR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSKED_STAT_EMR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_MSB        29
/* The width in bits of the ALT_FPGAMGR_INTR_MSKED_STAT_EMR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSKED_STAT_EMR register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_SET_MSK    0x20000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSKED_STAT_EMR register field value. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_CLR_MSK    0xdfffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT_EMR register field. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_RESET      0x0
/* Extracts the ALT_FPGAMGR_INTR_MSKED_STAT_EMR field value from a register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_FPGAMGR_INTR_MSKED_STAT_EMR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_EMR_SET(value) (((value) << 29) & 0x20000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_INTR_MSKED_STAT.
 */
struct ALT_FPGAMGR_INTR_MSKED_STAT_s
{
    uint32_t  f2s_crc_error      :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CRC_ERROR */
    uint32_t  f2s_early_usermode :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_EARLY_USERMOD */
    uint32_t  f2s_usermode       :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_USERMOD */
    uint32_t  f2s_initdone_oe    :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_INITDONE_OE */
    uint32_t  f2s_nstatus_pin    :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_PIN */
    uint32_t  f2s_nstatus_oe     :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NSTAT_OE */
    uint32_t  f2s_condone_pin    :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_PIN */
    uint32_t  f2s_condone_oe     :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CONDONE_OE */
    uint32_t  f2s_cvp_conf_done  :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_CVP_CONF_DONE */
    uint32_t  f2s_pr_ready       :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_RDY */
    uint32_t  f2s_pr_done        :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_DONE */
    uint32_t  f2s_pr_error       :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_PR_ERROR */
    uint32_t  f2s_nconfig_pin    :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCFG_PIN */
    uint32_t  f2s_nceo_oe        :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_NCEO_OE */
    uint32_t                     :  2;  /* *UNDEFINED* */
    uint32_t  f2s_msel0          :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL0 */
    uint32_t  f2s_msel1          :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL1 */
    uint32_t  f2s_msel2          :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_F2S_MSEL2 */
    uint32_t                     :  5;  /* *UNDEFINED* */
    uint32_t  imgcfg_FifoEmpty   :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOEMPTY */
    uint32_t  imgcfg_FifoFull    :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_IMGCFG_FIFOFULL */
    uint32_t                     :  2;  /* *UNDEFINED* */
    uint32_t  jtagm              :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_JTAGM */
    uint32_t  emr                :  1;  /* ALT_FPGAMGR_INTR_MSKED_STAT_EMR */
    uint32_t                     :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_INTR_MSKED_STAT. */
typedef volatile struct ALT_FPGAMGR_INTR_MSKED_STAT_s  ALT_FPGAMGR_INTR_MSKED_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_INTR_MSKED_STAT register. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_INTR_MSKED_STAT register from the beginning of the component. */
#define ALT_FPGAMGR_INTR_MSKED_STAT_OFST        0x84

/*
 * Register : intr_mask
 * 
 * Mask for interrupts. A value of 1 in a particular bit will cause the specific
 * interrupt to be masked.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [0]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR    
 *  [1]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD
 *  [2]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_USERMOD      
 *  [3]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE  
 *  [4]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN    
 *  [5]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE     
 *  [6]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN  
 *  [7]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE   
 *  [8]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE
 *  [9]     | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY       
 *  [10]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE      
 *  [11]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR     
 *  [12]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN     
 *  [13]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE      
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                           
 *  [16]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_MSEL0        
 *  [17]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_MSEL1        
 *  [18]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_F2S_MSEL2        
 *  [23:19] | ???    | 0x0   | *UNDEFINED*                           
 *  [24]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY 
 *  [25]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL  
 *  [27:26] | ???    | 0x0   | *UNDEFINED*                           
 *  [28]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_JTAGM            
 *  [29]    | RW     | 0x1   | ALT_FPGAMGR_INTR_MSK_EMR              
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : f2s_crc_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_MSB        0
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : f2s_early_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_MSB        1
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : f2s_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_MSB        2
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_SET_MSK    0x00000004
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_CLR_MSK    0xfffffffb
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_USERMOD field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_USERMOD_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : f2s_initdone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_MSB        3
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_SET_MSK    0x00000008
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : f2s_nstatus_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_MSB        4
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_SET_MSK    0x00000010
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_CLR_MSK    0xffffffef
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : f2s_nstatus_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_MSB        5
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_SET_MSK    0x00000020
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : f2s_condone_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_MSB        6
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_SET_MSK    0x00000040
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : f2s_condone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_MSB        7
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_SET_MSK    0x00000080
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : f2s_cvp_conf_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_MSB        8
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : f2s_pr_ready
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_MSB        9
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_SET_MSK    0x00000200
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_CLR_MSK    0xfffffdff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : f2s_pr_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_MSB        10
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_SET_MSK    0x00000400
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : f2s_pr_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_MSB        11
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_SET_MSK    0x00000800
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : f2s_nconfig_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_MSB        12
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_SET_MSK    0x00001000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_CLR_MSK    0xffffefff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : f2s_nceo_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_MSB        13
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_SET_MSK    0x00002000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : f2s_msel0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_MSB        16
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_SET_MSK    0x00010000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : f2s_msel1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_MSB        17
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_SET_MSK    0x00020000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : f2s_msel2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_MSB        18
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_SET_MSK    0x00040000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_F2S_MSEL2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : imgcfg_FifoEmpty
 * 
 * FIfoEmpty Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_MSB        24
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_SET_MSK    0x01000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_CLR_MSK    0xfeffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : imgcfg_FifoFull
 * 
 * FIfoFull Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_MSB        25
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_SET_MSK    0x02000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_CLR_MSK    0xfdffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : jtagm
 * 
 * JTAG Master Session Status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_MSB        28
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_JTAGM register field value. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_SET_MSK    0x10000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_JTAGM register field value. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_CLR_MSK    0xefffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_JTAGM register field. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_JTAGM field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_FPGAMGR_INTR_MSK_JTAGM register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_JTAGM_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : emr
 * 
 * EMR valid bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_MSK_EMR register field. */
#define ALT_FPGAMGR_INTR_MSK_EMR_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_MSK_EMR register field. */
#define ALT_FPGAMGR_INTR_MSK_EMR_MSB        29
/* The width in bits of the ALT_FPGAMGR_INTR_MSK_EMR register field. */
#define ALT_FPGAMGR_INTR_MSK_EMR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_MSK_EMR register field value. */
#define ALT_FPGAMGR_INTR_MSK_EMR_SET_MSK    0x20000000
/* The mask used to clear the ALT_FPGAMGR_INTR_MSK_EMR register field value. */
#define ALT_FPGAMGR_INTR_MSK_EMR_CLR_MSK    0xdfffffff
/* The reset value of the ALT_FPGAMGR_INTR_MSK_EMR register field. */
#define ALT_FPGAMGR_INTR_MSK_EMR_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_MSK_EMR field value from a register. */
#define ALT_FPGAMGR_INTR_MSK_EMR_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_FPGAMGR_INTR_MSK_EMR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_MSK_EMR_SET(value) (((value) << 29) & 0x20000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_INTR_MSK.
 */
struct ALT_FPGAMGR_INTR_MSK_s
{
    uint32_t  f2s_crc_error      :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_CRC_ERROR */
    uint32_t  f2s_early_usermode :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_EARLY_USERMOD */
    uint32_t  f2s_usermode       :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_USERMOD */
    uint32_t  f2s_initdone_oe    :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_INITDONE_OE */
    uint32_t  f2s_nstatus_pin    :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_PIN */
    uint32_t  f2s_nstatus_oe     :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_NSTAT_OE */
    uint32_t  f2s_condone_pin    :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_PIN */
    uint32_t  f2s_condone_oe     :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_CONDONE_OE */
    uint32_t  f2s_cvp_conf_done  :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_CVP_CONF_DONE */
    uint32_t  f2s_pr_ready       :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_PR_RDY */
    uint32_t  f2s_pr_done        :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_PR_DONE */
    uint32_t  f2s_pr_error       :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_PR_ERROR */
    uint32_t  f2s_nconfig_pin    :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_NCFG_PIN */
    uint32_t  f2s_nceo_oe        :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_NCEO_OE */
    uint32_t                     :  2;  /* *UNDEFINED* */
    uint32_t  f2s_msel0          :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_MSEL0 */
    uint32_t  f2s_msel1          :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_MSEL1 */
    uint32_t  f2s_msel2          :  1;  /* ALT_FPGAMGR_INTR_MSK_F2S_MSEL2 */
    uint32_t                     :  5;  /* *UNDEFINED* */
    uint32_t  imgcfg_FifoEmpty   :  1;  /* ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOEMPTY */
    uint32_t  imgcfg_FifoFull    :  1;  /* ALT_FPGAMGR_INTR_MSK_IMGCFG_FIFOFULL */
    uint32_t                     :  2;  /* *UNDEFINED* */
    uint32_t  jtagm              :  1;  /* ALT_FPGAMGR_INTR_MSK_JTAGM */
    uint32_t  emr                :  1;  /* ALT_FPGAMGR_INTR_MSK_EMR */
    uint32_t                     :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_INTR_MSK. */
typedef volatile struct ALT_FPGAMGR_INTR_MSK_s  ALT_FPGAMGR_INTR_MSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_INTR_MSK register. */
#define ALT_FPGAMGR_INTR_MSK_RESET       0x33073fff
/* The byte offset of the ALT_FPGAMGR_INTR_MSK register from the beginning of the component. */
#define ALT_FPGAMGR_INTR_MSK_OFST        0x88

/*
 * Register : intr_polarity
 * 
 * Active Level of the signal to generate interrupt.
 * 
 * 0 :Active LOW. An interrupt will be generated when that particular bit/signal is
 * LOW
 * 
 * 1: Active HIGH. An interrupt will be generated when that particular bit/signal
 * is HIGH
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [0]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR    
 *  [1]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD
 *  [2]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_USERMOD      
 *  [3]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE  
 *  [4]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN    
 *  [5]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE     
 *  [6]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN  
 *  [7]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE   
 *  [8]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE
 *  [9]     | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_PR_RDY       
 *  [10]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_PR_DONE      
 *  [11]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR     
 *  [12]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN     
 *  [13]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE      
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                           
 *  [16]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_MSEL0        
 *  [17]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_MSEL1        
 *  [18]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_F2S_MSEL2        
 *  [23:19] | ???    | 0x0   | *UNDEFINED*                           
 *  [24]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY 
 *  [25]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL  
 *  [27:26] | ???    | 0x0   | *UNDEFINED*                           
 *  [28]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_JTAGM            
 *  [29]    | RW     | 0x1   | ALT_FPGAMGR_INTR_POL_EMR              
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : f2s_crc_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_MSB        0
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_SET_MSK    0x00000001
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : f2s_early_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_MSB        1
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_SET_MSK    0x00000002
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : f2s_usermode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_MSB        2
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_SET_MSK    0x00000004
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_USERMOD register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_CLR_MSK    0xfffffffb
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_USERMOD register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_USERMOD field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_USERMOD register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_USERMOD_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : f2s_initdone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_MSB        3
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_SET_MSK    0x00000008
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : f2s_nstatus_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_MSB        4
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_SET_MSK    0x00000010
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_CLR_MSK    0xffffffef
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : f2s_nstatus_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_MSB        5
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_SET_MSK    0x00000020
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : f2s_condone_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_MSB        6
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_SET_MSK    0x00000040
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : f2s_condone_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_MSB        7
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_SET_MSK    0x00000080
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : f2s_cvp_conf_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_MSB        8
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : f2s_pr_ready
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_MSB        9
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_SET_MSK    0x00000200
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_PR_RDY register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_CLR_MSK    0xfffffdff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_PR_RDY register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_PR_RDY field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_PR_RDY register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_RDY_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : f2s_pr_done
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_MSB        10
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_SET_MSK    0x00000400
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_PR_DONE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_PR_DONE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_PR_DONE field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_PR_DONE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_DONE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : f2s_pr_error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_MSB        11
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_SET_MSK    0x00000800
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : f2s_nconfig_pin
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_MSB        12
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_SET_MSK    0x00001000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_CLR_MSK    0xffffefff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : f2s_nceo_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_MSB        13
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_SET_MSK    0x00002000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : f2s_msel0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_MSB        16
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_SET_MSK    0x00010000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_MSEL0 register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_MSEL0 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_MSEL0 field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_MSEL0 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : f2s_msel1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_MSB        17
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_SET_MSK    0x00020000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_MSEL1 register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_MSEL1 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_MSEL1 field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_MSEL1 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : f2s_msel2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_MSB        18
/* The width in bits of the ALT_FPGAMGR_INTR_POL_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_SET_MSK    0x00040000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_F2S_MSEL2 register field value. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_FPGAMGR_INTR_POL_F2S_MSEL2 register field. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_F2S_MSEL2 field value from a register. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_FPGAMGR_INTR_POL_F2S_MSEL2 register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_F2S_MSEL2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : imgcfg_FifoEmpty
 * 
 * FIfoEmpty Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_MSB        24
/* The width in bits of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_SET_MSK    0x01000000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_CLR_MSK    0xfeffffff
/* The reset value of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY field value from a register. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : imgcfg_FifoFull
 * 
 * FIfoFull Status of FPGA image configuration FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_MSB        25
/* The width in bits of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_SET_MSK    0x02000000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL register field value. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_CLR_MSK    0xfdffffff
/* The reset value of the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL register field. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL field value from a register. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : jtagm
 * 
 * JTAG Master Session Status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_JTAGM register field. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_JTAGM register field. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_MSB        28
/* The width in bits of the ALT_FPGAMGR_INTR_POL_JTAGM register field. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_JTAGM register field value. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_SET_MSK    0x10000000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_JTAGM register field value. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_CLR_MSK    0xefffffff
/* The reset value of the ALT_FPGAMGR_INTR_POL_JTAGM register field. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_JTAGM field value from a register. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_FPGAMGR_INTR_POL_JTAGM register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_JTAGM_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : emr
 * 
 * EMR valid bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_INTR_POL_EMR register field. */
#define ALT_FPGAMGR_INTR_POL_EMR_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_INTR_POL_EMR register field. */
#define ALT_FPGAMGR_INTR_POL_EMR_MSB        29
/* The width in bits of the ALT_FPGAMGR_INTR_POL_EMR register field. */
#define ALT_FPGAMGR_INTR_POL_EMR_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_INTR_POL_EMR register field value. */
#define ALT_FPGAMGR_INTR_POL_EMR_SET_MSK    0x20000000
/* The mask used to clear the ALT_FPGAMGR_INTR_POL_EMR register field value. */
#define ALT_FPGAMGR_INTR_POL_EMR_CLR_MSK    0xdfffffff
/* The reset value of the ALT_FPGAMGR_INTR_POL_EMR register field. */
#define ALT_FPGAMGR_INTR_POL_EMR_RESET      0x1
/* Extracts the ALT_FPGAMGR_INTR_POL_EMR field value from a register. */
#define ALT_FPGAMGR_INTR_POL_EMR_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_FPGAMGR_INTR_POL_EMR register field value suitable for setting the register. */
#define ALT_FPGAMGR_INTR_POL_EMR_SET(value) (((value) << 29) & 0x20000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_INTR_POL.
 */
struct ALT_FPGAMGR_INTR_POL_s
{
    uint32_t  f2s_crc_error      :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_CRC_ERROR */
    uint32_t  f2s_early_usermode :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_EARLY_USERMOD */
    uint32_t  f2s_usermode       :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_USERMOD */
    uint32_t  f2s_initdone_oe    :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_INITDONE_OE */
    uint32_t  f2s_nstatus_pin    :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_NSTAT_PIN */
    uint32_t  f2s_nstatus_oe     :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_NSTAT_OE */
    uint32_t  f2s_condone_pin    :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_CONDONE_PIN */
    uint32_t  f2s_condone_oe     :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_CONDONE_OE */
    uint32_t  f2s_cvp_conf_done  :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_CVP_CONF_DONE */
    uint32_t  f2s_pr_ready       :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_PR_RDY */
    uint32_t  f2s_pr_done        :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_PR_DONE */
    uint32_t  f2s_pr_error       :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_PR_ERROR */
    uint32_t  f2s_nconfig_pin    :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_NCFG_PIN */
    uint32_t  f2s_nceo_oe        :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_NCEO_OE */
    uint32_t                     :  2;  /* *UNDEFINED* */
    uint32_t  f2s_msel0          :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_MSEL0 */
    uint32_t  f2s_msel1          :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_MSEL1 */
    uint32_t  f2s_msel2          :  1;  /* ALT_FPGAMGR_INTR_POL_F2S_MSEL2 */
    uint32_t                     :  5;  /* *UNDEFINED* */
    uint32_t  imgcfg_FifoEmpty   :  1;  /* ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOEMPTY */
    uint32_t  imgcfg_FifoFull    :  1;  /* ALT_FPGAMGR_INTR_POL_IMGCFG_FIFOFULL */
    uint32_t                     :  2;  /* *UNDEFINED* */
    uint32_t  jtagm              :  1;  /* ALT_FPGAMGR_INTR_POL_JTAGM */
    uint32_t  emr                :  1;  /* ALT_FPGAMGR_INTR_POL_EMR */
    uint32_t                     :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_INTR_POL. */
typedef volatile struct ALT_FPGAMGR_INTR_POL_s  ALT_FPGAMGR_INTR_POL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_INTR_POL register. */
#define ALT_FPGAMGR_INTR_POL_RESET       0x33073fff
/* The byte offset of the ALT_FPGAMGR_INTR_POL register from the beginning of the component. */
#define ALT_FPGAMGR_INTR_POL_OFST        0x8c

/*
 * Register : Control/Status Word Register - dma_config
 * 
 * Consist of control bit and status information.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                     
 * :--------|:-------|:--------|:---------------------------------
 *  [7:0]   | RW     | 0x0     | ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL
 *  [8]     | RW     | 0x0     | ALT_FPGAMGR_DMA_CFG_DMAREQ_EN   
 *  [15:9]  | ???    | 0x0     | *UNDEFINED*                     
 *  [16]    | RW     | 0x0     | ALT_FPGAMGR_DMA_CFG_CLRFIFO     
 *  [31:17] | ???    | Unknown | *UNDEFINED*                     
 * 
 */
/*
 * Field : dmareq_level
 * 
 * DMA request threshold level
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_MSB        7
/* The width in bits of the ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_WIDTH      8
/* The mask used to set the ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL register field value. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL register field value. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_CLR_MSK    0xffffff00
/* The reset value of the ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_RESET      0x0
/* Extracts the ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL field value from a register. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL register field value suitable for setting the register. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : dmareq_enable
 * 
 * Writing 1 will enable DMA request handshake from FPGA manager.
 * 
 * Writing 0 will disable DMA request handshake from FPGA manager.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description
 * :------------------------------------|:------|:------------
 *  ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_E_DIS | 0x0   |            
 *  ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_FPGAMGR_DMA_CFG_DMAREQ_EN
 * 
 * DMA request handshake disable.
 */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_E_DIS 0x0
/*
 * Enumerated value for register field ALT_FPGAMGR_DMA_CFG_DMAREQ_EN
 * 
 * DMA request handshake enable
 */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_E_EN  0x1

/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_DMA_CFG_DMAREQ_EN register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_DMA_CFG_DMAREQ_EN register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_MSB        8
/* The width in bits of the ALT_FPGAMGR_DMA_CFG_DMAREQ_EN register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_DMA_CFG_DMAREQ_EN register field value. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_DMA_CFG_DMAREQ_EN register field value. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_DMA_CFG_DMAREQ_EN register field. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_RESET      0x0
/* Extracts the ALT_FPGAMGR_DMA_CFG_DMAREQ_EN field value from a register. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_DMA_CFG_DMAREQ_EN register field value suitable for setting the register. */
#define ALT_FPGAMGR_DMA_CFG_DMAREQ_EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : clearFifo
 * 
 * A write 1 to this bit field will empty the TxFifo. A read will always return 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_DMA_CFG_CLRFIFO register field. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_DMA_CFG_CLRFIFO register field. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_MSB        16
/* The width in bits of the ALT_FPGAMGR_DMA_CFG_CLRFIFO register field. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_DMA_CFG_CLRFIFO register field value. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_SET_MSK    0x00010000
/* The mask used to clear the ALT_FPGAMGR_DMA_CFG_CLRFIFO register field value. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_CLR_MSK    0xfffeffff
/* The reset value of the ALT_FPGAMGR_DMA_CFG_CLRFIFO register field. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_RESET      0x0
/* Extracts the ALT_FPGAMGR_DMA_CFG_CLRFIFO field value from a register. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_FPGAMGR_DMA_CFG_CLRFIFO register field value suitable for setting the register. */
#define ALT_FPGAMGR_DMA_CFG_CLRFIFO_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_DMA_CFG.
 */
struct ALT_FPGAMGR_DMA_CFG_s
{
    uint32_t  dmareq_level  :  8;  /* ALT_FPGAMGR_DMA_CFG_DMAREQ_LEVEL */
    uint32_t  dmareq_enable :  1;  /* ALT_FPGAMGR_DMA_CFG_DMAREQ_EN */
    uint32_t                :  7;  /* *UNDEFINED* */
    uint32_t  clearFifo     :  1;  /* ALT_FPGAMGR_DMA_CFG_CLRFIFO */
    uint32_t                : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_DMA_CFG. */
typedef volatile struct ALT_FPGAMGR_DMA_CFG_s  ALT_FPGAMGR_DMA_CFG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_DMA_CFG register. */
#define ALT_FPGAMGR_DMA_CFG_RESET       0x00000000
/* The byte offset of the ALT_FPGAMGR_DMA_CFG register from the beginning of the component. */
#define ALT_FPGAMGR_DMA_CFG_OFST        0x90

/*
 * Register : Control/Status Word Register - imgcfg_fifo_status
 * 
 * Consist of control bit and status information.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                           
 * :--------|:-------|:--------|:---------------------------------------
 *  [7:0]   | RW     | 0x0     | ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL
 *  [8]     | RW     | 0x0     | ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL 
 *  [9]     | RW     | 0x1     | ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY
 *  [31:10] | ???    | Unknown | *UNDEFINED*                           
 * 
 */
/*
 * Field : FifoLevel
 * 
 * Number of words remaining in FPGA Image Configuration Fifo.
 * 
 * Maximum value is 0x64
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_MSB        7
/* The width in bits of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_WIDTH      8
/* The mask used to set the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL register field value. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL register field value. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_CLR_MSK    0xffffff00
/* The reset value of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL field value from a register. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FifoFull
 * 
 * Read
 * 
 * 1 -> Fifo Full
 * 
 * 0 -> Fifo NOT full
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_MSB        8
/* The width in bits of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL register field value. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_SET_MSK    0x00000100
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL register field value. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_RESET      0x0
/* Extracts the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL field value from a register. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : FifoEmpty
 * 
 * Read
 * 
 * 1 -> Fifo Empty
 * 
 * 0 -> Fifo NOT Empty
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_MSB        9
/* The width in bits of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_WIDTH      1
/* The mask used to set the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_SET_MSK    0x00000200
/* The mask used to clear the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY register field value. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_CLR_MSK    0xfffffdff
/* The reset value of the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY register field. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_RESET      0x1
/* Extracts the ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY field value from a register. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY register field value suitable for setting the register. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY_SET(value) (((value) << 9) & 0x00000200)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_FPGAMGR_IMGCFG_FIFO_STAT.
 */
struct ALT_FPGAMGR_IMGCFG_FIFO_STAT_s
{
    uint32_t  FifoLevel :  8;  /* ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOLEVEL */
    uint32_t  FifoFull  :  1;  /* ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOFULL */
    uint32_t  FifoEmpty :  1;  /* ALT_FPGAMGR_IMGCFG_FIFO_STAT_FIFOEMPTY */
    uint32_t            : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_FPGAMGR_IMGCFG_FIFO_STAT. */
typedef volatile struct ALT_FPGAMGR_IMGCFG_FIFO_STAT_s  ALT_FPGAMGR_IMGCFG_FIFO_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_FPGAMGR_IMGCFG_FIFO_STAT register. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_RESET       0x00000200
/* The byte offset of the ALT_FPGAMGR_IMGCFG_FIFO_STAT register from the beginning of the component. */
#define ALT_FPGAMGR_IMGCFG_FIFO_STAT_OFST        0x94

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_FPGAMGR.
 */
struct ALT_FPGAMGR_s
{
    volatile uint32_t               _pad_0x0_0x7[2];        /* *UNDEFINED* */
    ALT_FPGAMGR_DCLKCNT_t           dclkcnt;                /* ALT_FPGAMGR_DCLKCNT */
    ALT_FPGAMGR_DCLKSTAT_t          dclkstat;               /* ALT_FPGAMGR_DCLKSTAT */
    ALT_FPGAMGR_GPO_t               gpo;                    /* ALT_FPGAMGR_GPO */
    ALT_FPGAMGR_GPI_t               gpi;                    /* ALT_FPGAMGR_GPI */
    ALT_FPGAMGR_MISCI_t             misci;                  /* ALT_FPGAMGR_MISCI */
    volatile uint32_t               _pad_0x1c_0x2f[5];      /* *UNDEFINED* */
    ALT_FPGAMGR_EMR_DATA0_t         emr_data0;              /* ALT_FPGAMGR_EMR_DATA0 */
    ALT_FPGAMGR_EMR_DATA1_t         emr_data1;              /* ALT_FPGAMGR_EMR_DATA1 */
    ALT_FPGAMGR_EMR_DATA2_t         emr_data2;              /* ALT_FPGAMGR_EMR_DATA2 */
    ALT_FPGAMGR_EMR_DATA3_t         emr_data3;              /* ALT_FPGAMGR_EMR_DATA3 */
    ALT_FPGAMGR_EMR_DATA4_t         emr_data4;              /* ALT_FPGAMGR_EMR_DATA4 */
    ALT_FPGAMGR_EMR_DATA5_t         emr_data5;              /* ALT_FPGAMGR_EMR_DATA5 */
    ALT_FPGAMGR_EMR_VALID_t         emr_valid;              /* ALT_FPGAMGR_EMR_VALID */
    ALT_FPGAMGR_EMR_EN_t            emr_en;                 /* ALT_FPGAMGR_EMR_EN */
    ALT_FPGAMGR_JTAG_CFG_t          jtag_config;            /* ALT_FPGAMGR_JTAG_CFG */
    ALT_FPGAMGR_JTAG_STAT_t         jtag_status;            /* ALT_FPGAMGR_JTAG_STAT */
    ALT_FPGAMGR_JTAG_KICK_t         jtag_kick;              /* ALT_FPGAMGR_JTAG_KICK */
    volatile uint32_t               _pad_0x5c_0x5f;         /* *UNDEFINED* */
    ALT_FPGAMGR_JTAG_DATA_W_t       jtag_data_w;            /* ALT_FPGAMGR_JTAG_DATA_W */
    ALT_FPGAMGR_JTAG_DATA_R_t       jtag_data_r;            /* ALT_FPGAMGR_JTAG_DATA_R */
    volatile uint32_t               _pad_0x68_0x6f[2];      /* *UNDEFINED* */
    ALT_FPGAMGR_IMGCFG_CTL_00_t     imgcfg_ctrl_00;         /* ALT_FPGAMGR_IMGCFG_CTL_00 */
    ALT_FPGAMGR_IMGCFG_CTL_01_t     imgcfg_ctrl_01;         /* ALT_FPGAMGR_IMGCFG_CTL_01 */
    ALT_FPGAMGR_IMGCFG_CTL_02_t     imgcfg_ctrl_02;         /* ALT_FPGAMGR_IMGCFG_CTL_02 */
    volatile uint32_t               _pad_0x7c_0x7f;         /* *UNDEFINED* */
    ALT_FPGAMGR_IMGCFG_STAT_t       imgcfg_stat;            /* ALT_FPGAMGR_IMGCFG_STAT */
    ALT_FPGAMGR_INTR_MSKED_STAT_t   intr_masked_status;     /* ALT_FPGAMGR_INTR_MSKED_STAT */
    ALT_FPGAMGR_INTR_MSK_t          intr_mask;              /* ALT_FPGAMGR_INTR_MSK */
    ALT_FPGAMGR_INTR_POL_t          intr_polarity;          /* ALT_FPGAMGR_INTR_POL */
    ALT_FPGAMGR_DMA_CFG_t           dma_config;             /* ALT_FPGAMGR_DMA_CFG */
    ALT_FPGAMGR_IMGCFG_FIFO_STAT_t  imgcfg_fifo_status;     /* ALT_FPGAMGR_IMGCFG_FIFO_STAT */
    volatile uint32_t               _pad_0x98_0x1000[986];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_FPGAMGR. */
typedef volatile struct ALT_FPGAMGR_s  ALT_FPGAMGR_t;
/* The struct declaration for the raw register contents of register group ALT_FPGAMGR. */
struct ALT_FPGAMGR_raw_s
{
    uint32_t           _pad_0x0_0x7[2];        /* *UNDEFINED* */
    volatile uint32_t  dclkcnt;                /* ALT_FPGAMGR_DCLKCNT */
    volatile uint32_t  dclkstat;               /* ALT_FPGAMGR_DCLKSTAT */
    volatile uint32_t  gpo;                    /* ALT_FPGAMGR_GPO */
    volatile uint32_t  gpi;                    /* ALT_FPGAMGR_GPI */
    volatile uint32_t  misci;                  /* ALT_FPGAMGR_MISCI */
    uint32_t           _pad_0x1c_0x2f[5];      /* *UNDEFINED* */
    volatile uint32_t  emr_data0;              /* ALT_FPGAMGR_EMR_DATA0 */
    volatile uint32_t  emr_data1;              /* ALT_FPGAMGR_EMR_DATA1 */
    volatile uint32_t  emr_data2;              /* ALT_FPGAMGR_EMR_DATA2 */
    volatile uint32_t  emr_data3;              /* ALT_FPGAMGR_EMR_DATA3 */
    volatile uint32_t  emr_data4;              /* ALT_FPGAMGR_EMR_DATA4 */
    volatile uint32_t  emr_data5;              /* ALT_FPGAMGR_EMR_DATA5 */
    volatile uint32_t  emr_valid;              /* ALT_FPGAMGR_EMR_VALID */
    volatile uint32_t  emr_en;                 /* ALT_FPGAMGR_EMR_EN */
    volatile uint32_t  jtag_config;            /* ALT_FPGAMGR_JTAG_CFG */
    volatile uint32_t  jtag_status;            /* ALT_FPGAMGR_JTAG_STAT */
    volatile uint32_t  jtag_kick;              /* ALT_FPGAMGR_JTAG_KICK */
    uint32_t           _pad_0x5c_0x5f;         /* *UNDEFINED* */
    volatile uint32_t  jtag_data_w;            /* ALT_FPGAMGR_JTAG_DATA_W */
    volatile uint32_t  jtag_data_r;            /* ALT_FPGAMGR_JTAG_DATA_R */
    uint32_t           _pad_0x68_0x6f[2];      /* *UNDEFINED* */
    volatile uint32_t  imgcfg_ctrl_00;         /* ALT_FPGAMGR_IMGCFG_CTL_00 */
    volatile uint32_t  imgcfg_ctrl_01;         /* ALT_FPGAMGR_IMGCFG_CTL_01 */
    volatile uint32_t  imgcfg_ctrl_02;         /* ALT_FPGAMGR_IMGCFG_CTL_02 */
    uint32_t           _pad_0x7c_0x7f;         /* *UNDEFINED* */
    volatile uint32_t  imgcfg_stat;            /* ALT_FPGAMGR_IMGCFG_STAT */
    volatile uint32_t  intr_masked_status;     /* ALT_FPGAMGR_INTR_MSKED_STAT */
    volatile uint32_t  intr_mask;              /* ALT_FPGAMGR_INTR_MSK */
    volatile uint32_t  intr_polarity;          /* ALT_FPGAMGR_INTR_POL */
    volatile uint32_t  dma_config;             /* ALT_FPGAMGR_DMA_CFG */
    volatile uint32_t  imgcfg_fifo_status;     /* ALT_FPGAMGR_IMGCFG_FIFO_STAT */
    uint32_t           _pad_0x98_0x1000[986];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_FPGAMGR. */
typedef volatile struct ALT_FPGAMGR_raw_s  ALT_FPGAMGR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_FPGAMGR_H__ */

