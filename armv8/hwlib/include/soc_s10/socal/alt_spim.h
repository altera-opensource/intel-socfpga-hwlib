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

/* Altera - ALT_SPIM */

#ifndef __ALT_SOCAL_SPIM_H__
#define __ALT_SOCAL_SPIM_H__

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
 * Component : SPIM
 * 
 */
/*
 * Register : Control Register 0 - CTRLR0
 * 
 * Control Register 0:
 * 
 * This register controls the serial data transfer. It is impossible to
 * 
 * write to this register when the DW_apb_ssi is enabled. The DW_apb_ssi
 * 
 * is enabled and disabled by writing to the SSIENR register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [3:0]   | R      | 0x0   | ALT_SPIM_CTRLR0_DFS        
 *  [5:4]   | RW     | 0x0   | ALT_SPIM_CTRLR0_FRF        
 *  [6]     | RW     | 0x0   | ALT_SPIM_CTRLR0_SCPH       
 *  [7]     | RW     | 0x0   | ALT_SPIM_CTRLR0_SCPOL      
 *  [9:8]   | RW     | 0x0   | ALT_SPIM_CTRLR0_TMOD       
 *  [10]    | R      | 0x0   | ALT_SPIM_CTRLR0_RSVD_SLV_OE
 *  [11]    | RW     | 0x0   | ALT_SPIM_CTRLR0_SRL        
 *  [15:12] | RW     | 0x0   | ALT_SPIM_CTRLR0_CFS        
 *  [20:16] | RW     | 0x7   | ALT_SPIM_CTRLR0_DFS_32     
 *  [22:21] | R      | 0x0   | ALT_SPIM_CTRLR0_SPI_FRF    
 *  [31:23] | R      | 0x0   | ALT_SPIM_CTRLR0_RSVD_CTRLR0
 * 
 */
/*
 * Field : DFS
 * 
 * Data Frame Size. This register field is only valid when SSI_MAX_XFER_SIZE is
 * 
 * configured to 16. If SSI_MAX_XFER_SIZE is configured to 32, then writing to this
 * field
 * 
 * will not have any effect.
 * 
 * Selects the data frame length. When the data frame size is programmed to be less
 * than
 * 
 * 16 bits, the receive data are automatically right-justified by the receive
 * logic, with the
 * 
 * upper bits of the receive FIFO zero-padded.
 * 
 * You must right-justify transmit data before writing into the transmit FIFO. The
 * transmit
 * 
 * logic ignores the upper unused bits when transmitting the data
 * 
 * Note: When SSI_SPI_MODE is either set to "Dual" or "Dual/Quad Both" mode
 * and  SPI_FRF  is not set to 2'b00.
 * 
 * DFS value should be multiple of 2 if SPI_FRF = 01, and
 * 
 * DFS value should be multiple of 4 if SPI_FRF = 10.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                
 * :-----------------------------------|:------|:----------------------------
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_04BITS | 0x3   | 04-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_05BITS | 0x4   | 05-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_06BITS | 0x5   | 06-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_07BITS | 0x6   | 07-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_08BITS | 0x7   | 08-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_09BITS | 0x8   | 09-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_10BITS | 0x9   | 10-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_11BITS | 0xa   | 11-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_12BITS | 0xb   | 12-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_13BITS | 0xc   | 13-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_14BITS | 0xd   | 14-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_15BITS | 0xe   | 15-bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_E_FRAME_16BITS | 0xf   | 16-bit serial data transfer
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 04-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_04BITS  0x3
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 05-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_05BITS  0x4
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 06-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_06BITS  0x5
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 07-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_07BITS  0x6
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 08-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_08BITS  0x7
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 09-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_09BITS  0x8
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 10-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_10BITS  0x9
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 11-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_11BITS  0xa
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 12-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_12BITS  0xb
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 13-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_13BITS  0xc
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 14-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_14BITS  0xd
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 15-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_15BITS  0xe
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS
 * 
 * 16-bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_E_FRAME_16BITS  0xf

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_DFS register field. */
#define ALT_SPIM_CTRLR0_DFS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_DFS register field. */
#define ALT_SPIM_CTRLR0_DFS_MSB        3
/* The width in bits of the ALT_SPIM_CTRLR0_DFS register field. */
#define ALT_SPIM_CTRLR0_DFS_WIDTH      4
/* The mask used to set the ALT_SPIM_CTRLR0_DFS register field value. */
#define ALT_SPIM_CTRLR0_DFS_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SPIM_CTRLR0_DFS register field value. */
#define ALT_SPIM_CTRLR0_DFS_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SPIM_CTRLR0_DFS register field. */
#define ALT_SPIM_CTRLR0_DFS_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_DFS field value from a register. */
#define ALT_SPIM_CTRLR0_DFS_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SPIM_CTRLR0_DFS register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_DFS_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : FRF
 * 
 * Frame Format.
 * 
 * Selects which serial protocol transfers the data.
 * 
 * 00 - Motorola SPI
 * 
 * 01 - Texas Instruments SSP
 * 
 * 10 - National Semiconductors Microwire
 * 
 * 11 - Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description                       
 * :------------------------------------|:------|:-----------------------------------
 *  ALT_SPIM_CTRLR0_FRF_E_MOTOROLLA_SPI | 0x0   | Motorolla SPI Frame Format        
 *  ALT_SPIM_CTRLR0_FRF_E_TEXAS_SSP     | 0x1   | Texas Instruments SSP Frame Format
 *  ALT_SPIM_CTRLR0_FRF_E_NS_MICROWIRE  | 0x2   | National Microwire Frame Format   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_FRF
 * 
 * Motorolla SPI Frame Format
 */
#define ALT_SPIM_CTRLR0_FRF_E_MOTOROLLA_SPI 0x0
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_FRF
 * 
 * Texas Instruments SSP Frame Format
 */
#define ALT_SPIM_CTRLR0_FRF_E_TEXAS_SSP     0x1
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_FRF
 * 
 * National Microwire Frame Format
 */
#define ALT_SPIM_CTRLR0_FRF_E_NS_MICROWIRE  0x2

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_FRF register field. */
#define ALT_SPIM_CTRLR0_FRF_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_FRF register field. */
#define ALT_SPIM_CTRLR0_FRF_MSB        5
/* The width in bits of the ALT_SPIM_CTRLR0_FRF register field. */
#define ALT_SPIM_CTRLR0_FRF_WIDTH      2
/* The mask used to set the ALT_SPIM_CTRLR0_FRF register field value. */
#define ALT_SPIM_CTRLR0_FRF_SET_MSK    0x00000030
/* The mask used to clear the ALT_SPIM_CTRLR0_FRF register field value. */
#define ALT_SPIM_CTRLR0_FRF_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SPIM_CTRLR0_FRF register field. */
#define ALT_SPIM_CTRLR0_FRF_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_FRF field value from a register. */
#define ALT_SPIM_CTRLR0_FRF_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SPIM_CTRLR0_FRF register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_FRF_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : SCPH
 * 
 * Serial Clock Phase.
 * 
 * Valid when the frame format (FRF) is set to Motorola SPI. The serial
 * 
 * clock phase selects the relationship of the serial clock with the slave
 * 
 * select signal. When SCPH = 0, data are captured on the first edge of
 * 
 * the serial clock. When SCPH = 1, the serial clock starts toggling one
 * 
 * cycle after the slave select line is activated, and data are captured
 * 
 * on the second edge of the serial clock.
 * 
 * 0: Serial clock toggles in middle of first data bit
 * 
 * 1: Serial clock toggles at start of first data bit
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description                         
 * :----------------------------------|:------|:-------------------------------------
 *  ALT_SPIM_CTRLR0_SCPH_E_MIDDLE_BIT | 0x0   | Clock toggles in middle of first bit
 *  ALT_SPIM_CTRLR0_SCPH_E_START_BIT  | 0x1   | Clock toggles at start  of first bit
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_SCPH
 * 
 * Clock toggles in middle of first bit
 */
#define ALT_SPIM_CTRLR0_SCPH_E_MIDDLE_BIT   0x0
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_SCPH
 * 
 * Clock toggles at start  of first bit
 */
#define ALT_SPIM_CTRLR0_SCPH_E_START_BIT    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_SCPH register field. */
#define ALT_SPIM_CTRLR0_SCPH_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_SCPH register field. */
#define ALT_SPIM_CTRLR0_SCPH_MSB        6
/* The width in bits of the ALT_SPIM_CTRLR0_SCPH register field. */
#define ALT_SPIM_CTRLR0_SCPH_WIDTH      1
/* The mask used to set the ALT_SPIM_CTRLR0_SCPH register field value. */
#define ALT_SPIM_CTRLR0_SCPH_SET_MSK    0x00000040
/* The mask used to clear the ALT_SPIM_CTRLR0_SCPH register field value. */
#define ALT_SPIM_CTRLR0_SCPH_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SPIM_CTRLR0_SCPH register field. */
#define ALT_SPIM_CTRLR0_SCPH_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_SCPH field value from a register. */
#define ALT_SPIM_CTRLR0_SCPH_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SPIM_CTRLR0_SCPH register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_SCPH_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : SCPOL
 * 
 * Serial Clock Polarity.
 * 
 * Valid when the frame format (FRF) is set to Motorola SPI. Used to select
 * 
 * the polarity of the inactive serial clock, which is held inactive when
 * 
 * the DW_apb_ssi master is not actively transferring data on the serial bus.
 * 
 * 0 - Inactive state of serial clock is low
 * 
 * 1 - Inactive state of serial clock is high
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                
 * :--------------------------------------|:------|:----------------------------
 *  ALT_SPIM_CTRLR0_SCPOL_E_INACTIVE_HIGH | 0x0   | Clock is inactive when high
 *  ALT_SPIM_CTRLR0_SCPOL_E_INACTIVE_LOW  | 0x1   | Clock is inactive when low 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_SCPOL
 * 
 * Clock is inactive when high
 */
#define ALT_SPIM_CTRLR0_SCPOL_E_INACTIVE_HIGH   0x0
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_SCPOL
 * 
 * Clock is inactive when low
 */
#define ALT_SPIM_CTRLR0_SCPOL_E_INACTIVE_LOW    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_SCPOL register field. */
#define ALT_SPIM_CTRLR0_SCPOL_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_SCPOL register field. */
#define ALT_SPIM_CTRLR0_SCPOL_MSB        7
/* The width in bits of the ALT_SPIM_CTRLR0_SCPOL register field. */
#define ALT_SPIM_CTRLR0_SCPOL_WIDTH      1
/* The mask used to set the ALT_SPIM_CTRLR0_SCPOL register field value. */
#define ALT_SPIM_CTRLR0_SCPOL_SET_MSK    0x00000080
/* The mask used to clear the ALT_SPIM_CTRLR0_SCPOL register field value. */
#define ALT_SPIM_CTRLR0_SCPOL_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SPIM_CTRLR0_SCPOL register field. */
#define ALT_SPIM_CTRLR0_SCPOL_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_SCPOL field value from a register. */
#define ALT_SPIM_CTRLR0_SCPOL_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SPIM_CTRLR0_SCPOL register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_SCPOL_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : TMOD
 * 
 * Transfer Mode.
 * 
 * Selects the mode of transfer for serial communication. This field does
 * 
 * not affect the transfer duplicity. Only indicates whether the receive or
 * 
 * transmit data are valid. In transmit-only mode, data received from the
 * 
 * external device is not valid and is not stored in the receive FIFO memory;
 * 
 * it is overwritten on the next transfer. In receive-only mode, transmitted
 * 
 * data are not valid. After the first write to the transmit FIFO, the same
 * 
 * word is retransmitted for the duration of the transfer. In
 * 
 * transmit-and-receive mode, both transmit and receive data are valid.
 * 
 * The transfer continues until the transmit FIFO is empty. Data received
 * 
 * from the external device are stored into the receive FIFO memory, where
 * 
 * it can be accessed by the host processor.
 * 
 * 00 - Transmit & Receive
 * 
 * 01 - Transmit Only
 * 
 * 10 - Receive Only
 * 
 * 11 - EEPROM Read
 * 
 * When SSI_SPI_MODE is either set to "Dual" or "Dual/Quad Both" mode and
 * SPI_FRF  is not set to 2'b00.
 * 
 * There are only two valid combinations:
 * 
 * 01  Read
 * 
 * 10 - Write
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description       
 * :-----------------------------------|:------|:-------------------
 *  ALT_SPIM_CTRLR0_TMOD_E_TX_AND_RX   | 0x0   | Transmit & receive
 *  ALT_SPIM_CTRLR0_TMOD_E_TX_ONLY     | 0x1   | Transmit only mode
 *  ALT_SPIM_CTRLR0_TMOD_E_RX_ONLY     | 0x2   | Receive  only mode
 *  ALT_SPIM_CTRLR0_TMOD_E_EEPROM_READ | 0x3   | EEPROM  Read  mode
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_TMOD
 * 
 * Transmit & receive
 */
#define ALT_SPIM_CTRLR0_TMOD_E_TX_AND_RX    0x0
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_TMOD
 * 
 * Transmit only mode
 */
#define ALT_SPIM_CTRLR0_TMOD_E_TX_ONLY      0x1
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_TMOD
 * 
 * Receive  only mode
 */
#define ALT_SPIM_CTRLR0_TMOD_E_RX_ONLY      0x2
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_TMOD
 * 
 * EEPROM  Read  mode
 */
#define ALT_SPIM_CTRLR0_TMOD_E_EEPROM_READ  0x3

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_TMOD register field. */
#define ALT_SPIM_CTRLR0_TMOD_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_TMOD register field. */
#define ALT_SPIM_CTRLR0_TMOD_MSB        9
/* The width in bits of the ALT_SPIM_CTRLR0_TMOD register field. */
#define ALT_SPIM_CTRLR0_TMOD_WIDTH      2
/* The mask used to set the ALT_SPIM_CTRLR0_TMOD register field value. */
#define ALT_SPIM_CTRLR0_TMOD_SET_MSK    0x00000300
/* The mask used to clear the ALT_SPIM_CTRLR0_TMOD register field value. */
#define ALT_SPIM_CTRLR0_TMOD_CLR_MSK    0xfffffcff
/* The reset value of the ALT_SPIM_CTRLR0_TMOD register field. */
#define ALT_SPIM_CTRLR0_TMOD_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_TMOD field value from a register. */
#define ALT_SPIM_CTRLR0_TMOD_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_SPIM_CTRLR0_TMOD register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_TMOD_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : RSVD_SLV_OE
 * 
 * Reserved field- Read-only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_RSVD_SLV_OE register field. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_RSVD_SLV_OE register field. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_MSB        10
/* The width in bits of the ALT_SPIM_CTRLR0_RSVD_SLV_OE register field. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_WIDTH      1
/* The mask used to set the ALT_SPIM_CTRLR0_RSVD_SLV_OE register field value. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_SET_MSK    0x00000400
/* The mask used to clear the ALT_SPIM_CTRLR0_RSVD_SLV_OE register field value. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SPIM_CTRLR0_RSVD_SLV_OE register field. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_RSVD_SLV_OE field value from a register. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SPIM_CTRLR0_RSVD_SLV_OE register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_RSVD_SLV_OE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : SRL
 * 
 * Shift Register Loop. Used for testing purposes only. When internally
 * 
 * active, connects the transmit shift register output to the receive
 * 
 * shift register input.
 * 
 * 0 - Normal Mode Operation
 * 
 * 1 - Test Mode Operation
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                           
 * :-----------------------------------|:------|:---------------------------------------
 *  ALT_SPIM_CTRLR0_SRL_E_NORMAL_MODE  | 0x0   | Normal mode operation                 
 *  ALT_SPIM_CTRLR0_SRL_E_TESTING_MODE | 0x1   | Test mode: Tx & Rx shift reg connected
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_SRL
 * 
 * Normal mode operation
 */
#define ALT_SPIM_CTRLR0_SRL_E_NORMAL_MODE   0x0
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_SRL
 * 
 * Test mode: Tx & Rx shift reg connected
 */
#define ALT_SPIM_CTRLR0_SRL_E_TESTING_MODE  0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_SRL register field. */
#define ALT_SPIM_CTRLR0_SRL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_SRL register field. */
#define ALT_SPIM_CTRLR0_SRL_MSB        11
/* The width in bits of the ALT_SPIM_CTRLR0_SRL register field. */
#define ALT_SPIM_CTRLR0_SRL_WIDTH      1
/* The mask used to set the ALT_SPIM_CTRLR0_SRL register field value. */
#define ALT_SPIM_CTRLR0_SRL_SET_MSK    0x00000800
/* The mask used to clear the ALT_SPIM_CTRLR0_SRL register field value. */
#define ALT_SPIM_CTRLR0_SRL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SPIM_CTRLR0_SRL register field. */
#define ALT_SPIM_CTRLR0_SRL_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_SRL field value from a register. */
#define ALT_SPIM_CTRLR0_SRL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SPIM_CTRLR0_SRL register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_SRL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : CFS
 * 
 * Control Frame Size. Selects the length of the control word for the
 * 
 * Microwire frame format
 * 
 * When SSI_SPI_MODE is either set to "Dual" or "Dual/Quad Both" mode and
 * SPI_FRF  is not set to 2'b00.
 * 
 * This bit defines Length of Address to be transmitted. Refer Table 4 6 for field
 * decode.
 * 
 * Only after this much bits are programmed in to the FIFO the transfer can begin.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description        
 * :----------------------------------|:------|:--------------------
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_01_BIT | 0x0   | 01-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_02_BIT | 0x1   | 02-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_03_BIT | 0x2   | 03-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_04_BIT | 0x3   | 04-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_05_BIT | 0x4   | 05-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_06_BIT | 0x5   | 06-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_07_BIT | 0x6   | 07-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_08_BIT | 0x7   | 08-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_09_BIT | 0x8   | 09-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_10_BIT | 0x9   | 10-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_11_BIT | 0xa   | 11-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_12_BIT | 0xb   | 12-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_13_BIT | 0xc   | 13-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_14_BIT | 0xd   | 14-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_15_BIT | 0xe   | 15-bit Control Word
 *  ALT_SPIM_CTRLR0_CFS_E_SIZE_16_BIT | 0xf   | 16-bit Control Word
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 01-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_01_BIT   0x0
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 02-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_02_BIT   0x1
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 03-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_03_BIT   0x2
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 04-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_04_BIT   0x3
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 05-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_05_BIT   0x4
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 06-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_06_BIT   0x5
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 07-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_07_BIT   0x6
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 08-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_08_BIT   0x7
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 09-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_09_BIT   0x8
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 10-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_10_BIT   0x9
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 11-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_11_BIT   0xa
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 12-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_12_BIT   0xb
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 13-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_13_BIT   0xc
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 14-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_14_BIT   0xd
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 15-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_15_BIT   0xe
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_CFS
 * 
 * 16-bit Control Word
 */
#define ALT_SPIM_CTRLR0_CFS_E_SIZE_16_BIT   0xf

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_CFS register field. */
#define ALT_SPIM_CTRLR0_CFS_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_CFS register field. */
#define ALT_SPIM_CTRLR0_CFS_MSB        15
/* The width in bits of the ALT_SPIM_CTRLR0_CFS register field. */
#define ALT_SPIM_CTRLR0_CFS_WIDTH      4
/* The mask used to set the ALT_SPIM_CTRLR0_CFS register field value. */
#define ALT_SPIM_CTRLR0_CFS_SET_MSK    0x0000f000
/* The mask used to clear the ALT_SPIM_CTRLR0_CFS register field value. */
#define ALT_SPIM_CTRLR0_CFS_CLR_MSK    0xffff0fff
/* The reset value of the ALT_SPIM_CTRLR0_CFS register field. */
#define ALT_SPIM_CTRLR0_CFS_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_CFS field value from a register. */
#define ALT_SPIM_CTRLR0_CFS_GET(value) (((value) & 0x0000f000) >> 12)
/* Produces a ALT_SPIM_CTRLR0_CFS register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_CFS_SET(value) (((value) << 12) & 0x0000f000)

/*
 * Field : DFS_32
 * 
 * Data Frame Size in 32-bit transfer size mode.
 * 
 * Selects the data frame length. When the data frame size is programmed
 * 
 * to be less than 32 bits, the receive data are automatically
 * 
 * right-justified by the receive logic, with the upper bits of the receive
 * 
 * FIFO zero-padded. You must right-justify transmit data before writing
 * 
 * into the transmit FIFO. The transmit logic ignores the upper unused
 * 
 * bits when transmitting the data
 * 
 * Note: When SSI_SPI_MODE is either set to "Dual" or "Dual/Quad Both" mode
 * and  SPI_FRF  is not set to 2'b00.
 * 
 * DFS value should be multiple of 2 if SPI_FRF = 01, and
 * 
 * DFS value should be multiple of 4 if SPI_FRF = 10.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                 
 * :--------------------------------------|:------|:-----------------------------
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_04BITS | 0x3   | 04- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_05BITS | 0x4   | 05- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_06BITS | 0x5   | 06- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_07BITS | 0x6   | 07- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_08BITS | 0x7   | 08- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_09BITS | 0x8   | 09- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_10BITS | 0x9   | 10- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_11BITS | 0xa   | 11- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_12BITS | 0xb   | 12- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_13BITS | 0xc   | 13- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_14BITS | 0xd   | 14- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_15BITS | 0xe   | 15- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_16BITS | 0xf   | 16- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_17BITS | 0x10  | 17- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_18BITS | 0x11  | 18- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_19BITS | 0x12  | 19- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_20BITS | 0x13  | 20- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_21BITS | 0x14  | 21- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_22BITS | 0x15  | 22- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_23BITS | 0x16  | 23- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_24BITS | 0x17  | 24- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_25BITS | 0x18  | 25- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_26BITS | 0x19  | 26- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_27BITS | 0x1a  | 27- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_28BITS | 0x1b  | 28- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_29BITS | 0x1c  | 29- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_30BITS | 0x1d  | 30- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_31BITS | 0x1e  | 31- bit serial data transfer
 *  ALT_SPIM_CTRLR0_DFS_32_E_FRAME_32BITS | 0x1f  | 32- bit serial data transfer
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 04- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_04BITS   0x3
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 05- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_05BITS   0x4
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 06- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_06BITS   0x5
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 07- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_07BITS   0x6
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 08- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_08BITS   0x7
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 09- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_09BITS   0x8
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 10- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_10BITS   0x9
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 11- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_11BITS   0xa
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 12- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_12BITS   0xb
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 13- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_13BITS   0xc
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 14- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_14BITS   0xd
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 15- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_15BITS   0xe
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 16- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_16BITS   0xf
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 17- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_17BITS   0x10
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 18- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_18BITS   0x11
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 19- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_19BITS   0x12
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 20- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_20BITS   0x13
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 21- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_21BITS   0x14
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 22- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_22BITS   0x15
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 23- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_23BITS   0x16
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 24- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_24BITS   0x17
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 25- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_25BITS   0x18
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 26- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_26BITS   0x19
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 27- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_27BITS   0x1a
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 28- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_28BITS   0x1b
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 29- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_29BITS   0x1c
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 30- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_30BITS   0x1d
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 31- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_31BITS   0x1e
/*
 * Enumerated value for register field ALT_SPIM_CTRLR0_DFS_32
 * 
 * 32- bit serial data transfer
 */
#define ALT_SPIM_CTRLR0_DFS_32_E_FRAME_32BITS   0x1f

/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_DFS_32 register field. */
#define ALT_SPIM_CTRLR0_DFS_32_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_DFS_32 register field. */
#define ALT_SPIM_CTRLR0_DFS_32_MSB        20
/* The width in bits of the ALT_SPIM_CTRLR0_DFS_32 register field. */
#define ALT_SPIM_CTRLR0_DFS_32_WIDTH      5
/* The mask used to set the ALT_SPIM_CTRLR0_DFS_32 register field value. */
#define ALT_SPIM_CTRLR0_DFS_32_SET_MSK    0x001f0000
/* The mask used to clear the ALT_SPIM_CTRLR0_DFS_32 register field value. */
#define ALT_SPIM_CTRLR0_DFS_32_CLR_MSK    0xffe0ffff
/* The reset value of the ALT_SPIM_CTRLR0_DFS_32 register field. */
#define ALT_SPIM_CTRLR0_DFS_32_RESET      0x7
/* Extracts the ALT_SPIM_CTRLR0_DFS_32 field value from a register. */
#define ALT_SPIM_CTRLR0_DFS_32_GET(value) (((value) & 0x001f0000) >> 16)
/* Produces a ALT_SPIM_CTRLR0_DFS_32 register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_DFS_32_SET(value) (((value) << 16) & 0x001f0000)

/*
 * Field : SPI_FRF
 * 
 * SPI Frame Format:
 * 
 * Selects data frame format for Transmitting/Receiving the data
 * 
 * 00 - Standard SPI Format
 * 
 * 01 - Dual SPI Format
 * 
 * 10 - Quad SPI Format
 * 
 * Bits only valid when SSI_SPI_MODE is either set to "Dual" or "Dual/Quad
 * Both" mode.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_SPI_FRF register field. */
#define ALT_SPIM_CTRLR0_SPI_FRF_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_SPI_FRF register field. */
#define ALT_SPIM_CTRLR0_SPI_FRF_MSB        22
/* The width in bits of the ALT_SPIM_CTRLR0_SPI_FRF register field. */
#define ALT_SPIM_CTRLR0_SPI_FRF_WIDTH      2
/* The mask used to set the ALT_SPIM_CTRLR0_SPI_FRF register field value. */
#define ALT_SPIM_CTRLR0_SPI_FRF_SET_MSK    0x00600000
/* The mask used to clear the ALT_SPIM_CTRLR0_SPI_FRF register field value. */
#define ALT_SPIM_CTRLR0_SPI_FRF_CLR_MSK    0xff9fffff
/* The reset value of the ALT_SPIM_CTRLR0_SPI_FRF register field. */
#define ALT_SPIM_CTRLR0_SPI_FRF_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_SPI_FRF field value from a register. */
#define ALT_SPIM_CTRLR0_SPI_FRF_GET(value) (((value) & 0x00600000) >> 21)
/* Produces a ALT_SPIM_CTRLR0_SPI_FRF register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_SPI_FRF_SET(value) (((value) << 21) & 0x00600000)

/*
 * Field : RSVD_CTRLR0
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR0_RSVD_CTRLR0 register field. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR0_RSVD_CTRLR0 register field. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_MSB        31
/* The width in bits of the ALT_SPIM_CTRLR0_RSVD_CTRLR0 register field. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_WIDTH      9
/* The mask used to set the ALT_SPIM_CTRLR0_RSVD_CTRLR0 register field value. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_SET_MSK    0xff800000
/* The mask used to clear the ALT_SPIM_CTRLR0_RSVD_CTRLR0 register field value. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_CLR_MSK    0x007fffff
/* The reset value of the ALT_SPIM_CTRLR0_RSVD_CTRLR0 register field. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR0_RSVD_CTRLR0 field value from a register. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_GET(value) (((value) & 0xff800000) >> 23)
/* Produces a ALT_SPIM_CTRLR0_RSVD_CTRLR0 register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR0_RSVD_CTRLR0_SET(value) (((value) << 23) & 0xff800000)

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
 * The struct declaration for register ALT_SPIM_CTRLR0.
 */
struct ALT_SPIM_CTRLR0_s
{
    const volatile uint32_t  DFS         :  4;  /* ALT_SPIM_CTRLR0_DFS */
    volatile uint32_t        FRF         :  2;  /* ALT_SPIM_CTRLR0_FRF */
    volatile uint32_t        SCPH        :  1;  /* ALT_SPIM_CTRLR0_SCPH */
    volatile uint32_t        SCPOL       :  1;  /* ALT_SPIM_CTRLR0_SCPOL */
    volatile uint32_t        TMOD        :  2;  /* ALT_SPIM_CTRLR0_TMOD */
    const volatile uint32_t  RSVD_SLV_OE :  1;  /* ALT_SPIM_CTRLR0_RSVD_SLV_OE */
    volatile uint32_t        SRL         :  1;  /* ALT_SPIM_CTRLR0_SRL */
    volatile uint32_t        CFS         :  4;  /* ALT_SPIM_CTRLR0_CFS */
    volatile uint32_t        DFS_32      :  5;  /* ALT_SPIM_CTRLR0_DFS_32 */
    const volatile uint32_t  SPI_FRF     :  2;  /* ALT_SPIM_CTRLR0_SPI_FRF */
    const volatile uint32_t  RSVD_CTRLR0 :  9;  /* ALT_SPIM_CTRLR0_RSVD_CTRLR0 */
};

/* The typedef declaration for register ALT_SPIM_CTRLR0. */
typedef struct ALT_SPIM_CTRLR0_s  ALT_SPIM_CTRLR0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_CTRLR0 register. */
#define ALT_SPIM_CTRLR0_RESET       0x00070000
/* The byte offset of the ALT_SPIM_CTRLR0 register from the beginning of the component. */
#define ALT_SPIM_CTRLR0_OFST        0x0
/* The address of the ALT_SPIM_CTRLR0 register. */
#define ALT_SPIM_CTRLR0_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_CTRLR0_OFST))

/*
 * Register : Control Register 1 - CTRLR1
 * 
 * Control Register 1
 * 
 * This register exists only when the DW_apb_ssi is configured as a
 * 
 * master device. When the DW_apb_ssi is configured as a serial slave,
 * 
 * writing to this location has no effect; reading from this location
 * 
 * returns 0. Control register 1 controls the end of serial transfers
 * 
 * when in receive-only mode. It is impossible to write to this
 * 
 * register when the DW_apb_ssi is enabled. The DW_apb_ssi is enabled
 * 
 * and disabled by writing to the SSIENR register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [15:0]  | RW     | 0x0   | ALT_SPIM_CTRLR1_NDF        
 *  [31:16] | R      | 0x0   | ALT_SPIM_CTRLR1_RSVD_CTRLR1
 * 
 */
