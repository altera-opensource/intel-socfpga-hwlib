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

/* Altera - ALT_UART */

#ifndef __ALT_SOCAL_UART_H__
#define __ALT_SOCAL_UART_H__

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
 * Component : UART
 * 
 */
/*
 * Register : Receive Buffer Register - RBR
 * 
 * Receive Buffer Register, reading this register when the DLAB bit is zero;
 * 
 * Transmit Holding Register, writing to this register when the DLAB is zero;
 * 
 * Divisor Latch (Low), when DLAB bit is one
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_RBR_RBR           
 *  [31:8] | R      | 0x0   | ALT_UART_RBR_RSVD_RBR_31TO8
 * 
 */
/*
 * Field : rbr
 * 
 * Receive Buffer Register:
 * 
 * This register contains the data byte received on the serial input port (sin)
 * 
 * in UART mode or the serial infrared input (sir_in) in infrared mode. The data
 * 
 * in this register is valid only if the Data Ready (DR) bit in the Line status
 * 
 * Register (LSR) is set.
 * 
 * If in non-FIFO mode (FIFO_MODE == NONE) or FIFOs are disabled (FCR[0] set to
 * 
 * zero), the data in the RBR must be read before the next data arrives, otherwise
 * 
 * it will be overwritten, resulting in an overrun error.
 * 
 * If in FIFO mode (FIFO_MODE != NONE) and FIFOs are enabled (FCR[0] set to one),
 * 
 * this register accesses the head of the receive FIFO. If the receive FIFO is full
 * 
 * and this register is not read before the next data character arrives, then the
 * 
 * data already in the FIFO will be preserved but any incoming data will be lost.
 * 
 * An overrun error will also occur.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_RBR_RBR register field. */
#define ALT_UART_RBR_RBR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_RBR_RBR register field. */
#define ALT_UART_RBR_RBR_MSB        7
/* The width in bits of the ALT_UART_RBR_RBR register field. */
#define ALT_UART_RBR_RBR_WIDTH      8
/* The mask used to set the ALT_UART_RBR_RBR register field value. */
#define ALT_UART_RBR_RBR_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_RBR_RBR register field value. */
#define ALT_UART_RBR_RBR_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_RBR_RBR register field. */
#define ALT_UART_RBR_RBR_RESET      0x0
/* Extracts the ALT_UART_RBR_RBR field value from a register. */
#define ALT_UART_RBR_RBR_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_RBR_RBR register field value suitable for setting the register. */
#define ALT_UART_RBR_RBR_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_RBR_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_RBR_RSVD_RBR_31TO8 register field. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_RBR_RSVD_RBR_31TO8 register field. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_MSB        31
/* The width in bits of the ALT_UART_RBR_RSVD_RBR_31TO8 register field. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_RBR_RSVD_RBR_31TO8 register field value. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_RBR_RSVD_RBR_31TO8 register field value. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_RBR_RSVD_RBR_31TO8 register field. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_RESET      0x0
/* Extracts the ALT_UART_RBR_RSVD_RBR_31TO8 field value from a register. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_RBR_RSVD_RBR_31TO8 register field value suitable for setting the register. */
#define ALT_UART_RBR_RSVD_RBR_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_RBR.
 */
struct ALT_UART_RBR_s
{
    const volatile uint32_t  rbr            :  8;  /* ALT_UART_RBR_RBR */
    const volatile uint32_t  RSVD_RBR_31to8 : 24;  /* ALT_UART_RBR_RSVD_RBR_31TO8 */
};

/* The typedef declaration for register ALT_UART_RBR. */
typedef struct ALT_UART_RBR_s  ALT_UART_RBR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_RBR register. */
#define ALT_UART_RBR_RESET       0x00000000
/* The byte offset of the ALT_UART_RBR register from the beginning of the component. */
#define ALT_UART_RBR_OFST        0x0
/* The address of the ALT_UART_RBR register. */
#define ALT_UART_RBR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_RBR_OFST))

/*
 * Register : Interrupt Enable Register - IER
 * 
 * Interrupt Enable Register:
 * 
 * Interrupt Enable Register, when the DLAB bit is zero; Divisor Latch (High), when
 * the DLAB bit is one.
 * 
 * Each of the bits used has a different function and will be detailed in the bit
 * 
 * field descriptions.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_IER_ERBFI         
 *  [1]    | RW     | 0x0   | ALT_UART_IER_ETBEI         
 *  [2]    | RW     | 0x0   | ALT_UART_IER_ELSI          
 *  [3]    | RW     | 0x0   | ALT_UART_IER_EDSSI         
 *  [6:4]  | R      | 0x0   | ALT_UART_IER_RSVD_IER_6TO4 
 *  [7]    | RW     | 0x0   | ALT_UART_IER_PTIME         
 *  [31:8] | R      | 0x0   | ALT_UART_IER_RSVD_IER_31TO8
 * 
 */
/*
 * Field : ERBFI
 * 
 * Interrupt Enable Register: ERBFI, Enable Received Data Available Interrupt.
 * 
 * This is used to enable/disable the generation of Received Data Available
 * Interrupt
 * 
 * and the Character Timeout Interrupt (if in FIFO mode and FIFO's enabled). These
 * are
 * 
 * the second highest priority interrupts.
 * 
 * 0 = disabled
 * 
 * 1 = enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                   
 * :------------------------------|:------|:-------------------------------
 *  ALT_UART_IER_ERBFI_E_DISABLED | 0x0   | Disable Receive data Interrupt
 *  ALT_UART_IER_ERBFI_E_ENABLED  | 0x1   | Enable Receive data Interrupt 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_IER_ERBFI
 * 
 * Disable Receive data Interrupt
 */
#define ALT_UART_IER_ERBFI_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_IER_ERBFI
 * 
 * Enable Receive data Interrupt
 */
#define ALT_UART_IER_ERBFI_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_IER_ERBFI register field. */
#define ALT_UART_IER_ERBFI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_IER_ERBFI register field. */
#define ALT_UART_IER_ERBFI_MSB        0
/* The width in bits of the ALT_UART_IER_ERBFI register field. */
#define ALT_UART_IER_ERBFI_WIDTH      1
/* The mask used to set the ALT_UART_IER_ERBFI register field value. */
#define ALT_UART_IER_ERBFI_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_IER_ERBFI register field value. */
#define ALT_UART_IER_ERBFI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_IER_ERBFI register field. */
#define ALT_UART_IER_ERBFI_RESET      0x0
/* Extracts the ALT_UART_IER_ERBFI field value from a register. */
#define ALT_UART_IER_ERBFI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_IER_ERBFI register field value suitable for setting the register. */
#define ALT_UART_IER_ERBFI_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ETBEI
 * 
 * Interrupt Enable Register: ETBEI, Enable Transmit Holding Register Empty
 * Interrupt.
 * 
 * This is used to enable/disable the generation of Transmitter Holding Register
 * Empty
 * 
 * Interrupt. This is the third highest priority interrupt.
 * 
 * 0 = disabled
 * 
 * 1 = enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                     
 * :------------------------------|:------|:---------------------------------
 *  ALT_UART_IER_ETBEI_E_DISABLED | 0x0   | Disable Transmit empty interrupt
 *  ALT_UART_IER_ETBEI_E_ENABLED  | 0x1   | Enable Transmit empty interrupt 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_IER_ETBEI
 * 
 * Disable Transmit empty interrupt
 */
#define ALT_UART_IER_ETBEI_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_IER_ETBEI
 * 
 * Enable Transmit empty interrupt
 */
#define ALT_UART_IER_ETBEI_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_IER_ETBEI register field. */
#define ALT_UART_IER_ETBEI_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_IER_ETBEI register field. */
#define ALT_UART_IER_ETBEI_MSB        1
/* The width in bits of the ALT_UART_IER_ETBEI register field. */
#define ALT_UART_IER_ETBEI_WIDTH      1
/* The mask used to set the ALT_UART_IER_ETBEI register field value. */
#define ALT_UART_IER_ETBEI_SET_MSK    0x00000002
/* The mask used to clear the ALT_UART_IER_ETBEI register field value. */
#define ALT_UART_IER_ETBEI_CLR_MSK    0xfffffffd
/* The reset value of the ALT_UART_IER_ETBEI register field. */
#define ALT_UART_IER_ETBEI_RESET      0x0
/* Extracts the ALT_UART_IER_ETBEI field value from a register. */
#define ALT_UART_IER_ETBEI_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_UART_IER_ETBEI register field value suitable for setting the register. */
#define ALT_UART_IER_ETBEI_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : ELSI
 * 
 * Interrupt Enable Register: ELSI, Enable Receiver Line Status Interrupt.
 * 
 * This is used to enable/disable the generation of Receiver Line Status Interrupt.
 * 
 * This is the highest priority interrupt.
 * 
 * 0 = disabled
 * 
 * 1 = enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description                           
 * :-----------------------------|:------|:---------------------------------------
 *  ALT_UART_IER_ELSI_E_DISABLED | 0x0   | Disable Receiver Line Status Interrupt
 *  ALT_UART_IER_ELSI_E_ENABLED  | 0x1   | Enable Receiver Line Status Interrupt 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_IER_ELSI
 * 
 * Disable Receiver Line Status Interrupt
 */
#define ALT_UART_IER_ELSI_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_IER_ELSI
 * 
 * Enable Receiver Line Status Interrupt
 */
#define ALT_UART_IER_ELSI_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_IER_ELSI register field. */
#define ALT_UART_IER_ELSI_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_IER_ELSI register field. */
#define ALT_UART_IER_ELSI_MSB        2
/* The width in bits of the ALT_UART_IER_ELSI register field. */
#define ALT_UART_IER_ELSI_WIDTH      1
/* The mask used to set the ALT_UART_IER_ELSI register field value. */
#define ALT_UART_IER_ELSI_SET_MSK    0x00000004
/* The mask used to clear the ALT_UART_IER_ELSI register field value. */
#define ALT_UART_IER_ELSI_CLR_MSK    0xfffffffb
/* The reset value of the ALT_UART_IER_ELSI register field. */
#define ALT_UART_IER_ELSI_RESET      0x0
/* Extracts the ALT_UART_IER_ELSI field value from a register. */
#define ALT_UART_IER_ELSI_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_UART_IER_ELSI register field value suitable for setting the register. */
#define ALT_UART_IER_ELSI_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : EDSSI
 * 
 * Interrupt Enable Register: EDSSI, Enable Modem Status Interrupt.
 * 
 * This is used to enable/disable the generation of Modem Status Interrupt. This is
 * 
 * the fourth highest priority interrupt.
 * 
 * 0 = disabled
 * 
 * 1 = enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                   
 * :------------------------------|:------|:-------------------------------
 *  ALT_UART_IER_EDSSI_E_DISABLED | 0x0   | Disable Modem Status Interrupt
 *  ALT_UART_IER_EDSSI_E_ENABLED  | 0x1   | Enable Modem Status Interrupt 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_IER_EDSSI
 * 
 * Disable Modem Status Interrupt
 */
#define ALT_UART_IER_EDSSI_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_IER_EDSSI
 * 
 * Enable Modem Status Interrupt
 */
#define ALT_UART_IER_EDSSI_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_IER_EDSSI register field. */
#define ALT_UART_IER_EDSSI_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_UART_IER_EDSSI register field. */
#define ALT_UART_IER_EDSSI_MSB        3
/* The width in bits of the ALT_UART_IER_EDSSI register field. */
#define ALT_UART_IER_EDSSI_WIDTH      1
/* The mask used to set the ALT_UART_IER_EDSSI register field value. */
#define ALT_UART_IER_EDSSI_SET_MSK    0x00000008
/* The mask used to clear the ALT_UART_IER_EDSSI register field value. */
#define ALT_UART_IER_EDSSI_CLR_MSK    0xfffffff7
/* The reset value of the ALT_UART_IER_EDSSI register field. */
#define ALT_UART_IER_EDSSI_RESET      0x0
/* Extracts the ALT_UART_IER_EDSSI field value from a register. */
#define ALT_UART_IER_EDSSI_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_UART_IER_EDSSI register field value suitable for setting the register. */
#define ALT_UART_IER_EDSSI_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RSVD_IER_6to4
 * 
 * Reserved bits [6:4] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_IER_RSVD_IER_6TO4 register field. */
#define ALT_UART_IER_RSVD_IER_6TO4_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_IER_RSVD_IER_6TO4 register field. */
#define ALT_UART_IER_RSVD_IER_6TO4_MSB        6
/* The width in bits of the ALT_UART_IER_RSVD_IER_6TO4 register field. */
#define ALT_UART_IER_RSVD_IER_6TO4_WIDTH      3
/* The mask used to set the ALT_UART_IER_RSVD_IER_6TO4 register field value. */
#define ALT_UART_IER_RSVD_IER_6TO4_SET_MSK    0x00000070
/* The mask used to clear the ALT_UART_IER_RSVD_IER_6TO4 register field value. */
#define ALT_UART_IER_RSVD_IER_6TO4_CLR_MSK    0xffffff8f
/* The reset value of the ALT_UART_IER_RSVD_IER_6TO4 register field. */
#define ALT_UART_IER_RSVD_IER_6TO4_RESET      0x0
/* Extracts the ALT_UART_IER_RSVD_IER_6TO4 field value from a register. */
#define ALT_UART_IER_RSVD_IER_6TO4_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_UART_IER_RSVD_IER_6TO4 register field value suitable for setting the register. */
#define ALT_UART_IER_RSVD_IER_6TO4_SET(value) (((value) << 4) & 0x00000070)

/*
 * Field : PTIME
 * 
 * Interrupt Enable Register: PTIME, Programmable THRE Interrupt Mode Enable.
 * 
 * Writeable only when THRE_MODE_USER == Enabled, always readable.  This is used
 * 
 * to enable/disable the generation of THRE Interrupt.
 * 
 * 0 = disabled
 * 
 * 1 = enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                             
 * :------------------------------|:------|:-----------------------------------------
 *  ALT_UART_IER_PTIME_E_DISABLED | 0x0   | Disable Programmable THRE Interrupt Mode
 *  ALT_UART_IER_PTIME_E_ENABLED  | 0x1   | Enable Programmable THRE Interrupt Mode 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_IER_PTIME
 * 
 * Disable Programmable THRE Interrupt Mode
 */
#define ALT_UART_IER_PTIME_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_IER_PTIME
 * 
 * Enable Programmable THRE Interrupt Mode
 */
#define ALT_UART_IER_PTIME_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_IER_PTIME register field. */
#define ALT_UART_IER_PTIME_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_UART_IER_PTIME register field. */
#define ALT_UART_IER_PTIME_MSB        7
/* The width in bits of the ALT_UART_IER_PTIME register field. */
#define ALT_UART_IER_PTIME_WIDTH      1
/* The mask used to set the ALT_UART_IER_PTIME register field value. */
#define ALT_UART_IER_PTIME_SET_MSK    0x00000080
/* The mask used to clear the ALT_UART_IER_PTIME register field value. */
#define ALT_UART_IER_PTIME_CLR_MSK    0xffffff7f
/* The reset value of the ALT_UART_IER_PTIME register field. */
#define ALT_UART_IER_PTIME_RESET      0x0
/* Extracts the ALT_UART_IER_PTIME field value from a register. */
#define ALT_UART_IER_PTIME_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_UART_IER_PTIME register field value suitable for setting the register. */
#define ALT_UART_IER_PTIME_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RSVD_IER_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_IER_RSVD_IER_31TO8 register field. */
#define ALT_UART_IER_RSVD_IER_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_IER_RSVD_IER_31TO8 register field. */
#define ALT_UART_IER_RSVD_IER_31TO8_MSB        31
/* The width in bits of the ALT_UART_IER_RSVD_IER_31TO8 register field. */
#define ALT_UART_IER_RSVD_IER_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_IER_RSVD_IER_31TO8 register field value. */
#define ALT_UART_IER_RSVD_IER_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_IER_RSVD_IER_31TO8 register field value. */
#define ALT_UART_IER_RSVD_IER_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_IER_RSVD_IER_31TO8 register field. */
#define ALT_UART_IER_RSVD_IER_31TO8_RESET      0x0
/* Extracts the ALT_UART_IER_RSVD_IER_31TO8 field value from a register. */
#define ALT_UART_IER_RSVD_IER_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_IER_RSVD_IER_31TO8 register field value suitable for setting the register. */
#define ALT_UART_IER_RSVD_IER_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_IER.
 */
struct ALT_UART_IER_s
{
    volatile uint32_t        ERBFI          :  1;  /* ALT_UART_IER_ERBFI */
    volatile uint32_t        ETBEI          :  1;  /* ALT_UART_IER_ETBEI */
    volatile uint32_t        ELSI           :  1;  /* ALT_UART_IER_ELSI */
    volatile uint32_t        EDSSI          :  1;  /* ALT_UART_IER_EDSSI */
    const volatile uint32_t  RSVD_IER_6to4  :  3;  /* ALT_UART_IER_RSVD_IER_6TO4 */
    volatile uint32_t        PTIME          :  1;  /* ALT_UART_IER_PTIME */
    const volatile uint32_t  RSVD_IER_31to8 : 24;  /* ALT_UART_IER_RSVD_IER_31TO8 */
};

/* The typedef declaration for register ALT_UART_IER. */
typedef struct ALT_UART_IER_s  ALT_UART_IER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_IER register. */
#define ALT_UART_IER_RESET       0x00000000
/* The byte offset of the ALT_UART_IER register from the beginning of the component. */
#define ALT_UART_IER_OFST        0x4
/* The address of the ALT_UART_IER register. */
#define ALT_UART_IER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_IER_OFST))

/*
 * Register : Interrupt Identification Register - IIR
 * 
 * Interrupt Identification Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [3:0]  | R      | 0x1   | ALT_UART_IIR_IID           
 *  [5:4]  | R      | 0x0   | ALT_UART_IIR_RSVD_IIR_5TO4 
 *  [7:6]  | R      | 0x0   | ALT_UART_IIR_FIFOSE        
 *  [31:8] | R      | 0x0   | ALT_UART_IIR_RSVD_IIR_31TO8
 * 
 */
/*
 * Field : IID
 * 
 * Bits[3:0], Interrupt ID (or IID):
 * 
 * This indicates the highest priority pending interrupt which can be one of the
 * 
 * following types:
 * 
 * 0000 = modem status.
 * 
 * 0001 = no interrupt pending.
 * 
 * 0010 = THR empty.
 * 
 * 0100 = received data available.
 * 
 * 0110 = receiver line status.
 * 
 * 0111 = busy detect.
 * 
 * 1100 = character timeout.
 * 
 * Note, an interrupt of type 0111 (busy detect) will never get indicated if
 * 
 * UART_16550_COMPATIBLE == YES in coreConsultant.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description            
 * :-------------------------------------------|:------|:------------------------
 *  ALT_UART_IIR_IID_E_MODEM_STATUS            | 0x0   | modem status           
 *  ALT_UART_IIR_IID_E_NO_INTERRUPT_PENDING    | 0x1   | no interrupt pending   
 *  ALT_UART_IIR_IID_E_THR_EMPTY               | 0x2   | THR empty              
 *  ALT_UART_IIR_IID_E_RECEIVED_DATA_AVAILABLE | 0x4   | received data available
 *  ALT_UART_IIR_IID_E_RECEIVER_LINE_STATUS    | 0x5   | receiver line status   
 *  ALT_UART_IIR_IID_E_BUSY_DETECT             | 0x7   | busy detect            
 *  ALT_UART_IIR_IID_E_CHARACTER_TIMEOUT       | 0xc   | character timeout      
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_IIR_IID
 * 
 * modem status
 */
#define ALT_UART_IIR_IID_E_MODEM_STATUS             0x0
/*
 * Enumerated value for register field ALT_UART_IIR_IID
 * 
 * no interrupt pending
 */
#define ALT_UART_IIR_IID_E_NO_INTERRUPT_PENDING     0x1
/*
 * Enumerated value for register field ALT_UART_IIR_IID
 * 
 * THR empty
 */
#define ALT_UART_IIR_IID_E_THR_EMPTY                0x2
/*
 * Enumerated value for register field ALT_UART_IIR_IID
 * 
 * received data available
 */
#define ALT_UART_IIR_IID_E_RECEIVED_DATA_AVAILABLE  0x4
/*
 * Enumerated value for register field ALT_UART_IIR_IID
 * 
 * receiver line status
 */
#define ALT_UART_IIR_IID_E_RECEIVER_LINE_STATUS     0x5
/*
 * Enumerated value for register field ALT_UART_IIR_IID
 * 
 * busy detect
 */
#define ALT_UART_IIR_IID_E_BUSY_DETECT              0x7
/*
 * Enumerated value for register field ALT_UART_IIR_IID
 * 
 * character timeout
 */
#define ALT_UART_IIR_IID_E_CHARACTER_TIMEOUT        0xc

/* The Least Significant Bit (LSB) position of the ALT_UART_IIR_IID register field. */
#define ALT_UART_IIR_IID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_IIR_IID register field. */
#define ALT_UART_IIR_IID_MSB        3
/* The width in bits of the ALT_UART_IIR_IID register field. */
#define ALT_UART_IIR_IID_WIDTH      4
/* The mask used to set the ALT_UART_IIR_IID register field value. */
#define ALT_UART_IIR_IID_SET_MSK    0x0000000f
/* The mask used to clear the ALT_UART_IIR_IID register field value. */
#define ALT_UART_IIR_IID_CLR_MSK    0xfffffff0
/* The reset value of the ALT_UART_IIR_IID register field. */
#define ALT_UART_IIR_IID_RESET      0x1
/* Extracts the ALT_UART_IIR_IID field value from a register. */
#define ALT_UART_IIR_IID_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_UART_IIR_IID register field value suitable for setting the register. */
#define ALT_UART_IIR_IID_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : RSVD_IIR_5to4
 * 
 * Reserved bits [5:4] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_IIR_RSVD_IIR_5TO4 register field. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_IIR_RSVD_IIR_5TO4 register field. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_MSB        5
/* The width in bits of the ALT_UART_IIR_RSVD_IIR_5TO4 register field. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_WIDTH      2
/* The mask used to set the ALT_UART_IIR_RSVD_IIR_5TO4 register field value. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_SET_MSK    0x00000030
/* The mask used to clear the ALT_UART_IIR_RSVD_IIR_5TO4 register field value. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_CLR_MSK    0xffffffcf
/* The reset value of the ALT_UART_IIR_RSVD_IIR_5TO4 register field. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_RESET      0x0
/* Extracts the ALT_UART_IIR_RSVD_IIR_5TO4 field value from a register. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_UART_IIR_RSVD_IIR_5TO4 register field value suitable for setting the register. */
#define ALT_UART_IIR_RSVD_IIR_5TO4_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : FIFOSE
 * 
 * Bits[7:6], FIFO's Enabled (or FIFOSE):
 * 
 * This is used to indicate whether the FIFO's are enabled or disabled.
 * 
 * 00 = disabled.
 * 
 * 11 = enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description       
 * :-------------------------------|:------|:-------------------
 *  ALT_UART_IIR_FIFOSE_E_DISABLED | 0x0   | FIFOs are disabled
 *  ALT_UART_IIR_FIFOSE_E_ENABLED  | 0x3   | FIFOs are enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_IIR_FIFOSE
 * 
 * FIFOs are disabled
 */
#define ALT_UART_IIR_FIFOSE_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_UART_IIR_FIFOSE
 * 
 * FIFOs are enabled
 */
#define ALT_UART_IIR_FIFOSE_E_ENABLED   0x3

/* The Least Significant Bit (LSB) position of the ALT_UART_IIR_FIFOSE register field. */
#define ALT_UART_IIR_FIFOSE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_UART_IIR_FIFOSE register field. */
#define ALT_UART_IIR_FIFOSE_MSB        7
/* The width in bits of the ALT_UART_IIR_FIFOSE register field. */
#define ALT_UART_IIR_FIFOSE_WIDTH      2
/* The mask used to set the ALT_UART_IIR_FIFOSE register field value. */
#define ALT_UART_IIR_FIFOSE_SET_MSK    0x000000c0
/* The mask used to clear the ALT_UART_IIR_FIFOSE register field value. */
#define ALT_UART_IIR_FIFOSE_CLR_MSK    0xffffff3f
/* The reset value of the ALT_UART_IIR_FIFOSE register field. */
#define ALT_UART_IIR_FIFOSE_RESET      0x0
/* Extracts the ALT_UART_IIR_FIFOSE field value from a register. */
#define ALT_UART_IIR_FIFOSE_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_UART_IIR_FIFOSE register field value suitable for setting the register. */
#define ALT_UART_IIR_FIFOSE_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : RSVD_IIR_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_IIR_RSVD_IIR_31TO8 register field. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_IIR_RSVD_IIR_31TO8 register field. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_MSB        31
/* The width in bits of the ALT_UART_IIR_RSVD_IIR_31TO8 register field. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_IIR_RSVD_IIR_31TO8 register field value. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_IIR_RSVD_IIR_31TO8 register field value. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_IIR_RSVD_IIR_31TO8 register field. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_RESET      0x0
/* Extracts the ALT_UART_IIR_RSVD_IIR_31TO8 field value from a register. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_IIR_RSVD_IIR_31TO8 register field value suitable for setting the register. */
#define ALT_UART_IIR_RSVD_IIR_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_IIR.
 */
struct ALT_UART_IIR_s
{
    const volatile uint32_t  IID            :  4;  /* ALT_UART_IIR_IID */
    const volatile uint32_t  RSVD_IIR_5to4  :  2;  /* ALT_UART_IIR_RSVD_IIR_5TO4 */
    const volatile uint32_t  FIFOSE         :  2;  /* ALT_UART_IIR_FIFOSE */
    const volatile uint32_t  RSVD_IIR_31to8 : 24;  /* ALT_UART_IIR_RSVD_IIR_31TO8 */
};

/* The typedef declaration for register ALT_UART_IIR. */
typedef struct ALT_UART_IIR_s  ALT_UART_IIR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_IIR register. */
#define ALT_UART_IIR_RESET       0x00000001
/* The byte offset of the ALT_UART_IIR register from the beginning of the component. */
#define ALT_UART_IIR_OFST        0x8
/* The address of the ALT_UART_IIR register. */
#define ALT_UART_IIR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_IIR_OFST))

/*
 * Register : Line Control Register - LCR
 * 
 * Line Control Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [1:0]  | RW     | 0x0   | ALT_UART_LCR_DLS           
 *  [2]    | RW     | 0x0   | ALT_UART_LCR_STOP          
 *  [3]    | RW     | 0x0   | ALT_UART_LCR_PEN           
 *  [4]    | RW     | 0x0   | ALT_UART_LCR_EPS           
 *  [5]    | RW     | 0x0   | ALT_UART_LCR_SP            
 *  [6]    | RW     | 0x0   | ALT_UART_LCR_BREAK         
 *  [7]    | RW     | 0x0   | ALT_UART_LCR_DLAB          
 *  [31:8] | R      | 0x0   | ALT_UART_LCR_RSVD_LCR_31TO8
 * 
 */
/*
 * Field : DLS
 * 
 * Data Length Select.
 * 
 * If UART_16550_COMPATIBLE == NO then, writeable only when UART is not busy
 * (USR[0]
 * 
 * is zero), otherwise always writable, always readable. This is used to select the
 * 
 * number of data bits per character that the peripheral will transmit and receive.
 * 
 * The number of bit that may be selected are as follows:
 * 
 * 00 = 5 bits
 * 
 * 01 = 6 bits
 * 
 * 10 = 7 bits
 * 
 * 11 = 8 bits
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description              
 * :------------------------------|:------|:--------------------------
 *  ALT_UART_LCR_DLS_E_CHAR_5BITS | 0x0   | 5 data bits per character
 *  ALT_UART_LCR_DLS_E_CHAR_6BITS | 0x1   | 6 data bits per character
 *  ALT_UART_LCR_DLS_E_CHAR_7BITS | 0x2   | 7 data bits per character
 *  ALT_UART_LCR_DLS_E_CHAR_8BITS | 0x3   | 8 data bits per character
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LCR_DLS
 * 
 * 5 data bits per character
 */
#define ALT_UART_LCR_DLS_E_CHAR_5BITS   0x0
/*
 * Enumerated value for register field ALT_UART_LCR_DLS
 * 
 * 6 data bits per character
 */
#define ALT_UART_LCR_DLS_E_CHAR_6BITS   0x1
/*
 * Enumerated value for register field ALT_UART_LCR_DLS
 * 
 * 7 data bits per character
 */
#define ALT_UART_LCR_DLS_E_CHAR_7BITS   0x2
/*
 * Enumerated value for register field ALT_UART_LCR_DLS
 * 
 * 8 data bits per character
 */
#define ALT_UART_LCR_DLS_E_CHAR_8BITS   0x3

/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_DLS register field. */
#define ALT_UART_LCR_DLS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_DLS register field. */
#define ALT_UART_LCR_DLS_MSB        1
/* The width in bits of the ALT_UART_LCR_DLS register field. */
#define ALT_UART_LCR_DLS_WIDTH      2
/* The mask used to set the ALT_UART_LCR_DLS register field value. */
#define ALT_UART_LCR_DLS_SET_MSK    0x00000003
/* The mask used to clear the ALT_UART_LCR_DLS register field value. */
#define ALT_UART_LCR_DLS_CLR_MSK    0xfffffffc
/* The reset value of the ALT_UART_LCR_DLS register field. */
#define ALT_UART_LCR_DLS_RESET      0x0
/* Extracts the ALT_UART_LCR_DLS field value from a register. */
#define ALT_UART_LCR_DLS_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_UART_LCR_DLS register field value suitable for setting the register. */
#define ALT_UART_LCR_DLS_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : STOP
 * 
 * Number of stop bits.
 * 
 * If UART_16550_COMPATIBLE == NO then, writeable only when UART is not busy
 * (USR[0]
 * 
 * is zero), otherwise always writable, always readable. This is used to select the
 * number
 * 
 * of stop bits per character that the peripheral will transmit and receive. If set
 * to
 * 
 * zero, one stop bit is transmitted in the serial data. If set to one and the data
 * 
 * bits are set to 5 (LCR[1:0] set to zero) one and a half stop bits is
 * transmitted.
 * 
 * Otherwise, two stop bits are transmitted.
 * 
 * Note that regardless of the number of stop bits selected the receiver will only
 * 
 * check the first stop bit.
 * 
 * 0 = 1 stop bit
 * 
 * 1 = 1.5 stop bits when DLS (LCR[1:0]) is zero,
 * 
 * else 2 stop bit
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                    
 * :----------------------------------------|:------|:------------------------------------------------
 *  ALT_UART_LCR_STOP_E_STOP_1BIT           | 0x0   | 1 stop bit                                     
 *  ALT_UART_LCR_STOP_E_STOP_1_5BIT_OR_2BIT | 0x1   | 1.5 stop bits when DLS (LCR[1:0]) is zero, else
 * :                                        |       | 2 stop bit                                     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LCR_STOP
 * 
 * 1 stop bit
 */
#define ALT_UART_LCR_STOP_E_STOP_1BIT           0x0
/*
 * Enumerated value for register field ALT_UART_LCR_STOP
 * 
 * 1.5 stop bits when DLS (LCR[1:0]) is zero,
 * 
 * else 2 stop bit
 */
#define ALT_UART_LCR_STOP_E_STOP_1_5BIT_OR_2BIT 0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_STOP register field. */
#define ALT_UART_LCR_STOP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_STOP register field. */
#define ALT_UART_LCR_STOP_MSB        2
/* The width in bits of the ALT_UART_LCR_STOP register field. */
#define ALT_UART_LCR_STOP_WIDTH      1
/* The mask used to set the ALT_UART_LCR_STOP register field value. */
#define ALT_UART_LCR_STOP_SET_MSK    0x00000004
/* The mask used to clear the ALT_UART_LCR_STOP register field value. */
#define ALT_UART_LCR_STOP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_UART_LCR_STOP register field. */
#define ALT_UART_LCR_STOP_RESET      0x0
/* Extracts the ALT_UART_LCR_STOP field value from a register. */
#define ALT_UART_LCR_STOP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_UART_LCR_STOP register field value suitable for setting the register. */
#define ALT_UART_LCR_STOP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : PEN
 * 
 * Parity Enable.
 * 
 * If UART_16550_COMPATIBLE == NO then, writeable only when UART is not busy
 * (USR[0]
 * 
 * is zero), otherwise always writable, always readable. This bit is used to enable
 * 
 * and disable parity generation and detection in transmitted and received serial
 * 
 * character respectively.
 * 
 * 0 = parity disabled
 * 
 * 1 = parity enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description   
 * :----------------------------|:------|:---------------
 *  ALT_UART_LCR_PEN_E_DISABLED | 0x0   | disable parity
 *  ALT_UART_LCR_PEN_E_ENABLED  | 0x1   | enable parity 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LCR_PEN
 * 
 * disable parity
 */