/*
 * Field : NDF
 * 
 * Number of Data Frames.
 * 
 * When TMOD = 10 or TMOD = 11 , this register field sets the number of data frames
 * to
 * 
 * be continuously received by the DW_apb_ssi. The DW_apb_ssi continues
 * 
 * to receive serial data until the number of data frames received is
 * 
 * equal to this register value plus 1, which enables you to receive up
 * 
 * to 64 KB of data in a continuous transfer. When the DW_apb_ssi is
 * 
 * configured as a serial slave, the transfer continues for as long as
 * 
 * the slave is selected. Therefore, this register serves no purpose and
 * 
 * is not present when the DW_apb_ssi is configured as a serial slave.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR1_NDF register field. */
#define ALT_SPIM_CTRLR1_NDF_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR1_NDF register field. */
#define ALT_SPIM_CTRLR1_NDF_MSB        15
/* The width in bits of the ALT_SPIM_CTRLR1_NDF register field. */
#define ALT_SPIM_CTRLR1_NDF_WIDTH      16
/* The mask used to set the ALT_SPIM_CTRLR1_NDF register field value. */
#define ALT_SPIM_CTRLR1_NDF_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SPIM_CTRLR1_NDF register field value. */
#define ALT_SPIM_CTRLR1_NDF_CLR_MSK    0xffff0000
/* The reset value of the ALT_SPIM_CTRLR1_NDF register field. */
#define ALT_SPIM_CTRLR1_NDF_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR1_NDF field value from a register. */
#define ALT_SPIM_CTRLR1_NDF_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SPIM_CTRLR1_NDF register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR1_NDF_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : RSVD_CTRLR1
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_CTRLR1_RSVD_CTRLR1 register field. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SPIM_CTRLR1_RSVD_CTRLR1 register field. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_MSB        31
/* The width in bits of the ALT_SPIM_CTRLR1_RSVD_CTRLR1 register field. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_WIDTH      16
/* The mask used to set the ALT_SPIM_CTRLR1_RSVD_CTRLR1 register field value. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SPIM_CTRLR1_RSVD_CTRLR1 register field value. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SPIM_CTRLR1_RSVD_CTRLR1 register field. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_RESET      0x0
/* Extracts the ALT_SPIM_CTRLR1_RSVD_CTRLR1 field value from a register. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SPIM_CTRLR1_RSVD_CTRLR1 register field value suitable for setting the register. */
#define ALT_SPIM_CTRLR1_RSVD_CTRLR1_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SPIM_CTRLR1.
 */
struct ALT_SPIM_CTRLR1_s
{
    volatile uint32_t        NDF         : 16;  /* ALT_SPIM_CTRLR1_NDF */
    const volatile uint32_t  RSVD_CTRLR1 : 16;  /* ALT_SPIM_CTRLR1_RSVD_CTRLR1 */
};

/* The typedef declaration for register ALT_SPIM_CTRLR1. */
typedef struct ALT_SPIM_CTRLR1_s  ALT_SPIM_CTRLR1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_CTRLR1 register. */
#define ALT_SPIM_CTRLR1_RESET       0x00000000
/* The byte offset of the ALT_SPIM_CTRLR1 register from the beginning of the component. */
#define ALT_SPIM_CTRLR1_OFST        0x4
/* The address of the ALT_SPIM_CTRLR1 register. */
#define ALT_SPIM_CTRLR1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_CTRLR1_OFST))

/*
 * Register : SSI Enable Register - SSIENR
 * 
 * SSI Enable Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | ALT_SPIM_SSIENR_SSI_EN     
 *  [31:1] | R      | 0x0   | ALT_SPIM_SSIENR_RSVD_SSIENR
 * 
 */
/*
 * Field : SSI_EN
 * 
 * SSI Enable. Enables and disables all DW_apb_ssi operations. When
 * 
 * disabled, all serial transfers are halted immediately. Transmit and
 * 
 * receive FIFO buffers are cleared when the device is disabled. It is
 * 
 * impossible to program some of the DW_apb_ssi control registers when
 * 
 * enabled. When disabled, the ssi_sleep output is set (after delay) to
 * 
 * inform the system that it is safe to remove the ssi_clk, thus saving
 * 
 * power consumption in the system.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description             
 * :---------------------------------|:------|:-------------------------
 *  ALT_SPIM_SSIENR_SSI_EN_E_DISABLE | 0x0   | Disables Serial Transfer
 *  ALT_SPIM_SSIENR_SSI_EN_E_ENABLED | 0x1   | Enables  Serial Transfer
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SSIENR_SSI_EN
 * 
 * Disables Serial Transfer
 */
#define ALT_SPIM_SSIENR_SSI_EN_E_DISABLE    0x0
/*
 * Enumerated value for register field ALT_SPIM_SSIENR_SSI_EN
 * 
 * Enables  Serial Transfer
 */
#define ALT_SPIM_SSIENR_SSI_EN_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SSIENR_SSI_EN register field. */
#define ALT_SPIM_SSIENR_SSI_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SSIENR_SSI_EN register field. */
#define ALT_SPIM_SSIENR_SSI_EN_MSB        0
/* The width in bits of the ALT_SPIM_SSIENR_SSI_EN register field. */
#define ALT_SPIM_SSIENR_SSI_EN_WIDTH      1
/* The mask used to set the ALT_SPIM_SSIENR_SSI_EN register field value. */
#define ALT_SPIM_SSIENR_SSI_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_SSIENR_SSI_EN register field value. */
#define ALT_SPIM_SSIENR_SSI_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_SSIENR_SSI_EN register field. */
#define ALT_SPIM_SSIENR_SSI_EN_RESET      0x0
/* Extracts the ALT_SPIM_SSIENR_SSI_EN field value from a register. */
#define ALT_SPIM_SSIENR_SSI_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_SSIENR_SSI_EN register field value suitable for setting the register. */
#define ALT_SPIM_SSIENR_SSI_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_SSIENR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_SSIENR_RSVD_SSIENR register field. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SSIENR_RSVD_SSIENR register field. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_MSB        31
/* The width in bits of the ALT_SPIM_SSIENR_RSVD_SSIENR register field. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_WIDTH      31
/* The mask used to set the ALT_SPIM_SSIENR_RSVD_SSIENR register field value. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_SPIM_SSIENR_RSVD_SSIENR register field value. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_CLR_MSK    0x00000001
/* The reset value of the ALT_SPIM_SSIENR_RSVD_SSIENR register field. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_RESET      0x0
/* Extracts the ALT_SPIM_SSIENR_RSVD_SSIENR field value from a register. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_SPIM_SSIENR_RSVD_SSIENR register field value suitable for setting the register. */
#define ALT_SPIM_SSIENR_RSVD_SSIENR_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_SPIM_SSIENR.
 */
struct ALT_SPIM_SSIENR_s
{
    volatile uint32_t        SSI_EN      :  1;  /* ALT_SPIM_SSIENR_SSI_EN */
    const volatile uint32_t  RSVD_SSIENR : 31;  /* ALT_SPIM_SSIENR_RSVD_SSIENR */
};

/* The typedef declaration for register ALT_SPIM_SSIENR. */
typedef struct ALT_SPIM_SSIENR_s  ALT_SPIM_SSIENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_SSIENR register. */
#define ALT_SPIM_SSIENR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_SSIENR register from the beginning of the component. */
#define ALT_SPIM_SSIENR_OFST        0x8
/* The address of the ALT_SPIM_SSIENR register. */
#define ALT_SPIM_SSIENR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_SSIENR_OFST))

/*
 * Register : Microwire Control Register - MWCR
 * 
 * Microwire Control Register.
 * 
 * This register controls the direction of the data word for the half-duplex
 * 
 * Microwire serial protocol. It is impossible to write to this register
 * 
 * when the DW_apb_ssi is enabled. The DW_apb_ssi is enabled and disabled by
 * 
 * writing to the SSIENR register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description            
 * :-------|:-------|:------|:------------------------
 *  [0]    | RW     | 0x0   | ALT_SPIM_MWCR_MWMOD    
 *  [1]    | RW     | 0x0   | ALT_SPIM_MWCR_MDD      
 *  [2]    | RW     | 0x0   | ALT_SPIM_MWCR_MHS      
 *  [31:3] | R      | 0x0   | ALT_SPIM_MWCR_RSVD_MWCR
 * 
 */
/*
 * Field : MWMOD
 * 
 * Microwire Transfer Mode.
 * 
 * Defines whether the Microwire transfer is sequential or non-sequential.
 * 
 * When sequential mode is used, only one control word is needed to
 * 
 * transmit or receive a block of data words. When non-sequential mode is
 * 
 * used, there must be a control word for each data word that is
 * 
 * transmitted or received.
 * 
 * 0: non-sequential transfer
 * 
 * 1: sequential transfer
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                      
 * :-------------------------------------|:------|:----------------------------------
 *  ALT_SPIM_MWCR_MWMOD_E_NON_SEQUENTIAL | 0x0   | Non-Sequential Microwire Transfer
 *  ALT_SPIM_MWCR_MWMOD_E_SEQUENTIAL     | 0x1   | Sequential Microwire Transfer    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_MWCR_MWMOD
 * 
 * Non-Sequential Microwire Transfer
 */
#define ALT_SPIM_MWCR_MWMOD_E_NON_SEQUENTIAL    0x0
/*
 * Enumerated value for register field ALT_SPIM_MWCR_MWMOD
 * 
 * Sequential Microwire Transfer
 */
#define ALT_SPIM_MWCR_MWMOD_E_SEQUENTIAL        0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_MWCR_MWMOD register field. */
#define ALT_SPIM_MWCR_MWMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_MWCR_MWMOD register field. */
#define ALT_SPIM_MWCR_MWMOD_MSB        0
/* The width in bits of the ALT_SPIM_MWCR_MWMOD register field. */
#define ALT_SPIM_MWCR_MWMOD_WIDTH      1
/* The mask used to set the ALT_SPIM_MWCR_MWMOD register field value. */
#define ALT_SPIM_MWCR_MWMOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_MWCR_MWMOD register field value. */
#define ALT_SPIM_MWCR_MWMOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_MWCR_MWMOD register field. */
#define ALT_SPIM_MWCR_MWMOD_RESET      0x0
/* Extracts the ALT_SPIM_MWCR_MWMOD field value from a register. */
#define ALT_SPIM_MWCR_MWMOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_MWCR_MWMOD register field value suitable for setting the register. */
#define ALT_SPIM_MWCR_MWMOD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : MDD
 * 
 * Microwire Control.
 * 
 * Defines the direction of the data word when the Microwire serial protocol
 * 
 * is used. When this bit is set to 0, the data word is received by the
 * 
 * DW_apb_ssi MacroCell from the external serial device. When this bit is
 * 
 * set to 1, the data word is transmitted from the DW_apb_ssi MacroCell to
 * 
 * the external serial device.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description       
 * :-----------------------------|:------|:-------------------
 *  ALT_SPIM_MWCR_MDD_E_RECEIVE  | 0x0   | SSI  receives data
 *  ALT_SPIM_MWCR_MDD_E_TRANSMIT | 0x1   | SSI transmits data
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_MWCR_MDD
 * 
 * SSI  receives data
 */
#define ALT_SPIM_MWCR_MDD_E_RECEIVE     0x0
/*
 * Enumerated value for register field ALT_SPIM_MWCR_MDD
 * 
 * SSI transmits data
 */
#define ALT_SPIM_MWCR_MDD_E_TRANSMIT    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_MWCR_MDD register field. */
#define ALT_SPIM_MWCR_MDD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_MWCR_MDD register field. */
#define ALT_SPIM_MWCR_MDD_MSB        1
/* The width in bits of the ALT_SPIM_MWCR_MDD register field. */
#define ALT_SPIM_MWCR_MDD_WIDTH      1
/* The mask used to set the ALT_SPIM_MWCR_MDD register field value. */
#define ALT_SPIM_MWCR_MDD_SET_MSK    0x00000002
/* The mask used to clear the ALT_SPIM_MWCR_MDD register field value. */
#define ALT_SPIM_MWCR_MDD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SPIM_MWCR_MDD register field. */
#define ALT_SPIM_MWCR_MDD_RESET      0x0
/* Extracts the ALT_SPIM_MWCR_MDD field value from a register. */
#define ALT_SPIM_MWCR_MDD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SPIM_MWCR_MDD register field value suitable for setting the register. */
#define ALT_SPIM_MWCR_MDD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : MHS
 * 
 * Microwire Handshaking.
 * 
 * Relevant only when the DW_apb_ssi is configured as a serial-master device.
 * 
 * When configured as a serial slave, this bit field has no functionality.
 * 
 * Used to enable and disable the busy/ready handshaking interface for the
 * 
 * Microwire protocol. When enabled, the DW_apb_ssi checks for a ready status
 * 
 * from the target slave, after the transfer of the last data/control bit,
 * 
 * before clearing the BUSY status in the SR register.
 * 
 * 0: handshaking interface is disabled
 * 
 * 1: handshaking interface is enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description            
 * :----------------------------|:------|:------------------------
 *  ALT_SPIM_MWCR_MHS_E_DISABLE | 0x0   | Disables Handshaking IF
 *  ALT_SPIM_MWCR_MHS_E_ENABLED | 0x1   | Enables  Handshaking IF
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_MWCR_MHS
 * 
 * Disables Handshaking IF
 */
#define ALT_SPIM_MWCR_MHS_E_DISABLE 0x0
/*
 * Enumerated value for register field ALT_SPIM_MWCR_MHS
 * 
 * Enables  Handshaking IF
 */
#define ALT_SPIM_MWCR_MHS_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_MWCR_MHS register field. */
#define ALT_SPIM_MWCR_MHS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SPIM_MWCR_MHS register field. */
#define ALT_SPIM_MWCR_MHS_MSB        2
/* The width in bits of the ALT_SPIM_MWCR_MHS register field. */
#define ALT_SPIM_MWCR_MHS_WIDTH      1
/* The mask used to set the ALT_SPIM_MWCR_MHS register field value. */
#define ALT_SPIM_MWCR_MHS_SET_MSK    0x00000004
/* The mask used to clear the ALT_SPIM_MWCR_MHS register field value. */
#define ALT_SPIM_MWCR_MHS_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SPIM_MWCR_MHS register field. */
#define ALT_SPIM_MWCR_MHS_RESET      0x0
/* Extracts the ALT_SPIM_MWCR_MHS field value from a register. */
#define ALT_SPIM_MWCR_MHS_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SPIM_MWCR_MHS register field value suitable for setting the register. */
#define ALT_SPIM_MWCR_MHS_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RSVD_MWCR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_MWCR_RSVD_MWCR register field. */
#define ALT_SPIM_MWCR_RSVD_MWCR_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SPIM_MWCR_RSVD_MWCR register field. */
#define ALT_SPIM_MWCR_RSVD_MWCR_MSB        31
/* The width in bits of the ALT_SPIM_MWCR_RSVD_MWCR register field. */
#define ALT_SPIM_MWCR_RSVD_MWCR_WIDTH      29
/* The mask used to set the ALT_SPIM_MWCR_RSVD_MWCR register field value. */
#define ALT_SPIM_MWCR_RSVD_MWCR_SET_MSK    0xfffffff8
/* The mask used to clear the ALT_SPIM_MWCR_RSVD_MWCR register field value. */
#define ALT_SPIM_MWCR_RSVD_MWCR_CLR_MSK    0x00000007
/* The reset value of the ALT_SPIM_MWCR_RSVD_MWCR register field. */
#define ALT_SPIM_MWCR_RSVD_MWCR_RESET      0x0
/* Extracts the ALT_SPIM_MWCR_RSVD_MWCR field value from a register. */
#define ALT_SPIM_MWCR_RSVD_MWCR_GET(value) (((value) & 0xfffffff8) >> 3)
/* Produces a ALT_SPIM_MWCR_RSVD_MWCR register field value suitable for setting the register. */
#define ALT_SPIM_MWCR_RSVD_MWCR_SET(value) (((value) << 3) & 0xfffffff8)

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
 * The struct declaration for register ALT_SPIM_MWCR.
 */
struct ALT_SPIM_MWCR_s
{
    volatile uint32_t        MWMOD     :  1;  /* ALT_SPIM_MWCR_MWMOD */
    volatile uint32_t        MDD       :  1;  /* ALT_SPIM_MWCR_MDD */
    volatile uint32_t        MHS       :  1;  /* ALT_SPIM_MWCR_MHS */
    const volatile uint32_t  RSVD_MWCR : 29;  /* ALT_SPIM_MWCR_RSVD_MWCR */
};

/* The typedef declaration for register ALT_SPIM_MWCR. */
typedef struct ALT_SPIM_MWCR_s  ALT_SPIM_MWCR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_MWCR register. */
#define ALT_SPIM_MWCR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_MWCR register from the beginning of the component. */
#define ALT_SPIM_MWCR_OFST        0xc
/* The address of the ALT_SPIM_MWCR register. */
#define ALT_SPIM_MWCR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_MWCR_OFST))

/*
 * Register : Slave Enable Register - SER
 * 
 * Slave Enable Register.
 * 
 * This register is valid only when the DW_apb_ssi is configured as a master
 * 
 * device. When the DW_apb_ssi is configured as a serial slave, writing to
 * 
 * this location has no effect; reading from this location returns 0. The
 * 
 * register enables the individual slave select output lines from the
 * 
 * DW_apb_ssi master. Up to 16 slave-select output pins are available on the
 * 
 * DW_apb_ssi master. You cannot write to this register when DW_apb_ssi is
 * 
 * busy and when SSI_EN = 1.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [3:0]  | RW     | 0x0   | ALT_SPIM_SER_SER     
 *  [31:4] | R      | 0x0   | ALT_SPIM_SER_RSVD_SER
 * 
 */
/*
 * Field : SER
 * 
 * Slave Select Enable Flag.
 * 
 * Each bit in this register corresponds to a slave select line (ss_x_n)
 * 
 * from the DW_apb_ssi master. When a bit in this register is set (1), the
 * 
 * corresponding slave select line from the master is activated when a
 * 
 * serial transfer begins. It should be noted that setting or clearing bits
 * 
 * in this register have no effect on the corresponding slave select outputs
 * 
 * until a transfer is started. Before beginning a transfer, you should
 * 
 * enable the bit in this register that corresponds to the slave device
 * 
 * with which the master wants to communicate. When not operating in
 * 
 * broadcast mode, only one bit in this field should be set.
 * 
 * 1: Selected
 * 
 * 0: Not Selected
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description      
 * :--------------------------------|:------|:------------------
 *  ALT_SPIM_SER_SER_E_NOT_SELECTED | 0x0   | No slave selected
 *  ALT_SPIM_SER_SER_E_SELECTED     | 0x1   | Slave is selected
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SER_SER
 * 
 * No slave selected
 */
#define ALT_SPIM_SER_SER_E_NOT_SELECTED 0x0
/*
 * Enumerated value for register field ALT_SPIM_SER_SER
 * 
 * Slave is selected
 */
#define ALT_SPIM_SER_SER_E_SELECTED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SER_SER register field. */
#define ALT_SPIM_SER_SER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SER_SER register field. */
#define ALT_SPIM_SER_SER_MSB        3
/* The width in bits of the ALT_SPIM_SER_SER register field. */
#define ALT_SPIM_SER_SER_WIDTH      4
/* The mask used to set the ALT_SPIM_SER_SER register field value. */
#define ALT_SPIM_SER_SER_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SPIM_SER_SER register field value. */
#define ALT_SPIM_SER_SER_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SPIM_SER_SER register field. */
#define ALT_SPIM_SER_SER_RESET      0x0
/* Extracts the ALT_SPIM_SER_SER field value from a register. */
#define ALT_SPIM_SER_SER_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SPIM_SER_SER register field value suitable for setting the register. */
#define ALT_SPIM_SER_SER_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : RSVD_SER
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_SER_RSVD_SER register field. */
#define ALT_SPIM_SER_RSVD_SER_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SER_RSVD_SER register field. */
#define ALT_SPIM_SER_RSVD_SER_MSB        31
/* The width in bits of the ALT_SPIM_SER_RSVD_SER register field. */
#define ALT_SPIM_SER_RSVD_SER_WIDTH      28
/* The mask used to set the ALT_SPIM_SER_RSVD_SER register field value. */
#define ALT_SPIM_SER_RSVD_SER_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_SPIM_SER_RSVD_SER register field value. */
#define ALT_SPIM_SER_RSVD_SER_CLR_MSK    0x0000000f
/* The reset value of the ALT_SPIM_SER_RSVD_SER register field. */
#define ALT_SPIM_SER_RSVD_SER_RESET      0x0
/* Extracts the ALT_SPIM_SER_RSVD_SER field value from a register. */
#define ALT_SPIM_SER_RSVD_SER_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_SPIM_SER_RSVD_SER register field value suitable for setting the register. */
#define ALT_SPIM_SER_RSVD_SER_SET(value) (((value) << 4) & 0xfffffff0)

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
 * The struct declaration for register ALT_SPIM_SER.
 */
struct ALT_SPIM_SER_s
{
    volatile uint32_t        SER      :  4;  /* ALT_SPIM_SER_SER */
    const volatile uint32_t  RSVD_SER : 28;  /* ALT_SPIM_SER_RSVD_SER */
};

/* The typedef declaration for register ALT_SPIM_SER. */
typedef struct ALT_SPIM_SER_s  ALT_SPIM_SER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_SER register. */
#define ALT_SPIM_SER_RESET       0x00000000
/* The byte offset of the ALT_SPIM_SER register from the beginning of the component. */
#define ALT_SPIM_SER_OFST        0x10
/* The address of the ALT_SPIM_SER register. */
#define ALT_SPIM_SER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_SER_OFST))

/*
 * Register : Baud Rate Select - BAUDR
 * 
 * Baud Rate Select.
 * 
 * This register is valid only when the DW_apb_ssi is configured as a master
 * 
 * device. When the DW_apb_ssi is configured as a serial slave, writing to
 * 
 * this location has no effect; reading from this location returns 0. The
 * 
 * register derives the frequency of the serial clock that regulates the data
 * 
 * transfer. The 16-bit field in this register defines the ssi_clk divider
 * 
 * value. It is impossible to write to this register when the DW_apb_ssi is
 * 
 * enabled. The DW_apb_ssi is enabled and disabled by writing to the SSIENR
 * 
 * register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description              
 * :--------|:-------|:------|:--------------------------
 *  [15:0]  | RW     | 0x0   | ALT_SPIM_BAUDR_SCKDV     
 *  [31:16] | R      | 0x0   | ALT_SPIM_BAUDR_RSVD_BAUDR
 * 
 */
/*
 * Field : SCKDV
 * 
 * SSI Clock Divider.
 * 
 * The LSB for this field is always set to 0 and is unaffected by a write
 * 
 * operation, which ensures an even value is held in this register. If the
 * 
 * value is 0, the serial output clock (sclk_out) is disabled. The frequency
 * 
 * of the sclk_out is derived from the following equation:
 * 
 * Fsclk_out = Fssi_clk/SCKDV
 * 
 * where SCKDV is any even value between 2 and 65534. For example:
 * 
 * for Fssi_clk = 3.6864MHz and SCKDV =2
 * 
 * Fsclk_out = 3.6864/2 = 1.8432MHz
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_BAUDR_SCKDV register field. */
#define ALT_SPIM_BAUDR_SCKDV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_BAUDR_SCKDV register field. */
#define ALT_SPIM_BAUDR_SCKDV_MSB        15
/* The width in bits of the ALT_SPIM_BAUDR_SCKDV register field. */
#define ALT_SPIM_BAUDR_SCKDV_WIDTH      16
/* The mask used to set the ALT_SPIM_BAUDR_SCKDV register field value. */
#define ALT_SPIM_BAUDR_SCKDV_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SPIM_BAUDR_SCKDV register field value. */
#define ALT_SPIM_BAUDR_SCKDV_CLR_MSK    0xffff0000
/* The reset value of the ALT_SPIM_BAUDR_SCKDV register field. */
#define ALT_SPIM_BAUDR_SCKDV_RESET      0x0
/* Extracts the ALT_SPIM_BAUDR_SCKDV field value from a register. */
#define ALT_SPIM_BAUDR_SCKDV_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SPIM_BAUDR_SCKDV register field value suitable for setting the register. */
#define ALT_SPIM_BAUDR_SCKDV_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : RSVD_BAUDR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_BAUDR_RSVD_BAUDR register field. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SPIM_BAUDR_RSVD_BAUDR register field. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_MSB        31
/* The width in bits of the ALT_SPIM_BAUDR_RSVD_BAUDR register field. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_WIDTH      16
/* The mask used to set the ALT_SPIM_BAUDR_RSVD_BAUDR register field value. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SPIM_BAUDR_RSVD_BAUDR register field value. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SPIM_BAUDR_RSVD_BAUDR register field. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_RESET      0x0
/* Extracts the ALT_SPIM_BAUDR_RSVD_BAUDR field value from a register. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SPIM_BAUDR_RSVD_BAUDR register field value suitable for setting the register. */
#define ALT_SPIM_BAUDR_RSVD_BAUDR_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SPIM_BAUDR.
 */
struct ALT_SPIM_BAUDR_s
{
    volatile uint32_t        SCKDV      : 16;  /* ALT_SPIM_BAUDR_SCKDV */
    const volatile uint32_t  RSVD_BAUDR : 16;  /* ALT_SPIM_BAUDR_RSVD_BAUDR */
};

/* The typedef declaration for register ALT_SPIM_BAUDR. */
typedef struct ALT_SPIM_BAUDR_s  ALT_SPIM_BAUDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_BAUDR register. */
#define ALT_SPIM_BAUDR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_BAUDR register from the beginning of the component. */
#define ALT_SPIM_BAUDR_OFST        0x14
/* The address of the ALT_SPIM_BAUDR register. */
#define ALT_SPIM_BAUDR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_BAUDR_OFST))

/*
 * Register : Transmit FIFO Threshold Level - TXFTLR
 * 
 * Transmit FIFO Threshold Level.
 * 
 * This register controls the threshold value for the transmit FIFO memory.
 * 
 * The DW_apb_ssi is enabled and disabled by writing to the SSIENR register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [7:0]  | RW     | 0x0   | ALT_SPIM_TXFTLR_TFT        
 *  [31:8] | R      | 0x0   | ALT_SPIM_TXFTLR_RSVD_TXFTLR
 * 
 */
/*
 * Field : TFT
 * 
 * Transmit FIFO Threshold.
 * 
 * Controls the level of entries (or below) at which the transmit FIFO controller
 * 
 * triggers an interrupt. The FIFO depth is configurable in the range 2-256;
 * 
 * this register is sized to the number of address bits needed to access the
 * 
 * FIFO. If you attempt to set this value greater than or equal to the depth
 * 
 * of the FIFO, this field is not written and retains its current value. When
 * 
 * the number of transmit FIFO entries is less than or equal to this value,
 * 
 * the transmit FIFO empty interrupt is triggered.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_TXFTLR_TFT register field. */
#define ALT_SPIM_TXFTLR_TFT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_TXFTLR_TFT register field. */
#define ALT_SPIM_TXFTLR_TFT_MSB        7
/* The width in bits of the ALT_SPIM_TXFTLR_TFT register field. */
#define ALT_SPIM_TXFTLR_TFT_WIDTH      8
/* The mask used to set the ALT_SPIM_TXFTLR_TFT register field value. */
#define ALT_SPIM_TXFTLR_TFT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SPIM_TXFTLR_TFT register field value. */
#define ALT_SPIM_TXFTLR_TFT_CLR_MSK    0xffffff00
/* The reset value of the ALT_SPIM_TXFTLR_TFT register field. */
#define ALT_SPIM_TXFTLR_TFT_RESET      0x0
/* Extracts the ALT_SPIM_TXFTLR_TFT field value from a register. */
#define ALT_SPIM_TXFTLR_TFT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SPIM_TXFTLR_TFT register field value suitable for setting the register. */
#define ALT_SPIM_TXFTLR_TFT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_TXFTLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_TXFTLR_RSVD_TXFTLR register field. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SPIM_TXFTLR_RSVD_TXFTLR register field. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_MSB        31
/* The width in bits of the ALT_SPIM_TXFTLR_RSVD_TXFTLR register field. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_WIDTH      24
/* The mask used to set the ALT_SPIM_TXFTLR_RSVD_TXFTLR register field value. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_SET_MSK    0xffffff00
/* The mask used to clear the ALT_SPIM_TXFTLR_RSVD_TXFTLR register field value. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_CLR_MSK    0x000000ff
/* The reset value of the ALT_SPIM_TXFTLR_RSVD_TXFTLR register field. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_RESET      0x0
/* Extracts the ALT_SPIM_TXFTLR_RSVD_TXFTLR field value from a register. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_SPIM_TXFTLR_RSVD_TXFTLR register field value suitable for setting the register. */
#define ALT_SPIM_TXFTLR_RSVD_TXFTLR_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_SPIM_TXFTLR.
 */
struct ALT_SPIM_TXFTLR_s
{
    volatile uint32_t        TFT         :  8;  /* ALT_SPIM_TXFTLR_TFT */
    const volatile uint32_t  RSVD_TXFTLR : 24;  /* ALT_SPIM_TXFTLR_RSVD_TXFTLR */
};

/* The typedef declaration for register ALT_SPIM_TXFTLR. */
typedef struct ALT_SPIM_TXFTLR_s  ALT_SPIM_TXFTLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_TXFTLR register. */
#define ALT_SPIM_TXFTLR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_TXFTLR register from the beginning of the component. */
#define ALT_SPIM_TXFTLR_OFST        0x18
/* The address of the ALT_SPIM_TXFTLR register. */
#define ALT_SPIM_TXFTLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_TXFTLR_OFST))

/*
 * Register : Receive FIFO Threshold Level - RXFTLR
 * 
 * Receive FIFO Threshold level.
 * 
 * This register controls the threshold value for the receive FIFO memory.
 * 
 * The DW_apb_ssi is enabled and disabled by writing to the SSIENR register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [7:0]  | RW     | 0x0   | ALT_SPIM_RXFTLR_RFT        
 *  [31:8] | R      | 0x0   | ALT_SPIM_RXFTLR_RSVD_RXFTLR
 * 
 */
/*
 * Field : RFT
 * 
 * Receive FIFO Threshold.
 * 
 * Controls the level of entries (or above) at which the receive FIFO
 * 
 * controller triggers an interrupt. The FIFO depth is configurable in
 * 
 * the range 2-256. This register is sized to the number of address bits
 * 
 * needed to access the FIFO. If you attempt to set this value greater
 * 
 * than the depth of the FIFO, this field is not written and retains its
 * 
 * current value. When the number of receive FIFO entries is greater than
 * 
 * or equal to this value + 1, the receive FIFO full interrupt is triggered.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXFTLR_RFT register field. */
#define ALT_SPIM_RXFTLR_RFT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXFTLR_RFT register field. */
#define ALT_SPIM_RXFTLR_RFT_MSB        7
/* The width in bits of the ALT_SPIM_RXFTLR_RFT register field. */
#define ALT_SPIM_RXFTLR_RFT_WIDTH      8
/* The mask used to set the ALT_SPIM_RXFTLR_RFT register field value. */
#define ALT_SPIM_RXFTLR_RFT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SPIM_RXFTLR_RFT register field value. */
#define ALT_SPIM_RXFTLR_RFT_CLR_MSK    0xffffff00
/* The reset value of the ALT_SPIM_RXFTLR_RFT register field. */
#define ALT_SPIM_RXFTLR_RFT_RESET      0x0
/* Extracts the ALT_SPIM_RXFTLR_RFT field value from a register. */
#define ALT_SPIM_RXFTLR_RFT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SPIM_RXFTLR_RFT register field value suitable for setting the register. */
#define ALT_SPIM_RXFTLR_RFT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_RXFTLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXFTLR_RSVD_RXFTLR register field. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXFTLR_RSVD_RXFTLR register field. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_MSB        31
/* The width in bits of the ALT_SPIM_RXFTLR_RSVD_RXFTLR register field. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_WIDTH      24
/* The mask used to set the ALT_SPIM_RXFTLR_RSVD_RXFTLR register field value. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_SET_MSK    0xffffff00
/* The mask used to clear the ALT_SPIM_RXFTLR_RSVD_RXFTLR register field value. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_CLR_MSK    0x000000ff
/* The reset value of the ALT_SPIM_RXFTLR_RSVD_RXFTLR register field. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_RESET      0x0
/* Extracts the ALT_SPIM_RXFTLR_RSVD_RXFTLR field value from a register. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_SPIM_RXFTLR_RSVD_RXFTLR register field value suitable for setting the register. */
#define ALT_SPIM_RXFTLR_RSVD_RXFTLR_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_SPIM_RXFTLR.
 */
struct ALT_SPIM_RXFTLR_s
{
    volatile uint32_t        RFT         :  8;  /* ALT_SPIM_RXFTLR_RFT */
    const volatile uint32_t  RSVD_RXFTLR : 24;  /* ALT_SPIM_RXFTLR_RSVD_RXFTLR */
};

/* The typedef declaration for register ALT_SPIM_RXFTLR. */
typedef struct ALT_SPIM_RXFTLR_s  ALT_SPIM_RXFTLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RXFTLR register. */
#define ALT_SPIM_RXFTLR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RXFTLR register from the beginning of the component. */
#define ALT_SPIM_RXFTLR_OFST        0x1c
/* The address of the ALT_SPIM_RXFTLR register. */
#define ALT_SPIM_RXFTLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RXFTLR_OFST))

/*
 * Register : Transmit FIFO Level Register - TXFLR
 * 
 * Transmit FIFO Level Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [8:0]  | R      | 0x0   | ALT_SPIM_TXFLR_TXTFL     
 *  [31:9] | R      | 0x0   | ALT_SPIM_TXFLR_RSVD_TXFLR
 * 
 */
/*
 * Field : TXTFL
 * 
 * Transmit FIFO Level.
 * 
 * Contains the number of valid data entries in the transmit FIFO.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_TXFLR_TXTFL register field. */
#define ALT_SPIM_TXFLR_TXTFL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_TXFLR_TXTFL register field. */
#define ALT_SPIM_TXFLR_TXTFL_MSB        8
/* The width in bits of the ALT_SPIM_TXFLR_TXTFL register field. */
#define ALT_SPIM_TXFLR_TXTFL_WIDTH      9
/* The mask used to set the ALT_SPIM_TXFLR_TXTFL register field value. */
#define ALT_SPIM_TXFLR_TXTFL_SET_MSK    0x000001ff
/* The mask used to clear the ALT_SPIM_TXFLR_TXTFL register field value. */
#define ALT_SPIM_TXFLR_TXTFL_CLR_MSK    0xfffffe00
/* The reset value of the ALT_SPIM_TXFLR_TXTFL register field. */
#define ALT_SPIM_TXFLR_TXTFL_RESET      0x0
/* Extracts the ALT_SPIM_TXFLR_TXTFL field value from a register. */
#define ALT_SPIM_TXFLR_TXTFL_GET(value) (((value) & 0x000001ff) >> 0)
/* Produces a ALT_SPIM_TXFLR_TXTFL register field value suitable for setting the register. */
#define ALT_SPIM_TXFLR_TXTFL_SET(value) (((value) << 0) & 0x000001ff)

/*
 * Field : RSVD_TXFLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_TXFLR_RSVD_TXFLR register field. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SPIM_TXFLR_RSVD_TXFLR register field. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_MSB        31
/* The width in bits of the ALT_SPIM_TXFLR_RSVD_TXFLR register field. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_WIDTH      23
/* The mask used to set the ALT_SPIM_TXFLR_RSVD_TXFLR register field value. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_SET_MSK    0xfffffe00
/* The mask used to clear the ALT_SPIM_TXFLR_RSVD_TXFLR register field value. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_CLR_MSK    0x000001ff
/* The reset value of the ALT_SPIM_TXFLR_RSVD_TXFLR register field. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_RESET      0x0
/* Extracts the ALT_SPIM_TXFLR_RSVD_TXFLR field value from a register. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_GET(value) (((value) & 0xfffffe00) >> 9)
/* Produces a ALT_SPIM_TXFLR_RSVD_TXFLR register field value suitable for setting the register. */
#define ALT_SPIM_TXFLR_RSVD_TXFLR_SET(value) (((value) << 9) & 0xfffffe00)

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
 * The struct declaration for register ALT_SPIM_TXFLR.
 */
struct ALT_SPIM_TXFLR_s
{
    const volatile uint32_t  TXTFL      :  9;  /* ALT_SPIM_TXFLR_TXTFL */
    const volatile uint32_t  RSVD_TXFLR : 23;  /* ALT_SPIM_TXFLR_RSVD_TXFLR */
};

/* The typedef declaration for register ALT_SPIM_TXFLR. */
typedef struct ALT_SPIM_TXFLR_s  ALT_SPIM_TXFLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_TXFLR register. */
#define ALT_SPIM_TXFLR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_TXFLR register from the beginning of the component. */
#define ALT_SPIM_TXFLR_OFST        0x20
/* The address of the ALT_SPIM_TXFLR register. */
#define ALT_SPIM_TXFLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_TXFLR_OFST))

/*
 * Register : Receive FIFO Level Register - RXFLR
 * 
 * Receive FIFO Level Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [8:0]  | R      | 0x0   | ALT_SPIM_RXFLR_RXTFL     
 *  [31:9] | R      | 0x0   | ALT_SPIM_RXFLR_RSVD_RXFLR
 * 
 */
/*
 * Field : RXTFL
 * 
 * Receive FIFO Level.
 * 
 * Contains the number of valid data entries in the receive FIFO.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXFLR_RXTFL register field. */
#define ALT_SPIM_RXFLR_RXTFL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXFLR_RXTFL register field. */
#define ALT_SPIM_RXFLR_RXTFL_MSB        8
/* The width in bits of the ALT_SPIM_RXFLR_RXTFL register field. */
#define ALT_SPIM_RXFLR_RXTFL_WIDTH      9
/* The mask used to set the ALT_SPIM_RXFLR_RXTFL register field value. */
#define ALT_SPIM_RXFLR_RXTFL_SET_MSK    0x000001ff
/* The mask used to clear the ALT_SPIM_RXFLR_RXTFL register field value. */
#define ALT_SPIM_RXFLR_RXTFL_CLR_MSK    0xfffffe00
/* The reset value of the ALT_SPIM_RXFLR_RXTFL register field. */
#define ALT_SPIM_RXFLR_RXTFL_RESET      0x0
/* Extracts the ALT_SPIM_RXFLR_RXTFL field value from a register. */
#define ALT_SPIM_RXFLR_RXTFL_GET(value) (((value) & 0x000001ff) >> 0)
/* Produces a ALT_SPIM_RXFLR_RXTFL register field value suitable for setting the register. */
#define ALT_SPIM_RXFLR_RXTFL_SET(value) (((value) << 0) & 0x000001ff)

/*
 * Field : RSVD_RXFLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXFLR_RSVD_RXFLR register field. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXFLR_RSVD_RXFLR register field. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_MSB        31
/* The width in bits of the ALT_SPIM_RXFLR_RSVD_RXFLR register field. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_WIDTH      23
/* The mask used to set the ALT_SPIM_RXFLR_RSVD_RXFLR register field value. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_SET_MSK    0xfffffe00
/* The mask used to clear the ALT_SPIM_RXFLR_RSVD_RXFLR register field value. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_CLR_MSK    0x000001ff
/* The reset value of the ALT_SPIM_RXFLR_RSVD_RXFLR register field. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_RESET      0x0
/* Extracts the ALT_SPIM_RXFLR_RSVD_RXFLR field value from a register. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_GET(value) (((value) & 0xfffffe00) >> 9)
/* Produces a ALT_SPIM_RXFLR_RSVD_RXFLR register field value suitable for setting the register. */
#define ALT_SPIM_RXFLR_RSVD_RXFLR_SET(value) (((value) << 9) & 0xfffffe00)

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
 * The struct declaration for register ALT_SPIM_RXFLR.
 */
struct ALT_SPIM_RXFLR_s
{
    const volatile uint32_t  RXTFL      :  9;  /* ALT_SPIM_RXFLR_RXTFL */
    const volatile uint32_t  RSVD_RXFLR : 23;  /* ALT_SPIM_RXFLR_RSVD_RXFLR */
};

/* The typedef declaration for register ALT_SPIM_RXFLR. */
typedef struct ALT_SPIM_RXFLR_s  ALT_SPIM_RXFLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RXFLR register. */
#define ALT_SPIM_RXFLR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RXFLR register from the beginning of the component. */
#define ALT_SPIM_RXFLR_OFST        0x24
/* The address of the ALT_SPIM_RXFLR register. */
#define ALT_SPIM_RXFLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RXFLR_OFST))

/*
 * Register : Status Register - SR
 * 
 * Status Register.
 * 
 * This is a read-only register used to indicate the current transfer status,
 * 
 * FIFO status, and any transmission/reception errors that may have occurred.
 * 
 * The status register may be read at any time. None of the bits in this
 * 
 * register request an interrupt.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description         
 * :-------|:-------|:------|:---------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_SR_BUSY    
 *  [1]    | R      | 0x1   | ALT_SPIM_SR_TFNF    
 *  [2]    | R      | 0x1   | ALT_SPIM_SR_TFE     
 *  [3]    | R      | 0x0   | ALT_SPIM_SR_RFNE    
 *  [4]    | R      | 0x0   | ALT_SPIM_SR_RFF     
 *  [5]    | R      | 0x0   | ALT_SPIM_SR_RSVD_TXE
 *  [6]    | R      | 0x0   | ALT_SPIM_SR_DCOL    
 *  [31:7] | R      | 0x0   | ALT_SPIM_SR_RSVD_SR 
 * 
 */
/*
 * Field : BUSY
 * 
 * SSI Busy Flag.
 * 
 * When set, indicates that a serial transfer is in progress; when cleared
 * 
 * indicates that the DW_apb_ssi is idle or disabled.
 * 
 * 0 - DW_apb_ssi is idle or disabled
 * 
 * 1 - DW_apb_ssi is actively transferring data
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description         
 * :----------------------------|:------|:---------------------
 *  ALT_SPIM_SR_BUSY_E_INACTIVE | 0x0   | SSI is Idle/Disabled
 *  ALT_SPIM_SR_BUSY_E_ACTIVE   | 0x1   | SSI is Active       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SR_BUSY
 * 
 * SSI is Idle/Disabled
 */
#define ALT_SPIM_SR_BUSY_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_SPIM_SR_BUSY
 * 
 * SSI is Active
 */
#define ALT_SPIM_SR_BUSY_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_BUSY register field. */
#define ALT_SPIM_SR_BUSY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_BUSY register field. */
#define ALT_SPIM_SR_BUSY_MSB        0
/* The width in bits of the ALT_SPIM_SR_BUSY register field. */
#define ALT_SPIM_SR_BUSY_WIDTH      1
/* The mask used to set the ALT_SPIM_SR_BUSY register field value. */
#define ALT_SPIM_SR_BUSY_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_SR_BUSY register field value. */
#define ALT_SPIM_SR_BUSY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_SR_BUSY register field. */
#define ALT_SPIM_SR_BUSY_RESET      0x0
/* Extracts the ALT_SPIM_SR_BUSY field value from a register. */
#define ALT_SPIM_SR_BUSY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_SR_BUSY register field value suitable for setting the register. */
#define ALT_SPIM_SR_BUSY_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TFNF
 * 
 * Transmit FIFO Not Full. Set when the transmit FIFO contains one or more
 * 
 * empty locations, and is cleared when the FIFO is full.
 * 
 * 0 - Transmit FIFO is full
 * 
 * 1 - Transmit FIFO is not full
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description        
 * :----------------------------|:------|:--------------------
 *  ALT_SPIM_SR_TFNF_E_FULL     | 0x0   | Tx FIFO is full    
 *  ALT_SPIM_SR_TFNF_E_NOT_FULL | 0x1   | Tx FIFO is not Full
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SR_TFNF
 * 
 * Tx FIFO is full
 */
#define ALT_SPIM_SR_TFNF_E_FULL     0x0
/*
 * Enumerated value for register field ALT_SPIM_SR_TFNF
 * 
 * Tx FIFO is not Full
 */
#define ALT_SPIM_SR_TFNF_E_NOT_FULL 0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_TFNF register field. */
#define ALT_SPIM_SR_TFNF_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_TFNF register field. */
#define ALT_SPIM_SR_TFNF_MSB        1
/* The width in bits of the ALT_SPIM_SR_TFNF register field. */
#define ALT_SPIM_SR_TFNF_WIDTH      1
/* The mask used to set the ALT_SPIM_SR_TFNF register field value. */
#define ALT_SPIM_SR_TFNF_SET_MSK    0x00000002
/* The mask used to clear the ALT_SPIM_SR_TFNF register field value. */
#define ALT_SPIM_SR_TFNF_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SPIM_SR_TFNF register field. */
#define ALT_SPIM_SR_TFNF_RESET      0x1
/* Extracts the ALT_SPIM_SR_TFNF field value from a register. */
#define ALT_SPIM_SR_TFNF_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SPIM_SR_TFNF register field value suitable for setting the register. */
#define ALT_SPIM_SR_TFNF_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TFE
 * 
 * Transmit FIFO Empty.
 * 
 * When the transmit FIFO is completely empty, this bit is set. When the
 * 
 * transmit FIFO contains one or more valid entries, this bit is cleared.
 * 
 * This bit field does not request an interrupt.
 * 
 * 0 - Transmit FIFO is not empty
 * 
 * 1 - Transmit FIFO is empty
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description        
 * :----------------------------|:------|:--------------------
 *  ALT_SPIM_SR_TFE_E_NOT_EMPTY | 0x0   | Tx FIFO is nonempty
 *  ALT_SPIM_SR_TFE_E_EMPTY     | 0x1   | Tx FIFO  is   empty
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SR_TFE
 * 
 * Tx FIFO is nonempty
 */
#define ALT_SPIM_SR_TFE_E_NOT_EMPTY 0x0
/*
 * Enumerated value for register field ALT_SPIM_SR_TFE
 * 
 * Tx FIFO  is   empty
 */
#define ALT_SPIM_SR_TFE_E_EMPTY     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_TFE register field. */
#define ALT_SPIM_SR_TFE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_TFE register field. */
#define ALT_SPIM_SR_TFE_MSB        2
/* The width in bits of the ALT_SPIM_SR_TFE register field. */
#define ALT_SPIM_SR_TFE_WIDTH      1
/* The mask used to set the ALT_SPIM_SR_TFE register field value. */
#define ALT_SPIM_SR_TFE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SPIM_SR_TFE register field value. */
#define ALT_SPIM_SR_TFE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SPIM_SR_TFE register field. */
#define ALT_SPIM_SR_TFE_RESET      0x1
/* Extracts the ALT_SPIM_SR_TFE field value from a register. */
#define ALT_SPIM_SR_TFE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SPIM_SR_TFE register field value suitable for setting the register. */
#define ALT_SPIM_SR_TFE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RFNE
 * 
 * Receive FIFO Not Empty.
 * 
 * Set when the receive FIFO contains one or more entries and is cleared
 * 
 * when the receive FIFO is empty. This bit can be polled by software to
 * 
 * completely empty the receive FIFO.
 * 
 * 0 - Receive FIFO is empty
 * 
 * 1 - Receive FIFO is not empty
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description        
 * :-----------------------------|:------|:--------------------
 *  ALT_SPIM_SR_RFNE_E_EMPTY     | 0x0   | Rx FIFO  is   empty
 *  ALT_SPIM_SR_RFNE_E_NOT_EMPTY | 0x1   | Rx FIFO is nonempty
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SR_RFNE
 * 
 * Rx FIFO  is   empty
 */
#define ALT_SPIM_SR_RFNE_E_EMPTY        0x0
/*
 * Enumerated value for register field ALT_SPIM_SR_RFNE
 * 
 * Rx FIFO is nonempty
 */
#define ALT_SPIM_SR_RFNE_E_NOT_EMPTY    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_RFNE register field. */
#define ALT_SPIM_SR_RFNE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_RFNE register field. */
#define ALT_SPIM_SR_RFNE_MSB        3
/* The width in bits of the ALT_SPIM_SR_RFNE register field. */
#define ALT_SPIM_SR_RFNE_WIDTH      1
/* The mask used to set the ALT_SPIM_SR_RFNE register field value. */
#define ALT_SPIM_SR_RFNE_SET_MSK    0x00000008
/* The mask used to clear the ALT_SPIM_SR_RFNE register field value. */
#define ALT_SPIM_SR_RFNE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SPIM_SR_RFNE register field. */
#define ALT_SPIM_SR_RFNE_RESET      0x0
/* Extracts the ALT_SPIM_SR_RFNE field value from a register. */
#define ALT_SPIM_SR_RFNE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SPIM_SR_RFNE register field value suitable for setting the register. */
#define ALT_SPIM_SR_RFNE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RFF
 * 
 * Receive FIFO Full. When the receive FIFO is completely full, this bit
 * 
 * is set. When the receive FIFO contains one or more empty location, this
 * 
 * bit is cleared.
 * 
 * 0 - Receive FIFO is not full
 * 
 * 1 - Receive FIFO is full
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description        
 * :---------------------------|:------|:--------------------
 *  ALT_SPIM_SR_RFF_E_NOT_FULL | 0x0   | RX FIFO is not full
 *  ALT_SPIM_SR_RFF_E_FULL     | 0x1   | Rx FIFO is full    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SR_RFF
 * 
 * RX FIFO is not full
 */
#define ALT_SPIM_SR_RFF_E_NOT_FULL  0x0
/*
 * Enumerated value for register field ALT_SPIM_SR_RFF
 * 
 * Rx FIFO is full
 */
#define ALT_SPIM_SR_RFF_E_FULL      0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_RFF register field. */
#define ALT_SPIM_SR_RFF_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_RFF register field. */
#define ALT_SPIM_SR_RFF_MSB        4
/* The width in bits of the ALT_SPIM_SR_RFF register field. */
#define ALT_SPIM_SR_RFF_WIDTH      1
/* The mask used to set the ALT_SPIM_SR_RFF register field value. */
#define ALT_SPIM_SR_RFF_SET_MSK    0x00000010
/* The mask used to clear the ALT_SPIM_SR_RFF register field value. */
#define ALT_SPIM_SR_RFF_CLR_MSK    0xffffffef
/* The reset value of the ALT_SPIM_SR_RFF register field. */
#define ALT_SPIM_SR_RFF_RESET      0x0
/* Extracts the ALT_SPIM_SR_RFF field value from a register. */
#define ALT_SPIM_SR_RFF_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SPIM_SR_RFF register field value suitable for setting the register. */
#define ALT_SPIM_SR_RFF_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : RSVD_TXE
 * 
 * Reserved field- read-only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_RSVD_TXE register field. */
#define ALT_SPIM_SR_RSVD_TXE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_RSVD_TXE register field. */
#define ALT_SPIM_SR_RSVD_TXE_MSB        5
/* The width in bits of the ALT_SPIM_SR_RSVD_TXE register field. */
#define ALT_SPIM_SR_RSVD_TXE_WIDTH      1
/* The mask used to set the ALT_SPIM_SR_RSVD_TXE register field value. */
#define ALT_SPIM_SR_RSVD_TXE_SET_MSK    0x00000020
/* The mask used to clear the ALT_SPIM_SR_RSVD_TXE register field value. */
#define ALT_SPIM_SR_RSVD_TXE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SPIM_SR_RSVD_TXE register field. */
#define ALT_SPIM_SR_RSVD_TXE_RESET      0x0
/* Extracts the ALT_SPIM_SR_RSVD_TXE field value from a register. */
#define ALT_SPIM_SR_RSVD_TXE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SPIM_SR_RSVD_TXE register field value suitable for setting the register. */
#define ALT_SPIM_SR_RSVD_TXE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : DCOL
 * 
 * Data Collision Error.
 * 
 * Relevant only when the DW_apb_ssi is configured as a master device.
 * 
 * This bit will be set if ss_in_n input is asserted by other master,
 * 
 * when the DW_apb_ssi master is in the middle of the transfer. This informs the
 * processor that the
 * 
 * last data transfer was halted before completion. This bit is cleared
 * 
 * when read.
 * 
 * 0 - No error
 * 
 * 1 - Transmit data collision error
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description            
 * :--------------------------------------|:------|:------------------------
 *  ALT_SPIM_SR_DCOL_E_NO_ERROR_CONDITION | 0x0   | No Data Error Condition
 *  ALT_SPIM_SR_DCOL_E_TX_COLLISION_ERROR | 0x1   | TX Data Collision Error
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_SR_DCOL
 * 
 * No Data Error Condition
 */
#define ALT_SPIM_SR_DCOL_E_NO_ERROR_CONDITION   0x0
/*
 * Enumerated value for register field ALT_SPIM_SR_DCOL
 * 
 * TX Data Collision Error
 */
#define ALT_SPIM_SR_DCOL_E_TX_COLLISION_ERROR   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_DCOL register field. */
#define ALT_SPIM_SR_DCOL_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_DCOL register field. */
#define ALT_SPIM_SR_DCOL_MSB        6
/* The width in bits of the ALT_SPIM_SR_DCOL register field. */
#define ALT_SPIM_SR_DCOL_WIDTH      1
/* The mask used to set the ALT_SPIM_SR_DCOL register field value. */
#define ALT_SPIM_SR_DCOL_SET_MSK    0x00000040
/* The mask used to clear the ALT_SPIM_SR_DCOL register field value. */
#define ALT_SPIM_SR_DCOL_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SPIM_SR_DCOL register field. */
#define ALT_SPIM_SR_DCOL_RESET      0x0
/* Extracts the ALT_SPIM_SR_DCOL field value from a register. */
#define ALT_SPIM_SR_DCOL_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SPIM_SR_DCOL register field value suitable for setting the register. */
#define ALT_SPIM_SR_DCOL_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RSVD_SR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_SR_RSVD_SR register field. */
#define ALT_SPIM_SR_RSVD_SR_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SR_RSVD_SR register field. */
#define ALT_SPIM_SR_RSVD_SR_MSB        31
/* The width in bits of the ALT_SPIM_SR_RSVD_SR register field. */
#define ALT_SPIM_SR_RSVD_SR_WIDTH      25
/* The mask used to set the ALT_SPIM_SR_RSVD_SR register field value. */
#define ALT_SPIM_SR_RSVD_SR_SET_MSK    0xffffff80
/* The mask used to clear the ALT_SPIM_SR_RSVD_SR register field value. */
#define ALT_SPIM_SR_RSVD_SR_CLR_MSK    0x0000007f
/* The reset value of the ALT_SPIM_SR_RSVD_SR register field. */
#define ALT_SPIM_SR_RSVD_SR_RESET      0x0
/* Extracts the ALT_SPIM_SR_RSVD_SR field value from a register. */
#define ALT_SPIM_SR_RSVD_SR_GET(value) (((value) & 0xffffff80) >> 7)
/* Produces a ALT_SPIM_SR_RSVD_SR register field value suitable for setting the register. */
#define ALT_SPIM_SR_RSVD_SR_SET(value) (((value) << 7) & 0xffffff80)

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
 * The struct declaration for register ALT_SPIM_SR.
 */
struct ALT_SPIM_SR_s
{
    const volatile uint32_t  BUSY     :  1;  /* ALT_SPIM_SR_BUSY */
    const volatile uint32_t  TFNF     :  1;  /* ALT_SPIM_SR_TFNF */
    const volatile uint32_t  TFE      :  1;  /* ALT_SPIM_SR_TFE */
    const volatile uint32_t  RFNE     :  1;  /* ALT_SPIM_SR_RFNE */
    const volatile uint32_t  RFF      :  1;  /* ALT_SPIM_SR_RFF */
    const volatile uint32_t  RSVD_TXE :  1;  /* ALT_SPIM_SR_RSVD_TXE */
    const volatile uint32_t  DCOL     :  1;  /* ALT_SPIM_SR_DCOL */
    const volatile uint32_t  RSVD_SR  : 25;  /* ALT_SPIM_SR_RSVD_SR */
};

/* The typedef declaration for register ALT_SPIM_SR. */
typedef struct ALT_SPIM_SR_s  ALT_SPIM_SR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_SR register. */
#define ALT_SPIM_SR_RESET       0x00000006
/* The byte offset of the ALT_SPIM_SR register from the beginning of the component. */
#define ALT_SPIM_SR_OFST        0x28
/* The address of the ALT_SPIM_SR register. */
#define ALT_SPIM_SR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_SR_OFST))

/*
 * Register : Interrupt Mask Register - IMR
 * 
 * Interrupt Mask Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | RW     | 0x1   | ALT_SPIM_IMR_TXEIM   
 *  [1]    | RW     | 0x1   | ALT_SPIM_IMR_TXOIM   
 *  [2]    | RW     | 0x1   | ALT_SPIM_IMR_RXUIM   
 *  [3]    | RW     | 0x1   | ALT_SPIM_IMR_RXOIM   
 *  [4]    | RW     | 0x1   | ALT_SPIM_IMR_RXFIM   
 *  [5]    | RW     | 0x1   | ALT_SPIM_IMR_MSTIM   
 *  [31:6] | R      | 0x0   | ALT_SPIM_IMR_RSVD_IMR
 * 
 */
/*
 * Field : TXEIM
 * 
 * Transmit FIFO Empty Interrupt Mask
 * 
 * 0 - ssi_txe_intr interrupt is masked
 * 
 * 1 - ssi_txe_intr interrupt is not masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                      
 * :------------------------------|:------|:----------------------------------
 *  ALT_SPIM_IMR_TXEIM_E_MASKED   | 0x0   | TX FIFO Empty Interrupt is masked
 *  ALT_SPIM_IMR_TXEIM_E_UNMASKED | 0x1   | TX FIFO Empty Interrupt un-masked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_IMR_TXEIM
 * 
 * TX FIFO Empty Interrupt is masked
 */
#define ALT_SPIM_IMR_TXEIM_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SPIM_IMR_TXEIM
 * 
 * TX FIFO Empty Interrupt un-masked
 */
#define ALT_SPIM_IMR_TXEIM_E_UNMASKED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_IMR_TXEIM register field. */
#define ALT_SPIM_IMR_TXEIM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IMR_TXEIM register field. */
#define ALT_SPIM_IMR_TXEIM_MSB        0
/* The width in bits of the ALT_SPIM_IMR_TXEIM register field. */
#define ALT_SPIM_IMR_TXEIM_WIDTH      1
/* The mask used to set the ALT_SPIM_IMR_TXEIM register field value. */
#define ALT_SPIM_IMR_TXEIM_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_IMR_TXEIM register field value. */
#define ALT_SPIM_IMR_TXEIM_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_IMR_TXEIM register field. */
#define ALT_SPIM_IMR_TXEIM_RESET      0x1
/* Extracts the ALT_SPIM_IMR_TXEIM field value from a register. */
#define ALT_SPIM_IMR_TXEIM_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_IMR_TXEIM register field value suitable for setting the register. */
#define ALT_SPIM_IMR_TXEIM_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TXOIM
 * 
 * Transmit FIFO Overflow Interrupt Mask
 * 
 * 0 - ssi_txo_intr interrupt is masked
 * 
 * 1 - ssi_txo_intr interrupt is not masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                         
 * :------------------------------|:------|:-------------------------------------
 *  ALT_SPIM_IMR_TXOIM_E_MASKED   | 0x0   | TX FIFO Overflow Interrupt is masked
 *  ALT_SPIM_IMR_TXOIM_E_UNMASKED | 0x1   | TX FIFO Overflow Interrupt un-masked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_IMR_TXOIM
 * 
 * TX FIFO Overflow Interrupt is masked
 */