#define ALT_UART_LCR_PEN_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_LCR_PEN
 * 
 * enable parity
 */
#define ALT_UART_LCR_PEN_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_PEN register field. */
#define ALT_UART_LCR_PEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_PEN register field. */
#define ALT_UART_LCR_PEN_MSB        3
/* The width in bits of the ALT_UART_LCR_PEN register field. */
#define ALT_UART_LCR_PEN_WIDTH      1
/* The mask used to set the ALT_UART_LCR_PEN register field value. */
#define ALT_UART_LCR_PEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_UART_LCR_PEN register field value. */
#define ALT_UART_LCR_PEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_UART_LCR_PEN register field. */
#define ALT_UART_LCR_PEN_RESET      0x0
/* Extracts the ALT_UART_LCR_PEN field value from a register. */
#define ALT_UART_LCR_PEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_UART_LCR_PEN register field value suitable for setting the register. */
#define ALT_UART_LCR_PEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : EPS
 * 
 * Even Parity Select.
 * 
 * If UART_16550_COMPATIBLE == NO then, writeable only when UART is not busy
 * (USR[0]
 * 
 * is zero), otherwise always writable, always readable. This is used to select
 * 
 * between even and odd parity, when parity is enabled (PEN set to one). If set to
 * 
 * one, an even number of logic '1's is transmitted or checked. If set to zero, an
 * 
 * odd number of logic '1's is transmitted or checked.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description                             
 * :-------------------------------|:------|:-----------------------------------------
 *  ALT_UART_LCR_EPS_E_ODD_PARITY  | 0x0   | an odd parity is transmitted or checked 
 *  ALT_UART_LCR_EPS_E_EVEN_PARITY | 0x1   | an even parity is transmitted or checked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LCR_EPS
 * 
 * an odd parity is transmitted or checked
 */
#define ALT_UART_LCR_EPS_E_ODD_PARITY   0x0
/*
 * Enumerated value for register field ALT_UART_LCR_EPS
 * 
 * an even parity is transmitted or checked
 */
#define ALT_UART_LCR_EPS_E_EVEN_PARITY  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_EPS register field. */
#define ALT_UART_LCR_EPS_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_EPS register field. */
#define ALT_UART_LCR_EPS_MSB        4
/* The width in bits of the ALT_UART_LCR_EPS register field. */
#define ALT_UART_LCR_EPS_WIDTH      1
/* The mask used to set the ALT_UART_LCR_EPS register field value. */
#define ALT_UART_LCR_EPS_SET_MSK    0x00000010
/* The mask used to clear the ALT_UART_LCR_EPS register field value. */
#define ALT_UART_LCR_EPS_CLR_MSK    0xffffffef
/* The reset value of the ALT_UART_LCR_EPS register field. */
#define ALT_UART_LCR_EPS_RESET      0x0
/* Extracts the ALT_UART_LCR_EPS field value from a register. */
#define ALT_UART_LCR_EPS_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_UART_LCR_EPS register field value suitable for setting the register. */
#define ALT_UART_LCR_EPS_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SP
 * 
 * From DW_apb_uart_regfile.sv:
 * 
 * // aaraujo @ 17/05/2011 : CRM_9000431453
 * 
 * // Stick parity lcr_ir[5] is now programmable
 * 
 * lcr_ir[5:0] <= ipwdata[5:0];
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description          
 * :---------------------------|:------|:----------------------
 *  ALT_UART_LCR_SP_E_DISABLED | 0x0   | Stick parity disabled
 *  ALT_UART_LCR_SP_E_ENABLED  | 0x1   | Stick parity enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LCR_SP
 * 
 * Stick parity disabled
 */
#define ALT_UART_LCR_SP_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_UART_LCR_SP
 * 
 * Stick parity enabled
 */
#define ALT_UART_LCR_SP_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_SP register field. */
#define ALT_UART_LCR_SP_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_SP register field. */
#define ALT_UART_LCR_SP_MSB        5
/* The width in bits of the ALT_UART_LCR_SP register field. */
#define ALT_UART_LCR_SP_WIDTH      1
/* The mask used to set the ALT_UART_LCR_SP register field value. */
#define ALT_UART_LCR_SP_SET_MSK    0x00000020
/* The mask used to clear the ALT_UART_LCR_SP register field value. */
#define ALT_UART_LCR_SP_CLR_MSK    0xffffffdf
/* The reset value of the ALT_UART_LCR_SP register field. */
#define ALT_UART_LCR_SP_RESET      0x0
/* Extracts the ALT_UART_LCR_SP field value from a register. */
#define ALT_UART_LCR_SP_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_UART_LCR_SP register field value suitable for setting the register. */
#define ALT_UART_LCR_SP_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Break
 * 
 * Break Control Bit.
 * 
 * This is used to cause a break condition to be transmitted to the receiving
 * device.
 * 
 * If set to one the serial output is forced to the spacing (logic 0) state. When
 * 
 * not in Loopback Mode, as determined by MCR[4], the sout line is forced low until
 * 
 * the Break bit is cleared. If SIR_MODE == Enabled and active (MCR[6] set to one)
 * 
 * the sir_out_n line is continuously pulsed. When in Loopback Mode, the break
 * 
 * condition is internally looped back to the receiver and the sir_out_n line is
 * 
 * forced low.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                                    
 * :------------------------------|:------|:------------------------------------------------
 *  ALT_UART_LCR_BREAK_E_DISABLED | 0x0   | Serial output is released for data transmission
 *  ALT_UART_LCR_BREAK_E_ENABLED  | 0x1   | Serial output is forced to spacing state       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LCR_BREAK
 * 
 * Serial output is released for data transmission
 */
#define ALT_UART_LCR_BREAK_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_LCR_BREAK
 * 
 * Serial output is forced to spacing state
 */
#define ALT_UART_LCR_BREAK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_BREAK register field. */
#define ALT_UART_LCR_BREAK_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_BREAK register field. */
#define ALT_UART_LCR_BREAK_MSB        6
/* The width in bits of the ALT_UART_LCR_BREAK register field. */
#define ALT_UART_LCR_BREAK_WIDTH      1
/* The mask used to set the ALT_UART_LCR_BREAK register field value. */
#define ALT_UART_LCR_BREAK_SET_MSK    0x00000040
/* The mask used to clear the ALT_UART_LCR_BREAK register field value. */
#define ALT_UART_LCR_BREAK_CLR_MSK    0xffffffbf
/* The reset value of the ALT_UART_LCR_BREAK register field. */
#define ALT_UART_LCR_BREAK_RESET      0x0
/* Extracts the ALT_UART_LCR_BREAK field value from a register. */
#define ALT_UART_LCR_BREAK_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_UART_LCR_BREAK register field value suitable for setting the register. */
#define ALT_UART_LCR_BREAK_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : DLAB
 * 
 * Divisor Latch Access Bit.
 * 
 * If UART_16550_COMPATIBLE == NO then, writeable only when UART is not busy
 * (USR[0]
 * 
 * is zero), otherwise always writable, always readable. This bit is used to enable
 * 
 * reading and writing of the Divisor Latch register (DLL and DLH) to set the baud
 * 
 * rate of the UART. This bit must be cleared after initial baud rate setup in
 * order
 * 
 * to access other registers.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description                                  
 * :-----------------------------|:------|:----------------------------------------------
 *  ALT_UART_LCR_DLAB_E_DISABLED | 0x0   | Divisor Latch register is writable only when 
 * :                             |       | UART Not BUSY                                
 *  ALT_UART_LCR_DLAB_E_ENABLED  | 0x1   | Divisor Latch register is always readable and
 * :                             |       | writable                                     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LCR_DLAB
 * 
 * Divisor Latch register is writable only when UART Not BUSY
 */
#define ALT_UART_LCR_DLAB_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_LCR_DLAB
 * 
 * Divisor Latch register is always readable and writable
 */
#define ALT_UART_LCR_DLAB_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_DLAB register field. */
#define ALT_UART_LCR_DLAB_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_DLAB register field. */
#define ALT_UART_LCR_DLAB_MSB        7
/* The width in bits of the ALT_UART_LCR_DLAB register field. */
#define ALT_UART_LCR_DLAB_WIDTH      1
/* The mask used to set the ALT_UART_LCR_DLAB register field value. */
#define ALT_UART_LCR_DLAB_SET_MSK    0x00000080
/* The mask used to clear the ALT_UART_LCR_DLAB register field value. */
#define ALT_UART_LCR_DLAB_CLR_MSK    0xffffff7f
/* The reset value of the ALT_UART_LCR_DLAB register field. */
#define ALT_UART_LCR_DLAB_RESET      0x0
/* Extracts the ALT_UART_LCR_DLAB field value from a register. */
#define ALT_UART_LCR_DLAB_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_UART_LCR_DLAB register field value suitable for setting the register. */
#define ALT_UART_LCR_DLAB_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RSVD_LCR_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_LCR_RSVD_LCR_31TO8 register field. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_LCR_RSVD_LCR_31TO8 register field. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_MSB        31
/* The width in bits of the ALT_UART_LCR_RSVD_LCR_31TO8 register field. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_LCR_RSVD_LCR_31TO8 register field value. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_LCR_RSVD_LCR_31TO8 register field value. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_LCR_RSVD_LCR_31TO8 register field. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_RESET      0x0
/* Extracts the ALT_UART_LCR_RSVD_LCR_31TO8 field value from a register. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_LCR_RSVD_LCR_31TO8 register field value suitable for setting the register. */
#define ALT_UART_LCR_RSVD_LCR_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_LCR.
 */
struct ALT_UART_LCR_s
{
    volatile uint32_t        DLS            :  2;  /* ALT_UART_LCR_DLS */
    volatile uint32_t        STOP           :  1;  /* ALT_UART_LCR_STOP */
    volatile uint32_t        PEN            :  1;  /* ALT_UART_LCR_PEN */
    volatile uint32_t        EPS            :  1;  /* ALT_UART_LCR_EPS */
    volatile uint32_t        SP             :  1;  /* ALT_UART_LCR_SP */
    volatile uint32_t        Break          :  1;  /* ALT_UART_LCR_BREAK */
    volatile uint32_t        DLAB           :  1;  /* ALT_UART_LCR_DLAB */
    const volatile uint32_t  RSVD_LCR_31to8 : 24;  /* ALT_UART_LCR_RSVD_LCR_31TO8 */
};

/* The typedef declaration for register ALT_UART_LCR. */
typedef struct ALT_UART_LCR_s  ALT_UART_LCR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_LCR register. */
#define ALT_UART_LCR_RESET       0x00000000
/* The byte offset of the ALT_UART_LCR register from the beginning of the component. */
#define ALT_UART_LCR_OFST        0xc
/* The address of the ALT_UART_LCR register. */
#define ALT_UART_LCR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_LCR_OFST))

/*
 * Register : Modem Control Register - MCR
 * 
 * Modem Control Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_MCR_DTR           
 *  [1]    | RW     | 0x0   | ALT_UART_MCR_RTS           
 *  [2]    | RW     | 0x0   | ALT_UART_MCR_OUT1          
 *  [3]    | RW     | 0x0   | ALT_UART_MCR_OUT2          
 *  [4]    | RW     | 0x0   | ALT_UART_MCR_LOOPBACK      
 *  [5]    | RW     | 0x0   | ALT_UART_MCR_AFCE          
 *  [6]    | R      | 0x0   | ALT_UART_MCR_SIRE          
 *  [31:7] | R      | 0x0   | ALT_UART_MCR_RSVD_MCR_31TO7
 * 
 */
/*
 * Field : DTR
 * 
 * Data Terminal Ready.
 * 
 * This is used to directly control the Data Terminal Ready (dtr_n) output. The
 * value
 * 
 * written to this location is inverted and driven out on dtr_n, that is:
 * 
 * 0 = dtr_n de-asserted (logic 1)
 * 
 * 1 = dtr_n asserted (logic 0)
 * 
 * The Data Terminal Ready output is used to inform the modem or data set that the
 * 
 * UART is ready to establish communications. Note that in Loopback mode (MCR[4]
 * 
 * set to one), the dtr_n output is held inactive high while the value of this
 * 
 * location is internally looped back to an input.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description                                   
 * :----------------------------|:------|:-----------------------------------------------
 *  ALT_UART_MCR_DTR_E_INACTIVE | 0x0   | Data Terminal Ready dtr_n de-asserted (logic1)
 *  ALT_UART_MCR_DTR_E_ACTIVE   | 0x1   | Data Terminal Ready dtr_n asserted (logic 0)  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MCR_DTR
 * 
 * Data Terminal Ready dtr_n de-asserted (logic1)
 */
#define ALT_UART_MCR_DTR_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_UART_MCR_DTR
 * 
 * Data Terminal Ready dtr_n asserted (logic 0)
 */
#define ALT_UART_MCR_DTR_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_DTR register field. */
#define ALT_UART_MCR_DTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_DTR register field. */
#define ALT_UART_MCR_DTR_MSB        0
/* The width in bits of the ALT_UART_MCR_DTR register field. */
#define ALT_UART_MCR_DTR_WIDTH      1
/* The mask used to set the ALT_UART_MCR_DTR register field value. */
#define ALT_UART_MCR_DTR_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_MCR_DTR register field value. */
#define ALT_UART_MCR_DTR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_MCR_DTR register field. */
#define ALT_UART_MCR_DTR_RESET      0x0
/* Extracts the ALT_UART_MCR_DTR field value from a register. */
#define ALT_UART_MCR_DTR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_MCR_DTR register field value suitable for setting the register. */
#define ALT_UART_MCR_DTR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RTS
 * 
 * Request to Send.
 * 
 * This is used to directly control the Request to Send (rts_n) output. The Request
 * 
 * To Send (rts_n) output is used to inform the modem or data set that the UART is
 * 
 * ready to exchange data.
 * 
 * When Auto RTS Flow Control is not enabled (MCR[5] set to zero), the rts_n signal
 * 
 * is set low by programming MCR[1] (RTS) to a high.
 * 
 * In Auto Flow Control, AFCE_MODE == Enabled and active (MCR[5] set to one) and
 * 
 * FIFO's enable (FCR[0] set to one), the rts_n output is controlled in the same
 * way,
 * 
 * but is also gated with the receiver FIFO threshold trigger (rts_n is inactive
 * high
 * 
 * when above the threshold).
 * 
 * The rts_n signal will be de-asserted when MCR[1] is set low.
 * 
 * Note that in Loopback mode (MCR[4] set to one), the rts_n output is held
 * inactive
 * 
 * high while the value of this location is internally looped back to an input.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description                                
 * :----------------------------|:------|:--------------------------------------------
 *  ALT_UART_MCR_RTS_E_INACTIVE | 0x0   | Request to Send rts_n de-asserted (logic 1)
 *  ALT_UART_MCR_RTS_E_ACTIVE   | 0x1   | Request to Send rts_n asserted (logic 0)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MCR_RTS
 * 
 * Request to Send rts_n de-asserted (logic 1)
 */
#define ALT_UART_MCR_RTS_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_UART_MCR_RTS
 * 
 * Request to Send rts_n asserted (logic 0)
 */
#define ALT_UART_MCR_RTS_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_RTS register field. */
#define ALT_UART_MCR_RTS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_RTS register field. */
#define ALT_UART_MCR_RTS_MSB        1
/* The width in bits of the ALT_UART_MCR_RTS register field. */
#define ALT_UART_MCR_RTS_WIDTH      1
/* The mask used to set the ALT_UART_MCR_RTS register field value. */
#define ALT_UART_MCR_RTS_SET_MSK    0x00000002
/* The mask used to clear the ALT_UART_MCR_RTS register field value. */
#define ALT_UART_MCR_RTS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_UART_MCR_RTS register field. */
#define ALT_UART_MCR_RTS_RESET      0x0
/* Extracts the ALT_UART_MCR_RTS field value from a register. */
#define ALT_UART_MCR_RTS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_UART_MCR_RTS register field value suitable for setting the register. */
#define ALT_UART_MCR_RTS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : OUT1
 * 
 * OUT1.
 * 
 * This is used to directly control the user-designated Output1 (out1_n) output.
 * The
 * 
 * value written to this location is inverted and driven out on out1_n, that is:
 * 
 * 0 = out1_n de-asserted (logic 1)
 * 
 * 1 = out1_n asserted (logic 0)
 * 
 * Note that in Loopback mode (MCR[4] set to one), the out1_n output is held
 * inactive high
 * 
 * while the value of this location is internally looped back to an input.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description                 
 * :---------------------------|:------|:-----------------------------
 *  ALT_UART_MCR_OUT1_E_OUT1_0 | 0x0   | out1_n de-asserted (logic 1)
 *  ALT_UART_MCR_OUT1_E_OUT1_1 | 0x1   | out1_n asserted (logic 0)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MCR_OUT1
 * 
 * out1_n de-asserted (logic 1)
 */
#define ALT_UART_MCR_OUT1_E_OUT1_0  0x0
/*
 * Enumerated value for register field ALT_UART_MCR_OUT1
 * 
 * out1_n asserted (logic 0)
 */
#define ALT_UART_MCR_OUT1_E_OUT1_1  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_OUT1 register field. */
#define ALT_UART_MCR_OUT1_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_OUT1 register field. */
#define ALT_UART_MCR_OUT1_MSB        2
/* The width in bits of the ALT_UART_MCR_OUT1 register field. */
#define ALT_UART_MCR_OUT1_WIDTH      1
/* The mask used to set the ALT_UART_MCR_OUT1 register field value. */
#define ALT_UART_MCR_OUT1_SET_MSK    0x00000004
/* The mask used to clear the ALT_UART_MCR_OUT1 register field value. */
#define ALT_UART_MCR_OUT1_CLR_MSK    0xfffffffb
/* The reset value of the ALT_UART_MCR_OUT1 register field. */
#define ALT_UART_MCR_OUT1_RESET      0x0
/* Extracts the ALT_UART_MCR_OUT1 field value from a register. */
#define ALT_UART_MCR_OUT1_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_UART_MCR_OUT1 register field value suitable for setting the register. */
#define ALT_UART_MCR_OUT1_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : OUT2
 * 
 * OUT2.
 * 
 * This is used to directly control the user-designated Output2 (out2_n) output.
 * The
 * 
 * value written to this location is inverted and driven out on out2_n, that is:
 * 
 * 0 = out2_n de-asserted (logic 1)
 * 
 * 1 = out2_n asserted (logic 0)
 * 
 * Note that in Loopback mode (MCR[4] set to one), the out2_n output is held
 * inactive
 * 
 * high while the value of this location is internally looped back to an input.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description                 
 * :---------------------------|:------|:-----------------------------
 *  ALT_UART_MCR_OUT2_E_OUT2_0 | 0x0   | out2_n de-asserted (logic 1)
 *  ALT_UART_MCR_OUT2_E_OUT2_1 | 0x1   | out2_n asserted (logic 0)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MCR_OUT2
 * 
 * out2_n de-asserted (logic 1)
 */
#define ALT_UART_MCR_OUT2_E_OUT2_0  0x0
/*
 * Enumerated value for register field ALT_UART_MCR_OUT2
 * 
 * out2_n asserted (logic 0)
 */
#define ALT_UART_MCR_OUT2_E_OUT2_1  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_OUT2 register field. */
#define ALT_UART_MCR_OUT2_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_OUT2 register field. */
#define ALT_UART_MCR_OUT2_MSB        3
/* The width in bits of the ALT_UART_MCR_OUT2 register field. */
#define ALT_UART_MCR_OUT2_WIDTH      1
/* The mask used to set the ALT_UART_MCR_OUT2 register field value. */
#define ALT_UART_MCR_OUT2_SET_MSK    0x00000008
/* The mask used to clear the ALT_UART_MCR_OUT2 register field value. */
#define ALT_UART_MCR_OUT2_CLR_MSK    0xfffffff7
/* The reset value of the ALT_UART_MCR_OUT2 register field. */
#define ALT_UART_MCR_OUT2_RESET      0x0
/* Extracts the ALT_UART_MCR_OUT2 field value from a register. */
#define ALT_UART_MCR_OUT2_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_UART_MCR_OUT2 register field value suitable for setting the register. */
#define ALT_UART_MCR_OUT2_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : LoopBack
 * 
 * LoopBack Bit.
 * 
 * This is used to put the UART into a diagnostic mode for test purposes.
 * 
 * If operating in UART mode (SIR_MODE != Enabled OR NOT active, MCR[6] set to
 * zero),
 * 
 * data on the sout line is held high, while serial data output is looped back to
 * the
 * 
 * sin line, internally. In this mode all the interrupts are fully functional.
 * Also,
 * 
 * in loopback mode, the modem control inputs (dsr_n, cts_n, ri_n, dcd_n) are
 * 
 * disconnected and the modem control outputs (dtr_n, rts_n, out1_n, out2_n) are
 * looped
 * 
 * back to the inputs, internally.
 * 
 * If operating in infrared mode (SIR_MODE == Enabled AND active, MCR[6] set to
 * one),
 * 
 * data on the sir_out_n line is held low, while serial data output is inverted and
 * 
 * looped back to the sir_in line.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description           
 * :---------------------------------|:------|:-----------------------
 *  ALT_UART_MCR_LOOPBACK_E_DISABLED | 0x0   | Loopback mode disabled
 *  ALT_UART_MCR_LOOPBACK_E_ENABLED  | 0x1   | Loopback mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MCR_LOOPBACK
 * 
 * Loopback mode disabled
 */
#define ALT_UART_MCR_LOOPBACK_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_MCR_LOOPBACK
 * 
 * Loopback mode enabled
 */
#define ALT_UART_MCR_LOOPBACK_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_LOOPBACK register field. */
#define ALT_UART_MCR_LOOPBACK_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_LOOPBACK register field. */
#define ALT_UART_MCR_LOOPBACK_MSB        4
/* The width in bits of the ALT_UART_MCR_LOOPBACK register field. */
#define ALT_UART_MCR_LOOPBACK_WIDTH      1
/* The mask used to set the ALT_UART_MCR_LOOPBACK register field value. */
#define ALT_UART_MCR_LOOPBACK_SET_MSK    0x00000010
/* The mask used to clear the ALT_UART_MCR_LOOPBACK register field value. */
#define ALT_UART_MCR_LOOPBACK_CLR_MSK    0xffffffef
/* The reset value of the ALT_UART_MCR_LOOPBACK register field. */
#define ALT_UART_MCR_LOOPBACK_RESET      0x0
/* Extracts the ALT_UART_MCR_LOOPBACK field value from a register. */
#define ALT_UART_MCR_LOOPBACK_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_UART_MCR_LOOPBACK register field value suitable for setting the register. */
#define ALT_UART_MCR_LOOPBACK_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : AFCE
 * 
 * Auto Flow Control Enable.
 * 
 * Writeable only when AFCE_MODE == Enabled, always readable.  When FIFOs are
 * enabled
 * 
 * and the Auto Flow Control Enable (AFCE) bit is set, Auto Flow Control features
 * are
 * 
 * enabled as described in section 5.6 on page 51.
 * 
 * 0 = Auto Flow Control Mode disabled
 * 
 * 1 = Auto Flow Control Mode enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description                    
 * :-----------------------------|:------|:--------------------------------
 *  ALT_UART_MCR_AFCE_E_DISABLED | 0x0   | Auto Flow Control Mode disabled
 *  ALT_UART_MCR_AFCE_E_ENABLED  | 0x1   | Auto Flow Control Mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MCR_AFCE
 * 
 * Auto Flow Control Mode disabled
 */
#define ALT_UART_MCR_AFCE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_MCR_AFCE
 * 
 * Auto Flow Control Mode enabled
 */
#define ALT_UART_MCR_AFCE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_AFCE register field. */
#define ALT_UART_MCR_AFCE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_AFCE register field. */
#define ALT_UART_MCR_AFCE_MSB        5
/* The width in bits of the ALT_UART_MCR_AFCE register field. */
#define ALT_UART_MCR_AFCE_WIDTH      1
/* The mask used to set the ALT_UART_MCR_AFCE register field value. */
#define ALT_UART_MCR_AFCE_SET_MSK    0x00000020
/* The mask used to clear the ALT_UART_MCR_AFCE register field value. */
#define ALT_UART_MCR_AFCE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_UART_MCR_AFCE register field. */
#define ALT_UART_MCR_AFCE_RESET      0x0
/* Extracts the ALT_UART_MCR_AFCE field value from a register. */
#define ALT_UART_MCR_AFCE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_UART_MCR_AFCE register field value suitable for setting the register. */
#define ALT_UART_MCR_AFCE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : SIRE
 * 
 * SIR Mode Enable.
 * 
 * Writeable only when SIR_MODE == Enabled, always readable.  This is used to
 * enable/
 * 
 * disable the IrDA SIR Mode features as described in section 5.2 on page 47.
 * 
 * 0 = IrDA SIR Mode disabled
 * 
 * 1 = IrDA SIR Mode enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description           
 * :-----------------------------|:------|:-----------------------
 *  ALT_UART_MCR_SIRE_E_DISABLED | 0x0   | IrDA SIR Mode disabled
 *  ALT_UART_MCR_SIRE_E_ENABLED  | 0x1   | IrDA SIR Mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MCR_SIRE
 * 
 * IrDA SIR Mode disabled
 */
#define ALT_UART_MCR_SIRE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_MCR_SIRE
 * 
 * IrDA SIR Mode enabled
 */
#define ALT_UART_MCR_SIRE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_SIRE register field. */
#define ALT_UART_MCR_SIRE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_SIRE register field. */
#define ALT_UART_MCR_SIRE_MSB        6
/* The width in bits of the ALT_UART_MCR_SIRE register field. */
#define ALT_UART_MCR_SIRE_WIDTH      1
/* The mask used to set the ALT_UART_MCR_SIRE register field value. */
#define ALT_UART_MCR_SIRE_SET_MSK    0x00000040
/* The mask used to clear the ALT_UART_MCR_SIRE register field value. */
#define ALT_UART_MCR_SIRE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_UART_MCR_SIRE register field. */
#define ALT_UART_MCR_SIRE_RESET      0x0
/* Extracts the ALT_UART_MCR_SIRE field value from a register. */
#define ALT_UART_MCR_SIRE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_UART_MCR_SIRE register field value suitable for setting the register. */
#define ALT_UART_MCR_SIRE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RSVD_MCR_31to7
 * 
 * Reserved bits [31:7] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_MCR_RSVD_MCR_31TO7 register field. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_UART_MCR_RSVD_MCR_31TO7 register field. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_MSB        31
/* The width in bits of the ALT_UART_MCR_RSVD_MCR_31TO7 register field. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_WIDTH      25
/* The mask used to set the ALT_UART_MCR_RSVD_MCR_31TO7 register field value. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_SET_MSK    0xffffff80
/* The mask used to clear the ALT_UART_MCR_RSVD_MCR_31TO7 register field value. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_CLR_MSK    0x0000007f
/* The reset value of the ALT_UART_MCR_RSVD_MCR_31TO7 register field. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_RESET      0x0
/* Extracts the ALT_UART_MCR_RSVD_MCR_31TO7 field value from a register. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_GET(value) (((value) & 0xffffff80) >> 7)
/* Produces a ALT_UART_MCR_RSVD_MCR_31TO7 register field value suitable for setting the register. */
#define ALT_UART_MCR_RSVD_MCR_31TO7_SET(value) (((value) << 7) & 0xffffff80)

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
 * The struct declaration for register ALT_UART_MCR.
 */
struct ALT_UART_MCR_s
{
    volatile uint32_t        DTR            :  1;  /* ALT_UART_MCR_DTR */
    volatile uint32_t        RTS            :  1;  /* ALT_UART_MCR_RTS */
    volatile uint32_t        OUT1           :  1;  /* ALT_UART_MCR_OUT1 */
    volatile uint32_t        OUT2           :  1;  /* ALT_UART_MCR_OUT2 */
    volatile uint32_t        LoopBack       :  1;  /* ALT_UART_MCR_LOOPBACK */
    volatile uint32_t        AFCE           :  1;  /* ALT_UART_MCR_AFCE */
    const volatile uint32_t  SIRE           :  1;  /* ALT_UART_MCR_SIRE */
    const volatile uint32_t  RSVD_MCR_31to7 : 25;  /* ALT_UART_MCR_RSVD_MCR_31TO7 */
};

/* The typedef declaration for register ALT_UART_MCR. */
typedef struct ALT_UART_MCR_s  ALT_UART_MCR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_MCR register. */
#define ALT_UART_MCR_RESET       0x00000000
/* The byte offset of the ALT_UART_MCR register from the beginning of the component. */
#define ALT_UART_MCR_OFST        0x10
/* The address of the ALT_UART_MCR register. */
#define ALT_UART_MCR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_MCR_OFST))

/*
 * Register : Line Status Register - LSR
 * 
 * Line Status Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_UART_LSR_DR            
 *  [1]    | R      | 0x0   | ALT_UART_LSR_OE            
 *  [2]    | R      | 0x0   | ALT_UART_LSR_PE            
 *  [3]    | R      | 0x0   | ALT_UART_LSR_FE            
 *  [4]    | R      | 0x0   | ALT_UART_LSR_BI            
 *  [5]    | R      | 0x1   | ALT_UART_LSR_THRE          
 *  [6]    | R      | 0x1   | ALT_UART_LSR_TEMT          
 *  [7]    | R      | 0x0   | ALT_UART_LSR_RFE           
 *  [31:8] | R      | 0x0   | ALT_UART_LSR_RSVD_LSR_31TO8
 * 
 */
/*
 * Field : DR
 * 
 * Data Ready bit.
 * 
 * This is used to indicate that the receiver contains at least one character in
 * the
 * 
 * RBR or the receiver FIFO.
 * 
 * 0 = no data ready
 * 
 * 1 = data ready
 * 
 * This bit is cleared when the RBR is read in the non-FIFO mode, or when the
 * receiver
 * 
 * FIFO is empty, in the FIFO mode.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description   
 * :----------------------------|:------|:---------------
 *  ALT_UART_LSR_DR_E_NOT_READY | 0x0   | data not ready
 *  ALT_UART_LSR_DR_E_READY     | 0x1   | data ready    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_DR
 * 
 * data not ready
 */
#define ALT_UART_LSR_DR_E_NOT_READY 0x0
/*
 * Enumerated value for register field ALT_UART_LSR_DR
 * 
 * data ready
 */
#define ALT_UART_LSR_DR_E_READY     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_DR register field. */
#define ALT_UART_LSR_DR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_DR register field. */
#define ALT_UART_LSR_DR_MSB        0
/* The width in bits of the ALT_UART_LSR_DR register field. */
#define ALT_UART_LSR_DR_WIDTH      1
/* The mask used to set the ALT_UART_LSR_DR register field value. */
#define ALT_UART_LSR_DR_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_LSR_DR register field value. */
#define ALT_UART_LSR_DR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_LSR_DR register field. */
#define ALT_UART_LSR_DR_RESET      0x0
/* Extracts the ALT_UART_LSR_DR field value from a register. */
#define ALT_UART_LSR_DR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_LSR_DR register field value suitable for setting the register. */
#define ALT_UART_LSR_DR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : OE
 * 
 * Overrun error bit.
 * 
 * This is used to indicate the occurrence of an overrun error. This occurs if a
 * new data
 * 
 * character was received before the previous data was read. In the non-FIFO mode,
 * the OE
 * 
 * bit is set when a new character arrives in the receiver before the previous
 * character
 * 
 * was read from the RBR. When this happens, the data in the RBR is overwritten. In
 * the
 * 
 * FIFO mode, an overrun error occurs when the FIFO is full and a new character
 * arrives at
 * 
 * the receiver. The data in the FIFO is retained and the data in the receive shift
 * register
 * 
 * is lost.
 * 
 * 0 = no overrun error
 * 
 * 1 = overrun error
 * 
 * Reading the LSR clears the OE bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description     
 * :------------------------------------|:------|:-----------------
 *  ALT_UART_LSR_OE_E_NO_OVER_RUN_ERROR | 0x0   | no overrun error
 *  ALT_UART_LSR_OE_E_OVER_RUN_ERROR    | 0x1   | overrun error   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_OE
 * 
 * no overrun error
 */