#define ALT_SPIM_IMR_TXOIM_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SPIM_IMR_TXOIM
 * 
 * TX FIFO Overflow Interrupt un-masked
 */
#define ALT_SPIM_IMR_TXOIM_E_UNMASKED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_IMR_TXOIM register field. */
#define ALT_SPIM_IMR_TXOIM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IMR_TXOIM register field. */
#define ALT_SPIM_IMR_TXOIM_MSB        1
/* The width in bits of the ALT_SPIM_IMR_TXOIM register field. */
#define ALT_SPIM_IMR_TXOIM_WIDTH      1
/* The mask used to set the ALT_SPIM_IMR_TXOIM register field value. */
#define ALT_SPIM_IMR_TXOIM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SPIM_IMR_TXOIM register field value. */
#define ALT_SPIM_IMR_TXOIM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SPIM_IMR_TXOIM register field. */
#define ALT_SPIM_IMR_TXOIM_RESET      0x1
/* Extracts the ALT_SPIM_IMR_TXOIM field value from a register. */
#define ALT_SPIM_IMR_TXOIM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SPIM_IMR_TXOIM register field value suitable for setting the register. */
#define ALT_SPIM_IMR_TXOIM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RXUIM
 * 
 * Receive FIFO Underflow Interrupt Mask
 * 
 * 0 - ssi_rxu_intr interrupt is masked
 * 
 * 1 - ssi_rxu_intr interrupt is not masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                          
 * :------------------------------|:------|:--------------------------------------
 *  ALT_SPIM_IMR_RXUIM_E_MASKED   | 0x0   | RX FIFO Underflow Interrupt is masked
 *  ALT_SPIM_IMR_RXUIM_E_UNMASKED | 0x1   | RX FIFO Underflow Interrupt un-masked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_IMR_RXUIM
 * 
 * RX FIFO Underflow Interrupt is masked
 */
#define ALT_SPIM_IMR_RXUIM_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SPIM_IMR_RXUIM
 * 
 * RX FIFO Underflow Interrupt un-masked
 */
#define ALT_SPIM_IMR_RXUIM_E_UNMASKED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_IMR_RXUIM register field. */
#define ALT_SPIM_IMR_RXUIM_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IMR_RXUIM register field. */
#define ALT_SPIM_IMR_RXUIM_MSB        2
/* The width in bits of the ALT_SPIM_IMR_RXUIM register field. */
#define ALT_SPIM_IMR_RXUIM_WIDTH      1
/* The mask used to set the ALT_SPIM_IMR_RXUIM register field value. */
#define ALT_SPIM_IMR_RXUIM_SET_MSK    0x00000004
/* The mask used to clear the ALT_SPIM_IMR_RXUIM register field value. */
#define ALT_SPIM_IMR_RXUIM_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SPIM_IMR_RXUIM register field. */
#define ALT_SPIM_IMR_RXUIM_RESET      0x1
/* Extracts the ALT_SPIM_IMR_RXUIM field value from a register. */
#define ALT_SPIM_IMR_RXUIM_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SPIM_IMR_RXUIM register field value suitable for setting the register. */
#define ALT_SPIM_IMR_RXUIM_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RXOIM
 * 
 * Receive FIFO Overflow Interrupt Mask
 * 
 * 0 - ssi_rxo_intr interrupt is masked
 * 
 * 1 - ssi_rxo_intr interrupt is not masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                         
 * :------------------------------|:------|:-------------------------------------
 *  ALT_SPIM_IMR_RXOIM_E_MASKED   | 0x0   | RX FIFO Overflow Interrupt is masked
 *  ALT_SPIM_IMR_RXOIM_E_UNMASKED | 0x1   | RX FIFO Overflow Interrupt un-masked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_IMR_RXOIM
 * 
 * RX FIFO Overflow Interrupt is masked
 */
#define ALT_SPIM_IMR_RXOIM_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SPIM_IMR_RXOIM
 * 
 * RX FIFO Overflow Interrupt un-masked
 */
#define ALT_SPIM_IMR_RXOIM_E_UNMASKED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_IMR_RXOIM register field. */
#define ALT_SPIM_IMR_RXOIM_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IMR_RXOIM register field. */
#define ALT_SPIM_IMR_RXOIM_MSB        3
/* The width in bits of the ALT_SPIM_IMR_RXOIM register field. */
#define ALT_SPIM_IMR_RXOIM_WIDTH      1
/* The mask used to set the ALT_SPIM_IMR_RXOIM register field value. */
#define ALT_SPIM_IMR_RXOIM_SET_MSK    0x00000008
/* The mask used to clear the ALT_SPIM_IMR_RXOIM register field value. */
#define ALT_SPIM_IMR_RXOIM_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SPIM_IMR_RXOIM register field. */
#define ALT_SPIM_IMR_RXOIM_RESET      0x1
/* Extracts the ALT_SPIM_IMR_RXOIM field value from a register. */
#define ALT_SPIM_IMR_RXOIM_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SPIM_IMR_RXOIM register field value suitable for setting the register. */
#define ALT_SPIM_IMR_RXOIM_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RXFIM
 * 
 * Receive FIFO Full Interrupt Mask
 * 
 * 0 - ssi_rxf_intr interrupt is masked
 * 
 * 1 - ssi_rxf_intr interrupt is not masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                     
 * :------------------------------|:------|:---------------------------------
 *  ALT_SPIM_IMR_RXFIM_E_MASKED   | 0x0   | RX FIFO Full Interrupt is masked
 *  ALT_SPIM_IMR_RXFIM_E_UNMASKED | 0x1   | RX FIFO Full Interrupt un-masked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_IMR_RXFIM
 * 
 * RX FIFO Full Interrupt is masked
 */
#define ALT_SPIM_IMR_RXFIM_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SPIM_IMR_RXFIM
 * 
 * RX FIFO Full Interrupt un-masked
 */
#define ALT_SPIM_IMR_RXFIM_E_UNMASKED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_IMR_RXFIM register field. */
#define ALT_SPIM_IMR_RXFIM_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IMR_RXFIM register field. */
#define ALT_SPIM_IMR_RXFIM_MSB        4
/* The width in bits of the ALT_SPIM_IMR_RXFIM register field. */
#define ALT_SPIM_IMR_RXFIM_WIDTH      1
/* The mask used to set the ALT_SPIM_IMR_RXFIM register field value. */
#define ALT_SPIM_IMR_RXFIM_SET_MSK    0x00000010
/* The mask used to clear the ALT_SPIM_IMR_RXFIM register field value. */
#define ALT_SPIM_IMR_RXFIM_CLR_MSK    0xffffffef
/* The reset value of the ALT_SPIM_IMR_RXFIM register field. */
#define ALT_SPIM_IMR_RXFIM_RESET      0x1
/* Extracts the ALT_SPIM_IMR_RXFIM field value from a register. */
#define ALT_SPIM_IMR_RXFIM_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SPIM_IMR_RXFIM register field value suitable for setting the register. */
#define ALT_SPIM_IMR_RXFIM_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : MSTIM
 * 
 * Multi-Master Contention Interrupt Mask. This bit field is not present if
 * 
 * the DW_apb_ssi is configured as a serial-slave device.
 * 
 * 0 - ssi_mst_intr interrupt is masked
 * 
 * 1 - ssi_mst_intr interrupt is not masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                                
 * :------------------------------|:------|:--------------------------------------------
 *  ALT_SPIM_IMR_MSTIM_E_MASKED   | 0x0   | Multi-Master Contention Interrupt is masked
 *  ALT_SPIM_IMR_MSTIM_E_UNMASKED | 0x1   | Multi-Master Contention Interrupt un-masked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_IMR_MSTIM
 * 
 * Multi-Master Contention Interrupt is masked
 */
#define ALT_SPIM_IMR_MSTIM_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SPIM_IMR_MSTIM
 * 
 * Multi-Master Contention Interrupt un-masked
 */
#define ALT_SPIM_IMR_MSTIM_E_UNMASKED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_IMR_MSTIM register field. */
#define ALT_SPIM_IMR_MSTIM_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IMR_MSTIM register field. */
#define ALT_SPIM_IMR_MSTIM_MSB        5
/* The width in bits of the ALT_SPIM_IMR_MSTIM register field. */
#define ALT_SPIM_IMR_MSTIM_WIDTH      1
/* The mask used to set the ALT_SPIM_IMR_MSTIM register field value. */
#define ALT_SPIM_IMR_MSTIM_SET_MSK    0x00000020
/* The mask used to clear the ALT_SPIM_IMR_MSTIM register field value. */
#define ALT_SPIM_IMR_MSTIM_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SPIM_IMR_MSTIM register field. */
#define ALT_SPIM_IMR_MSTIM_RESET      0x1
/* Extracts the ALT_SPIM_IMR_MSTIM field value from a register. */
#define ALT_SPIM_IMR_MSTIM_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SPIM_IMR_MSTIM register field value suitable for setting the register. */
#define ALT_SPIM_IMR_MSTIM_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RSVD_IMR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_IMR_RSVD_IMR register field. */
#define ALT_SPIM_IMR_RSVD_IMR_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IMR_RSVD_IMR register field. */
#define ALT_SPIM_IMR_RSVD_IMR_MSB        31
/* The width in bits of the ALT_SPIM_IMR_RSVD_IMR register field. */
#define ALT_SPIM_IMR_RSVD_IMR_WIDTH      26
/* The mask used to set the ALT_SPIM_IMR_RSVD_IMR register field value. */
#define ALT_SPIM_IMR_RSVD_IMR_SET_MSK    0xffffffc0
/* The mask used to clear the ALT_SPIM_IMR_RSVD_IMR register field value. */
#define ALT_SPIM_IMR_RSVD_IMR_CLR_MSK    0x0000003f
/* The reset value of the ALT_SPIM_IMR_RSVD_IMR register field. */
#define ALT_SPIM_IMR_RSVD_IMR_RESET      0x0
/* Extracts the ALT_SPIM_IMR_RSVD_IMR field value from a register. */
#define ALT_SPIM_IMR_RSVD_IMR_GET(value) (((value) & 0xffffffc0) >> 6)
/* Produces a ALT_SPIM_IMR_RSVD_IMR register field value suitable for setting the register. */
#define ALT_SPIM_IMR_RSVD_IMR_SET(value) (((value) << 6) & 0xffffffc0)

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
 * The struct declaration for register ALT_SPIM_IMR.
 */
struct ALT_SPIM_IMR_s
{
    volatile uint32_t        TXEIM    :  1;  /* ALT_SPIM_IMR_TXEIM */
    volatile uint32_t        TXOIM    :  1;  /* ALT_SPIM_IMR_TXOIM */
    volatile uint32_t        RXUIM    :  1;  /* ALT_SPIM_IMR_RXUIM */
    volatile uint32_t        RXOIM    :  1;  /* ALT_SPIM_IMR_RXOIM */
    volatile uint32_t        RXFIM    :  1;  /* ALT_SPIM_IMR_RXFIM */
    volatile uint32_t        MSTIM    :  1;  /* ALT_SPIM_IMR_MSTIM */
    const volatile uint32_t  RSVD_IMR : 26;  /* ALT_SPIM_IMR_RSVD_IMR */
};

/* The typedef declaration for register ALT_SPIM_IMR. */
typedef struct ALT_SPIM_IMR_s  ALT_SPIM_IMR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_IMR register. */
#define ALT_SPIM_IMR_RESET       0x0000003f
/* The byte offset of the ALT_SPIM_IMR register from the beginning of the component. */
#define ALT_SPIM_IMR_OFST        0x2c
/* The address of the ALT_SPIM_IMR register. */
#define ALT_SPIM_IMR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_IMR_OFST))

/*
 * Register : Interrupt Status Register - ISR
 * 
 * Interrupt Status Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_ISR_TXEIS   
 *  [1]    | R      | 0x0   | ALT_SPIM_ISR_TXOIS   
 *  [2]    | R      | 0x0   | ALT_SPIM_ISR_RXUIS   
 *  [3]    | R      | 0x0   | ALT_SPIM_ISR_RXOIS   
 *  [4]    | R      | 0x0   | ALT_SPIM_ISR_RXFIS   
 *  [5]    | R      | 0x0   | ALT_SPIM_ISR_MSTIS   
 *  [31:6] | R      | 0x0   | ALT_SPIM_ISR_RSVD_ISR
 * 
 */
/*
 * Field : TXEIS
 * 
 * Transmit FIFO Empty Interrupt Status
 * 
 * 0 = ssi_txe_intr interrupt is not active after masking
 * 
 * 1 = ssi_txe_intr interrupt is active after masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                      
 * :------------------------------|:------|:----------------------------------
 *  ALT_SPIM_ISR_TXEIS_E_INACTIVE | 0x0   | TX FIFO Empty Interrupt nonactive
 *  ALT_SPIM_ISR_TXEIS_E_ACTIVE   | 0x1   | TX FIFO Empty Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_ISR_TXEIS
 * 
 * TX FIFO Empty Interrupt nonactive
 */
#define ALT_SPIM_ISR_TXEIS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_SPIM_ISR_TXEIS
 * 
 * TX FIFO Empty Interrupt is active
 */
#define ALT_SPIM_ISR_TXEIS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_ISR_TXEIS register field. */
#define ALT_SPIM_ISR_TXEIS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ISR_TXEIS register field. */
#define ALT_SPIM_ISR_TXEIS_MSB        0
/* The width in bits of the ALT_SPIM_ISR_TXEIS register field. */
#define ALT_SPIM_ISR_TXEIS_WIDTH      1
/* The mask used to set the ALT_SPIM_ISR_TXEIS register field value. */
#define ALT_SPIM_ISR_TXEIS_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_ISR_TXEIS register field value. */
#define ALT_SPIM_ISR_TXEIS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_ISR_TXEIS register field. */
#define ALT_SPIM_ISR_TXEIS_RESET      0x0
/* Extracts the ALT_SPIM_ISR_TXEIS field value from a register. */
#define ALT_SPIM_ISR_TXEIS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_ISR_TXEIS register field value suitable for setting the register. */
#define ALT_SPIM_ISR_TXEIS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TXOIS
 * 
 * Transmit FIFO Overflow Interrupt Status
 * 
 * 0 = ssi_txo_intr interrupt is not active after masking
 * 
 * 1 = ssi_txo_intr interrupt is active after masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                         
 * :------------------------------|:------|:-------------------------------------
 *  ALT_SPIM_ISR_TXOIS_E_INACTIVE | 0x0   | TX FIFO Overflow Interrupt nonactive
 *  ALT_SPIM_ISR_TXOIS_E_ACTIVE   | 0x1   | TX FIFO Overflow Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_ISR_TXOIS
 * 
 * TX FIFO Overflow Interrupt nonactive
 */
#define ALT_SPIM_ISR_TXOIS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_SPIM_ISR_TXOIS
 * 
 * TX FIFO Overflow Interrupt is active
 */
#define ALT_SPIM_ISR_TXOIS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_ISR_TXOIS register field. */
#define ALT_SPIM_ISR_TXOIS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ISR_TXOIS register field. */
#define ALT_SPIM_ISR_TXOIS_MSB        1
/* The width in bits of the ALT_SPIM_ISR_TXOIS register field. */
#define ALT_SPIM_ISR_TXOIS_WIDTH      1
/* The mask used to set the ALT_SPIM_ISR_TXOIS register field value. */
#define ALT_SPIM_ISR_TXOIS_SET_MSK    0x00000002
/* The mask used to clear the ALT_SPIM_ISR_TXOIS register field value. */
#define ALT_SPIM_ISR_TXOIS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SPIM_ISR_TXOIS register field. */
#define ALT_SPIM_ISR_TXOIS_RESET      0x0
/* Extracts the ALT_SPIM_ISR_TXOIS field value from a register. */
#define ALT_SPIM_ISR_TXOIS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SPIM_ISR_TXOIS register field value suitable for setting the register. */
#define ALT_SPIM_ISR_TXOIS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RXUIS
 * 
 * Receive FIFO Underflow Interrupt Status
 * 
 * 0 = ssi_rxu_intr interrupt is not active after masking
 * 
 * 1 = ssi_rxu_intr interrupt is active after masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                          
 * :------------------------------|:------|:--------------------------------------
 *  ALT_SPIM_ISR_RXUIS_E_INACTIVE | 0x0   | RX FIFO Underflow Interrupt nonactive
 *  ALT_SPIM_ISR_RXUIS_E_ACTIVE   | 0x1   | RX FIFO underflow Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_ISR_RXUIS
 * 
 * RX FIFO Underflow Interrupt nonactive
 */
#define ALT_SPIM_ISR_RXUIS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_SPIM_ISR_RXUIS
 * 
 * RX FIFO underflow Interrupt is active
 */
#define ALT_SPIM_ISR_RXUIS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_ISR_RXUIS register field. */
#define ALT_SPIM_ISR_RXUIS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ISR_RXUIS register field. */
#define ALT_SPIM_ISR_RXUIS_MSB        2
/* The width in bits of the ALT_SPIM_ISR_RXUIS register field. */
#define ALT_SPIM_ISR_RXUIS_WIDTH      1
/* The mask used to set the ALT_SPIM_ISR_RXUIS register field value. */
#define ALT_SPIM_ISR_RXUIS_SET_MSK    0x00000004
/* The mask used to clear the ALT_SPIM_ISR_RXUIS register field value. */
#define ALT_SPIM_ISR_RXUIS_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SPIM_ISR_RXUIS register field. */
#define ALT_SPIM_ISR_RXUIS_RESET      0x0
/* Extracts the ALT_SPIM_ISR_RXUIS field value from a register. */
#define ALT_SPIM_ISR_RXUIS_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SPIM_ISR_RXUIS register field value suitable for setting the register. */
#define ALT_SPIM_ISR_RXUIS_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RXOIS
 * 
 * Receive FIFO Overflow Interrupt Status
 * 
 * 0 = ssi_rxo_intr interrupt is not active after masking
 * 
 * 1 = ssi_rxo_intr interrupt is active after masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                         
 * :------------------------------|:------|:-------------------------------------
 *  ALT_SPIM_ISR_RXOIS_E_INACTIVE | 0x0   | RX FIFO Overflow Interrupt nonactive
 *  ALT_SPIM_ISR_RXOIS_E_ACTIVE   | 0x1   | RX FIFO Overflow Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_ISR_RXOIS
 * 
 * RX FIFO Overflow Interrupt nonactive
 */
#define ALT_SPIM_ISR_RXOIS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_SPIM_ISR_RXOIS
 * 
 * RX FIFO Overflow Interrupt is active
 */
#define ALT_SPIM_ISR_RXOIS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_ISR_RXOIS register field. */
#define ALT_SPIM_ISR_RXOIS_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ISR_RXOIS register field. */
#define ALT_SPIM_ISR_RXOIS_MSB        3
/* The width in bits of the ALT_SPIM_ISR_RXOIS register field. */
#define ALT_SPIM_ISR_RXOIS_WIDTH      1
/* The mask used to set the ALT_SPIM_ISR_RXOIS register field value. */
#define ALT_SPIM_ISR_RXOIS_SET_MSK    0x00000008
/* The mask used to clear the ALT_SPIM_ISR_RXOIS register field value. */
#define ALT_SPIM_ISR_RXOIS_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SPIM_ISR_RXOIS register field. */
#define ALT_SPIM_ISR_RXOIS_RESET      0x0
/* Extracts the ALT_SPIM_ISR_RXOIS field value from a register. */
#define ALT_SPIM_ISR_RXOIS_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SPIM_ISR_RXOIS register field value suitable for setting the register. */
#define ALT_SPIM_ISR_RXOIS_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RXFIS
 * 
 * Receive FIFO Full Interrupt Status
 * 
 * 0 = ssi_rxf_intr interrupt is not active after masking
 * 
 * 1 = ssi_rxf_intr interrupt is full after masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                     
 * :------------------------------|:------|:---------------------------------
 *  ALT_SPIM_ISR_RXFIS_E_INACTIVE | 0x0   | RX FIFO Full Interrupt nonactive
 *  ALT_SPIM_ISR_RXFIS_E_ACTIVE   | 0x1   | RX FIFO Full Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_ISR_RXFIS
 * 
 * RX FIFO Full Interrupt nonactive
 */
#define ALT_SPIM_ISR_RXFIS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_SPIM_ISR_RXFIS
 * 
 * RX FIFO Full Interrupt is active
 */
#define ALT_SPIM_ISR_RXFIS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_ISR_RXFIS register field. */
#define ALT_SPIM_ISR_RXFIS_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ISR_RXFIS register field. */
#define ALT_SPIM_ISR_RXFIS_MSB        4
/* The width in bits of the ALT_SPIM_ISR_RXFIS register field. */
#define ALT_SPIM_ISR_RXFIS_WIDTH      1
/* The mask used to set the ALT_SPIM_ISR_RXFIS register field value. */
#define ALT_SPIM_ISR_RXFIS_SET_MSK    0x00000010
/* The mask used to clear the ALT_SPIM_ISR_RXFIS register field value. */
#define ALT_SPIM_ISR_RXFIS_CLR_MSK    0xffffffef
/* The reset value of the ALT_SPIM_ISR_RXFIS register field. */
#define ALT_SPIM_ISR_RXFIS_RESET      0x0
/* Extracts the ALT_SPIM_ISR_RXFIS field value from a register. */
#define ALT_SPIM_ISR_RXFIS_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SPIM_ISR_RXFIS register field value suitable for setting the register. */
#define ALT_SPIM_ISR_RXFIS_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : MSTIS
 * 
 * Multi-Master Contention Interrupt Status. This bit field is not present
 * 
 * if the DW_apb_ssi is configured as a serial-slave device.
 * 
 * 0 = ssi_mst_intr interrupt not active after masking
 * 
 * 1 = ssi_mst_intr interrupt is active after masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                                
 * :------------------------------|:------|:--------------------------------------------
 *  ALT_SPIM_ISR_MSTIS_E_INACTIVE | 0x0   | Multi-master Contention Interrupt nonactive
 *  ALT_SPIM_ISR_MSTIS_E_ACTIVE   | 0x1   | Multi-master Contention Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_ISR_MSTIS
 * 
 * Multi-master Contention Interrupt nonactive
 */
#define ALT_SPIM_ISR_MSTIS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_SPIM_ISR_MSTIS
 * 
 * Multi-master Contention Interrupt is active
 */
#define ALT_SPIM_ISR_MSTIS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_ISR_MSTIS register field. */
#define ALT_SPIM_ISR_MSTIS_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ISR_MSTIS register field. */
#define ALT_SPIM_ISR_MSTIS_MSB        5
/* The width in bits of the ALT_SPIM_ISR_MSTIS register field. */
#define ALT_SPIM_ISR_MSTIS_WIDTH      1
/* The mask used to set the ALT_SPIM_ISR_MSTIS register field value. */
#define ALT_SPIM_ISR_MSTIS_SET_MSK    0x00000020
/* The mask used to clear the ALT_SPIM_ISR_MSTIS register field value. */
#define ALT_SPIM_ISR_MSTIS_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SPIM_ISR_MSTIS register field. */
#define ALT_SPIM_ISR_MSTIS_RESET      0x0
/* Extracts the ALT_SPIM_ISR_MSTIS field value from a register. */
#define ALT_SPIM_ISR_MSTIS_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SPIM_ISR_MSTIS register field value suitable for setting the register. */
#define ALT_SPIM_ISR_MSTIS_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RSVD_ISR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_ISR_RSVD_ISR register field. */
#define ALT_SPIM_ISR_RSVD_ISR_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ISR_RSVD_ISR register field. */
#define ALT_SPIM_ISR_RSVD_ISR_MSB        31
/* The width in bits of the ALT_SPIM_ISR_RSVD_ISR register field. */
#define ALT_SPIM_ISR_RSVD_ISR_WIDTH      26
/* The mask used to set the ALT_SPIM_ISR_RSVD_ISR register field value. */
#define ALT_SPIM_ISR_RSVD_ISR_SET_MSK    0xffffffc0
/* The mask used to clear the ALT_SPIM_ISR_RSVD_ISR register field value. */
#define ALT_SPIM_ISR_RSVD_ISR_CLR_MSK    0x0000003f
/* The reset value of the ALT_SPIM_ISR_RSVD_ISR register field. */
#define ALT_SPIM_ISR_RSVD_ISR_RESET      0x0
/* Extracts the ALT_SPIM_ISR_RSVD_ISR field value from a register. */
#define ALT_SPIM_ISR_RSVD_ISR_GET(value) (((value) & 0xffffffc0) >> 6)
/* Produces a ALT_SPIM_ISR_RSVD_ISR register field value suitable for setting the register. */
#define ALT_SPIM_ISR_RSVD_ISR_SET(value) (((value) << 6) & 0xffffffc0)

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
 * The struct declaration for register ALT_SPIM_ISR.
 */
struct ALT_SPIM_ISR_s
{
    const volatile uint32_t  TXEIS    :  1;  /* ALT_SPIM_ISR_TXEIS */
    const volatile uint32_t  TXOIS    :  1;  /* ALT_SPIM_ISR_TXOIS */
    const volatile uint32_t  RXUIS    :  1;  /* ALT_SPIM_ISR_RXUIS */
    const volatile uint32_t  RXOIS    :  1;  /* ALT_SPIM_ISR_RXOIS */
    const volatile uint32_t  RXFIS    :  1;  /* ALT_SPIM_ISR_RXFIS */
    const volatile uint32_t  MSTIS    :  1;  /* ALT_SPIM_ISR_MSTIS */
    const volatile uint32_t  RSVD_ISR : 26;  /* ALT_SPIM_ISR_RSVD_ISR */
};

/* The typedef declaration for register ALT_SPIM_ISR. */
typedef struct ALT_SPIM_ISR_s  ALT_SPIM_ISR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_ISR register. */
#define ALT_SPIM_ISR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_ISR register from the beginning of the component. */
#define ALT_SPIM_ISR_OFST        0x30
/* The address of the ALT_SPIM_ISR register. */
#define ALT_SPIM_ISR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_ISR_OFST))

/*
 * Register : Raw Interrupt Status Register - RISR
 * 
 * Raw Interrupt Status Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description            
 * :-------|:-------|:------|:------------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_RISR_TXEIR    
 *  [1]    | R      | 0x0   | ALT_SPIM_RISR_TXOIR    
 *  [2]    | R      | 0x0   | ALT_SPIM_RISR_RXUIR    
 *  [3]    | R      | 0x0   | ALT_SPIM_RISR_RXOIR    
 *  [4]    | R      | 0x0   | ALT_SPIM_RISR_RXFIR    
 *  [5]    | R      | 0x0   | ALT_SPIM_RISR_MSTIR    
 *  [31:6] | R      | 0x0   | ALT_SPIM_RISR_RSVD_RISR
 * 
 */
/*
 * Field : TXEIR
 * 
 * Transmit FIFO Empty Raw Interrupt Status
 * 
 * 0 = ssi_txe_intr interrupt is not active prior to masking
 * 
 * 1 = ssi_txe_intr interrupt is active prior masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description                          
 * :-------------------------------|:------|:--------------------------------------
 *  ALT_SPIM_RISR_TXEIR_E_INACTIVE | 0x0   | Raw TX FIFO Empty Interrupt nonactive
 *  ALT_SPIM_RISR_TXEIR_E_ACTIVE   | 0x1   | Raw TX FIFO Empty Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_RISR_TXEIR
 * 
 * Raw TX FIFO Empty Interrupt nonactive
 */
#define ALT_SPIM_RISR_TXEIR_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_SPIM_RISR_TXEIR
 * 
 * Raw TX FIFO Empty Interrupt is active
 */
#define ALT_SPIM_RISR_TXEIR_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_RISR_TXEIR register field. */
#define ALT_SPIM_RISR_TXEIR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RISR_TXEIR register field. */
#define ALT_SPIM_RISR_TXEIR_MSB        0
/* The width in bits of the ALT_SPIM_RISR_TXEIR register field. */
#define ALT_SPIM_RISR_TXEIR_WIDTH      1
/* The mask used to set the ALT_SPIM_RISR_TXEIR register field value. */
#define ALT_SPIM_RISR_TXEIR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_RISR_TXEIR register field value. */
#define ALT_SPIM_RISR_TXEIR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_RISR_TXEIR register field. */
#define ALT_SPIM_RISR_TXEIR_RESET      0x0
/* Extracts the ALT_SPIM_RISR_TXEIR field value from a register. */
#define ALT_SPIM_RISR_TXEIR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_RISR_TXEIR register field value suitable for setting the register. */
#define ALT_SPIM_RISR_TXEIR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TXOIR
 * 
 * Transmit FIFO Overflow Raw Interrupt Status
 * 
 * 0 = ssi_txo_intr interrupt is not active prior to masking
 * 
 * 1 = ssi_txo_intr interrupt is active prior masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description                             
 * :-------------------------------|:------|:-----------------------------------------
 *  ALT_SPIM_RISR_TXOIR_E_INACTIVE | 0x0   | Raw TX FIFO Overflow Interrupt nonactive
 *  ALT_SPIM_RISR_TXOIR_E_ACTIVE   | 0x1   | Raw TX FIFO Overflow Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_RISR_TXOIR
 * 
 * Raw TX FIFO Overflow Interrupt nonactive
 */
#define ALT_SPIM_RISR_TXOIR_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_SPIM_RISR_TXOIR
 * 
 * Raw TX FIFO Overflow Interrupt is active
 */