#define ALT_UART_LSR_OE_E_NO_OVER_RUN_ERROR 0x0
/*
 * Enumerated value for register field ALT_UART_LSR_OE
 * 
 * overrun error
 */
#define ALT_UART_LSR_OE_E_OVER_RUN_ERROR    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_OE register field. */
#define ALT_UART_LSR_OE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_OE register field. */
#define ALT_UART_LSR_OE_MSB        1
/* The width in bits of the ALT_UART_LSR_OE register field. */
#define ALT_UART_LSR_OE_WIDTH      1
/* The mask used to set the ALT_UART_LSR_OE register field value. */
#define ALT_UART_LSR_OE_SET_MSK    0x00000002
/* The mask used to clear the ALT_UART_LSR_OE register field value. */
#define ALT_UART_LSR_OE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_UART_LSR_OE register field. */
#define ALT_UART_LSR_OE_RESET      0x0
/* Extracts the ALT_UART_LSR_OE field value from a register. */
#define ALT_UART_LSR_OE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_UART_LSR_OE register field value suitable for setting the register. */
#define ALT_UART_LSR_OE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : PE
 * 
 * Parity Error bit.
 * 
 * This is used to indicate the occurrence of a parity error in the receiver if the
 * 
 * Parity Enable (PEN) bit (LCR[3]) is set. In the FIFO mode, since the parity
 * error is
 * 
 * associated with a character received, it is revealed when the character with the
 * parity
 * 
 * error arrives at the top of the FIFO.
 * 
 * It should be noted that the Parity Error (PE) bit (LSR[2]) will be set if a
 * break
 * 
 * interrupt has occurred, as indicated by Break Interrupt (BI) bit (LSR[4]).
 * 
 * 0 = no parity error
 * 
 * 1 = parity error
 * 
 * Reading the LSR clears the PE bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description    
 * :----------------------------------|:------|:----------------
 *  ALT_UART_LSR_PE_E_NO_PARITY_ERROR | 0x0   | no parity error
 *  ALT_UART_LSR_PE_E_PARITY_ERROR    | 0x1   | parity error   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_PE
 * 
 * no parity error
 */
#define ALT_UART_LSR_PE_E_NO_PARITY_ERROR   0x0
/*
 * Enumerated value for register field ALT_UART_LSR_PE
 * 
 * parity error
 */
#define ALT_UART_LSR_PE_E_PARITY_ERROR      0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_PE register field. */
#define ALT_UART_LSR_PE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_PE register field. */
#define ALT_UART_LSR_PE_MSB        2
/* The width in bits of the ALT_UART_LSR_PE register field. */
#define ALT_UART_LSR_PE_WIDTH      1
/* The mask used to set the ALT_UART_LSR_PE register field value. */
#define ALT_UART_LSR_PE_SET_MSK    0x00000004
/* The mask used to clear the ALT_UART_LSR_PE register field value. */
#define ALT_UART_LSR_PE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_UART_LSR_PE register field. */
#define ALT_UART_LSR_PE_RESET      0x0
/* Extracts the ALT_UART_LSR_PE field value from a register. */
#define ALT_UART_LSR_PE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_UART_LSR_PE register field value suitable for setting the register. */
#define ALT_UART_LSR_PE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : FE
 * 
 * Framing Error bit.
 * 
 * This is used to indicate the occurrence of a framing error in the receiver. A
 * framing
 * 
 * error occurs when the receiver does not detect a valid STOP bit in the received
 * data.
 * 
 * In the FIFO mode, since the framing error is associated with a character
 * received, it
 * 
 * is revealed when the character with the framing error is at the top of the FIFO.
 * When
 * 
 * a framing error occurs the UART will try resynchronize. It does this by assuming
 * that
 * 
 * the error was due to the start bit of the next character and then continues
 * receiving
 * 
 * the other bit i.e. data, and/or parity and stop.
 * 
 * It should be noted that the Framing Error (FE) bit (LSR[3]) will be set if a
 * break
 * 
 * interrupt has occurred, as indicated by Break Interrupt (BI) bit (LSR[4]).
 * 
 * 0 = no framing error
 * 
 * 1 = framing error
 * 
 * Reading the LSR clears the FE bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description     
 * :-----------------------------------|:------|:-----------------
 *  ALT_UART_LSR_FE_E_NO_FRAMING_ERROR | 0x0   | no framing error
 *  ALT_UART_LSR_FE_E_FRAMING_ERROR    | 0x1   | framing error   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_FE
 * 
 * no framing error
 */
#define ALT_UART_LSR_FE_E_NO_FRAMING_ERROR  0x0
/*
 * Enumerated value for register field ALT_UART_LSR_FE
 * 
 * framing error
 */
#define ALT_UART_LSR_FE_E_FRAMING_ERROR     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_FE register field. */
#define ALT_UART_LSR_FE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_FE register field. */
#define ALT_UART_LSR_FE_MSB        3
/* The width in bits of the ALT_UART_LSR_FE register field. */
#define ALT_UART_LSR_FE_WIDTH      1
/* The mask used to set the ALT_UART_LSR_FE register field value. */
#define ALT_UART_LSR_FE_SET_MSK    0x00000008
/* The mask used to clear the ALT_UART_LSR_FE register field value. */
#define ALT_UART_LSR_FE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_UART_LSR_FE register field. */
#define ALT_UART_LSR_FE_RESET      0x0
/* Extracts the ALT_UART_LSR_FE field value from a register. */
#define ALT_UART_LSR_FE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_UART_LSR_FE register field value suitable for setting the register. */
#define ALT_UART_LSR_FE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : BI
 * 
 * Break Interrupt bit.
 * 
 * This is used to indicate the detection of a break sequence on the serial input
 * data.
 * 
 * If in UART mode  it is set whenever the serial input, sin, is held in a logic
 * '0'
 * 
 * state for longer than the sum of start time + data bits + parity + stop bits.
 * 
 * If in infrared mode  it is set whenever the serial input, sir_in, is
 * continuously
 * 
 * pulsed to logic '0' for longer than the sum of start time + data bits + parity +
 * stop
 * 
 * bits.
 * 
 * A break condition on serial input causes one and only one character, consisting
 * of
 * 
 * all zeros, to be received by the UART. In the FIFO mode, the character
 * associated
 * 
 * with the break condition is carried through the FIFO and is revealed when the
 * 
 * character is at the top of the FIFO. Reading the LSR clears the BI bit. In the
 * 
 * non-FIFO mode, the BI indication occurs immediately and persists until the LSR
 * is
 * 
 * read.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description               
 * :---------------------------|:------|:---------------------------
 *  ALT_UART_LSR_BI_E_NO_BREAK | 0x0   | No break sequence detected
 *  ALT_UART_LSR_BI_E_BREAK    | 0x1   | Break sequence detected   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_BI
 * 
 * No break sequence detected
 */
#define ALT_UART_LSR_BI_E_NO_BREAK  0x0
/*
 * Enumerated value for register field ALT_UART_LSR_BI
 * 
 * Break sequence detected
 */
#define ALT_UART_LSR_BI_E_BREAK     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_BI register field. */
#define ALT_UART_LSR_BI_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_BI register field. */
#define ALT_UART_LSR_BI_MSB        4
/* The width in bits of the ALT_UART_LSR_BI register field. */
#define ALT_UART_LSR_BI_WIDTH      1
/* The mask used to set the ALT_UART_LSR_BI register field value. */
#define ALT_UART_LSR_BI_SET_MSK    0x00000010
/* The mask used to clear the ALT_UART_LSR_BI register field value. */
#define ALT_UART_LSR_BI_CLR_MSK    0xffffffef
/* The reset value of the ALT_UART_LSR_BI register field. */
#define ALT_UART_LSR_BI_RESET      0x0
/* Extracts the ALT_UART_LSR_BI field value from a register. */
#define ALT_UART_LSR_BI_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_UART_LSR_BI register field value suitable for setting the register. */
#define ALT_UART_LSR_BI_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : THRE
 * 
 * Transmit Holding Register Empty bit.
 * 
 * If THRE_MODE_USER == Disabled or THRE mode is disabled (IER[7] set to zero) and
 * 
 * regardless of FIFO's being implemented/enabled or not, this bit indicates that
 * 
 * the THR or TX FIFO is empty. This bit is set whenever data is transferred from
 * 
 * the THR or TX FIFO to the transmitter shift register and no new data has been
 * 
 * written to the THR or TX FIFO. This also causes a THRE Interrupt to occur, if
 * the
 * 
 * THRE Interrupt is enabled.
 * 
 * If THRE_MODE_USER == Enabled AND FIFO_MODE != NONE and both modes are active
 * 
 * (IER[7] set to one and FCR[0] set to one respectively), the functionality is
 * switched
 * 
 * to indicate the transmitter FIFO is full, and no longer controls THRE
 * interrupts,
 * 
 * which are then controlled by the FCR[5:4] threshold setting. Programmable THRE
 * 
 * interrupt mode operation is described in detail in section 5.7 on page 52.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description                       
 * :-----------------------------|:------|:-----------------------------------
 *  ALT_UART_LSR_THRE_E_DISABLED | 0x0   | THRE interrupt control is disabled
 *  ALT_UART_LSR_THRE_E_ENABLED  | 0x1   | THRE interrupt control is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_THRE
 * 
 * THRE interrupt control is disabled
 */
#define ALT_UART_LSR_THRE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_LSR_THRE
 * 
 * THRE interrupt control is enabled
 */
#define ALT_UART_LSR_THRE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_THRE register field. */
#define ALT_UART_LSR_THRE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_THRE register field. */
#define ALT_UART_LSR_THRE_MSB        5
/* The width in bits of the ALT_UART_LSR_THRE register field. */
#define ALT_UART_LSR_THRE_WIDTH      1
/* The mask used to set the ALT_UART_LSR_THRE register field value. */
#define ALT_UART_LSR_THRE_SET_MSK    0x00000020
/* The mask used to clear the ALT_UART_LSR_THRE register field value. */
#define ALT_UART_LSR_THRE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_UART_LSR_THRE register field. */
#define ALT_UART_LSR_THRE_RESET      0x1
/* Extracts the ALT_UART_LSR_THRE field value from a register. */
#define ALT_UART_LSR_THRE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_UART_LSR_THRE register field value suitable for setting the register. */
#define ALT_UART_LSR_THRE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : TEMT
 * 
 * Transmitter Empty bit.
 * 
 * If in FIFO mode (FIFO_MODE != NONE) and FIFO's enabled (FCR[0] set to one), this
 * 
 * bit is set whenever the Transmitter Shift Register and the FIFO are both empty.
 * 
 * If in the non-FIFO mode or FIFO's are disabled, this bit is set whenever the
 * 
 * Transmitter Holding Register and the Transmitter Shift Register are both empty.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description          
 * :-----------------------------|:------|:----------------------
 *  ALT_UART_LSR_TEMT_E_DISABLED | 0x0   | Transmitter not empty
 *  ALT_UART_LSR_TEMT_E_ENABLED  | 0x1   | Transmitter empty    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_TEMT
 * 
 * Transmitter not empty
 */
#define ALT_UART_LSR_TEMT_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_LSR_TEMT
 * 
 * Transmitter empty
 */
#define ALT_UART_LSR_TEMT_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_TEMT register field. */
#define ALT_UART_LSR_TEMT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_TEMT register field. */
#define ALT_UART_LSR_TEMT_MSB        6
/* The width in bits of the ALT_UART_LSR_TEMT register field. */
#define ALT_UART_LSR_TEMT_WIDTH      1
/* The mask used to set the ALT_UART_LSR_TEMT register field value. */
#define ALT_UART_LSR_TEMT_SET_MSK    0x00000040
/* The mask used to clear the ALT_UART_LSR_TEMT register field value. */
#define ALT_UART_LSR_TEMT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_UART_LSR_TEMT register field. */
#define ALT_UART_LSR_TEMT_RESET      0x1
/* Extracts the ALT_UART_LSR_TEMT field value from a register. */
#define ALT_UART_LSR_TEMT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_UART_LSR_TEMT register field value suitable for setting the register. */
#define ALT_UART_LSR_TEMT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RFE
 * 
 * Receiver FIFO Error bit.
 * 
 * This bit is only relevant when FIFO_MODE != NONE AND FIFO's are enabled (FCR[0]
 * 
 * set to one). This is used to indicate if there is at least one parity error,
 * framing
 * 
 * error, or break indication in the FIFO. That is:
 * 
 * 0 = no error in RX FIFO
 * 
 * 1 = error in RX FIFO
 * 
 * This bit is cleared when the LSR is read and the character with the error is at
 * the
 * 
 * top of the receiver FIFO and there are no subsequent errors in the FIFO.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description        
 * :------------------------------------|:------|:--------------------
 *  ALT_UART_LSR_RFE_E_NO_RX_FIFO_ERROR | 0x0   | No error in RX FIFO
 *  ALT_UART_LSR_RFE_E_RX_FIFO_ERROR    | 0x1   | Error in RX FIFO   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_LSR_RFE
 * 
 * No error in RX FIFO
 */
#define ALT_UART_LSR_RFE_E_NO_RX_FIFO_ERROR 0x0
/*
 * Enumerated value for register field ALT_UART_LSR_RFE
 * 
 * Error in RX FIFO
 */
#define ALT_UART_LSR_RFE_E_RX_FIFO_ERROR    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_RFE register field. */
#define ALT_UART_LSR_RFE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_RFE register field. */
#define ALT_UART_LSR_RFE_MSB        7
/* The width in bits of the ALT_UART_LSR_RFE register field. */
#define ALT_UART_LSR_RFE_WIDTH      1
/* The mask used to set the ALT_UART_LSR_RFE register field value. */
#define ALT_UART_LSR_RFE_SET_MSK    0x00000080
/* The mask used to clear the ALT_UART_LSR_RFE register field value. */
#define ALT_UART_LSR_RFE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_UART_LSR_RFE register field. */
#define ALT_UART_LSR_RFE_RESET      0x0
/* Extracts the ALT_UART_LSR_RFE field value from a register. */
#define ALT_UART_LSR_RFE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_UART_LSR_RFE register field value suitable for setting the register. */
#define ALT_UART_LSR_RFE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RSVD_LSR_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_LSR_RSVD_LSR_31TO8 register field. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_LSR_RSVD_LSR_31TO8 register field. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_MSB        31
/* The width in bits of the ALT_UART_LSR_RSVD_LSR_31TO8 register field. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_LSR_RSVD_LSR_31TO8 register field value. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_LSR_RSVD_LSR_31TO8 register field value. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_LSR_RSVD_LSR_31TO8 register field. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_RESET      0x0
/* Extracts the ALT_UART_LSR_RSVD_LSR_31TO8 field value from a register. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_LSR_RSVD_LSR_31TO8 register field value suitable for setting the register. */
#define ALT_UART_LSR_RSVD_LSR_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_LSR.
 */
struct ALT_UART_LSR_s
{
    const volatile uint32_t  DR             :  1;  /* ALT_UART_LSR_DR */
    const volatile uint32_t  OE             :  1;  /* ALT_UART_LSR_OE */
    const volatile uint32_t  PE             :  1;  /* ALT_UART_LSR_PE */
    const volatile uint32_t  FE             :  1;  /* ALT_UART_LSR_FE */
    const volatile uint32_t  BI             :  1;  /* ALT_UART_LSR_BI */
    const volatile uint32_t  THRE           :  1;  /* ALT_UART_LSR_THRE */
    const volatile uint32_t  TEMT           :  1;  /* ALT_UART_LSR_TEMT */
    const volatile uint32_t  RFE            :  1;  /* ALT_UART_LSR_RFE */
    const volatile uint32_t  RSVD_LSR_31to8 : 24;  /* ALT_UART_LSR_RSVD_LSR_31TO8 */
};

/* The typedef declaration for register ALT_UART_LSR. */
typedef struct ALT_UART_LSR_s  ALT_UART_LSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_LSR register. */
#define ALT_UART_LSR_RESET       0x00000060
/* The byte offset of the ALT_UART_LSR register from the beginning of the component. */
#define ALT_UART_LSR_OFST        0x14
/* The address of the ALT_UART_LSR register. */
#define ALT_UART_LSR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_LSR_OFST))

/*
 * Register : Modem Status Register - MSR
 * 
 * Modem Status Register
 * 
 * It should be noted that whenever bits 0, 1, 2 or 3 is set to logic one, to
 * indicate
 * 
 * a change on the modem control inputs, a modem status interrupt will be generated
 * 
 * if enabled via the IER regardless of when the change occurred. Since the delta
 * bits
 * 
 * (bits 0, 1, 3) can get set after a reset if their respective modem signals are
 * 
 * active (see individual bits for details), a read of the MSR after reset can be
 * 
 * performed to prevent unwanted interrupts.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_UART_MSR_DCTS          
 *  [1]    | R      | 0x0   | ALT_UART_MSR_DDSR          
 *  [2]    | R      | 0x0   | ALT_UART_MSR_TERI          
 *  [3]    | R      | 0x0   | ALT_UART_MSR_DDCD          
 *  [4]    | R      | 0x0   | ALT_UART_MSR_CTS           
 *  [5]    | R      | 0x0   | ALT_UART_MSR_DSR           
 *  [6]    | R      | 0x0   | ALT_UART_MSR_RI            
 *  [7]    | R      | 0x0   | ALT_UART_MSR_DCD           
 *  [31:8] | R      | 0x0   | ALT_UART_MSR_RSVD_MSR_31TO8
 * 
 */
/*
 * Field : DCTS
 * 
 * Delta Clear to Send.
 * 
 * This is used to indicate that the modem control line cts_n has changed since the
 * 
 * last time the MSR was read. That is:
 * 
 * 0 = no change on cts_n since last read of MSR
 * 
 * 1 = change on cts_n since last read of MSR
 * 
 * Reading the MSR clears the DCTS bit.
 * 
 * In Loopback Mode (MCR[4] set to one), DCTS reflects changes on MCR[1] (RTS).
 * 
 * Note, if the DCTS bit is not set and the cts_n signal is asserted (low) and a
 * reset
 * 
 * occurs (software or otherwise), then the DCTS bit will get set when the reset is
 * 
 * removed if the cts_n signal remains asserted.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                              
 * :------------------------------|:------|:------------------------------------------
 *  ALT_UART_MSR_DCTS_E_NO_CHANGE | 0x0   | No change on cts_n since last read of MSR
 *  ALT_UART_MSR_DCTS_E_CHANGE    | 0x1   | change on cts_n since last read of MSR   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_DCTS
 * 
 * No change on cts_n since last read of MSR
 */
#define ALT_UART_MSR_DCTS_E_NO_CHANGE   0x0
/*
 * Enumerated value for register field ALT_UART_MSR_DCTS
 * 
 * change on cts_n since last read of MSR
 */
#define ALT_UART_MSR_DCTS_E_CHANGE      0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_DCTS register field. */
#define ALT_UART_MSR_DCTS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_DCTS register field. */
#define ALT_UART_MSR_DCTS_MSB        0
/* The width in bits of the ALT_UART_MSR_DCTS register field. */
#define ALT_UART_MSR_DCTS_WIDTH      1
/* The mask used to set the ALT_UART_MSR_DCTS register field value. */
#define ALT_UART_MSR_DCTS_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_MSR_DCTS register field value. */
#define ALT_UART_MSR_DCTS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_MSR_DCTS register field. */
#define ALT_UART_MSR_DCTS_RESET      0x0
/* Extracts the ALT_UART_MSR_DCTS field value from a register. */
#define ALT_UART_MSR_DCTS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_MSR_DCTS register field value suitable for setting the register. */
#define ALT_UART_MSR_DCTS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DDSR
 * 
 * Delta Data Set Ready.
 * 
 * This is used to indicate that the modem control line dsr_n has changed since
 * 
 * the last time the MSR was read. That is:
 * 
 * 0 = no change on dsr_n since last read of MSR
 * 
 * 1 = change on dsr_n since last read of MSR
 * 
 * Reading the MSR clears the DDSR bit.
 * 
 * In Loopback Mode (MCR[4] set to one), DDSR reflects changes on MCR[0] (DTR).
 * 
 * Note, if the DDSR bit is not set and the dsr_n signal is asserted (low) and a
 * reset
 * 
 * occurs (software or otherwise), then the DDSR bit will get set when the reset is
 * 
 * removed if the dsr_n signal remains asserted.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                              
 * :------------------------------|:------|:------------------------------------------
 *  ALT_UART_MSR_DDSR_E_NO_CHANGE | 0x0   | No change on dsr_n since last read of MSR
 *  ALT_UART_MSR_DDSR_E_CHANGE    | 0x1   | change on dsr_n since last read of MSR   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_DDSR
 * 
 * No change on dsr_n since last read of MSR
 */
#define ALT_UART_MSR_DDSR_E_NO_CHANGE   0x0
/*
 * Enumerated value for register field ALT_UART_MSR_DDSR
 * 
 * change on dsr_n since last read of MSR
 */
#define ALT_UART_MSR_DDSR_E_CHANGE      0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_DDSR register field. */
#define ALT_UART_MSR_DDSR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_DDSR register field. */
#define ALT_UART_MSR_DDSR_MSB        1
/* The width in bits of the ALT_UART_MSR_DDSR register field. */
#define ALT_UART_MSR_DDSR_WIDTH      1
/* The mask used to set the ALT_UART_MSR_DDSR register field value. */
#define ALT_UART_MSR_DDSR_SET_MSK    0x00000002
/* The mask used to clear the ALT_UART_MSR_DDSR register field value. */
#define ALT_UART_MSR_DDSR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_UART_MSR_DDSR register field. */
#define ALT_UART_MSR_DDSR_RESET      0x0
/* Extracts the ALT_UART_MSR_DDSR field value from a register. */
#define ALT_UART_MSR_DDSR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_UART_MSR_DDSR register field value suitable for setting the register. */
#define ALT_UART_MSR_DDSR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TERI
 * 
 * Trailing Edge of Ring Indicator.
 * 
 * This is used to indicate that a change on the input ri_n (from an active low, to
 * 
 * an inactive high state) has occurred since the last time the MSR was read. That
 * is:
 * 
 * 0 = no change on ri_n since last read of MSR
 * 
 * 1 = change on ri_n since last read of MSR
 * 
 * Reading the MSR clears the TERI bit.
 * 
 * In Loopback Mode (MCR[4] set to one), TERI reflects when MCR[2] (Out1) has
 * changed
 * 
 * state from a high to a low.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                             
 * :------------------------------|:------|:-----------------------------------------
 *  ALT_UART_MSR_TERI_E_NO_CHANGE | 0x0   | No change on ri_n since last read of MSR
 *  ALT_UART_MSR_TERI_E_CHANGE    | 0x1   | change on ri_n since last read of MSR   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_TERI
 * 
 * No change on ri_n since last read of MSR
 */
#define ALT_UART_MSR_TERI_E_NO_CHANGE   0x0
/*
 * Enumerated value for register field ALT_UART_MSR_TERI
 * 
 * change on ri_n since last read of MSR
 */
#define ALT_UART_MSR_TERI_E_CHANGE      0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_TERI register field. */
#define ALT_UART_MSR_TERI_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_TERI register field. */
#define ALT_UART_MSR_TERI_MSB        2
/* The width in bits of the ALT_UART_MSR_TERI register field. */
#define ALT_UART_MSR_TERI_WIDTH      1
/* The mask used to set the ALT_UART_MSR_TERI register field value. */
#define ALT_UART_MSR_TERI_SET_MSK    0x00000004
/* The mask used to clear the ALT_UART_MSR_TERI register field value. */
#define ALT_UART_MSR_TERI_CLR_MSK    0xfffffffb
/* The reset value of the ALT_UART_MSR_TERI register field. */
#define ALT_UART_MSR_TERI_RESET      0x0
/* Extracts the ALT_UART_MSR_TERI field value from a register. */
#define ALT_UART_MSR_TERI_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_UART_MSR_TERI register field value suitable for setting the register. */
#define ALT_UART_MSR_TERI_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DDCD
 * 
 * Delta Data Carrier Detect.
 * 
 * This is used to indicate that the modem control line dcd_n has changed since the
 * last
 * 
 * time the MSR was read. That is:
 * 
 * 0 = no change on dcd_n since last read of MSR
 * 
 * 1 = change on dcd_n since last read of MSR
 * 
 * Reading the MSR clears the DDCD bit.
 * 
 * In Loopback Mode (MCR[4] set to one), DDCD reflects changes on MCR[3] (Out2).
 * 
 * Note, if the DDCD bit is not set and the dcd_n signal is asserted (low) and a
 * reset
 * 
 * occurs (software or otherwise), then the DDCD bit will get set when the reset is
 * 
 * removed if the dcd_n signal remains asserted.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                              
 * :------------------------------|:------|:------------------------------------------
 *  ALT_UART_MSR_DDCD_E_NO_CHANGE | 0x0   | No change on dcd_n since last read of MSR
 *  ALT_UART_MSR_DDCD_E_CHANGE    | 0x1   | change on dcd_n since last read of MSR   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_DDCD
 * 
 * No change on dcd_n since last read of MSR
 */
#define ALT_UART_MSR_DDCD_E_NO_CHANGE   0x0
/*
 * Enumerated value for register field ALT_UART_MSR_DDCD
 * 
 * change on dcd_n since last read of MSR
 */
#define ALT_UART_MSR_DDCD_E_CHANGE      0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_DDCD register field. */
#define ALT_UART_MSR_DDCD_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_DDCD register field. */
#define ALT_UART_MSR_DDCD_MSB        3
/* The width in bits of the ALT_UART_MSR_DDCD register field. */
#define ALT_UART_MSR_DDCD_WIDTH      1
/* The mask used to set the ALT_UART_MSR_DDCD register field value. */
#define ALT_UART_MSR_DDCD_SET_MSK    0x00000008
/* The mask used to clear the ALT_UART_MSR_DDCD register field value. */
#define ALT_UART_MSR_DDCD_CLR_MSK    0xfffffff7
/* The reset value of the ALT_UART_MSR_DDCD register field. */
#define ALT_UART_MSR_DDCD_RESET      0x0
/* Extracts the ALT_UART_MSR_DDCD field value from a register. */
#define ALT_UART_MSR_DDCD_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_UART_MSR_DDCD register field value suitable for setting the register. */
#define ALT_UART_MSR_DDCD_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : CTS
 * 
 * Clear to Send.
 * 
 * This is used to indicate the current state of the modem control line cts_n. That
 * is,
 * 
 * this bit is the complement cts_n. When the Clear to Send input (cts_n) is
 * asserted
 * 
 * it is an indication that the modem or data set is ready to exchange data with
 * the
 * 
 * DW_apb_uart.
 * 
 * 0 = cts_n input is de-asserted (logic 1)
 * 
 * 1 = cts_n input is asserted (logic 0)
 * 
 * In Loopback Mode (MCR[4] set to one), CTS is the same as MCR[1] (RTS).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                         
 * :------------------------------|:------|:-------------------------------------
 *  ALT_UART_MSR_CTS_E_DEASSERTED | 0x0   | cts_n input is de-asserted (logic 1)
 *  ALT_UART_MSR_CTS_E_ASSERTED   | 0x1   | cts_n input is asserted (logic 0)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_CTS
 * 
 * cts_n input is de-asserted (logic 1)
 */
#define ALT_UART_MSR_CTS_E_DEASSERTED   0x0
/*
 * Enumerated value for register field ALT_UART_MSR_CTS
 * 
 * cts_n input is asserted (logic 0)
 */
#define ALT_UART_MSR_CTS_E_ASSERTED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_CTS register field. */
#define ALT_UART_MSR_CTS_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_CTS register field. */
#define ALT_UART_MSR_CTS_MSB        4
/* The width in bits of the ALT_UART_MSR_CTS register field. */
#define ALT_UART_MSR_CTS_WIDTH      1
/* The mask used to set the ALT_UART_MSR_CTS register field value. */
#define ALT_UART_MSR_CTS_SET_MSK    0x00000010
/* The mask used to clear the ALT_UART_MSR_CTS register field value. */
#define ALT_UART_MSR_CTS_CLR_MSK    0xffffffef
/* The reset value of the ALT_UART_MSR_CTS register field. */
#define ALT_UART_MSR_CTS_RESET      0x0
/* Extracts the ALT_UART_MSR_CTS field value from a register. */
#define ALT_UART_MSR_CTS_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_UART_MSR_CTS register field value suitable for setting the register. */
#define ALT_UART_MSR_CTS_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : DSR
 * 
 * Data Set Ready.
 * 
 * This is used to indicate the current state of the modem control line dsr_n. That
 * is
 * 
 * this bit is the complement dsr_n. When the Data Set Ready input (dsr_n) is
 * asserted
 * 
 * it is an indication that the modem or data set is ready to establish
 * communications
 * 
 * with the DW_apb_uart.
 * 
 * 0 = dsr_n input is de-asserted (logic 1)
 * 
 * 1 = dsr_n input is asserted (logic 0)
 * 
 * In Loopback Mode (MCR[4] set to one), DSR is the same as MCR[0] (DTR).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                         
 * :------------------------------|:------|:-------------------------------------
 *  ALT_UART_MSR_DSR_E_DEASSERTED | 0x0   | dsr_n input is de-asserted (logic 1)
 *  ALT_UART_MSR_DSR_E_ASSERTED   | 0x1   | dsr_n input is asserted (logic 0)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_DSR
 * 
 * dsr_n input is de-asserted (logic 1)
 */
#define ALT_UART_MSR_DSR_E_DEASSERTED   0x0
/*
 * Enumerated value for register field ALT_UART_MSR_DSR
 * 
 * dsr_n input is asserted (logic 0)
 */
#define ALT_UART_MSR_DSR_E_ASSERTED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_DSR register field. */
#define ALT_UART_MSR_DSR_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_DSR register field. */
#define ALT_UART_MSR_DSR_MSB        5
/* The width in bits of the ALT_UART_MSR_DSR register field. */
#define ALT_UART_MSR_DSR_WIDTH      1
/* The mask used to set the ALT_UART_MSR_DSR register field value. */
#define ALT_UART_MSR_DSR_SET_MSK    0x00000020
/* The mask used to clear the ALT_UART_MSR_DSR register field value. */
#define ALT_UART_MSR_DSR_CLR_MSK    0xffffffdf
/* The reset value of the ALT_UART_MSR_DSR register field. */
#define ALT_UART_MSR_DSR_RESET      0x0
/* Extracts the ALT_UART_MSR_DSR field value from a register. */
#define ALT_UART_MSR_DSR_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_UART_MSR_DSR register field value suitable for setting the register. */
#define ALT_UART_MSR_DSR_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RI
 * 
 * Ring Indicator.
 * 
 * This is used to indicate the current state of the modem control line ri_n. That
 * is
 * 
 * this bit is the complement ri_n. When the Ring Indicator input (ri_n) is
 * asserted
 * 
 * it is an indication that a telephone ringing signal has been received by the
 * modem
 * 
 * or data set.
 * 
 * 0 = ri_n input is de-asserted (logic 1)
 * 
 * 1 = ri_n input is asserted (logic 0)
 * 
 * In Loopback Mode (MCR[4] set to one), RI is the same as MCR[2] (Out1).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description                        
 * :-----------------------------|:------|:------------------------------------
 *  ALT_UART_MSR_RI_E_DEASSERTED | 0x0   | ri_n input is de-asserted (logic 1)
 *  ALT_UART_MSR_RI_E_ASSERTED   | 0x1   | ri_n input is asserted (logic 0)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_RI
 * 
 * ri_n input is de-asserted (logic 1)
 */
#define ALT_UART_MSR_RI_E_DEASSERTED    0x0
/*
 * Enumerated value for register field ALT_UART_MSR_RI
 * 
 * ri_n input is asserted (logic 0)
 */