#define ALT_SPIM_RISR_TXOIR_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_RISR_TXOIR register field. */
#define ALT_SPIM_RISR_TXOIR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RISR_TXOIR register field. */
#define ALT_SPIM_RISR_TXOIR_MSB        1
/* The width in bits of the ALT_SPIM_RISR_TXOIR register field. */
#define ALT_SPIM_RISR_TXOIR_WIDTH      1
/* The mask used to set the ALT_SPIM_RISR_TXOIR register field value. */
#define ALT_SPIM_RISR_TXOIR_SET_MSK    0x00000002
/* The mask used to clear the ALT_SPIM_RISR_TXOIR register field value. */
#define ALT_SPIM_RISR_TXOIR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SPIM_RISR_TXOIR register field. */
#define ALT_SPIM_RISR_TXOIR_RESET      0x0
/* Extracts the ALT_SPIM_RISR_TXOIR field value from a register. */
#define ALT_SPIM_RISR_TXOIR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SPIM_RISR_TXOIR register field value suitable for setting the register. */
#define ALT_SPIM_RISR_TXOIR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RXUIR
 * 
 * Receive FIFO Underflow Raw Interrupt Status
 * 
 * 0 = ssi_rxu_intr interrupt is not active prior to masking
 * 
 * 1 = ssi_rxu_intr interrupt is active prior to masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description                              
 * :-------------------------------|:------|:------------------------------------------
 *  ALT_SPIM_RISR_RXUIR_E_INACTIVE | 0x0   | Raw RX FIFO Underflow Interrupt nonactive
 *  ALT_SPIM_RISR_RXUIR_E_ACTIVE   | 0x1   | Raw RX FIFO underflow Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_RISR_RXUIR
 * 
 * Raw RX FIFO Underflow Interrupt nonactive
 */
#define ALT_SPIM_RISR_RXUIR_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_SPIM_RISR_RXUIR
 * 
 * Raw RX FIFO underflow Interrupt is active
 */
#define ALT_SPIM_RISR_RXUIR_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_RISR_RXUIR register field. */
#define ALT_SPIM_RISR_RXUIR_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RISR_RXUIR register field. */
#define ALT_SPIM_RISR_RXUIR_MSB        2
/* The width in bits of the ALT_SPIM_RISR_RXUIR register field. */
#define ALT_SPIM_RISR_RXUIR_WIDTH      1
/* The mask used to set the ALT_SPIM_RISR_RXUIR register field value. */
#define ALT_SPIM_RISR_RXUIR_SET_MSK    0x00000004
/* The mask used to clear the ALT_SPIM_RISR_RXUIR register field value. */
#define ALT_SPIM_RISR_RXUIR_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SPIM_RISR_RXUIR register field. */
#define ALT_SPIM_RISR_RXUIR_RESET      0x0
/* Extracts the ALT_SPIM_RISR_RXUIR field value from a register. */
#define ALT_SPIM_RISR_RXUIR_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SPIM_RISR_RXUIR register field value suitable for setting the register. */
#define ALT_SPIM_RISR_RXUIR_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RXOIR
 * 
 * Receive FIFO Overflow Raw Interrupt Status
 * 
 * 0 = ssi_rxo_intr interrupt is not active prior to masking
 * 
 * 1 = ssi_rxo_intr interrupt is active prior masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description                             
 * :-------------------------------|:------|:-----------------------------------------
 *  ALT_SPIM_RISR_RXOIR_E_INACTIVE | 0x0   | Raw RX FIFO Overflow Interrupt nonactive
 *  ALT_SPIM_RISR_RXOIR_E_ACTIVE   | 0x1   | Raw RX FIFO Overflow Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_RISR_RXOIR
 * 
 * Raw RX FIFO Overflow Interrupt nonactive
 */
#define ALT_SPIM_RISR_RXOIR_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_SPIM_RISR_RXOIR
 * 
 * Raw RX FIFO Overflow Interrupt is active
 */
#define ALT_SPIM_RISR_RXOIR_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_RISR_RXOIR register field. */
#define ALT_SPIM_RISR_RXOIR_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RISR_RXOIR register field. */
#define ALT_SPIM_RISR_RXOIR_MSB        3
/* The width in bits of the ALT_SPIM_RISR_RXOIR register field. */
#define ALT_SPIM_RISR_RXOIR_WIDTH      1
/* The mask used to set the ALT_SPIM_RISR_RXOIR register field value. */
#define ALT_SPIM_RISR_RXOIR_SET_MSK    0x00000008
/* The mask used to clear the ALT_SPIM_RISR_RXOIR register field value. */
#define ALT_SPIM_RISR_RXOIR_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SPIM_RISR_RXOIR register field. */
#define ALT_SPIM_RISR_RXOIR_RESET      0x0
/* Extracts the ALT_SPIM_RISR_RXOIR field value from a register. */
#define ALT_SPIM_RISR_RXOIR_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SPIM_RISR_RXOIR register field value suitable for setting the register. */
#define ALT_SPIM_RISR_RXOIR_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RXFIR
 * 
 * Receive FIFO Full Raw Interrupt Status
 * 
 * 0 = ssi_rxf_intr interrupt is not active prior to masking
 * 
 * 1 = ssi_rxf_intr interrupt is active prior to masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description                         
 * :-------------------------------|:------|:-------------------------------------
 *  ALT_SPIM_RISR_RXFIR_E_INACTIVE | 0x0   | Raw RX FIFO Full Interrupt nonactive
 *  ALT_SPIM_RISR_RXFIR_E_ACTIVE   | 0x1   | Raw RX FIFO Full Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_RISR_RXFIR
 * 
 * Raw RX FIFO Full Interrupt nonactive
 */
#define ALT_SPIM_RISR_RXFIR_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_SPIM_RISR_RXFIR
 * 
 * Raw RX FIFO Full Interrupt is active
 */
#define ALT_SPIM_RISR_RXFIR_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_RISR_RXFIR register field. */
#define ALT_SPIM_RISR_RXFIR_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RISR_RXFIR register field. */
#define ALT_SPIM_RISR_RXFIR_MSB        4
/* The width in bits of the ALT_SPIM_RISR_RXFIR register field. */
#define ALT_SPIM_RISR_RXFIR_WIDTH      1
/* The mask used to set the ALT_SPIM_RISR_RXFIR register field value. */
#define ALT_SPIM_RISR_RXFIR_SET_MSK    0x00000010
/* The mask used to clear the ALT_SPIM_RISR_RXFIR register field value. */
#define ALT_SPIM_RISR_RXFIR_CLR_MSK    0xffffffef
/* The reset value of the ALT_SPIM_RISR_RXFIR register field. */
#define ALT_SPIM_RISR_RXFIR_RESET      0x0
/* Extracts the ALT_SPIM_RISR_RXFIR field value from a register. */
#define ALT_SPIM_RISR_RXFIR_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SPIM_RISR_RXFIR register field value suitable for setting the register. */
#define ALT_SPIM_RISR_RXFIR_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : MSTIR
 * 
 * Multi-Master Contention Raw Interrupt Status.
 * 
 * This bit field is not present if the DW_apb_ssi is configured as a
 * 
 * serial-slave device.
 * 
 * 0 = ssi_mst_intr interrupt is not active prior to masking
 * 
 * 1 = ssi_mst_intr interrupt is active prior masking
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description                                    
 * :-------------------------------|:------|:------------------------------------------------
 *  ALT_SPIM_RISR_MSTIR_E_INACTIVE | 0x0   | Raw Multi-master Contention Interrupt nonactive
 *  ALT_SPIM_RISR_MSTIR_E_ACTIVE   | 0x1   | Raw Multi-master Contention Interrupt is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_RISR_MSTIR
 * 
 * Raw Multi-master Contention Interrupt nonactive
 */
#define ALT_SPIM_RISR_MSTIR_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_SPIM_RISR_MSTIR
 * 
 * Raw Multi-master Contention Interrupt is active
 */
#define ALT_SPIM_RISR_MSTIR_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_RISR_MSTIR register field. */
#define ALT_SPIM_RISR_MSTIR_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RISR_MSTIR register field. */
#define ALT_SPIM_RISR_MSTIR_MSB        5
/* The width in bits of the ALT_SPIM_RISR_MSTIR register field. */
#define ALT_SPIM_RISR_MSTIR_WIDTH      1
/* The mask used to set the ALT_SPIM_RISR_MSTIR register field value. */
#define ALT_SPIM_RISR_MSTIR_SET_MSK    0x00000020
/* The mask used to clear the ALT_SPIM_RISR_MSTIR register field value. */
#define ALT_SPIM_RISR_MSTIR_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SPIM_RISR_MSTIR register field. */
#define ALT_SPIM_RISR_MSTIR_RESET      0x0
/* Extracts the ALT_SPIM_RISR_MSTIR field value from a register. */
#define ALT_SPIM_RISR_MSTIR_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SPIM_RISR_MSTIR register field value suitable for setting the register. */
#define ALT_SPIM_RISR_MSTIR_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RSVD_RISR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RISR_RSVD_RISR register field. */
#define ALT_SPIM_RISR_RSVD_RISR_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RISR_RSVD_RISR register field. */
#define ALT_SPIM_RISR_RSVD_RISR_MSB        31
/* The width in bits of the ALT_SPIM_RISR_RSVD_RISR register field. */
#define ALT_SPIM_RISR_RSVD_RISR_WIDTH      26
/* The mask used to set the ALT_SPIM_RISR_RSVD_RISR register field value. */
#define ALT_SPIM_RISR_RSVD_RISR_SET_MSK    0xffffffc0
/* The mask used to clear the ALT_SPIM_RISR_RSVD_RISR register field value. */
#define ALT_SPIM_RISR_RSVD_RISR_CLR_MSK    0x0000003f
/* The reset value of the ALT_SPIM_RISR_RSVD_RISR register field. */
#define ALT_SPIM_RISR_RSVD_RISR_RESET      0x0
/* Extracts the ALT_SPIM_RISR_RSVD_RISR field value from a register. */
#define ALT_SPIM_RISR_RSVD_RISR_GET(value) (((value) & 0xffffffc0) >> 6)
/* Produces a ALT_SPIM_RISR_RSVD_RISR register field value suitable for setting the register. */
#define ALT_SPIM_RISR_RSVD_RISR_SET(value) (((value) << 6) & 0xffffffc0)

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
 * The struct declaration for register ALT_SPIM_RISR.
 */
struct ALT_SPIM_RISR_s
{
    const volatile uint32_t  TXEIR     :  1;  /* ALT_SPIM_RISR_TXEIR */
    const volatile uint32_t  TXOIR     :  1;  /* ALT_SPIM_RISR_TXOIR */
    const volatile uint32_t  RXUIR     :  1;  /* ALT_SPIM_RISR_RXUIR */
    const volatile uint32_t  RXOIR     :  1;  /* ALT_SPIM_RISR_RXOIR */
    const volatile uint32_t  RXFIR     :  1;  /* ALT_SPIM_RISR_RXFIR */
    const volatile uint32_t  MSTIR     :  1;  /* ALT_SPIM_RISR_MSTIR */
    const volatile uint32_t  RSVD_RISR : 26;  /* ALT_SPIM_RISR_RSVD_RISR */
};

/* The typedef declaration for register ALT_SPIM_RISR. */
typedef struct ALT_SPIM_RISR_s  ALT_SPIM_RISR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RISR register. */
#define ALT_SPIM_RISR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RISR register from the beginning of the component. */
#define ALT_SPIM_RISR_OFST        0x34
/* The address of the ALT_SPIM_RISR register. */
#define ALT_SPIM_RISR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RISR_OFST))

/*
 * Register : Transmit FIFO Overflow Interrupt Clear Register Register - TXOICR
 * 
 * Transmit FIFO Overflow Interrupt Clear Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_TXOICR_TXOICR     
 *  [31:1] | R      | 0x0   | ALT_SPIM_TXOICR_RSVD_TXOICR
 * 
 */
/*
 * Field : TXOICR
 * 
 * Clear Transmit FIFO Overflow Interrupt.
 * 
 * This register reflects the status of the interrupt. A read from this
 * 
 * register clears the ssi_txo_intr interrupt; writing has no effect.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_TXOICR_TXOICR register field. */
#define ALT_SPIM_TXOICR_TXOICR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_TXOICR_TXOICR register field. */
#define ALT_SPIM_TXOICR_TXOICR_MSB        0
/* The width in bits of the ALT_SPIM_TXOICR_TXOICR register field. */
#define ALT_SPIM_TXOICR_TXOICR_WIDTH      1
/* The mask used to set the ALT_SPIM_TXOICR_TXOICR register field value. */
#define ALT_SPIM_TXOICR_TXOICR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_TXOICR_TXOICR register field value. */
#define ALT_SPIM_TXOICR_TXOICR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_TXOICR_TXOICR register field. */
#define ALT_SPIM_TXOICR_TXOICR_RESET      0x0
/* Extracts the ALT_SPIM_TXOICR_TXOICR field value from a register. */
#define ALT_SPIM_TXOICR_TXOICR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_TXOICR_TXOICR register field value suitable for setting the register. */
#define ALT_SPIM_TXOICR_TXOICR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_TXOICR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_TXOICR_RSVD_TXOICR register field. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_TXOICR_RSVD_TXOICR register field. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_MSB        31
/* The width in bits of the ALT_SPIM_TXOICR_RSVD_TXOICR register field. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_WIDTH      31
/* The mask used to set the ALT_SPIM_TXOICR_RSVD_TXOICR register field value. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_SPIM_TXOICR_RSVD_TXOICR register field value. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_CLR_MSK    0x00000001
/* The reset value of the ALT_SPIM_TXOICR_RSVD_TXOICR register field. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_RESET      0x0
/* Extracts the ALT_SPIM_TXOICR_RSVD_TXOICR field value from a register. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_SPIM_TXOICR_RSVD_TXOICR register field value suitable for setting the register. */
#define ALT_SPIM_TXOICR_RSVD_TXOICR_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_SPIM_TXOICR.
 */
struct ALT_SPIM_TXOICR_s
{
    const volatile uint32_t  TXOICR      :  1;  /* ALT_SPIM_TXOICR_TXOICR */
    const volatile uint32_t  RSVD_TXOICR : 31;  /* ALT_SPIM_TXOICR_RSVD_TXOICR */
};

/* The typedef declaration for register ALT_SPIM_TXOICR. */
typedef struct ALT_SPIM_TXOICR_s  ALT_SPIM_TXOICR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_TXOICR register. */
#define ALT_SPIM_TXOICR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_TXOICR register from the beginning of the component. */
#define ALT_SPIM_TXOICR_OFST        0x38
/* The address of the ALT_SPIM_TXOICR register. */
#define ALT_SPIM_TXOICR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_TXOICR_OFST))

/*
 * Register : Receive FIFO Overflow Interrupt Clear Register - RXOICR
 * 
 * Receive FIFO Overflow Interrupt Clear Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_RXOICR_RXOICR     
 *  [31:1] | R      | 0x0   | ALT_SPIM_RXOICR_RSVD_RXOICR
 * 
 */
/*
 * Field : RXOICR
 * 
 * Clear Receive FIFO Overflow Interrupt.
 * 
 * This register reflects the status of the interrupt. A read from this
 * 
 * register clears the ssi_rxo_intr interrupt; writing has no effect.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXOICR_RXOICR register field. */
#define ALT_SPIM_RXOICR_RXOICR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXOICR_RXOICR register field. */
#define ALT_SPIM_RXOICR_RXOICR_MSB        0
/* The width in bits of the ALT_SPIM_RXOICR_RXOICR register field. */
#define ALT_SPIM_RXOICR_RXOICR_WIDTH      1
/* The mask used to set the ALT_SPIM_RXOICR_RXOICR register field value. */
#define ALT_SPIM_RXOICR_RXOICR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_RXOICR_RXOICR register field value. */
#define ALT_SPIM_RXOICR_RXOICR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_RXOICR_RXOICR register field. */
#define ALT_SPIM_RXOICR_RXOICR_RESET      0x0
/* Extracts the ALT_SPIM_RXOICR_RXOICR field value from a register. */
#define ALT_SPIM_RXOICR_RXOICR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_RXOICR_RXOICR register field value suitable for setting the register. */
#define ALT_SPIM_RXOICR_RXOICR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_RXOICR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXOICR_RSVD_RXOICR register field. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXOICR_RSVD_RXOICR register field. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_MSB        31
/* The width in bits of the ALT_SPIM_RXOICR_RSVD_RXOICR register field. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_WIDTH      31
/* The mask used to set the ALT_SPIM_RXOICR_RSVD_RXOICR register field value. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_SPIM_RXOICR_RSVD_RXOICR register field value. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_CLR_MSK    0x00000001
/* The reset value of the ALT_SPIM_RXOICR_RSVD_RXOICR register field. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_RESET      0x0
/* Extracts the ALT_SPIM_RXOICR_RSVD_RXOICR field value from a register. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_SPIM_RXOICR_RSVD_RXOICR register field value suitable for setting the register. */
#define ALT_SPIM_RXOICR_RSVD_RXOICR_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_SPIM_RXOICR.
 */
struct ALT_SPIM_RXOICR_s
{
    const volatile uint32_t  RXOICR      :  1;  /* ALT_SPIM_RXOICR_RXOICR */
    const volatile uint32_t  RSVD_RXOICR : 31;  /* ALT_SPIM_RXOICR_RSVD_RXOICR */
};

/* The typedef declaration for register ALT_SPIM_RXOICR. */
typedef struct ALT_SPIM_RXOICR_s  ALT_SPIM_RXOICR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RXOICR register. */
#define ALT_SPIM_RXOICR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RXOICR register from the beginning of the component. */
#define ALT_SPIM_RXOICR_OFST        0x3c
/* The address of the ALT_SPIM_RXOICR register. */
#define ALT_SPIM_RXOICR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RXOICR_OFST))

/*
 * Register : Receive FIFO Underflow Interrupt Clear Register - RXUICR
 * 
 * Receive FIFO Underflow Interrupt Clear Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_RXUICR_RXUICR     
 *  [31:1] | R      | 0x0   | ALT_SPIM_RXUICR_RSVD_RXUICR
 * 
 */
/*
 * Field : RXUICR
 * 
 * Clear Receive FIFO Underflow Interrupt.
 * 
 * This register reflects the status of the interrupt. A read from this
 * 
 * register clears the ssi_rxu_intr interrupt; writing has no effect.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXUICR_RXUICR register field. */
#define ALT_SPIM_RXUICR_RXUICR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXUICR_RXUICR register field. */
#define ALT_SPIM_RXUICR_RXUICR_MSB        0
/* The width in bits of the ALT_SPIM_RXUICR_RXUICR register field. */
#define ALT_SPIM_RXUICR_RXUICR_WIDTH      1
/* The mask used to set the ALT_SPIM_RXUICR_RXUICR register field value. */
#define ALT_SPIM_RXUICR_RXUICR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_RXUICR_RXUICR register field value. */
#define ALT_SPIM_RXUICR_RXUICR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_RXUICR_RXUICR register field. */
#define ALT_SPIM_RXUICR_RXUICR_RESET      0x0
/* Extracts the ALT_SPIM_RXUICR_RXUICR field value from a register. */
#define ALT_SPIM_RXUICR_RXUICR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_RXUICR_RXUICR register field value suitable for setting the register. */
#define ALT_SPIM_RXUICR_RXUICR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_RXUICR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RXUICR_RSVD_RXUICR register field. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RXUICR_RSVD_RXUICR register field. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_MSB        31
/* The width in bits of the ALT_SPIM_RXUICR_RSVD_RXUICR register field. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_WIDTH      31
/* The mask used to set the ALT_SPIM_RXUICR_RSVD_RXUICR register field value. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_SPIM_RXUICR_RSVD_RXUICR register field value. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_CLR_MSK    0x00000001
/* The reset value of the ALT_SPIM_RXUICR_RSVD_RXUICR register field. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_RESET      0x0
/* Extracts the ALT_SPIM_RXUICR_RSVD_RXUICR field value from a register. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_SPIM_RXUICR_RSVD_RXUICR register field value suitable for setting the register. */
#define ALT_SPIM_RXUICR_RSVD_RXUICR_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_SPIM_RXUICR.
 */
struct ALT_SPIM_RXUICR_s
{
    const volatile uint32_t  RXUICR      :  1;  /* ALT_SPIM_RXUICR_RXUICR */
    const volatile uint32_t  RSVD_RXUICR : 31;  /* ALT_SPIM_RXUICR_RSVD_RXUICR */
};

/* The typedef declaration for register ALT_SPIM_RXUICR. */
typedef struct ALT_SPIM_RXUICR_s  ALT_SPIM_RXUICR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RXUICR register. */
#define ALT_SPIM_RXUICR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RXUICR register from the beginning of the component. */
#define ALT_SPIM_RXUICR_OFST        0x40
/* The address of the ALT_SPIM_RXUICR register. */
#define ALT_SPIM_RXUICR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RXUICR_OFST))

/*
 * Register : Multi-Master Interrupt Clear Register - MSTICR
 * 
 * Multi-Master Interrupt Clear Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_MSTICR_MSTICR     
 *  [31:1] | R      | 0x0   | ALT_SPIM_MSTICR_RSVD_MSTICR
 * 
 */
/*
 * Field : MSTICR
 * 
 * Clear Multi-Master Contention Interrupt.
 * 
 * This register reflects the status of the interrupt. A read from this
 * 
 * register clears the ssi_mst_intr interrupt; writing has no effect.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_MSTICR_MSTICR register field. */
#define ALT_SPIM_MSTICR_MSTICR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_MSTICR_MSTICR register field. */
#define ALT_SPIM_MSTICR_MSTICR_MSB        0
/* The width in bits of the ALT_SPIM_MSTICR_MSTICR register field. */
#define ALT_SPIM_MSTICR_MSTICR_WIDTH      1
/* The mask used to set the ALT_SPIM_MSTICR_MSTICR register field value. */
#define ALT_SPIM_MSTICR_MSTICR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_MSTICR_MSTICR register field value. */
#define ALT_SPIM_MSTICR_MSTICR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_MSTICR_MSTICR register field. */
#define ALT_SPIM_MSTICR_MSTICR_RESET      0x0
/* Extracts the ALT_SPIM_MSTICR_MSTICR field value from a register. */
#define ALT_SPIM_MSTICR_MSTICR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_MSTICR_MSTICR register field value suitable for setting the register. */
#define ALT_SPIM_MSTICR_MSTICR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_MSTICR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_MSTICR_RSVD_MSTICR register field. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_MSTICR_RSVD_MSTICR register field. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_MSB        31
/* The width in bits of the ALT_SPIM_MSTICR_RSVD_MSTICR register field. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_WIDTH      31
/* The mask used to set the ALT_SPIM_MSTICR_RSVD_MSTICR register field value. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_SPIM_MSTICR_RSVD_MSTICR register field value. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_CLR_MSK    0x00000001
/* The reset value of the ALT_SPIM_MSTICR_RSVD_MSTICR register field. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_RESET      0x0
/* Extracts the ALT_SPIM_MSTICR_RSVD_MSTICR field value from a register. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_SPIM_MSTICR_RSVD_MSTICR register field value suitable for setting the register. */
#define ALT_SPIM_MSTICR_RSVD_MSTICR_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_SPIM_MSTICR.
 */
struct ALT_SPIM_MSTICR_s
{
    const volatile uint32_t  MSTICR      :  1;  /* ALT_SPIM_MSTICR_MSTICR */
    const volatile uint32_t  RSVD_MSTICR : 31;  /* ALT_SPIM_MSTICR_RSVD_MSTICR */
};

/* The typedef declaration for register ALT_SPIM_MSTICR. */
typedef struct ALT_SPIM_MSTICR_s  ALT_SPIM_MSTICR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_MSTICR register. */
#define ALT_SPIM_MSTICR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_MSTICR register from the beginning of the component. */
#define ALT_SPIM_MSTICR_OFST        0x44
/* The address of the ALT_SPIM_MSTICR register. */
#define ALT_SPIM_MSTICR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_MSTICR_OFST))

/*
 * Register : Interrupt Clear Register - ICR
 * 
 * Interrupt Clear Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | R      | 0x0   | ALT_SPIM_ICR_ICR     
 *  [31:1] | R      | 0x0   | ALT_SPIM_ICR_RSVD_ICR
 * 
 */
/*
 * Field : ICR
 * 
 * Clear Interrupts.
 * 
 * This register is set if any of the interrupts below are active. A read
 * 
 * clears the ssi_txo_intr, ssi_rxu_intr, ssi_rxo_intr, and the ssi_mst_intr
 * 
 * interrupts. Writing to this register has no effect.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_ICR_ICR register field. */
#define ALT_SPIM_ICR_ICR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ICR_ICR register field. */
#define ALT_SPIM_ICR_ICR_MSB        0
/* The width in bits of the ALT_SPIM_ICR_ICR register field. */
#define ALT_SPIM_ICR_ICR_WIDTH      1
/* The mask used to set the ALT_SPIM_ICR_ICR register field value. */
#define ALT_SPIM_ICR_ICR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_ICR_ICR register field value. */
#define ALT_SPIM_ICR_ICR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_ICR_ICR register field. */
#define ALT_SPIM_ICR_ICR_RESET      0x0
/* Extracts the ALT_SPIM_ICR_ICR field value from a register. */
#define ALT_SPIM_ICR_ICR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_ICR_ICR register field value suitable for setting the register. */
#define ALT_SPIM_ICR_ICR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_ICR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_ICR_RSVD_ICR register field. */
#define ALT_SPIM_ICR_RSVD_ICR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_ICR_RSVD_ICR register field. */
#define ALT_SPIM_ICR_RSVD_ICR_MSB        31
/* The width in bits of the ALT_SPIM_ICR_RSVD_ICR register field. */
#define ALT_SPIM_ICR_RSVD_ICR_WIDTH      31
/* The mask used to set the ALT_SPIM_ICR_RSVD_ICR register field value. */
#define ALT_SPIM_ICR_RSVD_ICR_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_SPIM_ICR_RSVD_ICR register field value. */
#define ALT_SPIM_ICR_RSVD_ICR_CLR_MSK    0x00000001
/* The reset value of the ALT_SPIM_ICR_RSVD_ICR register field. */
#define ALT_SPIM_ICR_RSVD_ICR_RESET      0x0
/* Extracts the ALT_SPIM_ICR_RSVD_ICR field value from a register. */
#define ALT_SPIM_ICR_RSVD_ICR_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_SPIM_ICR_RSVD_ICR register field value suitable for setting the register. */
#define ALT_SPIM_ICR_RSVD_ICR_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_SPIM_ICR.
 */
struct ALT_SPIM_ICR_s
{
    const volatile uint32_t  ICR      :  1;  /* ALT_SPIM_ICR_ICR */
    const volatile uint32_t  RSVD_ICR : 31;  /* ALT_SPIM_ICR_RSVD_ICR */
};

/* The typedef declaration for register ALT_SPIM_ICR. */
typedef struct ALT_SPIM_ICR_s  ALT_SPIM_ICR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_ICR register. */
#define ALT_SPIM_ICR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_ICR register from the beginning of the component. */
#define ALT_SPIM_ICR_OFST        0x48
/* The address of the ALT_SPIM_ICR register. */
#define ALT_SPIM_ICR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_ICR_OFST))

/*
 * Register : DMA Control Register - DMACR
 * 
 * DMA Control Register.
 * 
 * This register is only valid when DW_apb_ssi is configured with a set of
 * 
 * DMA Controller interface signals (SSI_HAS_DMA = 1). When DW_apb_ssi is
 * 
 * not configured for DMA operation, this register will not exist and writing
 * 
 * to the register's address will have no effect; reading from this register
 * 
 * address will return zero. The register is used to enable the DMA
 * 
 * Controller interface operation.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [0]    | RW     | 0x0   | ALT_SPIM_DMACR_RDMAE     
 *  [1]    | RW     | 0x0   | ALT_SPIM_DMACR_TDMAE     
 *  [31:2] | R      | 0x0   | ALT_SPIM_DMACR_RSVD_DMACR
 * 
 */
/*
 * Field : RDMAE
 * 
 * Receive DMA Enable.
 * 
 * This bit enables/disables the receive FIFO DMA channel
 * 
 * 0 = Receive DMA disabled
 * 
 * 1 = Receive DMA enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description          
 * :-------------------------------|:------|:----------------------
 *  ALT_SPIM_DMACR_RDMAE_E_DISABLE | 0x0   | Recieve  DMA Disabled
 *  ALT_SPIM_DMACR_RDMAE_E_ENABLED | 0x1   | Recieve  DMA  Enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_DMACR_RDMAE
 * 
 * Recieve  DMA Disabled
 */
#define ALT_SPIM_DMACR_RDMAE_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SPIM_DMACR_RDMAE
 * 
 * Recieve  DMA  Enabled
 */
#define ALT_SPIM_DMACR_RDMAE_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_DMACR_RDMAE register field. */
#define ALT_SPIM_DMACR_RDMAE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DMACR_RDMAE register field. */
#define ALT_SPIM_DMACR_RDMAE_MSB        0
/* The width in bits of the ALT_SPIM_DMACR_RDMAE register field. */
#define ALT_SPIM_DMACR_RDMAE_WIDTH      1
/* The mask used to set the ALT_SPIM_DMACR_RDMAE register field value. */
#define ALT_SPIM_DMACR_RDMAE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SPIM_DMACR_RDMAE register field value. */
#define ALT_SPIM_DMACR_RDMAE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SPIM_DMACR_RDMAE register field. */
#define ALT_SPIM_DMACR_RDMAE_RESET      0x0
/* Extracts the ALT_SPIM_DMACR_RDMAE field value from a register. */
#define ALT_SPIM_DMACR_RDMAE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SPIM_DMACR_RDMAE register field value suitable for setting the register. */
#define ALT_SPIM_DMACR_RDMAE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TDMAE
 * 
 * Transmit DMA Enable.
 * 
 * This bit enables/disables the transmit FIFO DMA channel.
 * 
 * 0 = Transmit DMA disabled
 * 
 * 1 = Transmit DMA enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description           
 * :-------------------------------|:------|:-----------------------
 *  ALT_SPIM_DMACR_TDMAE_E_DISABLE | 0x0   | Transmit  DMA Disabled
 *  ALT_SPIM_DMACR_TDMAE_E_ENABLED | 0x1   | Transmit  DMA  Enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SPIM_DMACR_TDMAE
 * 
 * Transmit  DMA Disabled
 */
#define ALT_SPIM_DMACR_TDMAE_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SPIM_DMACR_TDMAE
 * 
 * Transmit  DMA  Enabled
 */
#define ALT_SPIM_DMACR_TDMAE_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SPIM_DMACR_TDMAE register field. */
#define ALT_SPIM_DMACR_TDMAE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DMACR_TDMAE register field. */
#define ALT_SPIM_DMACR_TDMAE_MSB        1
/* The width in bits of the ALT_SPIM_DMACR_TDMAE register field. */
#define ALT_SPIM_DMACR_TDMAE_WIDTH      1
/* The mask used to set the ALT_SPIM_DMACR_TDMAE register field value. */
#define ALT_SPIM_DMACR_TDMAE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SPIM_DMACR_TDMAE register field value. */
#define ALT_SPIM_DMACR_TDMAE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SPIM_DMACR_TDMAE register field. */
#define ALT_SPIM_DMACR_TDMAE_RESET      0x0
/* Extracts the ALT_SPIM_DMACR_TDMAE field value from a register. */
#define ALT_SPIM_DMACR_TDMAE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SPIM_DMACR_TDMAE register field value suitable for setting the register. */
#define ALT_SPIM_DMACR_TDMAE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RSVD_DMACR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DMACR_RSVD_DMACR register field. */
#define ALT_SPIM_DMACR_RSVD_DMACR_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DMACR_RSVD_DMACR register field. */
#define ALT_SPIM_DMACR_RSVD_DMACR_MSB        31
/* The width in bits of the ALT_SPIM_DMACR_RSVD_DMACR register field. */
#define ALT_SPIM_DMACR_RSVD_DMACR_WIDTH      30
/* The mask used to set the ALT_SPIM_DMACR_RSVD_DMACR register field value. */
#define ALT_SPIM_DMACR_RSVD_DMACR_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_SPIM_DMACR_RSVD_DMACR register field value. */
#define ALT_SPIM_DMACR_RSVD_DMACR_CLR_MSK    0x00000003
/* The reset value of the ALT_SPIM_DMACR_RSVD_DMACR register field. */
#define ALT_SPIM_DMACR_RSVD_DMACR_RESET      0x0
/* Extracts the ALT_SPIM_DMACR_RSVD_DMACR field value from a register. */
#define ALT_SPIM_DMACR_RSVD_DMACR_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_SPIM_DMACR_RSVD_DMACR register field value suitable for setting the register. */
#define ALT_SPIM_DMACR_RSVD_DMACR_SET(value) (((value) << 2) & 0xfffffffc)

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
 * The struct declaration for register ALT_SPIM_DMACR.
 */
struct ALT_SPIM_DMACR_s
{
    volatile uint32_t        RDMAE      :  1;  /* ALT_SPIM_DMACR_RDMAE */
    volatile uint32_t        TDMAE      :  1;  /* ALT_SPIM_DMACR_TDMAE */
    const volatile uint32_t  RSVD_DMACR : 30;  /* ALT_SPIM_DMACR_RSVD_DMACR */
};

/* The typedef declaration for register ALT_SPIM_DMACR. */
typedef struct ALT_SPIM_DMACR_s  ALT_SPIM_DMACR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DMACR register. */
#define ALT_SPIM_DMACR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DMACR register from the beginning of the component. */
#define ALT_SPIM_DMACR_OFST        0x4c
/* The address of the ALT_SPIM_DMACR register. */
#define ALT_SPIM_DMACR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DMACR_OFST))

/*
 * Register : DMA Transmit Data Level - DMATDLR
 * 
 * DMA Transmit Data Level.
 * 
 * This register is only valid when the DW_apb_ssi is configured with a set
 * 
 * of DMA interface signals (SSI_HAS_DMA = 1). When DW_apb_ssi is not
 * 
 * configured for DMA operation, this register will not exist and writing
 * 
 * to its address will have no effect; reading from its address will
 * 
 * return zero.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_SPIM_DMATDLR_DMATDL      
 *  [31:8] | R      | 0x0   | ALT_SPIM_DMATDLR_RSVD_DMATDLR
 * 
 */
/*
 * Field : DMATDL
 * 
 * Transmit Data Level.
 * 
 * This bit field controls the level at which a DMA request is made by the
 * 
 * transmit logic. It is equal to the watermark level; that is, the
 * 
 * dma_tx_req signal is generated when the number of valid data entries
 * 
 * in the transmit FIFO is equal to or below this field value, and TDMAE = 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DMATDLR_DMATDL register field. */
#define ALT_SPIM_DMATDLR_DMATDL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DMATDLR_DMATDL register field. */
#define ALT_SPIM_DMATDLR_DMATDL_MSB        7
/* The width in bits of the ALT_SPIM_DMATDLR_DMATDL register field. */
#define ALT_SPIM_DMATDLR_DMATDL_WIDTH      8
/* The mask used to set the ALT_SPIM_DMATDLR_DMATDL register field value. */
#define ALT_SPIM_DMATDLR_DMATDL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SPIM_DMATDLR_DMATDL register field value. */
#define ALT_SPIM_DMATDLR_DMATDL_CLR_MSK    0xffffff00
/* The reset value of the ALT_SPIM_DMATDLR_DMATDL register field. */
#define ALT_SPIM_DMATDLR_DMATDL_RESET      0x0
/* Extracts the ALT_SPIM_DMATDLR_DMATDL field value from a register. */
#define ALT_SPIM_DMATDLR_DMATDL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SPIM_DMATDLR_DMATDL register field value suitable for setting the register. */
#define ALT_SPIM_DMATDLR_DMATDL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_DMATDLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DMATDLR_RSVD_DMATDLR register field. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DMATDLR_RSVD_DMATDLR register field. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_MSB        31
/* The width in bits of the ALT_SPIM_DMATDLR_RSVD_DMATDLR register field. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_WIDTH      24
/* The mask used to set the ALT_SPIM_DMATDLR_RSVD_DMATDLR register field value. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_SET_MSK    0xffffff00
/* The mask used to clear the ALT_SPIM_DMATDLR_RSVD_DMATDLR register field value. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_CLR_MSK    0x000000ff
/* The reset value of the ALT_SPIM_DMATDLR_RSVD_DMATDLR register field. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_RESET      0x0
/* Extracts the ALT_SPIM_DMATDLR_RSVD_DMATDLR field value from a register. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_SPIM_DMATDLR_RSVD_DMATDLR register field value suitable for setting the register. */
#define ALT_SPIM_DMATDLR_RSVD_DMATDLR_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_SPIM_DMATDLR.
 */
struct ALT_SPIM_DMATDLR_s
{
    volatile uint32_t        DMATDL       :  8;  /* ALT_SPIM_DMATDLR_DMATDL */
    const volatile uint32_t  RSVD_DMATDLR : 24;  /* ALT_SPIM_DMATDLR_RSVD_DMATDLR */
};

/* The typedef declaration for register ALT_SPIM_DMATDLR. */
typedef struct ALT_SPIM_DMATDLR_s  ALT_SPIM_DMATDLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DMATDLR register. */
#define ALT_SPIM_DMATDLR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DMATDLR register from the beginning of the component. */
#define ALT_SPIM_DMATDLR_OFST        0x50
/* The address of the ALT_SPIM_DMATDLR register. */
#define ALT_SPIM_DMATDLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DMATDLR_OFST))

/*
 * Register : DMA Receive Data Level - DMARDLR
 * 
 * DMA Receive Data Level.
 * 
 * This register is only valid when DW_apb_ssi is configured with a set of
 * 
 * DMA interface signals (SSI_HAS_DMA = 1). When DW_apb_ssi is not configured
 * 
 * for DMA operation, this register will not exist and writing to its address
 * 
 * will have no effect; reading from its address will return zero.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_SPIM_DMARDLR_DMARDL      
 *  [31:8] | R      | 0x0   | ALT_SPIM_DMARDLR_RSVD_DMARDLR
 * 
 */
/*
 * Field : DMARDL
 * 
 * Receive Data Level.
 * 
 * This bit field controls the level at which a DMA request is made by the
 * 
 * receive logic. The watermark level = DMARDL+1; that is, dma_rx_req is
 * 
 * generated when the number of valid data entries in the receive FIFO is
 * 
 * equal to or above this field value + 1, and RDMAE=1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DMARDLR_DMARDL register field. */
#define ALT_SPIM_DMARDLR_DMARDL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DMARDLR_DMARDL register field. */
#define ALT_SPIM_DMARDLR_DMARDL_MSB        7
/* The width in bits of the ALT_SPIM_DMARDLR_DMARDL register field. */
#define ALT_SPIM_DMARDLR_DMARDL_WIDTH      8
/* The mask used to set the ALT_SPIM_DMARDLR_DMARDL register field value. */
#define ALT_SPIM_DMARDLR_DMARDL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SPIM_DMARDLR_DMARDL register field value. */
#define ALT_SPIM_DMARDLR_DMARDL_CLR_MSK    0xffffff00
/* The reset value of the ALT_SPIM_DMARDLR_DMARDL register field. */
#define ALT_SPIM_DMARDLR_DMARDL_RESET      0x0
/* Extracts the ALT_SPIM_DMARDLR_DMARDL field value from a register. */
#define ALT_SPIM_DMARDLR_DMARDL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SPIM_DMARDLR_DMARDL register field value suitable for setting the register. */
#define ALT_SPIM_DMARDLR_DMARDL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_DMARDLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DMARDLR_RSVD_DMARDLR register field. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DMARDLR_RSVD_DMARDLR register field. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_MSB        31
/* The width in bits of the ALT_SPIM_DMARDLR_RSVD_DMARDLR register field. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_WIDTH      24
/* The mask used to set the ALT_SPIM_DMARDLR_RSVD_DMARDLR register field value. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_SET_MSK    0xffffff00
/* The mask used to clear the ALT_SPIM_DMARDLR_RSVD_DMARDLR register field value. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_CLR_MSK    0x000000ff
/* The reset value of the ALT_SPIM_DMARDLR_RSVD_DMARDLR register field. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_RESET      0x0
/* Extracts the ALT_SPIM_DMARDLR_RSVD_DMARDLR field value from a register. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_SPIM_DMARDLR_RSVD_DMARDLR register field value suitable for setting the register. */
#define ALT_SPIM_DMARDLR_RSVD_DMARDLR_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_SPIM_DMARDLR.
 */
struct ALT_SPIM_DMARDLR_s
{
    volatile uint32_t        DMARDL       :  8;  /* ALT_SPIM_DMARDLR_DMARDL */
    const volatile uint32_t  RSVD_DMARDLR : 24;  /* ALT_SPIM_DMARDLR_RSVD_DMARDLR */
};

/* The typedef declaration for register ALT_SPIM_DMARDLR. */
typedef struct ALT_SPIM_DMARDLR_s  ALT_SPIM_DMARDLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DMARDLR register. */
#define ALT_SPIM_DMARDLR_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DMARDLR register from the beginning of the component. */
#define ALT_SPIM_DMARDLR_OFST        0x54
/* The address of the ALT_SPIM_DMARDLR register. */
#define ALT_SPIM_DMARDLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DMARDLR_OFST))

/*
 * Register : Identification Register - IDR
 * 
 * Identification Register.
 * 
 * This register contains the peripherals identification code, which is
 * 
 * written into the register at configuration time using coreConsultant.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset     | Description        
 * :-------|:-------|:----------|:--------------------
 *  [31:0] | R      | 0x5510000 | ALT_SPIM_IDR_IDCODE
 * 
 */
/*
 * Field : IDCODE
 * 
 * Identification code. The register contains the peripheral's identification code,
 * which is written into the register at configuration time using CoreConsultant.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_IDR_IDCODE register field. */
#define ALT_SPIM_IDR_IDCODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_IDR_IDCODE register field. */
#define ALT_SPIM_IDR_IDCODE_MSB        31
/* The width in bits of the ALT_SPIM_IDR_IDCODE register field. */
#define ALT_SPIM_IDR_IDCODE_WIDTH      32
/* The mask used to set the ALT_SPIM_IDR_IDCODE register field value. */
#define ALT_SPIM_IDR_IDCODE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_IDR_IDCODE register field value. */
#define ALT_SPIM_IDR_IDCODE_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_IDR_IDCODE register field. */
#define ALT_SPIM_IDR_IDCODE_RESET      0x5510000
/* Extracts the ALT_SPIM_IDR_IDCODE field value from a register. */
#define ALT_SPIM_IDR_IDCODE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_IDR_IDCODE register field value suitable for setting the register. */
#define ALT_SPIM_IDR_IDCODE_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_IDR.
 */
struct ALT_SPIM_IDR_s
{
    const volatile uint32_t  IDCODE : 32;  /* ALT_SPIM_IDR_IDCODE */
};

/* The typedef declaration for register ALT_SPIM_IDR. */
typedef struct ALT_SPIM_IDR_s  ALT_SPIM_IDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_IDR register. */
#define ALT_SPIM_IDR_RESET       0x05510000
/* The byte offset of the ALT_SPIM_IDR register from the beginning of the component. */
#define ALT_SPIM_IDR_OFST        0x58
/* The address of the ALT_SPIM_IDR register. */
#define ALT_SPIM_IDR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_IDR_OFST))

/*
 * Register : SSI_VERSION_ID
 * 
 * coreKit Version ID Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                             
 * :-------|:-------|:-----------|:-----------------------------------------
 *  [31:0] | R      | 0x3430302a | ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION
 * 
 */
/*
 * Field : SSI_COMP_VERSION
 * 
 * Contains the hex representation of the Synopsys component version. Consists of
 * ASCII value for each number in the version, followed by *. For example
 * 32_30_31_2A represents the version 2.01*.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION register field. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION register field. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_MSB        31
/* The width in bits of the ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION register field. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_WIDTH      32
/* The mask used to set the ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION register field value. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION register field value. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION register field. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_RESET      0x3430302a
/* Extracts the ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION field value from a register. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION register field value suitable for setting the register. */
#define ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_SSI_VERSION_ID.
 */
struct ALT_SPIM_SSI_VERSION_ID_s
{
    const volatile uint32_t  SSI_COMP_VERSION : 32;  /* ALT_SPIM_SSI_VERSION_ID_SSI_COMP_VERSION */
};

/* The typedef declaration for register ALT_SPIM_SSI_VERSION_ID. */
typedef struct ALT_SPIM_SSI_VERSION_ID_s  ALT_SPIM_SSI_VERSION_ID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_SSI_VERSION_ID register. */
#define ALT_SPIM_SSI_VERSION_ID_RESET       0x3430302a
/* The byte offset of the ALT_SPIM_SSI_VERSION_ID register from the beginning of the component. */
#define ALT_SPIM_SSI_VERSION_ID_OFST        0x5c
/* The address of the ALT_SPIM_SSI_VERSION_ID register. */
#define ALT_SPIM_SSI_VERSION_ID_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_SSI_VERSION_ID_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR0
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR0_DR0
 * 
 */
/*
 * Field : dr0
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR0_DR0 register field. */
#define ALT_SPIM_DR0_DR0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR0_DR0 register field. */
#define ALT_SPIM_DR0_DR0_MSB        31
/* The width in bits of the ALT_SPIM_DR0_DR0 register field. */
#define ALT_SPIM_DR0_DR0_WIDTH      32
/* The mask used to set the ALT_SPIM_DR0_DR0 register field value. */
#define ALT_SPIM_DR0_DR0_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR0_DR0 register field value. */
#define ALT_SPIM_DR0_DR0_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR0_DR0 register field. */
#define ALT_SPIM_DR0_DR0_RESET      0x0
/* Extracts the ALT_SPIM_DR0_DR0 field value from a register. */
#define ALT_SPIM_DR0_DR0_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR0_DR0 register field value suitable for setting the register. */
#define ALT_SPIM_DR0_DR0_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR0.
 */
struct ALT_SPIM_DR0_s
{
    volatile uint32_t  dr0 : 32;  /* ALT_SPIM_DR0_DR0 */
};

/* The typedef declaration for register ALT_SPIM_DR0. */
typedef struct ALT_SPIM_DR0_s  ALT_SPIM_DR0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR0 register. */
#define ALT_SPIM_DR0_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR0 register from the beginning of the component. */
#define ALT_SPIM_DR0_OFST        0x60
/* The address of the ALT_SPIM_DR0 register. */
#define ALT_SPIM_DR0_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR0_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR1
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR1_DR1
 * 
 */
/*
 * Field : dr1
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR1_DR1 register field. */
#define ALT_SPIM_DR1_DR1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR1_DR1 register field. */
#define ALT_SPIM_DR1_DR1_MSB        31
/* The width in bits of the ALT_SPIM_DR1_DR1 register field. */
#define ALT_SPIM_DR1_DR1_WIDTH      32
/* The mask used to set the ALT_SPIM_DR1_DR1 register field value. */
#define ALT_SPIM_DR1_DR1_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR1_DR1 register field value. */
#define ALT_SPIM_DR1_DR1_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR1_DR1 register field. */
#define ALT_SPIM_DR1_DR1_RESET      0x0
/* Extracts the ALT_SPIM_DR1_DR1 field value from a register. */
#define ALT_SPIM_DR1_DR1_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR1_DR1 register field value suitable for setting the register. */
#define ALT_SPIM_DR1_DR1_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR1.
 */
struct ALT_SPIM_DR1_s
{
    volatile uint32_t  dr1 : 32;  /* ALT_SPIM_DR1_DR1 */
};

/* The typedef declaration for register ALT_SPIM_DR1. */
typedef struct ALT_SPIM_DR1_s  ALT_SPIM_DR1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR1 register. */
#define ALT_SPIM_DR1_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR1 register from the beginning of the component. */
#define ALT_SPIM_DR1_OFST        0x64
/* The address of the ALT_SPIM_DR1 register. */
#define ALT_SPIM_DR1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR1_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR2
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR2_DR2
 * 
 */
/*
 * Field : dr2
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR2_DR2 register field. */
#define ALT_SPIM_DR2_DR2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR2_DR2 register field. */
#define ALT_SPIM_DR2_DR2_MSB        31
/* The width in bits of the ALT_SPIM_DR2_DR2 register field. */
#define ALT_SPIM_DR2_DR2_WIDTH      32
/* The mask used to set the ALT_SPIM_DR2_DR2 register field value. */
#define ALT_SPIM_DR2_DR2_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR2_DR2 register field value. */
#define ALT_SPIM_DR2_DR2_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR2_DR2 register field. */
#define ALT_SPIM_DR2_DR2_RESET      0x0
/* Extracts the ALT_SPIM_DR2_DR2 field value from a register. */
#define ALT_SPIM_DR2_DR2_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR2_DR2 register field value suitable for setting the register. */
#define ALT_SPIM_DR2_DR2_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR2.
 */
struct ALT_SPIM_DR2_s
{
    volatile uint32_t  dr2 : 32;  /* ALT_SPIM_DR2_DR2 */
};

/* The typedef declaration for register ALT_SPIM_DR2. */
typedef struct ALT_SPIM_DR2_s  ALT_SPIM_DR2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR2 register. */
#define ALT_SPIM_DR2_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR2 register from the beginning of the component. */
#define ALT_SPIM_DR2_OFST        0x68
/* The address of the ALT_SPIM_DR2 register. */
#define ALT_SPIM_DR2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR2_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR3
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR3_DR3
 * 
 */
/*
 * Field : dr3
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR3_DR3 register field. */
#define ALT_SPIM_DR3_DR3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR3_DR3 register field. */
#define ALT_SPIM_DR3_DR3_MSB        31
/* The width in bits of the ALT_SPIM_DR3_DR3 register field. */
#define ALT_SPIM_DR3_DR3_WIDTH      32
/* The mask used to set the ALT_SPIM_DR3_DR3 register field value. */
#define ALT_SPIM_DR3_DR3_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR3_DR3 register field value. */
#define ALT_SPIM_DR3_DR3_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR3_DR3 register field. */
#define ALT_SPIM_DR3_DR3_RESET      0x0
/* Extracts the ALT_SPIM_DR3_DR3 field value from a register. */
#define ALT_SPIM_DR3_DR3_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR3_DR3 register field value suitable for setting the register. */
#define ALT_SPIM_DR3_DR3_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR3.
 */
struct ALT_SPIM_DR3_s
{
    volatile uint32_t  dr3 : 32;  /* ALT_SPIM_DR3_DR3 */
};

/* The typedef declaration for register ALT_SPIM_DR3. */
typedef struct ALT_SPIM_DR3_s  ALT_SPIM_DR3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR3 register. */
#define ALT_SPIM_DR3_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR3 register from the beginning of the component. */
#define ALT_SPIM_DR3_OFST        0x6c
/* The address of the ALT_SPIM_DR3 register. */
#define ALT_SPIM_DR3_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR3_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR4
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR4_DR4
 * 
 */
/*
 * Field : dr4
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR4_DR4 register field. */
#define ALT_SPIM_DR4_DR4_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR4_DR4 register field. */
#define ALT_SPIM_DR4_DR4_MSB        31
/* The width in bits of the ALT_SPIM_DR4_DR4 register field. */
#define ALT_SPIM_DR4_DR4_WIDTH      32
/* The mask used to set the ALT_SPIM_DR4_DR4 register field value. */
#define ALT_SPIM_DR4_DR4_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR4_DR4 register field value. */
#define ALT_SPIM_DR4_DR4_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR4_DR4 register field. */
#define ALT_SPIM_DR4_DR4_RESET      0x0
/* Extracts the ALT_SPIM_DR4_DR4 field value from a register. */
#define ALT_SPIM_DR4_DR4_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR4_DR4 register field value suitable for setting the register. */
#define ALT_SPIM_DR4_DR4_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR4.
 */
struct ALT_SPIM_DR4_s
{
    volatile uint32_t  dr4 : 32;  /* ALT_SPIM_DR4_DR4 */
};

/* The typedef declaration for register ALT_SPIM_DR4. */
typedef struct ALT_SPIM_DR4_s  ALT_SPIM_DR4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR4 register. */
#define ALT_SPIM_DR4_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR4 register from the beginning of the component. */
#define ALT_SPIM_DR4_OFST        0x70
/* The address of the ALT_SPIM_DR4 register. */
#define ALT_SPIM_DR4_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR4_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR5
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR5_DR5
 * 
 */
/*
 * Field : dr5
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR5_DR5 register field. */
#define ALT_SPIM_DR5_DR5_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR5_DR5 register field. */
#define ALT_SPIM_DR5_DR5_MSB        31
/* The width in bits of the ALT_SPIM_DR5_DR5 register field. */
#define ALT_SPIM_DR5_DR5_WIDTH      32
/* The mask used to set the ALT_SPIM_DR5_DR5 register field value. */
#define ALT_SPIM_DR5_DR5_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR5_DR5 register field value. */
#define ALT_SPIM_DR5_DR5_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR5_DR5 register field. */
#define ALT_SPIM_DR5_DR5_RESET      0x0
/* Extracts the ALT_SPIM_DR5_DR5 field value from a register. */
#define ALT_SPIM_DR5_DR5_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR5_DR5 register field value suitable for setting the register. */
#define ALT_SPIM_DR5_DR5_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR5.
 */
struct ALT_SPIM_DR5_s
{
    volatile uint32_t  dr5 : 32;  /* ALT_SPIM_DR5_DR5 */
};

/* The typedef declaration for register ALT_SPIM_DR5. */
typedef struct ALT_SPIM_DR5_s  ALT_SPIM_DR5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR5 register. */
#define ALT_SPIM_DR5_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR5 register from the beginning of the component. */
#define ALT_SPIM_DR5_OFST        0x74
/* The address of the ALT_SPIM_DR5 register. */
#define ALT_SPIM_DR5_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR5_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR6
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR6_DR6
 * 
 */
/*
 * Field : dr6
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR6_DR6 register field. */
#define ALT_SPIM_DR6_DR6_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR6_DR6 register field. */
#define ALT_SPIM_DR6_DR6_MSB        31
/* The width in bits of the ALT_SPIM_DR6_DR6 register field. */
#define ALT_SPIM_DR6_DR6_WIDTH      32
/* The mask used to set the ALT_SPIM_DR6_DR6 register field value. */
#define ALT_SPIM_DR6_DR6_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR6_DR6 register field value. */
#define ALT_SPIM_DR6_DR6_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR6_DR6 register field. */
#define ALT_SPIM_DR6_DR6_RESET      0x0
/* Extracts the ALT_SPIM_DR6_DR6 field value from a register. */
#define ALT_SPIM_DR6_DR6_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR6_DR6 register field value suitable for setting the register. */
#define ALT_SPIM_DR6_DR6_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR6.
 */
struct ALT_SPIM_DR6_s
{
    volatile uint32_t  dr6 : 32;  /* ALT_SPIM_DR6_DR6 */
};

/* The typedef declaration for register ALT_SPIM_DR6. */
typedef struct ALT_SPIM_DR6_s  ALT_SPIM_DR6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR6 register. */
#define ALT_SPIM_DR6_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR6 register from the beginning of the component. */
#define ALT_SPIM_DR6_OFST        0x78
/* The address of the ALT_SPIM_DR6 register. */
#define ALT_SPIM_DR6_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR6_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR7
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR7_DR7
 * 
 */
/*
 * Field : dr7
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR7_DR7 register field. */
#define ALT_SPIM_DR7_DR7_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR7_DR7 register field. */
#define ALT_SPIM_DR7_DR7_MSB        31
/* The width in bits of the ALT_SPIM_DR7_DR7 register field. */
#define ALT_SPIM_DR7_DR7_WIDTH      32
/* The mask used to set the ALT_SPIM_DR7_DR7 register field value. */
#define ALT_SPIM_DR7_DR7_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR7_DR7 register field value. */
#define ALT_SPIM_DR7_DR7_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR7_DR7 register field. */
#define ALT_SPIM_DR7_DR7_RESET      0x0
/* Extracts the ALT_SPIM_DR7_DR7 field value from a register. */
#define ALT_SPIM_DR7_DR7_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR7_DR7 register field value suitable for setting the register. */
#define ALT_SPIM_DR7_DR7_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR7.
 */
struct ALT_SPIM_DR7_s
{
    volatile uint32_t  dr7 : 32;  /* ALT_SPIM_DR7_DR7 */
};

/* The typedef declaration for register ALT_SPIM_DR7. */
typedef struct ALT_SPIM_DR7_s  ALT_SPIM_DR7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR7 register. */
#define ALT_SPIM_DR7_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR7 register from the beginning of the component. */
#define ALT_SPIM_DR7_OFST        0x7c
/* The address of the ALT_SPIM_DR7 register. */
#define ALT_SPIM_DR7_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR7_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR8
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR8_DR8
 * 
 */
/*
 * Field : dr8
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR8_DR8 register field. */
#define ALT_SPIM_DR8_DR8_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR8_DR8 register field. */
#define ALT_SPIM_DR8_DR8_MSB        31
/* The width in bits of the ALT_SPIM_DR8_DR8 register field. */
#define ALT_SPIM_DR8_DR8_WIDTH      32
/* The mask used to set the ALT_SPIM_DR8_DR8 register field value. */
#define ALT_SPIM_DR8_DR8_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR8_DR8 register field value. */
#define ALT_SPIM_DR8_DR8_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR8_DR8 register field. */
#define ALT_SPIM_DR8_DR8_RESET      0x0
/* Extracts the ALT_SPIM_DR8_DR8 field value from a register. */
#define ALT_SPIM_DR8_DR8_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR8_DR8 register field value suitable for setting the register. */
#define ALT_SPIM_DR8_DR8_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR8.
 */
struct ALT_SPIM_DR8_s
{
    volatile uint32_t  dr8 : 32;  /* ALT_SPIM_DR8_DR8 */
};

/* The typedef declaration for register ALT_SPIM_DR8. */
typedef struct ALT_SPIM_DR8_s  ALT_SPIM_DR8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR8 register. */
#define ALT_SPIM_DR8_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR8 register from the beginning of the component. */
#define ALT_SPIM_DR8_OFST        0x80
/* The address of the ALT_SPIM_DR8 register. */
#define ALT_SPIM_DR8_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR8_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR9
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR9_DR9
 * 
 */
/*
 * Field : dr9
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR9_DR9 register field. */
#define ALT_SPIM_DR9_DR9_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR9_DR9 register field. */
#define ALT_SPIM_DR9_DR9_MSB        31
/* The width in bits of the ALT_SPIM_DR9_DR9 register field. */
#define ALT_SPIM_DR9_DR9_WIDTH      32
/* The mask used to set the ALT_SPIM_DR9_DR9 register field value. */
#define ALT_SPIM_DR9_DR9_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR9_DR9 register field value. */
#define ALT_SPIM_DR9_DR9_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR9_DR9 register field. */
#define ALT_SPIM_DR9_DR9_RESET      0x0
/* Extracts the ALT_SPIM_DR9_DR9 field value from a register. */
#define ALT_SPIM_DR9_DR9_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR9_DR9 register field value suitable for setting the register. */
#define ALT_SPIM_DR9_DR9_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR9.
 */
struct ALT_SPIM_DR9_s
{
    volatile uint32_t  dr9 : 32;  /* ALT_SPIM_DR9_DR9 */
};

/* The typedef declaration for register ALT_SPIM_DR9. */
typedef struct ALT_SPIM_DR9_s  ALT_SPIM_DR9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR9 register. */
#define ALT_SPIM_DR9_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR9 register from the beginning of the component. */
#define ALT_SPIM_DR9_OFST        0x84
/* The address of the ALT_SPIM_DR9 register. */
#define ALT_SPIM_DR9_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR9_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR10
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR10_DR10
 * 
 */