#define ALT_UART_MSR_RI_E_ASSERTED      0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_RI register field. */
#define ALT_UART_MSR_RI_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_RI register field. */
#define ALT_UART_MSR_RI_MSB        6
/* The width in bits of the ALT_UART_MSR_RI register field. */
#define ALT_UART_MSR_RI_WIDTH      1
/* The mask used to set the ALT_UART_MSR_RI register field value. */
#define ALT_UART_MSR_RI_SET_MSK    0x00000040
/* The mask used to clear the ALT_UART_MSR_RI register field value. */
#define ALT_UART_MSR_RI_CLR_MSK    0xffffffbf
/* The reset value of the ALT_UART_MSR_RI register field. */
#define ALT_UART_MSR_RI_RESET      0x0
/* Extracts the ALT_UART_MSR_RI field value from a register. */
#define ALT_UART_MSR_RI_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_UART_MSR_RI register field value suitable for setting the register. */
#define ALT_UART_MSR_RI_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : DCD
 * 
 * Data Carrier Detect.
 * 
 * This is used to indicate the current state of the modem control line dcd_n. That
 * is
 * 
 * this bit is the complement dcd_n. When the Data Carrier Detect input (dcd_n) is
 * 
 * asserted it is an indication that the carrier has been detected by the modem or
 * 
 * data set.
 * 
 * 0 = dcd_n input is de-asserted (logic 1)
 * 
 * 1 = dcd_n input is asserted (logic 0)
 * 
 * In Loopback Mode (MCR[4] set to one), DCD is the same as MCR[3] (Out2).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                         
 * :------------------------------|:------|:-------------------------------------
 *  ALT_UART_MSR_DCD_E_DEASSERTED | 0x0   | dcd_n input is de-asserted (logic 1)
 *  ALT_UART_MSR_DCD_E_ASSERTED   | 0x1   | dcd_n input is asserted (logic 0)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_MSR_DCD
 * 
 * dcd_n input is de-asserted (logic 1)
 */
#define ALT_UART_MSR_DCD_E_DEASSERTED   0x0
/*
 * Enumerated value for register field ALT_UART_MSR_DCD
 * 
 * dcd_n input is asserted (logic 0)
 */
#define ALT_UART_MSR_DCD_E_ASSERTED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_DCD register field. */
#define ALT_UART_MSR_DCD_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_DCD register field. */
#define ALT_UART_MSR_DCD_MSB        7
/* The width in bits of the ALT_UART_MSR_DCD register field. */
#define ALT_UART_MSR_DCD_WIDTH      1
/* The mask used to set the ALT_UART_MSR_DCD register field value. */
#define ALT_UART_MSR_DCD_SET_MSK    0x00000080
/* The mask used to clear the ALT_UART_MSR_DCD register field value. */
#define ALT_UART_MSR_DCD_CLR_MSK    0xffffff7f
/* The reset value of the ALT_UART_MSR_DCD register field. */
#define ALT_UART_MSR_DCD_RESET      0x0
/* Extracts the ALT_UART_MSR_DCD field value from a register. */
#define ALT_UART_MSR_DCD_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_UART_MSR_DCD register field value suitable for setting the register. */
#define ALT_UART_MSR_DCD_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RSVD_MSR_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_MSR_RSVD_MSR_31TO8 register field. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_MSR_RSVD_MSR_31TO8 register field. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_MSB        31
/* The width in bits of the ALT_UART_MSR_RSVD_MSR_31TO8 register field. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_MSR_RSVD_MSR_31TO8 register field value. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_MSR_RSVD_MSR_31TO8 register field value. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_MSR_RSVD_MSR_31TO8 register field. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_RESET      0x0
/* Extracts the ALT_UART_MSR_RSVD_MSR_31TO8 field value from a register. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_MSR_RSVD_MSR_31TO8 register field value suitable for setting the register. */
#define ALT_UART_MSR_RSVD_MSR_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_MSR.
 */
struct ALT_UART_MSR_s
{
    const volatile uint32_t  DCTS           :  1;  /* ALT_UART_MSR_DCTS */
    const volatile uint32_t  DDSR           :  1;  /* ALT_UART_MSR_DDSR */
    const volatile uint32_t  TERI           :  1;  /* ALT_UART_MSR_TERI */
    const volatile uint32_t  DDCD           :  1;  /* ALT_UART_MSR_DDCD */
    const volatile uint32_t  CTS            :  1;  /* ALT_UART_MSR_CTS */
    const volatile uint32_t  DSR            :  1;  /* ALT_UART_MSR_DSR */
    const volatile uint32_t  RI             :  1;  /* ALT_UART_MSR_RI */
    const volatile uint32_t  DCD            :  1;  /* ALT_UART_MSR_DCD */
    const volatile uint32_t  RSVD_MSR_31to8 : 24;  /* ALT_UART_MSR_RSVD_MSR_31TO8 */
};

/* The typedef declaration for register ALT_UART_MSR. */
typedef struct ALT_UART_MSR_s  ALT_UART_MSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_MSR register. */
#define ALT_UART_MSR_RESET       0x00000000
/* The byte offset of the ALT_UART_MSR register from the beginning of the component. */
#define ALT_UART_MSR_OFST        0x18
/* The address of the ALT_UART_MSR register. */
#define ALT_UART_MSR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_MSR_OFST))

/*
 * Register : Scratchpad Register - SCR
 * 
 * Scratchpad Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [7:0]  | RW     | 0x0   | ALT_UART_SCR_SCR           
 *  [31:8] | R      | 0x0   | ALT_UART_SCR_RSVD_SCR_31TO8
 * 
 */
/*
 * Field : scr
 * 
 * This register is for programmers to use as a temporary storage space. It has no
 * 
 * defined purpose in the DW_apb_uart.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SCR_SCR register field. */
#define ALT_UART_SCR_SCR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SCR_SCR register field. */
#define ALT_UART_SCR_SCR_MSB        7
/* The width in bits of the ALT_UART_SCR_SCR register field. */
#define ALT_UART_SCR_SCR_WIDTH      8
/* The mask used to set the ALT_UART_SCR_SCR register field value. */
#define ALT_UART_SCR_SCR_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SCR_SCR register field value. */
#define ALT_UART_SCR_SCR_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SCR_SCR register field. */
#define ALT_UART_SCR_SCR_RESET      0x0
/* Extracts the ALT_UART_SCR_SCR field value from a register. */
#define ALT_UART_SCR_SCR_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SCR_SCR register field value suitable for setting the register. */
#define ALT_UART_SCR_SCR_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SCR_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SCR_RSVD_SCR_31TO8 register field. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SCR_RSVD_SCR_31TO8 register field. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_MSB        31
/* The width in bits of the ALT_UART_SCR_RSVD_SCR_31TO8 register field. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SCR_RSVD_SCR_31TO8 register field value. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SCR_RSVD_SCR_31TO8 register field value. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SCR_RSVD_SCR_31TO8 register field. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_RESET      0x0
/* Extracts the ALT_UART_SCR_RSVD_SCR_31TO8 field value from a register. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SCR_RSVD_SCR_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SCR_RSVD_SCR_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SCR.
 */
struct ALT_UART_SCR_s
{
    volatile uint32_t        scr            :  8;  /* ALT_UART_SCR_SCR */
    const volatile uint32_t  RSVD_SCR_31to8 : 24;  /* ALT_UART_SCR_RSVD_SCR_31TO8 */
};

/* The typedef declaration for register ALT_UART_SCR. */
typedef struct ALT_UART_SCR_s  ALT_UART_SCR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SCR register. */
#define ALT_UART_SCR_RESET       0x00000000
/* The byte offset of the ALT_UART_SCR register from the beginning of the component. */
#define ALT_UART_SCR_OFST        0x1c
/* The address of the ALT_UART_SCR register. */
#define ALT_UART_SCR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SCR_OFST))

/*
 * Register : Shadow Receive Buffer Register - SRBR0
 * 
 * Shadow Receive Buffer Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR0_SRBR0           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR0_RSVD_SRBR0_31TO8
 * 
 */
/*
 * Field : srbr0
 * 
 * Shadow Receive Buffer Register 0:
 * 
 * This is a shadow register for the RBR and has been allocated sixteen 32-bit
 * locations
 * 
 * so as to accommodate burst accesses from the master.
 * 
 * This register contains the data byte received on the serial input port (sin) in
 * UART
 * 
 * mode or the serial infrared input (sir_in) in infrared mode. The data in this
 * register
 * 
 * is valid only if the Data Ready (DR) bit in the Line status Register (LSR) is
 * set.
 * 
 * If in non-FIFO mode (FIFO_MODE == NONE) or FIFOs are disabled (FCR[0] set to
 * zero), the
 * 
 * data in the RBR must be read before the next data arrives, otherwise it will be
 * 
 * overwritten, resulting in an overrun error.
 * 
 * If in FIFO mode (FIFO_MODE != NONE) and FIFOs are enabled (FCR[0] set to one),
 * this
 * 
 * register accesses the head of the receive FIFO. If the receive FIFO is full and
 * this
 * 
 * register is not read before the next data character arrives, then the data
 * already
 * 
 * in the FIFO will be preserved but any incoming data will be lost. An overrun
 * error
 * 
 * will also occur.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR0_SRBR0 register field. */
#define ALT_UART_SRBR0_SRBR0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR0_SRBR0 register field. */
#define ALT_UART_SRBR0_SRBR0_MSB        7
/* The width in bits of the ALT_UART_SRBR0_SRBR0 register field. */
#define ALT_UART_SRBR0_SRBR0_WIDTH      8
/* The mask used to set the ALT_UART_SRBR0_SRBR0 register field value. */
#define ALT_UART_SRBR0_SRBR0_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR0_SRBR0 register field value. */
#define ALT_UART_SRBR0_SRBR0_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR0_SRBR0 register field. */
#define ALT_UART_SRBR0_SRBR0_RESET      0x0
/* Extracts the ALT_UART_SRBR0_SRBR0 field value from a register. */
#define ALT_UART_SRBR0_SRBR0_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR0_SRBR0 register field value suitable for setting the register. */
#define ALT_UART_SRBR0_SRBR0_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR0_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR0_RSVD_SRBR0_31TO8 register field. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR0_RSVD_SRBR0_31TO8 register field. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR0_RSVD_SRBR0_31TO8 register field. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR0_RSVD_SRBR0_31TO8 register field value. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR0_RSVD_SRBR0_31TO8 register field value. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR0_RSVD_SRBR0_31TO8 register field. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR0_RSVD_SRBR0_31TO8 field value from a register. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR0_RSVD_SRBR0_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR0_RSVD_SRBR0_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR0.
 */