/*
 * Field : dr10
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR10_DR10 register field. */
#define ALT_SPIM_DR10_DR10_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR10_DR10 register field. */
#define ALT_SPIM_DR10_DR10_MSB        31
/* The width in bits of the ALT_SPIM_DR10_DR10 register field. */
#define ALT_SPIM_DR10_DR10_WIDTH      32
/* The mask used to set the ALT_SPIM_DR10_DR10 register field value. */
#define ALT_SPIM_DR10_DR10_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR10_DR10 register field value. */
#define ALT_SPIM_DR10_DR10_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR10_DR10 register field. */
#define ALT_SPIM_DR10_DR10_RESET      0x0
/* Extracts the ALT_SPIM_DR10_DR10 field value from a register. */
#define ALT_SPIM_DR10_DR10_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR10_DR10 register field value suitable for setting the register. */
#define ALT_SPIM_DR10_DR10_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR10.
 */
struct ALT_SPIM_DR10_s
{
    volatile uint32_t  dr10 : 32;  /* ALT_SPIM_DR10_DR10 */
};

/* The typedef declaration for register ALT_SPIM_DR10. */
typedef struct ALT_SPIM_DR10_s  ALT_SPIM_DR10_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR10 register. */
#define ALT_SPIM_DR10_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR10 register from the beginning of the component. */
#define ALT_SPIM_DR10_OFST        0x88
/* The address of the ALT_SPIM_DR10 register. */
#define ALT_SPIM_DR10_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR10_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR11
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR11_DR11
 * 
 */
/*
 * Field : dr11
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR11_DR11 register field. */
#define ALT_SPIM_DR11_DR11_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR11_DR11 register field. */
#define ALT_SPIM_DR11_DR11_MSB        31
/* The width in bits of the ALT_SPIM_DR11_DR11 register field. */
#define ALT_SPIM_DR11_DR11_WIDTH      32
/* The mask used to set the ALT_SPIM_DR11_DR11 register field value. */
#define ALT_SPIM_DR11_DR11_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR11_DR11 register field value. */
#define ALT_SPIM_DR11_DR11_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR11_DR11 register field. */
#define ALT_SPIM_DR11_DR11_RESET      0x0
/* Extracts the ALT_SPIM_DR11_DR11 field value from a register. */
#define ALT_SPIM_DR11_DR11_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR11_DR11 register field value suitable for setting the register. */
#define ALT_SPIM_DR11_DR11_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR11.
 */
struct ALT_SPIM_DR11_s
{
    volatile uint32_t  dr11 : 32;  /* ALT_SPIM_DR11_DR11 */
};

/* The typedef declaration for register ALT_SPIM_DR11. */
typedef struct ALT_SPIM_DR11_s  ALT_SPIM_DR11_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR11 register. */
#define ALT_SPIM_DR11_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR11 register from the beginning of the component. */
#define ALT_SPIM_DR11_OFST        0x8c
/* The address of the ALT_SPIM_DR11 register. */
#define ALT_SPIM_DR11_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR11_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR12
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR12_DR12
 * 
 */
/*
 * Field : dr12
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR12_DR12 register field. */
#define ALT_SPIM_DR12_DR12_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR12_DR12 register field. */
#define ALT_SPIM_DR12_DR12_MSB        31
/* The width in bits of the ALT_SPIM_DR12_DR12 register field. */
#define ALT_SPIM_DR12_DR12_WIDTH      32
/* The mask used to set the ALT_SPIM_DR12_DR12 register field value. */
#define ALT_SPIM_DR12_DR12_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR12_DR12 register field value. */
#define ALT_SPIM_DR12_DR12_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR12_DR12 register field. */
#define ALT_SPIM_DR12_DR12_RESET      0x0
/* Extracts the ALT_SPIM_DR12_DR12 field value from a register. */
#define ALT_SPIM_DR12_DR12_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR12_DR12 register field value suitable for setting the register. */
#define ALT_SPIM_DR12_DR12_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR12.
 */
struct ALT_SPIM_DR12_s
{
    volatile uint32_t  dr12 : 32;  /* ALT_SPIM_DR12_DR12 */
};

/* The typedef declaration for register ALT_SPIM_DR12. */
typedef struct ALT_SPIM_DR12_s  ALT_SPIM_DR12_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR12 register. */
#define ALT_SPIM_DR12_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR12 register from the beginning of the component. */
#define ALT_SPIM_DR12_OFST        0x90
/* The address of the ALT_SPIM_DR12 register. */
#define ALT_SPIM_DR12_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR12_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR13
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR13_DR13
 * 
 */
/*
 * Field : dr13
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR13_DR13 register field. */
#define ALT_SPIM_DR13_DR13_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR13_DR13 register field. */
#define ALT_SPIM_DR13_DR13_MSB        31
/* The width in bits of the ALT_SPIM_DR13_DR13 register field. */
#define ALT_SPIM_DR13_DR13_WIDTH      32
/* The mask used to set the ALT_SPIM_DR13_DR13 register field value. */
#define ALT_SPIM_DR13_DR13_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR13_DR13 register field value. */
#define ALT_SPIM_DR13_DR13_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR13_DR13 register field. */
#define ALT_SPIM_DR13_DR13_RESET      0x0
/* Extracts the ALT_SPIM_DR13_DR13 field value from a register. */
#define ALT_SPIM_DR13_DR13_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR13_DR13 register field value suitable for setting the register. */
#define ALT_SPIM_DR13_DR13_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR13.
 */
struct ALT_SPIM_DR13_s
{
    volatile uint32_t  dr13 : 32;  /* ALT_SPIM_DR13_DR13 */
};

/* The typedef declaration for register ALT_SPIM_DR13. */
typedef struct ALT_SPIM_DR13_s  ALT_SPIM_DR13_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR13 register. */
#define ALT_SPIM_DR13_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR13 register from the beginning of the component. */
#define ALT_SPIM_DR13_OFST        0x94
/* The address of the ALT_SPIM_DR13 register. */
#define ALT_SPIM_DR13_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR13_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR14
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR14_DR14
 * 
 */
/*
 * Field : dr14
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR14_DR14 register field. */
#define ALT_SPIM_DR14_DR14_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR14_DR14 register field. */
#define ALT_SPIM_DR14_DR14_MSB        31
/* The width in bits of the ALT_SPIM_DR14_DR14 register field. */
#define ALT_SPIM_DR14_DR14_WIDTH      32
/* The mask used to set the ALT_SPIM_DR14_DR14 register field value. */
#define ALT_SPIM_DR14_DR14_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR14_DR14 register field value. */
#define ALT_SPIM_DR14_DR14_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR14_DR14 register field. */
#define ALT_SPIM_DR14_DR14_RESET      0x0
/* Extracts the ALT_SPIM_DR14_DR14 field value from a register. */
#define ALT_SPIM_DR14_DR14_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR14_DR14 register field value suitable for setting the register. */
#define ALT_SPIM_DR14_DR14_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR14.
 */
struct ALT_SPIM_DR14_s
{
    volatile uint32_t  dr14 : 32;  /* ALT_SPIM_DR14_DR14 */
};

/* The typedef declaration for register ALT_SPIM_DR14. */
typedef struct ALT_SPIM_DR14_s  ALT_SPIM_DR14_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR14 register. */
#define ALT_SPIM_DR14_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR14 register from the beginning of the component. */
#define ALT_SPIM_DR14_OFST        0x98
/* The address of the ALT_SPIM_DR14 register. */
#define ALT_SPIM_DR14_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR14_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR15
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR15_DR15
 * 
 */
/*
 * Field : dr15
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR15_DR15 register field. */
#define ALT_SPIM_DR15_DR15_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR15_DR15 register field. */
#define ALT_SPIM_DR15_DR15_MSB        31
/* The width in bits of the ALT_SPIM_DR15_DR15 register field. */
#define ALT_SPIM_DR15_DR15_WIDTH      32
/* The mask used to set the ALT_SPIM_DR15_DR15 register field value. */
#define ALT_SPIM_DR15_DR15_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR15_DR15 register field value. */
#define ALT_SPIM_DR15_DR15_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR15_DR15 register field. */
#define ALT_SPIM_DR15_DR15_RESET      0x0
/* Extracts the ALT_SPIM_DR15_DR15 field value from a register. */
#define ALT_SPIM_DR15_DR15_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR15_DR15 register field value suitable for setting the register. */
#define ALT_SPIM_DR15_DR15_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR15.
 */
struct ALT_SPIM_DR15_s
{
    volatile uint32_t  dr15 : 32;  /* ALT_SPIM_DR15_DR15 */
};

/* The typedef declaration for register ALT_SPIM_DR15. */
typedef struct ALT_SPIM_DR15_s  ALT_SPIM_DR15_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR15 register. */
#define ALT_SPIM_DR15_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR15 register from the beginning of the component. */
#define ALT_SPIM_DR15_OFST        0x9c
/* The address of the ALT_SPIM_DR15 register. */
#define ALT_SPIM_DR15_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR15_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR16
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR16_DR16
 * 
 */
/*
 * Field : dr16
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR16_DR16 register field. */
#define ALT_SPIM_DR16_DR16_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR16_DR16 register field. */
#define ALT_SPIM_DR16_DR16_MSB        31
/* The width in bits of the ALT_SPIM_DR16_DR16 register field. */
#define ALT_SPIM_DR16_DR16_WIDTH      32
/* The mask used to set the ALT_SPIM_DR16_DR16 register field value. */
#define ALT_SPIM_DR16_DR16_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR16_DR16 register field value. */
#define ALT_SPIM_DR16_DR16_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR16_DR16 register field. */
#define ALT_SPIM_DR16_DR16_RESET      0x0
/* Extracts the ALT_SPIM_DR16_DR16 field value from a register. */
#define ALT_SPIM_DR16_DR16_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR16_DR16 register field value suitable for setting the register. */
#define ALT_SPIM_DR16_DR16_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR16.
 */
struct ALT_SPIM_DR16_s
{
    volatile uint32_t  dr16 : 32;  /* ALT_SPIM_DR16_DR16 */
};

/* The typedef declaration for register ALT_SPIM_DR16. */
typedef struct ALT_SPIM_DR16_s  ALT_SPIM_DR16_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR16 register. */
#define ALT_SPIM_DR16_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR16 register from the beginning of the component. */
#define ALT_SPIM_DR16_OFST        0xa0
/* The address of the ALT_SPIM_DR16 register. */
#define ALT_SPIM_DR16_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR16_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR17
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR17_DR17
 * 
 */
/*
 * Field : dr17
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR17_DR17 register field. */
#define ALT_SPIM_DR17_DR17_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR17_DR17 register field. */
#define ALT_SPIM_DR17_DR17_MSB        31
/* The width in bits of the ALT_SPIM_DR17_DR17 register field. */
#define ALT_SPIM_DR17_DR17_WIDTH      32
/* The mask used to set the ALT_SPIM_DR17_DR17 register field value. */
#define ALT_SPIM_DR17_DR17_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR17_DR17 register field value. */
#define ALT_SPIM_DR17_DR17_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR17_DR17 register field. */
#define ALT_SPIM_DR17_DR17_RESET      0x0
/* Extracts the ALT_SPIM_DR17_DR17 field value from a register. */
#define ALT_SPIM_DR17_DR17_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR17_DR17 register field value suitable for setting the register. */
#define ALT_SPIM_DR17_DR17_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR17.
 */
struct ALT_SPIM_DR17_s
{
    volatile uint32_t  dr17 : 32;  /* ALT_SPIM_DR17_DR17 */
};

/* The typedef declaration for register ALT_SPIM_DR17. */
typedef struct ALT_SPIM_DR17_s  ALT_SPIM_DR17_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR17 register. */
#define ALT_SPIM_DR17_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR17 register from the beginning of the component. */
#define ALT_SPIM_DR17_OFST        0xa4
/* The address of the ALT_SPIM_DR17 register. */
#define ALT_SPIM_DR17_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR17_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR18
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR18_DR18
 * 
 */
/*
 * Field : dr18
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR18_DR18 register field. */
#define ALT_SPIM_DR18_DR18_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR18_DR18 register field. */
#define ALT_SPIM_DR18_DR18_MSB        31
/* The width in bits of the ALT_SPIM_DR18_DR18 register field. */
#define ALT_SPIM_DR18_DR18_WIDTH      32
/* The mask used to set the ALT_SPIM_DR18_DR18 register field value. */
#define ALT_SPIM_DR18_DR18_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR18_DR18 register field value. */
#define ALT_SPIM_DR18_DR18_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR18_DR18 register field. */
#define ALT_SPIM_DR18_DR18_RESET      0x0
/* Extracts the ALT_SPIM_DR18_DR18 field value from a register. */
#define ALT_SPIM_DR18_DR18_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR18_DR18 register field value suitable for setting the register. */
#define ALT_SPIM_DR18_DR18_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR18.
 */
struct ALT_SPIM_DR18_s
{
    volatile uint32_t  dr18 : 32;  /* ALT_SPIM_DR18_DR18 */
};

/* The typedef declaration for register ALT_SPIM_DR18. */
typedef struct ALT_SPIM_DR18_s  ALT_SPIM_DR18_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR18 register. */
#define ALT_SPIM_DR18_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR18 register from the beginning of the component. */
#define ALT_SPIM_DR18_OFST        0xa8
/* The address of the ALT_SPIM_DR18 register. */
#define ALT_SPIM_DR18_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR18_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR19
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR19_DR19
 * 
 */
/*
 * Field : dr19
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR19_DR19 register field. */
#define ALT_SPIM_DR19_DR19_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR19_DR19 register field. */
#define ALT_SPIM_DR19_DR19_MSB        31
/* The width in bits of the ALT_SPIM_DR19_DR19 register field. */
#define ALT_SPIM_DR19_DR19_WIDTH      32
/* The mask used to set the ALT_SPIM_DR19_DR19 register field value. */
#define ALT_SPIM_DR19_DR19_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR19_DR19 register field value. */
#define ALT_SPIM_DR19_DR19_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR19_DR19 register field. */
#define ALT_SPIM_DR19_DR19_RESET      0x0
/* Extracts the ALT_SPIM_DR19_DR19 field value from a register. */
#define ALT_SPIM_DR19_DR19_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR19_DR19 register field value suitable for setting the register. */
#define ALT_SPIM_DR19_DR19_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR19.
 */
struct ALT_SPIM_DR19_s
{
    volatile uint32_t  dr19 : 32;  /* ALT_SPIM_DR19_DR19 */
};

/* The typedef declaration for register ALT_SPIM_DR19. */
typedef struct ALT_SPIM_DR19_s  ALT_SPIM_DR19_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR19 register. */
#define ALT_SPIM_DR19_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR19 register from the beginning of the component. */
#define ALT_SPIM_DR19_OFST        0xac
/* The address of the ALT_SPIM_DR19 register. */
#define ALT_SPIM_DR19_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR19_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR20
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR20_DR20
 * 
 */
/*
 * Field : dr20
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR20_DR20 register field. */
#define ALT_SPIM_DR20_DR20_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR20_DR20 register field. */
#define ALT_SPIM_DR20_DR20_MSB        31
/* The width in bits of the ALT_SPIM_DR20_DR20 register field. */
#define ALT_SPIM_DR20_DR20_WIDTH      32
/* The mask used to set the ALT_SPIM_DR20_DR20 register field value. */
#define ALT_SPIM_DR20_DR20_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR20_DR20 register field value. */
#define ALT_SPIM_DR20_DR20_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR20_DR20 register field. */
#define ALT_SPIM_DR20_DR20_RESET      0x0
/* Extracts the ALT_SPIM_DR20_DR20 field value from a register. */
#define ALT_SPIM_DR20_DR20_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR20_DR20 register field value suitable for setting the register. */
#define ALT_SPIM_DR20_DR20_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR20.
 */
struct ALT_SPIM_DR20_s
{
    volatile uint32_t  dr20 : 32;  /* ALT_SPIM_DR20_DR20 */
};

/* The typedef declaration for register ALT_SPIM_DR20. */
typedef struct ALT_SPIM_DR20_s  ALT_SPIM_DR20_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR20 register. */
#define ALT_SPIM_DR20_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR20 register from the beginning of the component. */
#define ALT_SPIM_DR20_OFST        0xb0
/* The address of the ALT_SPIM_DR20 register. */
#define ALT_SPIM_DR20_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR20_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR21
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR21_DR21
 * 
 */
/*
 * Field : dr21
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR21_DR21 register field. */
#define ALT_SPIM_DR21_DR21_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR21_DR21 register field. */
#define ALT_SPIM_DR21_DR21_MSB        31
/* The width in bits of the ALT_SPIM_DR21_DR21 register field. */
#define ALT_SPIM_DR21_DR21_WIDTH      32
/* The mask used to set the ALT_SPIM_DR21_DR21 register field value. */
#define ALT_SPIM_DR21_DR21_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR21_DR21 register field value. */
#define ALT_SPIM_DR21_DR21_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR21_DR21 register field. */
#define ALT_SPIM_DR21_DR21_RESET      0x0
/* Extracts the ALT_SPIM_DR21_DR21 field value from a register. */
#define ALT_SPIM_DR21_DR21_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR21_DR21 register field value suitable for setting the register. */
#define ALT_SPIM_DR21_DR21_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR21.
 */
struct ALT_SPIM_DR21_s
{
    volatile uint32_t  dr21 : 32;  /* ALT_SPIM_DR21_DR21 */
};

/* The typedef declaration for register ALT_SPIM_DR21. */
typedef struct ALT_SPIM_DR21_s  ALT_SPIM_DR21_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR21 register. */
#define ALT_SPIM_DR21_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR21 register from the beginning of the component. */
#define ALT_SPIM_DR21_OFST        0xb4
/* The address of the ALT_SPIM_DR21 register. */
#define ALT_SPIM_DR21_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR21_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR22
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR22_DR22
 * 
 */
/*
 * Field : dr22
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR22_DR22 register field. */
#define ALT_SPIM_DR22_DR22_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR22_DR22 register field. */
#define ALT_SPIM_DR22_DR22_MSB        31
/* The width in bits of the ALT_SPIM_DR22_DR22 register field. */
#define ALT_SPIM_DR22_DR22_WIDTH      32
/* The mask used to set the ALT_SPIM_DR22_DR22 register field value. */
#define ALT_SPIM_DR22_DR22_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR22_DR22 register field value. */
#define ALT_SPIM_DR22_DR22_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR22_DR22 register field. */
#define ALT_SPIM_DR22_DR22_RESET      0x0
/* Extracts the ALT_SPIM_DR22_DR22 field value from a register. */
#define ALT_SPIM_DR22_DR22_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR22_DR22 register field value suitable for setting the register. */
#define ALT_SPIM_DR22_DR22_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR22.
 */
struct ALT_SPIM_DR22_s
{
    volatile uint32_t  dr22 : 32;  /* ALT_SPIM_DR22_DR22 */
};

/* The typedef declaration for register ALT_SPIM_DR22. */
typedef struct ALT_SPIM_DR22_s  ALT_SPIM_DR22_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR22 register. */
#define ALT_SPIM_DR22_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR22 register from the beginning of the component. */
#define ALT_SPIM_DR22_OFST        0xb8
/* The address of the ALT_SPIM_DR22 register. */
#define ALT_SPIM_DR22_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR22_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR23
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR23_DR23
 * 
 */
/*
 * Field : dr23
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR23_DR23 register field. */
#define ALT_SPIM_DR23_DR23_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR23_DR23 register field. */
#define ALT_SPIM_DR23_DR23_MSB        31
/* The width in bits of the ALT_SPIM_DR23_DR23 register field. */
#define ALT_SPIM_DR23_DR23_WIDTH      32
/* The mask used to set the ALT_SPIM_DR23_DR23 register field value. */
#define ALT_SPIM_DR23_DR23_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR23_DR23 register field value. */
#define ALT_SPIM_DR23_DR23_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR23_DR23 register field. */
#define ALT_SPIM_DR23_DR23_RESET      0x0
/* Extracts the ALT_SPIM_DR23_DR23 field value from a register. */
#define ALT_SPIM_DR23_DR23_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR23_DR23 register field value suitable for setting the register. */
#define ALT_SPIM_DR23_DR23_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR23.
 */
struct ALT_SPIM_DR23_s
{
    volatile uint32_t  dr23 : 32;  /* ALT_SPIM_DR23_DR23 */
};

/* The typedef declaration for register ALT_SPIM_DR23. */
typedef struct ALT_SPIM_DR23_s  ALT_SPIM_DR23_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR23 register. */
#define ALT_SPIM_DR23_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR23 register from the beginning of the component. */
#define ALT_SPIM_DR23_OFST        0xbc
/* The address of the ALT_SPIM_DR23 register. */
#define ALT_SPIM_DR23_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR23_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR24
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR24_DR24
 * 
 */
/*
 * Field : dr24
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR24_DR24 register field. */
#define ALT_SPIM_DR24_DR24_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR24_DR24 register field. */
#define ALT_SPIM_DR24_DR24_MSB        31
/* The width in bits of the ALT_SPIM_DR24_DR24 register field. */
#define ALT_SPIM_DR24_DR24_WIDTH      32
/* The mask used to set the ALT_SPIM_DR24_DR24 register field value. */
#define ALT_SPIM_DR24_DR24_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR24_DR24 register field value. */
#define ALT_SPIM_DR24_DR24_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR24_DR24 register field. */
#define ALT_SPIM_DR24_DR24_RESET      0x0
/* Extracts the ALT_SPIM_DR24_DR24 field value from a register. */
#define ALT_SPIM_DR24_DR24_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR24_DR24 register field value suitable for setting the register. */
#define ALT_SPIM_DR24_DR24_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR24.
 */
struct ALT_SPIM_DR24_s
{
    volatile uint32_t  dr24 : 32;  /* ALT_SPIM_DR24_DR24 */
};

/* The typedef declaration for register ALT_SPIM_DR24. */
typedef struct ALT_SPIM_DR24_s  ALT_SPIM_DR24_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR24 register. */
#define ALT_SPIM_DR24_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR24 register from the beginning of the component. */
#define ALT_SPIM_DR24_OFST        0xc0
/* The address of the ALT_SPIM_DR24 register. */
#define ALT_SPIM_DR24_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR24_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR25
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR25_DR25
 * 
 */
/*
 * Field : dr25
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR25_DR25 register field. */
#define ALT_SPIM_DR25_DR25_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR25_DR25 register field. */
#define ALT_SPIM_DR25_DR25_MSB        31
/* The width in bits of the ALT_SPIM_DR25_DR25 register field. */
#define ALT_SPIM_DR25_DR25_WIDTH      32
/* The mask used to set the ALT_SPIM_DR25_DR25 register field value. */
#define ALT_SPIM_DR25_DR25_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR25_DR25 register field value. */
#define ALT_SPIM_DR25_DR25_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR25_DR25 register field. */
#define ALT_SPIM_DR25_DR25_RESET      0x0
/* Extracts the ALT_SPIM_DR25_DR25 field value from a register. */
#define ALT_SPIM_DR25_DR25_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR25_DR25 register field value suitable for setting the register. */
#define ALT_SPIM_DR25_DR25_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR25.
 */
struct ALT_SPIM_DR25_s
{
    volatile uint32_t  dr25 : 32;  /* ALT_SPIM_DR25_DR25 */
};

/* The typedef declaration for register ALT_SPIM_DR25. */
typedef struct ALT_SPIM_DR25_s  ALT_SPIM_DR25_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR25 register. */
#define ALT_SPIM_DR25_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR25 register from the beginning of the component. */
#define ALT_SPIM_DR25_OFST        0xc4
/* The address of the ALT_SPIM_DR25 register. */
#define ALT_SPIM_DR25_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR25_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR26
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR26_DR26
 * 
 */
/*
 * Field : dr26
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR26_DR26 register field. */
#define ALT_SPIM_DR26_DR26_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR26_DR26 register field. */
#define ALT_SPIM_DR26_DR26_MSB        31
/* The width in bits of the ALT_SPIM_DR26_DR26 register field. */
#define ALT_SPIM_DR26_DR26_WIDTH      32
/* The mask used to set the ALT_SPIM_DR26_DR26 register field value. */
#define ALT_SPIM_DR26_DR26_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR26_DR26 register field value. */
#define ALT_SPIM_DR26_DR26_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR26_DR26 register field. */
#define ALT_SPIM_DR26_DR26_RESET      0x0
/* Extracts the ALT_SPIM_DR26_DR26 field value from a register. */
#define ALT_SPIM_DR26_DR26_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR26_DR26 register field value suitable for setting the register. */
#define ALT_SPIM_DR26_DR26_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR26.
 */
struct ALT_SPIM_DR26_s
{
    volatile uint32_t  dr26 : 32;  /* ALT_SPIM_DR26_DR26 */
};

/* The typedef declaration for register ALT_SPIM_DR26. */
typedef struct ALT_SPIM_DR26_s  ALT_SPIM_DR26_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR26 register. */
#define ALT_SPIM_DR26_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR26 register from the beginning of the component. */
#define ALT_SPIM_DR26_OFST        0xc8
/* The address of the ALT_SPIM_DR26 register. */
#define ALT_SPIM_DR26_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR26_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR27
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR27_DR27
 * 
 */
/*
 * Field : dr27
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR27_DR27 register field. */
#define ALT_SPIM_DR27_DR27_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR27_DR27 register field. */
#define ALT_SPIM_DR27_DR27_MSB        31
/* The width in bits of the ALT_SPIM_DR27_DR27 register field. */
#define ALT_SPIM_DR27_DR27_WIDTH      32
/* The mask used to set the ALT_SPIM_DR27_DR27 register field value. */
#define ALT_SPIM_DR27_DR27_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR27_DR27 register field value. */
#define ALT_SPIM_DR27_DR27_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR27_DR27 register field. */
#define ALT_SPIM_DR27_DR27_RESET      0x0
/* Extracts the ALT_SPIM_DR27_DR27 field value from a register. */
#define ALT_SPIM_DR27_DR27_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR27_DR27 register field value suitable for setting the register. */
#define ALT_SPIM_DR27_DR27_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR27.
 */
struct ALT_SPIM_DR27_s
{
    volatile uint32_t  dr27 : 32;  /* ALT_SPIM_DR27_DR27 */
};

/* The typedef declaration for register ALT_SPIM_DR27. */
typedef struct ALT_SPIM_DR27_s  ALT_SPIM_DR27_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR27 register. */
#define ALT_SPIM_DR27_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR27 register from the beginning of the component. */
#define ALT_SPIM_DR27_OFST        0xcc
/* The address of the ALT_SPIM_DR27 register. */
#define ALT_SPIM_DR27_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR27_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR28
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR28_DR28
 * 
 */
/*
 * Field : dr28
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR28_DR28 register field. */
#define ALT_SPIM_DR28_DR28_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR28_DR28 register field. */
#define ALT_SPIM_DR28_DR28_MSB        31
/* The width in bits of the ALT_SPIM_DR28_DR28 register field. */
#define ALT_SPIM_DR28_DR28_WIDTH      32
/* The mask used to set the ALT_SPIM_DR28_DR28 register field value. */
#define ALT_SPIM_DR28_DR28_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR28_DR28 register field value. */
#define ALT_SPIM_DR28_DR28_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR28_DR28 register field. */
#define ALT_SPIM_DR28_DR28_RESET      0x0
/* Extracts the ALT_SPIM_DR28_DR28 field value from a register. */
#define ALT_SPIM_DR28_DR28_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR28_DR28 register field value suitable for setting the register. */
#define ALT_SPIM_DR28_DR28_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR28.
 */
struct ALT_SPIM_DR28_s
{
    volatile uint32_t  dr28 : 32;  /* ALT_SPIM_DR28_DR28 */
};

/* The typedef declaration for register ALT_SPIM_DR28. */
typedef struct ALT_SPIM_DR28_s  ALT_SPIM_DR28_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR28 register. */
#define ALT_SPIM_DR28_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR28 register from the beginning of the component. */
#define ALT_SPIM_DR28_OFST        0xd0
/* The address of the ALT_SPIM_DR28 register. */
#define ALT_SPIM_DR28_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR28_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR29
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR29_DR29
 * 
 */
/*
 * Field : dr29
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR29_DR29 register field. */
#define ALT_SPIM_DR29_DR29_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR29_DR29 register field. */
#define ALT_SPIM_DR29_DR29_MSB        31
/* The width in bits of the ALT_SPIM_DR29_DR29 register field. */
#define ALT_SPIM_DR29_DR29_WIDTH      32
/* The mask used to set the ALT_SPIM_DR29_DR29 register field value. */
#define ALT_SPIM_DR29_DR29_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR29_DR29 register field value. */
#define ALT_SPIM_DR29_DR29_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR29_DR29 register field. */
#define ALT_SPIM_DR29_DR29_RESET      0x0
/* Extracts the ALT_SPIM_DR29_DR29 field value from a register. */
#define ALT_SPIM_DR29_DR29_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR29_DR29 register field value suitable for setting the register. */
#define ALT_SPIM_DR29_DR29_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR29.
 */
struct ALT_SPIM_DR29_s
{
    volatile uint32_t  dr29 : 32;  /* ALT_SPIM_DR29_DR29 */
};

/* The typedef declaration for register ALT_SPIM_DR29. */
typedef struct ALT_SPIM_DR29_s  ALT_SPIM_DR29_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR29 register. */
#define ALT_SPIM_DR29_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR29 register from the beginning of the component. */
#define ALT_SPIM_DR29_OFST        0xd4
/* The address of the ALT_SPIM_DR29 register. */
#define ALT_SPIM_DR29_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR29_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR30
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR30_DR30
 * 
 */
/*
 * Field : dr30
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR30_DR30 register field. */
#define ALT_SPIM_DR30_DR30_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR30_DR30 register field. */
#define ALT_SPIM_DR30_DR30_MSB        31
/* The width in bits of the ALT_SPIM_DR30_DR30 register field. */
#define ALT_SPIM_DR30_DR30_WIDTH      32
/* The mask used to set the ALT_SPIM_DR30_DR30 register field value. */
#define ALT_SPIM_DR30_DR30_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR30_DR30 register field value. */
#define ALT_SPIM_DR30_DR30_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR30_DR30 register field. */
#define ALT_SPIM_DR30_DR30_RESET      0x0
/* Extracts the ALT_SPIM_DR30_DR30 field value from a register. */
#define ALT_SPIM_DR30_DR30_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR30_DR30 register field value suitable for setting the register. */
#define ALT_SPIM_DR30_DR30_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR30.
 */
struct ALT_SPIM_DR30_s
{
    volatile uint32_t  dr30 : 32;  /* ALT_SPIM_DR30_DR30 */
};

/* The typedef declaration for register ALT_SPIM_DR30. */
typedef struct ALT_SPIM_DR30_s  ALT_SPIM_DR30_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR30 register. */
#define ALT_SPIM_DR30_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR30 register from the beginning of the component. */
#define ALT_SPIM_DR30_OFST        0xd8
/* The address of the ALT_SPIM_DR30 register. */
#define ALT_SPIM_DR30_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR30_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR31
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR31_DR31
 * 
 */
/*
 * Field : dr31
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR31_DR31 register field. */
#define ALT_SPIM_DR31_DR31_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR31_DR31 register field. */
#define ALT_SPIM_DR31_DR31_MSB        31
/* The width in bits of the ALT_SPIM_DR31_DR31 register field. */
#define ALT_SPIM_DR31_DR31_WIDTH      32
/* The mask used to set the ALT_SPIM_DR31_DR31 register field value. */
#define ALT_SPIM_DR31_DR31_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR31_DR31 register field value. */
#define ALT_SPIM_DR31_DR31_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR31_DR31 register field. */
#define ALT_SPIM_DR31_DR31_RESET      0x0
/* Extracts the ALT_SPIM_DR31_DR31 field value from a register. */
#define ALT_SPIM_DR31_DR31_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR31_DR31 register field value suitable for setting the register. */
#define ALT_SPIM_DR31_DR31_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR31.
 */
struct ALT_SPIM_DR31_s
{
    volatile uint32_t  dr31 : 32;  /* ALT_SPIM_DR31_DR31 */
};

/* The typedef declaration for register ALT_SPIM_DR31. */
typedef struct ALT_SPIM_DR31_s  ALT_SPIM_DR31_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR31 register. */
#define ALT_SPIM_DR31_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR31 register from the beginning of the component. */
#define ALT_SPIM_DR31_OFST        0xdc
/* The address of the ALT_SPIM_DR31 register. */
#define ALT_SPIM_DR31_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR31_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR32
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR32_DR32
 * 
 */
/*
 * Field : dr32
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR32_DR32 register field. */
#define ALT_SPIM_DR32_DR32_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR32_DR32 register field. */
#define ALT_SPIM_DR32_DR32_MSB        31
/* The width in bits of the ALT_SPIM_DR32_DR32 register field. */
#define ALT_SPIM_DR32_DR32_WIDTH      32
/* The mask used to set the ALT_SPIM_DR32_DR32 register field value. */
#define ALT_SPIM_DR32_DR32_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR32_DR32 register field value. */
#define ALT_SPIM_DR32_DR32_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR32_DR32 register field. */
#define ALT_SPIM_DR32_DR32_RESET      0x0
/* Extracts the ALT_SPIM_DR32_DR32 field value from a register. */
#define ALT_SPIM_DR32_DR32_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR32_DR32 register field value suitable for setting the register. */
#define ALT_SPIM_DR32_DR32_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR32.
 */
struct ALT_SPIM_DR32_s
{
    volatile uint32_t  dr32 : 32;  /* ALT_SPIM_DR32_DR32 */
};

/* The typedef declaration for register ALT_SPIM_DR32. */
typedef struct ALT_SPIM_DR32_s  ALT_SPIM_DR32_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR32 register. */
#define ALT_SPIM_DR32_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR32 register from the beginning of the component. */
#define ALT_SPIM_DR32_OFST        0xe0
/* The address of the ALT_SPIM_DR32 register. */
#define ALT_SPIM_DR32_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR32_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR33
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR33_DR33
 * 
 */
/*
 * Field : dr33
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR33_DR33 register field. */
#define ALT_SPIM_DR33_DR33_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR33_DR33 register field. */
#define ALT_SPIM_DR33_DR33_MSB        31
/* The width in bits of the ALT_SPIM_DR33_DR33 register field. */
#define ALT_SPIM_DR33_DR33_WIDTH      32
/* The mask used to set the ALT_SPIM_DR33_DR33 register field value. */
#define ALT_SPIM_DR33_DR33_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR33_DR33 register field value. */
#define ALT_SPIM_DR33_DR33_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR33_DR33 register field. */
#define ALT_SPIM_DR33_DR33_RESET      0x0
/* Extracts the ALT_SPIM_DR33_DR33 field value from a register. */
#define ALT_SPIM_DR33_DR33_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR33_DR33 register field value suitable for setting the register. */
#define ALT_SPIM_DR33_DR33_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR33.
 */
struct ALT_SPIM_DR33_s
{
    volatile uint32_t  dr33 : 32;  /* ALT_SPIM_DR33_DR33 */
};

/* The typedef declaration for register ALT_SPIM_DR33. */
typedef struct ALT_SPIM_DR33_s  ALT_SPIM_DR33_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR33 register. */
#define ALT_SPIM_DR33_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR33 register from the beginning of the component. */
#define ALT_SPIM_DR33_OFST        0xe4
/* The address of the ALT_SPIM_DR33 register. */
#define ALT_SPIM_DR33_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR33_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR34
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR34_DR34
 * 
 */
/*
 * Field : dr34
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR34_DR34 register field. */
#define ALT_SPIM_DR34_DR34_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR34_DR34 register field. */
#define ALT_SPIM_DR34_DR34_MSB        31
/* The width in bits of the ALT_SPIM_DR34_DR34 register field. */
#define ALT_SPIM_DR34_DR34_WIDTH      32
/* The mask used to set the ALT_SPIM_DR34_DR34 register field value. */
#define ALT_SPIM_DR34_DR34_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR34_DR34 register field value. */
#define ALT_SPIM_DR34_DR34_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR34_DR34 register field. */
#define ALT_SPIM_DR34_DR34_RESET      0x0
/* Extracts the ALT_SPIM_DR34_DR34 field value from a register. */
#define ALT_SPIM_DR34_DR34_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR34_DR34 register field value suitable for setting the register. */
#define ALT_SPIM_DR34_DR34_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR34.
 */
struct ALT_SPIM_DR34_s
{
    volatile uint32_t  dr34 : 32;  /* ALT_SPIM_DR34_DR34 */
};

/* The typedef declaration for register ALT_SPIM_DR34. */
typedef struct ALT_SPIM_DR34_s  ALT_SPIM_DR34_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR34 register. */
#define ALT_SPIM_DR34_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR34 register from the beginning of the component. */
#define ALT_SPIM_DR34_OFST        0xe8
/* The address of the ALT_SPIM_DR34 register. */
#define ALT_SPIM_DR34_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR34_OFST))

/*
 * Register : DW_apb_ssi Data Register - DR35
 * 
 * The DW_apb_ssi data register is a 16/32-bit (depending on SSI_MAX_XFER_SIZE)
 * read/write buffer for
 * 
 * the transmit/receive FIFOs. If the configuration parameter SSI_MAX_XFER_SIZE is
 * set to 32, then all 32 bits
 * 
 * are valid, otherwise, only 16 bits ([15:0]) of the register are valid. When the
 * register is read, data in the
 * 
 * receive FIFO buffer is accessed. When it is written to, data are moved into the
 * transmit FIFO buffer; a write
 * 
 * can occur only when SSI_EN = 1. FIFOs are reset when SSI_EN = 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [31:0] | RW     | 0x0   | ALT_SPIM_DR35_DR35
 * 
 */
/*
 * Field : dr35
 * 
 * Data Register. When writing to this register, you must right-justify the data.
 * Read
 * 
 * data are automatically right-justified. If SSI_MAX_XFER_SIZE configuration
 * 
 * parameter is set to 32, all 32 bits are valid. Otherwise, only 16 bits ([15:0])
 * of the
 * 
 * register are valid.
 * 
 * Read = Receive FIFO buffer
 * 
 * Write = Transmit FIFO buffer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_DR35_DR35 register field. */
#define ALT_SPIM_DR35_DR35_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_DR35_DR35 register field. */
#define ALT_SPIM_DR35_DR35_MSB        31
/* The width in bits of the ALT_SPIM_DR35_DR35 register field. */
#define ALT_SPIM_DR35_DR35_WIDTH      32
/* The mask used to set the ALT_SPIM_DR35_DR35 register field value. */
#define ALT_SPIM_DR35_DR35_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_DR35_DR35 register field value. */
#define ALT_SPIM_DR35_DR35_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_DR35_DR35 register field. */
#define ALT_SPIM_DR35_DR35_RESET      0x0
/* Extracts the ALT_SPIM_DR35_DR35 field value from a register. */
#define ALT_SPIM_DR35_DR35_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_DR35_DR35 register field value suitable for setting the register. */
#define ALT_SPIM_DR35_DR35_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_DR35.
 */
struct ALT_SPIM_DR35_s
{
    volatile uint32_t  dr35 : 32;  /* ALT_SPIM_DR35_DR35 */
};

/* The typedef declaration for register ALT_SPIM_DR35. */
typedef struct ALT_SPIM_DR35_s  ALT_SPIM_DR35_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_DR35 register. */
#define ALT_SPIM_DR35_RESET       0x00000000
/* The byte offset of the ALT_SPIM_DR35 register from the beginning of the component. */
#define ALT_SPIM_DR35_OFST        0xec
/* The address of the ALT_SPIM_DR35 register. */
#define ALT_SPIM_DR35_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_DR35_OFST))

/*
 * Register : RX Sample Delay - RX_SAMPLE_DLY
 * 
 * RX Sample Delay.
 * 
 * This register is only valid when the DW_apb_ssi is configured with rxd
 * 
 * sample delay logic (SSI_HAS_RX_SAMPLE_DELAY==1). When the DW_apb_ssi is
 * 
 * not configured with rxd sample delay logic, this register will not exist
 * 
 * and writing to its address location will have no effect; reading from
 * 
 * its address will return zero. This register control the number of ssi_clk
 * 
 * cycles that are delayed (from the default sample time) before the actual
 * 
 * sample of the rxd input occurs. It is impossible to write to this
 * 
 * register when the DW_apb_ssi is enabled. The DW_apb_ssi is enabled and
 * 
 * disabled by writing to the SSIENR register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_SPIM_RX_SAMPLE_DLY_RSD               
 *  [31:8] | R      | 0x0   | ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY
 * 
 */
/*
 * Field : RSD
 * 
 * Rxd Sample Delay.
 * 
 * This register is used to delay the sample of the rxd input port. Each value
 * 
 * represents a single ssi_clk delay on the sample of rxd. Note; If this register
 * 
 * is programmed with a value that exceeds the depth of the internal shift
 * 
 * registers (SSI_RX_DLY_SR_DEPTH) zero delay will be applied to the rxd sample.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RX_SAMPLE_DLY_RSD register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RX_SAMPLE_DLY_RSD register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_MSB        7
/* The width in bits of the ALT_SPIM_RX_SAMPLE_DLY_RSD register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_WIDTH      8
/* The mask used to set the ALT_SPIM_RX_SAMPLE_DLY_RSD register field value. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SPIM_RX_SAMPLE_DLY_RSD register field value. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_CLR_MSK    0xffffff00
/* The reset value of the ALT_SPIM_RX_SAMPLE_DLY_RSD register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_RESET      0x0
/* Extracts the ALT_SPIM_RX_SAMPLE_DLY_RSD field value from a register. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SPIM_RX_SAMPLE_DLY_RSD register field value suitable for setting the register. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSD_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_RX_SAMPLE_DLY
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_MSB        31
/* The width in bits of the ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_WIDTH      24
/* The mask used to set the ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY register field value. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_SET_MSK    0xffffff00
/* The mask used to clear the ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY register field value. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_CLR_MSK    0x000000ff
/* The reset value of the ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY register field. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_RESET      0x0
/* Extracts the ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY field value from a register. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY register field value suitable for setting the register. */
#define ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_SPIM_RX_SAMPLE_DLY.
 */
struct ALT_SPIM_RX_SAMPLE_DLY_s
{
    volatile uint32_t        RSD                :  8;  /* ALT_SPIM_RX_SAMPLE_DLY_RSD */
    const volatile uint32_t  RSVD_RX_SAMPLE_DLY : 24;  /* ALT_SPIM_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY */
};

/* The typedef declaration for register ALT_SPIM_RX_SAMPLE_DLY. */
typedef struct ALT_SPIM_RX_SAMPLE_DLY_s  ALT_SPIM_RX_SAMPLE_DLY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RX_SAMPLE_DLY register. */
#define ALT_SPIM_RX_SAMPLE_DLY_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RX_SAMPLE_DLY register from the beginning of the component. */
#define ALT_SPIM_RX_SAMPLE_DLY_OFST        0xf0
/* The address of the ALT_SPIM_RX_SAMPLE_DLY register. */
#define ALT_SPIM_RX_SAMPLE_DLY_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RX_SAMPLE_DLY_OFST))

/*
 * Register : RSVD_1 - Reserved address location - RSVD_1
 * 
 * RSVD_1 - Reserved address location
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [31:0] | R      | 0x0   | ALT_SPIM_RSVD_1_RSVD1
 * 
 */
/*
 * Field : RSVD1
 * 
 * Reserved address location
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RSVD_1_RSVD1 register field. */
#define ALT_SPIM_RSVD_1_RSVD1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RSVD_1_RSVD1 register field. */
#define ALT_SPIM_RSVD_1_RSVD1_MSB        31
/* The width in bits of the ALT_SPIM_RSVD_1_RSVD1 register field. */
#define ALT_SPIM_RSVD_1_RSVD1_WIDTH      32
/* The mask used to set the ALT_SPIM_RSVD_1_RSVD1 register field value. */
#define ALT_SPIM_RSVD_1_RSVD1_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_RSVD_1_RSVD1 register field value. */
#define ALT_SPIM_RSVD_1_RSVD1_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_RSVD_1_RSVD1 register field. */
#define ALT_SPIM_RSVD_1_RSVD1_RESET      0x0
/* Extracts the ALT_SPIM_RSVD_1_RSVD1 field value from a register. */
#define ALT_SPIM_RSVD_1_RSVD1_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_RSVD_1_RSVD1 register field value suitable for setting the register. */
#define ALT_SPIM_RSVD_1_RSVD1_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_RSVD_1.
 */
struct ALT_SPIM_RSVD_1_s
{
    const volatile uint32_t  RSVD1 : 32;  /* ALT_SPIM_RSVD_1_RSVD1 */
};

/* The typedef declaration for register ALT_SPIM_RSVD_1. */
typedef struct ALT_SPIM_RSVD_1_s  ALT_SPIM_RSVD_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RSVD_1 register. */
#define ALT_SPIM_RSVD_1_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RSVD_1 register from the beginning of the component. */
#define ALT_SPIM_RSVD_1_OFST        0xf8
/* The address of the ALT_SPIM_RSVD_1 register. */
#define ALT_SPIM_RSVD_1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RSVD_1_OFST))

/*
 * Register : RSVD_2 - Reserved address location - RSVD_2
 * 
 * RSVD_2 - Reserved address location
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [31:0] | R      | 0x0   | ALT_SPIM_RSVD_2_RSVD2
 * 
 */
/*
 * Field : RSVD2
 * 
 * Reserved address location
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SPIM_RSVD_2_RSVD2 register field. */
#define ALT_SPIM_RSVD_2_RSVD2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SPIM_RSVD_2_RSVD2 register field. */
#define ALT_SPIM_RSVD_2_RSVD2_MSB        31
/* The width in bits of the ALT_SPIM_RSVD_2_RSVD2 register field. */
#define ALT_SPIM_RSVD_2_RSVD2_WIDTH      32
/* The mask used to set the ALT_SPIM_RSVD_2_RSVD2 register field value. */
#define ALT_SPIM_RSVD_2_RSVD2_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SPIM_RSVD_2_RSVD2 register field value. */
#define ALT_SPIM_RSVD_2_RSVD2_CLR_MSK    0x00000000
/* The reset value of the ALT_SPIM_RSVD_2_RSVD2 register field. */
#define ALT_SPIM_RSVD_2_RSVD2_RESET      0x0
/* Extracts the ALT_SPIM_RSVD_2_RSVD2 field value from a register. */
#define ALT_SPIM_RSVD_2_RSVD2_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SPIM_RSVD_2_RSVD2 register field value suitable for setting the register. */
#define ALT_SPIM_RSVD_2_RSVD2_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SPIM_RSVD_2.
 */
struct ALT_SPIM_RSVD_2_s
{
    const volatile uint32_t  RSVD2 : 32;  /* ALT_SPIM_RSVD_2_RSVD2 */
};

/* The typedef declaration for register ALT_SPIM_RSVD_2. */
typedef struct ALT_SPIM_RSVD_2_s  ALT_SPIM_RSVD_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SPIM_RSVD_2 register. */
#define ALT_SPIM_RSVD_2_RESET       0x00000000
/* The byte offset of the ALT_SPIM_RSVD_2 register from the beginning of the component. */
#define ALT_SPIM_RSVD_2_OFST        0xfc
/* The address of the ALT_SPIM_RSVD_2 register. */
#define ALT_SPIM_RSVD_2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SPIM_RSVD_2_OFST))

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
 * The struct declaration for register group ALT_SPIM.
 */
struct ALT_SPIM_s
{
    volatile ALT_SPIM_CTRLR0_t          CTRLR0;          /* ALT_SPIM_CTRLR0 */
    volatile ALT_SPIM_CTRLR1_t          CTRLR1;          /* ALT_SPIM_CTRLR1 */
    volatile ALT_SPIM_SSIENR_t          SSIENR;          /* ALT_SPIM_SSIENR */
    volatile ALT_SPIM_MWCR_t            MWCR;            /* ALT_SPIM_MWCR */
    volatile ALT_SPIM_SER_t             SER;             /* ALT_SPIM_SER */
    volatile ALT_SPIM_BAUDR_t           BAUDR;           /* ALT_SPIM_BAUDR */
    volatile ALT_SPIM_TXFTLR_t          TXFTLR;          /* ALT_SPIM_TXFTLR */
    volatile ALT_SPIM_RXFTLR_t          RXFTLR;          /* ALT_SPIM_RXFTLR */
    volatile ALT_SPIM_TXFLR_t           TXFLR;           /* ALT_SPIM_TXFLR */
    volatile ALT_SPIM_RXFLR_t           RXFLR;           /* ALT_SPIM_RXFLR */
    volatile ALT_SPIM_SR_t              SR;              /* ALT_SPIM_SR */
    volatile ALT_SPIM_IMR_t             IMR;             /* ALT_SPIM_IMR */
    volatile ALT_SPIM_ISR_t             ISR;             /* ALT_SPIM_ISR */
    volatile ALT_SPIM_RISR_t            RISR;            /* ALT_SPIM_RISR */
    volatile ALT_SPIM_TXOICR_t          TXOICR;          /* ALT_SPIM_TXOICR */
    volatile ALT_SPIM_RXOICR_t          RXOICR;          /* ALT_SPIM_RXOICR */
    volatile ALT_SPIM_RXUICR_t          RXUICR;          /* ALT_SPIM_RXUICR */
    volatile ALT_SPIM_MSTICR_t          MSTICR;          /* ALT_SPIM_MSTICR */
    volatile ALT_SPIM_ICR_t             ICR;             /* ALT_SPIM_ICR */
    volatile ALT_SPIM_DMACR_t           DMACR;           /* ALT_SPIM_DMACR */
    volatile ALT_SPIM_DMATDLR_t         DMATDLR;         /* ALT_SPIM_DMATDLR */
    volatile ALT_SPIM_DMARDLR_t         DMARDLR;         /* ALT_SPIM_DMARDLR */
    volatile ALT_SPIM_IDR_t             IDR;             /* ALT_SPIM_IDR */
    volatile ALT_SPIM_SSI_VERSION_ID_t  SSI_VERSION_ID;  /* ALT_SPIM_SSI_VERSION_ID */
    volatile ALT_SPIM_DR0_t             DR0;             /* ALT_SPIM_DR0 */
    volatile ALT_SPIM_DR1_t             DR1;             /* ALT_SPIM_DR1 */
    volatile ALT_SPIM_DR2_t             DR2;             /* ALT_SPIM_DR2 */
    volatile ALT_SPIM_DR3_t             DR3;             /* ALT_SPIM_DR3 */
    volatile ALT_SPIM_DR4_t             DR4;             /* ALT_SPIM_DR4 */
    volatile ALT_SPIM_DR5_t             DR5;             /* ALT_SPIM_DR5 */
    volatile ALT_SPIM_DR6_t             DR6;             /* ALT_SPIM_DR6 */
    volatile ALT_SPIM_DR7_t             DR7;             /* ALT_SPIM_DR7 */
    volatile ALT_SPIM_DR8_t             DR8;             /* ALT_SPIM_DR8 */
    volatile ALT_SPIM_DR9_t             DR9;             /* ALT_SPIM_DR9 */
    volatile ALT_SPIM_DR10_t            DR10;            /* ALT_SPIM_DR10 */
    volatile ALT_SPIM_DR11_t            DR11;            /* ALT_SPIM_DR11 */
    volatile ALT_SPIM_DR12_t            DR12;            /* ALT_SPIM_DR12 */
    volatile ALT_SPIM_DR13_t            DR13;            /* ALT_SPIM_DR13 */
    volatile ALT_SPIM_DR14_t            DR14;            /* ALT_SPIM_DR14 */
    volatile ALT_SPIM_DR15_t            DR15;            /* ALT_SPIM_DR15 */
    volatile ALT_SPIM_DR16_t            DR16;            /* ALT_SPIM_DR16 */
    volatile ALT_SPIM_DR17_t            DR17;            /* ALT_SPIM_DR17 */
    volatile ALT_SPIM_DR18_t            DR18;            /* ALT_SPIM_DR18 */
    volatile ALT_SPIM_DR19_t            DR19;            /* ALT_SPIM_DR19 */
    volatile ALT_SPIM_DR20_t            DR20;            /* ALT_SPIM_DR20 */
    volatile ALT_SPIM_DR21_t            DR21;            /* ALT_SPIM_DR21 */
    volatile ALT_SPIM_DR22_t            DR22;            /* ALT_SPIM_DR22 */
    volatile ALT_SPIM_DR23_t            DR23;            /* ALT_SPIM_DR23 */
    volatile ALT_SPIM_DR24_t            DR24;            /* ALT_SPIM_DR24 */
    volatile ALT_SPIM_DR25_t            DR25;            /* ALT_SPIM_DR25 */
    volatile ALT_SPIM_DR26_t            DR26;            /* ALT_SPIM_DR26 */
    volatile ALT_SPIM_DR27_t            DR27;            /* ALT_SPIM_DR27 */
    volatile ALT_SPIM_DR28_t            DR28;            /* ALT_SPIM_DR28 */
    volatile ALT_SPIM_DR29_t            DR29;            /* ALT_SPIM_DR29 */
    volatile ALT_SPIM_DR30_t            DR30;            /* ALT_SPIM_DR30 */
    volatile ALT_SPIM_DR31_t            DR31;            /* ALT_SPIM_DR31 */
    volatile ALT_SPIM_DR32_t            DR32;            /* ALT_SPIM_DR32 */
    volatile ALT_SPIM_DR33_t            DR33;            /* ALT_SPIM_DR33 */
    volatile ALT_SPIM_DR34_t            DR34;            /* ALT_SPIM_DR34 */
    volatile ALT_SPIM_DR35_t            DR35;            /* ALT_SPIM_DR35 */
    volatile ALT_SPIM_RX_SAMPLE_DLY_t   RX_SAMPLE_DLY;   /* ALT_SPIM_RX_SAMPLE_DLY */
    volatile uint32_t                   _pad_0xf4_0xf7;  /* *UNDEFINED* */
    volatile ALT_SPIM_RSVD_1_t          RSVD_1;          /* ALT_SPIM_RSVD_1 */
    volatile ALT_SPIM_RSVD_2_t          RSVD_2;          /* ALT_SPIM_RSVD_2 */
};

/* The typedef declaration for register group ALT_SPIM. */
typedef struct ALT_SPIM_s  ALT_SPIM_t;
/* The struct declaration for the raw register contents of register group ALT_SPIM. */
struct ALT_SPIM_raw_s
{
    volatile uint32_t  CTRLR0;          /* ALT_SPIM_CTRLR0 */
    volatile uint32_t  CTRLR1;          /* ALT_SPIM_CTRLR1 */
    volatile uint32_t  SSIENR;          /* ALT_SPIM_SSIENR */
    volatile uint32_t  MWCR;            /* ALT_SPIM_MWCR */
    volatile uint32_t  SER;             /* ALT_SPIM_SER */
    volatile uint32_t  BAUDR;           /* ALT_SPIM_BAUDR */
    volatile uint32_t  TXFTLR;          /* ALT_SPIM_TXFTLR */
    volatile uint32_t  RXFTLR;          /* ALT_SPIM_RXFTLR */
    volatile uint32_t  TXFLR;           /* ALT_SPIM_TXFLR */
    volatile uint32_t  RXFLR;           /* ALT_SPIM_RXFLR */
    volatile uint32_t  SR;              /* ALT_SPIM_SR */
    volatile uint32_t  IMR;             /* ALT_SPIM_IMR */
    volatile uint32_t  ISR;             /* ALT_SPIM_ISR */
    volatile uint32_t  RISR;            /* ALT_SPIM_RISR */
    volatile uint32_t  TXOICR;          /* ALT_SPIM_TXOICR */
    volatile uint32_t  RXOICR;          /* ALT_SPIM_RXOICR */
    volatile uint32_t  RXUICR;          /* ALT_SPIM_RXUICR */
    volatile uint32_t  MSTICR;          /* ALT_SPIM_MSTICR */
    volatile uint32_t  ICR;             /* ALT_SPIM_ICR */
    volatile uint32_t  DMACR;           /* ALT_SPIM_DMACR */
    volatile uint32_t  DMATDLR;         /* ALT_SPIM_DMATDLR */
    volatile uint32_t  DMARDLR;         /* ALT_SPIM_DMARDLR */
    volatile uint32_t  IDR;             /* ALT_SPIM_IDR */
    volatile uint32_t  SSI_VERSION_ID;  /* ALT_SPIM_SSI_VERSION_ID */
    volatile uint32_t  DR0;             /* ALT_SPIM_DR0 */
    volatile uint32_t  DR1;             /* ALT_SPIM_DR1 */
    volatile uint32_t  DR2;             /* ALT_SPIM_DR2 */
    volatile uint32_t  DR3;             /* ALT_SPIM_DR3 */
    volatile uint32_t  DR4;             /* ALT_SPIM_DR4 */
    volatile uint32_t  DR5;             /* ALT_SPIM_DR5 */
    volatile uint32_t  DR6;             /* ALT_SPIM_DR6 */
    volatile uint32_t  DR7;             /* ALT_SPIM_DR7 */
    volatile uint32_t  DR8;             /* ALT_SPIM_DR8 */
    volatile uint32_t  DR9;             /* ALT_SPIM_DR9 */
    volatile uint32_t  DR10;            /* ALT_SPIM_DR10 */
    volatile uint32_t  DR11;            /* ALT_SPIM_DR11 */
    volatile uint32_t  DR12;            /* ALT_SPIM_DR12 */
    volatile uint32_t  DR13;            /* ALT_SPIM_DR13 */
    volatile uint32_t  DR14;            /* ALT_SPIM_DR14 */
    volatile uint32_t  DR15;            /* ALT_SPIM_DR15 */
    volatile uint32_t  DR16;            /* ALT_SPIM_DR16 */
    volatile uint32_t  DR17;            /* ALT_SPIM_DR17 */
    volatile uint32_t  DR18;            /* ALT_SPIM_DR18 */
    volatile uint32_t  DR19;            /* ALT_SPIM_DR19 */
    volatile uint32_t  DR20;            /* ALT_SPIM_DR20 */
    volatile uint32_t  DR21;            /* ALT_SPIM_DR21 */
    volatile uint32_t  DR22;            /* ALT_SPIM_DR22 */
    volatile uint32_t  DR23;            /* ALT_SPIM_DR23 */
    volatile uint32_t  DR24;            /* ALT_SPIM_DR24 */
    volatile uint32_t  DR25;            /* ALT_SPIM_DR25 */
    volatile uint32_t  DR26;            /* ALT_SPIM_DR26 */
    volatile uint32_t  DR27;            /* ALT_SPIM_DR27 */
    volatile uint32_t  DR28;            /* ALT_SPIM_DR28 */
    volatile uint32_t  DR29;            /* ALT_SPIM_DR29 */
    volatile uint32_t  DR30;            /* ALT_SPIM_DR30 */
    volatile uint32_t  DR31;            /* ALT_SPIM_DR31 */
    volatile uint32_t  DR32;            /* ALT_SPIM_DR32 */
    volatile uint32_t  DR33;            /* ALT_SPIM_DR33 */
    volatile uint32_t  DR34;            /* ALT_SPIM_DR34 */
    volatile uint32_t  DR35;            /* ALT_SPIM_DR35 */
    volatile uint32_t  RX_SAMPLE_DLY;   /* ALT_SPIM_RX_SAMPLE_DLY */
    volatile uint32_t  _pad_0xf4_0xf7;  /* *UNDEFINED* */
    volatile uint32_t  RSVD_1;          /* ALT_SPIM_RSVD_1 */
    volatile uint32_t  RSVD_2;          /* ALT_SPIM_RSVD_2 */
};

/* The typedef declaration for the raw register contents of register group ALT_SPIM. */
typedef struct ALT_SPIM_raw_s  ALT_SPIM_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_SPIM_H__ */