struct ALT_UART_SRBR0_s
{
    const volatile uint32_t  srbr0            :  8;  /* ALT_UART_SRBR0_SRBR0 */
    const volatile uint32_t  RSVD_SRBR0_31to8 : 24;  /* ALT_UART_SRBR0_RSVD_SRBR0_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR0. */
typedef struct ALT_UART_SRBR0_s  ALT_UART_SRBR0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR0 register. */
#define ALT_UART_SRBR0_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR0 register from the beginning of the component. */
#define ALT_UART_SRBR0_OFST        0x30
/* The address of the ALT_UART_SRBR0 register. */
#define ALT_UART_SRBR0_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR0_OFST))

/*
 * Register : Shadow Receive Buffer Register 1 - SRBR1
 * 
 * Shadow Receive Buffer Register 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR1_SRBR1           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR1_RSVD_SRBR1_31TO8
 * 
 */
/*
 * Field : srbr1
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR1_SRBR1 register field. */
#define ALT_UART_SRBR1_SRBR1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR1_SRBR1 register field. */
#define ALT_UART_SRBR1_SRBR1_MSB        7
/* The width in bits of the ALT_UART_SRBR1_SRBR1 register field. */
#define ALT_UART_SRBR1_SRBR1_WIDTH      8
/* The mask used to set the ALT_UART_SRBR1_SRBR1 register field value. */
#define ALT_UART_SRBR1_SRBR1_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR1_SRBR1 register field value. */
#define ALT_UART_SRBR1_SRBR1_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR1_SRBR1 register field. */
#define ALT_UART_SRBR1_SRBR1_RESET      0x0
/* Extracts the ALT_UART_SRBR1_SRBR1 field value from a register. */
#define ALT_UART_SRBR1_SRBR1_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR1_SRBR1 register field value suitable for setting the register. */
#define ALT_UART_SRBR1_SRBR1_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR1_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR1_RSVD_SRBR1_31TO8 register field. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR1_RSVD_SRBR1_31TO8 register field. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR1_RSVD_SRBR1_31TO8 register field. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR1_RSVD_SRBR1_31TO8 register field value. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR1_RSVD_SRBR1_31TO8 register field value. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR1_RSVD_SRBR1_31TO8 register field. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR1_RSVD_SRBR1_31TO8 field value from a register. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR1_RSVD_SRBR1_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR1_RSVD_SRBR1_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR1.
 */
struct ALT_UART_SRBR1_s
{
    const volatile uint32_t  srbr1            :  8;  /* ALT_UART_SRBR1_SRBR1 */
    const volatile uint32_t  RSVD_SRBR1_31to8 : 24;  /* ALT_UART_SRBR1_RSVD_SRBR1_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR1. */
typedef struct ALT_UART_SRBR1_s  ALT_UART_SRBR1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR1 register. */
#define ALT_UART_SRBR1_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR1 register from the beginning of the component. */
#define ALT_UART_SRBR1_OFST        0x34
/* The address of the ALT_UART_SRBR1 register. */
#define ALT_UART_SRBR1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR1_OFST))

/*
 * Register : Shadow Receive Buffer Register 2 - SRBR2
 * 
 * Shadow Receive Buffer Register 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR2_SRBR2           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR2_RSVD_SRBR2_31TO8
 * 
 */
/*
 * Field : srbr2
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR2_SRBR2 register field. */
#define ALT_UART_SRBR2_SRBR2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR2_SRBR2 register field. */
#define ALT_UART_SRBR2_SRBR2_MSB        7
/* The width in bits of the ALT_UART_SRBR2_SRBR2 register field. */
#define ALT_UART_SRBR2_SRBR2_WIDTH      8
/* The mask used to set the ALT_UART_SRBR2_SRBR2 register field value. */
#define ALT_UART_SRBR2_SRBR2_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR2_SRBR2 register field value. */
#define ALT_UART_SRBR2_SRBR2_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR2_SRBR2 register field. */
#define ALT_UART_SRBR2_SRBR2_RESET      0x0
/* Extracts the ALT_UART_SRBR2_SRBR2 field value from a register. */
#define ALT_UART_SRBR2_SRBR2_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR2_SRBR2 register field value suitable for setting the register. */
#define ALT_UART_SRBR2_SRBR2_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR2_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR2_RSVD_SRBR2_31TO8 register field. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR2_RSVD_SRBR2_31TO8 register field. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR2_RSVD_SRBR2_31TO8 register field. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR2_RSVD_SRBR2_31TO8 register field value. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR2_RSVD_SRBR2_31TO8 register field value. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR2_RSVD_SRBR2_31TO8 register field. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR2_RSVD_SRBR2_31TO8 field value from a register. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR2_RSVD_SRBR2_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR2_RSVD_SRBR2_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR2.
 */
struct ALT_UART_SRBR2_s
{
    const volatile uint32_t  srbr2            :  8;  /* ALT_UART_SRBR2_SRBR2 */
    const volatile uint32_t  RSVD_SRBR2_31to8 : 24;  /* ALT_UART_SRBR2_RSVD_SRBR2_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR2. */
typedef struct ALT_UART_SRBR2_s  ALT_UART_SRBR2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR2 register. */
#define ALT_UART_SRBR2_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR2 register from the beginning of the component. */
#define ALT_UART_SRBR2_OFST        0x38
/* The address of the ALT_UART_SRBR2 register. */
#define ALT_UART_SRBR2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR2_OFST))

/*
 * Register : Shadow Receive Buffer Register 3 - SRBR3
 * 
 * Shadow Receive Buffer Register 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR3_SRBR3           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR3_RSVD_SRBR3_31TO8
 * 
 */
/*
 * Field : srbr3
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR3_SRBR3 register field. */
#define ALT_UART_SRBR3_SRBR3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR3_SRBR3 register field. */
#define ALT_UART_SRBR3_SRBR3_MSB        7
/* The width in bits of the ALT_UART_SRBR3_SRBR3 register field. */
#define ALT_UART_SRBR3_SRBR3_WIDTH      8
/* The mask used to set the ALT_UART_SRBR3_SRBR3 register field value. */
#define ALT_UART_SRBR3_SRBR3_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR3_SRBR3 register field value. */
#define ALT_UART_SRBR3_SRBR3_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR3_SRBR3 register field. */
#define ALT_UART_SRBR3_SRBR3_RESET      0x0
/* Extracts the ALT_UART_SRBR3_SRBR3 field value from a register. */
#define ALT_UART_SRBR3_SRBR3_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR3_SRBR3 register field value suitable for setting the register. */
#define ALT_UART_SRBR3_SRBR3_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR3_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR3_RSVD_SRBR3_31TO8 register field. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR3_RSVD_SRBR3_31TO8 register field. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR3_RSVD_SRBR3_31TO8 register field. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR3_RSVD_SRBR3_31TO8 register field value. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR3_RSVD_SRBR3_31TO8 register field value. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR3_RSVD_SRBR3_31TO8 register field. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR3_RSVD_SRBR3_31TO8 field value from a register. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR3_RSVD_SRBR3_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR3_RSVD_SRBR3_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR3.
 */
struct ALT_UART_SRBR3_s
{
    const volatile uint32_t  srbr3            :  8;  /* ALT_UART_SRBR3_SRBR3 */
    const volatile uint32_t  RSVD_SRBR3_31to8 : 24;  /* ALT_UART_SRBR3_RSVD_SRBR3_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR3. */
typedef struct ALT_UART_SRBR3_s  ALT_UART_SRBR3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR3 register. */
#define ALT_UART_SRBR3_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR3 register from the beginning of the component. */
#define ALT_UART_SRBR3_OFST        0x3c
/* The address of the ALT_UART_SRBR3 register. */
#define ALT_UART_SRBR3_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR3_OFST))

/*
 * Register : Shadow Receive Buffer Register 4 - SRBR4
 * 
 * Shadow Receive Buffer Register 4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR4_SRBR4           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR4_RSVD_SRBR4_31TO8
 * 
 */
/*
 * Field : srbr4
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR4_SRBR4 register field. */
#define ALT_UART_SRBR4_SRBR4_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR4_SRBR4 register field. */
#define ALT_UART_SRBR4_SRBR4_MSB        7
/* The width in bits of the ALT_UART_SRBR4_SRBR4 register field. */
#define ALT_UART_SRBR4_SRBR4_WIDTH      8
/* The mask used to set the ALT_UART_SRBR4_SRBR4 register field value. */
#define ALT_UART_SRBR4_SRBR4_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR4_SRBR4 register field value. */
#define ALT_UART_SRBR4_SRBR4_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR4_SRBR4 register field. */
#define ALT_UART_SRBR4_SRBR4_RESET      0x0
/* Extracts the ALT_UART_SRBR4_SRBR4 field value from a register. */
#define ALT_UART_SRBR4_SRBR4_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR4_SRBR4 register field value suitable for setting the register. */
#define ALT_UART_SRBR4_SRBR4_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR4_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR4_RSVD_SRBR4_31TO8 register field. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR4_RSVD_SRBR4_31TO8 register field. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR4_RSVD_SRBR4_31TO8 register field. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR4_RSVD_SRBR4_31TO8 register field value. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR4_RSVD_SRBR4_31TO8 register field value. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR4_RSVD_SRBR4_31TO8 register field. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR4_RSVD_SRBR4_31TO8 field value from a register. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR4_RSVD_SRBR4_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR4_RSVD_SRBR4_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR4.
 */
struct ALT_UART_SRBR4_s
{
    const volatile uint32_t  srbr4            :  8;  /* ALT_UART_SRBR4_SRBR4 */
    const volatile uint32_t  RSVD_SRBR4_31to8 : 24;  /* ALT_UART_SRBR4_RSVD_SRBR4_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR4. */
typedef struct ALT_UART_SRBR4_s  ALT_UART_SRBR4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR4 register. */
#define ALT_UART_SRBR4_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR4 register from the beginning of the component. */
#define ALT_UART_SRBR4_OFST        0x40
/* The address of the ALT_UART_SRBR4 register. */
#define ALT_UART_SRBR4_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR4_OFST))

/*
 * Register : Shadow Receive Buffer Register 5 - SRBR5
 * 
 * Shadow Receive Buffer Register 5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR5_SRBR5           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR5_RSVD_SRBR5_31TO8
 * 
 */
/*
 * Field : srbr5
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR5_SRBR5 register field. */
#define ALT_UART_SRBR5_SRBR5_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR5_SRBR5 register field. */
#define ALT_UART_SRBR5_SRBR5_MSB        7
/* The width in bits of the ALT_UART_SRBR5_SRBR5 register field. */
#define ALT_UART_SRBR5_SRBR5_WIDTH      8
/* The mask used to set the ALT_UART_SRBR5_SRBR5 register field value. */
#define ALT_UART_SRBR5_SRBR5_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR5_SRBR5 register field value. */
#define ALT_UART_SRBR5_SRBR5_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR5_SRBR5 register field. */
#define ALT_UART_SRBR5_SRBR5_RESET      0x0
/* Extracts the ALT_UART_SRBR5_SRBR5 field value from a register. */
#define ALT_UART_SRBR5_SRBR5_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR5_SRBR5 register field value suitable for setting the register. */
#define ALT_UART_SRBR5_SRBR5_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR5_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR5_RSVD_SRBR5_31TO8 register field. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR5_RSVD_SRBR5_31TO8 register field. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR5_RSVD_SRBR5_31TO8 register field. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR5_RSVD_SRBR5_31TO8 register field value. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR5_RSVD_SRBR5_31TO8 register field value. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR5_RSVD_SRBR5_31TO8 register field. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR5_RSVD_SRBR5_31TO8 field value from a register. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR5_RSVD_SRBR5_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR5_RSVD_SRBR5_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR5.
 */
struct ALT_UART_SRBR5_s
{
    const volatile uint32_t  srbr5            :  8;  /* ALT_UART_SRBR5_SRBR5 */
    const volatile uint32_t  RSVD_SRBR5_31to8 : 24;  /* ALT_UART_SRBR5_RSVD_SRBR5_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR5. */
typedef struct ALT_UART_SRBR5_s  ALT_UART_SRBR5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR5 register. */
#define ALT_UART_SRBR5_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR5 register from the beginning of the component. */
#define ALT_UART_SRBR5_OFST        0x44
/* The address of the ALT_UART_SRBR5 register. */
#define ALT_UART_SRBR5_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR5_OFST))

/*
 * Register : Shadow Receive Buffer Register 6 - SRBR6
 * 
 * Shadow Receive Buffer Register 6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR6_SRBR6           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR6_RSVD_SRBR6_31TO8
 * 
 */
/*
 * Field : srbr6
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR6_SRBR6 register field. */
#define ALT_UART_SRBR6_SRBR6_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR6_SRBR6 register field. */
#define ALT_UART_SRBR6_SRBR6_MSB        7
/* The width in bits of the ALT_UART_SRBR6_SRBR6 register field. */
#define ALT_UART_SRBR6_SRBR6_WIDTH      8
/* The mask used to set the ALT_UART_SRBR6_SRBR6 register field value. */
#define ALT_UART_SRBR6_SRBR6_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR6_SRBR6 register field value. */
#define ALT_UART_SRBR6_SRBR6_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR6_SRBR6 register field. */
#define ALT_UART_SRBR6_SRBR6_RESET      0x0
/* Extracts the ALT_UART_SRBR6_SRBR6 field value from a register. */
#define ALT_UART_SRBR6_SRBR6_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR6_SRBR6 register field value suitable for setting the register. */
#define ALT_UART_SRBR6_SRBR6_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR6_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR6_RSVD_SRBR6_31TO8 register field. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR6_RSVD_SRBR6_31TO8 register field. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR6_RSVD_SRBR6_31TO8 register field. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR6_RSVD_SRBR6_31TO8 register field value. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR6_RSVD_SRBR6_31TO8 register field value. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR6_RSVD_SRBR6_31TO8 register field. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR6_RSVD_SRBR6_31TO8 field value from a register. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR6_RSVD_SRBR6_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR6_RSVD_SRBR6_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR6.
 */
struct ALT_UART_SRBR6_s
{
    const volatile uint32_t  srbr6            :  8;  /* ALT_UART_SRBR6_SRBR6 */
    const volatile uint32_t  RSVD_SRBR6_31to8 : 24;  /* ALT_UART_SRBR6_RSVD_SRBR6_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR6. */
typedef struct ALT_UART_SRBR6_s  ALT_UART_SRBR6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR6 register. */
#define ALT_UART_SRBR6_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR6 register from the beginning of the component. */
#define ALT_UART_SRBR6_OFST        0x48
/* The address of the ALT_UART_SRBR6 register. */
#define ALT_UART_SRBR6_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR6_OFST))

/*
 * Register : Shadow Receive Buffer Register 7 - SRBR7
 * 
 * Shadow Receive Buffer Register 7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR7_SRBR7           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR7_RSVD_SRBR7_31TO8
 * 
 */
/*
 * Field : srbr7
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR7_SRBR7 register field. */
#define ALT_UART_SRBR7_SRBR7_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR7_SRBR7 register field. */
#define ALT_UART_SRBR7_SRBR7_MSB        7
/* The width in bits of the ALT_UART_SRBR7_SRBR7 register field. */
#define ALT_UART_SRBR7_SRBR7_WIDTH      8
/* The mask used to set the ALT_UART_SRBR7_SRBR7 register field value. */
#define ALT_UART_SRBR7_SRBR7_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR7_SRBR7 register field value. */
#define ALT_UART_SRBR7_SRBR7_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR7_SRBR7 register field. */
#define ALT_UART_SRBR7_SRBR7_RESET      0x0
/* Extracts the ALT_UART_SRBR7_SRBR7 field value from a register. */
#define ALT_UART_SRBR7_SRBR7_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR7_SRBR7 register field value suitable for setting the register. */
#define ALT_UART_SRBR7_SRBR7_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR7_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR7_RSVD_SRBR7_31TO8 register field. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR7_RSVD_SRBR7_31TO8 register field. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR7_RSVD_SRBR7_31TO8 register field. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR7_RSVD_SRBR7_31TO8 register field value. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR7_RSVD_SRBR7_31TO8 register field value. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR7_RSVD_SRBR7_31TO8 register field. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR7_RSVD_SRBR7_31TO8 field value from a register. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR7_RSVD_SRBR7_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR7_RSVD_SRBR7_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR7.
 */
struct ALT_UART_SRBR7_s
{
    const volatile uint32_t  srbr7            :  8;  /* ALT_UART_SRBR7_SRBR7 */
    const volatile uint32_t  RSVD_SRBR7_31to8 : 24;  /* ALT_UART_SRBR7_RSVD_SRBR7_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR7. */
typedef struct ALT_UART_SRBR7_s  ALT_UART_SRBR7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR7 register. */
#define ALT_UART_SRBR7_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR7 register from the beginning of the component. */
#define ALT_UART_SRBR7_OFST        0x4c
/* The address of the ALT_UART_SRBR7 register. */
#define ALT_UART_SRBR7_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR7_OFST))

/*
 * Register : Shadow Receive Buffer Register 8 - SRBR8
 * 
 * Shadow Receive Buffer Register 8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR8_SRBR8           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR8_RSVD_SRBR8_31TO8
 * 
 */
/*
 * Field : srbr8
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR8_SRBR8 register field. */
#define ALT_UART_SRBR8_SRBR8_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR8_SRBR8 register field. */
#define ALT_UART_SRBR8_SRBR8_MSB        7
/* The width in bits of the ALT_UART_SRBR8_SRBR8 register field. */
#define ALT_UART_SRBR8_SRBR8_WIDTH      8
/* The mask used to set the ALT_UART_SRBR8_SRBR8 register field value. */
#define ALT_UART_SRBR8_SRBR8_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR8_SRBR8 register field value. */
#define ALT_UART_SRBR8_SRBR8_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR8_SRBR8 register field. */
#define ALT_UART_SRBR8_SRBR8_RESET      0x0
/* Extracts the ALT_UART_SRBR8_SRBR8 field value from a register. */
#define ALT_UART_SRBR8_SRBR8_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR8_SRBR8 register field value suitable for setting the register. */
#define ALT_UART_SRBR8_SRBR8_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR8_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR8_RSVD_SRBR8_31TO8 register field. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR8_RSVD_SRBR8_31TO8 register field. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR8_RSVD_SRBR8_31TO8 register field. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR8_RSVD_SRBR8_31TO8 register field value. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR8_RSVD_SRBR8_31TO8 register field value. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR8_RSVD_SRBR8_31TO8 register field. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR8_RSVD_SRBR8_31TO8 field value from a register. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR8_RSVD_SRBR8_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR8_RSVD_SRBR8_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR8.
 */
struct ALT_UART_SRBR8_s
{
    const volatile uint32_t  srbr8            :  8;  /* ALT_UART_SRBR8_SRBR8 */
    const volatile uint32_t  RSVD_SRBR8_31to8 : 24;  /* ALT_UART_SRBR8_RSVD_SRBR8_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR8. */
typedef struct ALT_UART_SRBR8_s  ALT_UART_SRBR8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR8 register. */
#define ALT_UART_SRBR8_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR8 register from the beginning of the component. */
#define ALT_UART_SRBR8_OFST        0x50
/* The address of the ALT_UART_SRBR8 register. */
#define ALT_UART_SRBR8_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR8_OFST))

/*
 * Register : Shadow Receive Buffer Register 9 - SRBR9
 * 
 * Shadow Receive Buffer Register 9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR9_SRBR9           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR9_RSVD_SRBR9_31TO8
 * 
 */
/*
 * Field : srbr9
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR9_SRBR9 register field. */
#define ALT_UART_SRBR9_SRBR9_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR9_SRBR9 register field. */
#define ALT_UART_SRBR9_SRBR9_MSB        7
/* The width in bits of the ALT_UART_SRBR9_SRBR9 register field. */
#define ALT_UART_SRBR9_SRBR9_WIDTH      8
/* The mask used to set the ALT_UART_SRBR9_SRBR9 register field value. */
#define ALT_UART_SRBR9_SRBR9_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR9_SRBR9 register field value. */
#define ALT_UART_SRBR9_SRBR9_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR9_SRBR9 register field. */
#define ALT_UART_SRBR9_SRBR9_RESET      0x0
/* Extracts the ALT_UART_SRBR9_SRBR9 field value from a register. */
#define ALT_UART_SRBR9_SRBR9_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR9_SRBR9 register field value suitable for setting the register. */
#define ALT_UART_SRBR9_SRBR9_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR9_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR9_RSVD_SRBR9_31TO8 register field. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR9_RSVD_SRBR9_31TO8 register field. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR9_RSVD_SRBR9_31TO8 register field. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR9_RSVD_SRBR9_31TO8 register field value. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR9_RSVD_SRBR9_31TO8 register field value. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR9_RSVD_SRBR9_31TO8 register field. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR9_RSVD_SRBR9_31TO8 field value from a register. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR9_RSVD_SRBR9_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR9_RSVD_SRBR9_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR9.
 */
struct ALT_UART_SRBR9_s
{
    const volatile uint32_t  srbr9            :  8;  /* ALT_UART_SRBR9_SRBR9 */
    const volatile uint32_t  RSVD_SRBR9_31to8 : 24;  /* ALT_UART_SRBR9_RSVD_SRBR9_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR9. */
typedef struct ALT_UART_SRBR9_s  ALT_UART_SRBR9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR9 register. */
#define ALT_UART_SRBR9_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR9 register from the beginning of the component. */
#define ALT_UART_SRBR9_OFST        0x54
/* The address of the ALT_UART_SRBR9 register. */
#define ALT_UART_SRBR9_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR9_OFST))

/*
 * Register : Shadow Receive Buffer Register 10 - SRBR10
 * 
 * Shadow Receive Buffer Register 10
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR10_SRBR10           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR10_RSVD_SRBR10_31TO8
 * 
 */
/*
 * Field : srbr10
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR10_SRBR10 register field. */
#define ALT_UART_SRBR10_SRBR10_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR10_SRBR10 register field. */
#define ALT_UART_SRBR10_SRBR10_MSB        7
/* The width in bits of the ALT_UART_SRBR10_SRBR10 register field. */
#define ALT_UART_SRBR10_SRBR10_WIDTH      8
/* The mask used to set the ALT_UART_SRBR10_SRBR10 register field value. */
#define ALT_UART_SRBR10_SRBR10_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR10_SRBR10 register field value. */
#define ALT_UART_SRBR10_SRBR10_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR10_SRBR10 register field. */
#define ALT_UART_SRBR10_SRBR10_RESET      0x0
/* Extracts the ALT_UART_SRBR10_SRBR10 field value from a register. */
#define ALT_UART_SRBR10_SRBR10_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR10_SRBR10 register field value suitable for setting the register. */
#define ALT_UART_SRBR10_SRBR10_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR10_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR10_RSVD_SRBR10_31TO8 register field. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR10_RSVD_SRBR10_31TO8 register field. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR10_RSVD_SRBR10_31TO8 register field. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR10_RSVD_SRBR10_31TO8 register field value. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR10_RSVD_SRBR10_31TO8 register field value. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR10_RSVD_SRBR10_31TO8 register field. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR10_RSVD_SRBR10_31TO8 field value from a register. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR10_RSVD_SRBR10_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR10_RSVD_SRBR10_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR10.
 */
struct ALT_UART_SRBR10_s
{
    const volatile uint32_t  srbr10            :  8;  /* ALT_UART_SRBR10_SRBR10 */
    const volatile uint32_t  RSVD_SRBR10_31to8 : 24;  /* ALT_UART_SRBR10_RSVD_SRBR10_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR10. */
typedef struct ALT_UART_SRBR10_s  ALT_UART_SRBR10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR10 register. */
#define ALT_UART_SRBR10_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR10 register from the beginning of the component. */
#define ALT_UART_SRBR10_OFST        0x58
/* The address of the ALT_UART_SRBR10 register. */
#define ALT_UART_SRBR10_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR10_OFST))

/*
 * Register : Shadow Receive Buffer Register 11 - SRBR11
 * 
 * Shadow Receive Buffer Register 11
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR11_SRBR11           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR11_RSVD_SRBR11_31TO8
 * 
 */
/*
 * Field : srbr11
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR11_SRBR11 register field. */
#define ALT_UART_SRBR11_SRBR11_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR11_SRBR11 register field. */
#define ALT_UART_SRBR11_SRBR11_MSB        7
/* The width in bits of the ALT_UART_SRBR11_SRBR11 register field. */
#define ALT_UART_SRBR11_SRBR11_WIDTH      8
/* The mask used to set the ALT_UART_SRBR11_SRBR11 register field value. */
#define ALT_UART_SRBR11_SRBR11_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR11_SRBR11 register field value. */
#define ALT_UART_SRBR11_SRBR11_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR11_SRBR11 register field. */
#define ALT_UART_SRBR11_SRBR11_RESET      0x0
/* Extracts the ALT_UART_SRBR11_SRBR11 field value from a register. */
#define ALT_UART_SRBR11_SRBR11_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR11_SRBR11 register field value suitable for setting the register. */
#define ALT_UART_SRBR11_SRBR11_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR11_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR11_RSVD_SRBR11_31TO8 register field. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR11_RSVD_SRBR11_31TO8 register field. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR11_RSVD_SRBR11_31TO8 register field. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR11_RSVD_SRBR11_31TO8 register field value. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR11_RSVD_SRBR11_31TO8 register field value. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR11_RSVD_SRBR11_31TO8 register field. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR11_RSVD_SRBR11_31TO8 field value from a register. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR11_RSVD_SRBR11_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR11_RSVD_SRBR11_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR11.
 */
struct ALT_UART_SRBR11_s
{
    const volatile uint32_t  srbr11            :  8;  /* ALT_UART_SRBR11_SRBR11 */
    const volatile uint32_t  RSVD_SRBR11_31to8 : 24;  /* ALT_UART_SRBR11_RSVD_SRBR11_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR11. */
typedef struct ALT_UART_SRBR11_s  ALT_UART_SRBR11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR11 register. */
#define ALT_UART_SRBR11_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR11 register from the beginning of the component. */
#define ALT_UART_SRBR11_OFST        0x5c
/* The address of the ALT_UART_SRBR11 register. */
#define ALT_UART_SRBR11_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR11_OFST))

/*
 * Register : Shadow Receive Buffer Register 12 - SRBR12
 * 
 * Shadow Receive Buffer Register 12
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR12_SRBR12           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR12_RSVD_SRBR12_31TO8
 * 
 */
/*
 * Field : srbr12
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR12_SRBR12 register field. */
#define ALT_UART_SRBR12_SRBR12_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR12_SRBR12 register field. */
#define ALT_UART_SRBR12_SRBR12_MSB        7
/* The width in bits of the ALT_UART_SRBR12_SRBR12 register field. */
#define ALT_UART_SRBR12_SRBR12_WIDTH      8
/* The mask used to set the ALT_UART_SRBR12_SRBR12 register field value. */
#define ALT_UART_SRBR12_SRBR12_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR12_SRBR12 register field value. */
#define ALT_UART_SRBR12_SRBR12_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR12_SRBR12 register field. */
#define ALT_UART_SRBR12_SRBR12_RESET      0x0
/* Extracts the ALT_UART_SRBR12_SRBR12 field value from a register. */
#define ALT_UART_SRBR12_SRBR12_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR12_SRBR12 register field value suitable for setting the register. */
#define ALT_UART_SRBR12_SRBR12_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR12_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR12_RSVD_SRBR12_31TO8 register field. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR12_RSVD_SRBR12_31TO8 register field. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR12_RSVD_SRBR12_31TO8 register field. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR12_RSVD_SRBR12_31TO8 register field value. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR12_RSVD_SRBR12_31TO8 register field value. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR12_RSVD_SRBR12_31TO8 register field. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR12_RSVD_SRBR12_31TO8 field value from a register. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR12_RSVD_SRBR12_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR12_RSVD_SRBR12_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR12.
 */
struct ALT_UART_SRBR12_s
{
    const volatile uint32_t  srbr12            :  8;  /* ALT_UART_SRBR12_SRBR12 */
    const volatile uint32_t  RSVD_SRBR12_31to8 : 24;  /* ALT_UART_SRBR12_RSVD_SRBR12_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR12. */
typedef struct ALT_UART_SRBR12_s  ALT_UART_SRBR12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR12 register. */
#define ALT_UART_SRBR12_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR12 register from the beginning of the component. */
#define ALT_UART_SRBR12_OFST        0x60
/* The address of the ALT_UART_SRBR12 register. */
#define ALT_UART_SRBR12_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR12_OFST))

/*
 * Register : Shadow Receive Buffer Register 13 - SRBR13
 * 
 * Shadow Receive Buffer Register 13
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR13_SRBR13           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR13_RSVD_SRBR13_31TO8
 * 
 */
/*
 * Field : srbr13
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR13_SRBR13 register field. */
#define ALT_UART_SRBR13_SRBR13_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR13_SRBR13 register field. */
#define ALT_UART_SRBR13_SRBR13_MSB        7
/* The width in bits of the ALT_UART_SRBR13_SRBR13 register field. */
#define ALT_UART_SRBR13_SRBR13_WIDTH      8
/* The mask used to set the ALT_UART_SRBR13_SRBR13 register field value. */
#define ALT_UART_SRBR13_SRBR13_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR13_SRBR13 register field value. */
#define ALT_UART_SRBR13_SRBR13_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR13_SRBR13 register field. */
#define ALT_UART_SRBR13_SRBR13_RESET      0x0
/* Extracts the ALT_UART_SRBR13_SRBR13 field value from a register. */
#define ALT_UART_SRBR13_SRBR13_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR13_SRBR13 register field value suitable for setting the register. */
#define ALT_UART_SRBR13_SRBR13_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR13_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR13_RSVD_SRBR13_31TO8 register field. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR13_RSVD_SRBR13_31TO8 register field. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR13_RSVD_SRBR13_31TO8 register field. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR13_RSVD_SRBR13_31TO8 register field value. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR13_RSVD_SRBR13_31TO8 register field value. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR13_RSVD_SRBR13_31TO8 register field. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR13_RSVD_SRBR13_31TO8 field value from a register. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR13_RSVD_SRBR13_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR13_RSVD_SRBR13_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR13.
 */
struct ALT_UART_SRBR13_s
{
    const volatile uint32_t  srbr13            :  8;  /* ALT_UART_SRBR13_SRBR13 */
    const volatile uint32_t  RSVD_SRBR13_31to8 : 24;  /* ALT_UART_SRBR13_RSVD_SRBR13_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR13. */
typedef struct ALT_UART_SRBR13_s  ALT_UART_SRBR13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR13 register. */
#define ALT_UART_SRBR13_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR13 register from the beginning of the component. */
#define ALT_UART_SRBR13_OFST        0x64
/* The address of the ALT_UART_SRBR13 register. */
#define ALT_UART_SRBR13_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR13_OFST))

/*
 * Register : Shadow Receive Buffer Register 14 - SRBR14
 * 
 * Shadow Receive Buffer Register 14
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR14_SRBR14           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR14_RSVD_SRBR14_31TO8
 * 
 */
/*
 * Field : srbr14
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR14_SRBR14 register field. */
#define ALT_UART_SRBR14_SRBR14_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR14_SRBR14 register field. */
#define ALT_UART_SRBR14_SRBR14_MSB        7
/* The width in bits of the ALT_UART_SRBR14_SRBR14 register field. */
#define ALT_UART_SRBR14_SRBR14_WIDTH      8
/* The mask used to set the ALT_UART_SRBR14_SRBR14 register field value. */
#define ALT_UART_SRBR14_SRBR14_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR14_SRBR14 register field value. */
#define ALT_UART_SRBR14_SRBR14_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR14_SRBR14 register field. */
#define ALT_UART_SRBR14_SRBR14_RESET      0x0
/* Extracts the ALT_UART_SRBR14_SRBR14 field value from a register. */
#define ALT_UART_SRBR14_SRBR14_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR14_SRBR14 register field value suitable for setting the register. */
#define ALT_UART_SRBR14_SRBR14_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR14_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR14_RSVD_SRBR14_31TO8 register field. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR14_RSVD_SRBR14_31TO8 register field. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR14_RSVD_SRBR14_31TO8 register field. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR14_RSVD_SRBR14_31TO8 register field value. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR14_RSVD_SRBR14_31TO8 register field value. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR14_RSVD_SRBR14_31TO8 register field. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR14_RSVD_SRBR14_31TO8 field value from a register. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR14_RSVD_SRBR14_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR14_RSVD_SRBR14_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR14.
 */
struct ALT_UART_SRBR14_s
{
    const volatile uint32_t  srbr14            :  8;  /* ALT_UART_SRBR14_SRBR14 */
    const volatile uint32_t  RSVD_SRBR14_31to8 : 24;  /* ALT_UART_SRBR14_RSVD_SRBR14_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR14. */
typedef struct ALT_UART_SRBR14_s  ALT_UART_SRBR14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR14 register. */
#define ALT_UART_SRBR14_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR14 register from the beginning of the component. */
#define ALT_UART_SRBR14_OFST        0x68
/* The address of the ALT_UART_SRBR14 register. */
#define ALT_UART_SRBR14_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR14_OFST))

/*
 * Register : Shadow Receive Buffer Register 15 - SRBR15
 * 
 * Shadow Receive Buffer Register 15
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_SRBR15_SRBR15           
 *  [31:8] | R      | 0x0   | ALT_UART_SRBR15_RSVD_SRBR15_31TO8
 * 
 */
/*
 * Field : srbr15
 * 
 * See srbr0 description
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR15_SRBR15 register field. */
#define ALT_UART_SRBR15_SRBR15_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR15_SRBR15 register field. */
#define ALT_UART_SRBR15_SRBR15_MSB        7
/* The width in bits of the ALT_UART_SRBR15_SRBR15 register field. */
#define ALT_UART_SRBR15_SRBR15_WIDTH      8
/* The mask used to set the ALT_UART_SRBR15_SRBR15 register field value. */
#define ALT_UART_SRBR15_SRBR15_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_SRBR15_SRBR15 register field value. */
#define ALT_UART_SRBR15_SRBR15_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_SRBR15_SRBR15 register field. */
#define ALT_UART_SRBR15_SRBR15_RESET      0x0
/* Extracts the ALT_UART_SRBR15_SRBR15 field value from a register. */
#define ALT_UART_SRBR15_SRBR15_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_SRBR15_SRBR15 register field value suitable for setting the register. */
#define ALT_UART_SRBR15_SRBR15_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_SRBR15_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRBR15_RSVD_SRBR15_31TO8 register field. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_SRBR15_RSVD_SRBR15_31TO8 register field. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_MSB        31
/* The width in bits of the ALT_UART_SRBR15_RSVD_SRBR15_31TO8 register field. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_SRBR15_RSVD_SRBR15_31TO8 register field value. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_SRBR15_RSVD_SRBR15_31TO8 register field value. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_SRBR15_RSVD_SRBR15_31TO8 register field. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_RESET      0x0
/* Extracts the ALT_UART_SRBR15_RSVD_SRBR15_31TO8 field value from a register. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_SRBR15_RSVD_SRBR15_31TO8 register field value suitable for setting the register. */
#define ALT_UART_SRBR15_RSVD_SRBR15_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_SRBR15.
 */
struct ALT_UART_SRBR15_s
{
    const volatile uint32_t  srbr15            :  8;  /* ALT_UART_SRBR15_SRBR15 */
    const volatile uint32_t  RSVD_SRBR15_31to8 : 24;  /* ALT_UART_SRBR15_RSVD_SRBR15_31TO8 */
};

/* The typedef declaration for register ALT_UART_SRBR15. */
typedef struct ALT_UART_SRBR15_s  ALT_UART_SRBR15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRBR15 register. */
#define ALT_UART_SRBR15_RESET       0x00000000
/* The byte offset of the ALT_UART_SRBR15 register from the beginning of the component. */
#define ALT_UART_SRBR15_OFST        0x6c
/* The address of the ALT_UART_SRBR15 register. */
#define ALT_UART_SRBR15_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRBR15_OFST))

/*
 * Register : FIFO Access Register - FAR
 * 
 * FIFO Access Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_FAR_FAR           
 *  [31:1] | R      | 0x0   | ALT_UART_FAR_RSVD_FAR_31TO1
 * 
 */
/*
 * Field : far
 * 
 * Writes will have no effect when FIFO_ACCESS == No, always readable.  This
 * register
 * 
 * is use to enable a FIFO access mode for testing, so that the receive FIFO can be
 * 
 * written by the master and the transmit FIFO can be read by the master when
 * FIFO's
 * 
 * are implemented and enabled. When FIFO's are not implemented or not enabled it
 * 
 * allows the RBR to be written by the master and the THR to be read by the master.
 * 
 * 0 = FIFO access mode disabled
 * 
 * 1 = FIFO access mode enabled
 * 
 * Note, that when the FIFO access mode is enabled/disabled, the control portion of
 * 
 * the receive FIFO and transmit FIFO is reset and the FIFO's are treated as empty.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description              
 * :----------------------------|:------|:--------------------------
 *  ALT_UART_FAR_FAR_E_DISABLED | 0x0   | FIFO access mode disabled
 *  ALT_UART_FAR_FAR_E_ENABLED  | 0x1   | FIFO access mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_FAR_FAR
 * 
 * FIFO access mode disabled
 */
#define ALT_UART_FAR_FAR_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_FAR_FAR
 * 
 * FIFO access mode enabled
 */
#define ALT_UART_FAR_FAR_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_FAR_FAR register field. */
#define ALT_UART_FAR_FAR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_FAR_FAR register field. */
#define ALT_UART_FAR_FAR_MSB        0
/* The width in bits of the ALT_UART_FAR_FAR register field. */
#define ALT_UART_FAR_FAR_WIDTH      1
/* The mask used to set the ALT_UART_FAR_FAR register field value. */
#define ALT_UART_FAR_FAR_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_FAR_FAR register field value. */
#define ALT_UART_FAR_FAR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_FAR_FAR register field. */
#define ALT_UART_FAR_FAR_RESET      0x0
/* Extracts the ALT_UART_FAR_FAR field value from a register. */
#define ALT_UART_FAR_FAR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_FAR_FAR register field value suitable for setting the register. */
#define ALT_UART_FAR_FAR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_FAR_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_FAR_RSVD_FAR_31TO1 register field. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_FAR_RSVD_FAR_31TO1 register field. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_MSB        31
/* The width in bits of the ALT_UART_FAR_RSVD_FAR_31TO1 register field. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_WIDTH      31
/* The mask used to set the ALT_UART_FAR_RSVD_FAR_31TO1 register field value. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_UART_FAR_RSVD_FAR_31TO1 register field value. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_UART_FAR_RSVD_FAR_31TO1 register field. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_RESET      0x0
/* Extracts the ALT_UART_FAR_RSVD_FAR_31TO1 field value from a register. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_UART_FAR_RSVD_FAR_31TO1 register field value suitable for setting the register. */
#define ALT_UART_FAR_RSVD_FAR_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_UART_FAR.
 */
struct ALT_UART_FAR_s
{
    volatile uint32_t        far            :  1;  /* ALT_UART_FAR_FAR */
    const volatile uint32_t  RSVD_FAR_31to1 : 31;  /* ALT_UART_FAR_RSVD_FAR_31TO1 */
};

/* The typedef declaration for register ALT_UART_FAR. */
typedef struct ALT_UART_FAR_s  ALT_UART_FAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_FAR register. */
#define ALT_UART_FAR_RESET       0x00000000
/* The byte offset of the ALT_UART_FAR register from the beginning of the component. */
#define ALT_UART_FAR_OFST        0x70
/* The address of the ALT_UART_FAR register. */
#define ALT_UART_FAR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_FAR_OFST))

/*
 * Register : Transmit FIFO Read - TFR
 * 
 * Transmit FIFO Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_TFR_TFR           
 *  [31:8] | R      | 0x0   | ALT_UART_TFR_RSVD_TFR_31TO8
 * 
 */
/*
 * Field : tfr
 * 
 * Transmit FIFO Read.
 * 
 * These bits are only valid when FIFO access mode is enabled (FAR[0] is set to
 * one).
 * 
 * When FIFO's are implemented and enabled, reading this register gives the data at
 * the
 * 
 * top of the transmit FIFO. Each consecutive read pops the transmit FIFO and gives
 * the
 * 
 * next data value that is currently at the top of the FIFO.
 * 
 * When FIFO's are not implemented or not enabled, reading this register gives the
 * data
 * 
 * in the THR.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_TFR_TFR register field. */
#define ALT_UART_TFR_TFR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_TFR_TFR register field. */
#define ALT_UART_TFR_TFR_MSB        7
/* The width in bits of the ALT_UART_TFR_TFR register field. */
#define ALT_UART_TFR_TFR_WIDTH      8
/* The mask used to set the ALT_UART_TFR_TFR register field value. */
#define ALT_UART_TFR_TFR_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_TFR_TFR register field value. */
#define ALT_UART_TFR_TFR_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_TFR_TFR register field. */
#define ALT_UART_TFR_TFR_RESET      0x0
/* Extracts the ALT_UART_TFR_TFR field value from a register. */
#define ALT_UART_TFR_TFR_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_TFR_TFR register field value suitable for setting the register. */
#define ALT_UART_TFR_TFR_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_TFR_31to8
 * 
 * Reserved bits [31:8] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_TFR_RSVD_TFR_31TO8 register field. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_TFR_RSVD_TFR_31TO8 register field. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_MSB        31
/* The width in bits of the ALT_UART_TFR_RSVD_TFR_31TO8 register field. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_WIDTH      24
/* The mask used to set the ALT_UART_TFR_RSVD_TFR_31TO8 register field value. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_TFR_RSVD_TFR_31TO8 register field value. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_TFR_RSVD_TFR_31TO8 register field. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_RESET      0x0
/* Extracts the ALT_UART_TFR_RSVD_TFR_31TO8 field value from a register. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_TFR_RSVD_TFR_31TO8 register field value suitable for setting the register. */
#define ALT_UART_TFR_RSVD_TFR_31TO8_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_TFR.
 */
struct ALT_UART_TFR_s
{
    const volatile uint32_t  tfr            :  8;  /* ALT_UART_TFR_TFR */
    const volatile uint32_t  RSVD_TFR_31to8 : 24;  /* ALT_UART_TFR_RSVD_TFR_31TO8 */
};

/* The typedef declaration for register ALT_UART_TFR. */
typedef struct ALT_UART_TFR_s  ALT_UART_TFR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_TFR register. */
#define ALT_UART_TFR_RESET       0x00000000
/* The byte offset of the ALT_UART_TFR register from the beginning of the component. */
#define ALT_UART_TFR_OFST        0x74
/* The address of the ALT_UART_TFR register. */
#define ALT_UART_TFR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_TFR_OFST))

/*
 * Register : Receive FIFO Write - RFW
 * 
 * Receive FIFO Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [7:0]   | W      | 0x0   | ALT_UART_RFW_RFWD           
 *  [8]     | W      | 0x0   | ALT_UART_RFW_RFPE           
 *  [9]     | W      | 0x0   | ALT_UART_RFW_RFFE           
 *  [31:10] | R      | 0x0   | ALT_UART_RFW_RSVD_RFW_31TO10
 * 
 */
/*
 * Field : RFWD
 * 
 * Receive FIFO Write Data.
 * 
 * These bits are only valid when FIFO access mode is enabled (FAR[0] is set to
 * one).
 * 
 * When FIFO's are implemented and enabled, the data that is written to the RFWD is
 * pushed
 * 
 * into the receive FIFO. Each consecutive write pushes the new data to the next
 * write
 * 
 * location in the receive FIFO.
 * 
 * When FIFO's are not implemented or not enabled, the data that is written to the
 * RFWD
 * 
 * is pushed into the RBR.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_RFW_RFWD register field. */
#define ALT_UART_RFW_RFWD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_RFW_RFWD register field. */
#define ALT_UART_RFW_RFWD_MSB        7
/* The width in bits of the ALT_UART_RFW_RFWD register field. */
#define ALT_UART_RFW_RFWD_WIDTH      8
/* The mask used to set the ALT_UART_RFW_RFWD register field value. */
#define ALT_UART_RFW_RFWD_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_RFW_RFWD register field value. */
#define ALT_UART_RFW_RFWD_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_RFW_RFWD register field. */
#define ALT_UART_RFW_RFWD_RESET      0x0
/* Extracts the ALT_UART_RFW_RFWD field value from a register. */
#define ALT_UART_RFW_RFWD_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_RFW_RFWD register field value suitable for setting the register. */
#define ALT_UART_RFW_RFWD_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RFPE
 * 
 * Receive FIFO Parity Error.
 * 
 * These bits are only valid when FIFO access mode is enabled (FAR[0] is set to
 * one).
 * 
 * When FIFO's are implemented and enabled, this bit is used to write parity error
 * 
 * detection information to the receive FIFO.
 * 
 * When FIFO's are not implemented or not enabled, this bit is used to write parity
 * 
 * error detection information to the RBR.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description          
 * :-----------------------------|:------|:----------------------
 *  ALT_UART_RFW_RFPE_E_DISABLED | 0x0   | Parity error disabled
 *  ALT_UART_RFW_RFPE_E_ENABLED  | 0x1   | Parity error enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_RFW_RFPE
 * 
 * Parity error disabled
 */
#define ALT_UART_RFW_RFPE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_RFW_RFPE
 * 
 * Parity error enabled
 */
#define ALT_UART_RFW_RFPE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_RFW_RFPE register field. */
#define ALT_UART_RFW_RFPE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_RFW_RFPE register field. */
#define ALT_UART_RFW_RFPE_MSB        8
/* The width in bits of the ALT_UART_RFW_RFPE register field. */
#define ALT_UART_RFW_RFPE_WIDTH      1
/* The mask used to set the ALT_UART_RFW_RFPE register field value. */
#define ALT_UART_RFW_RFPE_SET_MSK    0x00000100
/* The mask used to clear the ALT_UART_RFW_RFPE register field value. */
#define ALT_UART_RFW_RFPE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_UART_RFW_RFPE register field. */
#define ALT_UART_RFW_RFPE_RESET      0x0
/* Extracts the ALT_UART_RFW_RFPE field value from a register. */
#define ALT_UART_RFW_RFPE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_UART_RFW_RFPE register field value suitable for setting the register. */
#define ALT_UART_RFW_RFPE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : RFFE
 * 
 * Receive FIFO Framing Error.
 * 
 * These bits are only valid when FIFO access mode is enabled (FAR[0] is set to
 * one).
 * 
 * When FIFO's are implemented and enabled, this bit is used to write framing error
 * 
 * detection information to the receive FIFO.
 * 
 * When FIFO's are not implemented or not enabled, this bit is used to write
 * framing
 * 
 * error detection information to the RBR.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description         
 * :-----------------------------|:------|:---------------------
 *  ALT_UART_RFW_RFFE_E_DISABLED | 0x0   | Frame error disabled
 *  ALT_UART_RFW_RFFE_E_ENABLED  | 0x1   | Frame error enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_RFW_RFFE
 * 
 * Frame error disabled
 */
#define ALT_UART_RFW_RFFE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_RFW_RFFE
 * 
 * Frame error enabled
 */
#define ALT_UART_RFW_RFFE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_RFW_RFFE register field. */
#define ALT_UART_RFW_RFFE_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_UART_RFW_RFFE register field. */
#define ALT_UART_RFW_RFFE_MSB        9
/* The width in bits of the ALT_UART_RFW_RFFE register field. */
#define ALT_UART_RFW_RFFE_WIDTH      1
/* The mask used to set the ALT_UART_RFW_RFFE register field value. */
#define ALT_UART_RFW_RFFE_SET_MSK    0x00000200
/* The mask used to clear the ALT_UART_RFW_RFFE register field value. */
#define ALT_UART_RFW_RFFE_CLR_MSK    0xfffffdff
/* The reset value of the ALT_UART_RFW_RFFE register field. */
#define ALT_UART_RFW_RFFE_RESET      0x0
/* Extracts the ALT_UART_RFW_RFFE field value from a register. */
#define ALT_UART_RFW_RFFE_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_UART_RFW_RFFE register field value suitable for setting the register. */
#define ALT_UART_RFW_RFFE_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : RSVD_RFW_31to10
 * 
 * Reserved bits [31:10] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_RFW_RSVD_RFW_31TO10 register field. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_UART_RFW_RSVD_RFW_31TO10 register field. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_MSB        31
/* The width in bits of the ALT_UART_RFW_RSVD_RFW_31TO10 register field. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_WIDTH      22
/* The mask used to set the ALT_UART_RFW_RSVD_RFW_31TO10 register field value. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_SET_MSK    0xfffffc00
/* The mask used to clear the ALT_UART_RFW_RSVD_RFW_31TO10 register field value. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_CLR_MSK    0x000003ff
/* The reset value of the ALT_UART_RFW_RSVD_RFW_31TO10 register field. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_RESET      0x0
/* Extracts the ALT_UART_RFW_RSVD_RFW_31TO10 field value from a register. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_GET(value) (((value) & 0xfffffc00) >> 10)
/* Produces a ALT_UART_RFW_RSVD_RFW_31TO10 register field value suitable for setting the register. */
#define ALT_UART_RFW_RSVD_RFW_31TO10_SET(value) (((value) << 10) & 0xfffffc00)

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
 * The struct declaration for register ALT_UART_RFW.
 */
struct ALT_UART_RFW_s
{
    volatile uint32_t        RFWD            :  8;  /* ALT_UART_RFW_RFWD */
    volatile uint32_t        RFPE            :  1;  /* ALT_UART_RFW_RFPE */
    volatile uint32_t        RFFE            :  1;  /* ALT_UART_RFW_RFFE */
    const volatile uint32_t  RSVD_RFW_31to10 : 22;  /* ALT_UART_RFW_RSVD_RFW_31TO10 */
};

/* The typedef declaration for register ALT_UART_RFW. */
typedef struct ALT_UART_RFW_s  ALT_UART_RFW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_RFW register. */
#define ALT_UART_RFW_RESET       0x00000000
/* The byte offset of the ALT_UART_RFW register from the beginning of the component. */
#define ALT_UART_RFW_OFST        0x78
/* The address of the ALT_UART_RFW register. */
#define ALT_UART_RFW_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_RFW_OFST))

/*
 * Register : UART Status register - USR
 * 
 * UART Status register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_UART_USR_RSVD_BUSY     
 *  [1]    | R      | 0x1   | ALT_UART_USR_TFNF          
 *  [2]    | R      | 0x1   | ALT_UART_USR_TFE           
 *  [3]    | R      | 0x0   | ALT_UART_USR_RFNE          
 *  [4]    | R      | 0x0   | ALT_UART_USR_RFF           
 *  [31:5] | R      | 0x0   | ALT_UART_USR_RSVD_USR_31TO5
 * 
 */
/*
 * Field : RSVD_BUSY
 * 
 * UART Busy.
 * 
 * This bit is only valid when UART_16550_COMPATIBLE == NO. This indicates that a
 * serial
 * 
 * transfer is in progress, when cleared indicates that the DW_apb_uart is idle or
 * inactive.
 * 
 * 0 - DW_apb_uart is idle or inactive
 * 
 * 1 - DW_apb_uart is busy (actively transferring data)
 * 
 * Note that it is possible for the UART Busy bit to be cleared even though a new
 * 
 * character may have been sent from another device. That is, if the DW_apb_uart
 * 
 * has no data in the THR and RBR and there is no transmission in progress and a
 * start
 * 
 * bit of a new character has just reached the DW_apb_uart. This is due to the fact
 * 
 * that a valid start is not seen until the middle of the bit period and this
 * duration
 * 
 * is dependent on the baud divisor that has been programmed. If a second system
 * clock
 * 
 * has been implemented (CLOCK_MODE == Enabled) the assertion of this bit will also
 * be
 * 
 * delayed by several cycles of the slower clock.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                                     
 * :------------------------------|:------|:-------------------------------------------------
 *  ALT_UART_USR_RSVD_BUSY_E_IDLE | 0x0   | DW_apb_uart is idle or inactive                 
 *  ALT_UART_USR_RSVD_BUSY_E_BUSY | 0x1   | DW_apb_uart is busy (actively transferring data)
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_USR_RSVD_BUSY
 * 
 * DW_apb_uart is idle or inactive
 */
#define ALT_UART_USR_RSVD_BUSY_E_IDLE   0x0
/*
 * Enumerated value for register field ALT_UART_USR_RSVD_BUSY
 * 
 * DW_apb_uart is busy (actively transferring data)
 */
#define ALT_UART_USR_RSVD_BUSY_E_BUSY   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_USR_RSVD_BUSY register field. */
#define ALT_UART_USR_RSVD_BUSY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_USR_RSVD_BUSY register field. */
#define ALT_UART_USR_RSVD_BUSY_MSB        0
/* The width in bits of the ALT_UART_USR_RSVD_BUSY register field. */
#define ALT_UART_USR_RSVD_BUSY_WIDTH      1
/* The mask used to set the ALT_UART_USR_RSVD_BUSY register field value. */
#define ALT_UART_USR_RSVD_BUSY_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_USR_RSVD_BUSY register field value. */
#define ALT_UART_USR_RSVD_BUSY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_USR_RSVD_BUSY register field. */
#define ALT_UART_USR_RSVD_BUSY_RESET      0x0
/* Extracts the ALT_UART_USR_RSVD_BUSY field value from a register. */
#define ALT_UART_USR_RSVD_BUSY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_USR_RSVD_BUSY register field value suitable for setting the register. */
#define ALT_UART_USR_RSVD_BUSY_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TFNF
 * 
 * Transmit FIFO Not Full.
 * 
 * This bit is only valid when FIFO_STAT == YES. This is used to indicate that the
 * 
 * transmit FIFO in not full.
 * 
 * 0 = Transmit FIFO is full
 * 
 * 1 = Transmit FIFO is not full
 * 
 * This bit is cleared when the TX FIFO is full.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description              
 * :-----------------------------|:------|:--------------------------
 *  ALT_UART_USR_TFNF_E_FULL     | 0x0   | Transmit FIFO is full    
 *  ALT_UART_USR_TFNF_E_NOT_FULL | 0x1   | Transmit FIFO is not full
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_USR_TFNF
 * 
 * Transmit FIFO is full
 */
#define ALT_UART_USR_TFNF_E_FULL        0x0
/*
 * Enumerated value for register field ALT_UART_USR_TFNF
 * 
 * Transmit FIFO is not full
 */
#define ALT_UART_USR_TFNF_E_NOT_FULL    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_USR_TFNF register field. */
#define ALT_UART_USR_TFNF_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_USR_TFNF register field. */
#define ALT_UART_USR_TFNF_MSB        1
/* The width in bits of the ALT_UART_USR_TFNF register field. */
#define ALT_UART_USR_TFNF_WIDTH      1
/* The mask used to set the ALT_UART_USR_TFNF register field value. */
#define ALT_UART_USR_TFNF_SET_MSK    0x00000002
/* The mask used to clear the ALT_UART_USR_TFNF register field value. */
#define ALT_UART_USR_TFNF_CLR_MSK    0xfffffffd
/* The reset value of the ALT_UART_USR_TFNF register field. */
#define ALT_UART_USR_TFNF_RESET      0x1
/* Extracts the ALT_UART_USR_TFNF field value from a register. */
#define ALT_UART_USR_TFNF_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_UART_USR_TFNF register field value suitable for setting the register. */
#define ALT_UART_USR_TFNF_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TFE
 * 
 * Transmit FIFO Empty.
 * 
 * This bit is only valid when FIFO_STAT == YES. This is used to indicate that the
 * 
 * transmit FIFO is completely empty.
 * 
 * 0 = Transmit FIFO is not empty
 * 
 * 1 = Transmit FIFO is empty
 * 
 * This bit is cleared when the TX FIFO is no longer empty.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description               
 * :-----------------------------|:------|:---------------------------
 *  ALT_UART_USR_TFE_E_NOT_EMPTY | 0x0   | Transmit FIFO is not empty
 *  ALT_UART_USR_TFE_E_EMPTY     | 0x1   | Transmit FIFO is empty    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_USR_TFE
 * 
 * Transmit FIFO is not empty
 */
#define ALT_UART_USR_TFE_E_NOT_EMPTY    0x0
/*
 * Enumerated value for register field ALT_UART_USR_TFE
 * 
 * Transmit FIFO is empty
 */
#define ALT_UART_USR_TFE_E_EMPTY        0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_USR_TFE register field. */
#define ALT_UART_USR_TFE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_USR_TFE register field. */
#define ALT_UART_USR_TFE_MSB        2
/* The width in bits of the ALT_UART_USR_TFE register field. */
#define ALT_UART_USR_TFE_WIDTH      1
/* The mask used to set the ALT_UART_USR_TFE register field value. */
#define ALT_UART_USR_TFE_SET_MSK    0x00000004
/* The mask used to clear the ALT_UART_USR_TFE register field value. */
#define ALT_UART_USR_TFE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_UART_USR_TFE register field. */
#define ALT_UART_USR_TFE_RESET      0x1
/* Extracts the ALT_UART_USR_TFE field value from a register. */
#define ALT_UART_USR_TFE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_UART_USR_TFE register field value suitable for setting the register. */
#define ALT_UART_USR_TFE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RFNE
 * 
 * Receive FIFO Not Empty.
 * 
 * This bit is only valid when FIFO_STAT == YES. This is used to indicate that the
 * 
 * receive FIFO contains one or more entries.
 * 
 * 0 = Receive FIFO is empty
 * 
 * 1 = Receive FIFO is not empty
 * 
 * This bit is cleared when the RX FIFO is empty.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description              
 * :------------------------------|:------|:--------------------------
 *  ALT_UART_USR_RFNE_E_EMPTY     | 0x0   | Receive FIFO is empty    
 *  ALT_UART_USR_RFNE_E_NOT_EMPTY | 0x1   | Receive FIFO is not empty
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_USR_RFNE
 * 
 * Receive FIFO is empty
 */
#define ALT_UART_USR_RFNE_E_EMPTY       0x0
/*
 * Enumerated value for register field ALT_UART_USR_RFNE
 * 
 * Receive FIFO is not empty
 */
#define ALT_UART_USR_RFNE_E_NOT_EMPTY   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_USR_RFNE register field. */
#define ALT_UART_USR_RFNE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_UART_USR_RFNE register field. */
#define ALT_UART_USR_RFNE_MSB        3
/* The width in bits of the ALT_UART_USR_RFNE register field. */
#define ALT_UART_USR_RFNE_WIDTH      1
/* The mask used to set the ALT_UART_USR_RFNE register field value. */
#define ALT_UART_USR_RFNE_SET_MSK    0x00000008
/* The mask used to clear the ALT_UART_USR_RFNE register field value. */
#define ALT_UART_USR_RFNE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_UART_USR_RFNE register field. */
#define ALT_UART_USR_RFNE_RESET      0x0
/* Extracts the ALT_UART_USR_RFNE field value from a register. */
#define ALT_UART_USR_RFNE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_UART_USR_RFNE register field value suitable for setting the register. */
#define ALT_UART_USR_RFNE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RFF
 * 
 * Receive FIFO Full.
 * 
 * This bit is only valid when FIFO_STAT == YES. This is used to indicate that the
 * 
 * receive FIFO is completely full. That is:
 * 
 * 0 = Receive FIFO not full
 * 
 * 1 = Receive FIFO Full
 * 
 * This bit is cleared when the RX FIFO is no longer full.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description          
 * :----------------------------|:------|:----------------------
 *  ALT_UART_USR_RFF_E_NOT_FULL | 0x0   | Receive FIFO not full
 *  ALT_UART_USR_RFF_E_FULL     | 0x1   | Receive FIFO full    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_USR_RFF
 * 
 * Receive FIFO not full
 */
#define ALT_UART_USR_RFF_E_NOT_FULL 0x0
/*
 * Enumerated value for register field ALT_UART_USR_RFF
 * 
 * Receive FIFO full
 */
#define ALT_UART_USR_RFF_E_FULL     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_USR_RFF register field. */
#define ALT_UART_USR_RFF_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_USR_RFF register field. */
#define ALT_UART_USR_RFF_MSB        4
/* The width in bits of the ALT_UART_USR_RFF register field. */
#define ALT_UART_USR_RFF_WIDTH      1
/* The mask used to set the ALT_UART_USR_RFF register field value. */
#define ALT_UART_USR_RFF_SET_MSK    0x00000010
/* The mask used to clear the ALT_UART_USR_RFF register field value. */
#define ALT_UART_USR_RFF_CLR_MSK    0xffffffef
/* The reset value of the ALT_UART_USR_RFF register field. */
#define ALT_UART_USR_RFF_RESET      0x0
/* Extracts the ALT_UART_USR_RFF field value from a register. */
#define ALT_UART_USR_RFF_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_UART_USR_RFF register field value suitable for setting the register. */
#define ALT_UART_USR_RFF_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : RSVD_USR_31to5
 * 
 * Reserved bits [31:5] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_USR_RSVD_USR_31TO5 register field. */
#define ALT_UART_USR_RSVD_USR_31TO5_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_UART_USR_RSVD_USR_31TO5 register field. */
#define ALT_UART_USR_RSVD_USR_31TO5_MSB        31
/* The width in bits of the ALT_UART_USR_RSVD_USR_31TO5 register field. */
#define ALT_UART_USR_RSVD_USR_31TO5_WIDTH      27
/* The mask used to set the ALT_UART_USR_RSVD_USR_31TO5 register field value. */
#define ALT_UART_USR_RSVD_USR_31TO5_SET_MSK    0xffffffe0
/* The mask used to clear the ALT_UART_USR_RSVD_USR_31TO5 register field value. */
#define ALT_UART_USR_RSVD_USR_31TO5_CLR_MSK    0x0000001f
/* The reset value of the ALT_UART_USR_RSVD_USR_31TO5 register field. */
#define ALT_UART_USR_RSVD_USR_31TO5_RESET      0x0
/* Extracts the ALT_UART_USR_RSVD_USR_31TO5 field value from a register. */
#define ALT_UART_USR_RSVD_USR_31TO5_GET(value) (((value) & 0xffffffe0) >> 5)
/* Produces a ALT_UART_USR_RSVD_USR_31TO5 register field value suitable for setting the register. */
#define ALT_UART_USR_RSVD_USR_31TO5_SET(value) (((value) << 5) & 0xffffffe0)

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
 * The struct declaration for register ALT_UART_USR.
 */
struct ALT_UART_USR_s
{
    const volatile uint32_t  RSVD_BUSY      :  1;  /* ALT_UART_USR_RSVD_BUSY */
    const volatile uint32_t  TFNF           :  1;  /* ALT_UART_USR_TFNF */
    const volatile uint32_t  TFE            :  1;  /* ALT_UART_USR_TFE */
    const volatile uint32_t  RFNE           :  1;  /* ALT_UART_USR_RFNE */
    const volatile uint32_t  RFF            :  1;  /* ALT_UART_USR_RFF */
    const volatile uint32_t  RSVD_USR_31to5 : 27;  /* ALT_UART_USR_RSVD_USR_31TO5 */
};

/* The typedef declaration for register ALT_UART_USR. */
typedef struct ALT_UART_USR_s  ALT_UART_USR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_USR register. */
#define ALT_UART_USR_RESET       0x00000006
/* The byte offset of the ALT_UART_USR register from the beginning of the component. */
#define ALT_UART_USR_OFST        0x7c
/* The address of the ALT_UART_USR register. */
#define ALT_UART_USR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_USR_OFST))

/*
 * Register : Transmit FIFO Level - TFL
 * 
 * Transmit FIFO Level.
 * 
 * This register is valid only when the DW_apb_uart is configured to have
 * additional FIFO status registers
 * 
 * implemented (FIFO_STAT = YES). If status registers are not implemented, this
 * register does not exist and
 * 
 * reading from this register address returns 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_TFL_TFL                    
 *  [31:8] | R      | 0x0   | ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH
 * 
 */
/*
 * Field : tfl
 * 
 * Transmit FIFO Level.
 * 
 * This is indicates the number of data entries in the transmit FIFO.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_TFL_TFL register field. */
#define ALT_UART_TFL_TFL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_TFL_TFL register field. */
#define ALT_UART_TFL_TFL_MSB        7
/* The width in bits of the ALT_UART_TFL_TFL register field. */
#define ALT_UART_TFL_TFL_WIDTH      8
/* The mask used to set the ALT_UART_TFL_TFL register field value. */
#define ALT_UART_TFL_TFL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_TFL_TFL register field value. */
#define ALT_UART_TFL_TFL_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_TFL_TFL register field. */
#define ALT_UART_TFL_TFL_RESET      0x0
/* Extracts the ALT_UART_TFL_TFL field value from a register. */
#define ALT_UART_TFL_TFL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_TFL_TFL register field value suitable for setting the register. */
#define ALT_UART_TFL_TFL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_TFL_31toADDR_WIDTH
 * 
 * Reserved bits: 31 downto addr bus width + 1 - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH register field. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH register field. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_MSB        31
/* The width in bits of the ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH register field. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_WIDTH      24
/* The mask used to set the ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH register field value. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH register field value. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH register field. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_RESET      0x0
/* Extracts the ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH field value from a register. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH register field value suitable for setting the register. */
#define ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_TFL.
 */
struct ALT_UART_TFL_s
{
    const volatile uint32_t  tfl                     :  8;  /* ALT_UART_TFL_TFL */
    const volatile uint32_t  RSVD_TFL_31toADDR_WIDTH : 24;  /* ALT_UART_TFL_RSVD_TFL_31TOADDR_WIDTH */
};

/* The typedef declaration for register ALT_UART_TFL. */
typedef struct ALT_UART_TFL_s  ALT_UART_TFL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_TFL register. */
#define ALT_UART_TFL_RESET       0x00000000
/* The byte offset of the ALT_UART_TFL register from the beginning of the component. */
#define ALT_UART_TFL_OFST        0x80
/* The address of the ALT_UART_TFL register. */
#define ALT_UART_TFL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_TFL_OFST))

/*
 * Register : Receive FIFO Level - RFL
 * 
 * Receive FIFO Level.
 * 
 * This register is valid only when the DW_apb_uart is configured to have
 * additional FIFO status registers
 * 
 * implemented (FIFO_STAT = YES). If status registers are not implemented, this
 * register does not exist and
 * 
 * reading from this register address returns 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_UART_RFL_RFL                    
 *  [31:8] | R      | 0x0   | ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH
 * 
 */
/*
 * Field : rfl
 * 
 * Receive FIFO Level.
 * 
 * This is indicates the number of data entries in the receive FIFO.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_RFL_RFL register field. */
#define ALT_UART_RFL_RFL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_RFL_RFL register field. */
#define ALT_UART_RFL_RFL_MSB        7
/* The width in bits of the ALT_UART_RFL_RFL register field. */
#define ALT_UART_RFL_RFL_WIDTH      8
/* The mask used to set the ALT_UART_RFL_RFL register field value. */
#define ALT_UART_RFL_RFL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_UART_RFL_RFL register field value. */
#define ALT_UART_RFL_RFL_CLR_MSK    0xffffff00
/* The reset value of the ALT_UART_RFL_RFL register field. */
#define ALT_UART_RFL_RFL_RESET      0x0
/* Extracts the ALT_UART_RFL_RFL field value from a register. */
#define ALT_UART_RFL_RFL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_UART_RFL_RFL register field value suitable for setting the register. */
#define ALT_UART_RFL_RFL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_RFL_31toADDR_WIDTH
 * 
 * Reserved bits: 31 downnto addr bus width + 1 - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH register field. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH register field. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_MSB        31
/* The width in bits of the ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH register field. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_WIDTH      24
/* The mask used to set the ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH register field value. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_SET_MSK    0xffffff00
/* The mask used to clear the ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH register field value. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_CLR_MSK    0x000000ff
/* The reset value of the ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH register field. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_RESET      0x0
/* Extracts the ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH field value from a register. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH register field value suitable for setting the register. */
#define ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_UART_RFL.
 */
struct ALT_UART_RFL_s
{
    const volatile uint32_t  rfl                     :  8;  /* ALT_UART_RFL_RFL */
    const volatile uint32_t  RSVD_RFL_31toADDR_WIDTH : 24;  /* ALT_UART_RFL_RSVD_RFL_31TOADDR_WIDTH */
};

/* The typedef declaration for register ALT_UART_RFL. */
typedef struct ALT_UART_RFL_s  ALT_UART_RFL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_RFL register. */
#define ALT_UART_RFL_RESET       0x00000000
/* The byte offset of the ALT_UART_RFL register from the beginning of the component. */
#define ALT_UART_RFL_OFST        0x84
/* The address of the ALT_UART_RFL register. */
#define ALT_UART_RFL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_RFL_OFST))

/*
 * Register : Software Reset Register - SRR
 * 
 * Software Reset Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | W      | 0x0   | ALT_UART_SRR_UR            
 *  [1]    | W      | 0x0   | ALT_UART_SRR_RFR           
 *  [2]    | W      | 0x0   | ALT_UART_SRR_XFR           
 *  [31:3] | R      | 0x0   | ALT_UART_SRR_RSVD_SRR_31TO3
 * 
 */
/*
 * Field : UR
 * 
 * UART Reset.
 * 
 * This asynchronously resets the DW_apb_uart and synchronously removes the reset
 * 
 * assertion. For a two clock implementation both pclk and sclk domains will be
 * reset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description  
 * :---------------------------|:------|:--------------
 *  ALT_UART_SRR_UR_E_NO_RESET | 0x0   | No Uart Reset
 *  ALT_UART_SRR_UR_E_RESET    | 0x1   | Uart reset   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_SRR_UR
 * 
 * No Uart Reset
 */
#define ALT_UART_SRR_UR_E_NO_RESET  0x0
/*
 * Enumerated value for register field ALT_UART_SRR_UR
 * 
 * Uart reset
 */
#define ALT_UART_SRR_UR_E_RESET     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_SRR_UR register field. */
#define ALT_UART_SRR_UR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRR_UR register field. */
#define ALT_UART_SRR_UR_MSB        0
/* The width in bits of the ALT_UART_SRR_UR register field. */
#define ALT_UART_SRR_UR_WIDTH      1
/* The mask used to set the ALT_UART_SRR_UR register field value. */
#define ALT_UART_SRR_UR_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_SRR_UR register field value. */
#define ALT_UART_SRR_UR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_SRR_UR register field. */
#define ALT_UART_SRR_UR_RESET      0x0
/* Extracts the ALT_UART_SRR_UR field value from a register. */
#define ALT_UART_SRR_UR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_SRR_UR register field value suitable for setting the register. */
#define ALT_UART_SRR_UR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RFR
 * 
 * RCVR FIFO Reset.
 * 
 * Writes will have no effect when FIFO_MODE == NONE. This is a shadow register for
 * 
 * the RCVR FIFO Reset bit (FCR[1]). This can be used to remove the burden on
 * software
 * 
 * having to store previously written FCR values (which are pretty static) just to
 * 
 * reset the reeive FIFO.
 * 
 * This resets the control portion of the receive FIFO and treats the FIFO as
 * empty.
 * 
 * This will also de-assert the DMA RX request and single signals when additional
 * DMA
 * 
 * handshaking signals are selected (DMA_EXTRA == YES). Note that this bit is
 * 
 * 'self-clearing' and it is not necessary to clear this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRR_RFR register field. */
#define ALT_UART_SRR_RFR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_SRR_RFR register field. */
#define ALT_UART_SRR_RFR_MSB        1
/* The width in bits of the ALT_UART_SRR_RFR register field. */
#define ALT_UART_SRR_RFR_WIDTH      1
/* The mask used to set the ALT_UART_SRR_RFR register field value. */
#define ALT_UART_SRR_RFR_SET_MSK    0x00000002
/* The mask used to clear the ALT_UART_SRR_RFR register field value. */
#define ALT_UART_SRR_RFR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_UART_SRR_RFR register field. */
#define ALT_UART_SRR_RFR_RESET      0x0
/* Extracts the ALT_UART_SRR_RFR field value from a register. */
#define ALT_UART_SRR_RFR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_UART_SRR_RFR register field value suitable for setting the register. */
#define ALT_UART_SRR_RFR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : XFR
 * 
 * XMIT FIFO Reset.
 * 
 * Writes will have no effect when FIFO_MODE == NONE. This is a shadow register for
 * 
 * the XMIT FIFO Reset bit (FCR[2]). This can be used to remove the burden on
 * software
 * 
 * having to store previously written FCR values (which are pretty static) just to
 * 
 * reset the transmit FIFO.
 * 
 * This resets the control portion of the transmit FIFO and treats the FIFO as
 * empty.
 * 
 * This will also de-assert the DMA TX request and single signals when additional
 * DMA
 * 
 * handshaking signals are selected
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRR_XFR register field. */
#define ALT_UART_SRR_XFR_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_SRR_XFR register field. */
#define ALT_UART_SRR_XFR_MSB        2
/* The width in bits of the ALT_UART_SRR_XFR register field. */
#define ALT_UART_SRR_XFR_WIDTH      1
/* The mask used to set the ALT_UART_SRR_XFR register field value. */
#define ALT_UART_SRR_XFR_SET_MSK    0x00000004
/* The mask used to clear the ALT_UART_SRR_XFR register field value. */
#define ALT_UART_SRR_XFR_CLR_MSK    0xfffffffb
/* The reset value of the ALT_UART_SRR_XFR register field. */
#define ALT_UART_SRR_XFR_RESET      0x0
/* Extracts the ALT_UART_SRR_XFR field value from a register. */
#define ALT_UART_SRR_XFR_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_UART_SRR_XFR register field value suitable for setting the register. */
#define ALT_UART_SRR_XFR_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RSVD_SRR_31to3
 * 
 * Reserved bits [31:3] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRR_RSVD_SRR_31TO3 register field. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_UART_SRR_RSVD_SRR_31TO3 register field. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_MSB        31
/* The width in bits of the ALT_UART_SRR_RSVD_SRR_31TO3 register field. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_WIDTH      29
/* The mask used to set the ALT_UART_SRR_RSVD_SRR_31TO3 register field value. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_SET_MSK    0xfffffff8
/* The mask used to clear the ALT_UART_SRR_RSVD_SRR_31TO3 register field value. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_CLR_MSK    0x00000007
/* The reset value of the ALT_UART_SRR_RSVD_SRR_31TO3 register field. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_RESET      0x0
/* Extracts the ALT_UART_SRR_RSVD_SRR_31TO3 field value from a register. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_GET(value) (((value) & 0xfffffff8) >> 3)
/* Produces a ALT_UART_SRR_RSVD_SRR_31TO3 register field value suitable for setting the register. */
#define ALT_UART_SRR_RSVD_SRR_31TO3_SET(value) (((value) << 3) & 0xfffffff8)

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
 * The struct declaration for register ALT_UART_SRR.
 */
struct ALT_UART_SRR_s
{
    volatile uint32_t        UR             :  1;  /* ALT_UART_SRR_UR */
    volatile uint32_t        RFR            :  1;  /* ALT_UART_SRR_RFR */
    volatile uint32_t        XFR            :  1;  /* ALT_UART_SRR_XFR */
    const volatile uint32_t  RSVD_SRR_31to3 : 29;  /* ALT_UART_SRR_RSVD_SRR_31TO3 */
};

/* The typedef declaration for register ALT_UART_SRR. */
typedef struct ALT_UART_SRR_s  ALT_UART_SRR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRR register. */
#define ALT_UART_SRR_RESET       0x00000000
/* The byte offset of the ALT_UART_SRR register from the beginning of the component. */
#define ALT_UART_SRR_OFST        0x88
/* The address of the ALT_UART_SRR register. */
#define ALT_UART_SRR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRR_OFST))

/*
 * Register : Shadow Request to Send - SRTS
 * 
 * Shadow Request to Send.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_SRTS_SRTS           
 *  [31:1] | R      | 0x0   | ALT_UART_SRTS_RSVD_SRTS_31TO1
 * 
 */
/*
 * Field : srts
 * 
 * Shadow Request to Send.
 * 
 * This is a shadow register for the RTS bit (MCR[1]), this can be used to remove
 * the
 * 
 * burden of having to performing a read modify write on the MCR.
 * 
 * This is used to directly control the Request to Send (rts_n) output. The Request
 * 
 * To Send (rts_n) output is used to inform the modem or data set that the UART is
 * ready
 * 
 * to exchange data.
 * 
 * When Auto RTS Flow Control is not enabled (MCR[5] set to zero), the rts_n signal
 * is
 * 
 * set low by programming MCR[1] (RTS) to a high.
 * 
 * In Auto Flow Control, AFCE_MODE == Enabled and active (MCR[5] set to one) and
 * FIFO's
 * 
 * enable (FCR[0] set to one), the rts_n output is controlled in the same way, but
 * is
 * 
 * also gated with the receiver FIFO threshold trigger (rts_n is inactive high when
 * 
 * above the threshold) only when RTC Flow Trigger is disabled; otherwise it is
 * gated by
 * 
 * the receiver FIFO almost-full trigger, where "almost full" refers to two
 * available
 * 
 * slots in the FIFO (rts_n is inactive high when above the threshold).
 * 
 * Note that in Loopback mode (MCR[4] set to one), the rts_n output is held
 * inactive
 * 
 * high while the value of this location is internally looped back to an input.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                             
 * :--------------------------------|:------|:-----------------------------------------
 *  ALT_UART_SRTS_SRTS_E_DEASSERTED | 0x0   | Shadow Request to Send uart_rts_n logic1
 *  ALT_UART_SRTS_SRTS_E_ASSERTED   | 0x1   | Shadow Request to Send uart_rts_n logic0
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_SRTS_SRTS
 * 
 * Shadow Request to Send uart_rts_n logic1
 */
#define ALT_UART_SRTS_SRTS_E_DEASSERTED 0x0
/*
 * Enumerated value for register field ALT_UART_SRTS_SRTS
 * 
 * Shadow Request to Send uart_rts_n logic0
 */
#define ALT_UART_SRTS_SRTS_E_ASSERTED   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_SRTS_SRTS register field. */
#define ALT_UART_SRTS_SRTS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRTS_SRTS register field. */
#define ALT_UART_SRTS_SRTS_MSB        0
/* The width in bits of the ALT_UART_SRTS_SRTS register field. */
#define ALT_UART_SRTS_SRTS_WIDTH      1
/* The mask used to set the ALT_UART_SRTS_SRTS register field value. */
#define ALT_UART_SRTS_SRTS_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_SRTS_SRTS register field value. */
#define ALT_UART_SRTS_SRTS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_SRTS_SRTS register field. */
#define ALT_UART_SRTS_SRTS_RESET      0x0
/* Extracts the ALT_UART_SRTS_SRTS field value from a register. */
#define ALT_UART_SRTS_SRTS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_SRTS_SRTS register field value suitable for setting the register. */
#define ALT_UART_SRTS_SRTS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_SRTS_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRTS_RSVD_SRTS_31TO1 register field. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_SRTS_RSVD_SRTS_31TO1 register field. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_MSB        31
/* The width in bits of the ALT_UART_SRTS_RSVD_SRTS_31TO1 register field. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_WIDTH      31
/* The mask used to set the ALT_UART_SRTS_RSVD_SRTS_31TO1 register field value. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_UART_SRTS_RSVD_SRTS_31TO1 register field value. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_UART_SRTS_RSVD_SRTS_31TO1 register field. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_RESET      0x0
/* Extracts the ALT_UART_SRTS_RSVD_SRTS_31TO1 field value from a register. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_UART_SRTS_RSVD_SRTS_31TO1 register field value suitable for setting the register. */
#define ALT_UART_SRTS_RSVD_SRTS_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_UART_SRTS.
 */
struct ALT_UART_SRTS_s
{
    volatile uint32_t        srts            :  1;  /* ALT_UART_SRTS_SRTS */
    const volatile uint32_t  RSVD_SRTS_31to1 : 31;  /* ALT_UART_SRTS_RSVD_SRTS_31TO1 */
};

/* The typedef declaration for register ALT_UART_SRTS. */
typedef struct ALT_UART_SRTS_s  ALT_UART_SRTS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRTS register. */
#define ALT_UART_SRTS_RESET       0x00000000
/* The byte offset of the ALT_UART_SRTS register from the beginning of the component. */
#define ALT_UART_SRTS_OFST        0x8c
/* The address of the ALT_UART_SRTS register. */
#define ALT_UART_SRTS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRTS_OFST))

/*
 * Register : Shadow Break Control Register - SBCR
 * 
 * Shadow Break Control Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_SBCR_SBCB           
 *  [31:1] | R      | 0x0   | ALT_UART_SBCR_RSVD_SBCR_31TO1
 * 
 */
/*
 * Field : sbcb
 * 
 * Shadow Break Control Bit.
 * 
 * This is a shadow register for the Break bit (LCR[6]), this can be used to remove
 * 
 * the burden of having to performing a read modify write on the LCR.
 * 
 * This is used to cause a break condition to be transmitted to the receiving
 * device.
 * 
 * If set to one the serial output is forced to the spacing (logic 0) state. When
 * not
 * 
 * in Loopback Mode, as determined by MCR[4], the sout line is forced low until the
 * 
 * Break bit is cleared. If SIR_MODE == Enabled and active (MCR[6] set to one) the
 * 
 * sir_out_n line is continuously pulsed. When in Loopback Mode, the break
 * condition
 * 
 * is internally looped back to the receiver.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                        
 * :------------------------------|:------|:------------------------------------
 *  ALT_UART_SBCR_SBCB_E_NO_BREAK | 0x0   | No spacing on serial output        
 *  ALT_UART_SBCR_SBCB_E_BREAK    | 0x1   | Serial output forced to the spacing
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_SBCR_SBCB
 * 
 * No spacing on serial output
 */
#define ALT_UART_SBCR_SBCB_E_NO_BREAK   0x0
/*
 * Enumerated value for register field ALT_UART_SBCR_SBCB
 * 
 * Serial output forced to the spacing
 */
#define ALT_UART_SBCR_SBCB_E_BREAK      0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_SBCR_SBCB register field. */
#define ALT_UART_SBCR_SBCB_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SBCR_SBCB register field. */
#define ALT_UART_SBCR_SBCB_MSB        0
/* The width in bits of the ALT_UART_SBCR_SBCB register field. */
#define ALT_UART_SBCR_SBCB_WIDTH      1
/* The mask used to set the ALT_UART_SBCR_SBCB register field value. */
#define ALT_UART_SBCR_SBCB_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_SBCR_SBCB register field value. */
#define ALT_UART_SBCR_SBCB_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_SBCR_SBCB register field. */
#define ALT_UART_SBCR_SBCB_RESET      0x0
/* Extracts the ALT_UART_SBCR_SBCB field value from a register. */
#define ALT_UART_SBCR_SBCB_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_SBCR_SBCB register field value suitable for setting the register. */
#define ALT_UART_SBCR_SBCB_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_SBCR_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SBCR_RSVD_SBCR_31TO1 register field. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_SBCR_RSVD_SBCR_31TO1 register field. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_MSB        31
/* The width in bits of the ALT_UART_SBCR_RSVD_SBCR_31TO1 register field. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_WIDTH      31
/* The mask used to set the ALT_UART_SBCR_RSVD_SBCR_31TO1 register field value. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_UART_SBCR_RSVD_SBCR_31TO1 register field value. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_UART_SBCR_RSVD_SBCR_31TO1 register field. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_RESET      0x0
/* Extracts the ALT_UART_SBCR_RSVD_SBCR_31TO1 field value from a register. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_UART_SBCR_RSVD_SBCR_31TO1 register field value suitable for setting the register. */
#define ALT_UART_SBCR_RSVD_SBCR_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_UART_SBCR.
 */
struct ALT_UART_SBCR_s
{
    volatile uint32_t        sbcb            :  1;  /* ALT_UART_SBCR_SBCB */
    const volatile uint32_t  RSVD_SBCR_31to1 : 31;  /* ALT_UART_SBCR_RSVD_SBCR_31TO1 */
};

/* The typedef declaration for register ALT_UART_SBCR. */
typedef struct ALT_UART_SBCR_s  ALT_UART_SBCR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SBCR register. */
#define ALT_UART_SBCR_RESET       0x00000000
/* The byte offset of the ALT_UART_SBCR register from the beginning of the component. */
#define ALT_UART_SBCR_OFST        0x90
/* The address of the ALT_UART_SBCR register. */
#define ALT_UART_SBCR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SBCR_OFST))

/*
 * Register : Shadow DMA Mode - SDMAM
 * 
 * Shadow DMA Mode.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_SDMAM_SDMAM           
 *  [31:1] | R      | 0x0   | ALT_UART_SDMAM_RSVD_SDMAM_31TO1
 * 
 */
/*
 * Field : sdmam
 * 
 * Shadow DMA Mode.
 * 
 * This is a shadow register for the DMA mode bit (FCR[3]). This can be used to
 * remove
 * 
 * the burden of having to store the previously written value to the FCR in memory
 * and
 * 
 * having to mask this value so that only the DMA Mode bit gets updated.
 * 
 * This determines the DMA signalling mode used for the dma_tx_req_n and
 * dma_rx_req_n
 * 
 * output signals when additional DMA handshaking signals are not selected
 * 
 * (DMA_EXTRA == NO). See section 5.9 on page 54 for details on DMA support.
 * 
 * 0 = mode 0
 * 
 * 1 = mode 1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description
 * :------------------------------|:------|:------------
 *  ALT_UART_SDMAM_SDMAM_E_MODE_0 | 0x0   | Mode 0     
 *  ALT_UART_SDMAM_SDMAM_E_MODE_1 | 0x1   | Mode 1     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_SDMAM_SDMAM
 * 
 * Mode 0
 */
#define ALT_UART_SDMAM_SDMAM_E_MODE_0   0x0
/*
 * Enumerated value for register field ALT_UART_SDMAM_SDMAM
 * 
 * Mode 1
 */
#define ALT_UART_SDMAM_SDMAM_E_MODE_1   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_SDMAM_SDMAM register field. */
#define ALT_UART_SDMAM_SDMAM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SDMAM_SDMAM register field. */
#define ALT_UART_SDMAM_SDMAM_MSB        0
/* The width in bits of the ALT_UART_SDMAM_SDMAM register field. */
#define ALT_UART_SDMAM_SDMAM_WIDTH      1
/* The mask used to set the ALT_UART_SDMAM_SDMAM register field value. */
#define ALT_UART_SDMAM_SDMAM_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_SDMAM_SDMAM register field value. */
#define ALT_UART_SDMAM_SDMAM_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_SDMAM_SDMAM register field. */
#define ALT_UART_SDMAM_SDMAM_RESET      0x0
/* Extracts the ALT_UART_SDMAM_SDMAM field value from a register. */
#define ALT_UART_SDMAM_SDMAM_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_SDMAM_SDMAM register field value suitable for setting the register. */
#define ALT_UART_SDMAM_SDMAM_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_SDMAM_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SDMAM_RSVD_SDMAM_31TO1 register field. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_SDMAM_RSVD_SDMAM_31TO1 register field. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_MSB        31
/* The width in bits of the ALT_UART_SDMAM_RSVD_SDMAM_31TO1 register field. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_WIDTH      31
/* The mask used to set the ALT_UART_SDMAM_RSVD_SDMAM_31TO1 register field value. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_UART_SDMAM_RSVD_SDMAM_31TO1 register field value. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_UART_SDMAM_RSVD_SDMAM_31TO1 register field. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_RESET      0x0
/* Extracts the ALT_UART_SDMAM_RSVD_SDMAM_31TO1 field value from a register. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_UART_SDMAM_RSVD_SDMAM_31TO1 register field value suitable for setting the register. */
#define ALT_UART_SDMAM_RSVD_SDMAM_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_UART_SDMAM.
 */
struct ALT_UART_SDMAM_s
{
    volatile uint32_t        sdmam            :  1;  /* ALT_UART_SDMAM_SDMAM */
    const volatile uint32_t  RSVD_SDMAM_31to1 : 31;  /* ALT_UART_SDMAM_RSVD_SDMAM_31TO1 */
};

/* The typedef declaration for register ALT_UART_SDMAM. */
typedef struct ALT_UART_SDMAM_s  ALT_UART_SDMAM_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SDMAM register. */
#define ALT_UART_SDMAM_RESET       0x00000000
/* The byte offset of the ALT_UART_SDMAM register from the beginning of the component. */
#define ALT_UART_SDMAM_OFST        0x94
/* The address of the ALT_UART_SDMAM register. */
#define ALT_UART_SDMAM_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SDMAM_OFST))

/*
 * Register : Shadow FIFO Enable - SFE
 * 
 * Shadow FIFO Enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_SFE_SFE           
 *  [31:1] | R      | 0x0   | ALT_UART_SFE_RSVD_SFE_31TO1
 * 
 */
/*
 * Field : sfe
 * 
 * Shadow FIFO Enable.
 * 
 * This is a shadow register for the FIFO enable bit (FCR[0]). This can be used to
 * 
 * remove the burden of having to store the previously written value to the FCR in
 * 
 * memory and having to mask this value so that only the FIFO enable bit gets
 * updated.
 * 
 * This enables/disables the transmit (XMIT) and receive (RCVR) FIFO's. If this
 * 
 * bit is set to zero (disabled) after being enabled then both the XMIT and RCVR
 * 
 * controller portion of FIFO's will be reset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description       
 * :----------------------------|:------|:-------------------
 *  ALT_UART_SFE_SFE_E_DISABLED | 0x0   | FIFOs are disabled
 *  ALT_UART_SFE_SFE_E_ENABLED  | 0x1   | FIFOs are enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_SFE_SFE
 * 
 * FIFOs are disabled
 */
#define ALT_UART_SFE_SFE_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_SFE_SFE
 * 
 * FIFOs are enabled
 */
#define ALT_UART_SFE_SFE_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_SFE_SFE register field. */
#define ALT_UART_SFE_SFE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SFE_SFE register field. */
#define ALT_UART_SFE_SFE_MSB        0
/* The width in bits of the ALT_UART_SFE_SFE register field. */
#define ALT_UART_SFE_SFE_WIDTH      1
/* The mask used to set the ALT_UART_SFE_SFE register field value. */
#define ALT_UART_SFE_SFE_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_SFE_SFE register field value. */
#define ALT_UART_SFE_SFE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_SFE_SFE register field. */
#define ALT_UART_SFE_SFE_RESET      0x0
/* Extracts the ALT_UART_SFE_SFE field value from a register. */
#define ALT_UART_SFE_SFE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_SFE_SFE register field value suitable for setting the register. */
#define ALT_UART_SFE_SFE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_SFE_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SFE_RSVD_SFE_31TO1 register field. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_SFE_RSVD_SFE_31TO1 register field. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_MSB        31
/* The width in bits of the ALT_UART_SFE_RSVD_SFE_31TO1 register field. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_WIDTH      31
/* The mask used to set the ALT_UART_SFE_RSVD_SFE_31TO1 register field value. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_UART_SFE_RSVD_SFE_31TO1 register field value. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_UART_SFE_RSVD_SFE_31TO1 register field. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_RESET      0x0
/* Extracts the ALT_UART_SFE_RSVD_SFE_31TO1 field value from a register. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_UART_SFE_RSVD_SFE_31TO1 register field value suitable for setting the register. */
#define ALT_UART_SFE_RSVD_SFE_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_UART_SFE.
 */
struct ALT_UART_SFE_s
{
    volatile uint32_t        sfe            :  1;  /* ALT_UART_SFE_SFE */
    const volatile uint32_t  RSVD_SFE_31to1 : 31;  /* ALT_UART_SFE_RSVD_SFE_31TO1 */
};

/* The typedef declaration for register ALT_UART_SFE. */
typedef struct ALT_UART_SFE_s  ALT_UART_SFE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SFE register. */
#define ALT_UART_SFE_RESET       0x00000000
/* The byte offset of the ALT_UART_SFE register from the beginning of the component. */
#define ALT_UART_SFE_OFST        0x98
/* The address of the ALT_UART_SFE register. */
#define ALT_UART_SFE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SFE_OFST))

/*
 * Register : Shadow RCVR Trigger - SRT
 * 
 * Shadow RCVR Trigger
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [1:0]  | RW     | 0x0   | ALT_UART_SRT_SRT           
 *  [31:2] | R      | 0x0   | ALT_UART_SRT_RSVD_SRT_31TO2
 * 
 */
/*
 * Field : srt
 * 
 * Shadow RCVR Trigger.
 * 
 * This is a shadow register for the RCVR trigger bits (FCR[7:6]). This can be used
 * to
 * 
 * remove the burden of having to store the previously written value to the FCR in
 * 
 * memory and having to mask this value so that only the RCVR trigger bit gets
 * updated.
 * 
 * This is used to select the trigger level in the receiver FIFO at which the
 * Received
 * 
 * Data Available Interrupt will be generated. It also determines when the
 * dma_rx_req_n
 * 
 * signal will be asserted when DMA Mode (FCR[3]) is set to one. The following
 * trigger
 * 
 * levels are supported:
 * 
 * 00 = 1 character in the FIFO
 * 
 * 01 = FIFO 1/4 full
 * 
 * 10 = FIFO 1/2 full
 * 
 * 11 = FIFO 2 less than full
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description          
 * :-------------------------------------|:------|:----------------------
 *  ALT_UART_SRT_SRT_E_FIFO_CHAR_1       | 0x0   | 1 character in FIFO  
 *  ALT_UART_SRT_SRT_E_FIFO_QUARTER_FULL | 0x1   | FIFO 1/4 full        
 *  ALT_UART_SRT_SRT_E_FIFO_HALF_FULL    | 0x2   | FIFO 1/2 full        
 *  ALT_UART_SRT_SRT_E_FIFO_FULL_2       | 0x3   | FIFO 2 less than full
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_SRT_SRT
 * 
 * 1 character in FIFO
 */
#define ALT_UART_SRT_SRT_E_FIFO_CHAR_1          0x0
/*
 * Enumerated value for register field ALT_UART_SRT_SRT
 * 
 * FIFO 1/4 full
 */
#define ALT_UART_SRT_SRT_E_FIFO_QUARTER_FULL    0x1
/*
 * Enumerated value for register field ALT_UART_SRT_SRT
 * 
 * FIFO 1/2 full
 */
#define ALT_UART_SRT_SRT_E_FIFO_HALF_FULL       0x2
/*
 * Enumerated value for register field ALT_UART_SRT_SRT
 * 
 * FIFO 2 less than full
 */
#define ALT_UART_SRT_SRT_E_FIFO_FULL_2          0x3

/* The Least Significant Bit (LSB) position of the ALT_UART_SRT_SRT register field. */
#define ALT_UART_SRT_SRT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_SRT_SRT register field. */
#define ALT_UART_SRT_SRT_MSB        1
/* The width in bits of the ALT_UART_SRT_SRT register field. */
#define ALT_UART_SRT_SRT_WIDTH      2
/* The mask used to set the ALT_UART_SRT_SRT register field value. */
#define ALT_UART_SRT_SRT_SET_MSK    0x00000003
/* The mask used to clear the ALT_UART_SRT_SRT register field value. */
#define ALT_UART_SRT_SRT_CLR_MSK    0xfffffffc
/* The reset value of the ALT_UART_SRT_SRT register field. */
#define ALT_UART_SRT_SRT_RESET      0x0
/* Extracts the ALT_UART_SRT_SRT field value from a register. */
#define ALT_UART_SRT_SRT_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_UART_SRT_SRT register field value suitable for setting the register. */
#define ALT_UART_SRT_SRT_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : RSVD_SRT_31to2
 * 
 * Reserved bits [31:2] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_SRT_RSVD_SRT_31TO2 register field. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_SRT_RSVD_SRT_31TO2 register field. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_MSB        31
/* The width in bits of the ALT_UART_SRT_RSVD_SRT_31TO2 register field. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_WIDTH      30
/* The mask used to set the ALT_UART_SRT_RSVD_SRT_31TO2 register field value. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_UART_SRT_RSVD_SRT_31TO2 register field value. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_CLR_MSK    0x00000003
/* The reset value of the ALT_UART_SRT_RSVD_SRT_31TO2 register field. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_RESET      0x0
/* Extracts the ALT_UART_SRT_RSVD_SRT_31TO2 field value from a register. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_UART_SRT_RSVD_SRT_31TO2 register field value suitable for setting the register. */
#define ALT_UART_SRT_RSVD_SRT_31TO2_SET(value) (((value) << 2) & 0xfffffffc)

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
 * The struct declaration for register ALT_UART_SRT.
 */
struct ALT_UART_SRT_s
{
    volatile uint32_t        srt            :  2;  /* ALT_UART_SRT_SRT */
    const volatile uint32_t  RSVD_SRT_31to2 : 30;  /* ALT_UART_SRT_RSVD_SRT_31TO2 */
};

/* The typedef declaration for register ALT_UART_SRT. */
typedef struct ALT_UART_SRT_s  ALT_UART_SRT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_SRT register. */
#define ALT_UART_SRT_RESET       0x00000000
/* The byte offset of the ALT_UART_SRT register from the beginning of the component. */
#define ALT_UART_SRT_OFST        0x9c
/* The address of the ALT_UART_SRT register. */
#define ALT_UART_SRT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_SRT_OFST))

/*
 * Register : Shadow TX Empty Trigger - STET
 * 
 * Shadow TX Empty Trigger
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [1:0]  | RW     | 0x0   | ALT_UART_STET_STET           
 *  [31:2] | R      | 0x0   | ALT_UART_STET_RSVD_STET_31TO2
 * 
 */
/*
 * Field : stet
 * 
 * Shadow TX Empty Trigger.
 * 
 * This is a shadow register for the TX empty trigger bits (FCR[5:4]). This can be
 * used
 * 
 * to remove the burden of having to store the previously written value to the FCR
 * in
 * 
 * memory and having to mask this value so that only the TX empty trigger bit gets
 * updated.
 * 
 * Writes will have no effect when THRE_MODE_USER == Disabled. This is used to
 * select the
 * 
 * empty threshold level at which the THRE Interrupts will be generated when the
 * mode is
 * 
 * active. These threshold levels are also described in. The following trigger
 * levels are
 * 
 * supported:
 * 
 * 00 = FIFO empty
 * 
 * 01 = 2 characters in the FIFO
 * 
 * 10 = FIFO 1/4 full
 * 
 * 11 = FIFO 1/2 full
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description         
 * :---------------------------------------|:------|:---------------------
 *  ALT_UART_STET_STET_E_FIFO_EMPTY        | 0x0   | FIFO empty          
 *  ALT_UART_STET_STET_E_FIFO_CHAR_2       | 0x1   | 2 characters in FIFO
 *  ALT_UART_STET_STET_E_FIFO_QUARTER_FULL | 0x2   | FIFO 1/4 full       
 *  ALT_UART_STET_STET_E_FIFO_HALF_FULL    | 0x3   | FIFO 1/2 full       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_STET_STET
 * 
 * FIFO empty
 */
#define ALT_UART_STET_STET_E_FIFO_EMPTY         0x0
/*
 * Enumerated value for register field ALT_UART_STET_STET
 * 
 * 2 characters in FIFO
 */
#define ALT_UART_STET_STET_E_FIFO_CHAR_2        0x1
/*
 * Enumerated value for register field ALT_UART_STET_STET
 * 
 * FIFO 1/4 full
 */
#define ALT_UART_STET_STET_E_FIFO_QUARTER_FULL  0x2
/*
 * Enumerated value for register field ALT_UART_STET_STET
 * 
 * FIFO 1/2 full
 */
#define ALT_UART_STET_STET_E_FIFO_HALF_FULL     0x3

/* The Least Significant Bit (LSB) position of the ALT_UART_STET_STET register field. */
#define ALT_UART_STET_STET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_STET_STET register field. */
#define ALT_UART_STET_STET_MSB        1
/* The width in bits of the ALT_UART_STET_STET register field. */
#define ALT_UART_STET_STET_WIDTH      2
/* The mask used to set the ALT_UART_STET_STET register field value. */
#define ALT_UART_STET_STET_SET_MSK    0x00000003
/* The mask used to clear the ALT_UART_STET_STET register field value. */
#define ALT_UART_STET_STET_CLR_MSK    0xfffffffc
/* The reset value of the ALT_UART_STET_STET register field. */
#define ALT_UART_STET_STET_RESET      0x0
/* Extracts the ALT_UART_STET_STET field value from a register. */
#define ALT_UART_STET_STET_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_UART_STET_STET register field value suitable for setting the register. */
#define ALT_UART_STET_STET_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : RSVD_STET_31to2
 * 
 * Reserved bits [31:2] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_STET_RSVD_STET_31TO2 register field. */
#define ALT_UART_STET_RSVD_STET_31TO2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_STET_RSVD_STET_31TO2 register field. */
#define ALT_UART_STET_RSVD_STET_31TO2_MSB        31
/* The width in bits of the ALT_UART_STET_RSVD_STET_31TO2 register field. */
#define ALT_UART_STET_RSVD_STET_31TO2_WIDTH      30
/* The mask used to set the ALT_UART_STET_RSVD_STET_31TO2 register field value. */
#define ALT_UART_STET_RSVD_STET_31TO2_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_UART_STET_RSVD_STET_31TO2 register field value. */
#define ALT_UART_STET_RSVD_STET_31TO2_CLR_MSK    0x00000003
/* The reset value of the ALT_UART_STET_RSVD_STET_31TO2 register field. */
#define ALT_UART_STET_RSVD_STET_31TO2_RESET      0x0
/* Extracts the ALT_UART_STET_RSVD_STET_31TO2 field value from a register. */
#define ALT_UART_STET_RSVD_STET_31TO2_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_UART_STET_RSVD_STET_31TO2 register field value suitable for setting the register. */
#define ALT_UART_STET_RSVD_STET_31TO2_SET(value) (((value) << 2) & 0xfffffffc)

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
 * The struct declaration for register ALT_UART_STET.
 */
struct ALT_UART_STET_s
{
    volatile uint32_t        stet            :  2;  /* ALT_UART_STET_STET */
    const volatile uint32_t  RSVD_STET_31to2 : 30;  /* ALT_UART_STET_RSVD_STET_31TO2 */
};

/* The typedef declaration for register ALT_UART_STET. */
typedef struct ALT_UART_STET_s  ALT_UART_STET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_STET register. */
#define ALT_UART_STET_RESET       0x00000000
/* The byte offset of the ALT_UART_STET register from the beginning of the component. */
#define ALT_UART_STET_OFST        0xa0
/* The address of the ALT_UART_STET register. */
#define ALT_UART_STET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_STET_OFST))

/*
 * Register : Halt TX - HTX
 * 
 * Halt TX
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_UART_HTX_HTX           
 *  [31:1] | R      | 0x0   | ALT_UART_HTX_RSVD_HTX_31TO1
 * 
 */
/*
 * Field : htx
 * 
 * Halt TX.
 * 
 * Writes will have no effect when FIFO_MODE == NONE, always readable.  This
 * register
 * 
 * is use to halt transmissions for testing, so that the transmit FIFO can be
 * filled
 * 
 * by the master when FIFO's are implemented and enabled.
 * 
 * Note, if FIFO's are implemented and not enabled the setting of the halt TX
 * register
 * 
 * will have no effect on operation.
 * 
 * 0 = Halt TX disabled
 * 
 * 1 = Halt TX enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description               
 * :----------------------------|:------|:---------------------------
 *  ALT_UART_HTX_HTX_E_DISABLED | 0x0   | Halt Transmission disabled
 *  ALT_UART_HTX_HTX_E_ENABLED  | 0x1   | Halt Transmission enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_HTX_HTX
 * 
 * Halt Transmission disabled
 */
#define ALT_UART_HTX_HTX_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_HTX_HTX
 * 
 * Halt Transmission enabled
 */
#define ALT_UART_HTX_HTX_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_HTX_HTX register field. */
#define ALT_UART_HTX_HTX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_HTX_HTX register field. */
#define ALT_UART_HTX_HTX_MSB        0
/* The width in bits of the ALT_UART_HTX_HTX register field. */
#define ALT_UART_HTX_HTX_WIDTH      1
/* The mask used to set the ALT_UART_HTX_HTX register field value. */
#define ALT_UART_HTX_HTX_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_HTX_HTX register field value. */
#define ALT_UART_HTX_HTX_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_HTX_HTX register field. */
#define ALT_UART_HTX_HTX_RESET      0x0
/* Extracts the ALT_UART_HTX_HTX field value from a register. */
#define ALT_UART_HTX_HTX_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_HTX_HTX register field value suitable for setting the register. */
#define ALT_UART_HTX_HTX_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_HTX_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_HTX_RSVD_HTX_31TO1 register field. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_HTX_RSVD_HTX_31TO1 register field. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_MSB        31
/* The width in bits of the ALT_UART_HTX_RSVD_HTX_31TO1 register field. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_WIDTH      31
/* The mask used to set the ALT_UART_HTX_RSVD_HTX_31TO1 register field value. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_UART_HTX_RSVD_HTX_31TO1 register field value. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_UART_HTX_RSVD_HTX_31TO1 register field. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_RESET      0x0
/* Extracts the ALT_UART_HTX_RSVD_HTX_31TO1 field value from a register. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_UART_HTX_RSVD_HTX_31TO1 register field value suitable for setting the register. */
#define ALT_UART_HTX_RSVD_HTX_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_UART_HTX.
 */
struct ALT_UART_HTX_s
{
    volatile uint32_t        htx            :  1;  /* ALT_UART_HTX_HTX */
    const volatile uint32_t  RSVD_HTX_31to1 : 31;  /* ALT_UART_HTX_RSVD_HTX_31TO1 */
};

/* The typedef declaration for register ALT_UART_HTX. */
typedef struct ALT_UART_HTX_s  ALT_UART_HTX_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_HTX register. */
#define ALT_UART_HTX_RESET       0x00000000
/* The byte offset of the ALT_UART_HTX register from the beginning of the component. */
#define ALT_UART_HTX_OFST        0xa4
/* The address of the ALT_UART_HTX register. */
#define ALT_UART_HTX_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_HTX_OFST))

/*
 * Register : DMA Software Acknowledge - DMASA
 * 
 * DMA Software Acknowledge
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | W      | 0x0   | ALT_UART_DMASA_DMASA           
 *  [31:1] | R      | 0x0   | ALT_UART_DMASA_RSVD_DMASA_31TO1
 * 
 */
/*
 * Field : dmasa
 * 
 * DMA Software Acknowledge.
 * 
 * Writes will have no effect when DMA_EXTRA == No.  This register is use to
 * perform
 * 
 * DMA software acknowledge if a transfer needs to be terminated due to an error
 * 
 * condition. For example, if the DMA disables the channel, then the DW_apb_uart
 * should
 * 
 * clear its request. This will cause the TX request, TX single, RX request and RX
 * 
 * single signals to de-assert.
 * 
 * Note that this bit is 'self-clearing' and it is not necessary to clear this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description             
 * :--------------------------------|:------|:-------------------------
 *  ALT_UART_DMASA_DMASA_E_SOFT_ACK | 0x1   | DMA software acknowledge
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_DMASA_DMASA
 * 
 * DMA software acknowledge
 */
#define ALT_UART_DMASA_DMASA_E_SOFT_ACK 0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_DMASA_DMASA register field. */
#define ALT_UART_DMASA_DMASA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_DMASA_DMASA register field. */
#define ALT_UART_DMASA_DMASA_MSB        0
/* The width in bits of the ALT_UART_DMASA_DMASA register field. */
#define ALT_UART_DMASA_DMASA_WIDTH      1
/* The mask used to set the ALT_UART_DMASA_DMASA register field value. */
#define ALT_UART_DMASA_DMASA_SET_MSK    0x00000001
/* The mask used to clear the ALT_UART_DMASA_DMASA register field value. */
#define ALT_UART_DMASA_DMASA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_UART_DMASA_DMASA register field. */
#define ALT_UART_DMASA_DMASA_RESET      0x0
/* Extracts the ALT_UART_DMASA_DMASA field value from a register. */
#define ALT_UART_DMASA_DMASA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_UART_DMASA_DMASA register field value suitable for setting the register. */
#define ALT_UART_DMASA_DMASA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_DMASA_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_DMASA_RSVD_DMASA_31TO1 register field. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_UART_DMASA_RSVD_DMASA_31TO1 register field. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_MSB        31
/* The width in bits of the ALT_UART_DMASA_RSVD_DMASA_31TO1 register field. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_WIDTH      31
/* The mask used to set the ALT_UART_DMASA_RSVD_DMASA_31TO1 register field value. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_UART_DMASA_RSVD_DMASA_31TO1 register field value. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_UART_DMASA_RSVD_DMASA_31TO1 register field. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_RESET      0x0
/* Extracts the ALT_UART_DMASA_RSVD_DMASA_31TO1 field value from a register. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_UART_DMASA_RSVD_DMASA_31TO1 register field value suitable for setting the register. */
#define ALT_UART_DMASA_RSVD_DMASA_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_UART_DMASA.
 */
struct ALT_UART_DMASA_s
{
    volatile uint32_t        dmasa            :  1;  /* ALT_UART_DMASA_DMASA */
    const volatile uint32_t  RSVD_DMASA_31to1 : 31;  /* ALT_UART_DMASA_RSVD_DMASA_31TO1 */
};

/* The typedef declaration for register ALT_UART_DMASA. */
typedef struct ALT_UART_DMASA_s  ALT_UART_DMASA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_DMASA register. */
#define ALT_UART_DMASA_RESET       0x00000000
/* The byte offset of the ALT_UART_DMASA register from the beginning of the component. */
#define ALT_UART_DMASA_OFST        0xa8
/* The address of the ALT_UART_DMASA register. */
#define ALT_UART_DMASA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_DMASA_OFST))

/*
 * Register : Component Parameter Register - CPR
 * 
 * Component Parameter Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [1:0]   | R      | 0x2   | ALT_UART_CPR_APB_DATA_WIDTH         
 *  [3:2]   | R      | 0x0   | ALT_UART_CPR_RSVD_CPR_3TO2          
 *  [4]     | R      | 0x1   | ALT_UART_CPR_AFCE_MODE              
 *  [5]     | R      | 0x1   | ALT_UART_CPR_THRE_MODE              
 *  [6]     | R      | 0x0   | ALT_UART_CPR_SIR_MODE               
 *  [7]     | R      | 0x0   | ALT_UART_CPR_SIR_LP_MODE            
 *  [8]     | R      | 0x1   | ALT_UART_CPR_ADDITIONAL_FEAT        
 *  [9]     | R      | 0x1   | ALT_UART_CPR_FIFO_ACCESS            
 *  [10]    | R      | 0x1   | ALT_UART_CPR_FIFO_STAT              
 *  [11]    | R      | 0x1   | ALT_UART_CPR_SHADOW                 
 *  [12]    | R      | 0x1   | ALT_UART_CPR_UART_ADD_ENCODED_PARAMS
 *  [13]    | R      | 0x1   | ALT_UART_CPR_DMA_EXTRA              
 *  [15:14] | R      | 0x0   | ALT_UART_CPR_RSVD_CPR_15TO14        
 *  [23:16] | R      | 0x8   | ALT_UART_CPR_FIFO_MODE              
 *  [31:24] | R      | 0x0   | ALT_UART_CPR_RSVD_CPR_31TO24        
 * 
 */
/*
 * Field : APB_DATA_WIDTH
 * 
 * Encoding of APB_DATA_WIDTH configuration parameter value.
 * 
 * 00 = 8 bits,
 * 
 * 01 = 16 bits,
 * 
 * 10 = 32 bits,
 * 
 * 11 = reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description              
 * :-----------------------------------------|:------|:--------------------------
 *  ALT_UART_CPR_APB_DATA_WIDTH_E_APB_8BITS  | 0x0   | APB data width is 8 bits 
 *  ALT_UART_CPR_APB_DATA_WIDTH_E_APB_16BITS | 0x1   | APB data width is 16 bits
 *  ALT_UART_CPR_APB_DATA_WIDTH_E_APB_32BITS | 0x2   | APB data width is 32 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_APB_DATA_WIDTH
 * 
 * APB data width is 8 bits
 */
#define ALT_UART_CPR_APB_DATA_WIDTH_E_APB_8BITS     0x0
/*
 * Enumerated value for register field ALT_UART_CPR_APB_DATA_WIDTH
 * 
 * APB data width is 16 bits
 */
#define ALT_UART_CPR_APB_DATA_WIDTH_E_APB_16BITS    0x1
/*
 * Enumerated value for register field ALT_UART_CPR_APB_DATA_WIDTH
 * 
 * APB data width is 32 bits
 */
#define ALT_UART_CPR_APB_DATA_WIDTH_E_APB_32BITS    0x2

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_APB_DATA_WIDTH register field. */
#define ALT_UART_CPR_APB_DATA_WIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_APB_DATA_WIDTH register field. */
#define ALT_UART_CPR_APB_DATA_WIDTH_MSB        1
/* The width in bits of the ALT_UART_CPR_APB_DATA_WIDTH register field. */
#define ALT_UART_CPR_APB_DATA_WIDTH_WIDTH      2
/* The mask used to set the ALT_UART_CPR_APB_DATA_WIDTH register field value. */
#define ALT_UART_CPR_APB_DATA_WIDTH_SET_MSK    0x00000003
/* The mask used to clear the ALT_UART_CPR_APB_DATA_WIDTH register field value. */
#define ALT_UART_CPR_APB_DATA_WIDTH_CLR_MSK    0xfffffffc
/* The reset value of the ALT_UART_CPR_APB_DATA_WIDTH register field. */
#define ALT_UART_CPR_APB_DATA_WIDTH_RESET      0x2
/* Extracts the ALT_UART_CPR_APB_DATA_WIDTH field value from a register. */
#define ALT_UART_CPR_APB_DATA_WIDTH_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_UART_CPR_APB_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_UART_CPR_APB_DATA_WIDTH_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : RSVD_CPR_3to2
 * 
 * Reserved bits [3:2] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_RSVD_CPR_3TO2 register field. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_RSVD_CPR_3TO2 register field. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_MSB        3
/* The width in bits of the ALT_UART_CPR_RSVD_CPR_3TO2 register field. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_WIDTH      2
/* The mask used to set the ALT_UART_CPR_RSVD_CPR_3TO2 register field value. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_SET_MSK    0x0000000c
/* The mask used to clear the ALT_UART_CPR_RSVD_CPR_3TO2 register field value. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_CLR_MSK    0xfffffff3
/* The reset value of the ALT_UART_CPR_RSVD_CPR_3TO2 register field. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_RESET      0x0
/* Extracts the ALT_UART_CPR_RSVD_CPR_3TO2 field value from a register. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_UART_CPR_RSVD_CPR_3TO2 register field value suitable for setting the register. */
#define ALT_UART_CPR_RSVD_CPR_3TO2_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : AFCE_MODE
 * 
 * Encoding of AFCE_MODE configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description       
 * :----------------------------------|:------|:-------------------
 *  ALT_UART_CPR_AFCE_MODE_E_DISABLED | 0x0   | AFCE mode disabled
 *  ALT_UART_CPR_AFCE_MODE_E_ENABLED  | 0x1   | AFCE mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_AFCE_MODE
 * 
 * AFCE mode disabled
 */
#define ALT_UART_CPR_AFCE_MODE_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_CPR_AFCE_MODE
 * 
 * AFCE mode enabled
 */
#define ALT_UART_CPR_AFCE_MODE_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_AFCE_MODE register field. */
#define ALT_UART_CPR_AFCE_MODE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_AFCE_MODE register field. */
#define ALT_UART_CPR_AFCE_MODE_MSB        4
/* The width in bits of the ALT_UART_CPR_AFCE_MODE register field. */
#define ALT_UART_CPR_AFCE_MODE_WIDTH      1
/* The mask used to set the ALT_UART_CPR_AFCE_MODE register field value. */
#define ALT_UART_CPR_AFCE_MODE_SET_MSK    0x00000010
/* The mask used to clear the ALT_UART_CPR_AFCE_MODE register field value. */
#define ALT_UART_CPR_AFCE_MODE_CLR_MSK    0xffffffef
/* The reset value of the ALT_UART_CPR_AFCE_MODE register field. */
#define ALT_UART_CPR_AFCE_MODE_RESET      0x1
/* Extracts the ALT_UART_CPR_AFCE_MODE field value from a register. */
#define ALT_UART_CPR_AFCE_MODE_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_UART_CPR_AFCE_MODE register field value suitable for setting the register. */
#define ALT_UART_CPR_AFCE_MODE_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : THRE_MODE
 * 
 * Encoding of THRE_MODE configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description       
 * :----------------------------------|:------|:-------------------
 *  ALT_UART_CPR_THRE_MODE_E_DISABLED | 0x0   | THRE mode disabled
 *  ALT_UART_CPR_THRE_MODE_E_ENABLED  | 0x1   | THRE mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_THRE_MODE
 * 
 * THRE mode disabled
 */
#define ALT_UART_CPR_THRE_MODE_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_CPR_THRE_MODE
 * 
 * THRE mode enabled
 */
#define ALT_UART_CPR_THRE_MODE_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_THRE_MODE register field. */
#define ALT_UART_CPR_THRE_MODE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_THRE_MODE register field. */
#define ALT_UART_CPR_THRE_MODE_MSB        5
/* The width in bits of the ALT_UART_CPR_THRE_MODE register field. */
#define ALT_UART_CPR_THRE_MODE_WIDTH      1
/* The mask used to set the ALT_UART_CPR_THRE_MODE register field value. */
#define ALT_UART_CPR_THRE_MODE_SET_MSK    0x00000020
/* The mask used to clear the ALT_UART_CPR_THRE_MODE register field value. */
#define ALT_UART_CPR_THRE_MODE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_UART_CPR_THRE_MODE register field. */
#define ALT_UART_CPR_THRE_MODE_RESET      0x1
/* Extracts the ALT_UART_CPR_THRE_MODE field value from a register. */
#define ALT_UART_CPR_THRE_MODE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_UART_CPR_THRE_MODE register field value suitable for setting the register. */
#define ALT_UART_CPR_THRE_MODE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : SIR_MODE
 * 
 * Encoding of SIR_MODE configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description      
 * :---------------------------------|:------|:------------------
 *  ALT_UART_CPR_SIR_MODE_E_DISABLED | 0x0   | SIR mode disabled
 *  ALT_UART_CPR_SIR_MODE_E_ENABLED  | 0x1   | SIR mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_SIR_MODE
 * 
 * SIR mode disabled
 */
#define ALT_UART_CPR_SIR_MODE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_UART_CPR_SIR_MODE
 * 
 * SIR mode enabled
 */
#define ALT_UART_CPR_SIR_MODE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_SIR_MODE register field. */
#define ALT_UART_CPR_SIR_MODE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_SIR_MODE register field. */
#define ALT_UART_CPR_SIR_MODE_MSB        6
/* The width in bits of the ALT_UART_CPR_SIR_MODE register field. */
#define ALT_UART_CPR_SIR_MODE_WIDTH      1
/* The mask used to set the ALT_UART_CPR_SIR_MODE register field value. */
#define ALT_UART_CPR_SIR_MODE_SET_MSK    0x00000040
/* The mask used to clear the ALT_UART_CPR_SIR_MODE register field value. */
#define ALT_UART_CPR_SIR_MODE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_UART_CPR_SIR_MODE register field. */
#define ALT_UART_CPR_SIR_MODE_RESET      0x0
/* Extracts the ALT_UART_CPR_SIR_MODE field value from a register. */
#define ALT_UART_CPR_SIR_MODE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_UART_CPR_SIR_MODE register field value suitable for setting the register. */
#define ALT_UART_CPR_SIR_MODE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : SIR_LP_MODE
 * 
 * Encoding of SIR_LP_MODE configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description         
 * :------------------------------------|:------|:---------------------
 *  ALT_UART_CPR_SIR_LP_MODE_E_DISABLED | 0x0   | SIR_LP mode disabled
 *  ALT_UART_CPR_SIR_LP_MODE_E_ENABLED  | 0x1   | SIR_LP mode enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_SIR_LP_MODE
 * 
 * SIR_LP mode disabled
 */
#define ALT_UART_CPR_SIR_LP_MODE_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_CPR_SIR_LP_MODE
 * 
 * SIR_LP mode enabled
 */
#define ALT_UART_CPR_SIR_LP_MODE_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_SIR_LP_MODE register field. */
#define ALT_UART_CPR_SIR_LP_MODE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_SIR_LP_MODE register field. */
#define ALT_UART_CPR_SIR_LP_MODE_MSB        7
/* The width in bits of the ALT_UART_CPR_SIR_LP_MODE register field. */
#define ALT_UART_CPR_SIR_LP_MODE_WIDTH      1
/* The mask used to set the ALT_UART_CPR_SIR_LP_MODE register field value. */
#define ALT_UART_CPR_SIR_LP_MODE_SET_MSK    0x00000080
/* The mask used to clear the ALT_UART_CPR_SIR_LP_MODE register field value. */
#define ALT_UART_CPR_SIR_LP_MODE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_UART_CPR_SIR_LP_MODE register field. */
#define ALT_UART_CPR_SIR_LP_MODE_RESET      0x0
/* Extracts the ALT_UART_CPR_SIR_LP_MODE field value from a register. */
#define ALT_UART_CPR_SIR_LP_MODE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_UART_CPR_SIR_LP_MODE register field value suitable for setting the register. */
#define ALT_UART_CPR_SIR_LP_MODE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : ADDITIONAL_FEAT
 * 
 * Encoding of ADDITIONAL_FEATURES configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                 
 * :----------------------------------------|:------|:-----------------------------
 *  ALT_UART_CPR_ADDITIONAL_FEAT_E_DISABLED | 0x0   | Additional features disabled
 *  ALT_UART_CPR_ADDITIONAL_FEAT_E_ENABLED  | 0x1   | Additional features enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_ADDITIONAL_FEAT
 * 
 * Additional features disabled
 */
#define ALT_UART_CPR_ADDITIONAL_FEAT_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_CPR_ADDITIONAL_FEAT
 * 
 * Additional features enabled
 */
#define ALT_UART_CPR_ADDITIONAL_FEAT_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_ADDITIONAL_FEAT register field. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_ADDITIONAL_FEAT register field. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_MSB        8
/* The width in bits of the ALT_UART_CPR_ADDITIONAL_FEAT register field. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_WIDTH      1
/* The mask used to set the ALT_UART_CPR_ADDITIONAL_FEAT register field value. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_SET_MSK    0x00000100
/* The mask used to clear the ALT_UART_CPR_ADDITIONAL_FEAT register field value. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_CLR_MSK    0xfffffeff
/* The reset value of the ALT_UART_CPR_ADDITIONAL_FEAT register field. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_RESET      0x1
/* Extracts the ALT_UART_CPR_ADDITIONAL_FEAT field value from a register. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_UART_CPR_ADDITIONAL_FEAT register field value suitable for setting the register. */
#define ALT_UART_CPR_ADDITIONAL_FEAT_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : FIFO_ACCESS
 * 
 * Encoding of FIFO_ACCESS configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description         
 * :------------------------------------|:------|:---------------------
 *  ALT_UART_CPR_FIFO_ACCESS_E_DISABLED | 0x0   | FIFO_ACCESS disabled
 *  ALT_UART_CPR_FIFO_ACCESS_E_ENABLED  | 0x1   | FIFO ACCESS enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_ACCESS
 * 
 * FIFO_ACCESS disabled
 */
#define ALT_UART_CPR_FIFO_ACCESS_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_ACCESS
 * 
 * FIFO ACCESS enabled
 */
#define ALT_UART_CPR_FIFO_ACCESS_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_FIFO_ACCESS register field. */
#define ALT_UART_CPR_FIFO_ACCESS_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_FIFO_ACCESS register field. */
#define ALT_UART_CPR_FIFO_ACCESS_MSB        9
/* The width in bits of the ALT_UART_CPR_FIFO_ACCESS register field. */
#define ALT_UART_CPR_FIFO_ACCESS_WIDTH      1
/* The mask used to set the ALT_UART_CPR_FIFO_ACCESS register field value. */
#define ALT_UART_CPR_FIFO_ACCESS_SET_MSK    0x00000200
/* The mask used to clear the ALT_UART_CPR_FIFO_ACCESS register field value. */
#define ALT_UART_CPR_FIFO_ACCESS_CLR_MSK    0xfffffdff
/* The reset value of the ALT_UART_CPR_FIFO_ACCESS register field. */
#define ALT_UART_CPR_FIFO_ACCESS_RESET      0x1
/* Extracts the ALT_UART_CPR_FIFO_ACCESS field value from a register. */
#define ALT_UART_CPR_FIFO_ACCESS_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_UART_CPR_FIFO_ACCESS register field value suitable for setting the register. */
#define ALT_UART_CPR_FIFO_ACCESS_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : FIFO_STAT
 * 
 * Encoding of FIFO_STAT configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description       
 * :----------------------------------|:------|:-------------------
 *  ALT_UART_CPR_FIFO_STAT_E_DISABLED | 0x0   | FIFO_STAT disabled
 *  ALT_UART_CPR_FIFO_STAT_E_ENABLED  | 0x1   | FIFO_STAT enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_STAT
 * 
 * FIFO_STAT disabled
 */
#define ALT_UART_CPR_FIFO_STAT_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_STAT
 * 
 * FIFO_STAT enabled
 */
#define ALT_UART_CPR_FIFO_STAT_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_FIFO_STAT register field. */
#define ALT_UART_CPR_FIFO_STAT_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_FIFO_STAT register field. */
#define ALT_UART_CPR_FIFO_STAT_MSB        10
/* The width in bits of the ALT_UART_CPR_FIFO_STAT register field. */
#define ALT_UART_CPR_FIFO_STAT_WIDTH      1
/* The mask used to set the ALT_UART_CPR_FIFO_STAT register field value. */
#define ALT_UART_CPR_FIFO_STAT_SET_MSK    0x00000400
/* The mask used to clear the ALT_UART_CPR_FIFO_STAT register field value. */
#define ALT_UART_CPR_FIFO_STAT_CLR_MSK    0xfffffbff
/* The reset value of the ALT_UART_CPR_FIFO_STAT register field. */
#define ALT_UART_CPR_FIFO_STAT_RESET      0x1
/* Extracts the ALT_UART_CPR_FIFO_STAT field value from a register. */
#define ALT_UART_CPR_FIFO_STAT_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_UART_CPR_FIFO_STAT register field value suitable for setting the register. */
#define ALT_UART_CPR_FIFO_STAT_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : SHADOW
 * 
 * Encoding of SHADOW configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description    
 * :-------------------------------|:------|:----------------
 *  ALT_UART_CPR_SHADOW_E_DISABLED | 0x0   | SHADOW disabled
 *  ALT_UART_CPR_SHADOW_E_ENABLED  | 0x1   | SHADOW enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_SHADOW
 * 
 * SHADOW disabled
 */
#define ALT_UART_CPR_SHADOW_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_UART_CPR_SHADOW
 * 
 * SHADOW enabled
 */
#define ALT_UART_CPR_SHADOW_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_SHADOW register field. */
#define ALT_UART_CPR_SHADOW_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_SHADOW register field. */
#define ALT_UART_CPR_SHADOW_MSB        11
/* The width in bits of the ALT_UART_CPR_SHADOW register field. */
#define ALT_UART_CPR_SHADOW_WIDTH      1
/* The mask used to set the ALT_UART_CPR_SHADOW register field value. */
#define ALT_UART_CPR_SHADOW_SET_MSK    0x00000800
/* The mask used to clear the ALT_UART_CPR_SHADOW register field value. */
#define ALT_UART_CPR_SHADOW_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_UART_CPR_SHADOW register field. */
#define ALT_UART_CPR_SHADOW_RESET      0x1
/* Extracts the ALT_UART_CPR_SHADOW field value from a register. */
#define ALT_UART_CPR_SHADOW_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_UART_CPR_SHADOW register field value suitable for setting the register. */
#define ALT_UART_CPR_SHADOW_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : UART_ADD_ENCODED_PARAMS
 * 
 * Encoding of UART_ADD_ENCODED_PARAMS configuration parameter value.
 * 
 * 0 = FALSE,
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description                     
 * :------------------------------------------------|:------|:---------------------------------
 *  ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_E_DISABLED | 0x0   | UART_ADD_ENCODED_PARAMS disabled
 *  ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_E_ENABLED  | 0x1   | UART_ADD_ENCODED_PARAMS enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_UART_ADD_ENCODED_PARAMS
 * 
 * UART_ADD_ENCODED_PARAMS disabled
 */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_UART_CPR_UART_ADD_ENCODED_PARAMS
 * 
 * UART_ADD_ENCODED_PARAMS enabled
 */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_UART_ADD_ENCODED_PARAMS register field. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_UART_ADD_ENCODED_PARAMS register field. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_MSB        12
/* The width in bits of the ALT_UART_CPR_UART_ADD_ENCODED_PARAMS register field. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_WIDTH      1
/* The mask used to set the ALT_UART_CPR_UART_ADD_ENCODED_PARAMS register field value. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_SET_MSK    0x00001000
/* The mask used to clear the ALT_UART_CPR_UART_ADD_ENCODED_PARAMS register field value. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_CLR_MSK    0xffffefff
/* The reset value of the ALT_UART_CPR_UART_ADD_ENCODED_PARAMS register field. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_RESET      0x1
/* Extracts the ALT_UART_CPR_UART_ADD_ENCODED_PARAMS field value from a register. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_UART_CPR_UART_ADD_ENCODED_PARAMS register field value suitable for setting the register. */
#define ALT_UART_CPR_UART_ADD_ENCODED_PARAMS_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : DMA_EXTRA
 * 
 * Encoding of DMA_EXTRA configuration parameter value.
 * 
 * 0 = FALSE,DW_apb_uart.ralf
 * 
 * 1 = TRUE
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description       
 * :----------------------------------|:------|:-------------------
 *  ALT_UART_CPR_DMA_EXTRA_E_DISABLED | 0x0   | DMA_EXTRA disabled
 *  ALT_UART_CPR_DMA_EXTRA_E_ENABLED  | 0x1   | DMA_EXTRA enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_DMA_EXTRA
 * 
 * DMA_EXTRA disabled
 */
#define ALT_UART_CPR_DMA_EXTRA_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_UART_CPR_DMA_EXTRA
 * 
 * DMA_EXTRA enabled
 */
#define ALT_UART_CPR_DMA_EXTRA_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_DMA_EXTRA register field. */
#define ALT_UART_CPR_DMA_EXTRA_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_DMA_EXTRA register field. */
#define ALT_UART_CPR_DMA_EXTRA_MSB        13
/* The width in bits of the ALT_UART_CPR_DMA_EXTRA register field. */
#define ALT_UART_CPR_DMA_EXTRA_WIDTH      1
/* The mask used to set the ALT_UART_CPR_DMA_EXTRA register field value. */
#define ALT_UART_CPR_DMA_EXTRA_SET_MSK    0x00002000
/* The mask used to clear the ALT_UART_CPR_DMA_EXTRA register field value. */
#define ALT_UART_CPR_DMA_EXTRA_CLR_MSK    0xffffdfff
/* The reset value of the ALT_UART_CPR_DMA_EXTRA register field. */
#define ALT_UART_CPR_DMA_EXTRA_RESET      0x1
/* Extracts the ALT_UART_CPR_DMA_EXTRA field value from a register. */
#define ALT_UART_CPR_DMA_EXTRA_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_UART_CPR_DMA_EXTRA register field value suitable for setting the register. */
#define ALT_UART_CPR_DMA_EXTRA_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : RSVD_CPR_15to14
 * 
 * Reserved bits [15:14] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_RSVD_CPR_15TO14 register field. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_RSVD_CPR_15TO14 register field. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_MSB        15
/* The width in bits of the ALT_UART_CPR_RSVD_CPR_15TO14 register field. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_WIDTH      2
/* The mask used to set the ALT_UART_CPR_RSVD_CPR_15TO14 register field value. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_UART_CPR_RSVD_CPR_15TO14 register field value. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_UART_CPR_RSVD_CPR_15TO14 register field. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_RESET      0x0
/* Extracts the ALT_UART_CPR_RSVD_CPR_15TO14 field value from a register. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_UART_CPR_RSVD_CPR_15TO14 register field value suitable for setting the register. */
#define ALT_UART_CPR_RSVD_CPR_15TO14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : FIFO_MODE
 * 
 * Encoding of FIFO_MODE configuration parameter value.DW_apb_uart.ralf
 * 
 * 0x00 = 0,
 * 
 * 0x01 = 16,
 * 
 * 0x02 = 32,
 * 
 * toset
 * 
 * 0x80 = 2048,
 * 
 * 0x81- 0xff = reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description      
 * :----------------------------------------|:------|:------------------
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_0    | 0x0   | FIFO mode is 0   
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_16   | 0x1   | FIFO mode is 16  
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_32   | 0x2   | FIFO mode is 32  
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_64   | 0x4   | FIFO mode is 64  
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_128  | 0x8   | FIFO mode is 128 
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_256  | 0x10  | FIFO mode is 256 
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_512  | 0x20  | FIFO mode is 512 
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_1024 | 0x40  | FIFO mode is 1024
 *  ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_2048 | 0x80  | FIFO mode is 2048
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 0
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_0    0x0
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 16
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_16   0x1
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 32
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_32   0x2
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 64
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_64   0x4
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 128
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_128  0x8
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 256
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_256  0x10
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 512
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_512  0x20
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 1024
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_1024 0x40
/*
 * Enumerated value for register field ALT_UART_CPR_FIFO_MODE
 * 
 * FIFO mode is 2048
 */
#define ALT_UART_CPR_FIFO_MODE_E_FIFO_MODE_2048 0x80

/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_FIFO_MODE register field. */
#define ALT_UART_CPR_FIFO_MODE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_FIFO_MODE register field. */
#define ALT_UART_CPR_FIFO_MODE_MSB        23
/* The width in bits of the ALT_UART_CPR_FIFO_MODE register field. */
#define ALT_UART_CPR_FIFO_MODE_WIDTH      8
/* The mask used to set the ALT_UART_CPR_FIFO_MODE register field value. */
#define ALT_UART_CPR_FIFO_MODE_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_UART_CPR_FIFO_MODE register field value. */
#define ALT_UART_CPR_FIFO_MODE_CLR_MSK    0xff00ffff
/* The reset value of the ALT_UART_CPR_FIFO_MODE register field. */
#define ALT_UART_CPR_FIFO_MODE_RESET      0x8
/* Extracts the ALT_UART_CPR_FIFO_MODE field value from a register. */
#define ALT_UART_CPR_FIFO_MODE_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_UART_CPR_FIFO_MODE register field value suitable for setting the register. */
#define ALT_UART_CPR_FIFO_MODE_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : RSVD_CPR_31to24
 * 
 * Reserved bits [31:24] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_CPR_RSVD_CPR_31TO24 register field. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_UART_CPR_RSVD_CPR_31TO24 register field. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_MSB        31
/* The width in bits of the ALT_UART_CPR_RSVD_CPR_31TO24 register field. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_WIDTH      8
/* The mask used to set the ALT_UART_CPR_RSVD_CPR_31TO24 register field value. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_SET_MSK    0xff000000
/* The mask used to clear the ALT_UART_CPR_RSVD_CPR_31TO24 register field value. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_CLR_MSK    0x00ffffff
/* The reset value of the ALT_UART_CPR_RSVD_CPR_31TO24 register field. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_RESET      0x0
/* Extracts the ALT_UART_CPR_RSVD_CPR_31TO24 field value from a register. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_UART_CPR_RSVD_CPR_31TO24 register field value suitable for setting the register. */
#define ALT_UART_CPR_RSVD_CPR_31TO24_SET(value) (((value) << 24) & 0xff000000)

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
 * The struct declaration for register ALT_UART_CPR.
 */
struct ALT_UART_CPR_s
{
    const volatile uint32_t  APB_DATA_WIDTH          :  2;  /* ALT_UART_CPR_APB_DATA_WIDTH */
    const volatile uint32_t  RSVD_CPR_3to2           :  2;  /* ALT_UART_CPR_RSVD_CPR_3TO2 */
    const volatile uint32_t  AFCE_MODE               :  1;  /* ALT_UART_CPR_AFCE_MODE */
    const volatile uint32_t  THRE_MODE               :  1;  /* ALT_UART_CPR_THRE_MODE */
    const volatile uint32_t  SIR_MODE                :  1;  /* ALT_UART_CPR_SIR_MODE */
    const volatile uint32_t  SIR_LP_MODE             :  1;  /* ALT_UART_CPR_SIR_LP_MODE */
    const volatile uint32_t  ADDITIONAL_FEAT         :  1;  /* ALT_UART_CPR_ADDITIONAL_FEAT */
    const volatile uint32_t  FIFO_ACCESS             :  1;  /* ALT_UART_CPR_FIFO_ACCESS */
    const volatile uint32_t  FIFO_STAT               :  1;  /* ALT_UART_CPR_FIFO_STAT */
    const volatile uint32_t  SHADOW                  :  1;  /* ALT_UART_CPR_SHADOW */
    const volatile uint32_t  UART_ADD_ENCODED_PARAMS :  1;  /* ALT_UART_CPR_UART_ADD_ENCODED_PARAMS */
    const volatile uint32_t  DMA_EXTRA               :  1;  /* ALT_UART_CPR_DMA_EXTRA */
    const volatile uint32_t  RSVD_CPR_15to14         :  2;  /* ALT_UART_CPR_RSVD_CPR_15TO14 */
    const volatile uint32_t  FIFO_MODE               :  8;  /* ALT_UART_CPR_FIFO_MODE */
    const volatile uint32_t  RSVD_CPR_31to24         :  8;  /* ALT_UART_CPR_RSVD_CPR_31TO24 */
};

/* The typedef declaration for register ALT_UART_CPR. */
typedef struct ALT_UART_CPR_s  ALT_UART_CPR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_CPR register. */
#define ALT_UART_CPR_RESET       0x00083f32
/* The byte offset of the ALT_UART_CPR register from the beginning of the component. */
#define ALT_UART_CPR_OFST        0xf4
/* The address of the ALT_UART_CPR register. */
#define ALT_UART_CPR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_CPR_OFST))

/*
 * Register : Component Version - UCV
 * 
 * Component Version
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                        
 * :-------|:-------|:-----------|:------------------------------------
 *  [31:0] | R      | 0x3331352a | ALT_UART_UCV_UART_COMPONENT_VERSION
 * 
 */
/*
 * Field : UART_Component_Version
 * 
 * ASCII value for each number in the version, followed by *.
 * 
 * For example 32_30_31_2A represents the version 2.01*
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_UCV_UART_COMPONENT_VERSION register field. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_UCV_UART_COMPONENT_VERSION register field. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_MSB        31
/* The width in bits of the ALT_UART_UCV_UART_COMPONENT_VERSION register field. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_WIDTH      32
/* The mask used to set the ALT_UART_UCV_UART_COMPONENT_VERSION register field value. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_SET_MSK    0xffffffff
/* The mask used to clear the ALT_UART_UCV_UART_COMPONENT_VERSION register field value. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_CLR_MSK    0x00000000
/* The reset value of the ALT_UART_UCV_UART_COMPONENT_VERSION register field. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_RESET      0x3331352a
/* Extracts the ALT_UART_UCV_UART_COMPONENT_VERSION field value from a register. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_UART_UCV_UART_COMPONENT_VERSION register field value suitable for setting the register. */
#define ALT_UART_UCV_UART_COMPONENT_VERSION_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_UART_UCV.
 */
struct ALT_UART_UCV_s
{
    const volatile uint32_t  UART_Component_Version : 32;  /* ALT_UART_UCV_UART_COMPONENT_VERSION */
};

/* The typedef declaration for register ALT_UART_UCV. */
typedef struct ALT_UART_UCV_s  ALT_UART_UCV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_UCV register. */
#define ALT_UART_UCV_RESET       0x3331352a
/* The byte offset of the ALT_UART_UCV register from the beginning of the component. */
#define ALT_UART_UCV_OFST        0xf8
/* The address of the ALT_UART_UCV register. */
#define ALT_UART_UCV_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_UCV_OFST))

/*
 * Register : Component Type Register - CTR
 * 
 * Component Type Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description               
 * :-------|:-------|:-----------|:---------------------------
 *  [31:0] | R      | 0x44570110 | ALT_UART_CTR_PERIPHERAL_ID
 * 
 */
/*
 * Field : Peripheral_ID
 * 
 * This register contains the peripherals identification code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_UART_CTR_PERIPHERAL_ID register field. */
#define ALT_UART_CTR_PERIPHERAL_ID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_UART_CTR_PERIPHERAL_ID register field. */
#define ALT_UART_CTR_PERIPHERAL_ID_MSB        31
/* The width in bits of the ALT_UART_CTR_PERIPHERAL_ID register field. */
#define ALT_UART_CTR_PERIPHERAL_ID_WIDTH      32
/* The mask used to set the ALT_UART_CTR_PERIPHERAL_ID register field value. */
#define ALT_UART_CTR_PERIPHERAL_ID_SET_MSK    0xffffffff
/* The mask used to clear the ALT_UART_CTR_PERIPHERAL_ID register field value. */
#define ALT_UART_CTR_PERIPHERAL_ID_CLR_MSK    0x00000000
/* The reset value of the ALT_UART_CTR_PERIPHERAL_ID register field. */
#define ALT_UART_CTR_PERIPHERAL_ID_RESET      0x44570110
/* Extracts the ALT_UART_CTR_PERIPHERAL_ID field value from a register. */
#define ALT_UART_CTR_PERIPHERAL_ID_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_UART_CTR_PERIPHERAL_ID register field value suitable for setting the register. */
#define ALT_UART_CTR_PERIPHERAL_ID_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_UART_CTR.
 */
struct ALT_UART_CTR_s
{
    const volatile uint32_t  Peripheral_ID : 32;  /* ALT_UART_CTR_PERIPHERAL_ID */
};

/* The typedef declaration for register ALT_UART_CTR. */
typedef struct ALT_UART_CTR_s  ALT_UART_CTR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_UART_CTR register. */
#define ALT_UART_CTR_RESET       0x44570110
/* The byte offset of the ALT_UART_CTR register from the beginning of the component. */
#define ALT_UART_CTR_OFST        0xfc
/* The address of the ALT_UART_CTR register. */
#define ALT_UART_CTR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_UART_CTR_OFST))

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
 * The struct declaration for register group ALT_UART.
 */
struct ALT_UART_s
{
    volatile ALT_UART_RBR_t     RBR;                 /* ALT_UART_RBR */
    volatile ALT_UART_IER_t     IER;                 /* ALT_UART_IER */
    volatile ALT_UART_IIR_t     IIR;                 /* ALT_UART_IIR */
    volatile ALT_UART_LCR_t     LCR;                 /* ALT_UART_LCR */
    volatile ALT_UART_MCR_t     MCR;                 /* ALT_UART_MCR */
    volatile ALT_UART_LSR_t     LSR;                 /* ALT_UART_LSR */
    volatile ALT_UART_MSR_t     MSR;                 /* ALT_UART_MSR */
    volatile ALT_UART_SCR_t     SCR;                 /* ALT_UART_SCR */
    volatile uint32_t           _pad_0x20_0x2f[4];   /* *UNDEFINED* */
    volatile ALT_UART_SRBR0_t   SRBR0;               /* ALT_UART_SRBR0 */
    volatile ALT_UART_SRBR1_t   SRBR1;               /* ALT_UART_SRBR1 */
    volatile ALT_UART_SRBR2_t   SRBR2;               /* ALT_UART_SRBR2 */
    volatile ALT_UART_SRBR3_t   SRBR3;               /* ALT_UART_SRBR3 */
    volatile ALT_UART_SRBR4_t   SRBR4;               /* ALT_UART_SRBR4 */
    volatile ALT_UART_SRBR5_t   SRBR5;               /* ALT_UART_SRBR5 */
    volatile ALT_UART_SRBR6_t   SRBR6;               /* ALT_UART_SRBR6 */
    volatile ALT_UART_SRBR7_t   SRBR7;               /* ALT_UART_SRBR7 */
    volatile ALT_UART_SRBR8_t   SRBR8;               /* ALT_UART_SRBR8 */
    volatile ALT_UART_SRBR9_t   SRBR9;               /* ALT_UART_SRBR9 */
    volatile ALT_UART_SRBR10_t  SRBR10;              /* ALT_UART_SRBR10 */
    volatile ALT_UART_SRBR11_t  SRBR11;              /* ALT_UART_SRBR11 */
    volatile ALT_UART_SRBR12_t  SRBR12;              /* ALT_UART_SRBR12 */
    volatile ALT_UART_SRBR13_t  SRBR13;              /* ALT_UART_SRBR13 */
    volatile ALT_UART_SRBR14_t  SRBR14;              /* ALT_UART_SRBR14 */
    volatile ALT_UART_SRBR15_t  SRBR15;              /* ALT_UART_SRBR15 */
    volatile ALT_UART_FAR_t     FAR;                 /* ALT_UART_FAR */
    volatile ALT_UART_TFR_t     TFR;                 /* ALT_UART_TFR */
    volatile ALT_UART_RFW_t     RFW;                 /* ALT_UART_RFW */
    volatile ALT_UART_USR_t     USR;                 /* ALT_UART_USR */
    volatile ALT_UART_TFL_t     TFL;                 /* ALT_UART_TFL */
    volatile ALT_UART_RFL_t     RFL;                 /* ALT_UART_RFL */
    volatile ALT_UART_SRR_t     SRR;                 /* ALT_UART_SRR */
    volatile ALT_UART_SRTS_t    SRTS;                /* ALT_UART_SRTS */
    volatile ALT_UART_SBCR_t    SBCR;                /* ALT_UART_SBCR */
    volatile ALT_UART_SDMAM_t   SDMAM;               /* ALT_UART_SDMAM */
    volatile ALT_UART_SFE_t     SFE;                 /* ALT_UART_SFE */
    volatile ALT_UART_SRT_t     SRT;                 /* ALT_UART_SRT */
    volatile ALT_UART_STET_t    STET;                /* ALT_UART_STET */
    volatile ALT_UART_HTX_t     HTX;                 /* ALT_UART_HTX */
    volatile ALT_UART_DMASA_t   DMASA;               /* ALT_UART_DMASA */
    volatile uint32_t           _pad_0xac_0xf3[18];  /* *UNDEFINED* */
    volatile ALT_UART_CPR_t     CPR;                 /* ALT_UART_CPR */
    volatile ALT_UART_UCV_t     UCV;                 /* ALT_UART_UCV */
    volatile ALT_UART_CTR_t     CTR;                 /* ALT_UART_CTR */
};

/* The typedef declaration for register group ALT_UART. */
typedef struct ALT_UART_s  ALT_UART_t;
/* The struct declaration for the raw register contents of register group ALT_UART. */
struct ALT_UART_raw_s
{
    volatile uint32_t  RBR;                 /* ALT_UART_RBR */
    volatile uint32_t  IER;                 /* ALT_UART_IER */
    volatile uint32_t  IIR;                 /* ALT_UART_IIR */
    volatile uint32_t  LCR;                 /* ALT_UART_LCR */
    volatile uint32_t  MCR;                 /* ALT_UART_MCR */
    volatile uint32_t  LSR;                 /* ALT_UART_LSR */
    volatile uint32_t  MSR;                 /* ALT_UART_MSR */
    volatile uint32_t  SCR;                 /* ALT_UART_SCR */
    volatile uint32_t  _pad_0x20_0x2f[4];   /* *UNDEFINED* */
    volatile uint32_t  SRBR0;               /* ALT_UART_SRBR0 */
    volatile uint32_t  SRBR1;               /* ALT_UART_SRBR1 */
    volatile uint32_t  SRBR2;               /* ALT_UART_SRBR2 */
    volatile uint32_t  SRBR3;               /* ALT_UART_SRBR3 */
    volatile uint32_t  SRBR4;               /* ALT_UART_SRBR4 */
    volatile uint32_t  SRBR5;               /* ALT_UART_SRBR5 */
    volatile uint32_t  SRBR6;               /* ALT_UART_SRBR6 */
    volatile uint32_t  SRBR7;               /* ALT_UART_SRBR7 */
    volatile uint32_t  SRBR8;               /* ALT_UART_SRBR8 */
    volatile uint32_t  SRBR9;               /* ALT_UART_SRBR9 */
    volatile uint32_t  SRBR10;              /* ALT_UART_SRBR10 */
    volatile uint32_t  SRBR11;              /* ALT_UART_SRBR11 */
    volatile uint32_t  SRBR12;              /* ALT_UART_SRBR12 */
    volatile uint32_t  SRBR13;              /* ALT_UART_SRBR13 */
    volatile uint32_t  SRBR14;              /* ALT_UART_SRBR14 */
    volatile uint32_t  SRBR15;              /* ALT_UART_SRBR15 */
    volatile uint32_t  FAR;                 /* ALT_UART_FAR */
    volatile uint32_t  TFR;                 /* ALT_UART_TFR */
    volatile uint32_t  RFW;                 /* ALT_UART_RFW */
    volatile uint32_t  USR;                 /* ALT_UART_USR */
    volatile uint32_t  TFL;                 /* ALT_UART_TFL */
    volatile uint32_t  RFL;                 /* ALT_UART_RFL */
    volatile uint32_t  SRR;                 /* ALT_UART_SRR */
    volatile uint32_t  SRTS;                /* ALT_UART_SRTS */
    volatile uint32_t  SBCR;                /* ALT_UART_SBCR */
    volatile uint32_t  SDMAM;               /* ALT_UART_SDMAM */
    volatile uint32_t  SFE;                 /* ALT_UART_SFE */
    volatile uint32_t  SRT;                 /* ALT_UART_SRT */
    volatile uint32_t  STET;                /* ALT_UART_STET */
    volatile uint32_t  HTX;                 /* ALT_UART_HTX */
    volatile uint32_t  DMASA;               /* ALT_UART_DMASA */
    volatile uint32_t  _pad_0xac_0xf3[18];  /* *UNDEFINED* */
    volatile uint32_t  CPR;                 /* ALT_UART_CPR */
    volatile uint32_t  UCV;                 /* ALT_UART_UCV */
    volatile uint32_t  CTR;                 /* ALT_UART_CTR */
};

/* The typedef declaration for the raw register contents of register group ALT_UART. */
typedef struct ALT_UART_raw_s  ALT_UART_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_UART_H__ */

