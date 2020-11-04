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

/* Altera - ALT_SDMMC */

#ifndef __ALT_SOCAL_SDMMC_H__
#define __ALT_SOCAL_SDMMC_H__

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
 * Component : SDMMC
 * Block
 * 
 */
/*
 * Register : Control Register - CTRL
 * 
 * Control register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_CTRL_CONTROLLER_RESET             
 *  [1]     | RW     | 0x0   | ALT_SDMMC_CTRL_FIFO_RESET                   
 *  [2]     | RW     | 0x0   | ALT_SDMMC_CTRL_DMA_RESET                    
 *  [3]     | ???    | 0x0   | *UNDEFINED*                                 
 *  [4]     | RW     | 0x0   | ALT_SDMMC_CTRL_INT_ENABLE                   
 *  [5]     | RW     | 0x0   | ALT_SDMMC_CTRL_DMA_ENABLE                   
 *  [6]     | RW     | 0x0   | ALT_SDMMC_CTRL_READ_WAIT                    
 *  [7]     | RW     | 0x0   | ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE            
 *  [8]     | RW     | 0x0   | ALT_SDMMC_CTRL_ABORT_READ_DATA              
 *  [9]     | RW     | 0x0   | ALT_SDMMC_CTRL_SEND_CCSD                    
 *  [10]    | RW     | 0x0   | ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD          
 *  [11]    | RW     | 0x0   | ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS
 *  [15:12] | ???    | 0x0   | *UNDEFINED*                                 
 *  [19:16] | RW     | 0x0   | ALT_SDMMC_CTRL_CARD_VOLTAGE_A               
 *  [23:20] | RW     | 0x0   | ALT_SDMMC_CTRL_CARD_VOLTAGE_B               
 *  [24]    | RW     | 0x0   | ALT_SDMMC_CTRL_ENABLE_OD_PULLUP             
 *  [25]    | RW     | 0x0   | ALT_SDMMC_CTRL_USE_INTERNAL_DMAC            
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : CONTROLLER_RESET
 * 
 * 0-No change
 * 
 * 1-Reset DWC_mobile_storage controller
 * 
 * To reset controller, firmware should set bit to 1. This bit is auto-cleared
 * after two AHB and two cclk_in clock cycles.
 * 
 * This resets:
 * 
 * * BIU/CIU interface
 * 
 * * CIU and state machines
 * 
 * * abort_read_data, send_irq_response, and read_wait bits of Control register
 * 
 * * start_cmd bit of Command register
 * 
 * Does not affect any registers or DMA interface, or FIFO or host
 * 
 * interrupts
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description                        
 * :-----------------------------------------------|:------|:------------------------------------
 *  ALT_SDMMC_CTRL_CONTROLLER_RESET_E_NO_CHANGE    | 0x0   | No change                          
 *  ALT_SDMMC_CTRL_CONTROLLER_RESET_E_ASSERT_RESET | 0x1   | Reset DWC_mobile_storage controller
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_CONTROLLER_RESET
 * 
 * No change
 */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_E_NO_CHANGE     0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_CONTROLLER_RESET
 * 
 * Reset DWC_mobile_storage controller
 */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_E_ASSERT_RESET  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_CONTROLLER_RESET register field. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_CONTROLLER_RESET register field. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_MSB        0
/* The width in bits of the ALT_SDMMC_CTRL_CONTROLLER_RESET register field. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_CONTROLLER_RESET register field value. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_CTRL_CONTROLLER_RESET register field value. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_CTRL_CONTROLLER_RESET register field. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_CONTROLLER_RESET field value from a register. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_CTRL_CONTROLLER_RESET register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_CONTROLLER_RESET_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FIFO_RESET
 * 
 * 0-No change
 * 
 * 1-Reset to data FIFO To reset FIFO pointers
 * 
 * To reset FIFO, firmware should set bit to 1. This bit is auto-cleared after
 * completion of reset operation.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description                             
 * :-----------------------------------------|:------|:-----------------------------------------
 *  ALT_SDMMC_CTRL_FIFO_RESET_E_NO_CHANGE    | 0x0   | No change                               
 *  ALT_SDMMC_CTRL_FIFO_RESET_E_ASSERT_RESET | 0x1   | Reset to data FIFO To reset FIFO pointer
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_FIFO_RESET
 * 
 * No change
 */
#define ALT_SDMMC_CTRL_FIFO_RESET_E_NO_CHANGE       0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_FIFO_RESET
 * 
 * Reset to data FIFO To reset FIFO pointer
 */
#define ALT_SDMMC_CTRL_FIFO_RESET_E_ASSERT_RESET    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_FIFO_RESET register field. */
#define ALT_SDMMC_CTRL_FIFO_RESET_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_FIFO_RESET register field. */
#define ALT_SDMMC_CTRL_FIFO_RESET_MSB        1
/* The width in bits of the ALT_SDMMC_CTRL_FIFO_RESET register field. */
#define ALT_SDMMC_CTRL_FIFO_RESET_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_FIFO_RESET register field value. */
#define ALT_SDMMC_CTRL_FIFO_RESET_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_CTRL_FIFO_RESET register field value. */
#define ALT_SDMMC_CTRL_FIFO_RESET_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_CTRL_FIFO_RESET register field. */
#define ALT_SDMMC_CTRL_FIFO_RESET_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_FIFO_RESET field value from a register. */
#define ALT_SDMMC_CTRL_FIFO_RESET_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_CTRL_FIFO_RESET register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_FIFO_RESET_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : DMA_RESET
 * 
 * 0-No change
 * 
 * 1-Reset internal DMA interface control logic
 * 
 * To reset DMA interface, firmware should set bit to 1. This bit is
 * 
 * auto-cleared after two AHB clocks.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                               
 * :----------------------------------------|:------|:-------------------------------------------
 *  ALT_SDMMC_CTRL_DMA_RESET_E_NO_CHANGE    | 0x0   | No change                                 
 *  ALT_SDMMC_CTRL_DMA_RESET_E_ASSERT_RESET | 0x1   | Reset internal DMA interface control logic
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_DMA_RESET
 * 
 * No change
 */
#define ALT_SDMMC_CTRL_DMA_RESET_E_NO_CHANGE    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_DMA_RESET
 * 
 * Reset internal DMA interface control logic
 */
#define ALT_SDMMC_CTRL_DMA_RESET_E_ASSERT_RESET 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_DMA_RESET register field. */
#define ALT_SDMMC_CTRL_DMA_RESET_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_DMA_RESET register field. */
#define ALT_SDMMC_CTRL_DMA_RESET_MSB        2
/* The width in bits of the ALT_SDMMC_CTRL_DMA_RESET register field. */
#define ALT_SDMMC_CTRL_DMA_RESET_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_DMA_RESET register field value. */
#define ALT_SDMMC_CTRL_DMA_RESET_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_CTRL_DMA_RESET register field value. */
#define ALT_SDMMC_CTRL_DMA_RESET_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_CTRL_DMA_RESET register field. */
#define ALT_SDMMC_CTRL_DMA_RESET_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_DMA_RESET field value from a register. */
#define ALT_SDMMC_CTRL_DMA_RESET_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_CTRL_DMA_RESET register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_DMA_RESET_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : INT_ENABLE
 * 
 * Global interrupt enable/disable bit:
 * 
 * 0-Disable interrupts
 * 
 * 1-Enable interrupts
 * 
 * The int port is 1 only when this bit is 1 and one or more unmasked
 * 
 * interrupts are set.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description       
 * :-------------------------------------|:------|:-------------------
 *  ALT_SDMMC_CTRL_INT_ENABLE_E_DISABLED | 0x0   | Disable interrupts
 *  ALT_SDMMC_CTRL_INT_ENABLE_E_ENABLED  | 0x1   | Enable interrupts 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_INT_ENABLE
 * 
 * Disable interrupts
 */
#define ALT_SDMMC_CTRL_INT_ENABLE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_INT_ENABLE
 * 
 * Enable interrupts
 */
#define ALT_SDMMC_CTRL_INT_ENABLE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_INT_ENABLE register field. */
#define ALT_SDMMC_CTRL_INT_ENABLE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_INT_ENABLE register field. */
#define ALT_SDMMC_CTRL_INT_ENABLE_MSB        4
/* The width in bits of the ALT_SDMMC_CTRL_INT_ENABLE register field. */
#define ALT_SDMMC_CTRL_INT_ENABLE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_INT_ENABLE register field value. */
#define ALT_SDMMC_CTRL_INT_ENABLE_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_CTRL_INT_ENABLE register field value. */
#define ALT_SDMMC_CTRL_INT_ENABLE_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_CTRL_INT_ENABLE register field. */
#define ALT_SDMMC_CTRL_INT_ENABLE_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_INT_ENABLE field value from a register. */
#define ALT_SDMMC_CTRL_INT_ENABLE_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_CTRL_INT_ENABLE register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_INT_ENABLE_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : DMA_ENABLE
 * 
 * 0-Disable DMA transfer mode
 * 
 * 1-Enable DMA transfer mode
 * 
 * Valid only if DWC_mobile_storage configured for External DMA interface.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description              
 * :-------------------------------------|:------|:--------------------------
 *  ALT_SDMMC_CTRL_DMA_ENABLE_E_DISABLED | 0x0   | Disable DMA transfer mode
 *  ALT_SDMMC_CTRL_DMA_ENABLE_E_ENABLED  | 0x1   | Enable DMA transfer mode 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_DMA_ENABLE
 * 
 * Disable DMA transfer mode
 */
#define ALT_SDMMC_CTRL_DMA_ENABLE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_DMA_ENABLE
 * 
 * Enable DMA transfer mode
 */
#define ALT_SDMMC_CTRL_DMA_ENABLE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_DMA_ENABLE register field. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_DMA_ENABLE register field. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_MSB        5
/* The width in bits of the ALT_SDMMC_CTRL_DMA_ENABLE register field. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_DMA_ENABLE register field value. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_CTRL_DMA_ENABLE register field value. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_CTRL_DMA_ENABLE register field. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_DMA_ENABLE field value from a register. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_CTRL_DMA_ENABLE register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_DMA_ENABLE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : READ_WAIT
 * 
 * 0-Clear read wait
 * 
 * 1-Assert read wait
 * 
 * For sending read-wait to SDIO cards.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description     
 * :----------------------------------|:------|:-----------------
 *  ALT_SDMMC_CTRL_READ_WAIT_E_CLEAR  | 0x0   | Clear read wait 
 *  ALT_SDMMC_CTRL_READ_WAIT_E_ASSERT | 0x1   | Assert read wait
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_READ_WAIT
 * 
 * Clear read wait
 */
#define ALT_SDMMC_CTRL_READ_WAIT_E_CLEAR    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_READ_WAIT
 * 
 * Assert read wait
 */
#define ALT_SDMMC_CTRL_READ_WAIT_E_ASSERT   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_READ_WAIT register field. */
#define ALT_SDMMC_CTRL_READ_WAIT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_READ_WAIT register field. */
#define ALT_SDMMC_CTRL_READ_WAIT_MSB        6
/* The width in bits of the ALT_SDMMC_CTRL_READ_WAIT register field. */
#define ALT_SDMMC_CTRL_READ_WAIT_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_READ_WAIT register field value. */
#define ALT_SDMMC_CTRL_READ_WAIT_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_CTRL_READ_WAIT register field value. */
#define ALT_SDMMC_CTRL_READ_WAIT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_CTRL_READ_WAIT register field. */
#define ALT_SDMMC_CTRL_READ_WAIT_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_READ_WAIT field value from a register. */
#define ALT_SDMMC_CTRL_READ_WAIT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_CTRL_READ_WAIT register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_READ_WAIT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : SEND_IRQ_RESPONSE
 * 
 * 0-No Change in this
 * 
 * 1-Send auto IRQ response
 * 
 * Bit automatically clears once response is sent.
 * 
 * To wait for MMC card interrupts, host issues CMD40, and DWC_mobile_storage waits
 * for interrupt response from MMC card(s). In meantime, if host wants
 * DWC_mobile_storage to exit waiting for interrupt state, it can set this bit, at
 * which time DWC_mobile_storage command state-machine sends CMD40 response on bus
 * and returns to idle state.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description           
 * :-----------------------------------------|:------|:-----------------------
 *  ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_E_FALSE | 0x0   | No change             
 *  ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_E_TRUE  | 0x1   | Send auto IRQ response
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE
 * 
 * No change
 */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_E_FALSE    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE
 * 
 * Send auto IRQ response
 */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_E_TRUE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE register field. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE register field. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_MSB        7
/* The width in bits of the ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE register field. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE register field value. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE register field value. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE register field. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE field value from a register. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : ABORT_READ_DATA
 * 
 * 0-No change
 * 
 * 1-After suspend command is issued during read-transfer, software
 * 
 * polls card to find when suspend happened. Once suspend occurs,software sets bit
 * to reset data state-machine, which is waiting for next block of data. Bit
 * automatically clears once data statemachine resets to idle.
 * 
 * Used in SDIO card suspend sequence.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description             
 * :---------------------------------------|:------|:-------------------------
 *  ALT_SDMMC_CTRL_ABORT_READ_DATA_E_FALSE | 0x0   | No change               
 *  ALT_SDMMC_CTRL_ABORT_READ_DATA_E_TRUE  | 0x1   | Reset data state-machine
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_ABORT_READ_DATA
 * 
 * No change
 */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_E_FALSE  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_ABORT_READ_DATA
 * 
 * Reset data state-machine
 */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_E_TRUE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_ABORT_READ_DATA register field. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_ABORT_READ_DATA register field. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_MSB        8
/* The width in bits of the ALT_SDMMC_CTRL_ABORT_READ_DATA register field. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_ABORT_READ_DATA register field value. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_CTRL_ABORT_READ_DATA register field value. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_CTRL_ABORT_READ_DATA register field. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_ABORT_READ_DATA field value from a register. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_CTRL_ABORT_READ_DATA register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_ABORT_READ_DATA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SEND_CCSD
 * 
 * 0-Clear this bit if DWC_mobile_storage does not reset the bit
 * 
 * 1-Send Command Completion Signal Disable (CCSD) to CE-ATA
 * 
 * device
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                                     
 * :-----------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_CTRL_SEND_CCSD_E_CLEAR   | 0x0   | Clear bit if DWC_mobile_storage does not reset  
 * :                                   |       | the bit                                         
 *  ALT_SDMMC_CTRL_SEND_CCSD_E_ENABLED | 0x1   | Send Command Completion Signal Disable (CCSD) to
 * :                                   |       | CE-ATA device                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_SEND_CCSD
 * 
 * Clear bit if DWC_mobile_storage does not reset the bit
 */
#define ALT_SDMMC_CTRL_SEND_CCSD_E_CLEAR    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_SEND_CCSD
 * 
 * Send Command Completion Signal Disable (CCSD) to CE-ATA
 * 
 * device
 */
#define ALT_SDMMC_CTRL_SEND_CCSD_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_SEND_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_CCSD_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_SEND_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_CCSD_MSB        9
/* The width in bits of the ALT_SDMMC_CTRL_SEND_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_CCSD_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_SEND_CCSD register field value. */
#define ALT_SDMMC_CTRL_SEND_CCSD_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_CTRL_SEND_CCSD register field value. */
#define ALT_SDMMC_CTRL_SEND_CCSD_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_CTRL_SEND_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_CCSD_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_SEND_CCSD field value from a register. */
#define ALT_SDMMC_CTRL_SEND_CCSD_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_CTRL_SEND_CCSD register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_SEND_CCSD_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : SEND_AUTO_STOP_CCSD
 * 
 * 0-Clear bit if DWC_mobile_storage does not reset the bit
 * 
 * 1-Send internally generated STOP after sending CCSD to
 * 
 * CE-ATA device
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description                                   
 * :---------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_E_CLEAR   | 0x0   | Clear bit if DWC_mobile_storage does not reset
 * :                                             |       | the bit                                       
 *  ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_E_ENABLED | 0x1   | Send internally generated STOP after sending  
 * :                                             |       | CCSD to  CE-ATA device                        
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD
 * 
 * Clear bit if DWC_mobile_storage does not reset the bit
 */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_E_CLEAR      0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD
 * 
 * Send internally generated STOP after sending CCSD to
 * 
 * CE-ATA device
 */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_MSB        10
/* The width in bits of the ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD register field value. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD register field value. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD register field. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD field value from a register. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : CEATA_DEVICE_INTERRUPT_STATUS
 * 
 * 0-Interrupts not enabled in CE-ATA device
 * 
 * 1-Interrupts are enabled in CE-ATA device
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description                            
 * :--------------------------------------------------------|:------|:----------------------------------------
 *  ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_E_DISABLED | 0x0   | Interrupts not enabled in CE-ATA device
 *  ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_E_ENABLED  | 0x1   | Interrupts are enabled in CE-ATA device
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS
 * 
 * Interrupts not enabled in CE-ATA device
 */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS
 * 
 * Interrupts are enabled in CE-ATA device
 */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS register field. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS register field. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_MSB        11
/* The width in bits of the ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS register field. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS register field value. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS register field value. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS register field. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS field value from a register. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : CARD_VOLTAGE_A
 * 
 * Card regulator-A voltage setting; output to card_volt_a port.
 * 
 * Optional feature; ports can be used as general-purpose outputs
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_CARD_VOLTAGE_A register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_CARD_VOLTAGE_A register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_MSB        19
/* The width in bits of the ALT_SDMMC_CTRL_CARD_VOLTAGE_A register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_WIDTH      4
/* The mask used to set the ALT_SDMMC_CTRL_CARD_VOLTAGE_A register field value. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SDMMC_CTRL_CARD_VOLTAGE_A register field value. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SDMMC_CTRL_CARD_VOLTAGE_A register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_CARD_VOLTAGE_A field value from a register. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SDMMC_CTRL_CARD_VOLTAGE_A register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_A_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : CARD_VOLTAGE_B
 * 
 * Card regulator-B voltage setting; output to card_volt_b port.
 * 
 * Optional feature; ports can be used as general-purpose outputs
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_CARD_VOLTAGE_B register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_CARD_VOLTAGE_B register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_MSB        23
/* The width in bits of the ALT_SDMMC_CTRL_CARD_VOLTAGE_B register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_WIDTH      4
/* The mask used to set the ALT_SDMMC_CTRL_CARD_VOLTAGE_B register field value. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_SET_MSK    0x00f00000
/* The mask used to clear the ALT_SDMMC_CTRL_CARD_VOLTAGE_B register field value. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_CLR_MSK    0xff0fffff
/* The reset value of the ALT_SDMMC_CTRL_CARD_VOLTAGE_B register field. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_CARD_VOLTAGE_B field value from a register. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_SDMMC_CTRL_CARD_VOLTAGE_B register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_CARD_VOLTAGE_B_SET(value) (((value) << 20) & 0x00f00000)

/*
 * Field : ENABLE_OD_PULLUP
 * 
 * External open-drain pullup
 * 
 * 0-Disable
 * 
 * 1-Enable
 * 
 * Inverted value of this bit is output to ccmd_od_pullup_en_n port.
 * 
 * When bit is set, command output always driven in open-drive mode; that is,
 * DWC_mobile_storage drives either 0 or high impedance, and does not drive hard 1.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_E_DISABLED | 0x0   | Disable    
 *  ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_E_ENABLED  | 0x1   | Enable     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_ENABLE_OD_PULLUP
 * 
 * Disable
 */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_ENABLE_OD_PULLUP
 * 
 * Enable
 */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_ENABLE_OD_PULLUP register field. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_ENABLE_OD_PULLUP register field. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_MSB        24
/* The width in bits of the ALT_SDMMC_CTRL_ENABLE_OD_PULLUP register field. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_ENABLE_OD_PULLUP register field value. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_SET_MSK    0x01000000
/* The mask used to clear the ALT_SDMMC_CTRL_ENABLE_OD_PULLUP register field value. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SDMMC_CTRL_ENABLE_OD_PULLUP register field. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_ENABLE_OD_PULLUP field value from a register. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SDMMC_CTRL_ENABLE_OD_PULLUP register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_ENABLE_OD_PULLUP_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : USE_INTERNAL_DMAC
 * 
 * Present only for the Internal DMAC configuration; else, it is reserved.
 * 
 * 0-The host performs data transfers through the slave interface
 * 
 * 1-Internal DMAC used for data transfer
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                                 
 * :--------------------------------------------|:------|:---------------------------------------------
 *  ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_E_DISABLED | 0x0   | The host performs data transfers through the
 * :                                            |       | slave interface                             
 *  ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_E_ENABLED  | 0x1   | Internal DMAC used for data transfer        
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_USE_INTERNAL_DMAC
 * 
 * The host performs data transfers through the slave interface
 */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTRL_USE_INTERNAL_DMAC
 * 
 * Internal DMAC used for data transfer
 */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTRL_USE_INTERNAL_DMAC register field. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTRL_USE_INTERNAL_DMAC register field. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_MSB        25
/* The width in bits of the ALT_SDMMC_CTRL_USE_INTERNAL_DMAC register field. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTRL_USE_INTERNAL_DMAC register field value. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_SET_MSK    0x02000000
/* The mask used to clear the ALT_SDMMC_CTRL_USE_INTERNAL_DMAC register field value. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_CLR_MSK    0xfdffffff
/* The reset value of the ALT_SDMMC_CTRL_USE_INTERNAL_DMAC register field. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_RESET      0x0
/* Extracts the ALT_SDMMC_CTRL_USE_INTERNAL_DMAC field value from a register. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_SDMMC_CTRL_USE_INTERNAL_DMAC register field value suitable for setting the register. */
#define ALT_SDMMC_CTRL_USE_INTERNAL_DMAC_SET(value) (((value) << 25) & 0x02000000)

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
 * The struct declaration for register ALT_SDMMC_CTRL.
 */
struct ALT_SDMMC_CTRL_s
{
    volatile uint32_t  CONTROLLER_RESET              :  1;  /* ALT_SDMMC_CTRL_CONTROLLER_RESET */
    volatile uint32_t  FIFO_RESET                    :  1;  /* ALT_SDMMC_CTRL_FIFO_RESET */
    volatile uint32_t  DMA_RESET                     :  1;  /* ALT_SDMMC_CTRL_DMA_RESET */
    uint32_t                                         :  1;  /* *UNDEFINED* */
    volatile uint32_t  INT_ENABLE                    :  1;  /* ALT_SDMMC_CTRL_INT_ENABLE */
    volatile uint32_t  DMA_ENABLE                    :  1;  /* ALT_SDMMC_CTRL_DMA_ENABLE */
    volatile uint32_t  READ_WAIT                     :  1;  /* ALT_SDMMC_CTRL_READ_WAIT */
    volatile uint32_t  SEND_IRQ_RESPONSE             :  1;  /* ALT_SDMMC_CTRL_SEND_IRQ_RESPONSE */
    volatile uint32_t  ABORT_READ_DATA               :  1;  /* ALT_SDMMC_CTRL_ABORT_READ_DATA */
    volatile uint32_t  SEND_CCSD                     :  1;  /* ALT_SDMMC_CTRL_SEND_CCSD */
    volatile uint32_t  SEND_AUTO_STOP_CCSD           :  1;  /* ALT_SDMMC_CTRL_SEND_AUTO_STOP_CCSD */
    volatile uint32_t  CEATA_DEVICE_INTERRUPT_STATUS :  1;  /* ALT_SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS */
    uint32_t                                         :  4;  /* *UNDEFINED* */
    volatile uint32_t  CARD_VOLTAGE_A                :  4;  /* ALT_SDMMC_CTRL_CARD_VOLTAGE_A */
    volatile uint32_t  CARD_VOLTAGE_B                :  4;  /* ALT_SDMMC_CTRL_CARD_VOLTAGE_B */
    volatile uint32_t  ENABLE_OD_PULLUP              :  1;  /* ALT_SDMMC_CTRL_ENABLE_OD_PULLUP */
    volatile uint32_t  USE_INTERNAL_DMAC             :  1;  /* ALT_SDMMC_CTRL_USE_INTERNAL_DMAC */
    uint32_t                                         :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_CTRL. */
typedef struct ALT_SDMMC_CTRL_s  ALT_SDMMC_CTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CTRL register. */
#define ALT_SDMMC_CTRL_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_CTRL register from the beginning of the component. */
#define ALT_SDMMC_CTRL_OFST        0x0
/* The address of the ALT_SDMMC_CTRL register. */
#define ALT_SDMMC_CTRL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CTRL_OFST))

/*
 * Register : Power Enable Register - PWREN
 * 
 * Power Enable Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | RW     | 0x0   | ALT_SDMMC_PWREN_POWER_ENABLE_0
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : POWER_ENABLE_0
 * 
 * Power on/off switch for up to 16 cards; for example, bit[0] controls card 0.Once
 * power is turned on, firmware should wait for regulator/switch ramp-up time
 * before trying to initialize card.
 * 
 * 0-power off
 * 
 * 1-power on
 * 
 * Only NUM_CARDS number of bits are implemented.Bit values output to card_power_en
 * port. Optional feature; ports can be used as general-purpose outputs.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_SDMMC_PWREN_POWER_ENABLE_0_E_POWER_OFF | 0x0   | Power off  
 *  ALT_SDMMC_PWREN_POWER_ENABLE_0_E_POWER_ON  | 0x1   | Power on   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_PWREN_POWER_ENABLE_0
 * 
 * Power off
 */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_E_POWER_OFF  0x0
/*
 * Enumerated value for register field ALT_SDMMC_PWREN_POWER_ENABLE_0
 * 
 * Power on
 */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_E_POWER_ON   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_PWREN_POWER_ENABLE_0 register field. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_PWREN_POWER_ENABLE_0 register field. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_MSB        0
/* The width in bits of the ALT_SDMMC_PWREN_POWER_ENABLE_0 register field. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_PWREN_POWER_ENABLE_0 register field value. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_PWREN_POWER_ENABLE_0 register field value. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_PWREN_POWER_ENABLE_0 register field. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_RESET      0x0
/* Extracts the ALT_SDMMC_PWREN_POWER_ENABLE_0 field value from a register. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_PWREN_POWER_ENABLE_0 register field value suitable for setting the register. */
#define ALT_SDMMC_PWREN_POWER_ENABLE_0_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SDMMC_PWREN.
 */
struct ALT_SDMMC_PWREN_s
{
    volatile uint32_t  POWER_ENABLE_0 :  1;  /* ALT_SDMMC_PWREN_POWER_ENABLE_0 */
    uint32_t                          : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_PWREN. */
typedef struct ALT_SDMMC_PWREN_s  ALT_SDMMC_PWREN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_PWREN register. */
#define ALT_SDMMC_PWREN_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_PWREN register from the beginning of the component. */
#define ALT_SDMMC_PWREN_OFST        0x4
/* The address of the ALT_SDMMC_PWREN register. */
#define ALT_SDMMC_PWREN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_PWREN_OFST))

/*
 * Register : Clock Divider Register - CLKDIV
 * 
 * Clock Divider Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_SDMMC_CLKDIV_CLK_DIVIDER0
 *  [15:8]  | R      | 0x0   | ALT_SDMMC_CLKDIV_CLK_DIVIDER1
 *  [23:16] | R      | 0x0   | ALT_SDMMC_CLKDIV_CLK_DIVIDER2
 *  [31:24] | R      | 0x0   | ALT_SDMMC_CLKDIV_CLK_DIVIDER3
 * 
 */
/*
 * Field : CLK_DIVIDER0
 * 
 * Clock divider-0 value. Clock division is 2*n. For example, value of 0 means
 * divide by 2*0 = 0 (no division, bypass), value of 1 means divide by 2*1 = 2,
 * value of "ff" means divide by 2*255 = 510, and so on.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER0 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER0 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_MSB        7
/* The width in bits of the ALT_SDMMC_CLKDIV_CLK_DIVIDER0 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_WIDTH      8
/* The mask used to set the ALT_SDMMC_CLKDIV_CLK_DIVIDER0 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SDMMC_CLKDIV_CLK_DIVIDER0 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_CLR_MSK    0xffffff00
/* The reset value of the ALT_SDMMC_CLKDIV_CLK_DIVIDER0 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_RESET      0x0
/* Extracts the ALT_SDMMC_CLKDIV_CLK_DIVIDER0 field value from a register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SDMMC_CLKDIV_CLK_DIVIDER0 register field value suitable for setting the register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER0_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CLK_DIVIDER1
 * 
 * Clock divider-1 value. Clock division is 2*n. For example, value of 0 means
 * divide by 2*0 = 0 (no division, bypass), value of 1 means divide by 2*1 = 2,
 * value of "ff" means divide by 2*255 = 510, and so on. In MMC-Ver3.3-only
 * mode, bits not implemented because only one clock divider is supported
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER1 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER1 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_MSB        15
/* The width in bits of the ALT_SDMMC_CLKDIV_CLK_DIVIDER1 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_WIDTH      8
/* The mask used to set the ALT_SDMMC_CLKDIV_CLK_DIVIDER1 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_SDMMC_CLKDIV_CLK_DIVIDER1 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_CLR_MSK    0xffff00ff
/* The reset value of the ALT_SDMMC_CLKDIV_CLK_DIVIDER1 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_RESET      0x0
/* Extracts the ALT_SDMMC_CLKDIV_CLK_DIVIDER1 field value from a register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_SDMMC_CLKDIV_CLK_DIVIDER1 register field value suitable for setting the register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER1_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : CLK_DIVIDER2
 * 
 * Clock divider-2 value. Clock division is 2*n. For example, value of 0 means
 * divide by 2*0 = 0 (no division, bypass), value of 1 means divide by 2*1 = 2,
 * value of "ff" means divide by 2*255 = 510, and so on. In MMC-Ver3.3-only
 * mode, bits not implemented because only one clock divider is supported.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER2 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER2 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_MSB        23
/* The width in bits of the ALT_SDMMC_CLKDIV_CLK_DIVIDER2 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_WIDTH      8
/* The mask used to set the ALT_SDMMC_CLKDIV_CLK_DIVIDER2 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_SDMMC_CLKDIV_CLK_DIVIDER2 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_CLR_MSK    0xff00ffff
/* The reset value of the ALT_SDMMC_CLKDIV_CLK_DIVIDER2 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_RESET      0x0
/* Extracts the ALT_SDMMC_CLKDIV_CLK_DIVIDER2 field value from a register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_SDMMC_CLKDIV_CLK_DIVIDER2 register field value suitable for setting the register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER2_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : CLK_DIVIDER3
 * 
 * Clock divider-3 value. Clock division is 2*n. For example, value of 0 means
 * divide by 2*0 = 0 (no division, bypass), a value of 1 means divide by 2*1 = 2, a
 * value of "ff" means divide by 2*255 = 510, and so on. In MMC-Ver3.3-only
 * mode, bits not implemented because only one clock divider is supported.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER3 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKDIV_CLK_DIVIDER3 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_MSB        31
/* The width in bits of the ALT_SDMMC_CLKDIV_CLK_DIVIDER3 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_WIDTH      8
/* The mask used to set the ALT_SDMMC_CLKDIV_CLK_DIVIDER3 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_SET_MSK    0xff000000
/* The mask used to clear the ALT_SDMMC_CLKDIV_CLK_DIVIDER3 register field value. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_CLR_MSK    0x00ffffff
/* The reset value of the ALT_SDMMC_CLKDIV_CLK_DIVIDER3 register field. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_RESET      0x0
/* Extracts the ALT_SDMMC_CLKDIV_CLK_DIVIDER3 field value from a register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_SDMMC_CLKDIV_CLK_DIVIDER3 register field value suitable for setting the register. */
#define ALT_SDMMC_CLKDIV_CLK_DIVIDER3_SET(value) (((value) << 24) & 0xff000000)

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
 * The struct declaration for register ALT_SDMMC_CLKDIV.
 */
struct ALT_SDMMC_CLKDIV_s
{
    volatile uint32_t        CLK_DIVIDER0 :  8;  /* ALT_SDMMC_CLKDIV_CLK_DIVIDER0 */
    const volatile uint32_t  CLK_DIVIDER1 :  8;  /* ALT_SDMMC_CLKDIV_CLK_DIVIDER1 */
    const volatile uint32_t  CLK_DIVIDER2 :  8;  /* ALT_SDMMC_CLKDIV_CLK_DIVIDER2 */
    const volatile uint32_t  CLK_DIVIDER3 :  8;  /* ALT_SDMMC_CLKDIV_CLK_DIVIDER3 */
};

/* The typedef declaration for register ALT_SDMMC_CLKDIV. */
typedef struct ALT_SDMMC_CLKDIV_s  ALT_SDMMC_CLKDIV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CLKDIV register. */
#define ALT_SDMMC_CLKDIV_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_CLKDIV register from the beginning of the component. */
#define ALT_SDMMC_CLKDIV_OFST        0x8
/* The address of the ALT_SDMMC_CLKDIV register. */
#define ALT_SDMMC_CLKDIV_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CLKDIV_OFST))

/*
 * Register : Clock Source Register - CLKSRC
 * 
 * Clock Source Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [1:0]   | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE 
 *  [3:2]   | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE 
 *  [5:4]   | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE 
 *  [7:6]   | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE 
 *  [9:8]   | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE 
 *  [11:10] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE 
 *  [13:12] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE 
 *  [15:14] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE 
 *  [17:16] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE 
 *  [19:18] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE 
 *  [21:20] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE
 *  [23:22] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE
 *  [25:24] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE
 *  [27:26] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE
 *  [29:28] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE
 *  [31:30] | R      | 0x0   | ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE
 * 
 */
/*
 * Field : CARD0_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_MSB        1
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_SET_MSK    0x00000003
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : CARD1_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_MSB        3
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_SET_MSK    0x0000000c
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_CLR_MSK    0xfffffff3
/* The reset value of the ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : CARD2_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_MSB        5
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_SET_MSK    0x00000030
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : CARD3_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_MSB        7
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_SET_MSK    0x000000c0
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_CLR_MSK    0xffffff3f
/* The reset value of the ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_GET(value) (((value) & 0x000000c0) >> 6)
/* Produces a ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE_SET(value) (((value) << 6) & 0x000000c0)

/*
 * Field : CARD4_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_MSB        9
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_SET_MSK    0x00000300
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_CLR_MSK    0xfffffcff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : CARD5_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_MSB        11
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_SET_MSK    0x00000c00
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_CLR_MSK    0xfffff3ff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_GET(value) (((value) & 0x00000c00) >> 10)
/* Produces a ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE_SET(value) (((value) << 10) & 0x00000c00)

/*
 * Field : CARD6_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_MSB        13
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_SET_MSK    0x00003000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_CLR_MSK    0xffffcfff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_GET(value) (((value) & 0x00003000) >> 12)
/* Produces a ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE_SET(value) (((value) << 12) & 0x00003000)

/*
 * Field : CARD7_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_MSB        15
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_SET_MSK    0x0000c000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_CLR_MSK    0xffff3fff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : CARD8_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_MSB        17
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_SET_MSK    0x00030000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : CARD9_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description    
 * :-----------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV0    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV1    0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV2    0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_E_DIV3    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_MSB        19
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_SET_MSK    0x000c0000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_CLR_MSK    0xfff3ffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_GET(value) (((value) & 0x000c0000) >> 18)
/* Produces a ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE_SET(value) (((value) << 18) & 0x000c0000)

/*
 * Field : CARD10_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description    
 * :------------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV0   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV1   0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV2   0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_E_DIV3   0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_MSB        21
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_SET_MSK    0x00300000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_CLR_MSK    0xffcfffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_GET(value) (((value) & 0x00300000) >> 20)
/* Produces a ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE_SET(value) (((value) << 20) & 0x00300000)

/*
 * Field : CARD11_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description    
 * :------------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV0   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV1   0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV2   0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_E_DIV3   0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_MSB        23
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_SET_MSK    0x00c00000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_CLR_MSK    0xff3fffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_GET(value) (((value) & 0x00c00000) >> 22)
/* Produces a ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE_SET(value) (((value) << 22) & 0x00c00000)

/*
 * Field : CARD12_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description    
 * :------------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV0   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV1   0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV2   0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_E_DIV3   0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_MSB        25
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_SET_MSK    0x03000000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_CLR_MSK    0xfcffffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : CARD13_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description    
 * :------------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV0   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV1   0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV2   0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_E_DIV3   0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_MSB        27
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_SET_MSK    0x0c000000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_CLR_MSK    0xf3ffffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_GET(value) (((value) & 0x0c000000) >> 26)
/* Produces a ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE_SET(value) (((value) << 26) & 0x0c000000)

/*
 * Field : CARD14_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description    
 * :------------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV0   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV1   0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV2   0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_E_DIV3   0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_MSB        29
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_SET_MSK    0x30000000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_CLR_MSK    0xcfffffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_GET(value) (((value) & 0x30000000) >> 28)
/* Produces a ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE_SET(value) (((value) << 28) & 0x30000000)

/*
 * Field : CARD15_CLK_SOURCE
 * 
 * Clock divider source for up to 16 SD cards supported. Each card has two bits
 * assigned to it. For example, bits[1:0] assigned for card-0, which maps and
 * internally routes clock divider[3:0] outputs to cclk_out[15:0] pins, depending
 * on bit value.
 * 
 * 00  Clock divider 0
 * 
 * 01  Clock divider 1
 * 
 * 10  Clock divider 2
 * 
 * 11  Clock divider 3
 * 
 * In MMC-Ver3.3-only controller, only one clock divider supported. The cclk_out is
 * always from clock divider 0, and this register is not implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description    
 * :------------------------------------------|:------|:----------------
 *  ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV0 | 0x0   | Clock divider 0
 *  ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV1 | 0x1   | Clock divider 1
 *  ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV2 | 0x2   | Clock divider 2
 *  ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV3 | 0x3   | Clock divider 3
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE
 * 
 * Clock divider 0
 */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV0   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE
 * 
 * Clock divider 1
 */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV1   0x1
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE
 * 
 * Clock divider 2
 */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV2   0x2
/*
 * Enumerated value for register field ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE
 * 
 * Clock divider 3
 */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_E_DIV3   0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_MSB        31
/* The width in bits of the ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_WIDTH      2
/* The mask used to set the ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_SET_MSK    0xc0000000
/* The mask used to clear the ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE register field value. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_CLR_MSK    0x3fffffff
/* The reset value of the ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE register field. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_RESET      0x0
/* Extracts the ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE field value from a register. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_GET(value) (((value) & 0xc0000000) >> 30)
/* Produces a ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE register field value suitable for setting the register. */
#define ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE_SET(value) (((value) << 30) & 0xc0000000)

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
 * The struct declaration for register ALT_SDMMC_CLKSRC.
 */
struct ALT_SDMMC_CLKSRC_s
{
    const volatile uint32_t  CARD0_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD0_CLK_SOURCE */
    const volatile uint32_t  CARD1_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD1_CLK_SOURCE */
    const volatile uint32_t  CARD2_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD2_CLK_SOURCE */
    const volatile uint32_t  CARD3_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD3_CLK_SOURCE */
    const volatile uint32_t  CARD4_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD4_CLK_SOURCE */
    const volatile uint32_t  CARD5_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD5_CLK_SOURCE */
    const volatile uint32_t  CARD6_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD6_CLK_SOURCE */
    const volatile uint32_t  CARD7_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD7_CLK_SOURCE */
    const volatile uint32_t  CARD8_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD8_CLK_SOURCE */
    const volatile uint32_t  CARD9_CLK_SOURCE  :  2;  /* ALT_SDMMC_CLKSRC_CARD9_CLK_SOURCE */
    const volatile uint32_t  CARD10_CLK_SOURCE :  2;  /* ALT_SDMMC_CLKSRC_CARD10_CLK_SOURCE */
    const volatile uint32_t  CARD11_CLK_SOURCE :  2;  /* ALT_SDMMC_CLKSRC_CARD11_CLK_SOURCE */
    const volatile uint32_t  CARD12_CLK_SOURCE :  2;  /* ALT_SDMMC_CLKSRC_CARD12_CLK_SOURCE */
    const volatile uint32_t  CARD13_CLK_SOURCE :  2;  /* ALT_SDMMC_CLKSRC_CARD13_CLK_SOURCE */
    const volatile uint32_t  CARD14_CLK_SOURCE :  2;  /* ALT_SDMMC_CLKSRC_CARD14_CLK_SOURCE */
    const volatile uint32_t  CARD15_CLK_SOURCE :  2;  /* ALT_SDMMC_CLKSRC_CARD15_CLK_SOURCE */
};

/* The typedef declaration for register ALT_SDMMC_CLKSRC. */
typedef struct ALT_SDMMC_CLKSRC_s  ALT_SDMMC_CLKSRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CLKSRC register. */
#define ALT_SDMMC_CLKSRC_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_CLKSRC register from the beginning of the component. */
#define ALT_SDMMC_CLKSRC_OFST        0xc
/* The address of the ALT_SDMMC_CLKSRC register. */
#define ALT_SDMMC_CLKSRC_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CLKSRC_OFST))

/*
 * Register : Clock Enable Register - CLKENA
 * 
 * Clock Enable Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_CLKENA_CCLK_ENABLE_0   
 *  [15:1]  | ???    | 0x0   | *UNDEFINED*                      
 *  [16]    | RW     | 0x0   | ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : CCLK_ENABLE_0
 * 
 * Clock-enable control for up to 16 SD card clocks and one MMC card clock
 * supported.
 * 
 * 0-Clock disabled
 * 
 * 1-Clock enabled
 * 
 * In MMC-Ver3.3-only mode, since there is only one cclk_out, only cclk_enable[0]
 * is used.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description   
 * :------------------------------------------|:------|:---------------
 *  ALT_SDMMC_CLKENA_CCLK_ENABLE_0_E_DISABLED | 0x0   | Clock disabled
 *  ALT_SDMMC_CLKENA_CCLK_ENABLE_0_E_ENABLED  | 0x1   | Clock enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKENA_CCLK_ENABLE_0
 * 
 * Clock disabled
 */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKENA_CCLK_ENABLE_0
 * 
 * Clock enabled
 */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKENA_CCLK_ENABLE_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKENA_CCLK_ENABLE_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_MSB        0
/* The width in bits of the ALT_SDMMC_CLKENA_CCLK_ENABLE_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_CLKENA_CCLK_ENABLE_0 register field value. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_CLKENA_CCLK_ENABLE_0 register field value. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_CLKENA_CCLK_ENABLE_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_RESET      0x0
/* Extracts the ALT_SDMMC_CLKENA_CCLK_ENABLE_0 field value from a register. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_CLKENA_CCLK_ENABLE_0 register field value suitable for setting the register. */
#define ALT_SDMMC_CLKENA_CCLK_ENABLE_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CCLK_LOW_POWER_0
 * 
 * Low-power control for up to 16 SD card clocks and one MMC card clock supported.
 * 
 * 0-Non-low-power mode
 * 
 * 1-Low-power mode; stop clock when card in IDLE (should be normally set to only
 * MMC and SD memory cards; for SDIO cards, if interrupts must be detected, clock
 * should not be stopped).
 * 
 * In MMC-Ver3.3-only mode, since there is only one cclk_out, only
 * cclk_low_power[0] is used.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description       
 * :--------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_E_NON_LOW_POWER | 0x0   | Non Low Power mode
 *  ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_E_LOW_POWER     | 0x1   | Low Power mode    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0
 * 
 * Non Low Power mode
 */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_E_NON_LOW_POWER   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0
 * 
 * Low Power mode
 */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_E_LOW_POWER       0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_MSB        16
/* The width in bits of the ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 register field value. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 register field value. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 register field. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_RESET      0x0
/* Extracts the ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 field value from a register. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 register field value suitable for setting the register. */
#define ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SDMMC_CLKENA.
 */
struct ALT_SDMMC_CLKENA_s
{
    volatile uint32_t  CCLK_ENABLE_0    :  1;  /* ALT_SDMMC_CLKENA_CCLK_ENABLE_0 */
    uint32_t                            : 15;  /* *UNDEFINED* */
    volatile uint32_t  CCLK_LOW_POWER_0 :  1;  /* ALT_SDMMC_CLKENA_CCLK_LOW_POWER_0 */
    uint32_t                            : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_CLKENA. */
typedef struct ALT_SDMMC_CLKENA_s  ALT_SDMMC_CLKENA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CLKENA register. */
#define ALT_SDMMC_CLKENA_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_CLKENA register from the beginning of the component. */
#define ALT_SDMMC_CLKENA_OFST        0x10
/* The address of the ALT_SDMMC_CLKENA register. */
#define ALT_SDMMC_CLKENA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CLKENA_OFST))

/*
 * Register : Timeout Register - TMOUT
 * 
 * Timeout Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                     
 * :-------|:-------|:---------|:---------------------------------
 *  [7:0]  | RW     | 0x40     | ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT
 *  [31:8] | RW     | 0xffffff | ALT_SDMMC_TMOUT_DATA_TIMEOUT    
 * 
 */
/*
 * Field : RESPONSE_TIMEOUT
 * 
 * Response timeout value.
 * 
 * Value is in number of card output clocks cclk_out.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_MSB        7
/* The width in bits of the ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_WIDTH      8
/* The mask used to set the ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT register field value. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT register field value. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_CLR_MSK    0xffffff00
/* The reset value of the ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_RESET      0x40
/* Extracts the ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT field value from a register. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT register field value suitable for setting the register. */
#define ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : DATA_TIMEOUT
 * 
 * Value for card Data Read Timeout; same value also used for Data
 * 
 * Starvation by Host timeout. The timeout counter is started only after the card
 * clock is stopped.Value is in number of card output clocks  cclk_out of selected
 * card.
 * 
 * Note: The software timer should be used if the timeout value is in the order
 * 
 * of 100 ms. In this case, read data timeout interrupt needs to be disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_TMOUT_DATA_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_TMOUT_DATA_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_MSB        31
/* The width in bits of the ALT_SDMMC_TMOUT_DATA_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_WIDTH      24
/* The mask used to set the ALT_SDMMC_TMOUT_DATA_TIMEOUT register field value. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_SET_MSK    0xffffff00
/* The mask used to clear the ALT_SDMMC_TMOUT_DATA_TIMEOUT register field value. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_CLR_MSK    0x000000ff
/* The reset value of the ALT_SDMMC_TMOUT_DATA_TIMEOUT register field. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_RESET      0xffffff
/* Extracts the ALT_SDMMC_TMOUT_DATA_TIMEOUT field value from a register. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_SDMMC_TMOUT_DATA_TIMEOUT register field value suitable for setting the register. */
#define ALT_SDMMC_TMOUT_DATA_TIMEOUT_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_SDMMC_TMOUT.
 */
struct ALT_SDMMC_TMOUT_s
{
    volatile uint32_t  RESPONSE_TIMEOUT :  8;  /* ALT_SDMMC_TMOUT_RESPONSE_TIMEOUT */
    volatile uint32_t  DATA_TIMEOUT     : 24;  /* ALT_SDMMC_TMOUT_DATA_TIMEOUT */
};

/* The typedef declaration for register ALT_SDMMC_TMOUT. */
typedef struct ALT_SDMMC_TMOUT_s  ALT_SDMMC_TMOUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_TMOUT register. */
#define ALT_SDMMC_TMOUT_RESET       0xffffff40
/* The byte offset of the ALT_SDMMC_TMOUT register from the beginning of the component. */
#define ALT_SDMMC_TMOUT_OFST        0x14
/* The address of the ALT_SDMMC_TMOUT register. */
#define ALT_SDMMC_TMOUT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_TMOUT_OFST))

/*
 * Register : Card Type Register - CTYPE
 * 
 * Card Type Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_CTYPE_CARD0_WIDTH2
 *  [15:1]  | ???    | 0x0   | *UNDEFINED*                 
 *  [16]    | RW     | 0x0   | ALT_SDMMC_CTYPE_CARD0_WIDTH1
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : CARD0_WIDTH2
 * 
 * One bit per card indicates if card is 1-bit or 4-bit:
 * 
 * 0-1-bit mode
 * 
 * 1-4-bit mode
 * 
 * Bit[15] corresponds to card[15], bit[0] corresponds to card[0].
 * 
 * Only NUM_CARDS*2 number of bits are implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_SDMMC_CTYPE_CARD0_WIDTH2_E_ONE_BIT  | 0x0   | 1-bit mode 
 *  ALT_SDMMC_CTYPE_CARD0_WIDTH2_E_FOUR_BIT | 0x1   | 4-bit mode 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTYPE_CARD0_WIDTH2
 * 
 * 1-bit mode
 */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_E_ONE_BIT  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTYPE_CARD0_WIDTH2
 * 
 * 4-bit mode
 */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_E_FOUR_BIT 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTYPE_CARD0_WIDTH2 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTYPE_CARD0_WIDTH2 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_MSB        0
/* The width in bits of the ALT_SDMMC_CTYPE_CARD0_WIDTH2 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTYPE_CARD0_WIDTH2 register field value. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_CTYPE_CARD0_WIDTH2 register field value. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_CTYPE_CARD0_WIDTH2 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_RESET      0x0
/* Extracts the ALT_SDMMC_CTYPE_CARD0_WIDTH2 field value from a register. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_CTYPE_CARD0_WIDTH2 register field value suitable for setting the register. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH2_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CARD0_WIDTH1
 * 
 * One bit per card indicates if card is 8-bit:
 * 
 * 0-Non 8-bit mode
 * 
 * 1-8-bit mode
 * 
 * Bit[31] corresponds to card[15]; bit[16] corresponds to card[0].
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description   
 * :----------------------------------------|:------|:---------------
 *  ALT_SDMMC_CTYPE_CARD0_WIDTH1_E_NON_8BIT | 0x0   | Non 8-bit mode
 *  ALT_SDMMC_CTYPE_CARD0_WIDTH1_E_YES_8BIT | 0x1   | 8-bit mode    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CTYPE_CARD0_WIDTH1
 * 
 * Non 8-bit mode
 */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_E_NON_8BIT 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CTYPE_CARD0_WIDTH1
 * 
 * 8-bit mode
 */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_E_YES_8BIT 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CTYPE_CARD0_WIDTH1 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CTYPE_CARD0_WIDTH1 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_MSB        16
/* The width in bits of the ALT_SDMMC_CTYPE_CARD0_WIDTH1 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_WIDTH      1
/* The mask used to set the ALT_SDMMC_CTYPE_CARD0_WIDTH1 register field value. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_SET_MSK    0x00010000
/* The mask used to clear the ALT_SDMMC_CTYPE_CARD0_WIDTH1 register field value. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SDMMC_CTYPE_CARD0_WIDTH1 register field. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_RESET      0x0
/* Extracts the ALT_SDMMC_CTYPE_CARD0_WIDTH1 field value from a register. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SDMMC_CTYPE_CARD0_WIDTH1 register field value suitable for setting the register. */
#define ALT_SDMMC_CTYPE_CARD0_WIDTH1_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SDMMC_CTYPE.
 */
struct ALT_SDMMC_CTYPE_s
{
    volatile uint32_t  CARD0_WIDTH2 :  1;  /* ALT_SDMMC_CTYPE_CARD0_WIDTH2 */
    uint32_t                        : 15;  /* *UNDEFINED* */
    volatile uint32_t  CARD0_WIDTH1 :  1;  /* ALT_SDMMC_CTYPE_CARD0_WIDTH1 */
    uint32_t                        : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_CTYPE. */
typedef struct ALT_SDMMC_CTYPE_s  ALT_SDMMC_CTYPE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CTYPE register. */
#define ALT_SDMMC_CTYPE_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_CTYPE register from the beginning of the component. */
#define ALT_SDMMC_CTYPE_OFST        0x18
/* The address of the ALT_SDMMC_CTYPE register. */
#define ALT_SDMMC_CTYPE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CTYPE_OFST))

/*
 * Register : Block Size Register - BLKSIZ
 * 
 * Block Size Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [15:0]  | RW     | 0x200 | ALT_SDMMC_BLKSIZ_BLOCK_SIZE
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : BLOCK_SIZE
 * 
 * Block size
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BLKSIZ_BLOCK_SIZE register field. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BLKSIZ_BLOCK_SIZE register field. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_MSB        15
/* The width in bits of the ALT_SDMMC_BLKSIZ_BLOCK_SIZE register field. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_WIDTH      16
/* The mask used to set the ALT_SDMMC_BLKSIZ_BLOCK_SIZE register field value. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SDMMC_BLKSIZ_BLOCK_SIZE register field value. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_CLR_MSK    0xffff0000
/* The reset value of the ALT_SDMMC_BLKSIZ_BLOCK_SIZE register field. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_RESET      0x200
/* Extracts the ALT_SDMMC_BLKSIZ_BLOCK_SIZE field value from a register. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SDMMC_BLKSIZ_BLOCK_SIZE register field value suitable for setting the register. */
#define ALT_SDMMC_BLKSIZ_BLOCK_SIZE_SET(value) (((value) << 0) & 0x0000ffff)

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
 * The struct declaration for register ALT_SDMMC_BLKSIZ.
 */
struct ALT_SDMMC_BLKSIZ_s
{
    volatile uint32_t  BLOCK_SIZE : 16;  /* ALT_SDMMC_BLKSIZ_BLOCK_SIZE */
    uint32_t                      : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_BLKSIZ. */
typedef struct ALT_SDMMC_BLKSIZ_s  ALT_SDMMC_BLKSIZ_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_BLKSIZ register. */
#define ALT_SDMMC_BLKSIZ_RESET       0x00000200
/* The byte offset of the ALT_SDMMC_BLKSIZ register from the beginning of the component. */
#define ALT_SDMMC_BLKSIZ_OFST        0x1c
/* The address of the ALT_SDMMC_BLKSIZ register. */
#define ALT_SDMMC_BLKSIZ_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_BLKSIZ_OFST))

/*
 * Register : Byte Count Register - BYTCNT
 * 
 * Byte Count Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [31:0] | RW     | 0x200 | ALT_SDMMC_BYTCNT_BYTE_COUNT
 * 
 */
/*
 * Field : BYTE_COUNT
 * 
 * Number of bytes to be transferred; should be integer multiple of Block Size for
 * block transfers.
 * 
 * For undefined number of byte transfers, byte count should be set to 0. When byte
 * count is set to 0, it is responsibility of host to explicitly send stop/abort
 * command to terminate data transfer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BYTCNT_BYTE_COUNT register field. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BYTCNT_BYTE_COUNT register field. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_MSB        31
/* The width in bits of the ALT_SDMMC_BYTCNT_BYTE_COUNT register field. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_WIDTH      32
/* The mask used to set the ALT_SDMMC_BYTCNT_BYTE_COUNT register field value. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_BYTCNT_BYTE_COUNT register field value. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_BYTCNT_BYTE_COUNT register field. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_RESET      0x200
/* Extracts the ALT_SDMMC_BYTCNT_BYTE_COUNT field value from a register. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_BYTCNT_BYTE_COUNT register field value suitable for setting the register. */
#define ALT_SDMMC_BYTCNT_BYTE_COUNT_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_BYTCNT.
 */
struct ALT_SDMMC_BYTCNT_s
{
    volatile uint32_t  BYTE_COUNT : 32;  /* ALT_SDMMC_BYTCNT_BYTE_COUNT */
};

/* The typedef declaration for register ALT_SDMMC_BYTCNT. */
typedef struct ALT_SDMMC_BYTCNT_s  ALT_SDMMC_BYTCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_BYTCNT register. */
#define ALT_SDMMC_BYTCNT_RESET       0x00000200
/* The byte offset of the ALT_SDMMC_BYTCNT register from the beginning of the component. */
#define ALT_SDMMC_BYTCNT_OFST        0x20
/* The address of the ALT_SDMMC_BYTCNT register. */
#define ALT_SDMMC_BYTCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_BYTCNT_OFST))

/*
 * Register : Interrupt Mask Register - INTMASK
 * 
 * Interrupt Mask Register
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset | Description                           
 * :-----|:-------|:------|:---------------------------------------
 *  [0]  | RW     | 0x0   | ALT_SDMMC_INTMASK_CD_INT_MASK         
 *  [1]  | RW     | 0x0   | ALT_SDMMC_INTMASK_RE_INT_MASK         
 *  [2]  | RW     | 0x0   | ALT_SDMMC_INTMASK_CMD_INT_MASK        
 *  [3]  | RW     | 0x0   | ALT_SDMMC_INTMASK_DTO_INT_MASK        
 *  [4]  | RW     | 0x0   | ALT_SDMMC_INTMASK_TXDR_INT_MASK       
 *  [5]  | RW     | 0x0   | ALT_SDMMC_INTMASK_RXDR_INT_MASK       
 *  [6]  | RW     | 0x0   | ALT_SDMMC_INTMASK_RCRC_INT_MASK       
 *  [7]  | RW     | 0x0   | ALT_SDMMC_INTMASK_DCRC_INT_MASK       
 *  [8]  | RW     | 0x0   | ALT_SDMMC_INTMASK_RTO_INT_MASK        
 *  [9]  | RW     | 0x0   | ALT_SDMMC_INTMASK_DRTO_INT_MASK       
 *  [10] | RW     | 0x0   | ALT_SDMMC_INTMASK_HTO_INT_MASK        
 *  [11] | RW     | 0x0   | ALT_SDMMC_INTMASK_FRUN_INT_MASK       
 *  [12] | RW     | 0x0   | ALT_SDMMC_INTMASK_HLE_INT_MASK        
 *  [13] | RW     | 0x0   | ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK    
 *  [14] | RW     | 0x0   | ALT_SDMMC_INTMASK_ACD_INT_MASK        
 *  [15] | RW     | 0x0   | ALT_SDMMC_INTMASK_EBE_INT_MASK        
 *  [16] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 
 *  [17] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 
 *  [18] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 
 *  [19] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 
 *  [20] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 
 *  [21] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 
 *  [22] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 
 *  [23] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 
 *  [24] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 
 *  [25] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 
 *  [26] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10
 *  [27] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11
 *  [28] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12
 *  [29] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13
 *  [30] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14
 *  [31] | RW     | 0x0   | ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15
 * 
 */
/*
 * Field : CD_INT_MASK
 * 
 * Card detect (CD) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description      
 * :----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_CD_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_CD_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_CD_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_CD_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_CD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_CD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_MSB        0
/* The width in bits of the ALT_SDMMC_INTMASK_CD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_CD_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_INTMASK_CD_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_INTMASK_CD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_CD_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_INTMASK_CD_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_CD_INT_MASK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RE_INT_MASK
 * 
 * Response error (RE) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description      
 * :----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_RE_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_RE_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RE_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RE_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_RE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_RE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_MSB        1
/* The width in bits of the ALT_SDMMC_INTMASK_RE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_RE_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_INTMASK_RE_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_INTMASK_RE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_RE_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_INTMASK_RE_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_RE_INT_MASK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : CMD_INT_MASK
 * 
 * Command done (CD) interrupt enable
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description      
 * :-----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_CMD_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_CMD_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_CMD_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_CMD_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_CMD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_CMD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_MSB        2
/* The width in bits of the ALT_SDMMC_INTMASK_CMD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_CMD_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_INTMASK_CMD_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_INTMASK_CMD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_CMD_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_INTMASK_CMD_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_CMD_INT_MASK_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DTO_INT_MASK
 * 
 * Data transfer over (DTO) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description      
 * :-----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_DTO_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_DTO_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_DTO_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_DTO_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_DTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_DTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_MSB        3
/* The width in bits of the ALT_SDMMC_INTMASK_DTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_DTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_SET_MSK    0x00000008
/* The mask used to clear the ALT_SDMMC_INTMASK_DTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SDMMC_INTMASK_DTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_DTO_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SDMMC_INTMASK_DTO_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_DTO_INT_MASK_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : TXDR_INT_MASK
 * 
 * Transmit FIFO data request (TXDR) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description      
 * :------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_TXDR_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_TXDR_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_TXDR_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_E_MASKED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_TXDR_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_TXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_TXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_MSB        4
/* The width in bits of the ALT_SDMMC_INTMASK_TXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_TXDR_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_INTMASK_TXDR_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_INTMASK_TXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_TXDR_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_INTMASK_TXDR_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_TXDR_INT_MASK_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : RXDR_INT_MASK
 * 
 * Receive FIFO data request (RXDR) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description      
 * :------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_RXDR_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_RXDR_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RXDR_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_E_MASKED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RXDR_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_RXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_RXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_MSB        5
/* The width in bits of the ALT_SDMMC_INTMASK_RXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_RXDR_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_INTMASK_RXDR_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_INTMASK_RXDR_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_RXDR_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_INTMASK_RXDR_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_RXDR_INT_MASK_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RCRC_INT_MASK
 * 
 * Response CRC error (RCRC) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description      
 * :------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_RCRC_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_RCRC_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RCRC_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_E_MASKED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RCRC_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_RCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_RCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_MSB        6
/* The width in bits of the ALT_SDMMC_INTMASK_RCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_RCRC_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_INTMASK_RCRC_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_INTMASK_RCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_RCRC_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_INTMASK_RCRC_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_RCRC_INT_MASK_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : DCRC_INT_MASK
 * 
 * Data CRC error (DCRC) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description      
 * :------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_DCRC_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_DCRC_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_DCRC_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_E_MASKED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_DCRC_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_DCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_DCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_MSB        7
/* The width in bits of the ALT_SDMMC_INTMASK_DCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_DCRC_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_INTMASK_DCRC_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_INTMASK_DCRC_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_DCRC_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_INTMASK_DCRC_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_DCRC_INT_MASK_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RTO_INT_MASK
 * 
 * Response timeout (RTO) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description      
 * :-----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_RTO_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_RTO_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RTO_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_RTO_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_RTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_RTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_MSB        8
/* The width in bits of the ALT_SDMMC_INTMASK_RTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_RTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_INTMASK_RTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_INTMASK_RTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_RTO_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_INTMASK_RTO_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_RTO_INT_MASK_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : DRTO_INT_MASK
 * 
 * Data read timeout (DRTO) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description      
 * :------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_DRTO_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_DRTO_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_DRTO_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_E_MASKED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_DRTO_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_DRTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_DRTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_MSB        9
/* The width in bits of the ALT_SDMMC_INTMASK_DRTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_DRTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_INTMASK_DRTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_INTMASK_DRTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_DRTO_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_INTMASK_DRTO_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_DRTO_INT_MASK_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : HTO_INT_MASK
 * 
 * Data starvation-by-host timeout (HTO) /Volt_switch_int interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description      
 * :-----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_HTO_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_HTO_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_HTO_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_HTO_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_HTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_HTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_MSB        10
/* The width in bits of the ALT_SDMMC_INTMASK_HTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_HTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_INTMASK_HTO_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_INTMASK_HTO_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_HTO_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_INTMASK_HTO_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_HTO_INT_MASK_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : FRUN_INT_MASK
 * 
 * FIFO underrun/overrun error (FRUN) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description      
 * :------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_FRUN_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_FRUN_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_FRUN_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_E_MASKED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_FRUN_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_FRUN_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_FRUN_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_MSB        11
/* The width in bits of the ALT_SDMMC_INTMASK_FRUN_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_FRUN_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_INTMASK_FRUN_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_INTMASK_FRUN_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_FRUN_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_INTMASK_FRUN_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_FRUN_INT_MASK_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : HLE_INT_MASK
 * 
 * Hardware locked write error (HLE) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description      
 * :-----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_HLE_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_HLE_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_HLE_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_HLE_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_HLE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_HLE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_MSB        12
/* The width in bits of the ALT_SDMMC_INTMASK_HLE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_HLE_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_SET_MSK    0x00001000
/* The mask used to clear the ALT_SDMMC_INTMASK_HLE_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_CLR_MSK    0xffffefff
/* The reset value of the ALT_SDMMC_INTMASK_HLE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_HLE_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SDMMC_INTMASK_HLE_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_HLE_INT_MASK_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : SBE_BCI_INT_MASK
 * 
 * Start Bit Error(SBE)/Busy Complete Interrupt (BCI) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description      
 * :---------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_MSB        13
/* The width in bits of the ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_SET_MSK    0x00002000
/* The mask used to clear the ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : ACD_INT_MASK
 * 
 * Auto command done (ACD) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description      
 * :-----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_ACD_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_ACD_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_ACD_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_ACD_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_ACD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_ACD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_MSB        14
/* The width in bits of the ALT_SDMMC_INTMASK_ACD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_ACD_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_SET_MSK    0x00004000
/* The mask used to clear the ALT_SDMMC_INTMASK_ACD_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SDMMC_INTMASK_ACD_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_ACD_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SDMMC_INTMASK_ACD_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_ACD_INT_MASK_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : EBE_INT_MASK
 * 
 * End-bit error (read)/Write no CRC (EBE) interrupt enable.
 * 
 * Value of 0 masks interrupt; value of 1 enables interrupt.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description      
 * :-----------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_EBE_INT_MASK_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_EBE_INT_MASK_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_EBE_INT_MASK
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_EBE_INT_MASK
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_EBE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_EBE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_MSB        15
/* The width in bits of the ALT_SDMMC_INTMASK_EBE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_EBE_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_SET_MSK    0x00008000
/* The mask used to clear the ALT_SDMMC_INTMASK_EBE_INT_MASK register field value. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SDMMC_INTMASK_EBE_INT_MASK register field. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_EBE_INT_MASK field value from a register. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SDMMC_INTMASK_EBE_INT_MASK register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_EBE_INT_MASK_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : SDIO_INT_MASK_CARD0
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_MSB        16
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : SDIO_INT_MASK_CARD1
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_MSB        17
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : SDIO_INT_MASK_CARD2
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_MSB        18
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_SET_MSK    0x00040000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : SDIO_INT_MASK_CARD3
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_MSB        19
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_SET_MSK    0x00080000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : SDIO_INT_MASK_CARD4
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_MSB        20
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_SET_MSK    0x00100000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_CLR_MSK    0xffefffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : SDIO_INT_MASK_CARD5
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_MSB        21
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_SET_MSK    0x00200000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_CLR_MSK    0xffdfffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : SDIO_INT_MASK_CARD6
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_MSB        22
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_SET_MSK    0x00400000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_CLR_MSK    0xffbfffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : SDIO_INT_MASK_CARD7
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_MSB        23
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_SET_MSK    0x00800000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : SDIO_INT_MASK_CARD8
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_MSB        24
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_SET_MSK    0x01000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : SDIO_INT_MASK_CARD9
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description      
 * :------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_E_MASKED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_MSB        25
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_SET_MSK    0x02000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_CLR_MSK    0xfdffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : SDIO_INT_MASK_CARD10
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description      
 * :-------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_MSB        26
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_SET_MSK    0x04000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_CLR_MSK    0xfbffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : SDIO_INT_MASK_CARD11
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description      
 * :-------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_MSB        27
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_SET_MSK    0x08000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : SDIO_INT_MASK_CARD12
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description      
 * :-------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_MSB        28
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_SET_MSK    0x10000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_CLR_MSK    0xefffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : SDIO_INT_MASK_CARD13
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description      
 * :-------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_MSB        29
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_SET_MSK    0x20000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_CLR_MSK    0xdfffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : SDIO_INT_MASK_CARD14
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description      
 * :-------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_MSB        30
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_SET_MSK    0x40000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : SDIO_INT_MASK_CARD15
 * 
 * Mask SDIO interrupts
 * 
 * One bit for each card. Bit[31] corresponds to card[15], and bit[16] corresponds
 * to card[0]. When masked, SDIO interrupt detection for that card is disabled. A 0
 * masks an interrupt, and 1 enables an interrupt.
 * 
 * In MMC-Ver3.3-only mode, these bits are always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description      
 * :-------------------------------------------------|:------|:------------------
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_E_MASKED  | 0x0   | Masks interrupt  
 *  ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_E_ENABLED | 0x1   | Enables interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15
 * 
 * Masks interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_E_MASKED     0x0
/*
 * Enumerated value for register field ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15
 * 
 * Enables interrupt
 */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_MSB        31
/* The width in bits of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_WIDTH      1
/* The mask used to set the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_SET_MSK    0x80000000
/* The mask used to clear the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 register field value. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 register field. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_RESET      0x0
/* Extracts the ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 field value from a register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 register field value suitable for setting the register. */
#define ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SDMMC_INTMASK.
 */
struct ALT_SDMMC_INTMASK_s
{
    volatile uint32_t  CD_INT_MASK          :  1;  /* ALT_SDMMC_INTMASK_CD_INT_MASK */
    volatile uint32_t  RE_INT_MASK          :  1;  /* ALT_SDMMC_INTMASK_RE_INT_MASK */
    volatile uint32_t  CMD_INT_MASK         :  1;  /* ALT_SDMMC_INTMASK_CMD_INT_MASK */
    volatile uint32_t  DTO_INT_MASK         :  1;  /* ALT_SDMMC_INTMASK_DTO_INT_MASK */
    volatile uint32_t  TXDR_INT_MASK        :  1;  /* ALT_SDMMC_INTMASK_TXDR_INT_MASK */
    volatile uint32_t  RXDR_INT_MASK        :  1;  /* ALT_SDMMC_INTMASK_RXDR_INT_MASK */
    volatile uint32_t  RCRC_INT_MASK        :  1;  /* ALT_SDMMC_INTMASK_RCRC_INT_MASK */
    volatile uint32_t  DCRC_INT_MASK        :  1;  /* ALT_SDMMC_INTMASK_DCRC_INT_MASK */
    volatile uint32_t  RTO_INT_MASK         :  1;  /* ALT_SDMMC_INTMASK_RTO_INT_MASK */
    volatile uint32_t  DRTO_INT_MASK        :  1;  /* ALT_SDMMC_INTMASK_DRTO_INT_MASK */
    volatile uint32_t  HTO_INT_MASK         :  1;  /* ALT_SDMMC_INTMASK_HTO_INT_MASK */
    volatile uint32_t  FRUN_INT_MASK        :  1;  /* ALT_SDMMC_INTMASK_FRUN_INT_MASK */
    volatile uint32_t  HLE_INT_MASK         :  1;  /* ALT_SDMMC_INTMASK_HLE_INT_MASK */
    volatile uint32_t  SBE_BCI_INT_MASK     :  1;  /* ALT_SDMMC_INTMASK_SBE_BCI_INT_MASK */
    volatile uint32_t  ACD_INT_MASK         :  1;  /* ALT_SDMMC_INTMASK_ACD_INT_MASK */
    volatile uint32_t  EBE_INT_MASK         :  1;  /* ALT_SDMMC_INTMASK_EBE_INT_MASK */
    volatile uint32_t  SDIO_INT_MASK_CARD0  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD0 */
    volatile uint32_t  SDIO_INT_MASK_CARD1  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD1 */
    volatile uint32_t  SDIO_INT_MASK_CARD2  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD2 */
    volatile uint32_t  SDIO_INT_MASK_CARD3  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD3 */
    volatile uint32_t  SDIO_INT_MASK_CARD4  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD4 */
    volatile uint32_t  SDIO_INT_MASK_CARD5  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD5 */
    volatile uint32_t  SDIO_INT_MASK_CARD6  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD6 */
    volatile uint32_t  SDIO_INT_MASK_CARD7  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD7 */
    volatile uint32_t  SDIO_INT_MASK_CARD8  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD8 */
    volatile uint32_t  SDIO_INT_MASK_CARD9  :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD9 */
    volatile uint32_t  SDIO_INT_MASK_CARD10 :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD10 */
    volatile uint32_t  SDIO_INT_MASK_CARD11 :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD11 */
    volatile uint32_t  SDIO_INT_MASK_CARD12 :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD12 */
    volatile uint32_t  SDIO_INT_MASK_CARD13 :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD13 */
    volatile uint32_t  SDIO_INT_MASK_CARD14 :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD14 */
    volatile uint32_t  SDIO_INT_MASK_CARD15 :  1;  /* ALT_SDMMC_INTMASK_SDIO_INT_MASK_CARD15 */
};

/* The typedef declaration for register ALT_SDMMC_INTMASK. */
typedef struct ALT_SDMMC_INTMASK_s  ALT_SDMMC_INTMASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_INTMASK register. */
#define ALT_SDMMC_INTMASK_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_INTMASK register from the beginning of the component. */
#define ALT_SDMMC_INTMASK_OFST        0x24
/* The address of the ALT_SDMMC_INTMASK register. */
#define ALT_SDMMC_INTMASK_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_INTMASK_OFST))

/*
 * Register : Command Argument Register - CMDARG
 * 
 * Command Argument Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description             
 * :-------|:-------|:------|:-------------------------
 *  [31:0] | RW     | 0x0   | ALT_SDMMC_CMDARG_CMD_ARG
 * 
 */
/*
 * Field : CMD_ARG
 * 
 * Value indicates command argument to be passed to card
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMDARG_CMD_ARG register field. */
#define ALT_SDMMC_CMDARG_CMD_ARG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMDARG_CMD_ARG register field. */
#define ALT_SDMMC_CMDARG_CMD_ARG_MSB        31
/* The width in bits of the ALT_SDMMC_CMDARG_CMD_ARG register field. */
#define ALT_SDMMC_CMDARG_CMD_ARG_WIDTH      32
/* The mask used to set the ALT_SDMMC_CMDARG_CMD_ARG register field value. */
#define ALT_SDMMC_CMDARG_CMD_ARG_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_CMDARG_CMD_ARG register field value. */
#define ALT_SDMMC_CMDARG_CMD_ARG_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_CMDARG_CMD_ARG register field. */
#define ALT_SDMMC_CMDARG_CMD_ARG_RESET      0x0
/* Extracts the ALT_SDMMC_CMDARG_CMD_ARG field value from a register. */
#define ALT_SDMMC_CMDARG_CMD_ARG_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_CMDARG_CMD_ARG register field value suitable for setting the register. */
#define ALT_SDMMC_CMDARG_CMD_ARG_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_CMDARG.
 */
struct ALT_SDMMC_CMDARG_s
{
    volatile uint32_t  CMD_ARG : 32;  /* ALT_SDMMC_CMDARG_CMD_ARG */
};

/* The typedef declaration for register ALT_SDMMC_CMDARG. */
typedef struct ALT_SDMMC_CMDARG_s  ALT_SDMMC_CMDARG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CMDARG register. */
#define ALT_SDMMC_CMDARG_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_CMDARG register from the beginning of the component. */
#define ALT_SDMMC_CMDARG_OFST        0x28
/* The address of the ALT_SDMMC_CMDARG register. */
#define ALT_SDMMC_CMDARG_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CMDARG_OFST))

/*
 * Register : Command Register - CMD
 * 
 * Command Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [5:0]   | RW     | 0x0   | ALT_SDMMC_CMD_CMD_INDEX                  
 *  [6]     | RW     | 0x0   | ALT_SDMMC_CMD_RESPONSE_EXPECT            
 *  [7]     | RW     | 0x0   | ALT_SDMMC_CMD_RESPONSE_LENGTH            
 *  [8]     | RW     | 0x0   | ALT_SDMMC_CMD_CHECK_RESPONSE_CRC         
 *  [9]     | RW     | 0x0   | ALT_SDMMC_CMD_DATA_EXPECTED              
 *  [10]    | RW     | 0x0   | ALT_SDMMC_CMD_READ_WRITE                 
 *  [11]    | RW     | 0x0   | ALT_SDMMC_CMD_TRANSFER_MODE              
 *  [12]    | RW     | 0x0   | ALT_SDMMC_CMD_SEND_AUTO_STOP             
 *  [13]    | RW     | 0x0   | ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE      
 *  [14]    | RW     | 0x0   | ALT_SDMMC_CMD_STOP_ABORT_CMD             
 *  [15]    | RW     | 0x0   | ALT_SDMMC_CMD_SEND_INITIALIZATION        
 *  [20:16] | RW     | 0x0   | ALT_SDMMC_CMD_CARD_NUMBER                
 *  [21]    | RW     | 0x0   | ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY
 *  [22]    | RW     | 0x0   | ALT_SDMMC_CMD_READ_CEATA_DEVICE          
 *  [23]    | RW     | 0x0   | ALT_SDMMC_CMD_CCS_EXPECTED               
 *  [24]    | RW     | 0x0   | ALT_SDMMC_CMD_ENABLE_BOOT                
 *  [25]    | RW     | 0x0   | ALT_SDMMC_CMD_EXPECT_BOOT_ACK            
 *  [26]    | RW     | 0x0   | ALT_SDMMC_CMD_DISABLE_BOOT               
 *  [27]    | RW     | 0x0   | ALT_SDMMC_CMD_BOOT_MODE                  
 *  [28]    | RW     | 0x0   | ALT_SDMMC_CMD_VOLT_SWITCH                
 *  [29]    | RW     | 0x1   | ALT_SDMMC_CMD_USE_HOLD_REG               
 *  [30]    | ???    | 0x0   | *UNDEFINED*                              
 *  [31]    | RW     | 0x0   | ALT_SDMMC_CMD_START_CMD                  
 * 
 */
/*
 * Field : CMD_INDEX
 * 
 * Command index
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_CMD_INDEX register field. */
#define ALT_SDMMC_CMD_CMD_INDEX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_CMD_INDEX register field. */
#define ALT_SDMMC_CMD_CMD_INDEX_MSB        5
/* The width in bits of the ALT_SDMMC_CMD_CMD_INDEX register field. */
#define ALT_SDMMC_CMD_CMD_INDEX_WIDTH      6
/* The mask used to set the ALT_SDMMC_CMD_CMD_INDEX register field value. */
#define ALT_SDMMC_CMD_CMD_INDEX_SET_MSK    0x0000003f
/* The mask used to clear the ALT_SDMMC_CMD_CMD_INDEX register field value. */
#define ALT_SDMMC_CMD_CMD_INDEX_CLR_MSK    0xffffffc0
/* The reset value of the ALT_SDMMC_CMD_CMD_INDEX register field. */
#define ALT_SDMMC_CMD_CMD_INDEX_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_CMD_INDEX field value from a register. */
#define ALT_SDMMC_CMD_CMD_INDEX_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_SDMMC_CMD_CMD_INDEX register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_CMD_INDEX_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : RESPONSE_EXPECT
 * 
 * 0-No response expected from card
 * 
 * 1-Response expected from card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description                   
 * :-----------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_CMD_RESPONSE_EXPECT_E_NO_RESP  | 0x0   | No response expected from card
 *  ALT_SDMMC_CMD_RESPONSE_EXPECT_E_RESP_EXP | 0x1   | Response expected from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_RESPONSE_EXPECT
 * 
 * No response expected from card
 */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_E_NO_RESP     0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_RESPONSE_EXPECT
 * 
 * Response expected from card
 */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_E_RESP_EXP    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_RESPONSE_EXPECT register field. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_RESPONSE_EXPECT register field. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_MSB        6
/* The width in bits of the ALT_SDMMC_CMD_RESPONSE_EXPECT register field. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_RESPONSE_EXPECT register field value. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_CMD_RESPONSE_EXPECT register field value. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_CMD_RESPONSE_EXPECT register field. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_RESPONSE_EXPECT field value from a register. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_CMD_RESPONSE_EXPECT register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_RESPONSE_EXPECT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RESPONSE_LENGTH
 * 
 * 0-Short response expected from card
 * 
 * 1-Long response expected from card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description   
 * :-------------------------------------------|:------|:---------------
 *  ALT_SDMMC_CMD_RESPONSE_LENGTH_E_SHORT_RESP | 0x0   | Short response
 *  ALT_SDMMC_CMD_RESPONSE_LENGTH_E_LONG_RESP  | 0x1   | Long response 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_RESPONSE_LENGTH
 * 
 * Short response
 */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_E_SHORT_RESP  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_RESPONSE_LENGTH
 * 
 * Long response
 */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_E_LONG_RESP   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_RESPONSE_LENGTH register field. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_RESPONSE_LENGTH register field. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_MSB        7
/* The width in bits of the ALT_SDMMC_CMD_RESPONSE_LENGTH register field. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_RESPONSE_LENGTH register field value. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_CMD_RESPONSE_LENGTH register field value. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_CMD_RESPONSE_LENGTH register field. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_RESPONSE_LENGTH field value from a register. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_CMD_RESPONSE_LENGTH register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_RESPONSE_LENGTH_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : CHECK_RESPONSE_CRC
 * 
 * 0-Do not check response CRC
 * 
 * 1-Check response CRC
 * 
 * Some of command responses do not return valid CRC bits. Software should disable
 * CRC checks for those commands in order to disable CRC checking by controller.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description              
 * :-----------------------------------------|:------|:--------------------------
 *  ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_E_FALSE | 0x0   | Do not check response CRC
 *  ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_E_TRUE  | 0x1   | Check response CRC       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_CHECK_RESPONSE_CRC
 * 
 * Do not check response CRC
 */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_E_FALSE    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_CHECK_RESPONSE_CRC
 * 
 * Check response CRC
 */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_E_TRUE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_CHECK_RESPONSE_CRC register field. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_CHECK_RESPONSE_CRC register field. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_MSB        8
/* The width in bits of the ALT_SDMMC_CMD_CHECK_RESPONSE_CRC register field. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_CHECK_RESPONSE_CRC register field value. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_CMD_CHECK_RESPONSE_CRC register field value. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_CMD_CHECK_RESPONSE_CRC register field. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_CHECK_RESPONSE_CRC field value from a register. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_CMD_CHECK_RESPONSE_CRC register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_CHECK_RESPONSE_CRC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : DATA_EXPECTED
 * 
 * 0-No data transfer expected (read/write)
 * 
 * 1-Data transfer expected (read/write)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description              
 * :------------------------------------|:------|:--------------------------
 *  ALT_SDMMC_CMD_DATA_EXPECTED_E_FALSE | 0x0   | No data transfer expected
 *  ALT_SDMMC_CMD_DATA_EXPECTED_E_TRUE  | 0x1   | Data transfer expected   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_DATA_EXPECTED
 * 
 * No data transfer expected
 */
#define ALT_SDMMC_CMD_DATA_EXPECTED_E_FALSE 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_DATA_EXPECTED
 * 
 * Data transfer expected
 */
#define ALT_SDMMC_CMD_DATA_EXPECTED_E_TRUE  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_DATA_EXPECTED register field. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_DATA_EXPECTED register field. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_MSB        9
/* The width in bits of the ALT_SDMMC_CMD_DATA_EXPECTED register field. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_DATA_EXPECTED register field value. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_CMD_DATA_EXPECTED register field value. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_CMD_DATA_EXPECTED register field. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_DATA_EXPECTED field value from a register. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_CMD_DATA_EXPECTED register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_DATA_EXPECTED_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : READ_WRITE
 * 
 * 0-Read from card
 * 
 * 1-Write to card
 * 
 * Don't care if no data expected from card.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description   
 * :---------------------------------|:------|:---------------
 *  ALT_SDMMC_CMD_READ_WRITE_E_READ  | 0x0   | Read from card
 *  ALT_SDMMC_CMD_READ_WRITE_E_WRITE | 0x1   | Write to card 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_READ_WRITE
 * 
 * Read from card
 */
#define ALT_SDMMC_CMD_READ_WRITE_E_READ     0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_READ_WRITE
 * 
 * Write to card
 */
#define ALT_SDMMC_CMD_READ_WRITE_E_WRITE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_READ_WRITE register field. */
#define ALT_SDMMC_CMD_READ_WRITE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_READ_WRITE register field. */
#define ALT_SDMMC_CMD_READ_WRITE_MSB        10
/* The width in bits of the ALT_SDMMC_CMD_READ_WRITE register field. */
#define ALT_SDMMC_CMD_READ_WRITE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_READ_WRITE register field value. */
#define ALT_SDMMC_CMD_READ_WRITE_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_CMD_READ_WRITE register field value. */
#define ALT_SDMMC_CMD_READ_WRITE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_CMD_READ_WRITE register field. */
#define ALT_SDMMC_CMD_READ_WRITE_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_READ_WRITE field value from a register. */
#define ALT_SDMMC_CMD_READ_WRITE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_CMD_READ_WRITE register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_READ_WRITE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : TRANSFER_MODE
 * 
 * 0-Block data transfer command
 * 
 * 1-Stream data transfer command
 * 
 * Don't care if no data expected.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                 
 * :-------------------------------------|:------|:-----------------------------
 *  ALT_SDMMC_CMD_TRANSFER_MODE_E_BLOCK  | 0x0   | Block data transfer command 
 *  ALT_SDMMC_CMD_TRANSFER_MODE_E_STREAM | 0x1   | Stream data transfer command
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_TRANSFER_MODE
 * 
 * Block data transfer command
 */
#define ALT_SDMMC_CMD_TRANSFER_MODE_E_BLOCK     0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_TRANSFER_MODE
 * 
 * Stream data transfer command
 */
#define ALT_SDMMC_CMD_TRANSFER_MODE_E_STREAM    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_TRANSFER_MODE register field. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_TRANSFER_MODE register field. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_MSB        11
/* The width in bits of the ALT_SDMMC_CMD_TRANSFER_MODE register field. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_TRANSFER_MODE register field value. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_CMD_TRANSFER_MODE register field value. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_CMD_TRANSFER_MODE register field. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_TRANSFER_MODE field value from a register. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_CMD_TRANSFER_MODE register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_TRANSFER_MODE_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : SEND_AUTO_STOP
 * 
 * 0-No stop command sent at end of data transfer
 * 
 * 1-Send stop command at end of data transfer
 * 
 * When set, DWC_mobile_storage sends stop command to SD_MMC_CEATA cards at end of
 * data transfer.
 * 
 * * when send_auto_stop bit should be set, since some data
 * 
 * transfers do not need explicit stop commands
 * 
 * * open-ended transfers that software should explicitly send to
 * 
 * stop command
 * 
 * Additionally, when "resume" is sent to resume  suspended memory access of
 * SD-Combo card  bit should be set correctly if suspended data transfer needs
 * send_auto_stop.Don't care if no data expected from card.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                              
 * :-------------------------------------|:------|:------------------------------------------
 *  ALT_SDMMC_CMD_SEND_AUTO_STOP_E_FALSE | 0x0   | No stop command at end of data transfer  
 *  ALT_SDMMC_CMD_SEND_AUTO_STOP_E_TRUE  | 0x1   | Send stop command at end of data transfer
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_SEND_AUTO_STOP
 * 
 * No stop command at end of data transfer
 */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_E_FALSE    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_SEND_AUTO_STOP
 * 
 * Send stop command at end of data transfer
 */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_E_TRUE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_SEND_AUTO_STOP register field. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_SEND_AUTO_STOP register field. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_MSB        12
/* The width in bits of the ALT_SDMMC_CMD_SEND_AUTO_STOP register field. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_SEND_AUTO_STOP register field value. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_SET_MSK    0x00001000
/* The mask used to clear the ALT_SDMMC_CMD_SEND_AUTO_STOP register field value. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_CLR_MSK    0xffffefff
/* The reset value of the ALT_SDMMC_CMD_SEND_AUTO_STOP register field. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_SEND_AUTO_STOP field value from a register. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SDMMC_CMD_SEND_AUTO_STOP register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_SEND_AUTO_STOP_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : WAIT_PRVDATA_COMPLETE
 * 
 * 0-Send command at once, even if previous data transfer has not
 * 
 * completed
 * 
 * 1-Wait for previous data transfer completion before sending
 * 
 * command
 * 
 * The wait_prvdata_complete = 0 option typically used to query status of card
 * during data transfer or to stop current data transfer;card_number should be same
 * as in previous command.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                               
 * :----------------------------------------------|:------|:-------------------------------------------
 *  ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_E_NO_WAIT | 0x0   | Send command at once                      
 *  ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_E_WAIT    | 0x1   | Wait for previous data transfer completion
 * :                                              |       | before sending command                    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE
 * 
 * Send command at once
 */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_E_NO_WAIT   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE
 * 
 * Wait for previous data transfer completion before sending command
 */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_E_WAIT      0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE register field. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE register field. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_MSB        13
/* The width in bits of the ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE register field. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE register field value. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_SET_MSK    0x00002000
/* The mask used to clear the ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE register field value. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE register field. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE field value from a register. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : STOP_ABORT_CMD
 * 
 * 0-Neither stop nor abort command to stop current data transfer
 * 
 * in progress. If abort is sent to function-number currently
 * 
 * selected or not in data-transfer mode, then bit should be set
 * 
 * to 0.
 * 
 * 1-Stop or abort command intended to stop current data transfer
 * 
 * in progress.
 * 
 * When open-ended or predefined data transfer is in progress, and host issues stop
 * or abort command to stop data transfer, bit should be set so that command/data
 * state-machines of CIU can return correctly to idle state. This is also
 * applicable for Boot mode transfers. To Abort boot mode, this bit should be set
 * along with CMD[26] = disable_boot.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                  
 * :-------------------------------------|:------|:------------------------------
 *  ALT_SDMMC_CMD_STOP_ABORT_CMD_E_FALSE | 0x0   | Neither stop no abort command
 *  ALT_SDMMC_CMD_STOP_ABORT_CMD_E_TRUE  | 0x1   | Stop or abort command        
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_STOP_ABORT_CMD
 * 
 * Neither stop no abort command
 */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_E_FALSE    0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_STOP_ABORT_CMD
 * 
 * Stop or abort command
 */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_E_TRUE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_STOP_ABORT_CMD register field. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_STOP_ABORT_CMD register field. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_MSB        14
/* The width in bits of the ALT_SDMMC_CMD_STOP_ABORT_CMD register field. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_STOP_ABORT_CMD register field value. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_SET_MSK    0x00004000
/* The mask used to clear the ALT_SDMMC_CMD_STOP_ABORT_CMD register field value. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SDMMC_CMD_STOP_ABORT_CMD register field. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_STOP_ABORT_CMD field value from a register. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SDMMC_CMD_STOP_ABORT_CMD register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_STOP_ABORT_CMD_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : SEND_INITIALIZATION
 * 
 * 0-Do not send initialization sequence (80 clocks of 1) before
 * 
 * sending this command
 * 
 * 1-Send initialization sequence before sending this command
 * 
 * After power on, 80 clocks must be sent to card for initialization before sending
 * any commands to card. Bit should be set while sending first command to card so
 * that controller will initialize clocks before sending command to card. This bit
 * should not be set for either of the boot modes (alternate or mandatory).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                        
 * :------------------------------------------|:------|:------------------------------------
 *  ALT_SDMMC_CMD_SEND_INITIALIZATION_E_FALSE | 0x0   | Do not send initialization sequence
 *  ALT_SDMMC_CMD_SEND_INITIALIZATION_E_TRUE  | 0x1   | Send initialization sequence       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_SEND_INITIALIZATION
 * 
 * Do not send initialization sequence
 */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_E_FALSE   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_SEND_INITIALIZATION
 * 
 * Send initialization sequence
 */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_E_TRUE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_SEND_INITIALIZATION register field. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_SEND_INITIALIZATION register field. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_MSB        15
/* The width in bits of the ALT_SDMMC_CMD_SEND_INITIALIZATION register field. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_SEND_INITIALIZATION register field value. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_SET_MSK    0x00008000
/* The mask used to clear the ALT_SDMMC_CMD_SEND_INITIALIZATION register field value. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SDMMC_CMD_SEND_INITIALIZATION register field. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_SEND_INITIALIZATION field value from a register. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SDMMC_CMD_SEND_INITIALIZATION register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_SEND_INITIALIZATION_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : CARD_NUMBER
 * 
 * Card number in use. Represents physical slot number of card being
 * 
 * accessed. In MMC-Ver3.3-only mode, up to 30 cards are supported; in SD-only
 * mode, up to 16 cards are supported. Registered version of this is reflected on
 * dw_dma_card_num and ge_dma_card_num ports, which can be used to create separate
 * DMA requests, if needed.
 * 
 * In addition, in SD mode this is used to mux or demux signals from selected card
 * because each card is interfaced to
 * 
 * DWC_mobile_storage by separate bus.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_CARD_NUMBER register field. */
#define ALT_SDMMC_CMD_CARD_NUMBER_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_CARD_NUMBER register field. */
#define ALT_SDMMC_CMD_CARD_NUMBER_MSB        20
/* The width in bits of the ALT_SDMMC_CMD_CARD_NUMBER register field. */
#define ALT_SDMMC_CMD_CARD_NUMBER_WIDTH      5
/* The mask used to set the ALT_SDMMC_CMD_CARD_NUMBER register field value. */
#define ALT_SDMMC_CMD_CARD_NUMBER_SET_MSK    0x001f0000
/* The mask used to clear the ALT_SDMMC_CMD_CARD_NUMBER register field value. */
#define ALT_SDMMC_CMD_CARD_NUMBER_CLR_MSK    0xffe0ffff
/* The reset value of the ALT_SDMMC_CMD_CARD_NUMBER register field. */
#define ALT_SDMMC_CMD_CARD_NUMBER_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_CARD_NUMBER field value from a register. */
#define ALT_SDMMC_CMD_CARD_NUMBER_GET(value) (((value) & 0x001f0000) >> 16)
/* Produces a ALT_SDMMC_CMD_CARD_NUMBER register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_CARD_NUMBER_SET(value) (((value) << 16) & 0x001f0000)

/*
 * Field : UPDATE_CLOCK_REGISTERS_ONLY
 * 
 * 0-Normal command sequence
 * 
 * 1-Do not send commands, just update clock register value into
 * 
 * card clock domain
 * 
 * Following register values transferred into card clock domain: CLKDIV, CLRSRC,
 * CLKENA. Changes card clocks (change frequency, truncate off or on, and set low-
 * frequency mode); provided in order to change clock frequency or stop clock
 * without having to send command to cards.During normal command sequence, when
 * update_clock_registers_only = 0, following control registers are transferred
 * from BIU to CIU: CMD, CMDARG, TMOUT, CTYPE,BLKSIZ, BYTCNT. CIU uses new register
 * values for new command sequence to card(s).When bit is set, there are no Command
 * Done interrupts because no
 * 
 * command is sent to SD_MMC_CEATA cards.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                                     
 * :--------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_E_FALSE | 0x0   | Normal command sequence                         
 *  ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_E_TRUE  | 0x1   | DO not send commands, just update clock register
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY
 * 
 * Normal command sequence
 */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_E_FALSE   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY
 * 
 * DO not send commands, just update clock register
 */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_E_TRUE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY register field. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY register field. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_MSB        21
/* The width in bits of the ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY register field. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY register field value. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_SET_MSK    0x00200000
/* The mask used to clear the ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY register field value. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_CLR_MSK    0xffdfffff
/* The reset value of the ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY register field. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY field value from a register. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : READ_CEATA_DEVICE
 * 
 * 0-Host is not performing read access (RW_REG or RW_BLK)
 * 
 * towards CE-ATA device
 * 
 * 1-Host is performing read access (RW_REG or RW_BLK)
 * 
 * towards CE-ATA device
 * 
 * Software should set this bit to indicate that CE-ATA device is being accessed
 * for read transfer. This bit is used to disable read data timeout indication
 * while performing CE-ATA read transfers.Maximum value of I/O transmission delay
 * can be no less than 10 seconds. DWC_mobile_storage should not indicate read data
 * timeout while waiting for data from CE-ATA device.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                    
 * :------------------------------------------|:------|:--------------------------------
 *  ALT_SDMMC_CMD_READ_CEATA_DEVICE_E_NO_READ | 0x0   | No read access to CE-ATA device
 *  ALT_SDMMC_CMD_READ_CEATA_DEVICE_E_READ    | 0x1   | Read access to CE-ATA device   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_READ_CEATA_DEVICE
 * 
 * No read access to CE-ATA device
 */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_E_NO_READ   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_READ_CEATA_DEVICE
 * 
 * Read access to CE-ATA device
 */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_E_READ      0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_READ_CEATA_DEVICE register field. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_READ_CEATA_DEVICE register field. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_MSB        22
/* The width in bits of the ALT_SDMMC_CMD_READ_CEATA_DEVICE register field. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_READ_CEATA_DEVICE register field value. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_SET_MSK    0x00400000
/* The mask used to clear the ALT_SDMMC_CMD_READ_CEATA_DEVICE register field value. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_CLR_MSK    0xffbfffff
/* The reset value of the ALT_SDMMC_CMD_READ_CEATA_DEVICE register field. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_READ_CEATA_DEVICE field value from a register. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_SDMMC_CMD_READ_CEATA_DEVICE register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_READ_CEATA_DEVICE_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : CCS_EXPECTED
 * 
 * 0-Interrupts are not enabled in CE-ATA device (nIEN = 1 in
 * 
 * ATA control register), or command does not expect CCS
 * 
 * from device
 * 
 * 1-Interrupts are enabled in CE-ATA device (nIEN = 0), and RW_BLK
 * 
 * command expects command completion signal from CE-ATA device
 * 
 * If the command expects Command Completion Signal (CCS) from the CE-ATA device,
 * the software should set this control bit.DWC_mobile_storage sets Data Transfer
 * Over (DTO) bit in RINTSTS register and generates interrupt to host if Data
 * Transfer Over interrupt is not masked.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                            
 * :-----------------------------------|:------|:----------------------------------------
 *  ALT_SDMMC_CMD_CCS_EXPECTED_E_FALSE | 0x0   | Command does not expect CCS from device
 *  ALT_SDMMC_CMD_CCS_EXPECTED_E_TRUE  | 0x1   | Expects CCS from device                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_CCS_EXPECTED
 * 
 * Command does not expect CCS from device
 */
#define ALT_SDMMC_CMD_CCS_EXPECTED_E_FALSE  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_CCS_EXPECTED
 * 
 * Expects CCS from device
 */
#define ALT_SDMMC_CMD_CCS_EXPECTED_E_TRUE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_CCS_EXPECTED register field. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_CCS_EXPECTED register field. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_MSB        23
/* The width in bits of the ALT_SDMMC_CMD_CCS_EXPECTED register field. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_CCS_EXPECTED register field value. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_SET_MSK    0x00800000
/* The mask used to clear the ALT_SDMMC_CMD_CCS_EXPECTED register field value. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SDMMC_CMD_CCS_EXPECTED register field. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_CCS_EXPECTED field value from a register. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SDMMC_CMD_CCS_EXPECTED register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_CCS_EXPECTED_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : ENABLE_BOOT
 * 
 * Enable Boot this bit should be set only for mandatory boot mode.
 * 
 * When Software sets this bit along with start_cmd, CIU starts the boot sequence
 * for the corresponding card by asserting the CMD line low. Do NOT set
 * disable_boot and enable_boot together.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description
 * :----------------------------------|:------|:------------
 *  ALT_SDMMC_CMD_ENABLE_BOOT_E_FALSE | 0x0   | No boot    
 *  ALT_SDMMC_CMD_ENABLE_BOOT_E_TRUE  | 0x1   | Enable boot
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_ENABLE_BOOT
 * 
 * No boot
 */
#define ALT_SDMMC_CMD_ENABLE_BOOT_E_FALSE   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_ENABLE_BOOT
 * 
 * Enable boot
 */
#define ALT_SDMMC_CMD_ENABLE_BOOT_E_TRUE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_ENABLE_BOOT register field. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_ENABLE_BOOT register field. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_MSB        24
/* The width in bits of the ALT_SDMMC_CMD_ENABLE_BOOT register field. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_ENABLE_BOOT register field value. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_SET_MSK    0x01000000
/* The mask used to clear the ALT_SDMMC_CMD_ENABLE_BOOT register field value. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SDMMC_CMD_ENABLE_BOOT register field. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_ENABLE_BOOT field value from a register. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SDMMC_CMD_ENABLE_BOOT register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_ENABLE_BOOT_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : EXPECT_BOOT_ACK
 * 
 * Expect Boot Acknowledge. When Software sets this bit along with
 * 
 * enable_boot, CIU expects a boot acknowledge start pattern of 0-1-0 from the
 * selected card.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                
 * :--------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_CMD_EXPECT_BOOT_ACK_E_FALSE | 0x0   | No boot acknowledgement    
 *  ALT_SDMMC_CMD_EXPECT_BOOT_ACK_E_TRUE  | 0x1   | Expect boot acknowledgement
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_EXPECT_BOOT_ACK
 * 
 * No boot acknowledgement
 */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_E_FALSE   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_EXPECT_BOOT_ACK
 * 
 * Expect boot acknowledgement
 */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_E_TRUE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_EXPECT_BOOT_ACK register field. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_EXPECT_BOOT_ACK register field. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_MSB        25
/* The width in bits of the ALT_SDMMC_CMD_EXPECT_BOOT_ACK register field. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_EXPECT_BOOT_ACK register field value. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_SET_MSK    0x02000000
/* The mask used to clear the ALT_SDMMC_CMD_EXPECT_BOOT_ACK register field value. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_CLR_MSK    0xfdffffff
/* The reset value of the ALT_SDMMC_CMD_EXPECT_BOOT_ACK register field. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_EXPECT_BOOT_ACK field value from a register. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_SDMMC_CMD_EXPECT_BOOT_ACK register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_EXPECT_BOOT_ACK_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : DISABLE_BOOT
 * 
 * Disable Boot. When software sets this bit along with start_cmd, CIU terminates
 * the boot operation. Do NOT set disable_boot and enable_boot together.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description              
 * :-----------------------------------|:------|:--------------------------
 *  ALT_SDMMC_CMD_DISABLE_BOOT_E_FALSE | 0x0   | No change                
 *  ALT_SDMMC_CMD_DISABLE_BOOT_E_TRUE  | 0x1   | Terminates boot operation
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_DISABLE_BOOT
 * 
 * No change
 */
#define ALT_SDMMC_CMD_DISABLE_BOOT_E_FALSE  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_DISABLE_BOOT
 * 
 * Terminates boot operation
 */
#define ALT_SDMMC_CMD_DISABLE_BOOT_E_TRUE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_DISABLE_BOOT register field. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_DISABLE_BOOT register field. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_MSB        26
/* The width in bits of the ALT_SDMMC_CMD_DISABLE_BOOT register field. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_DISABLE_BOOT register field value. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_SET_MSK    0x04000000
/* The mask used to clear the ALT_SDMMC_CMD_DISABLE_BOOT register field value. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_CLR_MSK    0xfbffffff
/* The reset value of the ALT_SDMMC_CMD_DISABLE_BOOT register field. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_DISABLE_BOOT field value from a register. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_SDMMC_CMD_DISABLE_BOOT register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_DISABLE_BOOT_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : BOOT_MODE
 * 
 * Boot Mode
 * 
 * 0 - Mandatory Boot operation
 * 
 * 1 - Alternate Boot operation
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description             
 * :------------------------------------|:------|:-------------------------
 *  ALT_SDMMC_CMD_BOOT_MODE_E_MANDATORY | 0x0   | Mandatory Boot operation
 *  ALT_SDMMC_CMD_BOOT_MODE_E_ALTERNATE | 0x1   | Alternate boot operation
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_BOOT_MODE
 * 
 * Mandatory Boot operation
 */
#define ALT_SDMMC_CMD_BOOT_MODE_E_MANDATORY 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_BOOT_MODE
 * 
 * Alternate boot operation
 */
#define ALT_SDMMC_CMD_BOOT_MODE_E_ALTERNATE 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_BOOT_MODE register field. */
#define ALT_SDMMC_CMD_BOOT_MODE_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_BOOT_MODE register field. */
#define ALT_SDMMC_CMD_BOOT_MODE_MSB        27
/* The width in bits of the ALT_SDMMC_CMD_BOOT_MODE register field. */
#define ALT_SDMMC_CMD_BOOT_MODE_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_BOOT_MODE register field value. */
#define ALT_SDMMC_CMD_BOOT_MODE_SET_MSK    0x08000000
/* The mask used to clear the ALT_SDMMC_CMD_BOOT_MODE register field value. */
#define ALT_SDMMC_CMD_BOOT_MODE_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_SDMMC_CMD_BOOT_MODE register field. */
#define ALT_SDMMC_CMD_BOOT_MODE_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_BOOT_MODE field value from a register. */
#define ALT_SDMMC_CMD_BOOT_MODE_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_SDMMC_CMD_BOOT_MODE register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_BOOT_MODE_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : VOLT_SWITCH
 * 
 * Voltage switch bit
 * 
 * 0 - No voltage switching
 * 
 * 1 - Voltage switching enabled; must be set for CMD11 only
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description              
 * :----------------------------------|:------|:--------------------------
 *  ALT_SDMMC_CMD_VOLT_SWITCH_E_FALSE | 0x0   | No Voltage switching     
 *  ALT_SDMMC_CMD_VOLT_SWITCH_E_TRUE  | 0x1   | Voltage switching enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_VOLT_SWITCH
 * 
 * No Voltage switching
 */
#define ALT_SDMMC_CMD_VOLT_SWITCH_E_FALSE   0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_VOLT_SWITCH
 * 
 * Voltage switching enabled
 */
#define ALT_SDMMC_CMD_VOLT_SWITCH_E_TRUE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_VOLT_SWITCH register field. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_VOLT_SWITCH register field. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_MSB        28
/* The width in bits of the ALT_SDMMC_CMD_VOLT_SWITCH register field. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_VOLT_SWITCH register field value. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_SET_MSK    0x10000000
/* The mask used to clear the ALT_SDMMC_CMD_VOLT_SWITCH register field value. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_CLR_MSK    0xefffffff
/* The reset value of the ALT_SDMMC_CMD_VOLT_SWITCH register field. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_VOLT_SWITCH field value from a register. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_SDMMC_CMD_VOLT_SWITCH register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_VOLT_SWITCH_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : USE_HOLD_REG
 * 
 * Use Hold Register
 * 
 * 0 - CMD and DATA sent to card bypassing HOLD Register
 * 
 * 1 - CMD and DATA sent to card through the HOLD Register
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                               
 * :-----------------------------------|:------|:-------------------------------------------
 *  ALT_SDMMC_CMD_USE_HOLD_REG_E_FALSE | 0x0   | CMD and DATA sent to card bypassing HOLD  
 * :                                   |       | Register                                  
 *  ALT_SDMMC_CMD_USE_HOLD_REG_E_TRUE  | 0x1   | CMD and DATA sent to card through the HOLD
 * :                                   |       | Register                                  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_USE_HOLD_REG
 * 
 * CMD and DATA sent to card bypassing HOLD Register
 */
#define ALT_SDMMC_CMD_USE_HOLD_REG_E_FALSE  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_USE_HOLD_REG
 * 
 * CMD and DATA sent to card through the HOLD Register
 */
#define ALT_SDMMC_CMD_USE_HOLD_REG_E_TRUE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_USE_HOLD_REG register field. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_USE_HOLD_REG register field. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_MSB        29
/* The width in bits of the ALT_SDMMC_CMD_USE_HOLD_REG register field. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_USE_HOLD_REG register field value. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_SET_MSK    0x20000000
/* The mask used to clear the ALT_SDMMC_CMD_USE_HOLD_REG register field value. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_CLR_MSK    0xdfffffff
/* The reset value of the ALT_SDMMC_CMD_USE_HOLD_REG register field. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_RESET      0x1
/* Extracts the ALT_SDMMC_CMD_USE_HOLD_REG field value from a register. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_SDMMC_CMD_USE_HOLD_REG register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_USE_HOLD_REG_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : START_CMD
 * 
 * Start command. Once command is taken by CIU, bit is cleared.
 * 
 * When bit is set, host should not attempt to write to any command registers. If
 * write is attempted, hardware lock error is set in raw interrupt register.
 * 
 * Once command is sent and response is received from SD_MMC_CEATA cards, Command
 * Done bit is set in raw interrupt
 * 
 * register.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                                   
 * :--------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_CMD_START_CMD_E_FALSE | 0x0   | Auto cleared, once the command is taken by CIU
 *  ALT_SDMMC_CMD_START_CMD_E_TRUE  | 0x1   | Start command                                 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CMD_START_CMD
 * 
 * Auto cleared, once the command is taken by CIU
 */
#define ALT_SDMMC_CMD_START_CMD_E_FALSE 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CMD_START_CMD
 * 
 * Start command
 */
#define ALT_SDMMC_CMD_START_CMD_E_TRUE  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CMD_START_CMD register field. */
#define ALT_SDMMC_CMD_START_CMD_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CMD_START_CMD register field. */
#define ALT_SDMMC_CMD_START_CMD_MSB        31
/* The width in bits of the ALT_SDMMC_CMD_START_CMD register field. */
#define ALT_SDMMC_CMD_START_CMD_WIDTH      1
/* The mask used to set the ALT_SDMMC_CMD_START_CMD register field value. */
#define ALT_SDMMC_CMD_START_CMD_SET_MSK    0x80000000
/* The mask used to clear the ALT_SDMMC_CMD_START_CMD register field value. */
#define ALT_SDMMC_CMD_START_CMD_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SDMMC_CMD_START_CMD register field. */
#define ALT_SDMMC_CMD_START_CMD_RESET      0x0
/* Extracts the ALT_SDMMC_CMD_START_CMD field value from a register. */
#define ALT_SDMMC_CMD_START_CMD_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SDMMC_CMD_START_CMD register field value suitable for setting the register. */
#define ALT_SDMMC_CMD_START_CMD_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SDMMC_CMD.
 */
struct ALT_SDMMC_CMD_s
{
    volatile uint32_t  CMD_INDEX                   :  6;  /* ALT_SDMMC_CMD_CMD_INDEX */
    volatile uint32_t  RESPONSE_EXPECT             :  1;  /* ALT_SDMMC_CMD_RESPONSE_EXPECT */
    volatile uint32_t  RESPONSE_LENGTH             :  1;  /* ALT_SDMMC_CMD_RESPONSE_LENGTH */
    volatile uint32_t  CHECK_RESPONSE_CRC          :  1;  /* ALT_SDMMC_CMD_CHECK_RESPONSE_CRC */
    volatile uint32_t  DATA_EXPECTED               :  1;  /* ALT_SDMMC_CMD_DATA_EXPECTED */
    volatile uint32_t  READ_WRITE                  :  1;  /* ALT_SDMMC_CMD_READ_WRITE */
    volatile uint32_t  TRANSFER_MODE               :  1;  /* ALT_SDMMC_CMD_TRANSFER_MODE */
    volatile uint32_t  SEND_AUTO_STOP              :  1;  /* ALT_SDMMC_CMD_SEND_AUTO_STOP */
    volatile uint32_t  WAIT_PRVDATA_COMPLETE       :  1;  /* ALT_SDMMC_CMD_WAIT_PRVDATA_COMPLETE */
    volatile uint32_t  STOP_ABORT_CMD              :  1;  /* ALT_SDMMC_CMD_STOP_ABORT_CMD */
    volatile uint32_t  SEND_INITIALIZATION         :  1;  /* ALT_SDMMC_CMD_SEND_INITIALIZATION */
    volatile uint32_t  CARD_NUMBER                 :  5;  /* ALT_SDMMC_CMD_CARD_NUMBER */
    volatile uint32_t  UPDATE_CLOCK_REGISTERS_ONLY :  1;  /* ALT_SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY */
    volatile uint32_t  READ_CEATA_DEVICE           :  1;  /* ALT_SDMMC_CMD_READ_CEATA_DEVICE */
    volatile uint32_t  CCS_EXPECTED                :  1;  /* ALT_SDMMC_CMD_CCS_EXPECTED */
    volatile uint32_t  ENABLE_BOOT                 :  1;  /* ALT_SDMMC_CMD_ENABLE_BOOT */
    volatile uint32_t  EXPECT_BOOT_ACK             :  1;  /* ALT_SDMMC_CMD_EXPECT_BOOT_ACK */
    volatile uint32_t  DISABLE_BOOT                :  1;  /* ALT_SDMMC_CMD_DISABLE_BOOT */
    volatile uint32_t  BOOT_MODE                   :  1;  /* ALT_SDMMC_CMD_BOOT_MODE */
    volatile uint32_t  VOLT_SWITCH                 :  1;  /* ALT_SDMMC_CMD_VOLT_SWITCH */
    volatile uint32_t  USE_HOLD_REG                :  1;  /* ALT_SDMMC_CMD_USE_HOLD_REG */
    uint32_t                                       :  1;  /* *UNDEFINED* */
    volatile uint32_t  START_CMD                   :  1;  /* ALT_SDMMC_CMD_START_CMD */
};

/* The typedef declaration for register ALT_SDMMC_CMD. */
typedef struct ALT_SDMMC_CMD_s  ALT_SDMMC_CMD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CMD register. */
#define ALT_SDMMC_CMD_RESET       0x20000000
/* The byte offset of the ALT_SDMMC_CMD register from the beginning of the component. */
#define ALT_SDMMC_CMD_OFST        0x2c
/* The address of the ALT_SDMMC_CMD register. */
#define ALT_SDMMC_CMD_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CMD_OFST))

/*
 * Register : Response Register 0 - RESP0
 * 
 * Response Register 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_RESP0_RESPONSE0
 * 
 */
/*
 * Field : RESPONSE0
 * 
 * Bit[31:0] of response
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RESP0_RESPONSE0 register field. */
#define ALT_SDMMC_RESP0_RESPONSE0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RESP0_RESPONSE0 register field. */
#define ALT_SDMMC_RESP0_RESPONSE0_MSB        31
/* The width in bits of the ALT_SDMMC_RESP0_RESPONSE0 register field. */
#define ALT_SDMMC_RESP0_RESPONSE0_WIDTH      32
/* The mask used to set the ALT_SDMMC_RESP0_RESPONSE0 register field value. */
#define ALT_SDMMC_RESP0_RESPONSE0_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_RESP0_RESPONSE0 register field value. */
#define ALT_SDMMC_RESP0_RESPONSE0_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_RESP0_RESPONSE0 register field. */
#define ALT_SDMMC_RESP0_RESPONSE0_RESET      0x0
/* Extracts the ALT_SDMMC_RESP0_RESPONSE0 field value from a register. */
#define ALT_SDMMC_RESP0_RESPONSE0_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_RESP0_RESPONSE0 register field value suitable for setting the register. */
#define ALT_SDMMC_RESP0_RESPONSE0_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_RESP0.
 */
struct ALT_SDMMC_RESP0_s
{
    const volatile uint32_t  RESPONSE0 : 32;  /* ALT_SDMMC_RESP0_RESPONSE0 */
};

/* The typedef declaration for register ALT_SDMMC_RESP0. */
typedef struct ALT_SDMMC_RESP0_s  ALT_SDMMC_RESP0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_RESP0 register. */
#define ALT_SDMMC_RESP0_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_RESP0 register from the beginning of the component. */
#define ALT_SDMMC_RESP0_OFST        0x30
/* The address of the ALT_SDMMC_RESP0 register. */
#define ALT_SDMMC_RESP0_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_RESP0_OFST))

/*
 * Register : Response Register 1 - RESP1
 * 
 * Response Register 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_RESP1_RESPONSE1
 * 
 */
/*
 * Field : RESPONSE1
 * 
 * Register represents bit[63:32] of long response.
 * 
 * When CIU sends auto-stop command, then response is saved in register. Response
 * for previous command sent by host is still preserved in Response 0 register.
 * Additional auto-stop issued only for data transfer commands, and response type
 * is always "short" for them.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RESP1_RESPONSE1 register field. */
#define ALT_SDMMC_RESP1_RESPONSE1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RESP1_RESPONSE1 register field. */
#define ALT_SDMMC_RESP1_RESPONSE1_MSB        31
/* The width in bits of the ALT_SDMMC_RESP1_RESPONSE1 register field. */
#define ALT_SDMMC_RESP1_RESPONSE1_WIDTH      32
/* The mask used to set the ALT_SDMMC_RESP1_RESPONSE1 register field value. */
#define ALT_SDMMC_RESP1_RESPONSE1_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_RESP1_RESPONSE1 register field value. */
#define ALT_SDMMC_RESP1_RESPONSE1_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_RESP1_RESPONSE1 register field. */
#define ALT_SDMMC_RESP1_RESPONSE1_RESET      0x0
/* Extracts the ALT_SDMMC_RESP1_RESPONSE1 field value from a register. */
#define ALT_SDMMC_RESP1_RESPONSE1_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_RESP1_RESPONSE1 register field value suitable for setting the register. */
#define ALT_SDMMC_RESP1_RESPONSE1_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_RESP1.
 */
struct ALT_SDMMC_RESP1_s
{
    const volatile uint32_t  RESPONSE1 : 32;  /* ALT_SDMMC_RESP1_RESPONSE1 */
};

/* The typedef declaration for register ALT_SDMMC_RESP1. */
typedef struct ALT_SDMMC_RESP1_s  ALT_SDMMC_RESP1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_RESP1 register. */
#define ALT_SDMMC_RESP1_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_RESP1 register from the beginning of the component. */
#define ALT_SDMMC_RESP1_OFST        0x34
/* The address of the ALT_SDMMC_RESP1 register. */
#define ALT_SDMMC_RESP1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_RESP1_OFST))

/*
 * Register : Response Register 2 - RESP2
 * 
 * Response Register 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_RESP2_RESPONSE2
 * 
 */
/*
 * Field : RESPONSE2
 * 
 * Bit[95:64] of long response
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RESP2_RESPONSE2 register field. */
#define ALT_SDMMC_RESP2_RESPONSE2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RESP2_RESPONSE2 register field. */
#define ALT_SDMMC_RESP2_RESPONSE2_MSB        31
/* The width in bits of the ALT_SDMMC_RESP2_RESPONSE2 register field. */
#define ALT_SDMMC_RESP2_RESPONSE2_WIDTH      32
/* The mask used to set the ALT_SDMMC_RESP2_RESPONSE2 register field value. */
#define ALT_SDMMC_RESP2_RESPONSE2_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_RESP2_RESPONSE2 register field value. */
#define ALT_SDMMC_RESP2_RESPONSE2_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_RESP2_RESPONSE2 register field. */
#define ALT_SDMMC_RESP2_RESPONSE2_RESET      0x0
/* Extracts the ALT_SDMMC_RESP2_RESPONSE2 field value from a register. */
#define ALT_SDMMC_RESP2_RESPONSE2_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_RESP2_RESPONSE2 register field value suitable for setting the register. */
#define ALT_SDMMC_RESP2_RESPONSE2_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_RESP2.
 */
struct ALT_SDMMC_RESP2_s
{
    const volatile uint32_t  RESPONSE2 : 32;  /* ALT_SDMMC_RESP2_RESPONSE2 */
};

/* The typedef declaration for register ALT_SDMMC_RESP2. */
typedef struct ALT_SDMMC_RESP2_s  ALT_SDMMC_RESP2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_RESP2 register. */
#define ALT_SDMMC_RESP2_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_RESP2 register from the beginning of the component. */
#define ALT_SDMMC_RESP2_OFST        0x38
/* The address of the ALT_SDMMC_RESP2 register. */
#define ALT_SDMMC_RESP2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_RESP2_OFST))

/*
 * Register : Response Register 3 - RESP3
 * 
 * Response Register 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_RESP3_RESPONSE3
 * 
 */
/*
 * Field : RESPONSE3
 * 
 * Bit[127:96] of long response
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RESP3_RESPONSE3 register field. */
#define ALT_SDMMC_RESP3_RESPONSE3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RESP3_RESPONSE3 register field. */
#define ALT_SDMMC_RESP3_RESPONSE3_MSB        31
/* The width in bits of the ALT_SDMMC_RESP3_RESPONSE3 register field. */
#define ALT_SDMMC_RESP3_RESPONSE3_WIDTH      32
/* The mask used to set the ALT_SDMMC_RESP3_RESPONSE3 register field value. */
#define ALT_SDMMC_RESP3_RESPONSE3_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_RESP3_RESPONSE3 register field value. */
#define ALT_SDMMC_RESP3_RESPONSE3_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_RESP3_RESPONSE3 register field. */
#define ALT_SDMMC_RESP3_RESPONSE3_RESET      0x0
/* Extracts the ALT_SDMMC_RESP3_RESPONSE3 field value from a register. */
#define ALT_SDMMC_RESP3_RESPONSE3_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_RESP3_RESPONSE3 register field value suitable for setting the register. */
#define ALT_SDMMC_RESP3_RESPONSE3_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_RESP3.
 */
struct ALT_SDMMC_RESP3_s
{
    const volatile uint32_t  RESPONSE3 : 32;  /* ALT_SDMMC_RESP3_RESPONSE3 */
};

/* The typedef declaration for register ALT_SDMMC_RESP3. */
typedef struct ALT_SDMMC_RESP3_s  ALT_SDMMC_RESP3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_RESP3 register. */
#define ALT_SDMMC_RESP3_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_RESP3 register from the beginning of the component. */
#define ALT_SDMMC_RESP3_OFST        0x3c
/* The address of the ALT_SDMMC_RESP3 register. */
#define ALT_SDMMC_RESP3_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_RESP3_OFST))

/*
 * Register : Masked Interrupt Status Register - MINTSTS
 * 
 * Name: Masked Interrupt Status Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x40
 * 
 * Read/write access: read
 * 
 * MISTATS = RIINTSTS and INTMASK
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset | Description                                           
 * :-----|:-------|:------|:-------------------------------------------------------
 *  [0]  | R      | 0x0   | ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT               
 *  [1]  | R      | 0x0   | ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT            
 *  [2]  | R      | 0x0   | ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT              
 *  [3]  | R      | 0x0   | ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT        
 *  [4]  | R      | 0x0   | ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT
 *  [5]  | R      | 0x0   | ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT 
 *  [6]  | R      | 0x0   | ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT        
 *  [7]  | R      | 0x0   | ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT            
 *  [8]  | R      | 0x0   | ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT          
 *  [9]  | R      | 0x0   | ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT         
 *  [10] | R      | 0x0   | ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT              
 *  [11] | R      | 0x0   | ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT       
 *  [12] | R      | 0x0   | ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT     
 *  [13] | R      | 0x0   | ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT   
 *  [14] | R      | 0x0   | ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT         
 *  [15] | R      | 0x0   | ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT             
 *  [16] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0                
 *  [17] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1                
 *  [18] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2                
 *  [19] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3                
 *  [20] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4                
 *  [21] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5                
 *  [22] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6                
 *  [23] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7                
 *  [24] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8                
 *  [25] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9                
 *  [26] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10               
 *  [27] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11               
 *  [28] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12               
 *  [29] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13               
 *  [30] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14               
 *  [31] | R      | 0x0   | ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15               
 * 
 */
/*
 * Field : CARD_DETECT_INTERRUPT
 * 
 * bit 0  Card detect (CD)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                                    
 * :---------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_E_ENABLED  | 0x1   | CARD DETECT Interrupt enabled only if          
 * :                                                   |       | corresponding bit in interrupt mask register is
 * :                                                   |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT
 * 
 * CARD DETECT Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_MSB        0
/* The width in bits of the ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RESPONSE_ERROR_INTERRUPT
 * 
 * bit 1  Response error (RE)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description                                    
 * :------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_E_ENABLED  | 0x1   | Response error Interrupt enabled only if       
 * :                                                      |       | corresponding bit in interrupt mask register is
 * :                                                      |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT
 * 
 * Response error Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_MSB        1
/* The width in bits of the ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : COMMAND_DONE_INTERRUPT
 * 
 * bit 2  Command done (CD)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                | Value | Description                                    
 * :----------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_E_ENABLED  | 0x1   | Command done Interrupt enabled only if         
 * :                                                    |       | corresponding bit in interrupt mask register is
 * :                                                    |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT
 * 
 * Command done Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_MSB        2
/* The width in bits of the ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DATA_TRANSFER_OVER_INTERRUPT
 * 
 * bit 3  Data transfer over (DTO)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                      | Value | Description                                    
 * :----------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_E_ENABLED  | 0x1   | Data transfer over Interrupt enabled only if   
 * :                                                          |       | corresponding bit in interrupt mask register is
 * :                                                          |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT
 * 
 * Data transfer over Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_MSB        3
/* The width in bits of the ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_SET_MSK    0x00000008
/* The mask used to clear the ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT
 * 
 * bit 4  Transmit FIFO data request (TXDR)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                              | Value | Description                                 
 * :------------------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                          
 *  ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_E_ENABLED  | 0x1   | Transmit FIFO data request Interrupt enabled
 * :                                                                  |       | only if corresponding bit in interrupt mask 
 * :                                                                  |       | register is set                             
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT
 * 
 * Transmit FIFO data request Interrupt enabled only if corresponding bit in
 * interrupt mask register is set
 */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_MSB        4
/* The width in bits of the ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : RECEIVE_FIFO_DATA_REQUEST_INTERRUPT
 * 
 * bit 5  Receive FIFO data request (RXDR)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                             | Value | Description                                     
 * :-----------------------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                              
 *  ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_E_ENABLED  | 0x1   | Receive FIFO data request Interrupt enabled only
 * :                                                                 |       | if corresponding bit in interrupt mask register 
 * :                                                                 |       | is set                                          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT
 * 
 * Receive FIFO data request Interrupt enabled only if corresponding bit in
 * interrupt mask register is set
 */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_MSB        5
/* The width in bits of the ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RESPONSE_CRC_ERROR_INTERRUPT
 * 
 * bit 6  Response CRC error (RCRC)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                      | Value | Description                                    
 * :----------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_E_ENABLED  | 0x1   | Response CRC error Interrupt enabled only if   
 * :                                                          |       | corresponding bit in interrupt mask register is
 * :                                                          |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT
 * 
 * Response CRC error Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_MSB        6
/* The width in bits of the ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : DATA_CRC_ERROR_INTERRUPT
 * 
 * bit 7  Data CRC error (DCRC)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description                                    
 * :------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_E_ENABLED  | 0x1   | Data CRC error Interrupt enabled only if       
 * :                                                      |       | corresponding bit in interrupt mask register is
 * :                                                      |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT
 * 
 * Data CRC error Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_MSB        7
/* The width in bits of the ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RESPONSE_TIMEOUT_INTERRUPT
 * 
 * bit 8  Response timeout (RTO)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description                                    
 * :--------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_E_ENABLED  | 0x1   | Response timeout  Interrupt enabled only if    
 * :                                                        |       | corresponding bit in interrupt mask register is
 * :                                                        |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT
 * 
 * Response timeout  Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_MSB        8
/* The width in bits of the ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : DATA_READ_TIMEOUT_INTERRUPT
 * 
 * bit 9  Data read timeout (DRTO)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                     | Value | Description                                    
 * :---------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_E_ENABLED  | 0x1   | Data read timeout Interrupt enabled only if    
 * :                                                         |       | corresponding bit in interrupt mask register is
 * :                                                         |       | set                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT
 * 
 * Data read timeout Interrupt enabled only if corresponding bit in interrupt mask
 * register is set
 */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_MSB        9
/* The width in bits of the ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : HOST_TIMEOUT_INTERRUPT
 * 
 * bit 10  Data starvation by host timeout (HTO)/Volt_switch_int
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                | Value | Description                                   
 * :----------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                            
 *  ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_E_ENABLED  | 0x1   | Data starvation by host timeout Interrupt     
 * :                                                    |       | enabled only if corresponding bit in interrupt
 * :                                                    |       | mask register is set                          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT
 * 
 * Data starvation by host timeout Interrupt enabled only if corresponding bit in
 * interrupt mask register is set
 */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_MSB        10
/* The width in bits of the ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : FIFO_UNDER_OVER_RUN_INTERRUPT
 * 
 * bit 11  FIFO underrun/overrun error (FRUN)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                       | Value | Description                                  
 * :-----------------------------------------------------------|:------|:----------------------------------------------
 *  ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                           
 *  ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_E_ENABLED  | 0x1   | FIFO underrun/overrun error Interrupt enabled
 * :                                                           |       | only if corresponding bit in interrupt mask  
 * :                                                           |       | register is set                              
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT
 * 
 * FIFO underrun/overrun error Interrupt enabled only if corresponding bit in
 * interrupt mask register is set
 */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_MSB        11
/* The width in bits of the ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : HARDWARE_LOCKED_WRITE_INTERRUPT
 * 
 * bit 12  Hardware locked write error (HLE)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                         | Value | Description                                   
 * :-------------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                            
 *  ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_E_ENABLED  | 0x1   | Hardware locked write error  Interrupt enabled
 * :                                                             |       | only if corresponding bit in interrupt mask   
 * :                                                             |       | register is set                               
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT
 * 
 * Hardware locked write error  Interrupt enabled only if corresponding bit in
 * interrupt mask register is set
 */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_MSB        12
/* The width in bits of the ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_SET_MSK    0x00001000
/* The mask used to clear the ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_CLR_MSK    0xffffefff
/* The reset value of the ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : BUSY_COMPLETE_INTERRUPT_INTERRUPT
 * 
 * bit 13  Start Bit Error(SBE)/Busy Complete Interrupt (BCI)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                           | Value | Description                                   
 * :---------------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                            
 *  ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_E_ENABLED  | 0x1   | Start Bit Error(SBE)/Busy Complete Interrupt  
 * :                                                               |       | enabled only if corresponding bit in interrupt
 * :                                                               |       | mask register is set                          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT
 * 
 * Start Bit Error(SBE)/Busy Complete Interrupt enabled only if corresponding bit
 * in interrupt mask register is set
 */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_MSB        13
/* The width in bits of the ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_SET_MSK    0x00002000
/* The mask used to clear the ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : AUTO_COMMAND_DONE_INTERRUPT
 * 
 * bit 14  Auto command done (ACD)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                     | Value | Description                                    
 * :---------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                             
 *  ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_E_ENABLED  | 0x1   | ACD Interrupt enabled only if corresponding bit
 * :                                                         |       | in interrupt mask register is set              
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT
 * 
 * ACD Interrupt enabled only if corresponding bit in interrupt mask register is
 * set
 */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_MSB        14
/* The width in bits of the ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_SET_MSK    0x00004000
/* The mask used to clear the ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : END_BIT_ERROR_INTERRUPT
 * 
 * Interrupt enabled only if corresponding bit in interrupt mask register is set.
 * 
 * bit 15  End-bit error (read)/write no CRC (EBE)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description                                   
 * :-----------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_E_DISABLED | 0x0   | Interrupt disabled                            
 *  ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_E_ENABLED  | 0x1   | End-bit error (read)/write no CRC (EBE)       
 * :                                                     |       | Interrupt enabled only if corresponding bit in
 * :                                                     |       | interrupt mask register is set                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT
 * 
 * Interrupt disabled
 */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT
 * 
 * End-bit error (read)/write no CRC (EBE) Interrupt enabled only if corresponding
 * bit in interrupt mask register is set
 */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_MSB        15
/* The width in bits of the ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_SET_MSK    0x00008000
/* The mask used to clear the ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT register field value. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT register field. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT field value from a register. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : SDIO_INTERRUPT_CARD0
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_MSB        16
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : SDIO_INTERRUPT_CARD1
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_MSB        17
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : SDIO_INTERRUPT_CARD2
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_MSB        18
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_SET_MSK    0x00040000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : SDIO_INTERRUPT_CARD3
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_MSB        19
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_SET_MSK    0x00080000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : SDIO_INTERRUPT_CARD4
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_MSB        20
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_SET_MSK    0x00100000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_CLR_MSK    0xffefffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : SDIO_INTERRUPT_CARD5
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_MSB        21
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_SET_MSK    0x00200000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_CLR_MSK    0xffdfffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : SDIO_INTERRUPT_CARD6
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_MSB        22
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_SET_MSK    0x00400000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_CLR_MSK    0xffbfffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : SDIO_INTERRUPT_CARD7
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_MSB        23
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_SET_MSK    0x00800000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : SDIO_INTERRUPT_CARD8
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_MSB        24
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_SET_MSK    0x01000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : SDIO_INTERRUPT_CARD9
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_MSB        25
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_SET_MSK    0x02000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_CLR_MSK    0xfdffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : SDIO_INTERRUPT_CARD10
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_MSB        26
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_SET_MSK    0x04000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_CLR_MSK    0xfbffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : SDIO_INTERRUPT_CARD11
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_MSB        27
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_SET_MSK    0x08000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : SDIO_INTERRUPT_CARD12
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_MSB        28
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_SET_MSK    0x10000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_CLR_MSK    0xefffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : SDIO_INTERRUPT_CARD13
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_MSB        29
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_SET_MSK    0x20000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_CLR_MSK    0xdfffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : SDIO_INTERRUPT_CARD14
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_MSB        30
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_SET_MSK    0x40000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : SDIO_INTERRUPT_CARD15
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. SDIO interrupt for card enabled only if
 * corresponding sdio_int_mask bit is set in Interrupt mask register (mask bit 1
 * enables interrupt; 0 masks interrupt).
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_MSB        31
/* The width in bits of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_WIDTH      1
/* The mask used to set the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_SET_MSK    0x80000000
/* The mask used to clear the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 register field value. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_RESET      0x0
/* Extracts the ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 field value from a register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 register field value suitable for setting the register. */
#define ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SDMMC_MINTSTS.
 */
struct ALT_SDMMC_MINTSTS_s
{
    const volatile uint32_t  CARD_DETECT_INTERRUPT                :  1;  /* ALT_SDMMC_MINTSTS_CARD_DETECT_INTERRUPT */
    const volatile uint32_t  RESPONSE_ERROR_INTERRUPT             :  1;  /* ALT_SDMMC_MINTSTS_RESPONSE_ERROR_INTERRUPT */
    const volatile uint32_t  COMMAND_DONE_INTERRUPT               :  1;  /* ALT_SDMMC_MINTSTS_COMMAND_DONE_INTERRUPT */
    const volatile uint32_t  DATA_TRANSFER_OVER_INTERRUPT         :  1;  /* ALT_SDMMC_MINTSTS_DATA_TRANSFER_OVER_INTERRUPT */
    const volatile uint32_t  TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT :  1;  /* ALT_SDMMC_MINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_INTERRUPT */
    const volatile uint32_t  RECEIVE_FIFO_DATA_REQUEST_INTERRUPT  :  1;  /* ALT_SDMMC_MINTSTS_RECEIVE_FIFO_DATA_REQUEST_INTERRUPT */
    const volatile uint32_t  RESPONSE_CRC_ERROR_INTERRUPT         :  1;  /* ALT_SDMMC_MINTSTS_RESPONSE_CRC_ERROR_INTERRUPT */
    const volatile uint32_t  DATA_CRC_ERROR_INTERRUPT             :  1;  /* ALT_SDMMC_MINTSTS_DATA_CRC_ERROR_INTERRUPT */
    const volatile uint32_t  RESPONSE_TIMEOUT_INTERRUPT           :  1;  /* ALT_SDMMC_MINTSTS_RESPONSE_TIMEOUT_INTERRUPT */
    const volatile uint32_t  DATA_READ_TIMEOUT_INTERRUPT          :  1;  /* ALT_SDMMC_MINTSTS_DATA_READ_TIMEOUT_INTERRUPT */
    const volatile uint32_t  HOST_TIMEOUT_INTERRUPT               :  1;  /* ALT_SDMMC_MINTSTS_HOST_TIMEOUT_INTERRUPT */
    const volatile uint32_t  FIFO_UNDER_OVER_RUN_INTERRUPT        :  1;  /* ALT_SDMMC_MINTSTS_FIFO_UNDER_OVER_RUN_INTERRUPT */
    const volatile uint32_t  HARDWARE_LOCKED_WRITE_INTERRUPT      :  1;  /* ALT_SDMMC_MINTSTS_HARDWARE_LOCKED_WRITE_INTERRUPT */
    const volatile uint32_t  BUSY_COMPLETE_INTERRUPT_INTERRUPT    :  1;  /* ALT_SDMMC_MINTSTS_BUSY_COMPLETE_INTERRUPT_INTERRUPT */
    const volatile uint32_t  AUTO_COMMAND_DONE_INTERRUPT          :  1;  /* ALT_SDMMC_MINTSTS_AUTO_COMMAND_DONE_INTERRUPT */
    const volatile uint32_t  END_BIT_ERROR_INTERRUPT              :  1;  /* ALT_SDMMC_MINTSTS_END_BIT_ERROR_INTERRUPT */
    const volatile uint32_t  SDIO_INTERRUPT_CARD0                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD0 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD1                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD1 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD2                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD2 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD3                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD3 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD4                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD4 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD5                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD5 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD6                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD6 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD7                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD7 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD8                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD8 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD9                 :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD9 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD10                :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD10 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD11                :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD11 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD12                :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD12 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD13                :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD13 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD14                :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD14 */
    const volatile uint32_t  SDIO_INTERRUPT_CARD15                :  1;  /* ALT_SDMMC_MINTSTS_SDIO_INTERRUPT_CARD15 */
};

/* The typedef declaration for register ALT_SDMMC_MINTSTS. */
typedef struct ALT_SDMMC_MINTSTS_s  ALT_SDMMC_MINTSTS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_MINTSTS register. */
#define ALT_SDMMC_MINTSTS_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_MINTSTS register from the beginning of the component. */
#define ALT_SDMMC_MINTSTS_OFST        0x40
/* The address of the ALT_SDMMC_MINTSTS register. */
#define ALT_SDMMC_MINTSTS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_MINTSTS_OFST))

/*
 * Register : Raw Interrupt Status Register - RINTSTS
 * 
 * Name: Raw Interrupt Status Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x44
 * 
 * Read/write access: write/read
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset | Description                                        
 * :-----|:-------|:------|:----------------------------------------------------
 *  [0]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS               
 *  [1]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS            
 *  [2]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS              
 *  [3]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS        
 *  [4]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS
 *  [5]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS 
 *  [6]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS        
 *  [7]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS            
 *  [8]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS          
 *  [9]  | RW     | 0x0   | ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS         
 *  [10] | RW     | 0x0   | ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS              
 *  [11] | RW     | 0x0   | ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS       
 *  [12] | RW     | 0x0   | ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS     
 *  [13] | RW     | 0x0   | ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS             
 *  [14] | RW     | 0x0   | ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS         
 *  [15] | RW     | 0x0   | ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS             
 *  [16] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0             
 *  [17] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1             
 *  [18] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2             
 *  [19] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3             
 *  [20] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4             
 *  [21] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5             
 *  [22] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6             
 *  [23] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7             
 *  [24] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8             
 *  [25] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9             
 *  [26] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10            
 *  [27] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11            
 *  [28] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12            
 *  [29] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13            
 *  [30] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14            
 *  [31] | RW     | 0x0   | ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15            
 * 
 */
/*
 * Field : CARD_DETECT_STATUS
 * 
 * bit 0  Card detect (CD)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description                                    
 * :------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_E_DISABLED | 0x0   | Card detect Interrupt is not raised ;STATUS is 
 * :                                                |       | logged regardless of interrupt mask status ,and
 * :                                                |       | value of '0' write to bit leaves bit intact    
 *  ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_E_ENABLED  | 0x1   | CARD DETECT STATUS of 1 indicates interrupt is 
 * :                                                |       | raised and writes of value 1 to bit clears the 
 * :                                                |       | status bit                                     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS
 * 
 * Card detect Interrupt is not raised ;STATUS is logged regardless of interrupt
 * mask status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS
 * 
 * CARD DETECT STATUS of 1 indicates interrupt is raised and writes of value 1 to
 * bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_MSB        0
/* The width in bits of the ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RESPONSE_ERROR_STATUS
 * 
 * bit 1  Response error (RE)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                                   
 * :---------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_E_DISABLED | 0x0   | RE Interrupt is not raised ;STATUS is logged  
 * :                                                   |       | regardless of interrupt mask status ,and value
 * :                                                   |       | of '0' write to bit leaves bit intact         
 *  ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_E_ENABLED  | 0x1   | Response error STATUS of 1 indicates interrupt
 * :                                                   |       | is raised and writes of value 1 to bit clears 
 * :                                                   |       | the status bit                                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS
 * 
 * RE Interrupt is not raised ;STATUS is logged regardless of interrupt mask status
 * ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS
 * 
 * Response error STATUS of 1 indicates interrupt is raised and writes of value 1
 * to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_MSB        1
/* The width in bits of the ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : COMMAND_DONE_STATUS
 * 
 * bit 2  Command done (CD)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                                    
 * :-------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_E_DISABLED | 0x0   | CD Interrupt is not raised ;STATUS is logged   
 * :                                                 |       | regardless of interrupt mask status ,and value 
 * :                                                 |       | of '0' write to bit leaves bit intact          
 *  ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_E_ENABLED  | 0x1   | Command done STATUS of 1 indicates interrupt is
 * :                                                 |       | raised and writes of value 1 to bit clears the 
 * :                                                 |       | status bit                                     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS
 * 
 * CD Interrupt is not raised ;STATUS is logged regardless of interrupt mask status
 * ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS
 * 
 * Command done STATUS of 1 indicates interrupt is raised and writes of value 1 to
 * bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_MSB        2
/* The width in bits of the ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DATA_TRANSFER_OVER_STATUS
 * 
 * bit 3  Data transfer over (DTO)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description                                     
 * :-------------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_E_DISABLED | 0x0   | DTO Interrupt is not raised ;STATUS is logged   
 * :                                                       |       | regardless of interrupt mask status ,and value  
 * :                                                       |       | of '0' write to bit leaves bit intact           
 *  ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_E_ENABLED  | 0x1   | Data transfer over STATUS of 1 indicates        
 * :                                                       |       | interrupt is raised and writes of value 1 to bit
 * :                                                       |       | clears the status bit                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS
 * 
 * DTO Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS
 * 
 * Data transfer over STATUS of 1 indicates interrupt is raised and writes of value
 * 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_MSB        3
/* The width in bits of the ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_SET_MSK    0x00000008
/* The mask used to clear the ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : TRANSMIT_RECEIVE_FIFO_DATA_STATUS
 * 
 * bit 4  Transmit FIFO data request (TXDR)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                           | Value | Description                                     
 * :---------------------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_E_DISABLED | 0x0   | TXDR Interrupt is not raised ;STATUS is logged  
 * :                                                               |       | regardless of interrupt mask status ,and value  
 * :                                                               |       | of '0' write to bit leaves bit intact           
 *  ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_E_ENABLED  | 0x1   | Transmit FIFO data request STATUS of 1 indicates
 * :                                                               |       | interrupt is raised and writes of value 1 to bit
 * :                                                               |       | clears the status bit                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS
 * 
 * TXDR Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS
 * 
 * Transmit FIFO data request STATUS of 1 indicates interrupt is raised and writes
 * of value 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS register field. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS register field. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_MSB        4
/* The width in bits of the ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS register field. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS register field. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : RECEIVE_FIFO_DATA_REQUEST_STATUS
 * 
 * bit 5  Receive FIFO data request (RXDR)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                          | Value | Description                                     
 * :--------------------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_E_DISABLED | 0x0   | RXDR Interrupt is not raised ;STATUS is logged  
 * :                                                              |       | regardless of interrupt mask status ,and value  
 * :                                                              |       | of '0' write to bit leaves bit intact           
 *  ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_E_ENABLED  | 0x1   | Receive FIFO data request STATUS of 1 indicates 
 * :                                                              |       | interrupt is raised and writes of value 1 to bit
 * :                                                              |       | clears the status bit                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS
 * 
 * RXDR Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS
 * 
 * Receive FIFO data request STATUS of 1 indicates interrupt is raised and writes
 * of value 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_MSB        5
/* The width in bits of the ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RESPONSE_CRC_ERROR_STATUS
 * 
 * bit 6  Response CRC error (RCRC)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description                                     
 * :-------------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_E_DISABLED | 0x0   | RCRC Interrupt is not raised ;STATUS is logged  
 * :                                                       |       | regardless of interrupt mask status ,and value  
 * :                                                       |       | of '0' write to bit leaves bit intact           
 *  ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_E_ENABLED  | 0x1   | Response CRC error STATUS of 1 indicates        
 * :                                                       |       | interrupt is raised and writes of value 1 to bit
 * :                                                       |       | clears the status bit                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS
 * 
 * RCRC Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS
 * 
 * Response CRC error STATUS of 1 indicates interrupt is raised and writes of value
 * 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_MSB        6
/* The width in bits of the ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : DATA_CRC_ERROR_STATUS
 * 
 * bit 7  Data CRC error (DCRC)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                                   
 * :---------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_E_DISABLED | 0x0   | DCRC Interrupt is not raised ;STATUS is logged
 * :                                                   |       | regardless of interrupt mask status ,and value
 * :                                                   |       | of '0' write to bit leaves bit intact         
 *  ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_E_ENABLED  | 0x1   | Data CRC error STATUS of 1 indicates interrupt
 * :                                                   |       | is raised and writes of value 1 to bit clears 
 * :                                                   |       | the status bit                                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS
 * 
 * DCRC Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS
 * 
 * Data CRC error STATUS of 1 indicates interrupt is raised and writes of value 1
 * to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_MSB        7
/* The width in bits of the ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RESPONSE_TIMEOUT_STATUS
 * 
 * bit 8  Response timeout (RTO)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description                                     
 * :-----------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_E_DISABLED | 0x0   | RTO Interrupt is not raised ;STATUS is logged   
 * :                                                     |       | regardless of interrupt mask status ,and value  
 * :                                                     |       | of '0' write to bit leaves bit intact           
 *  ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_E_ENABLED  | 0x1   | Response timeout  STATUS of 1 indicates         
 * :                                                     |       | interrupt is raised and writes of value 1 to bit
 * :                                                     |       | clears the status bit                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS
 * 
 * RTO Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS
 * 
 * Response timeout  STATUS of 1 indicates interrupt is raised and writes of value
 * 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_MSB        8
/* The width in bits of the ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : DATA_READ_TIMEOUT_STATUS
 * 
 * bit 9  Data read timeout (DRTO)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description                                     
 * :------------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_E_DISABLED | 0x0   | DRTO Interrupt is not raised ;STATUS is logged  
 * :                                                      |       | regardless of interrupt mask status ,and value  
 * :                                                      |       | of '0' write to bit leaves bit intact           
 *  ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_E_ENABLED  | 0x1   | Data read timeout STATUS of 1 indicates         
 * :                                                      |       | interrupt is raised and writes of value 1 to bit
 * :                                                      |       | clears the status bit                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS
 * 
 * DRTO Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS
 * 
 * Data read timeout STATUS of 1 indicates interrupt is raised and writes of value
 * 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_MSB        9
/* The width in bits of the ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : HOST_TIMEOUT_STATUS
 * 
 * bit 10  Data starvation by host timeout (HTO)/Volt_switch_int
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                                   
 * :-------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_E_DISABLED | 0x0   | HTO Interrupt is not raised ;STATUS is logged 
 * :                                                 |       | regardless of interrupt mask status ,and value
 * :                                                 |       | of '0' write to bit leaves bit intact         
 *  ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_E_ENABLED  | 0x1   | Data starvation by host timeout STATUS of 1   
 * :                                                 |       | indicates interrupt is raised and writes of   
 * :                                                 |       | value 1 to bit clears the status bit          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS
 * 
 * HTO Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS
 * 
 * Data starvation by host timeout STATUS of 1 indicates interrupt is raised and
 * writes of value 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_MSB        10
/* The width in bits of the ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : FIFO_UNDER_OVER_RUN_STATUS
 * 
 * bit 11  FIFO underrun/overrun error (FRUN)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description                                   
 * :--------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_E_DISABLED | 0x0   | FRUN Interrupt is not raised ;STATUS is logged
 * :                                                        |       | regardless of interrupt mask status ,and value
 * :                                                        |       | of '0' write to bit leaves bit intact         
 *  ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_E_ENABLED  | 0x1   | FIFO underrun/overrun error STATUS of 1       
 * :                                                        |       | indicates interrupt is raised and writes of   
 * :                                                        |       | value 1 to bit clears the status bit          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS
 * 
 * FRUN Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS
 * 
 * FIFO underrun/overrun error STATUS of 1 indicates interrupt is raised and writes
 * of value 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS register field. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS register field. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_MSB        11
/* The width in bits of the ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS register field. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS register field. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : HARDWARE_LOCKED_WRITE_STATUS
 * 
 * bit 12  Hardware locked write error (HLE)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                      | Value | Description                                   
 * :----------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_E_DISABLED | 0x0   | HLE Interrupt is not raised ;STATUS is logged 
 * :                                                          |       | regardless of interrupt mask status ,and value
 * :                                                          |       | of '0' write to bit leaves bit intact         
 *  ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_E_ENABLED  | 0x1   | Hardware locked write error  STATUS of 1      
 * :                                                          |       | indicates interrupt is raised and writes of   
 * :                                                          |       | value 1 to bit clears the status bit          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS
 * 
 * HLE Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS
 * 
 * Hardware locked write error  STATUS of 1 indicates interrupt is raised and
 * writes of value 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_MSB        12
/* The width in bits of the ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_SET_MSK    0x00001000
/* The mask used to clear the ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_CLR_MSK    0xffffefff
/* The reset value of the ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : BUSY_COMPLETE_STATUS
 * 
 * bit 13  Start Bit Error(SBE)/Busy Complete STATUS (BCI)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                                   
 * :--------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_E_DISABLED | 0x0   | BCI Interrupt is not raised ;STATUS is logged 
 * :                                                  |       | regardless of interrupt mask status ,and value
 * :                                                  |       | of '0' write to bit leaves bit intact         
 *  ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_E_ENABLED  | 0x1   | Start Bit Error(SBE)/Busy Complete STATUS of 1
 * :                                                  |       | indicates interrupt is raised and writes of   
 * :                                                  |       | value 1 to bit clears the status bit          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS
 * 
 * BCI Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS
 * 
 * Start Bit Error(SBE)/Busy Complete STATUS of 1 indicates interrupt is raised and
 * writes of value 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_MSB        13
/* The width in bits of the ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_SET_MSK    0x00002000
/* The mask used to clear the ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : AUTO_COMMAND_DONE_STATUS
 * 
 * bit 14  Auto command done (ACD)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description                                   
 * :------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_E_DISABLED | 0x0   | ACD Interrupt is not raised ;STATUS is logged 
 * :                                                      |       | regardless of interrupt mask status ,and value
 * :                                                      |       | of '0' write to bit leaves bit intact         
 *  ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_E_ENABLED  | 0x1   | ACD STATUS of 1 indicates interrupt is raised 
 * :                                                      |       | and writes of value 1 to bit clears the status
 * :                                                      |       | bit                                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS
 * 
 * ACD Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS
 * 
 * ACD STATUS of 1 indicates interrupt is raised and writes of value 1 to bit
 * clears the status bit
 */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_MSB        14
/* The width in bits of the ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_SET_MSK    0x00004000
/* The mask used to clear the ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS register field. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : END_BIT_ERROR_STATUS
 * 
 * STATUS .
 * 
 * bit 15  End-bit error (read)/write no CRC (EBE)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                                     
 * :--------------------------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_E_DISABLED | 0x0   | EBE Interrupt is not raised ;STATUS is logged   
 * :                                                  |       | regardless of interrupt mask status ,and value  
 * :                                                  |       | of '0' write to bit leaves bit intact           
 *  ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_E_ENABLED  | 0x1   | End-bit error (read)/write no CRC (EBE) STATUS  
 * :                                                  |       | of 1 indicates interrupt is raised and writes of
 * :                                                  |       | value 1 to bit clears the status bit            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS
 * 
 * EBE Interrupt is not raised ;STATUS is logged regardless of interrupt mask
 * status ,and value of '0' write to bit leaves bit intact
 */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS
 * 
 * End-bit error (read)/write no CRC (EBE) STATUS of 1 indicates interrupt is
 * raised and writes of value 1 to bit clears the status bit
 */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_MSB        15
/* The width in bits of the ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_SET_MSK    0x00008000
/* The mask used to clear the ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS register field value. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS register field. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS field value from a register. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : SDIO_INTERRUPT_CARD0
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_MSB        16
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : SDIO_INTERRUPT_CARD1
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_MSB        17
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : SDIO_INTERRUPT_CARD2
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_MSB        18
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_SET_MSK    0x00040000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : SDIO_INTERRUPT_CARD3
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_MSB        19
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_SET_MSK    0x00080000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : SDIO_INTERRUPT_CARD4
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_MSB        20
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_SET_MSK    0x00100000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_CLR_MSK    0xffefffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : SDIO_INTERRUPT_CARD5
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_MSB        21
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_SET_MSK    0x00200000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_CLR_MSK    0xffdfffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : SDIO_INTERRUPT_CARD6
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_MSB        22
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_SET_MSK    0x00400000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_CLR_MSK    0xffbfffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : SDIO_INTERRUPT_CARD7
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_MSB        23
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_SET_MSK    0x00800000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : SDIO_INTERRUPT_CARD8
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_MSB        24
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_SET_MSK    0x01000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : SDIO_INTERRUPT_CARD9
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                
 * :--------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_MSB        25
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_SET_MSK    0x02000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_CLR_MSK    0xfdffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : SDIO_INTERRUPT_CARD10
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_MSB        26
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_SET_MSK    0x04000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_CLR_MSK    0xfbffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : SDIO_INTERRUPT_CARD11
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_MSB        27
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_SET_MSK    0x08000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : SDIO_INTERRUPT_CARD12
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_MSB        28
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_SET_MSK    0x10000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_CLR_MSK    0xefffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : SDIO_INTERRUPT_CARD13
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_MSB        29
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_SET_MSK    0x20000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_CLR_MSK    0xdfffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : SDIO_INTERRUPT_CARD14
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_MSB        30
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_SET_MSK    0x40000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : SDIO_INTERRUPT_CARD15
 * 
 * Interrupt from SDIO card; one bit for each card. Bit[31] corresponds to
 * Card[15], and bit[16] is for Card[0]. Writes to these bits clear them. Value of
 * 1 clears bit and 0 leaves bit intact.
 * 
 * 0-No SDIO interrupt from card
 * 
 * 1-SDIO interrupt from card
 * 
 * In MMC-Ver3.3-only mode, bits always 0.
 * 
 * Bits are logged regardless of interrupt-mask status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                
 * :---------------------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_E_DISABLED | 0x0   | No SDIO interrupt from card
 *  ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_E_ENABLED  | 0x1   | SDIO interrupt from card   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15
 * 
 * No SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15
 * 
 * SDIO interrupt from card
 */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_MSB        31
/* The width in bits of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_WIDTH      1
/* The mask used to set the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_SET_MSK    0x80000000
/* The mask used to clear the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 register field value. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 register field. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_RESET      0x0
/* Extracts the ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 field value from a register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 register field value suitable for setting the register. */
#define ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SDMMC_RINTSTS.
 */
struct ALT_SDMMC_RINTSTS_s
{
    volatile uint32_t  CARD_DETECT_STATUS                :  1;  /* ALT_SDMMC_RINTSTS_CARD_DETECT_STATUS */
    volatile uint32_t  RESPONSE_ERROR_STATUS             :  1;  /* ALT_SDMMC_RINTSTS_RESPONSE_ERROR_STATUS */
    volatile uint32_t  COMMAND_DONE_STATUS               :  1;  /* ALT_SDMMC_RINTSTS_COMMAND_DONE_STATUS */
    volatile uint32_t  DATA_TRANSFER_OVER_STATUS         :  1;  /* ALT_SDMMC_RINTSTS_DATA_TRANSFER_OVER_STATUS */
    volatile uint32_t  TRANSMIT_RECEIVE_FIFO_DATA_STATUS :  1;  /* ALT_SDMMC_RINTSTS_TRANSMIT_RECEIVE_FIFO_DATA_STATUS */
    volatile uint32_t  RECEIVE_FIFO_DATA_REQUEST_STATUS  :  1;  /* ALT_SDMMC_RINTSTS_RECEIVE_FIFO_DATA_REQUEST_STATUS */
    volatile uint32_t  RESPONSE_CRC_ERROR_STATUS         :  1;  /* ALT_SDMMC_RINTSTS_RESPONSE_CRC_ERROR_STATUS */
    volatile uint32_t  DATA_CRC_ERROR_STATUS             :  1;  /* ALT_SDMMC_RINTSTS_DATA_CRC_ERROR_STATUS */
    volatile uint32_t  RESPONSE_TIMEOUT_STATUS           :  1;  /* ALT_SDMMC_RINTSTS_RESPONSE_TIMEOUT_STATUS */
    volatile uint32_t  DATA_READ_TIMEOUT_STATUS          :  1;  /* ALT_SDMMC_RINTSTS_DATA_READ_TIMEOUT_STATUS */
    volatile uint32_t  HOST_TIMEOUT_STATUS               :  1;  /* ALT_SDMMC_RINTSTS_HOST_TIMEOUT_STATUS */
    volatile uint32_t  FIFO_UNDER_OVER_RUN_STATUS        :  1;  /* ALT_SDMMC_RINTSTS_FIFO_UNDER_OVER_RUN_STATUS */
    volatile uint32_t  HARDWARE_LOCKED_WRITE_STATUS      :  1;  /* ALT_SDMMC_RINTSTS_HARDWARE_LOCKED_WRITE_STATUS */
    volatile uint32_t  BUSY_COMPLETE_STATUS              :  1;  /* ALT_SDMMC_RINTSTS_BUSY_COMPLETE_STATUS */
    volatile uint32_t  AUTO_COMMAND_DONE_STATUS          :  1;  /* ALT_SDMMC_RINTSTS_AUTO_COMMAND_DONE_STATUS */
    volatile uint32_t  END_BIT_ERROR_STATUS              :  1;  /* ALT_SDMMC_RINTSTS_END_BIT_ERROR_STATUS */
    volatile uint32_t  SDIO_INTERRUPT_CARD0              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD0 */
    volatile uint32_t  SDIO_INTERRUPT_CARD1              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD1 */
    volatile uint32_t  SDIO_INTERRUPT_CARD2              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD2 */
    volatile uint32_t  SDIO_INTERRUPT_CARD3              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD3 */
    volatile uint32_t  SDIO_INTERRUPT_CARD4              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD4 */
    volatile uint32_t  SDIO_INTERRUPT_CARD5              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD5 */
    volatile uint32_t  SDIO_INTERRUPT_CARD6              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD6 */
    volatile uint32_t  SDIO_INTERRUPT_CARD7              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD7 */
    volatile uint32_t  SDIO_INTERRUPT_CARD8              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD8 */
    volatile uint32_t  SDIO_INTERRUPT_CARD9              :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD9 */
    volatile uint32_t  SDIO_INTERRUPT_CARD10             :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD10 */
    volatile uint32_t  SDIO_INTERRUPT_CARD11             :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD11 */
    volatile uint32_t  SDIO_INTERRUPT_CARD12             :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD12 */
    volatile uint32_t  SDIO_INTERRUPT_CARD13             :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD13 */
    volatile uint32_t  SDIO_INTERRUPT_CARD14             :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD14 */
    volatile uint32_t  SDIO_INTERRUPT_CARD15             :  1;  /* ALT_SDMMC_RINTSTS_SDIO_INTERRUPT_CARD15 */
};

/* The typedef declaration for register ALT_SDMMC_RINTSTS. */
typedef struct ALT_SDMMC_RINTSTS_s  ALT_SDMMC_RINTSTS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_RINTSTS register. */
#define ALT_SDMMC_RINTSTS_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_RINTSTS register from the beginning of the component. */
#define ALT_SDMMC_RINTSTS_OFST        0x44
/* The address of the ALT_SDMMC_RINTSTS register. */
#define ALT_SDMMC_RINTSTS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_RINTSTS_OFST))

/*
 * Register : Status Register - STATUS
 * 
 * Name: Status Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x48
 * 
 * Read/write access: read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [0]     | R      | 0x0   | ALT_SDMMC_STATUS_FIFO_RX_WATERMARK 
 *  [1]     | R      | 0x1   | ALT_SDMMC_STATUS_FIFO_TX_WATERMARK 
 *  [2]     | R      | 0x1   | ALT_SDMMC_STATUS_FIFO_EMPTY        
 *  [3]     | R      | 0x0   | ALT_SDMMC_STATUS_FIFO_FULL         
 *  [7:4]   | R      | 0x0   | ALT_SDMMC_STATUS_COMMAND_FSM_STATES
 *  [8]     | R      | 0x1   | ALT_SDMMC_STATUS_DATA_3_STATUS     
 *  [9]     | R      | 0x0   | ALT_SDMMC_STATUS_DATA_BUSY         
 *  [10]    | R      | 0x0   | ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY
 *  [16:11] | R      | 0x0   | ALT_SDMMC_STATUS_RESPONSE_INDEX    
 *  [29:17] | R      | 0x0   | ALT_SDMMC_STATUS_FIFO_COUNT        
 *  [30]    | R      | 0x0   | ALT_SDMMC_STATUS_DMA_ACK           
 *  [31]    | R      | 0x0   | ALT_SDMMC_STATUS_DMA_REQ           
 * 
 */
/*
 * Field : FIFO_RX_WATERMARK
 * 
 * FIFO reached Receive watermark level; not qualified with data
 * 
 * transfer.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description              
 * :-------------------------------------------|:------|:--------------------------
 *  ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_E_CLEAR | 0x0   | Not reached RXWMARK level
 *  ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_E_SET   | 0x1   | Reached RXWMARK level    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_RX_WATERMARK
 * 
 * Not reached RXWMARK level
 */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_E_CLEAR  0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_RX_WATERMARK
 * 
 * Reached RXWMARK level
 */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_E_SET    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_FIFO_RX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_FIFO_RX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_MSB        0
/* The width in bits of the ALT_SDMMC_STATUS_FIFO_RX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_FIFO_RX_WATERMARK register field value. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_STATUS_FIFO_RX_WATERMARK register field value. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_STATUS_FIFO_RX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_FIFO_RX_WATERMARK field value from a register. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_STATUS_FIFO_RX_WATERMARK register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_FIFO_RX_WATERMARK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FIFO_TX_WATERMARK
 * 
 * FIFO reached Transmit watermark level; not qualified with data
 * 
 * transfer.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description              
 * :-------------------------------------------|:------|:--------------------------
 *  ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_E_CLEAR | 0x0   | Not reached TXWMARK level
 *  ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_E_SET   | 0x1   | Reached TXWMARK level    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_TX_WATERMARK
 * 
 * Not reached TXWMARK level
 */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_E_CLEAR  0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_TX_WATERMARK
 * 
 * Reached TXWMARK level
 */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_E_SET    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_FIFO_TX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_FIFO_TX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_MSB        1
/* The width in bits of the ALT_SDMMC_STATUS_FIFO_TX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_FIFO_TX_WATERMARK register field value. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_STATUS_FIFO_TX_WATERMARK register field value. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_STATUS_FIFO_TX_WATERMARK register field. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_RESET      0x1
/* Extracts the ALT_SDMMC_STATUS_FIFO_TX_WATERMARK field value from a register. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_STATUS_FIFO_TX_WATERMARK register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_FIFO_TX_WATERMARK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FIFO_EMPTY
 * 
 * FIFO is empty status
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description      
 * :------------------------------------|:------|:------------------
 *  ALT_SDMMC_STATUS_FIFO_EMPTY_E_CLEAR | 0x0   | FIFO is not empty
 *  ALT_SDMMC_STATUS_FIFO_EMPTY_E_SET   | 0x1   | FIFO is empty    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_EMPTY
 * 
 * FIFO is not empty
 */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_E_CLEAR 0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_EMPTY
 * 
 * FIFO is empty
 */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_E_SET   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_FIFO_EMPTY register field. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_FIFO_EMPTY register field. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_MSB        2
/* The width in bits of the ALT_SDMMC_STATUS_FIFO_EMPTY register field. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_FIFO_EMPTY register field value. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_STATUS_FIFO_EMPTY register field value. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_STATUS_FIFO_EMPTY register field. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_RESET      0x1
/* Extracts the ALT_SDMMC_STATUS_FIFO_EMPTY field value from a register. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_STATUS_FIFO_EMPTY register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_FIFO_EMPTY_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : FIFO_FULL
 * 
 * FIFO is full status
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description     
 * :-----------------------------------|:------|:-----------------
 *  ALT_SDMMC_STATUS_FIFO_FULL_E_CLEAR | 0x0   | FIFO is not full
 *  ALT_SDMMC_STATUS_FIFO_FULL_E_SET   | 0x1   | FIFO is full    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_FULL
 * 
 * FIFO is not full
 */
#define ALT_SDMMC_STATUS_FIFO_FULL_E_CLEAR  0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_FIFO_FULL
 * 
 * FIFO is full
 */
#define ALT_SDMMC_STATUS_FIFO_FULL_E_SET    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_FIFO_FULL register field. */
#define ALT_SDMMC_STATUS_FIFO_FULL_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_FIFO_FULL register field. */
#define ALT_SDMMC_STATUS_FIFO_FULL_MSB        3
/* The width in bits of the ALT_SDMMC_STATUS_FIFO_FULL register field. */
#define ALT_SDMMC_STATUS_FIFO_FULL_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_FIFO_FULL register field value. */
#define ALT_SDMMC_STATUS_FIFO_FULL_SET_MSK    0x00000008
/* The mask used to clear the ALT_SDMMC_STATUS_FIFO_FULL register field value. */
#define ALT_SDMMC_STATUS_FIFO_FULL_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SDMMC_STATUS_FIFO_FULL register field. */
#define ALT_SDMMC_STATUS_FIFO_FULL_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_FIFO_FULL field value from a register. */
#define ALT_SDMMC_STATUS_FIFO_FULL_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SDMMC_STATUS_FIFO_FULL register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_FIFO_FULL_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : COMMAND_FSM_STATES
 * 
 * Command FSM states:
 * 
 * 0  Idle
 * 
 * 1  Send init sequence
 * 
 * 2  Tx cmd start bit
 * 
 * 3  Tx cmd tx bit
 * 
 * 4  Tx cmd index + arg
 * 
 * 5  Tx cmd crc7
 * 
 * 6  Tx cmd end bit
 * 
 * 7  Rx resp start bit
 * 
 * 8  Rx resp IRQ response
 * 
 * 9  Rx resp tx bit
 * 
 * 10  Rx resp cmd idx
 * 
 * 11  Rx resp data
 * 
 * 12  Rx resp crc7
 * 
 * 13  Rx resp end bit
 * 
 * 14  Cmd path wait NCC
 * 
 * 15  Wait; CMD-to-response turnaround
 * 
 * NOTE: The command FSM state is represented using 19 bits. The STATUS
 * Register(7:4) has 4 bits to represent the command FSM states. Using these 4
 * bits, only 16 states can be represented. Thus three states cannot be represented
 * in the STATUS(7:4) register. The three states that are not represented in the
 * STATUS Register(7:4) are:
 * 
 * * Bit 16  Wait for CCS
 * 
 * * Bit 17  Send CCSD
 * 
 * * Bit 18  Boot Mode
 * 
 * Due to this, while command FSM is in "Wait for CCS state" or "Send CCSD"
 * or "Boot Mode", the Status register indicates status as 0 for the bit field
 * 7:4.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_COMMAND_FSM_STATES register field. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_COMMAND_FSM_STATES register field. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_MSB        7
/* The width in bits of the ALT_SDMMC_STATUS_COMMAND_FSM_STATES register field. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_WIDTH      4
/* The mask used to set the ALT_SDMMC_STATUS_COMMAND_FSM_STATES register field value. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_SET_MSK    0x000000f0
/* The mask used to clear the ALT_SDMMC_STATUS_COMMAND_FSM_STATES register field value. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_CLR_MSK    0xffffff0f
/* The reset value of the ALT_SDMMC_STATUS_COMMAND_FSM_STATES register field. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_COMMAND_FSM_STATES field value from a register. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_GET(value) (((value) & 0x000000f0) >> 4)
/* Produces a ALT_SDMMC_STATUS_COMMAND_FSM_STATES register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_COMMAND_FSM_STATES_SET(value) (((value) << 4) & 0x000000f0)

/*
 * Field : DATA_3_STATUS
 * 
 * Raw selected card_data[3]; checks whether card is present
 * 
 * 0-card not present
 * 
 * 1-card present
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description      
 * :--------------------------------------|:------|:------------------
 *  ALT_SDMMC_STATUS_DATA_3_STATUS_E_LOW  | 0x0   | Card  not present
 *  ALT_SDMMC_STATUS_DATA_3_STATUS_E_HIGH | 0x1   | card present     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DATA_3_STATUS
 * 
 * Card not present
 */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_E_LOW    0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DATA_3_STATUS
 * 
 * card present
 */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_E_HIGH   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_DATA_3_STATUS register field. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_DATA_3_STATUS register field. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_MSB        8
/* The width in bits of the ALT_SDMMC_STATUS_DATA_3_STATUS register field. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_DATA_3_STATUS register field value. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_STATUS_DATA_3_STATUS register field value. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_STATUS_DATA_3_STATUS register field. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_RESET      0x1
/* Extracts the ALT_SDMMC_STATUS_DATA_3_STATUS field value from a register. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_STATUS_DATA_3_STATUS register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_DATA_3_STATUS_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : DATA_BUSY
 * 
 * Inverted version of raw selected card_data[0]
 * 
 * 0-card data not busy
 * 
 * 1-card data busy
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description        
 * :----------------------------------|:------|:--------------------
 *  ALT_SDMMC_STATUS_DATA_BUSY_E_LOW  | 0x0   | Card  data not busy
 *  ALT_SDMMC_STATUS_DATA_BUSY_E_HIGH | 0x1   | card data busy     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DATA_BUSY
 * 
 * Card  data not busy
 */
#define ALT_SDMMC_STATUS_DATA_BUSY_E_LOW    0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DATA_BUSY
 * 
 * card data busy
 */
#define ALT_SDMMC_STATUS_DATA_BUSY_E_HIGH   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_DATA_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_BUSY_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_DATA_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_BUSY_MSB        9
/* The width in bits of the ALT_SDMMC_STATUS_DATA_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_BUSY_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_DATA_BUSY register field value. */
#define ALT_SDMMC_STATUS_DATA_BUSY_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_STATUS_DATA_BUSY register field value. */
#define ALT_SDMMC_STATUS_DATA_BUSY_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_STATUS_DATA_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_BUSY_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_DATA_BUSY field value from a register. */
#define ALT_SDMMC_STATUS_DATA_BUSY_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_STATUS_DATA_BUSY register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_DATA_BUSY_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : DATA_STATE_MC_BUSY
 * 
 * Data transmit or receive state-machine is busy
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description               
 * :-------------------------------------------|:------|:---------------------------
 *  ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_E_LOW  | 0x0   | DMA state-machine not busy
 *  ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_E_HIGH | 0x1   | DMA state-machine busy    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY
 * 
 * DMA state-machine not busy
 */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_E_LOW   0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY
 * 
 * DMA state-machine busy
 */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_E_HIGH  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_MSB        10
/* The width in bits of the ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY register field value. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY register field value. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY register field. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY field value from a register. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : RESPONSE_INDEX
 * 
 * Index of previous response, including any auto-stop sent by core
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_RESPONSE_INDEX register field. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_RESPONSE_INDEX register field. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_MSB        16
/* The width in bits of the ALT_SDMMC_STATUS_RESPONSE_INDEX register field. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_WIDTH      6
/* The mask used to set the ALT_SDMMC_STATUS_RESPONSE_INDEX register field value. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_SET_MSK    0x0001f800
/* The mask used to clear the ALT_SDMMC_STATUS_RESPONSE_INDEX register field value. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_CLR_MSK    0xfffe07ff
/* The reset value of the ALT_SDMMC_STATUS_RESPONSE_INDEX register field. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_RESPONSE_INDEX field value from a register. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_GET(value) (((value) & 0x0001f800) >> 11)
/* Produces a ALT_SDMMC_STATUS_RESPONSE_INDEX register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_RESPONSE_INDEX_SET(value) (((value) << 11) & 0x0001f800)

/*
 * Field : FIFO_COUNT
 * 
 * FIFO count Number of filled locations in FIFO
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_FIFO_COUNT register field. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_FIFO_COUNT register field. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_MSB        29
/* The width in bits of the ALT_SDMMC_STATUS_FIFO_COUNT register field. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_WIDTH      13
/* The mask used to set the ALT_SDMMC_STATUS_FIFO_COUNT register field value. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_SET_MSK    0x3ffe0000
/* The mask used to clear the ALT_SDMMC_STATUS_FIFO_COUNT register field value. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_CLR_MSK    0xc001ffff
/* The reset value of the ALT_SDMMC_STATUS_FIFO_COUNT register field. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_FIFO_COUNT field value from a register. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_GET(value) (((value) & 0x3ffe0000) >> 17)
/* Produces a ALT_SDMMC_STATUS_FIFO_COUNT register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_FIFO_COUNT_SET(value) (((value) << 17) & 0x3ffe0000)

/*
 * Field : DMA_ACK
 * 
 * DMA acknowledge signal state; either dw_dma_ack or
 * 
 * ge_dma_ack, depending on DW-DMA or Generic-DMA selection.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description         
 * :--------------------------------|:------|:---------------------
 *  ALT_SDMMC_STATUS_DMA_ACK_E_LOW  | 0x0   | DMA ack not asserted
 *  ALT_SDMMC_STATUS_DMA_ACK_E_HIGH | 0x1   | DMA ack asserted    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DMA_ACK
 * 
 * DMA ack not asserted
 */
#define ALT_SDMMC_STATUS_DMA_ACK_E_LOW  0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DMA_ACK
 * 
 * DMA ack asserted
 */
#define ALT_SDMMC_STATUS_DMA_ACK_E_HIGH 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_DMA_ACK register field. */
#define ALT_SDMMC_STATUS_DMA_ACK_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_DMA_ACK register field. */
#define ALT_SDMMC_STATUS_DMA_ACK_MSB        30
/* The width in bits of the ALT_SDMMC_STATUS_DMA_ACK register field. */
#define ALT_SDMMC_STATUS_DMA_ACK_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_DMA_ACK register field value. */
#define ALT_SDMMC_STATUS_DMA_ACK_SET_MSK    0x40000000
/* The mask used to clear the ALT_SDMMC_STATUS_DMA_ACK register field value. */
#define ALT_SDMMC_STATUS_DMA_ACK_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SDMMC_STATUS_DMA_ACK register field. */
#define ALT_SDMMC_STATUS_DMA_ACK_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_DMA_ACK field value from a register. */
#define ALT_SDMMC_STATUS_DMA_ACK_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SDMMC_STATUS_DMA_ACK register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_DMA_ACK_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : DMA_REQ
 * 
 * DMA request signal state; either dw_dma_req or ge_dma_req,
 * 
 * depending on DW-DMA or Generic-DMA selection.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description             
 * :--------------------------------|:------|:-------------------------
 *  ALT_SDMMC_STATUS_DMA_REQ_E_LOW  | 0x0   | DMA request not asserted
 *  ALT_SDMMC_STATUS_DMA_REQ_E_HIGH | 0x1   | DMA request asserted    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DMA_REQ
 * 
 * DMA request not asserted
 */
#define ALT_SDMMC_STATUS_DMA_REQ_E_LOW  0x0
/*
 * Enumerated value for register field ALT_SDMMC_STATUS_DMA_REQ
 * 
 * DMA request asserted
 */
#define ALT_SDMMC_STATUS_DMA_REQ_E_HIGH 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_STATUS_DMA_REQ register field. */
#define ALT_SDMMC_STATUS_DMA_REQ_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_STATUS_DMA_REQ register field. */
#define ALT_SDMMC_STATUS_DMA_REQ_MSB        31
/* The width in bits of the ALT_SDMMC_STATUS_DMA_REQ register field. */
#define ALT_SDMMC_STATUS_DMA_REQ_WIDTH      1
/* The mask used to set the ALT_SDMMC_STATUS_DMA_REQ register field value. */
#define ALT_SDMMC_STATUS_DMA_REQ_SET_MSK    0x80000000
/* The mask used to clear the ALT_SDMMC_STATUS_DMA_REQ register field value. */
#define ALT_SDMMC_STATUS_DMA_REQ_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SDMMC_STATUS_DMA_REQ register field. */
#define ALT_SDMMC_STATUS_DMA_REQ_RESET      0x0
/* Extracts the ALT_SDMMC_STATUS_DMA_REQ field value from a register. */
#define ALT_SDMMC_STATUS_DMA_REQ_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SDMMC_STATUS_DMA_REQ register field value suitable for setting the register. */
#define ALT_SDMMC_STATUS_DMA_REQ_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SDMMC_STATUS.
 */
struct ALT_SDMMC_STATUS_s
{
    const volatile uint32_t  FIFO_RX_WATERMARK  :  1;  /* ALT_SDMMC_STATUS_FIFO_RX_WATERMARK */
    const volatile uint32_t  FIFO_TX_WATERMARK  :  1;  /* ALT_SDMMC_STATUS_FIFO_TX_WATERMARK */
    const volatile uint32_t  FIFO_EMPTY         :  1;  /* ALT_SDMMC_STATUS_FIFO_EMPTY */
    const volatile uint32_t  FIFO_FULL          :  1;  /* ALT_SDMMC_STATUS_FIFO_FULL */
    const volatile uint32_t  COMMAND_FSM_STATES :  4;  /* ALT_SDMMC_STATUS_COMMAND_FSM_STATES */
    const volatile uint32_t  DATA_3_STATUS      :  1;  /* ALT_SDMMC_STATUS_DATA_3_STATUS */
    const volatile uint32_t  DATA_BUSY          :  1;  /* ALT_SDMMC_STATUS_DATA_BUSY */
    const volatile uint32_t  DATA_STATE_MC_BUSY :  1;  /* ALT_SDMMC_STATUS_DATA_STATE_MC_BUSY */
    const volatile uint32_t  RESPONSE_INDEX     :  6;  /* ALT_SDMMC_STATUS_RESPONSE_INDEX */
    const volatile uint32_t  FIFO_COUNT         : 13;  /* ALT_SDMMC_STATUS_FIFO_COUNT */
    const volatile uint32_t  DMA_ACK            :  1;  /* ALT_SDMMC_STATUS_DMA_ACK */
    const volatile uint32_t  DMA_REQ            :  1;  /* ALT_SDMMC_STATUS_DMA_REQ */
};

/* The typedef declaration for register ALT_SDMMC_STATUS. */
typedef struct ALT_SDMMC_STATUS_s  ALT_SDMMC_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_STATUS register. */
#define ALT_SDMMC_STATUS_RESET       0x00000106
/* The byte offset of the ALT_SDMMC_STATUS register from the beginning of the component. */
#define ALT_SDMMC_STATUS_OFST        0x48
/* The address of the ALT_SDMMC_STATUS register. */
#define ALT_SDMMC_STATUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_STATUS_OFST))

/*
 * Register : FIFO Threshold Watermark Register - FIFOTH
 * 
 * Name: FIFO Threshold Watermark Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x4C
 * 
 * Read/write access: write/read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                      
 * :--------|:-------|:------|:--------------------------------------------------
 *  [11:0]  | RW     | 0x0   | ALT_SDMMC_FIFOTH_TX_WMARK                        
 *  [15:12] | ???    | 0x0   | *UNDEFINED*                                      
 *  [27:16] | RW     | 0x3ff | ALT_SDMMC_FIFOTH_RX_WMARK                        
 *  [30:28] | RW     | 0x0   | ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 *  [31]    | ???    | 0x0   | *UNDEFINED*                                      
 * 
 */
/*
 * Field : TX_WMark
 * 
 * FIFO threshold watermark level when transmitting data to card.
 * 
 * When FIFO data count is less than or equal to this number,DMA/FIFO request is
 * raised. If Interrupt is enabled, then interrupt occurs. During end of packet,
 * request or interrupt is generated,regardless of threshold programming.
 * 
 * In non-DMA mode, when transmit FIFO threshold (TXDR) interrupt is enabled, then
 * interrupt is generated instead of DMA request. During end of packet, on last
 * interrupt, host is responsible for filling FIFO with only required remaining
 * bytes (not before FIFO is full or after CIU completes data transfers, because
 * FIFO may not be empty).
 * 
 * In DMA mode, at end of packet, if last transfer is less than burst size, DMA
 * controller does single cycles until required bytes are transferred.
 * 
 * 12 bits-1 bit less than FIFO-count of status register, which is 13 bits.
 * 
 * Limitation: TX_WMark >= 1;
 * 
 * Recommended: FIFO_DEPTH/2; (means less than or equal to FIFO_DEPTH/2)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_FIFOTH_TX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_FIFOTH_TX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_MSB        11
/* The width in bits of the ALT_SDMMC_FIFOTH_TX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_WIDTH      12
/* The mask used to set the ALT_SDMMC_FIFOTH_TX_WMARK register field value. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_SET_MSK    0x00000fff
/* The mask used to clear the ALT_SDMMC_FIFOTH_TX_WMARK register field value. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_CLR_MSK    0xfffff000
/* The reset value of the ALT_SDMMC_FIFOTH_TX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_RESET      0x0
/* Extracts the ALT_SDMMC_FIFOTH_TX_WMARK field value from a register. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_GET(value) (((value) & 0x00000fff) >> 0)
/* Produces a ALT_SDMMC_FIFOTH_TX_WMARK register field value suitable for setting the register. */
#define ALT_SDMMC_FIFOTH_TX_WMARK_SET(value) (((value) << 0) & 0x00000fff)

/*
 * Field : RX_WMark
 * 
 * FIFO threshold watermark level when receiving data to card.
 * 
 * When FIFO data count reaches greater than this number,DMA/FIFO request is
 * raised. During end of packet, request is
 * 
 * generated regardless of threshold programming in order to complete any remaining
 * data.
 * 
 * In non-DMA mode, when receiver FIFO threshold (RXDR) interrupt is enabled, then
 * interrupt is generated instead of DMA request.
 * 
 * During end of packet, interrupt is not generated if threshold programming is
 * larger than any remaining data. It is responsibility of host to read remaining
 * bytes on seeing Data Transfer Done interrupt.
 * 
 * In DMA mode, at end of packet, even if remaining bytes are less than threshold,
 * DMA request does single transfers to flush out any remaining bytes before Data
 * Transfer Done interrupt is set.
 * 
 * 12 bits-1 bit less than FIFO-count of status register, which is 13 bits.
 * 
 * Limitation: RX_WMark <= FIFO_DEPTH-2
 * 
 * Recommended: (FIFO_DEPTH/2) - 1; (means greater than (FIFO_DEPTH/2) - 1)
 * 
 * NOTE: In DMA mode during CCS time-out, the DMA does not generate the request at
 * the end of packet, even if remaining bytes are less than threshold. In this
 * case, there will be some data left in the FIFO. It is the responsibility of the
 * application to reset the FIFO after the CCS timeout.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_FIFOTH_RX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_FIFOTH_RX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_MSB        27
/* The width in bits of the ALT_SDMMC_FIFOTH_RX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_WIDTH      12
/* The mask used to set the ALT_SDMMC_FIFOTH_RX_WMARK register field value. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_SET_MSK    0x0fff0000
/* The mask used to clear the ALT_SDMMC_FIFOTH_RX_WMARK register field value. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_CLR_MSK    0xf000ffff
/* The reset value of the ALT_SDMMC_FIFOTH_RX_WMARK register field. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_RESET      0x3ff
/* Extracts the ALT_SDMMC_FIFOTH_RX_WMARK field value from a register. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_GET(value) (((value) & 0x0fff0000) >> 16)
/* Produces a ALT_SDMMC_FIFOTH_RX_WMARK register field value suitable for setting the register. */
#define ALT_SDMMC_FIFOTH_RX_WMARK_SET(value) (((value) << 16) & 0x0fff0000)

/*
 * Field : DW_DMA_Multiple_Transaction_Size
 * 
 * Burst size of multiple transaction; should be programmed same as
 * 
 * DW-DMA controller multiple-transaction-size SRC/DEST_MSIZE.
 * 
 * 000  1 transfers
 * 
 * 001  4
 * 
 * 010  8
 * 
 * 011  16
 * 
 * 100  32
 * 
 * 101  64
 * 
 * 110  128
 * 
 * 111  256
 * 
 * The units for transfers is the H_DATA_WIDTH parameter. A single transfer
 * (dw_dma_single assertion in case of Non DW DMA interface) would be signalled
 * based on this value.
 * 
 * Value should be sub-multiple of (RX_WMark + 1)* (F_DATA_WIDTH/H_DATA_WIDTH) and
 * 
 * (FIFO_DEPTH - TX_WMark)* (F_DATA_WIDTH/H_DATA_WIDTH)
 * 
 * For example, if FIFO_DEPTH = 16,
 * 
 * FDATA_WIDTH == H_DATA_WIDTH
 * 
 * Allowed combinations for MSize and TX_WMark are:
 * 
 * MSize = 1, TX_WMARK = 1-15
 * 
 * MSize = 4, TX_WMark = 8
 * 
 * MSize = 4, TX_WMark = 4
 * 
 * MSize = 4, TX_WMark = 12
 * 
 * MSize = 8, TX_WMark = 8
 * 
 * MSize = 8, TX_WMark = 4
 * 
 * Allowed combinations for MSize and RX_WMark are:
 * 
 * MSize = 1, RX_WMARK = 0-14
 * 
 * MSize = 4, RX_WMark = 3
 * 
 * MSize = 4, RX_WMark = 7
 * 
 * MSize = 4, RX_WMark = 11
 * 
 * MSize = 8, RX_WMark = 7
 * 
 * Recommended:
 * 
 * MSize = 8, TX_WMark = 8, RX_WMark = 7
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                          | Value | Description 
 * :--------------------------------------------------------------|:------|:-------------
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_1   | 0x0   | Burst of 1  
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_4   | 0x1   | Burst of 4  
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_8   | 0x2   | Burst of 8  
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_16  | 0x3   | Burst of 16 
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_32  | 0x4   | Burst of 32 
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_64  | 0x5   | Burst of 64 
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_128 | 0x6   | Burst of 128
 *  ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_256 | 0x7   | Burst of 256
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 1
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_1     0x0
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 4
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_4     0x1
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 8
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_8     0x2
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 16
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_16    0x3
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 32
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_32    0x4
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 64
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_64    0x5
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 128
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_128   0x6
/*
 * Enumerated value for register field ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE
 * 
 * Burst of 256
 */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_E_BURST_256   0x7

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE register field. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE register field. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_MSB        30
/* The width in bits of the ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE register field. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_WIDTH      3
/* The mask used to set the ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE register field value. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_SET_MSK    0x70000000
/* The mask used to clear the ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE register field value. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_CLR_MSK    0x8fffffff
/* The reset value of the ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE register field. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_RESET      0x0
/* Extracts the ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE field value from a register. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_GET(value) (((value) & 0x70000000) >> 28)
/* Produces a ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE register field value suitable for setting the register. */
#define ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE_SET(value) (((value) << 28) & 0x70000000)

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
 * The struct declaration for register ALT_SDMMC_FIFOTH.
 */
struct ALT_SDMMC_FIFOTH_s
{
    volatile uint32_t  TX_WMark                         : 12;  /* ALT_SDMMC_FIFOTH_TX_WMARK */
    uint32_t                                            :  4;  /* *UNDEFINED* */
    volatile uint32_t  RX_WMark                         : 12;  /* ALT_SDMMC_FIFOTH_RX_WMARK */
    volatile uint32_t  DW_DMA_Multiple_Transaction_Size :  3;  /* ALT_SDMMC_FIFOTH_DW_DMA_MULTIPLE_TRANSACTION_SIZE */
    uint32_t                                            :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_FIFOTH. */
typedef struct ALT_SDMMC_FIFOTH_s  ALT_SDMMC_FIFOTH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_FIFOTH register. */
#define ALT_SDMMC_FIFOTH_RESET       0x03ff0000
/* The byte offset of the ALT_SDMMC_FIFOTH register from the beginning of the component. */
#define ALT_SDMMC_FIFOTH_OFST        0x4c
/* The address of the ALT_SDMMC_FIFOTH register. */
#define ALT_SDMMC_FIFOTH_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_FIFOTH_OFST))

/*
 * Register : Card Detect Register - CDETECT
 * 
 * Name: Card Detect Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x50
 * 
 * Read/write access: read-only
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [0]    | R      | 0x1   | ALT_SDMMC_CDETECT_CARD0_DETECT_N
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : CARD0_DETECT_N
 * 
 * Value on card_detect_n input ports (1 bit per card); read-only bits.0 represents
 * presence of card. Only NUM_CARDS number of bits are implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                   
 * :----------------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_CDETECT_CARD0_DETECT_N_E_LOW  | 0x0   | low Indicates presence of cards;Only NUM_CARDS
 * :                                        |       | number of bits are implemented                
 *  ALT_SDMMC_CDETECT_CARD0_DETECT_N_E_HIGH | 0x1   | Card is not present                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CDETECT_CARD0_DETECT_N
 * 
 * low Indicates presence of cards;Only NUM_CARDS number of bits are implemented
 */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_E_LOW  0x0
/*
 * Enumerated value for register field ALT_SDMMC_CDETECT_CARD0_DETECT_N
 * 
 * Card is not present
 */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_E_HIGH 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CDETECT_CARD0_DETECT_N register field. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CDETECT_CARD0_DETECT_N register field. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_MSB        0
/* The width in bits of the ALT_SDMMC_CDETECT_CARD0_DETECT_N register field. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_WIDTH      1
/* The mask used to set the ALT_SDMMC_CDETECT_CARD0_DETECT_N register field value. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_CDETECT_CARD0_DETECT_N register field value. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_CDETECT_CARD0_DETECT_N register field. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_RESET      0x1
/* Extracts the ALT_SDMMC_CDETECT_CARD0_DETECT_N field value from a register. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_CDETECT_CARD0_DETECT_N register field value suitable for setting the register. */
#define ALT_SDMMC_CDETECT_CARD0_DETECT_N_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SDMMC_CDETECT.
 */
struct ALT_SDMMC_CDETECT_s
{
    const volatile uint32_t  CARD0_DETECT_N :  1;  /* ALT_SDMMC_CDETECT_CARD0_DETECT_N */
    uint32_t                                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_CDETECT. */
typedef struct ALT_SDMMC_CDETECT_s  ALT_SDMMC_CDETECT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CDETECT register. */
#define ALT_SDMMC_CDETECT_RESET       0x00000001
/* The byte offset of the ALT_SDMMC_CDETECT register from the beginning of the component. */
#define ALT_SDMMC_CDETECT_OFST        0x50
/* The address of the ALT_SDMMC_CDETECT register. */
#define ALT_SDMMC_CDETECT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CDETECT_OFST))

/*
 * Register : Write Protect Register - WRTPRT
 * 
 * Name: Write Protect Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x54
 * 
 * Read/write access: read-only
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [0]    | R      | 0x1   | ALT_SDMMC_WRTPRT_WRITE_PROTECT_0
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : WRITE_PROTECT_0
 * 
 * Value on card_write_prt input ports (1 bit per card).
 * 
 * 1 represents write protection. Only NUM_CARDS number of bits are implemented.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                  
 * :----------------------------------------|:------|:----------------------------------------------
 *  ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_E_LOW  | 0x0   | Not write protected ;Only NUM_CARDS number of
 * :                                        |       | bits are implemented                         
 *  ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_E_HIGH | 0x1   | This represents write protection             
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_WRTPRT_WRITE_PROTECT_0
 * 
 * Not write protected ;Only NUM_CARDS number of bits are implemented
 */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_E_LOW  0x0
/*
 * Enumerated value for register field ALT_SDMMC_WRTPRT_WRITE_PROTECT_0
 * 
 * This represents write protection
 */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_E_HIGH 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 register field. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 register field. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_MSB        0
/* The width in bits of the ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 register field. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 register field value. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 register field value. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 register field. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_RESET      0x1
/* Extracts the ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 field value from a register. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 register field value suitable for setting the register. */
#define ALT_SDMMC_WRTPRT_WRITE_PROTECT_0_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SDMMC_WRTPRT.
 */
struct ALT_SDMMC_WRTPRT_s
{
    const volatile uint32_t  WRITE_PROTECT_0 :  1;  /* ALT_SDMMC_WRTPRT_WRITE_PROTECT_0 */
    uint32_t                                 : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_WRTPRT. */
typedef struct ALT_SDMMC_WRTPRT_s  ALT_SDMMC_WRTPRT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_WRTPRT register. */
#define ALT_SDMMC_WRTPRT_RESET       0x00000001
/* The byte offset of the ALT_SDMMC_WRTPRT register from the beginning of the component. */
#define ALT_SDMMC_WRTPRT_OFST        0x54
/* The address of the ALT_SDMMC_WRTPRT register. */
#define ALT_SDMMC_WRTPRT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_WRTPRT_OFST))

/*
 * Register : General Purpose Input/Output Register - GPIO
 * 
 * Name: General Purpose Input/Output Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x58
 * 
 * Read/write access: Partly write/read and partly read-only
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [7:0]   | R      | 0x0   | ALT_SDMMC_GPIO_GPI
 *  [23:8]  | RW     | 0x0   | ALT_SDMMC_GPIO_GPO
 *  [31:24] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : GPI
 * 
 * Value on gpi input ports; this portion of register is read-only. Valid only when
 * AREA_OPTIMIZED parameter is 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_GPIO_GPI register field. */
#define ALT_SDMMC_GPIO_GPI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_GPIO_GPI register field. */
#define ALT_SDMMC_GPIO_GPI_MSB        7
/* The width in bits of the ALT_SDMMC_GPIO_GPI register field. */
#define ALT_SDMMC_GPIO_GPI_WIDTH      8
/* The mask used to set the ALT_SDMMC_GPIO_GPI register field value. */
#define ALT_SDMMC_GPIO_GPI_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SDMMC_GPIO_GPI register field value. */
#define ALT_SDMMC_GPIO_GPI_CLR_MSK    0xffffff00
/* The reset value of the ALT_SDMMC_GPIO_GPI register field. */
#define ALT_SDMMC_GPIO_GPI_RESET      0x0
/* Extracts the ALT_SDMMC_GPIO_GPI field value from a register. */
#define ALT_SDMMC_GPIO_GPI_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SDMMC_GPIO_GPI register field value suitable for setting the register. */
#define ALT_SDMMC_GPIO_GPI_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : GPO
 * 
 * Value needed to be driven to gpo pins; this portion of register is read/write.
 * Valid only when AREA_OPTIMIZED parameter is 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_GPIO_GPO register field. */
#define ALT_SDMMC_GPIO_GPO_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_GPIO_GPO register field. */
#define ALT_SDMMC_GPIO_GPO_MSB        23
/* The width in bits of the ALT_SDMMC_GPIO_GPO register field. */
#define ALT_SDMMC_GPIO_GPO_WIDTH      16
/* The mask used to set the ALT_SDMMC_GPIO_GPO register field value. */
#define ALT_SDMMC_GPIO_GPO_SET_MSK    0x00ffff00
/* The mask used to clear the ALT_SDMMC_GPIO_GPO register field value. */
#define ALT_SDMMC_GPIO_GPO_CLR_MSK    0xff0000ff
/* The reset value of the ALT_SDMMC_GPIO_GPO register field. */
#define ALT_SDMMC_GPIO_GPO_RESET      0x0
/* Extracts the ALT_SDMMC_GPIO_GPO field value from a register. */
#define ALT_SDMMC_GPIO_GPO_GET(value) (((value) & 0x00ffff00) >> 8)
/* Produces a ALT_SDMMC_GPIO_GPO register field value suitable for setting the register. */
#define ALT_SDMMC_GPIO_GPO_SET(value) (((value) << 8) & 0x00ffff00)

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
 * The struct declaration for register ALT_SDMMC_GPIO.
 */
struct ALT_SDMMC_GPIO_s
{
    const volatile uint32_t  GPI :  8;  /* ALT_SDMMC_GPIO_GPI */
    volatile uint32_t        GPO : 16;  /* ALT_SDMMC_GPIO_GPO */
    uint32_t                     :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_GPIO. */
typedef struct ALT_SDMMC_GPIO_s  ALT_SDMMC_GPIO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_GPIO register. */
#define ALT_SDMMC_GPIO_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_GPIO register from the beginning of the component. */
#define ALT_SDMMC_GPIO_OFST        0x58
/* The address of the ALT_SDMMC_GPIO register. */
#define ALT_SDMMC_GPIO_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_GPIO_OFST))

/*
 * Register : Transferred CIU Card Byte Count Register - TCBCNT
 * 
 * Name: Transferred CIU Card Byte Count Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x5C
 * 
 * Read/write access: read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT
 * 
 */
/*
 * Field : TRANS_CARD_BYTE_COUNT
 * 
 * Number of bytes transferred by CIU unit to card.
 * 
 * In 32-bit or 64-bit AMBA data-bus-width modes, register should be accessed in
 * full to avoid read-coherency problems.In 16-bit AMBA data-bus-width mode,
 * internal 16-bit coherency register is implemented. User should first read lower
 * 16 bits and then higher 16 bits. When reading lower 16 bits, higher 16 bits of
 * counter are stored in temporary register. When higher 16 bits are read, data
 * from temporary register is supplied. Both TCBCNT and TBBCNT share same coherency
 * register. When AREA_OPTIMIZED parameter is 1, register should be read only after
 * data transfer completes; during data transfer,register returns 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT register field. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT register field. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_MSB        31
/* The width in bits of the ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT register field. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_WIDTH      32
/* The mask used to set the ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT register field value. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT register field value. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT register field. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_RESET      0x0
/* Extracts the ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT field value from a register. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT register field value suitable for setting the register. */
#define ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_TCBCNT.
 */
struct ALT_SDMMC_TCBCNT_s
{
    const volatile uint32_t  TRANS_CARD_BYTE_COUNT : 32;  /* ALT_SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT */
};

/* The typedef declaration for register ALT_SDMMC_TCBCNT. */
typedef struct ALT_SDMMC_TCBCNT_s  ALT_SDMMC_TCBCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_TCBCNT register. */
#define ALT_SDMMC_TCBCNT_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_TCBCNT register from the beginning of the component. */
#define ALT_SDMMC_TCBCNT_OFST        0x5c
/* The address of the ALT_SDMMC_TCBCNT register. */
#define ALT_SDMMC_TCBCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_TCBCNT_OFST))

/*
 * Register : Transferred Host to BIU-FIFO Byte Count Register - TBBCNT
 * 
 * Name: Transferred Host to BIU-FIFO Byte Count Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x60
 * 
 * Read/write access: read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT
 * 
 */
/*
 * Field : TRANS_FIFO_BYTE_COUNT
 * 
 * Number of bytes transferred between Host/DMA memory and BIU FIFO.
 * 
 * In 32-bit or 64-bit AMBA data-bus-width modes, register should be accessed in
 * full to avoid read-coherency problems.In 16-bit AMBA data-bus-width mode,
 * internal 16-bit coherency register is implemented. User should first read lower
 * 16 bits and then higher 16 bits. When reading lower 16 bits, higher 16 bits of
 * counter are stored in temporary register. When higher 16 bits are read, data
 * from temporary register is supplied.
 * 
 * Both TCBCNT and TBBCNT share same coherency register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT register field. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT register field. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_MSB        31
/* The width in bits of the ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT register field. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_WIDTH      32
/* The mask used to set the ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT register field value. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT register field value. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT register field. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_RESET      0x0
/* Extracts the ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT field value from a register. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT register field value suitable for setting the register. */
#define ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_TBBCNT.
 */
struct ALT_SDMMC_TBBCNT_s
{
    const volatile uint32_t  TRANS_FIFO_BYTE_COUNT : 32;  /* ALT_SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT */
};

/* The typedef declaration for register ALT_SDMMC_TBBCNT. */
typedef struct ALT_SDMMC_TBBCNT_s  ALT_SDMMC_TBBCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_TBBCNT register. */
#define ALT_SDMMC_TBBCNT_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_TBBCNT register from the beginning of the component. */
#define ALT_SDMMC_TBBCNT_OFST        0x60
/* The address of the ALT_SDMMC_TBBCNT register. */
#define ALT_SDMMC_TBBCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_TBBCNT_OFST))

/*
 * Register : Debounce Count Register - DEBNCE
 * 
 * Name: Debounce Count Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x64
 * 
 * Read/write access: write/read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset    | Description                    
 * :--------|:-------|:---------|:--------------------------------
 *  [23:0]  | RW     | 0xffffff | ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT
 *  [31:24] | ???    | 0x0      | *UNDEFINED*                    
 * 
 */
/*
 * Field : DEBOUNCE_COUNT
 * 
 * Number of host clocks (clk) used by debounce filter logic; typical
 * 
 * debounce time is 5-25 ms.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT register field. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT register field. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_MSB        23
/* The width in bits of the ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT register field. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_WIDTH      24
/* The mask used to set the ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT register field value. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT register field value. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_CLR_MSK    0xff000000
/* The reset value of the ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT register field. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_RESET      0xffffff
/* Extracts the ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT field value from a register. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT register field value suitable for setting the register. */
#define ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_SDMMC_DEBNCE.
 */
struct ALT_SDMMC_DEBNCE_s
{
    volatile uint32_t  DEBOUNCE_COUNT : 24;  /* ALT_SDMMC_DEBNCE_DEBOUNCE_COUNT */
    uint32_t                          :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_DEBNCE. */
typedef struct ALT_SDMMC_DEBNCE_s  ALT_SDMMC_DEBNCE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_DEBNCE register. */
#define ALT_SDMMC_DEBNCE_RESET       0x00ffffff
/* The byte offset of the ALT_SDMMC_DEBNCE register from the beginning of the component. */
#define ALT_SDMMC_DEBNCE_OFST        0x64
/* The address of the ALT_SDMMC_DEBNCE register. */
#define ALT_SDMMC_DEBNCE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_DEBNCE_OFST))

/*
 * Register : User ID Register - USRID
 * 
 * Name: User ID Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x68
 * 
 * Read/write access: write/readUser ID Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset     | Description           
 * :-------|:-------|:----------|:-----------------------
 *  [31:0] | RW     | 0x7967797 | ALT_SDMMC_USRID_USR_ID
 * 
 */
/*
 * Field : USR_ID
 * 
 * User identification register; value set by user. Default reset value can be
 * picked by user while configuring core before synthesis.
 * 
 * Can also be used as scratch pad register by user.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_USRID_USR_ID register field. */
#define ALT_SDMMC_USRID_USR_ID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_USRID_USR_ID register field. */
#define ALT_SDMMC_USRID_USR_ID_MSB        31
/* The width in bits of the ALT_SDMMC_USRID_USR_ID register field. */
#define ALT_SDMMC_USRID_USR_ID_WIDTH      32
/* The mask used to set the ALT_SDMMC_USRID_USR_ID register field value. */
#define ALT_SDMMC_USRID_USR_ID_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_USRID_USR_ID register field value. */
#define ALT_SDMMC_USRID_USR_ID_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_USRID_USR_ID register field. */
#define ALT_SDMMC_USRID_USR_ID_RESET      0x7967797
/* Extracts the ALT_SDMMC_USRID_USR_ID field value from a register. */
#define ALT_SDMMC_USRID_USR_ID_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_USRID_USR_ID register field value suitable for setting the register. */
#define ALT_SDMMC_USRID_USR_ID_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_USRID.
 */
struct ALT_SDMMC_USRID_s
{
    volatile uint32_t  USR_ID : 32;  /* ALT_SDMMC_USRID_USR_ID */
};

/* The typedef declaration for register ALT_SDMMC_USRID. */
typedef struct ALT_SDMMC_USRID_s  ALT_SDMMC_USRID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_USRID register. */
#define ALT_SDMMC_USRID_RESET       0x07967797
/* The byte offset of the ALT_SDMMC_USRID register from the beginning of the component. */
#define ALT_SDMMC_USRID_OFST        0x68
/* The address of the ALT_SDMMC_USRID register. */
#define ALT_SDMMC_USRID_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_USRID_OFST))

/*
 * Register : Version ID Register - VERID
 * 
 * Name: Version ID Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x6C
 * 
 * Read/write access: read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description           
 * :-------|:-------|:-----------|:-----------------------
 *  [31:0] | R      | 0x5342280a | ALT_SDMMC_VERID_VER_ID
 * 
 */
/*
 * Field : VER_ID
 * 
 * Synopsys version identification register; register value is hard-wired.Can be
 * read by firmware to support different versions of core.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_VERID_VER_ID register field. */
#define ALT_SDMMC_VERID_VER_ID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_VERID_VER_ID register field. */
#define ALT_SDMMC_VERID_VER_ID_MSB        31
/* The width in bits of the ALT_SDMMC_VERID_VER_ID register field. */
#define ALT_SDMMC_VERID_VER_ID_WIDTH      32
/* The mask used to set the ALT_SDMMC_VERID_VER_ID register field value. */
#define ALT_SDMMC_VERID_VER_ID_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_VERID_VER_ID register field value. */
#define ALT_SDMMC_VERID_VER_ID_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_VERID_VER_ID register field. */
#define ALT_SDMMC_VERID_VER_ID_RESET      0x5342280a
/* Extracts the ALT_SDMMC_VERID_VER_ID field value from a register. */
#define ALT_SDMMC_VERID_VER_ID_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_VERID_VER_ID register field value suitable for setting the register. */
#define ALT_SDMMC_VERID_VER_ID_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_VERID.
 */
struct ALT_SDMMC_VERID_s
{
    const volatile uint32_t  VER_ID : 32;  /* ALT_SDMMC_VERID_VER_ID */
};

/* The typedef declaration for register ALT_SDMMC_VERID. */
typedef struct ALT_SDMMC_VERID_s  ALT_SDMMC_VERID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_VERID register. */
#define ALT_SDMMC_VERID_RESET       0x5342280a
/* The byte offset of the ALT_SDMMC_VERID register from the beginning of the component. */
#define ALT_SDMMC_VERID_OFST        0x6c
/* The address of the ALT_SDMMC_VERID register. */
#define ALT_SDMMC_VERID_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_VERID_OFST))

/*
 * Register : Hardware Configuration Register - HCON
 * 
 * Name: Hardware Configuration Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x70
 * 
 * Read/Write access: readHardware Configuration Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                     
 * :--------|:-------|:------|:---------------------------------
 *  [0]     | R      | 0x1   | ALT_SDMMC_HCON_CARD_TYPE        
 *  [5:1]   | R      | 0x0   | ALT_SDMMC_HCON_NUM_CARD         
 *  [6]     | R      | 0x0   | ALT_SDMMC_HCON_BUS_TYPE         
 *  [9:7]   | R      | 0x1   | ALT_SDMMC_HCON_H_DATA_WIDTH     
 *  [15:10] | R      | 0xc   | ALT_SDMMC_HCON_H_ADDR_WIDTH     
 *  [17:16] | R      | 0x0   | ALT_SDMMC_HCON_DMA_IF           
 *  [20:18] | R      | 0x1   | ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH
 *  [21]    | R      | 0x0   | ALT_SDMMC_HCON_FIFO_RAM_IN      
 *  [22]    | R      | 0x1   | ALT_SDMMC_HCON_HOLD_REG         
 *  [23]    | R      | 0x1   | ALT_SDMMC_HCON_FALSE_PATH       
 *  [25:24] | R      | 0x0   | ALT_SDMMC_HCON_NUM_CLK_DIC      
 *  [26]    | R      | 0x0   | ALT_SDMMC_HCON_AREA_OPT         
 *  [27]    | R      | 0x0   | ALT_SDMMC_HCON_ADDR_CONFIG      
 *  [31:28] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : CARD_TYPE
 * 
 * Card type
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description
 * :------------------------------------|:------|:------------
 *  ALT_SDMMC_HCON_CARD_TYPE_E_MMC_ONLY | 0x0   | MMC Only   
 *  ALT_SDMMC_HCON_CARD_TYPE_E_SDMMC    | 0x1   | SD MMC     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_CARD_TYPE
 * 
 * MMC Only
 */
#define ALT_SDMMC_HCON_CARD_TYPE_E_MMC_ONLY 0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_CARD_TYPE
 * 
 * SD MMC
 */
#define ALT_SDMMC_HCON_CARD_TYPE_E_SDMMC    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_CARD_TYPE register field. */
#define ALT_SDMMC_HCON_CARD_TYPE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_CARD_TYPE register field. */
#define ALT_SDMMC_HCON_CARD_TYPE_MSB        0
/* The width in bits of the ALT_SDMMC_HCON_CARD_TYPE register field. */
#define ALT_SDMMC_HCON_CARD_TYPE_WIDTH      1
/* The mask used to set the ALT_SDMMC_HCON_CARD_TYPE register field value. */
#define ALT_SDMMC_HCON_CARD_TYPE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_HCON_CARD_TYPE register field value. */
#define ALT_SDMMC_HCON_CARD_TYPE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_HCON_CARD_TYPE register field. */
#define ALT_SDMMC_HCON_CARD_TYPE_RESET      0x1
/* Extracts the ALT_SDMMC_HCON_CARD_TYPE field value from a register. */
#define ALT_SDMMC_HCON_CARD_TYPE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_HCON_CARD_TYPE register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_CARD_TYPE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : NUM_CARD
 * 
 * NUM_CARD - 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_NUM_CARD register field. */
#define ALT_SDMMC_HCON_NUM_CARD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_NUM_CARD register field. */
#define ALT_SDMMC_HCON_NUM_CARD_MSB        5
/* The width in bits of the ALT_SDMMC_HCON_NUM_CARD register field. */
#define ALT_SDMMC_HCON_NUM_CARD_WIDTH      5
/* The mask used to set the ALT_SDMMC_HCON_NUM_CARD register field value. */
#define ALT_SDMMC_HCON_NUM_CARD_SET_MSK    0x0000003e
/* The mask used to clear the ALT_SDMMC_HCON_NUM_CARD register field value. */
#define ALT_SDMMC_HCON_NUM_CARD_CLR_MSK    0xffffffc1
/* The reset value of the ALT_SDMMC_HCON_NUM_CARD register field. */
#define ALT_SDMMC_HCON_NUM_CARD_RESET      0x0
/* Extracts the ALT_SDMMC_HCON_NUM_CARD field value from a register. */
#define ALT_SDMMC_HCON_NUM_CARD_GET(value) (((value) & 0x0000003e) >> 1)
/* Produces a ALT_SDMMC_HCON_NUM_CARD register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_NUM_CARD_SET(value) (((value) << 1) & 0x0000003e)

/*
 * Field : BUS_TYPE
 * 
 * Bus type
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description
 * :------------------------------|:------|:------------
 *  ALT_SDMMC_HCON_BUS_TYPE_E_APB | 0x0   | APB Bus    
 *  ALT_SDMMC_HCON_BUS_TYPE_E_AHB | 0x1   | AHB bus    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_BUS_TYPE
 * 
 * APB Bus
 */
#define ALT_SDMMC_HCON_BUS_TYPE_E_APB   0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_BUS_TYPE
 * 
 * AHB bus
 */
#define ALT_SDMMC_HCON_BUS_TYPE_E_AHB   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_BUS_TYPE register field. */
#define ALT_SDMMC_HCON_BUS_TYPE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_BUS_TYPE register field. */
#define ALT_SDMMC_HCON_BUS_TYPE_MSB        6
/* The width in bits of the ALT_SDMMC_HCON_BUS_TYPE register field. */
#define ALT_SDMMC_HCON_BUS_TYPE_WIDTH      1
/* The mask used to set the ALT_SDMMC_HCON_BUS_TYPE register field value. */
#define ALT_SDMMC_HCON_BUS_TYPE_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_HCON_BUS_TYPE register field value. */
#define ALT_SDMMC_HCON_BUS_TYPE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_HCON_BUS_TYPE register field. */
#define ALT_SDMMC_HCON_BUS_TYPE_RESET      0x0
/* Extracts the ALT_SDMMC_HCON_BUS_TYPE field value from a register. */
#define ALT_SDMMC_HCON_BUS_TYPE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_HCON_BUS_TYPE register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_BUS_TYPE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : H_DATA_WIDTH
 * 
 * H Data Width
 * 
 * 000 - 16 bits
 * 
 * 001 - 32 bits
 * 
 * 010 - 64 bits
 * 
 * others - reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_H_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_H_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_MSB        9
/* The width in bits of the ALT_SDMMC_HCON_H_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_WIDTH      3
/* The mask used to set the ALT_SDMMC_HCON_H_DATA_WIDTH register field value. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_SET_MSK    0x00000380
/* The mask used to clear the ALT_SDMMC_HCON_H_DATA_WIDTH register field value. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_CLR_MSK    0xfffffc7f
/* The reset value of the ALT_SDMMC_HCON_H_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_RESET      0x1
/* Extracts the ALT_SDMMC_HCON_H_DATA_WIDTH field value from a register. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_GET(value) (((value) & 0x00000380) >> 7)
/* Produces a ALT_SDMMC_HCON_H_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_H_DATA_WIDTH_SET(value) (((value) << 7) & 0x00000380)

/*
 * Field : H_ADDR_WIDTH
 * 
 * H Address Width
 * 
 * 00 to 7  reserved
 * 
 * 8  9 bits
 * 
 * 9  10 bits
 * 
 * ...
 * 
 * 31  32 bits
 * 
 * 32 to 63  reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_H_ADDR_WIDTH register field. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_H_ADDR_WIDTH register field. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_MSB        15
/* The width in bits of the ALT_SDMMC_HCON_H_ADDR_WIDTH register field. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_WIDTH      6
/* The mask used to set the ALT_SDMMC_HCON_H_ADDR_WIDTH register field value. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_SET_MSK    0x0000fc00
/* The mask used to clear the ALT_SDMMC_HCON_H_ADDR_WIDTH register field value. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_CLR_MSK    0xffff03ff
/* The reset value of the ALT_SDMMC_HCON_H_ADDR_WIDTH register field. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_RESET      0xc
/* Extracts the ALT_SDMMC_HCON_H_ADDR_WIDTH field value from a register. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_GET(value) (((value) & 0x0000fc00) >> 10)
/* Produces a ALT_SDMMC_HCON_H_ADDR_WIDTH register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_H_ADDR_WIDTH_SET(value) (((value) << 10) & 0x0000fc00)

/*
 * Field : DMA_IF
 * 
 * DMA Interface
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description
 * :--------------------------------|:------|:------------
 *  ALT_SDMMC_HCON_DMA_IF_E_NONE    | 0x0   | None       
 *  ALT_SDMMC_HCON_DMA_IF_E_DW_DMA  | 0x1   | DW DMA     
 *  ALT_SDMMC_HCON_DMA_IF_E_GEN_DMA | 0x2   | Generic DMA
 *  ALT_SDMMC_HCON_DMA_IF_E_NDW_DMA | 0x3   | Non DW DMA 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_DMA_IF
 * 
 * None
 */
#define ALT_SDMMC_HCON_DMA_IF_E_NONE    0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_DMA_IF
 * 
 * DW DMA
 */
#define ALT_SDMMC_HCON_DMA_IF_E_DW_DMA  0x1
/*
 * Enumerated value for register field ALT_SDMMC_HCON_DMA_IF
 * 
 * Generic DMA
 */
#define ALT_SDMMC_HCON_DMA_IF_E_GEN_DMA 0x2
/*
 * Enumerated value for register field ALT_SDMMC_HCON_DMA_IF
 * 
 * Non DW DMA
 */
#define ALT_SDMMC_HCON_DMA_IF_E_NDW_DMA 0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_DMA_IF register field. */
#define ALT_SDMMC_HCON_DMA_IF_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_DMA_IF register field. */
#define ALT_SDMMC_HCON_DMA_IF_MSB        17
/* The width in bits of the ALT_SDMMC_HCON_DMA_IF register field. */
#define ALT_SDMMC_HCON_DMA_IF_WIDTH      2
/* The mask used to set the ALT_SDMMC_HCON_DMA_IF register field value. */
#define ALT_SDMMC_HCON_DMA_IF_SET_MSK    0x00030000
/* The mask used to clear the ALT_SDMMC_HCON_DMA_IF register field value. */
#define ALT_SDMMC_HCON_DMA_IF_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SDMMC_HCON_DMA_IF register field. */
#define ALT_SDMMC_HCON_DMA_IF_RESET      0x0
/* Extracts the ALT_SDMMC_HCON_DMA_IF field value from a register. */
#define ALT_SDMMC_HCON_DMA_IF_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SDMMC_HCON_DMA_IF register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_DMA_IF_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : GE_DMA_DATA_WIDTH
 * 
 * Generic DMA Data Width
 * 
 * 000 - 16 bits
 * 
 * 001 - 32 bits
 * 
 * 010 - 64 bits
 * 
 * others - reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_MSB        20
/* The width in bits of the ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_WIDTH      3
/* The mask used to set the ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH register field value. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_SET_MSK    0x001c0000
/* The mask used to clear the ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH register field value. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_CLR_MSK    0xffe3ffff
/* The reset value of the ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH register field. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_RESET      0x1
/* Extracts the ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH field value from a register. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_GET(value) (((value) & 0x001c0000) >> 18)
/* Produces a ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH_SET(value) (((value) << 18) & 0x001c0000)

/*
 * Field : FIFO_RAM_IN
 * 
 * FIFO Ram Inside
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description
 * :---------------------------------|:------|:------------
 *  ALT_SDMMC_HCON_FIFO_RAM_IN_E_NO  | 0x0   | Outside    
 *  ALT_SDMMC_HCON_FIFO_RAM_IN_E_YES | 0x1   | Inside     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_FIFO_RAM_IN
 * 
 * Outside
 */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_E_NO     0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_FIFO_RAM_IN
 * 
 * Inside
 */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_E_YES    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_FIFO_RAM_IN register field. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_FIFO_RAM_IN register field. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_MSB        21
/* The width in bits of the ALT_SDMMC_HCON_FIFO_RAM_IN register field. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_WIDTH      1
/* The mask used to set the ALT_SDMMC_HCON_FIFO_RAM_IN register field value. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_SET_MSK    0x00200000
/* The mask used to clear the ALT_SDMMC_HCON_FIFO_RAM_IN register field value. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_CLR_MSK    0xffdfffff
/* The reset value of the ALT_SDMMC_HCON_FIFO_RAM_IN register field. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_RESET      0x0
/* Extracts the ALT_SDMMC_HCON_FIFO_RAM_IN field value from a register. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_SDMMC_HCON_FIFO_RAM_IN register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_FIFO_RAM_IN_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : HOLD_REG
 * 
 * Implement HOLD register
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description     
 * :------------------------------|:------|:-----------------
 *  ALT_SDMMC_HCON_HOLD_REG_E_NO  | 0x0   | no hold register
 *  ALT_SDMMC_HCON_HOLD_REG_E_YES | 0x1   | hold register   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_HOLD_REG
 * 
 * no hold register
 */
#define ALT_SDMMC_HCON_HOLD_REG_E_NO    0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_HOLD_REG
 * 
 * hold register
 */
#define ALT_SDMMC_HCON_HOLD_REG_E_YES   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_HOLD_REG register field. */
#define ALT_SDMMC_HCON_HOLD_REG_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_HOLD_REG register field. */
#define ALT_SDMMC_HCON_HOLD_REG_MSB        22
/* The width in bits of the ALT_SDMMC_HCON_HOLD_REG register field. */
#define ALT_SDMMC_HCON_HOLD_REG_WIDTH      1
/* The mask used to set the ALT_SDMMC_HCON_HOLD_REG register field value. */
#define ALT_SDMMC_HCON_HOLD_REG_SET_MSK    0x00400000
/* The mask used to clear the ALT_SDMMC_HCON_HOLD_REG register field value. */
#define ALT_SDMMC_HCON_HOLD_REG_CLR_MSK    0xffbfffff
/* The reset value of the ALT_SDMMC_HCON_HOLD_REG register field. */
#define ALT_SDMMC_HCON_HOLD_REG_RESET      0x1
/* Extracts the ALT_SDMMC_HCON_HOLD_REG field value from a register. */
#define ALT_SDMMC_HCON_HOLD_REG_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_SDMMC_HCON_HOLD_REG register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_HOLD_REG_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : FALSE_PATH
 * 
 * Set Clock False Path
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description   
 * :--------------------------------|:------|:---------------
 *  ALT_SDMMC_HCON_FALSE_PATH_E_NO  | 0x0   | no false path 
 *  ALT_SDMMC_HCON_FALSE_PATH_E_YES | 0x1   | false path set
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_FALSE_PATH
 * 
 * no false path
 */
#define ALT_SDMMC_HCON_FALSE_PATH_E_NO  0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_FALSE_PATH
 * 
 * false path set
 */
#define ALT_SDMMC_HCON_FALSE_PATH_E_YES 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_FALSE_PATH register field. */
#define ALT_SDMMC_HCON_FALSE_PATH_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_FALSE_PATH register field. */
#define ALT_SDMMC_HCON_FALSE_PATH_MSB        23
/* The width in bits of the ALT_SDMMC_HCON_FALSE_PATH register field. */
#define ALT_SDMMC_HCON_FALSE_PATH_WIDTH      1
/* The mask used to set the ALT_SDMMC_HCON_FALSE_PATH register field value. */
#define ALT_SDMMC_HCON_FALSE_PATH_SET_MSK    0x00800000
/* The mask used to clear the ALT_SDMMC_HCON_FALSE_PATH register field value. */
#define ALT_SDMMC_HCON_FALSE_PATH_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SDMMC_HCON_FALSE_PATH register field. */
#define ALT_SDMMC_HCON_FALSE_PATH_RESET      0x1
/* Extracts the ALT_SDMMC_HCON_FALSE_PATH field value from a register. */
#define ALT_SDMMC_HCON_FALSE_PATH_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SDMMC_HCON_FALSE_PATH register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_FALSE_PATH_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : NUM_CLK_DIC
 * 
 * NUM_CLK_DIVIDER - 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_NUM_CLK_DIC register field. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_NUM_CLK_DIC register field. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_MSB        25
/* The width in bits of the ALT_SDMMC_HCON_NUM_CLK_DIC register field. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_WIDTH      2
/* The mask used to set the ALT_SDMMC_HCON_NUM_CLK_DIC register field value. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_SET_MSK    0x03000000
/* The mask used to clear the ALT_SDMMC_HCON_NUM_CLK_DIC register field value. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_CLR_MSK    0xfcffffff
/* The reset value of the ALT_SDMMC_HCON_NUM_CLK_DIC register field. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_RESET      0x0
/* Extracts the ALT_SDMMC_HCON_NUM_CLK_DIC field value from a register. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_SDMMC_HCON_NUM_CLK_DIC register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_NUM_CLK_DIC_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : AREA_OPT
 * 
 * Area Optimization
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description         
 * :------------------------------|:------|:---------------------
 *  ALT_SDMMC_HCON_AREA_OPT_E_NO  | 0x0   | no area optimization
 *  ALT_SDMMC_HCON_AREA_OPT_E_YES | 0x1   | Area optimization   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_AREA_OPT
 * 
 * no area optimization
 */
#define ALT_SDMMC_HCON_AREA_OPT_E_NO    0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_AREA_OPT
 * 
 * Area optimization
 */
#define ALT_SDMMC_HCON_AREA_OPT_E_YES   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_AREA_OPT register field. */
#define ALT_SDMMC_HCON_AREA_OPT_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_AREA_OPT register field. */
#define ALT_SDMMC_HCON_AREA_OPT_MSB        26
/* The width in bits of the ALT_SDMMC_HCON_AREA_OPT register field. */
#define ALT_SDMMC_HCON_AREA_OPT_WIDTH      1
/* The mask used to set the ALT_SDMMC_HCON_AREA_OPT register field value. */
#define ALT_SDMMC_HCON_AREA_OPT_SET_MSK    0x04000000
/* The mask used to clear the ALT_SDMMC_HCON_AREA_OPT register field value. */
#define ALT_SDMMC_HCON_AREA_OPT_CLR_MSK    0xfbffffff
/* The reset value of the ALT_SDMMC_HCON_AREA_OPT register field. */
#define ALT_SDMMC_HCON_AREA_OPT_RESET      0x0
/* Extracts the ALT_SDMMC_HCON_AREA_OPT field value from a register. */
#define ALT_SDMMC_HCON_AREA_OPT_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_SDMMC_HCON_AREA_OPT register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_AREA_OPT_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : ADDR_CONFIG
 * 
 * Address configuration
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description                
 * :------------------------------------|:------|:----------------------------
 *  ALT_SDMMC_HCON_ADDR_CONFIG_E_ADDR32 | 0x0   | 32-bit addressing supported
 *  ALT_SDMMC_HCON_ADDR_CONFIG_E_ADDR64 | 0x1   | 64-bit addressing supported
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_HCON_ADDR_CONFIG
 * 
 * 32-bit addressing supported
 */
#define ALT_SDMMC_HCON_ADDR_CONFIG_E_ADDR32 0x0
/*
 * Enumerated value for register field ALT_SDMMC_HCON_ADDR_CONFIG
 * 
 * 64-bit addressing supported
 */
#define ALT_SDMMC_HCON_ADDR_CONFIG_E_ADDR64 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_HCON_ADDR_CONFIG register field. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_HCON_ADDR_CONFIG register field. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_MSB        27
/* The width in bits of the ALT_SDMMC_HCON_ADDR_CONFIG register field. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_WIDTH      1
/* The mask used to set the ALT_SDMMC_HCON_ADDR_CONFIG register field value. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_SET_MSK    0x08000000
/* The mask used to clear the ALT_SDMMC_HCON_ADDR_CONFIG register field value. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_SDMMC_HCON_ADDR_CONFIG register field. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_RESET      0x0
/* Extracts the ALT_SDMMC_HCON_ADDR_CONFIG field value from a register. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_SDMMC_HCON_ADDR_CONFIG register field value suitable for setting the register. */
#define ALT_SDMMC_HCON_ADDR_CONFIG_SET(value) (((value) << 27) & 0x08000000)

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
 * The struct declaration for register ALT_SDMMC_HCON.
 */
struct ALT_SDMMC_HCON_s
{
    const volatile uint32_t  CARD_TYPE         :  1;  /* ALT_SDMMC_HCON_CARD_TYPE */
    const volatile uint32_t  NUM_CARD          :  5;  /* ALT_SDMMC_HCON_NUM_CARD */
    const volatile uint32_t  BUS_TYPE          :  1;  /* ALT_SDMMC_HCON_BUS_TYPE */
    const volatile uint32_t  H_DATA_WIDTH      :  3;  /* ALT_SDMMC_HCON_H_DATA_WIDTH */
    const volatile uint32_t  H_ADDR_WIDTH      :  6;  /* ALT_SDMMC_HCON_H_ADDR_WIDTH */
    const volatile uint32_t  DMA_IF            :  2;  /* ALT_SDMMC_HCON_DMA_IF */
    const volatile uint32_t  GE_DMA_DATA_WIDTH :  3;  /* ALT_SDMMC_HCON_GE_DMA_DATA_WIDTH */
    const volatile uint32_t  FIFO_RAM_IN       :  1;  /* ALT_SDMMC_HCON_FIFO_RAM_IN */
    const volatile uint32_t  HOLD_REG          :  1;  /* ALT_SDMMC_HCON_HOLD_REG */
    const volatile uint32_t  FALSE_PATH        :  1;  /* ALT_SDMMC_HCON_FALSE_PATH */
    const volatile uint32_t  NUM_CLK_DIC       :  2;  /* ALT_SDMMC_HCON_NUM_CLK_DIC */
    const volatile uint32_t  AREA_OPT          :  1;  /* ALT_SDMMC_HCON_AREA_OPT */
    const volatile uint32_t  ADDR_CONFIG       :  1;  /* ALT_SDMMC_HCON_ADDR_CONFIG */
    uint32_t                                   :  4;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_HCON. */
typedef struct ALT_SDMMC_HCON_s  ALT_SDMMC_HCON_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_HCON register. */
#define ALT_SDMMC_HCON_RESET       0x00c43081
/* The byte offset of the ALT_SDMMC_HCON register from the beginning of the component. */
#define ALT_SDMMC_HCON_OFST        0x70
/* The address of the ALT_SDMMC_HCON register. */
#define ALT_SDMMC_HCON_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_HCON_OFST))

/*
 * Register : UHS-1 Register - UHS_REG
 * 
 * Name: UHS-1 Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x74
 * 
 * Read/write access: write/read
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset | Description                  
 * :-----|:-------|:------|:------------------------------
 *  [0]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_0 
 *  [1]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_1 
 *  [2]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_2 
 *  [3]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_3 
 *  [4]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_4 
 *  [5]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_5 
 *  [6]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_6 
 *  [7]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_7 
 *  [8]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_8 
 *  [9]  | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_9 
 *  [10] | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_10
 *  [11] | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_11
 *  [12] | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_12
 *  [13] | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_13
 *  [14] | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_14
 *  [15] | RW     | 0x0   | ALT_SDMMC_UHS_REG_VOLT_REG_15
 *  [16] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_0  
 *  [17] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_1  
 *  [18] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_2  
 *  [19] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_3  
 *  [20] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_4  
 *  [21] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_5  
 *  [22] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_6  
 *  [23] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_7  
 *  [24] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_8  
 *  [25] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_9  
 *  [26] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_10 
 *  [27] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_11 
 *  [28] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_12 
 *  [29] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_13 
 *  [30] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_14 
 *  [31] | RW     | 0x0   | ALT_SDMMC_UHS_REG_DDR_REG_15 
 * 
 */
/*
 * Field : VOLT_REG_0
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_0_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_0_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_0
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_0
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_MSB        0
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_0 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_0 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_0 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_0 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : VOLT_REG_1
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_1_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_1_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_1
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_1
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_MSB        1
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_1 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_1 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_1 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_1 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : VOLT_REG_2
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_2_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_2_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_2
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_2
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_MSB        2
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_2 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_2 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_2 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_2 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : VOLT_REG_3
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_3_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_3_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_3
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_3
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_MSB        3
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_3 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_SET_MSK    0x00000008
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_3 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_3 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_3 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_3_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : VOLT_REG_4
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_4_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_4_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_4
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_4
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_MSB        4
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_4 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_4 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_4 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_4 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_4_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : VOLT_REG_5
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_5_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_5_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_5
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_5
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_MSB        5
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_5 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_5 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_5 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_5 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_5_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : VOLT_REG_6
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_6_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_6_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_6
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_6
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_MSB        6
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_6 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_6 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_6 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_6 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_6_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : VOLT_REG_7
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_7_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_7_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_7
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_7
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_MSB        7
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_7 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_7 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_7 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_7 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_7_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : VOLT_REG_8
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_8_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_8_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_8
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_8
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_MSB        8
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_8 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_8 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_8 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_8 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_8_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : VOLT_REG_9
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description                   
 * :-------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_9_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_9_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_9
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_E_VOL33    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_9
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_E_VOL18    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_MSB        9
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_9 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_9 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_9 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_9 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_9_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : VOLT_REG_10
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                   
 * :--------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_10_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_10_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_10
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_E_VOL33   0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_10
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_E_VOL18   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_MSB        10
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_10 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_10 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_10 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_10 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_10_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : VOLT_REG_11
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                   
 * :--------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_11_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_11_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_11
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_E_VOL33   0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_11
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_E_VOL18   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_MSB        11
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_11 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_11 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_11 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_11 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_11_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : VOLT_REG_12
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                   
 * :--------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_12_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_12_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_12
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_E_VOL33   0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_12
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_E_VOL18   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_MSB        12
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_12 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_SET_MSK    0x00001000
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_12 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_CLR_MSK    0xffffefff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_12 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_12 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_12_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : VOLT_REG_13
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                   
 * :--------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_13_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_13_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_13
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_E_VOL33   0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_13
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_E_VOL18   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_MSB        13
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_13 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_SET_MSK    0x00002000
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_13 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_13 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_13 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_13_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : VOLT_REG_14
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                   
 * :--------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_14_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_14_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_14
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_E_VOL33   0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_14
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_E_VOL18   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_MSB        14
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_14 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_SET_MSK    0x00004000
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_14 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_14 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_14 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_14_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : VOLT_REG_15
 * 
 * High Voltage mode. Determines the voltage fed to the buffers by an
 * 
 * external voltage regulator.
 * 
 * 0  Buffers supplied with 3.3V Vdd
 * 
 * 1  Buffers supplied with 1.8V Vdd
 * 
 * These bits function as the output of the host controller and are fed to an
 * external voltage regulator. The voltage regulator must switch the voltage of the
 * buffers of a particular card to either 3.3V or 1.8V, depending on the
 * 
 * value programmed in the register.
 * 
 * VOLT_REG[0] should be set to 1'b1 for card number 0 in order to make it
 * 
 * operate for 1.8V.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                   
 * :--------------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_UHS_REG_VOLT_REG_15_E_VOL33 | 0x0   | Buffers supplied with 3.3V Vdd
 *  ALT_SDMMC_UHS_REG_VOLT_REG_15_E_VOL18 | 0x1   | Buffers supplied with 1.8V Vdd
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_15
 * 
 * Buffers supplied with 3.3V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_E_VOL33   0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_VOLT_REG_15
 * 
 * Buffers supplied with 1.8V Vdd
 */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_E_VOL18   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_MSB        15
/* The width in bits of the ALT_SDMMC_UHS_REG_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_VOLT_REG_15 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_SET_MSK    0x00008000
/* The mask used to clear the ALT_SDMMC_UHS_REG_VOLT_REG_15 register field value. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SDMMC_UHS_REG_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_VOLT_REG_15 field value from a register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SDMMC_UHS_REG_VOLT_REG_15 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_VOLT_REG_15_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : DDR_REG_0
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_0_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_0_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_0
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_0
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_MSB        16
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_0 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_0 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_0 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_0 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : DDR_REG_1
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_1_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_1_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_1
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_1
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_MSB        17
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_1 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_1 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_1 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_1 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : DDR_REG_2
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_2_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_2_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_2
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_2
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_MSB        18
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_2 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_SET_MSK    0x00040000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_2 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_2 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_2 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_2_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : DDR_REG_3
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_3_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_3_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_3
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_3
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_MSB        19
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_3 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_SET_MSK    0x00080000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_3 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_3 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_3 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_3_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : DDR_REG_4
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_4_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_4_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_4
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_4
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_MSB        20
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_4 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_SET_MSK    0x00100000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_4 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_CLR_MSK    0xffefffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_4 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_4 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_4_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : DDR_REG_5
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_5_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_5_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_5
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_5
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_MSB        21
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_5 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_SET_MSK    0x00200000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_5 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_CLR_MSK    0xffdfffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_5 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_5 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_5_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : DDR_REG_6
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_6_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_6_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_6
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_6
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_MSB        22
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_6 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_SET_MSK    0x00400000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_6 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_CLR_MSK    0xffbfffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_6 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_6 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_6_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : DDR_REG_7
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_7_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_7_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_7
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_7
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_MSB        23
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_7 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_SET_MSK    0x00800000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_7 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_7 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_7 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_7_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : DDR_REG_8
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_8_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_8_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_8
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_8
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_MSB        24
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_8 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_SET_MSK    0x01000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_8 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_8 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_8 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_8_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : DDR_REG_9
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                
 * :---------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_9_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_9_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_9
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_9
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_MSB        25
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_9 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_SET_MSK    0x02000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_9 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_CLR_MSK    0xfdffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_9 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_9 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_9_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : DDR_REG_10
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                
 * :----------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_10_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_10_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_10
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_10
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_MSB        26
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_10 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_SET_MSK    0x04000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_10 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_CLR_MSK    0xfbffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_10 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_10 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_10_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : DDR_REG_11
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                
 * :----------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_11_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_11_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_11
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_11
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_MSB        27
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_11 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_SET_MSK    0x08000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_11 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_11 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_11 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_11_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : DDR_REG_12
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                
 * :----------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_12_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_12_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_12
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_12
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_MSB        28
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_12 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_SET_MSK    0x10000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_12 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_CLR_MSK    0xefffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_12 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_12 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_12_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : DDR_REG_13
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                
 * :----------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_13_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_13_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_13
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_13
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_MSB        29
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_13 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_SET_MSK    0x20000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_13 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_CLR_MSK    0xdfffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_13 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_13 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_13_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : DDR_REG_14
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                
 * :----------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_14_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_14_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_14
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_14
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_MSB        30
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_14 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_SET_MSK    0x40000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_14 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_14 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_14 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_14_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : DDR_REG_15
 * 
 * DDR mode. These bits indicate DDR mode of operation to the core for the data
 * transfer.
 * 
 * 0  Non-DDR mode
 * 
 * 1  DDR mode
 * 
 * UHS_REG [16] should be set for card number 0, UHS_REG [17] for card number 1 and
 * so on.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                
 * :----------------------------------------|:------|:--------------------------------------------
 *  ALT_SDMMC_UHS_REG_DDR_REG_15_E_DISABLED | 0x0   | Non DDR Mode;clear these bits in HS400 Mode
 *  ALT_SDMMC_UHS_REG_DDR_REG_15_E_ENABLED  | 0x1   | DDR Mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_15
 * 
 * Non DDR Mode;clear these bits in HS400 Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_DDR_REG_15
 * 
 * DDR Mode
 */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_DDR_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_MSB        31
/* The width in bits of the ALT_SDMMC_UHS_REG_DDR_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_DDR_REG_15 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_SET_MSK    0x80000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_DDR_REG_15 register field value. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SDMMC_UHS_REG_DDR_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_DDR_REG_15 field value from a register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SDMMC_UHS_REG_DDR_REG_15 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_DDR_REG_15_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SDMMC_UHS_REG.
 */
struct ALT_SDMMC_UHS_REG_s
{
    volatile uint32_t  VOLT_REG_0  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_0 */
    volatile uint32_t  VOLT_REG_1  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_1 */
    volatile uint32_t  VOLT_REG_2  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_2 */
    volatile uint32_t  VOLT_REG_3  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_3 */
    volatile uint32_t  VOLT_REG_4  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_4 */
    volatile uint32_t  VOLT_REG_5  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_5 */
    volatile uint32_t  VOLT_REG_6  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_6 */
    volatile uint32_t  VOLT_REG_7  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_7 */
    volatile uint32_t  VOLT_REG_8  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_8 */
    volatile uint32_t  VOLT_REG_9  :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_9 */
    volatile uint32_t  VOLT_REG_10 :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_10 */
    volatile uint32_t  VOLT_REG_11 :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_11 */
    volatile uint32_t  VOLT_REG_12 :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_12 */
    volatile uint32_t  VOLT_REG_13 :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_13 */
    volatile uint32_t  VOLT_REG_14 :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_14 */
    volatile uint32_t  VOLT_REG_15 :  1;  /* ALT_SDMMC_UHS_REG_VOLT_REG_15 */
    volatile uint32_t  DDR_REG_0   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_0 */
    volatile uint32_t  DDR_REG_1   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_1 */
    volatile uint32_t  DDR_REG_2   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_2 */
    volatile uint32_t  DDR_REG_3   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_3 */
    volatile uint32_t  DDR_REG_4   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_4 */
    volatile uint32_t  DDR_REG_5   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_5 */
    volatile uint32_t  DDR_REG_6   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_6 */
    volatile uint32_t  DDR_REG_7   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_7 */
    volatile uint32_t  DDR_REG_8   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_8 */
    volatile uint32_t  DDR_REG_9   :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_9 */
    volatile uint32_t  DDR_REG_10  :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_10 */
    volatile uint32_t  DDR_REG_11  :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_11 */
    volatile uint32_t  DDR_REG_12  :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_12 */
    volatile uint32_t  DDR_REG_13  :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_13 */
    volatile uint32_t  DDR_REG_14  :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_14 */
    volatile uint32_t  DDR_REG_15  :  1;  /* ALT_SDMMC_UHS_REG_DDR_REG_15 */
};

/* The typedef declaration for register ALT_SDMMC_UHS_REG. */
typedef struct ALT_SDMMC_UHS_REG_s  ALT_SDMMC_UHS_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_UHS_REG register. */
#define ALT_SDMMC_UHS_REG_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_UHS_REG register from the beginning of the component. */
#define ALT_SDMMC_UHS_REG_OFST        0x74
/* The address of the ALT_SDMMC_UHS_REG register. */
#define ALT_SDMMC_UHS_REG_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_UHS_REG_OFST))

/*
 * Register : Hardware Reset Register - RST_n
 * 
 * Name: H/W Reset
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x78
 * 
 * Read/write access: write/read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x1   | ALT_SDMMC_RST_N_CARD0_RESET
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : CARD0_RESET
 * 
 * Hardware reset.
 * 
 * 1  Active mode
 * 
 * 0  Reset
 * 
 * These bits cause the cards to enter pre-idle state, which requires them to be
 * re-initialized.
 * 
 * CARD_RESET[0] should be set to 1'b0 to reset card number 0
 * 
 * CARD_RESET[15] should be set to 1'b0 to reset card number 15.
 * 
 * The number of bits implemented is restricted to NUM_CARDS.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description   
 * :---------------------------------------|:------|:---------------
 *  ALT_SDMMC_RST_N_CARD0_RESET_E_ASSERT   | 0x0   | Reset         
 *  ALT_SDMMC_RST_N_CARD0_RESET_E_DEASSERT | 0x1   | 1  Active mode
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_RST_N_CARD0_RESET
 * 
 * Reset
 */
#define ALT_SDMMC_RST_N_CARD0_RESET_E_ASSERT    0x0
/*
 * Enumerated value for register field ALT_SDMMC_RST_N_CARD0_RESET
 * 
 * 1  Active mode
 */
#define ALT_SDMMC_RST_N_CARD0_RESET_E_DEASSERT  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_RST_N_CARD0_RESET register field. */
#define ALT_SDMMC_RST_N_CARD0_RESET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_RST_N_CARD0_RESET register field. */
#define ALT_SDMMC_RST_N_CARD0_RESET_MSB        0
/* The width in bits of the ALT_SDMMC_RST_N_CARD0_RESET register field. */
#define ALT_SDMMC_RST_N_CARD0_RESET_WIDTH      1
/* The mask used to set the ALT_SDMMC_RST_N_CARD0_RESET register field value. */
#define ALT_SDMMC_RST_N_CARD0_RESET_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_RST_N_CARD0_RESET register field value. */
#define ALT_SDMMC_RST_N_CARD0_RESET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_RST_N_CARD0_RESET register field. */
#define ALT_SDMMC_RST_N_CARD0_RESET_RESET      0x1
/* Extracts the ALT_SDMMC_RST_N_CARD0_RESET field value from a register. */
#define ALT_SDMMC_RST_N_CARD0_RESET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_RST_N_CARD0_RESET register field value suitable for setting the register. */
#define ALT_SDMMC_RST_N_CARD0_RESET_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SDMMC_RST_N.
 */
struct ALT_SDMMC_RST_N_s
{
    volatile uint32_t  CARD0_RESET :  1;  /* ALT_SDMMC_RST_N_CARD0_RESET */
    uint32_t                       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_RST_N. */
typedef struct ALT_SDMMC_RST_N_s  ALT_SDMMC_RST_N_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_RST_N register. */
#define ALT_SDMMC_RST_N_RESET       0x00000001
/* The byte offset of the ALT_SDMMC_RST_N register from the beginning of the component. */
#define ALT_SDMMC_RST_N_OFST        0x78
/* The address of the ALT_SDMMC_RST_N register. */
#define ALT_SDMMC_RST_N_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_RST_N_OFST))

/*
 * Register : Bus Mode Register - BMOD
 * 
 * Name: Bus Mode Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x80
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_BMOD_SWR
 *  [1]     | RW     | 0x0   | ALT_SDMMC_BMOD_FB 
 *  [6:2]   | RW     | 0x0   | ALT_SDMMC_BMOD_DSL
 *  [7]     | RW     | 0x0   | ALT_SDMMC_BMOD_DE 
 *  [10:8]  | R      | 0x0   | ALT_SDMMC_BMOD_PBL
 *  [31:11] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : SWR
 * 
 * Software Reset.When set,the DMA Controller resets all its internal registers.
 * 
 * SWR is read/write. It is automatically cleared after 1 clock cycle.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description         
 * :---------------------------|:------|:---------------------
 *  ALT_SDMMC_BMOD_SWR_E_FALSE | 0x0   | No change           
 *  ALT_SDMMC_BMOD_SWR_E_TRUE  | 0x1   | DMA controller reset
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_SWR
 * 
 * No change
 */
#define ALT_SDMMC_BMOD_SWR_E_FALSE  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_SWR
 * 
 * DMA controller reset
 */
#define ALT_SDMMC_BMOD_SWR_E_TRUE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BMOD_SWR register field. */
#define ALT_SDMMC_BMOD_SWR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BMOD_SWR register field. */
#define ALT_SDMMC_BMOD_SWR_MSB        0
/* The width in bits of the ALT_SDMMC_BMOD_SWR register field. */
#define ALT_SDMMC_BMOD_SWR_WIDTH      1
/* The mask used to set the ALT_SDMMC_BMOD_SWR register field value. */
#define ALT_SDMMC_BMOD_SWR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_BMOD_SWR register field value. */
#define ALT_SDMMC_BMOD_SWR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_BMOD_SWR register field. */
#define ALT_SDMMC_BMOD_SWR_RESET      0x0
/* Extracts the ALT_SDMMC_BMOD_SWR field value from a register. */
#define ALT_SDMMC_BMOD_SWR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_BMOD_SWR register field value suitable for setting the register. */
#define ALT_SDMMC_BMOD_SWR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FB
 * 
 * Fixed Burst. Controls whether the AHB Master interface performs fixed burst
 * transfers or not. When set,the AHB will use only SINGLE, INCR4, INCR8 or
 * 
 * INCR16 during start of normal burst transfers.When reset,the AHB will use SINGLE
 * and INCR burst transfer operations.
 * 
 * FB is read/write.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                      | Value | Description                              
 * :--------------------------|:------|:------------------------------------------
 *  ALT_SDMMC_BMOD_FB_E_FALSE | 0x0   | SINGLE and INCR burst transfer           
 *  ALT_SDMMC_BMOD_FB_E_TRUE  | 0x1   | SINGLE, INCR4, INCR8, or INCR16 transfers
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_FB
 * 
 * SINGLE and INCR burst transfer
 */
#define ALT_SDMMC_BMOD_FB_E_FALSE   0x0
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_FB
 * 
 * SINGLE, INCR4, INCR8, or INCR16 transfers
 */
#define ALT_SDMMC_BMOD_FB_E_TRUE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BMOD_FB register field. */
#define ALT_SDMMC_BMOD_FB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BMOD_FB register field. */
#define ALT_SDMMC_BMOD_FB_MSB        1
/* The width in bits of the ALT_SDMMC_BMOD_FB register field. */
#define ALT_SDMMC_BMOD_FB_WIDTH      1
/* The mask used to set the ALT_SDMMC_BMOD_FB register field value. */
#define ALT_SDMMC_BMOD_FB_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_BMOD_FB register field value. */
#define ALT_SDMMC_BMOD_FB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_BMOD_FB register field. */
#define ALT_SDMMC_BMOD_FB_RESET      0x0
/* Extracts the ALT_SDMMC_BMOD_FB field value from a register. */
#define ALT_SDMMC_BMOD_FB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_BMOD_FB register field value suitable for setting the register. */
#define ALT_SDMMC_BMOD_FB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : DSL
 * 
 * Descriptor Skip Length. Specifies the number of HWord/Word/Dword (depending on
 * 16/32/64-bit bus) to skip between two unchained descriptors. This is applicable
 * only for dual buffer structure.
 * 
 * DSL is read/write.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BMOD_DSL register field. */
#define ALT_SDMMC_BMOD_DSL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BMOD_DSL register field. */
#define ALT_SDMMC_BMOD_DSL_MSB        6
/* The width in bits of the ALT_SDMMC_BMOD_DSL register field. */
#define ALT_SDMMC_BMOD_DSL_WIDTH      5
/* The mask used to set the ALT_SDMMC_BMOD_DSL register field value. */
#define ALT_SDMMC_BMOD_DSL_SET_MSK    0x0000007c
/* The mask used to clear the ALT_SDMMC_BMOD_DSL register field value. */
#define ALT_SDMMC_BMOD_DSL_CLR_MSK    0xffffff83
/* The reset value of the ALT_SDMMC_BMOD_DSL register field. */
#define ALT_SDMMC_BMOD_DSL_RESET      0x0
/* Extracts the ALT_SDMMC_BMOD_DSL field value from a register. */
#define ALT_SDMMC_BMOD_DSL_GET(value) (((value) & 0x0000007c) >> 2)
/* Produces a ALT_SDMMC_BMOD_DSL register field value suitable for setting the register. */
#define ALT_SDMMC_BMOD_DSL_SET(value) (((value) << 2) & 0x0000007c)

/*
 * Field : DE
 * 
 * IDMAC Enable. When set, the IDMAC is enabled.
 * 
 * DE is read/write.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description                   
 * :-----------------------------|:------|:-------------------------------
 *  ALT_SDMMC_BMOD_DE_E_DISABLED | 0x0   | IDMAC is disabled             
 *  ALT_SDMMC_BMOD_DE_E_ENABLED  | 0x1   | When set, the IDMAC is enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_DE
 * 
 * IDMAC is disabled
 */
#define ALT_SDMMC_BMOD_DE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_DE
 * 
 * When set, the IDMAC is enabled
 */
#define ALT_SDMMC_BMOD_DE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BMOD_DE register field. */
#define ALT_SDMMC_BMOD_DE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BMOD_DE register field. */
#define ALT_SDMMC_BMOD_DE_MSB        7
/* The width in bits of the ALT_SDMMC_BMOD_DE register field. */
#define ALT_SDMMC_BMOD_DE_WIDTH      1
/* The mask used to set the ALT_SDMMC_BMOD_DE register field value. */
#define ALT_SDMMC_BMOD_DE_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_BMOD_DE register field value. */
#define ALT_SDMMC_BMOD_DE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_BMOD_DE register field. */
#define ALT_SDMMC_BMOD_DE_RESET      0x0
/* Extracts the ALT_SDMMC_BMOD_DE field value from a register. */
#define ALT_SDMMC_BMOD_DE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_BMOD_DE register field value suitable for setting the register. */
#define ALT_SDMMC_BMOD_DE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : PBL
 * 
 * Programmable Burst Length. These bits indicate the maximum number of beats to be
 * performed in one IDMAC transaction. The IDMAC will always attempt to burst as
 * specified in PBL each time it starts a Burst transfer on the host bus. The
 * permissible values are 1, 4, 8, 16, 32, 64, 128 and 256. This value is the
 * mirror of MSIZE of FIFOTH register. In order to change this value, write the
 * required value
 * 
 * to FIFOTH register. This is an encode value as follows.
 * 
 * 000  1 transfers
 * 
 * 001  4 transfers
 * 
 * 010  8 transfers
 * 
 * 011  16 transfers
 * 
 * 100  32 transfers
 * 
 * 101  64 transfers
 * 
 * 110  128 transfers
 * 
 * 111  256 transfers
 * 
 * Transfer unit is either 16, 32, or 64 bits, based on HDATA_WIDTH.
 * 
 * PBL is a read-only value and is applicable only for Data Access; it does not
 * apply to descriptor accesses.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                           | Value | Description 
 * :-------------------------------|:------|:-------------
 *  ALT_SDMMC_BMOD_PBL_E_BURST_1   | 0x0   | Burst of 1  
 *  ALT_SDMMC_BMOD_PBL_E_BURST_4   | 0x1   | Burst of 4  
 *  ALT_SDMMC_BMOD_PBL_E_BURST_8   | 0x2   | Burst of 8  
 *  ALT_SDMMC_BMOD_PBL_E_BURST_16  | 0x3   | Burst of 16 
 *  ALT_SDMMC_BMOD_PBL_E_BURST_32  | 0x4   | Burst of 32 
 *  ALT_SDMMC_BMOD_PBL_E_BURST_64  | 0x5   | Burst of 64 
 *  ALT_SDMMC_BMOD_PBL_E_BURST_128 | 0x6   | Burst of 128
 *  ALT_SDMMC_BMOD_PBL_E_BURST_256 | 0x7   | Burst of 256
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 1
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_1    0x0
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 4
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_4    0x1
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 8
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_8    0x2
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 16
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_16   0x3
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 32
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_32   0x4
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 64
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_64   0x5
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 128
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_128  0x6
/*
 * Enumerated value for register field ALT_SDMMC_BMOD_PBL
 * 
 * Burst of 256
 */
#define ALT_SDMMC_BMOD_PBL_E_BURST_256  0x7

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BMOD_PBL register field. */
#define ALT_SDMMC_BMOD_PBL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BMOD_PBL register field. */
#define ALT_SDMMC_BMOD_PBL_MSB        10
/* The width in bits of the ALT_SDMMC_BMOD_PBL register field. */
#define ALT_SDMMC_BMOD_PBL_WIDTH      3
/* The mask used to set the ALT_SDMMC_BMOD_PBL register field value. */
#define ALT_SDMMC_BMOD_PBL_SET_MSK    0x00000700
/* The mask used to clear the ALT_SDMMC_BMOD_PBL register field value. */
#define ALT_SDMMC_BMOD_PBL_CLR_MSK    0xfffff8ff
/* The reset value of the ALT_SDMMC_BMOD_PBL register field. */
#define ALT_SDMMC_BMOD_PBL_RESET      0x0
/* Extracts the ALT_SDMMC_BMOD_PBL field value from a register. */
#define ALT_SDMMC_BMOD_PBL_GET(value) (((value) & 0x00000700) >> 8)
/* Produces a ALT_SDMMC_BMOD_PBL register field value suitable for setting the register. */
#define ALT_SDMMC_BMOD_PBL_SET(value) (((value) << 8) & 0x00000700)

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
 * The struct declaration for register ALT_SDMMC_BMOD.
 */
struct ALT_SDMMC_BMOD_s
{
    volatile uint32_t        SWR :  1;  /* ALT_SDMMC_BMOD_SWR */
    volatile uint32_t        FB  :  1;  /* ALT_SDMMC_BMOD_FB */
    volatile uint32_t        DSL :  5;  /* ALT_SDMMC_BMOD_DSL */
    volatile uint32_t        DE  :  1;  /* ALT_SDMMC_BMOD_DE */
    const volatile uint32_t  PBL :  3;  /* ALT_SDMMC_BMOD_PBL */
    uint32_t                     : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_BMOD. */
typedef struct ALT_SDMMC_BMOD_s  ALT_SDMMC_BMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_BMOD register. */
#define ALT_SDMMC_BMOD_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_BMOD register from the beginning of the component. */
#define ALT_SDMMC_BMOD_OFST        0x80
/* The address of the ALT_SDMMC_BMOD register. */
#define ALT_SDMMC_BMOD_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_BMOD_OFST))

/*
 * Register : Poll Demand Register - PLDMND
 * 
 * Name: Poll Demand Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x84
 * 
 * Read/Write access: write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description        
 * :-------|:-------|:------|:--------------------
 *  [31:0] | W      | 0x0   | ALT_SDMMC_PLDMND_PD
 * 
 */
/*
 * Field : PD
 * 
 * Poll Demand. If the OWN bit of a descriptor is not set, the FSM goes to the
 * Suspend state. The host needs to write any value into this register for the
 * IDMAC FSM to resume normal
 * 
 * descriptor fetch operation. This is a write only register.
 * 
 * PD bit is write-only.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_PLDMND_PD register field. */
#define ALT_SDMMC_PLDMND_PD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_PLDMND_PD register field. */
#define ALT_SDMMC_PLDMND_PD_MSB        31
/* The width in bits of the ALT_SDMMC_PLDMND_PD register field. */
#define ALT_SDMMC_PLDMND_PD_WIDTH      32
/* The mask used to set the ALT_SDMMC_PLDMND_PD register field value. */
#define ALT_SDMMC_PLDMND_PD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_PLDMND_PD register field value. */
#define ALT_SDMMC_PLDMND_PD_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_PLDMND_PD register field. */
#define ALT_SDMMC_PLDMND_PD_RESET      0x0
/* Extracts the ALT_SDMMC_PLDMND_PD field value from a register. */
#define ALT_SDMMC_PLDMND_PD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_PLDMND_PD register field value suitable for setting the register. */
#define ALT_SDMMC_PLDMND_PD_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_PLDMND.
 */
struct ALT_SDMMC_PLDMND_s
{
    volatile uint32_t  PD : 32;  /* ALT_SDMMC_PLDMND_PD */
};

/* The typedef declaration for register ALT_SDMMC_PLDMND. */
typedef struct ALT_SDMMC_PLDMND_s  ALT_SDMMC_PLDMND_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_PLDMND register. */
#define ALT_SDMMC_PLDMND_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_PLDMND register from the beginning of the component. */
#define ALT_SDMMC_PLDMND_OFST        0x84
/* The address of the ALT_SDMMC_PLDMND register. */
#define ALT_SDMMC_PLDMND_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_PLDMND_OFST))

/*
 * Register : Descriptor List Base Address Register - DBADDR
 * 
 * Name: Descriptor List Base Address Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x88
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description         
 * :-------|:-------|:------|:---------------------
 *  [31:0] | RW     | 0x0   | ALT_SDMMC_DBADDR_SDL
 * 
 */
/*
 * Field : SDL
 * 
 * Start of Descriptor List. Contains the base address of the First Descriptor.
 * 
 * The LSB bits [0/1/2:0] for 16/32/64-bit bus-width) are ignored and taken as all-
 * zero by the IDMAC internally. Hence these LSB bits are read-only.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_DBADDR_SDL register field. */
#define ALT_SDMMC_DBADDR_SDL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_DBADDR_SDL register field. */
#define ALT_SDMMC_DBADDR_SDL_MSB        31
/* The width in bits of the ALT_SDMMC_DBADDR_SDL register field. */
#define ALT_SDMMC_DBADDR_SDL_WIDTH      32
/* The mask used to set the ALT_SDMMC_DBADDR_SDL register field value. */
#define ALT_SDMMC_DBADDR_SDL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_DBADDR_SDL register field value. */
#define ALT_SDMMC_DBADDR_SDL_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_DBADDR_SDL register field. */
#define ALT_SDMMC_DBADDR_SDL_RESET      0x0
/* Extracts the ALT_SDMMC_DBADDR_SDL field value from a register. */
#define ALT_SDMMC_DBADDR_SDL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_DBADDR_SDL register field value suitable for setting the register. */
#define ALT_SDMMC_DBADDR_SDL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_DBADDR.
 */
struct ALT_SDMMC_DBADDR_s
{
    volatile uint32_t  SDL : 32;  /* ALT_SDMMC_DBADDR_SDL */
};

/* The typedef declaration for register ALT_SDMMC_DBADDR. */
typedef struct ALT_SDMMC_DBADDR_s  ALT_SDMMC_DBADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_DBADDR register. */
#define ALT_SDMMC_DBADDR_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_DBADDR register from the beginning of the component. */
#define ALT_SDMMC_DBADDR_OFST        0x88
/* The address of the ALT_SDMMC_DBADDR register. */
#define ALT_SDMMC_DBADDR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_DBADDR_OFST))

/*
 * Register : Internal DMAC Status Register - IDSTS
 * 
 * Name: Internal DMAC Status Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x8C
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description        
 * :--------|:-------|:------|:--------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_IDSTS_TI 
 *  [1]     | RW     | 0x0   | ALT_SDMMC_IDSTS_RI 
 *  [2]     | RW     | 0x0   | ALT_SDMMC_IDSTS_FBE
 *  [3]     | ???    | 0x0   | *UNDEFINED*        
 *  [4]     | RW     | 0x0   | ALT_SDMMC_IDSTS_DU 
 *  [5]     | RW     | 0x0   | ALT_SDMMC_IDSTS_CES
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*        
 *  [8]     | RW     | 0x0   | ALT_SDMMC_IDSTS_NIS
 *  [9]     | RW     | 0x0   | ALT_SDMMC_IDSTS_AIS
 *  [12:10] | R      | 0x0   | ALT_SDMMC_IDSTS_EB 
 *  [16:13] | R      | 0x0   | ALT_SDMMC_IDSTS_FSM
 *  [31:17] | ???    | 0x0   | *UNDEFINED*        
 * 
 */
/*
 * Field : TI
 * 
 * Transmit Interrupt. Indicates that data transmission is finished for a
 * descriptor. Writing a '1' clears this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description                
 * :---------------------------|:------|:----------------------------
 *  ALT_SDMMC_IDSTS_TI_E_SET   | 0x0   | Transmit Interrupt is set  
 *  ALT_SDMMC_IDSTS_TI_E_CLEAR | 0x1   | Writing a 1 clears this bit
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_TI
 * 
 * Transmit Interrupt is set
 */
#define ALT_SDMMC_IDSTS_TI_E_SET    0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_TI
 * 
 * Writing a 1 clears this bit
 */
#define ALT_SDMMC_IDSTS_TI_E_CLEAR  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_TI register field. */
#define ALT_SDMMC_IDSTS_TI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_TI register field. */
#define ALT_SDMMC_IDSTS_TI_MSB        0
/* The width in bits of the ALT_SDMMC_IDSTS_TI register field. */
#define ALT_SDMMC_IDSTS_TI_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDSTS_TI register field value. */
#define ALT_SDMMC_IDSTS_TI_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_IDSTS_TI register field value. */
#define ALT_SDMMC_IDSTS_TI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_IDSTS_TI register field. */
#define ALT_SDMMC_IDSTS_TI_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_TI field value from a register. */
#define ALT_SDMMC_IDSTS_TI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_IDSTS_TI register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_TI_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RI
 * 
 * Receive Interrupt. Indicates the completion of data reception for a descriptor.
 * Writing a 1 clears this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description                
 * :---------------------------|:------|:----------------------------
 *  ALT_SDMMC_IDSTS_RI_E_SET   | 0x0   | Receive Interrupt is set   
 *  ALT_SDMMC_IDSTS_RI_E_CLEAR | 0x1   | Writing a 1 clears this bit
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_RI
 * 
 * Receive Interrupt is set
 */
#define ALT_SDMMC_IDSTS_RI_E_SET    0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_RI
 * 
 * Writing a 1 clears this bit
 */
#define ALT_SDMMC_IDSTS_RI_E_CLEAR  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_RI register field. */
#define ALT_SDMMC_IDSTS_RI_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_RI register field. */
#define ALT_SDMMC_IDSTS_RI_MSB        1
/* The width in bits of the ALT_SDMMC_IDSTS_RI register field. */
#define ALT_SDMMC_IDSTS_RI_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDSTS_RI register field value. */
#define ALT_SDMMC_IDSTS_RI_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_IDSTS_RI register field value. */
#define ALT_SDMMC_IDSTS_RI_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_IDSTS_RI register field. */
#define ALT_SDMMC_IDSTS_RI_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_RI field value from a register. */
#define ALT_SDMMC_IDSTS_RI_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_IDSTS_RI register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_RI_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FBE
 * 
 * Fatal Bus Error Interrupt. Indicates that a Bus Error occurred (IDSTS[12:10]).
 * When this bit is set, the DMA disables all its bus accesses. Writing a 1 clears
 * this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description                     
 * :----------------------------|:------|:---------------------------------
 *  ALT_SDMMC_IDSTS_FBE_E_SET   | 0x0   | Fatal Bus Error Interrupt is set
 *  ALT_SDMMC_IDSTS_FBE_E_CLEAR | 0x1   | Writing a 1 clears this bit     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_FBE
 * 
 * Fatal Bus Error Interrupt is set
 */
#define ALT_SDMMC_IDSTS_FBE_E_SET   0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_FBE
 * 
 * Writing a 1 clears this bit
 */
#define ALT_SDMMC_IDSTS_FBE_E_CLEAR 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_FBE register field. */
#define ALT_SDMMC_IDSTS_FBE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_FBE register field. */
#define ALT_SDMMC_IDSTS_FBE_MSB        2
/* The width in bits of the ALT_SDMMC_IDSTS_FBE register field. */
#define ALT_SDMMC_IDSTS_FBE_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDSTS_FBE register field value. */
#define ALT_SDMMC_IDSTS_FBE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_IDSTS_FBE register field value. */
#define ALT_SDMMC_IDSTS_FBE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_IDSTS_FBE register field. */
#define ALT_SDMMC_IDSTS_FBE_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_FBE field value from a register. */
#define ALT_SDMMC_IDSTS_FBE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_IDSTS_FBE register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_FBE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DU
 * 
 * Descriptor Unavailable Interrupt. This bit is set when the descriptor is
 * unavailable due to OWN bit = 0 (DES0[31] =0). Writing a 1 clears this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                       | Value | Description                            
 * :---------------------------|:------|:----------------------------------------
 *  ALT_SDMMC_IDSTS_DU_E_SET   | 0x0   | Descriptor Unavailable Interrupt is set
 *  ALT_SDMMC_IDSTS_DU_E_CLEAR | 0x1   | Writing a 1 clears this bit            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_DU
 * 
 * Descriptor Unavailable Interrupt is set
 */
#define ALT_SDMMC_IDSTS_DU_E_SET    0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_DU
 * 
 * Writing a 1 clears this bit
 */
#define ALT_SDMMC_IDSTS_DU_E_CLEAR  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_DU register field. */
#define ALT_SDMMC_IDSTS_DU_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_DU register field. */
#define ALT_SDMMC_IDSTS_DU_MSB        4
/* The width in bits of the ALT_SDMMC_IDSTS_DU register field. */
#define ALT_SDMMC_IDSTS_DU_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDSTS_DU register field value. */
#define ALT_SDMMC_IDSTS_DU_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_IDSTS_DU register field value. */
#define ALT_SDMMC_IDSTS_DU_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_IDSTS_DU register field. */
#define ALT_SDMMC_IDSTS_DU_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_DU field value from a register. */
#define ALT_SDMMC_IDSTS_DU_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_IDSTS_DU register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_DU_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : CES
 * 
 * Card Error Summary. Indicates the status of the transaction to/from the card;
 * also present in RINTSTS. Indicates the logical OR of the following bits:
 * 
 * EBE  End Bit Error
 * 
 * RTO  Response Timeout/Boot Ack Timeout
 * 
 * RCRC  Response CRC
 * 
 * SBE  Start Bit Error
 * 
 * DRTO  Data Read Timeout/BDS timeout
 * 
 * DCRC  Data CRC for Receive
 * 
 * RE  Response Error
 * 
 * Writing a 1 clears this bit.
 * 
 * The abort condition of the IDMAC depends on the setting of this CES bit. If the
 * CES bit
 * 
 * is enabled, then the IDMAC aborts on a "response error"; however, it will
 * not abort if the
 * 
 * CES bit is cleared.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description                
 * :----------------------------|:------|:----------------------------
 *  ALT_SDMMC_IDSTS_CES_E_SET   | 0x0   | Card Error Summary is set  
 *  ALT_SDMMC_IDSTS_CES_E_CLEAR | 0x1   | Writing a 1 clears this bit
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_CES
 * 
 * Card Error Summary is set
 */
#define ALT_SDMMC_IDSTS_CES_E_SET   0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_CES
 * 
 * Writing a 1 clears this bit
 */
#define ALT_SDMMC_IDSTS_CES_E_CLEAR 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_CES register field. */
#define ALT_SDMMC_IDSTS_CES_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_CES register field. */
#define ALT_SDMMC_IDSTS_CES_MSB        5
/* The width in bits of the ALT_SDMMC_IDSTS_CES register field. */
#define ALT_SDMMC_IDSTS_CES_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDSTS_CES register field value. */
#define ALT_SDMMC_IDSTS_CES_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_IDSTS_CES register field value. */
#define ALT_SDMMC_IDSTS_CES_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_IDSTS_CES register field. */
#define ALT_SDMMC_IDSTS_CES_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_CES field value from a register. */
#define ALT_SDMMC_IDSTS_CES_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_IDSTS_CES register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_CES_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : NIS
 * 
 * Normal Interrupt Summary. Logical OR of the following:
 * 
 * IDSTS[0]-Transmit Interrupt
 * 
 * IDSTS[1]-Receive Interrupt
 * 
 * Only unmasked bits affect this bit.
 * 
 * This is a sticky bit and must be cleared each time a corresponding bit that
 * causes NIS
 * 
 * to be set is cleared. Writing a 1 clears this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description                      
 * :----------------------------|:------|:----------------------------------
 *  ALT_SDMMC_IDSTS_NIS_E_SET   | 0x0   | A normal interrupt Summary is set
 *  ALT_SDMMC_IDSTS_NIS_E_CLEAR | 0x1   | Writing a 1 clears this bit      
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_NIS
 * 
 * A normal interrupt Summary is set
 */
#define ALT_SDMMC_IDSTS_NIS_E_SET   0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_NIS
 * 
 * Writing a 1 clears this bit
 */
#define ALT_SDMMC_IDSTS_NIS_E_CLEAR 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_NIS register field. */
#define ALT_SDMMC_IDSTS_NIS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_NIS register field. */
#define ALT_SDMMC_IDSTS_NIS_MSB        8
/* The width in bits of the ALT_SDMMC_IDSTS_NIS register field. */
#define ALT_SDMMC_IDSTS_NIS_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDSTS_NIS register field value. */
#define ALT_SDMMC_IDSTS_NIS_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_IDSTS_NIS register field value. */
#define ALT_SDMMC_IDSTS_NIS_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_IDSTS_NIS register field. */
#define ALT_SDMMC_IDSTS_NIS_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_NIS field value from a register. */
#define ALT_SDMMC_IDSTS_NIS_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_IDSTS_NIS register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_NIS_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : AIS
 * 
 * Abnormal Interrupt Summary. Logical OR of the following:
 * 
 * IDSTS[2]-Fatal Bus Interrupt
 * 
 * IDSTS[4]-DU bit Interrupt
 * 
 * Only unmasked bits affect this bit.
 * 
 * This is a sticky bit and must be cleared each time a corresponding bit that
 * causes AIS
 * 
 * to be set is cleared. Writing a 1 clears this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                        | Value | Description                        
 * :----------------------------|:------|:------------------------------------
 *  ALT_SDMMC_IDSTS_AIS_E_SET   | 0x0   | A abnormal interrupt Summary is set
 *  ALT_SDMMC_IDSTS_AIS_E_CLEAR | 0x1   | Writing a 1 clears this bit        
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_AIS
 * 
 * A abnormal interrupt Summary is set
 */
#define ALT_SDMMC_IDSTS_AIS_E_SET   0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDSTS_AIS
 * 
 * Writing a 1 clears this bit
 */
#define ALT_SDMMC_IDSTS_AIS_E_CLEAR 0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_AIS register field. */
#define ALT_SDMMC_IDSTS_AIS_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_AIS register field. */
#define ALT_SDMMC_IDSTS_AIS_MSB        9
/* The width in bits of the ALT_SDMMC_IDSTS_AIS register field. */
#define ALT_SDMMC_IDSTS_AIS_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDSTS_AIS register field value. */
#define ALT_SDMMC_IDSTS_AIS_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_IDSTS_AIS register field value. */
#define ALT_SDMMC_IDSTS_AIS_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_IDSTS_AIS register field. */
#define ALT_SDMMC_IDSTS_AIS_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_AIS field value from a register. */
#define ALT_SDMMC_IDSTS_AIS_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_IDSTS_AIS register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_AIS_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : EB
 * 
 * Error Bits. Indicates the type of error that caused a Bus Error.
 * 
 * Valid only with Fatal Bus
 * 
 * Error bitIDSTS[2] set. This field does not generate an interrupt.
 * 
 * 3'b001  Host Abort received during transmission
 * 
 * 3'b010  Host Abort received during reception
 * 
 * Others: Reserved
 * 
 * EB is read-only.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_EB register field. */
#define ALT_SDMMC_IDSTS_EB_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_EB register field. */
#define ALT_SDMMC_IDSTS_EB_MSB        12
/* The width in bits of the ALT_SDMMC_IDSTS_EB register field. */
#define ALT_SDMMC_IDSTS_EB_WIDTH      3
/* The mask used to set the ALT_SDMMC_IDSTS_EB register field value. */
#define ALT_SDMMC_IDSTS_EB_SET_MSK    0x00001c00
/* The mask used to clear the ALT_SDMMC_IDSTS_EB register field value. */
#define ALT_SDMMC_IDSTS_EB_CLR_MSK    0xffffe3ff
/* The reset value of the ALT_SDMMC_IDSTS_EB register field. */
#define ALT_SDMMC_IDSTS_EB_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_EB field value from a register. */
#define ALT_SDMMC_IDSTS_EB_GET(value) (((value) & 0x00001c00) >> 10)
/* Produces a ALT_SDMMC_IDSTS_EB register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_EB_SET(value) (((value) << 10) & 0x00001c00)

/*
 * Field : FSM
 * 
 * DMAC FSM present state.
 * 
 * 0  DMA_IDLE
 * 
 * 1  DMA_SUSPEND
 * 
 * 2  DESC_RD
 * 
 * 3  DESC_CHK
 * 
 * 4  DMA_RD_REQ_WAIT
 * 
 * 5  DMA_WR_REQ_WAIT
 * 
 * 6  DMA_RD
 * 
 * 7  DMA_WR
 * 
 * 8  DESC_CLOSE
 * 
 * This bit is read-only.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDSTS_FSM register field. */
#define ALT_SDMMC_IDSTS_FSM_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDSTS_FSM register field. */
#define ALT_SDMMC_IDSTS_FSM_MSB        16
/* The width in bits of the ALT_SDMMC_IDSTS_FSM register field. */
#define ALT_SDMMC_IDSTS_FSM_WIDTH      4
/* The mask used to set the ALT_SDMMC_IDSTS_FSM register field value. */
#define ALT_SDMMC_IDSTS_FSM_SET_MSK    0x0001e000
/* The mask used to clear the ALT_SDMMC_IDSTS_FSM register field value. */
#define ALT_SDMMC_IDSTS_FSM_CLR_MSK    0xfffe1fff
/* The reset value of the ALT_SDMMC_IDSTS_FSM register field. */
#define ALT_SDMMC_IDSTS_FSM_RESET      0x0
/* Extracts the ALT_SDMMC_IDSTS_FSM field value from a register. */
#define ALT_SDMMC_IDSTS_FSM_GET(value) (((value) & 0x0001e000) >> 13)
/* Produces a ALT_SDMMC_IDSTS_FSM register field value suitable for setting the register. */
#define ALT_SDMMC_IDSTS_FSM_SET(value) (((value) << 13) & 0x0001e000)

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
 * The struct declaration for register ALT_SDMMC_IDSTS.
 */
struct ALT_SDMMC_IDSTS_s
{
    volatile uint32_t        TI  :  1;  /* ALT_SDMMC_IDSTS_TI */
    volatile uint32_t        RI  :  1;  /* ALT_SDMMC_IDSTS_RI */
    volatile uint32_t        FBE :  1;  /* ALT_SDMMC_IDSTS_FBE */
    uint32_t                     :  1;  /* *UNDEFINED* */
    volatile uint32_t        DU  :  1;  /* ALT_SDMMC_IDSTS_DU */
    volatile uint32_t        CES :  1;  /* ALT_SDMMC_IDSTS_CES */
    uint32_t                     :  2;  /* *UNDEFINED* */
    volatile uint32_t        NIS :  1;  /* ALT_SDMMC_IDSTS_NIS */
    volatile uint32_t        AIS :  1;  /* ALT_SDMMC_IDSTS_AIS */
    const volatile uint32_t  EB  :  3;  /* ALT_SDMMC_IDSTS_EB */
    const volatile uint32_t  FSM :  4;  /* ALT_SDMMC_IDSTS_FSM */
    uint32_t                     : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_IDSTS. */
typedef struct ALT_SDMMC_IDSTS_s  ALT_SDMMC_IDSTS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_IDSTS register. */
#define ALT_SDMMC_IDSTS_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_IDSTS register from the beginning of the component. */
#define ALT_SDMMC_IDSTS_OFST        0x8c
/* The address of the ALT_SDMMC_IDSTS register. */
#define ALT_SDMMC_IDSTS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_IDSTS_OFST))

/*
 * Register : Internal DMAC Interrupt Enable Register - IDINTEN
 * 
 * Name: Internal DMAC Interrupt Enable Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x90
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description          
 * :--------|:-------|:------|:----------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_IDINTEN_TI 
 *  [1]     | RW     | 0x0   | ALT_SDMMC_IDINTEN_RI 
 *  [2]     | RW     | 0x0   | ALT_SDMMC_IDINTEN_FBE
 *  [3]     | ???    | 0x0   | *UNDEFINED*          
 *  [4]     | RW     | 0x0   | ALT_SDMMC_IDINTEN_DU 
 *  [5]     | RW     | 0x0   | ALT_SDMMC_IDINTEN_CES
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*          
 *  [8]     | RW     | 0x0   | ALT_SDMMC_IDINTEN_NI 
 *  [9]     | RW     | 0x0   | ALT_SDMMC_IDINTEN_AI 
 *  [31:10] | ???    | 0x0   | *UNDEFINED*          
 * 
 */
/*
 * Field : TI
 * 
 * Transmit Interrupt Enable. When set with Normal Interrupt Summary Enable,
 * Transmit Interrupt is enabled. When reset, Transmit Interrupt is disabled.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                                   
 * :--------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_IDINTEN_TI_E_DISABLED | 0x0   | Transmit Interrupt is disabled                
 *  ALT_SDMMC_IDINTEN_TI_E_ENABLED  | 0x1   | When set with Normal Interrupt Summary Enable,
 * :                                |       | Transmit Interrupt is enabled                 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_TI
 * 
 * Transmit Interrupt is disabled
 */
#define ALT_SDMMC_IDINTEN_TI_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_TI
 * 
 * When set with Normal Interrupt Summary Enable, Transmit Interrupt is enabled
 */
#define ALT_SDMMC_IDINTEN_TI_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDINTEN_TI register field. */
#define ALT_SDMMC_IDINTEN_TI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDINTEN_TI register field. */
#define ALT_SDMMC_IDINTEN_TI_MSB        0
/* The width in bits of the ALT_SDMMC_IDINTEN_TI register field. */
#define ALT_SDMMC_IDINTEN_TI_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDINTEN_TI register field value. */
#define ALT_SDMMC_IDINTEN_TI_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_IDINTEN_TI register field value. */
#define ALT_SDMMC_IDINTEN_TI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_IDINTEN_TI register field. */
#define ALT_SDMMC_IDINTEN_TI_RESET      0x0
/* Extracts the ALT_SDMMC_IDINTEN_TI field value from a register. */
#define ALT_SDMMC_IDINTEN_TI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_IDINTEN_TI register field value suitable for setting the register. */
#define ALT_SDMMC_IDINTEN_TI_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RI
 * 
 * Receive Interrupt Enable. When set with Normal Interrupt Summary Enable, Receive
 * Interrupt is enabled. When reset, Receive Interrupt is disabled.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                                   
 * :--------------------------------|:------|:-----------------------------------------------
 *  ALT_SDMMC_IDINTEN_RI_E_DISABLED | 0x0   | Receive Interrupt is disabled                 
 *  ALT_SDMMC_IDINTEN_RI_E_ENABLED  | 0x1   | When set with Normal Interrupt Summary Enable,
 * :                                |       | Receive Interrupt is enabled                  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_RI
 * 
 * Receive Interrupt is disabled
 */
#define ALT_SDMMC_IDINTEN_RI_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_RI
 * 
 * When set with Normal Interrupt Summary Enable, Receive Interrupt is enabled
 */
#define ALT_SDMMC_IDINTEN_RI_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDINTEN_RI register field. */
#define ALT_SDMMC_IDINTEN_RI_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDINTEN_RI register field. */
#define ALT_SDMMC_IDINTEN_RI_MSB        1
/* The width in bits of the ALT_SDMMC_IDINTEN_RI register field. */
#define ALT_SDMMC_IDINTEN_RI_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDINTEN_RI register field value. */
#define ALT_SDMMC_IDINTEN_RI_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_IDINTEN_RI register field value. */
#define ALT_SDMMC_IDINTEN_RI_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_IDINTEN_RI register field. */
#define ALT_SDMMC_IDINTEN_RI_RESET      0x0
/* Extracts the ALT_SDMMC_IDINTEN_RI field value from a register. */
#define ALT_SDMMC_IDINTEN_RI_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_IDINTEN_RI register field value suitable for setting the register. */
#define ALT_SDMMC_IDINTEN_RI_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FBE
 * 
 * Fatal Bus Error Enable. When set with Abnormal Interrupt Summary Enable, the
 * Fatal Bus Error Interrupt is enabled. When reset, Fatal Bus Error Enable
 * Interrupt is disabled.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description                                     
 * :---------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_IDINTEN_FBE_E_DISABLED | 0x0   | Fatal Bus Error Enable Interrupt is disabled    
 *  ALT_SDMMC_IDINTEN_FBE_E_ENABLED  | 0x1   | When set with Abnormal Interrupt Summary Enable,
 * :                                 |       | the Fatal Bus Error Interrupt is enabled        
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_FBE
 * 
 * Fatal Bus Error Enable Interrupt is disabled
 */
#define ALT_SDMMC_IDINTEN_FBE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_FBE
 * 
 * When set with Abnormal Interrupt Summary Enable, the Fatal Bus Error Interrupt
 * is enabled
 */
#define ALT_SDMMC_IDINTEN_FBE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDINTEN_FBE register field. */
#define ALT_SDMMC_IDINTEN_FBE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDINTEN_FBE register field. */
#define ALT_SDMMC_IDINTEN_FBE_MSB        2
/* The width in bits of the ALT_SDMMC_IDINTEN_FBE register field. */
#define ALT_SDMMC_IDINTEN_FBE_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDINTEN_FBE register field value. */
#define ALT_SDMMC_IDINTEN_FBE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_IDINTEN_FBE register field value. */
#define ALT_SDMMC_IDINTEN_FBE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_IDINTEN_FBE register field. */
#define ALT_SDMMC_IDINTEN_FBE_RESET      0x0
/* Extracts the ALT_SDMMC_IDINTEN_FBE field value from a register. */
#define ALT_SDMMC_IDINTEN_FBE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_IDINTEN_FBE register field value suitable for setting the register. */
#define ALT_SDMMC_IDINTEN_FBE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DU
 * 
 * Descriptor Unavailable Interrupt. When set along with Abnormal Interrupt Summary
 * Enable, the DU interrupt is enabled.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                                     
 * :--------------------------------|:------|:-------------------------------------------------
 *  ALT_SDMMC_IDINTEN_DU_E_DISABLED | 0x0   | The Descriptor Unavailable interrupt is disabled
 *  ALT_SDMMC_IDINTEN_DU_E_ENABLED  | 0x1   | When set along with Abnormal Interrupt Summary  
 * :                                |       | Enable, the Descriptor Unavailable interrupt is 
 * :                                |       | enabled                                         
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_DU
 * 
 * The Descriptor Unavailable interrupt is disabled
 */
#define ALT_SDMMC_IDINTEN_DU_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_DU
 * 
 * When set along with Abnormal Interrupt Summary Enable, the Descriptor
 * Unavailable interrupt is enabled
 */
#define ALT_SDMMC_IDINTEN_DU_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDINTEN_DU register field. */
#define ALT_SDMMC_IDINTEN_DU_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDINTEN_DU register field. */
#define ALT_SDMMC_IDINTEN_DU_MSB        4
/* The width in bits of the ALT_SDMMC_IDINTEN_DU register field. */
#define ALT_SDMMC_IDINTEN_DU_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDINTEN_DU register field value. */
#define ALT_SDMMC_IDINTEN_DU_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_IDINTEN_DU register field value. */
#define ALT_SDMMC_IDINTEN_DU_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_IDINTEN_DU register field. */
#define ALT_SDMMC_IDINTEN_DU_RESET      0x0
/* Extracts the ALT_SDMMC_IDINTEN_DU field value from a register. */
#define ALT_SDMMC_IDINTEN_DU_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_IDINTEN_DU register field value suitable for setting the register. */
#define ALT_SDMMC_IDINTEN_DU_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : CES
 * 
 * Card Error summary Interrupt Enable. When set, it enables the Card Interrupt
 * summary.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description                           
 * :---------------------------------|:------|:---------------------------------------
 *  ALT_SDMMC_IDINTEN_CES_E_DISABLED | 0x0   | The Card Interrupt summary is disabled
 *  ALT_SDMMC_IDINTEN_CES_E_ENABLED  | 0x1   | The Card Interrupt summary is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_CES
 * 
 * The Card Interrupt summary is disabled
 */
#define ALT_SDMMC_IDINTEN_CES_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_CES
 * 
 * The Card Interrupt summary is enabled
 */
#define ALT_SDMMC_IDINTEN_CES_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDINTEN_CES register field. */
#define ALT_SDMMC_IDINTEN_CES_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDINTEN_CES register field. */
#define ALT_SDMMC_IDINTEN_CES_MSB        5
/* The width in bits of the ALT_SDMMC_IDINTEN_CES register field. */
#define ALT_SDMMC_IDINTEN_CES_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDINTEN_CES register field value. */
#define ALT_SDMMC_IDINTEN_CES_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_IDINTEN_CES register field value. */
#define ALT_SDMMC_IDINTEN_CES_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_IDINTEN_CES register field. */
#define ALT_SDMMC_IDINTEN_CES_RESET      0x0
/* Extracts the ALT_SDMMC_IDINTEN_CES field value from a register. */
#define ALT_SDMMC_IDINTEN_CES_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_IDINTEN_CES register field value suitable for setting the register. */
#define ALT_SDMMC_IDINTEN_CES_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : NI
 * 
 * Normal Interrupt Summary Enable. When set, a normal interrupt is enabled. When
 * reset, a normal interrupt is disabled. This bit enables the following bits:
 * 
 * IDINTEN[0] - Transmit Interrupt
 * 
 * IDINTEN[1] - Receive Interrupt
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                   
 * :--------------------------------|:------|:-------------------------------
 *  ALT_SDMMC_IDINTEN_NI_E_DISABLED | 0x0   | A normal interrupt is disabled
 *  ALT_SDMMC_IDINTEN_NI_E_ENABLED  | 0x1   | A normal interrupt is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_NI
 * 
 * A normal interrupt is disabled
 */
#define ALT_SDMMC_IDINTEN_NI_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_NI
 * 
 * A normal interrupt is enabled
 */
#define ALT_SDMMC_IDINTEN_NI_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDINTEN_NI register field. */
#define ALT_SDMMC_IDINTEN_NI_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDINTEN_NI register field. */
#define ALT_SDMMC_IDINTEN_NI_MSB        8
/* The width in bits of the ALT_SDMMC_IDINTEN_NI register field. */
#define ALT_SDMMC_IDINTEN_NI_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDINTEN_NI register field value. */
#define ALT_SDMMC_IDINTEN_NI_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_IDINTEN_NI register field value. */
#define ALT_SDMMC_IDINTEN_NI_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_IDINTEN_NI register field. */
#define ALT_SDMMC_IDINTEN_NI_RESET      0x0
/* Extracts the ALT_SDMMC_IDINTEN_NI field value from a register. */
#define ALT_SDMMC_IDINTEN_NI_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_IDINTEN_NI register field value suitable for setting the register. */
#define ALT_SDMMC_IDINTEN_NI_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : AI
 * 
 * Abnormal Interrupt Summary Enable. When set, an abnormal interrupt is enabled.
 * This bit enables the following bits:
 * 
 * IDINTEN[2] - Fatal Bus Error Interrupt
 * 
 * IDINTEN[4] -  DU Interrupt
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                      
 * :--------------------------------|:------|:----------------------------------
 *  ALT_SDMMC_IDINTEN_AI_E_DISABLED | 0x0   | An abnormal interrupt is disabled
 *  ALT_SDMMC_IDINTEN_AI_E_ENABLED  | 0x1   | An abnormal interrupt is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_AI
 * 
 * An abnormal interrupt is disabled
 */
#define ALT_SDMMC_IDINTEN_AI_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_IDINTEN_AI
 * 
 * An abnormal interrupt is enabled
 */
#define ALT_SDMMC_IDINTEN_AI_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_IDINTEN_AI register field. */
#define ALT_SDMMC_IDINTEN_AI_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_IDINTEN_AI register field. */
#define ALT_SDMMC_IDINTEN_AI_MSB        9
/* The width in bits of the ALT_SDMMC_IDINTEN_AI register field. */
#define ALT_SDMMC_IDINTEN_AI_WIDTH      1
/* The mask used to set the ALT_SDMMC_IDINTEN_AI register field value. */
#define ALT_SDMMC_IDINTEN_AI_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_IDINTEN_AI register field value. */
#define ALT_SDMMC_IDINTEN_AI_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_IDINTEN_AI register field. */
#define ALT_SDMMC_IDINTEN_AI_RESET      0x0
/* Extracts the ALT_SDMMC_IDINTEN_AI field value from a register. */
#define ALT_SDMMC_IDINTEN_AI_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_IDINTEN_AI register field value suitable for setting the register. */
#define ALT_SDMMC_IDINTEN_AI_SET(value) (((value) << 9) & 0x00000200)

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
 * The struct declaration for register ALT_SDMMC_IDINTEN.
 */
struct ALT_SDMMC_IDINTEN_s
{
    volatile uint32_t  TI  :  1;  /* ALT_SDMMC_IDINTEN_TI */
    volatile uint32_t  RI  :  1;  /* ALT_SDMMC_IDINTEN_RI */
    volatile uint32_t  FBE :  1;  /* ALT_SDMMC_IDINTEN_FBE */
    uint32_t               :  1;  /* *UNDEFINED* */
    volatile uint32_t  DU  :  1;  /* ALT_SDMMC_IDINTEN_DU */
    volatile uint32_t  CES :  1;  /* ALT_SDMMC_IDINTEN_CES */
    uint32_t               :  2;  /* *UNDEFINED* */
    volatile uint32_t  NI  :  1;  /* ALT_SDMMC_IDINTEN_NI */
    volatile uint32_t  AI  :  1;  /* ALT_SDMMC_IDINTEN_AI */
    uint32_t               : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_IDINTEN. */
typedef struct ALT_SDMMC_IDINTEN_s  ALT_SDMMC_IDINTEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_IDINTEN register. */
#define ALT_SDMMC_IDINTEN_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_IDINTEN register from the beginning of the component. */
#define ALT_SDMMC_IDINTEN_OFST        0x90
/* The address of the ALT_SDMMC_IDINTEN register. */
#define ALT_SDMMC_IDINTEN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_IDINTEN_OFST))

/*
 * Register : Current Host Descriptor Address Register - DSCADDR
 * 
 * Name: Current Host Descriptor Address Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x94
 * 
 * Read/Write access: read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_DSCADDR_HDA
 * 
 */
/*
 * Field : HDA
 * 
 * Host Descriptor Address Pointer. Cleared on reset. Pointer updated by IDMAC
 * during operation. This register points to the start address of the current
 * descriptor read by the IDMAC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_DSCADDR_HDA register field. */
#define ALT_SDMMC_DSCADDR_HDA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_DSCADDR_HDA register field. */
#define ALT_SDMMC_DSCADDR_HDA_MSB        31
/* The width in bits of the ALT_SDMMC_DSCADDR_HDA register field. */
#define ALT_SDMMC_DSCADDR_HDA_WIDTH      32
/* The mask used to set the ALT_SDMMC_DSCADDR_HDA register field value. */
#define ALT_SDMMC_DSCADDR_HDA_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_DSCADDR_HDA register field value. */
#define ALT_SDMMC_DSCADDR_HDA_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_DSCADDR_HDA register field. */
#define ALT_SDMMC_DSCADDR_HDA_RESET      0x0
/* Extracts the ALT_SDMMC_DSCADDR_HDA field value from a register. */
#define ALT_SDMMC_DSCADDR_HDA_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_DSCADDR_HDA register field value suitable for setting the register. */
#define ALT_SDMMC_DSCADDR_HDA_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_DSCADDR.
 */
struct ALT_SDMMC_DSCADDR_s
{
    const volatile uint32_t  HDA : 32;  /* ALT_SDMMC_DSCADDR_HDA */
};

/* The typedef declaration for register ALT_SDMMC_DSCADDR. */
typedef struct ALT_SDMMC_DSCADDR_s  ALT_SDMMC_DSCADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_DSCADDR register. */
#define ALT_SDMMC_DSCADDR_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_DSCADDR register from the beginning of the component. */
#define ALT_SDMMC_DSCADDR_OFST        0x94
/* The address of the ALT_SDMMC_DSCADDR register. */
#define ALT_SDMMC_DSCADDR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_DSCADDR_OFST))

/*
 * Register : Current Buffer Descriptor Address Register - BUFADDR
 * 
 * Name: Current Buffer Descriptor Address Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x98
 * 
 * Read/Write access: read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [31:0] | R      | 0x0   | ALT_SDMMC_BUFADDR_HBA
 * 
 */
/*
 * Field : HBA
 * 
 * Host Buffer Address Pointer. Cleared on Reset. Pointer updated by IDMAC during
 * operation. This register points to the current Data Buffer Address being
 * accessed by the IDMAC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BUFADDR_HBA register field. */
#define ALT_SDMMC_BUFADDR_HBA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BUFADDR_HBA register field. */
#define ALT_SDMMC_BUFADDR_HBA_MSB        31
/* The width in bits of the ALT_SDMMC_BUFADDR_HBA register field. */
#define ALT_SDMMC_BUFADDR_HBA_WIDTH      32
/* The mask used to set the ALT_SDMMC_BUFADDR_HBA register field value. */
#define ALT_SDMMC_BUFADDR_HBA_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SDMMC_BUFADDR_HBA register field value. */
#define ALT_SDMMC_BUFADDR_HBA_CLR_MSK    0x00000000
/* The reset value of the ALT_SDMMC_BUFADDR_HBA register field. */
#define ALT_SDMMC_BUFADDR_HBA_RESET      0x0
/* Extracts the ALT_SDMMC_BUFADDR_HBA field value from a register. */
#define ALT_SDMMC_BUFADDR_HBA_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SDMMC_BUFADDR_HBA register field value suitable for setting the register. */
#define ALT_SDMMC_BUFADDR_HBA_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SDMMC_BUFADDR.
 */
struct ALT_SDMMC_BUFADDR_s
{
    const volatile uint32_t  HBA : 32;  /* ALT_SDMMC_BUFADDR_HBA */
};

/* The typedef declaration for register ALT_SDMMC_BUFADDR. */
typedef struct ALT_SDMMC_BUFADDR_s  ALT_SDMMC_BUFADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_BUFADDR register. */
#define ALT_SDMMC_BUFADDR_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_BUFADDR register from the beginning of the component. */
#define ALT_SDMMC_BUFADDR_OFST        0x98
/* The address of the ALT_SDMMC_BUFADDR register. */
#define ALT_SDMMC_BUFADDR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_BUFADDR_OFST))

/*
 * Register : Card Threshold Control Register - CARDTHRCTL
 * 
 * Name: Card Threshold Control Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x100
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_CARDTHRCTL_CARDRDTHREN    
 *  [1]     | RW     | 0x0   | ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN
 *  [2]     | R      | 0x0   | ALT_SDMMC_CARDTHRCTL_CARDWRTHREN    
 *  [15:3]  | ???    | 0x0   | *UNDEFINED*                         
 *  [28:16] | RW     | 0x0   | ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD
 *  [31:29] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : CARDRDTHREN
 * 
 * Card Read Threshold Enable
 * 
 * 1'b0 - Card Read Threshold disabled
 * 
 * 1'b1 - Card Read Threshold enabled. Host Controller initiates
 * 
 * Read Transfer only if CardRdThreshold amount of space is
 * 
 * available in receive FIFO.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                 
 * :--------------------------------------------|:------|:-----------------------------
 *  ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_E_DISABLED | 0x0   | Card Read Threshold disabled
 *  ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_E_ENABLED  | 0x1   | Card Read Threshold enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CARDTHRCTL_CARDRDTHREN
 * 
 * Card Read Threshold disabled
 */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CARDTHRCTL_CARDRDTHREN
 * 
 * Card Read Threshold enabled
 */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CARDTHRCTL_CARDRDTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CARDTHRCTL_CARDRDTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_MSB        0
/* The width in bits of the ALT_SDMMC_CARDTHRCTL_CARDRDTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_WIDTH      1
/* The mask used to set the ALT_SDMMC_CARDTHRCTL_CARDRDTHREN register field value. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_CARDTHRCTL_CARDRDTHREN register field value. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_CARDTHRCTL_CARDRDTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_RESET      0x0
/* Extracts the ALT_SDMMC_CARDTHRCTL_CARDRDTHREN field value from a register. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_CARDTHRCTL_CARDRDTHREN register field value suitable for setting the register. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHREN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : BUSY_CLR_INT_EN
 * 
 * Busy Clear Interrupt generation:
 * 
 * 1'b0 - Busy Clear Interrupt disabled
 * 
 * 1'b1 - Busy Clear Interrupt enabled
 * 
 * Note: The application can disable this feature if it does not want to wait for a
 * Busy Clear Interrupt. For example, in a multi-card scenario, the application can
 * switch to the other card without waiting for a busy to be completed. In such
 * cases, the application can use the polling method to determine the status of
 * busy. By default this feature is disabled and backward-compatible to the legacy
 * drivers where polling is used.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description                  
 * :------------------------------------------------|:------|:------------------------------
 *  ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_E_DISABLED | 0x0   | Busy Clear Interrupt disabled
 *  ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_E_ENABLED  | 0x1   | Busy Clear Interrupt enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN
 * 
 * Busy Clear Interrupt disabled
 */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN
 * 
 * Busy Clear Interrupt enabled
 */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN register field. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN register field. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_MSB        1
/* The width in bits of the ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN register field. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_WIDTH      1
/* The mask used to set the ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN register field value. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN register field value. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN register field. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_RESET      0x0
/* Extracts the ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN field value from a register. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN register field value suitable for setting the register. */
#define ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : CARDWRTHREN
 * 
 * Card Write Threshold Enable
 * 
 * 1'b0 - Card Write Threshold disabled
 * 
 * 1'b1 - Card Write Threshold enabled. Host Controller initiates
 * 
 * Write Transfer only if CardThreshold amount of data is
 * 
 * available in transmit FIFO.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                  
 * :--------------------------------------------|:------|:------------------------------
 *  ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_E_DISABLED | 0x0   | Card Write Threshold disabled
 *  ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_E_ENABLED  | 0x1   | Card Write Threshold enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_CARDTHRCTL_CARDWRTHREN
 * 
 * Card Write Threshold disabled
 */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_CARDTHRCTL_CARDWRTHREN
 * 
 * Card Write Threshold enabled
 */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CARDTHRCTL_CARDWRTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CARDTHRCTL_CARDWRTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_MSB        2
/* The width in bits of the ALT_SDMMC_CARDTHRCTL_CARDWRTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_WIDTH      1
/* The mask used to set the ALT_SDMMC_CARDTHRCTL_CARDWRTHREN register field value. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_CARDTHRCTL_CARDWRTHREN register field value. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_CARDTHRCTL_CARDWRTHREN register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_RESET      0x0
/* Extracts the ALT_SDMMC_CARDTHRCTL_CARDWRTHREN field value from a register. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_CARDTHRCTL_CARDWRTHREN register field value suitable for setting the register. */
#define ALT_SDMMC_CARDTHRCTL_CARDWRTHREN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : CARDRDTHRESHOLD
 * 
 * Card Read Threshold size; N depends on the FIFO size:
 * 
 * N = 27  FIFO_DEPTH is 128
 * 
 * N = 26  FIFO_DEPTH is 64
 * 
 * N = 25  FIFO_DEPTH is 32
 * 
 * N = 24  FIFO_DEPTH is 16
 * 
 * N = 23  FIFO_DEPTH is 8
 * 
 * Note: The maximum programmable value of Card Read Threshold size is 512.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_MSB        28
/* The width in bits of the ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_WIDTH      13
/* The mask used to set the ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD register field value. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_SET_MSK    0x1fff0000
/* The mask used to clear the ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD register field value. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_CLR_MSK    0xe000ffff
/* The reset value of the ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD register field. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_RESET      0x0
/* Extracts the ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD field value from a register. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_GET(value) (((value) & 0x1fff0000) >> 16)
/* Produces a ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD register field value suitable for setting the register. */
#define ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD_SET(value) (((value) << 16) & 0x1fff0000)

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
 * The struct declaration for register ALT_SDMMC_CARDTHRCTL.
 */
struct ALT_SDMMC_CARDTHRCTL_s
{
    volatile uint32_t        CARDRDTHREN     :  1;  /* ALT_SDMMC_CARDTHRCTL_CARDRDTHREN */
    volatile uint32_t        BUSY_CLR_INT_EN :  1;  /* ALT_SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN */
    const volatile uint32_t  CARDWRTHREN     :  1;  /* ALT_SDMMC_CARDTHRCTL_CARDWRTHREN */
    uint32_t                                 : 13;  /* *UNDEFINED* */
    volatile uint32_t        CARDRDTHRESHOLD : 13;  /* ALT_SDMMC_CARDTHRCTL_CARDRDTHRESHOLD */
    uint32_t                                 :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_CARDTHRCTL. */
typedef struct ALT_SDMMC_CARDTHRCTL_s  ALT_SDMMC_CARDTHRCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_CARDTHRCTL register. */
#define ALT_SDMMC_CARDTHRCTL_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_CARDTHRCTL register from the beginning of the component. */
#define ALT_SDMMC_CARDTHRCTL_OFST        0x100
/* The address of the ALT_SDMMC_CARDTHRCTL register. */
#define ALT_SDMMC_CARDTHRCTL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_CARDTHRCTL_OFST))

/*
 * Register : Back End Power Register - BACK_END_POWER_R
 * 
 * Name: Back End Power Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x104
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 
 *  [1]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 
 *  [2]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 
 *  [3]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 
 *  [4]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 
 *  [5]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 
 *  [6]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 
 *  [7]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 
 *  [8]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 
 *  [9]     | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 
 *  [10]    | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10
 *  [11]    | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11
 *  [12]    | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12
 *  [13]    | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13
 *  [14]    | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14
 *  [15]    | RW     | 0x0   | ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : BACK_END_POWER_0
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_MSB        0
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : BACK_END_POWER_1
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_MSB        1
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : BACK_END_POWER_2
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_MSB        2
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : BACK_END_POWER_3
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_MSB        3
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_SET_MSK    0x00000008
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : BACK_END_POWER_4
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_MSB        4
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : BACK_END_POWER_5
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_MSB        5
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : BACK_END_POWER_6
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_MSB        6
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : BACK_END_POWER_7
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_MSB        7
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : BACK_END_POWER_8
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_MSB        8
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : BACK_END_POWER_9
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description            
 * :-------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_MSB        9
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : BACK_END_POWER_10
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description            
 * :--------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_MSB        10
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : BACK_END_POWER_11
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description            
 * :--------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_MSB        11
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : BACK_END_POWER_12
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description            
 * :--------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_MSB        12
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_SET_MSK    0x00001000
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_CLR_MSK    0xffffefff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : BACK_END_POWER_13
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description            
 * :--------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_MSB        13
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_SET_MSK    0x00002000
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : BACK_END_POWER_14
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description            
 * :--------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_MSB        14
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_SET_MSK    0x00004000
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : BACK_END_POWER_15
 * 
 * Back end power
 * 
 * 1'b0  Off; Reset
 * 
 * 1'b1  Back-end Power supplied to card application; one pin per
 * 
 * card
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description            
 * :--------------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_E_DISABLED | 0x0   | Back-end Power off     
 *  ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_E_ENABLED  | 0x1   | Back-end power supplied
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15
 * 
 * Back-end Power off
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15
 * 
 * Back-end power supplied
 */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_MSB        15
/* The width in bits of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_WIDTH      1
/* The mask used to set the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_SET_MSK    0x00008000
/* The mask used to clear the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 register field value. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 register field. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_RESET      0x0
/* Extracts the ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 field value from a register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 register field value suitable for setting the register. */
#define ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15_SET(value) (((value) << 15) & 0x00008000)

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
 * The struct declaration for register ALT_SDMMC_BACK_END_POWER_R.
 */
struct ALT_SDMMC_BACK_END_POWER_R_s
{
    volatile uint32_t  BACK_END_POWER_0  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_0 */
    volatile uint32_t  BACK_END_POWER_1  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_1 */
    volatile uint32_t  BACK_END_POWER_2  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_2 */
    volatile uint32_t  BACK_END_POWER_3  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_3 */
    volatile uint32_t  BACK_END_POWER_4  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_4 */
    volatile uint32_t  BACK_END_POWER_5  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_5 */
    volatile uint32_t  BACK_END_POWER_6  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_6 */
    volatile uint32_t  BACK_END_POWER_7  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_7 */
    volatile uint32_t  BACK_END_POWER_8  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_8 */
    volatile uint32_t  BACK_END_POWER_9  :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_9 */
    volatile uint32_t  BACK_END_POWER_10 :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_10 */
    volatile uint32_t  BACK_END_POWER_11 :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_11 */
    volatile uint32_t  BACK_END_POWER_12 :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_12 */
    volatile uint32_t  BACK_END_POWER_13 :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_13 */
    volatile uint32_t  BACK_END_POWER_14 :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_14 */
    volatile uint32_t  BACK_END_POWER_15 :  1;  /* ALT_SDMMC_BACK_END_POWER_R_BACK_END_POWER_15 */
    uint32_t                             : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_BACK_END_POWER_R. */
typedef struct ALT_SDMMC_BACK_END_POWER_R_s  ALT_SDMMC_BACK_END_POWER_R_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_BACK_END_POWER_R register. */
#define ALT_SDMMC_BACK_END_POWER_R_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_BACK_END_POWER_R register from the beginning of the component. */
#define ALT_SDMMC_BACK_END_POWER_R_OFST        0x104
/* The address of the ALT_SDMMC_BACK_END_POWER_R register. */
#define ALT_SDMMC_BACK_END_POWER_R_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_BACK_END_POWER_R_OFST))

/*
 * Register : UHS Register Extention - UHS_REG_EXT
 * 
 * Name: UHS Register Extention
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x108
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0     
 *  [1]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1     
 *  [2]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2     
 *  [3]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3     
 *  [4]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4     
 *  [5]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5     
 *  [6]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6     
 *  [7]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7     
 *  [8]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8     
 *  [9]     | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9     
 *  [10]    | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10    
 *  [11]    | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11    
 *  [12]    | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12    
 *  [13]    | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13    
 *  [14]    | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14    
 *  [15]    | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15    
 *  [22:16] | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL
 *  [29:23] | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL 
 *  [31:30] | RW     | 0x0   | ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL   
 * 
 */
/*
 * Field : MMC_VOLT_REG_0
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_MSB        0
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : MMC_VOLT_REG_1
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_MSB        1
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_SET_MSK    0x00000002
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : MMC_VOLT_REG_2
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_MSB        2
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_SET_MSK    0x00000004
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : MMC_VOLT_REG_3
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_MSB        3
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_SET_MSK    0x00000008
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : MMC_VOLT_REG_4
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_MSB        4
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_SET_MSK    0x00000010
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_CLR_MSK    0xffffffef
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : MMC_VOLT_REG_5
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_MSB        5
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_SET_MSK    0x00000020
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : MMC_VOLT_REG_6
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_MSB        6
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_SET_MSK    0x00000040
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : MMC_VOLT_REG_7
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_MSB        7
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_SET_MSK    0x00000080
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : MMC_VOLT_REG_8
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_MSB        8
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_SET_MSK    0x00000100
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : MMC_VOLT_REG_9
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_MSB        9
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_SET_MSK    0x00000200
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : MMC_VOLT_REG_10
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description       
 * :-------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_MSB        10
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_SET_MSK    0x00000400
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : MMC_VOLT_REG_11
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description       
 * :-------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_MSB        11
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_SET_MSK    0x00000800
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : MMC_VOLT_REG_12
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description       
 * :-------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_MSB        12
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_SET_MSK    0x00001000
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_CLR_MSK    0xffffefff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : MMC_VOLT_REG_13
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description       
 * :-------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_MSB        13
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_SET_MSK    0x00002000
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : MMC_VOLT_REG_14
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description       
 * :-------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_MSB        14
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_SET_MSK    0x00004000
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : MMC_VOLT_REG_15
 * 
 * Support for 1.2V. MMC_VOLT_REG bits; must be read in combination
 * 
 * with UHS_VOLT_REG to decode output selected voltage.
 * 
 * The biu_volt_reg_1_2[NUM_CARD_BUS-1:0] signal decodes the voltage combination
 * selected for the I/O voltage logic.
 * 
 * Host controllers that support only SD standard or standard versions before
 * eMMC4.41 do not program MMC_VOLT_REG.
 * 
 * Only host controllers that support all three versions3.3,1.8,1.2 Vcan program
 * MMC_VOLT_REG and connect biu_volt_reg_1_2.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description       
 * :-------------------------------------------------|:------|:-------------------
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_E_DISABLED | 0x0   | 1.2V not supported
 *  ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_E_ENABLED  | 0x1   | Support for 1.2V  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15
 * 
 * 1.2V not supported
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15
 * 
 * Support for 1.2V
 */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_MSB        15
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_WIDTH      1
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_SET_MSK    0x00008000
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 register field value. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 register field. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : CLK_SMPL_PHASE_CTRL
 * 
 * Control for amount of phase shift on cclk_in_sample clock. Can choose three MSBs
 * to control delay lines and four LSBs to control phase shift; alternatively, use
 * only LSBs.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_MSB        22
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_WIDTH      7
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL register field value. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_SET_MSK    0x007f0000
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL register field value. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_CLR_MSK    0xff80ffff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_GET(value) (((value) & 0x007f0000) >> 16)
/* Produces a ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL_SET(value) (((value) << 16) & 0x007f0000)

/*
 * Field : CLK_DRV_PHASE_CTRL
 * 
 * Control for amount of phase shift on cclk_in_drv clock. Can choose three MSBs to
 * control delay lines and four LSBs to control phase shift; alternatively, use
 * only LSBs.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_MSB        29
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_WIDTH      7
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL register field value. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_SET_MSK    0x3f800000
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL register field value. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_CLR_MSK    0xc07fffff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_GET(value) (((value) & 0x3f800000) >> 23)
/* Produces a ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL_SET(value) (((value) << 23) & 0x3f800000)

/*
 * Field : EXT_CLK_MUX_CTRL
 * 
 * Input clock control for cclk_in. The MUX controlled by these bits exists outside
 * DWC_mobile_storage IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_MSB        31
/* The width in bits of the ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_WIDTH      2
/* The mask used to set the ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL register field value. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_SET_MSK    0xc0000000
/* The mask used to clear the ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL register field value. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_CLR_MSK    0x3fffffff
/* The reset value of the ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL register field. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_RESET      0x0
/* Extracts the ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL field value from a register. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_GET(value) (((value) & 0xc0000000) >> 30)
/* Produces a ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL register field value suitable for setting the register. */
#define ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL_SET(value) (((value) << 30) & 0xc0000000)

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
 * The struct declaration for register ALT_SDMMC_UHS_REG_EXT.
 */
struct ALT_SDMMC_UHS_REG_EXT_s
{
    volatile uint32_t  MMC_VOLT_REG_0      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_0 */
    volatile uint32_t  MMC_VOLT_REG_1      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_1 */
    volatile uint32_t  MMC_VOLT_REG_2      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_2 */
    volatile uint32_t  MMC_VOLT_REG_3      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_3 */
    volatile uint32_t  MMC_VOLT_REG_4      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_4 */
    volatile uint32_t  MMC_VOLT_REG_5      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_5 */
    volatile uint32_t  MMC_VOLT_REG_6      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_6 */
    volatile uint32_t  MMC_VOLT_REG_7      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_7 */
    volatile uint32_t  MMC_VOLT_REG_8      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_8 */
    volatile uint32_t  MMC_VOLT_REG_9      :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_9 */
    volatile uint32_t  MMC_VOLT_REG_10     :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_10 */
    volatile uint32_t  MMC_VOLT_REG_11     :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_11 */
    volatile uint32_t  MMC_VOLT_REG_12     :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_12 */
    volatile uint32_t  MMC_VOLT_REG_13     :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_13 */
    volatile uint32_t  MMC_VOLT_REG_14     :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_14 */
    volatile uint32_t  MMC_VOLT_REG_15     :  1;  /* ALT_SDMMC_UHS_REG_EXT_MMC_VOLT_REG_15 */
    volatile uint32_t  CLK_SMPL_PHASE_CTRL :  7;  /* ALT_SDMMC_UHS_REG_EXT_CLK_SMPL_PHASE_CTRL */
    volatile uint32_t  CLK_DRV_PHASE_CTRL  :  7;  /* ALT_SDMMC_UHS_REG_EXT_CLK_DRV_PHASE_CTRL */
    volatile uint32_t  EXT_CLK_MUX_CTRL    :  2;  /* ALT_SDMMC_UHS_REG_EXT_EXT_CLK_MUX_CTRL */
};

/* The typedef declaration for register ALT_SDMMC_UHS_REG_EXT. */
typedef struct ALT_SDMMC_UHS_REG_EXT_s  ALT_SDMMC_UHS_REG_EXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_UHS_REG_EXT register. */
#define ALT_SDMMC_UHS_REG_EXT_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_UHS_REG_EXT register from the beginning of the component. */
#define ALT_SDMMC_UHS_REG_EXT_OFST        0x108
/* The address of the ALT_SDMMC_UHS_REG_EXT register. */
#define ALT_SDMMC_UHS_REG_EXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_UHS_REG_EXT_OFST))

/*
 * Register : EMMC DDR Register - EMMC_DDR_REG
 * 
 * Name: EMMC DDR Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x10C
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                            
 * :-------|:-------|:------|:----------------------------------------
 *  [0]    | RW     | 0x0   | ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0
 *  [30:1] | ???    | 0x0   | *UNDEFINED*                            
 *  [31]   | R      | 0x0   | ALT_SDMMC_EMMC_DDR_REG_HS400_MODE      
 * 
 */
/*
 * Field : HALF_START_BIT_0
 * 
 * Control for start bit detection mechanism inside
 * 
 * DWC_mobile_storage based on duration of start bit; each bit refers to one slot.
 * For eMMC 4.5, start bit can
 * 
 * be:
 * 
 * Full cycle (HALF_START_BIT = 0)
 * 
 * Less than one full cycle (HALF_START_BIT = 1)
 * 
 * Set HALF_START_BIT=1 for eMMC 4.5 and above; set to 0 for SD applications.
 * 
 * Note: This bit is not applicable for HS400 mode
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description            
 * :---------------------------------------------------|:------|:------------------------
 *  ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_E_DISABLED | 0x0   | HALF_START_BIT disabled
 *  ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_E_ENABLED  | 0x1   | HALF_START_BIT enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0
 * 
 * HALF_START_BIT disabled
 */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0
 * 
 * HALF_START_BIT enabled
 */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_MSB        0
/* The width in bits of the ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_WIDTH      1
/* The mask used to set the ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 register field value. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 register field value. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_RESET      0x0
/* Extracts the ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 field value from a register. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 register field value suitable for setting the register. */
#define ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : HS400_MODE
 * 
 * HS400 Mode Enable
 * 
 * 1'b0 - Disable
 * 
 * 1'b1 - Enable
 * 
 * Note: The application is required to set this bit to '1' before initiating any
 * data
 * 
 * transfer CMD in HS400 mode. This bit shall be cleared by the host on exiting
 * HS400 mode.
 * 
 * In non HS400 mode, this bit shall be set to '0'
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description        
 * :---------------------------------------------|:------|:--------------------
 *  ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_E_DISABLED | 0x0   | HS400 Mode Disabled
 *  ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_E_ENABLED  | 0x1   | HS400 Mode Enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_EMMC_DDR_REG_HS400_MODE
 * 
 * HS400 Mode Disabled
 */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_SDMMC_EMMC_DDR_REG_HS400_MODE
 * 
 * HS400 Mode Enabled
 */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_EMMC_DDR_REG_HS400_MODE register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_EMMC_DDR_REG_HS400_MODE register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_MSB        31
/* The width in bits of the ALT_SDMMC_EMMC_DDR_REG_HS400_MODE register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_WIDTH      1
/* The mask used to set the ALT_SDMMC_EMMC_DDR_REG_HS400_MODE register field value. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_SET_MSK    0x80000000
/* The mask used to clear the ALT_SDMMC_EMMC_DDR_REG_HS400_MODE register field value. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SDMMC_EMMC_DDR_REG_HS400_MODE register field. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_RESET      0x0
/* Extracts the ALT_SDMMC_EMMC_DDR_REG_HS400_MODE field value from a register. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SDMMC_EMMC_DDR_REG_HS400_MODE register field value suitable for setting the register. */
#define ALT_SDMMC_EMMC_DDR_REG_HS400_MODE_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SDMMC_EMMC_DDR_REG.
 */
struct ALT_SDMMC_EMMC_DDR_REG_s
{
    volatile uint32_t        HALF_START_BIT_0 :  1;  /* ALT_SDMMC_EMMC_DDR_REG_HALF_START_BIT_0 */
    uint32_t                                  : 30;  /* *UNDEFINED* */
    const volatile uint32_t  HS400_MODE       :  1;  /* ALT_SDMMC_EMMC_DDR_REG_HS400_MODE */
};

/* The typedef declaration for register ALT_SDMMC_EMMC_DDR_REG. */
typedef struct ALT_SDMMC_EMMC_DDR_REG_s  ALT_SDMMC_EMMC_DDR_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_EMMC_DDR_REG register. */
#define ALT_SDMMC_EMMC_DDR_REG_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_EMMC_DDR_REG register from the beginning of the component. */
#define ALT_SDMMC_EMMC_DDR_REG_OFST        0x10c
/* The address of the ALT_SDMMC_EMMC_DDR_REG register. */
#define ALT_SDMMC_EMMC_DDR_REG_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_EMMC_DDR_REG_OFST))

/*
 * Register : Enable Phase Shift Register - ENABLE_SHIFT
 * 
 * Name: Enable Phase Shift Register
 * 
 * Address Offset: 0x110
 * 
 * Read/Write access: read/write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [1:0]  | RW     | 0x0   | ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : ENABLE_SHIFT_CARD0
 * 
 * Control for the amount of phase shift provided on the default
 * 
 * enables in the design. Two bits are assigned for each card/slot. For example,
 * bits[1:0] control slot0 and indicate the following.
 * 
 * 00  Default phase shift
 *
 * 01  Enables shifted to next immediate positive edge
 *
 * 10  Enables shifted to next immediate negative edge
 *
 * 11  Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                | Value | Description                                    
 * :----------------------------------------------------|:------|:------------------------------------------------
 *  ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_DEFAULT | 0x0   | Default phase shift                            
 *  ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_POSEDGE | 0x1   | Enables shifted to next immediate positive edge
 *  ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_NEGEDGE | 0x2   | Enables shifted to next immediate negative edge
 *  ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_RSVD    | 0x3   | Reserved                                       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0
 * 
 * Default phase shift
 */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_DEFAULT 0x0
/*
 * Enumerated value for register field ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0
 * 
 * Enables shifted to next immediate positive edge
 */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_POSEDGE 0x1
/*
 * Enumerated value for register field ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0
 * 
 * Enables shifted to next immediate negative edge
 */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_NEGEDGE 0x2
/*
 * Enumerated value for register field ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0
 * 
 * Reserved
 */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_E_RSVD    0x3

/* The Least Significant Bit (LSB) position of the ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 register field. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 register field. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_MSB        1
/* The width in bits of the ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 register field. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_WIDTH      2
/* The mask used to set the ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 register field value. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_SET_MSK    0x00000003
/* The mask used to clear the ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 register field value. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 register field. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_RESET      0x0
/* Extracts the ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 field value from a register. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 register field value suitable for setting the register. */
#define ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0_SET(value) (((value) << 0) & 0x00000003)

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
 * The struct declaration for register ALT_SDMMC_ENABLE_SHIFT.
 */
struct ALT_SDMMC_ENABLE_SHIFT_s
{
    volatile uint32_t  ENABLE_SHIFT_CARD0 :  2;  /* ALT_SDMMC_ENABLE_SHIFT_ENABLE_SHIFT_CARD0 */
    uint32_t                              : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SDMMC_ENABLE_SHIFT. */
typedef struct ALT_SDMMC_ENABLE_SHIFT_s  ALT_SDMMC_ENABLE_SHIFT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SDMMC_ENABLE_SHIFT register. */
#define ALT_SDMMC_ENABLE_SHIFT_RESET       0x00000000
/* The byte offset of the ALT_SDMMC_ENABLE_SHIFT register from the beginning of the component. */
#define ALT_SDMMC_ENABLE_SHIFT_OFST        0x110
/* The address of the ALT_SDMMC_ENABLE_SHIFT register. */
#define ALT_SDMMC_ENABLE_SHIFT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SDMMC_ENABLE_SHIFT_OFST))

/*
 * Register : Data FIFO Access - DATA
 * 
 * Provides read/write access to data FIFO. Addresses 0x200 and above are mapped to
 * the data FIFO. More than one address is mapped to data FIFO so that FIFO can be
 * accessed using bursts.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description
 * :-------|:-------|:--------|:------------
 *  [31:0] | RW     | Unknown | FIFO Data  
 * 
 */
/*
 * Field : FIFO Data - value
 * 
 * Provides read/write access to data FIFO.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the SDMMC_DATA_VALUE register field. */
#define SDMMC_DATA_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the SDMMC_DATA_VALUE register field. */
#define SDMMC_DATA_VALUE_MSB        31
/* The width in bits of the SDMMC_DATA_VALUE register field. */
#define SDMMC_DATA_VALUE_WIDTH      32
/* The mask used to set the SDMMC_DATA_VALUE register field value. */
#define SDMMC_DATA_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the SDMMC_DATA_VALUE register field value. */
#define SDMMC_DATA_VALUE_CLR_MSK    0x00000000
/* The reset value of the SDMMC_DATA_VALUE register field is UNKNOWN. */
#define SDMMC_DATA_VALUE_RESET      0x0
/* Extracts the SDMMC_DATA_VALUE field value from a register. */
#define SDMMC_DATA_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a SDMMC_DATA_VALUE register field value suitable for setting the register. */
#define SDMMC_DATA_VALUE_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register SDMMC_DATA.
 */
struct SDMMC_DATA_s
{
    volatile uint32_t  value : 32;  /* FIFO Data */
};

/* The typedef declaration for register SDMMC_DATA. */
typedef struct SDMMC_DATA_s  SDMMC_DATA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the SDMMC_DATA register. */
#define SDMMC_DATA_RESET       0x00000000
/* The byte offset of the SDMMC_DATA register from the beginning of the component. */
#define SDMMC_DATA_OFST        0x200
/* The address of the SDMMC_DATA register. */
#define SDMMC_DATA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + SDMMC_DATA_OFST))

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
 * The struct declaration for register group ALT_SDMMC.
 */
struct ALT_SDMMC_s
{
    volatile ALT_SDMMC_CTRL_t              CTRL;                   /* ALT_SDMMC_CTRL */
    volatile ALT_SDMMC_PWREN_t             PWREN;                  /* ALT_SDMMC_PWREN */
    volatile ALT_SDMMC_CLKDIV_t            CLKDIV;                 /* ALT_SDMMC_CLKDIV */
    volatile ALT_SDMMC_CLKSRC_t            CLKSRC;                 /* ALT_SDMMC_CLKSRC */
    volatile ALT_SDMMC_CLKENA_t            CLKENA;                 /* ALT_SDMMC_CLKENA */
    volatile ALT_SDMMC_TMOUT_t             TMOUT;                  /* ALT_SDMMC_TMOUT */
    volatile ALT_SDMMC_CTYPE_t             CTYPE;                  /* ALT_SDMMC_CTYPE */
    volatile ALT_SDMMC_BLKSIZ_t            BLKSIZ;                 /* ALT_SDMMC_BLKSIZ */
    volatile ALT_SDMMC_BYTCNT_t            BYTCNT;                 /* ALT_SDMMC_BYTCNT */
    volatile ALT_SDMMC_INTMASK_t           INTMASK;                /* ALT_SDMMC_INTMASK */
    volatile ALT_SDMMC_CMDARG_t            CMDARG;                 /* ALT_SDMMC_CMDARG */
    volatile ALT_SDMMC_CMD_t               CMD;                    /* ALT_SDMMC_CMD */
    volatile ALT_SDMMC_RESP0_t             RESP0;                  /* ALT_SDMMC_RESP0 */
    volatile ALT_SDMMC_RESP1_t             RESP1;                  /* ALT_SDMMC_RESP1 */
    volatile ALT_SDMMC_RESP2_t             RESP2;                  /* ALT_SDMMC_RESP2 */
    volatile ALT_SDMMC_RESP3_t             RESP3;                  /* ALT_SDMMC_RESP3 */
    volatile ALT_SDMMC_MINTSTS_t           MINTSTS;                /* ALT_SDMMC_MINTSTS */
    volatile ALT_SDMMC_RINTSTS_t           RINTSTS;                /* ALT_SDMMC_RINTSTS */
    volatile ALT_SDMMC_STATUS_t            STATUS;                 /* ALT_SDMMC_STATUS */
    volatile ALT_SDMMC_FIFOTH_t            FIFOTH;                 /* ALT_SDMMC_FIFOTH */
    volatile ALT_SDMMC_CDETECT_t           CDETECT;                /* ALT_SDMMC_CDETECT */
    volatile ALT_SDMMC_WRTPRT_t            WRTPRT;                 /* ALT_SDMMC_WRTPRT */
    volatile ALT_SDMMC_GPIO_t              GPIO;                   /* ALT_SDMMC_GPIO */
    volatile ALT_SDMMC_TCBCNT_t            TCBCNT;                 /* ALT_SDMMC_TCBCNT */
    volatile ALT_SDMMC_TBBCNT_t            TBBCNT;                 /* ALT_SDMMC_TBBCNT */
    volatile ALT_SDMMC_DEBNCE_t            DEBNCE;                 /* ALT_SDMMC_DEBNCE */
    volatile ALT_SDMMC_USRID_t             USRID;                  /* ALT_SDMMC_USRID */
    volatile ALT_SDMMC_VERID_t             VERID;                  /* ALT_SDMMC_VERID */
    volatile ALT_SDMMC_HCON_t              HCON;                   /* ALT_SDMMC_HCON */
    volatile ALT_SDMMC_UHS_REG_t           UHS_REG;                /* ALT_SDMMC_UHS_REG */
    volatile ALT_SDMMC_RST_N_t             RST_n;                  /* ALT_SDMMC_RST_N */
    volatile uint32_t                      _pad_0x7c_0x7f;         /* *UNDEFINED* */
    volatile ALT_SDMMC_BMOD_t              BMOD;                   /* ALT_SDMMC_BMOD */
    volatile ALT_SDMMC_PLDMND_t            PLDMND;                 /* ALT_SDMMC_PLDMND */
    volatile ALT_SDMMC_DBADDR_t            DBADDR;                 /* ALT_SDMMC_DBADDR */
    volatile ALT_SDMMC_IDSTS_t             IDSTS;                  /* ALT_SDMMC_IDSTS */
    volatile ALT_SDMMC_IDINTEN_t           IDINTEN;                /* ALT_SDMMC_IDINTEN */
    volatile ALT_SDMMC_DSCADDR_t           DSCADDR;                /* ALT_SDMMC_DSCADDR */
    volatile ALT_SDMMC_BUFADDR_t           BUFADDR;                /* ALT_SDMMC_BUFADDR */
    volatile uint32_t                      _pad_0x9c_0xff[25];     /* *UNDEFINED* */
    volatile ALT_SDMMC_CARDTHRCTL_t        CARDTHRCTL;             /* ALT_SDMMC_CARDTHRCTL */
    volatile ALT_SDMMC_BACK_END_POWER_R_t  BACK_END_POWER_R;       /* ALT_SDMMC_BACK_END_POWER_R */
    volatile ALT_SDMMC_UHS_REG_EXT_t       UHS_REG_EXT;            /* ALT_SDMMC_UHS_REG_EXT */
    volatile ALT_SDMMC_EMMC_DDR_REG_t      EMMC_DDR_REG;           /* ALT_SDMMC_EMMC_DDR_REG */
    volatile ALT_SDMMC_ENABLE_SHIFT_t      ENABLE_SHIFT;           /* ALT_SDMMC_ENABLE_SHIFT */
    volatile uint32_t                      _pad_0x114_0x1ff[59];   /* *UNDEFINED* */
    volatile SDMMC_DATA_t                  DATA;                   /* SDMMC_DATA */
    volatile uint32_t                      _pad_0x204_0x400[127];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_SDMMC. */
typedef struct ALT_SDMMC_s  ALT_SDMMC_t;
/* The struct declaration for the raw register contents of register group ALT_SDMMC. */
struct ALT_SDMMC_raw_s
{
    volatile uint32_t  CTRL;                   /* ALT_SDMMC_CTRL */
    volatile uint32_t  PWREN;                  /* ALT_SDMMC_PWREN */
    volatile uint32_t  CLKDIV;                 /* ALT_SDMMC_CLKDIV */
    volatile uint32_t  CLKSRC;                 /* ALT_SDMMC_CLKSRC */
    volatile uint32_t  CLKENA;                 /* ALT_SDMMC_CLKENA */
    volatile uint32_t  TMOUT;                  /* ALT_SDMMC_TMOUT */
    volatile uint32_t  CTYPE;                  /* ALT_SDMMC_CTYPE */
    volatile uint32_t  BLKSIZ;                 /* ALT_SDMMC_BLKSIZ */
    volatile uint32_t  BYTCNT;                 /* ALT_SDMMC_BYTCNT */
    volatile uint32_t  INTMASK;                /* ALT_SDMMC_INTMASK */
    volatile uint32_t  CMDARG;                 /* ALT_SDMMC_CMDARG */
    volatile uint32_t  CMD;                    /* ALT_SDMMC_CMD */
    volatile uint32_t  RESP0;                  /* ALT_SDMMC_RESP0 */
    volatile uint32_t  RESP1;                  /* ALT_SDMMC_RESP1 */
    volatile uint32_t  RESP2;                  /* ALT_SDMMC_RESP2 */
    volatile uint32_t  RESP3;                  /* ALT_SDMMC_RESP3 */
    volatile uint32_t  MINTSTS;                /* ALT_SDMMC_MINTSTS */
    volatile uint32_t  RINTSTS;                /* ALT_SDMMC_RINTSTS */
    volatile uint32_t  STATUS;                 /* ALT_SDMMC_STATUS */
    volatile uint32_t  FIFOTH;                 /* ALT_SDMMC_FIFOTH */
    volatile uint32_t  CDETECT;                /* ALT_SDMMC_CDETECT */
    volatile uint32_t  WRTPRT;                 /* ALT_SDMMC_WRTPRT */
    volatile uint32_t  GPIO;                   /* ALT_SDMMC_GPIO */
    volatile uint32_t  TCBCNT;                 /* ALT_SDMMC_TCBCNT */
    volatile uint32_t  TBBCNT;                 /* ALT_SDMMC_TBBCNT */
    volatile uint32_t  DEBNCE;                 /* ALT_SDMMC_DEBNCE */
    volatile uint32_t  USRID;                  /* ALT_SDMMC_USRID */
    volatile uint32_t  VERID;                  /* ALT_SDMMC_VERID */
    volatile uint32_t  HCON;                   /* ALT_SDMMC_HCON */
    volatile uint32_t  UHS_REG;                /* ALT_SDMMC_UHS_REG */
    volatile uint32_t  RST_n;                  /* ALT_SDMMC_RST_N */
    volatile uint32_t  _pad_0x7c_0x7f;         /* *UNDEFINED* */
    volatile uint32_t  BMOD;                   /* ALT_SDMMC_BMOD */
    volatile uint32_t  PLDMND;                 /* ALT_SDMMC_PLDMND */
    volatile uint32_t  DBADDR;                 /* ALT_SDMMC_DBADDR */
    volatile uint32_t  IDSTS;                  /* ALT_SDMMC_IDSTS */
    volatile uint32_t  IDINTEN;                /* ALT_SDMMC_IDINTEN */
    volatile uint32_t  DSCADDR;                /* ALT_SDMMC_DSCADDR */
    volatile uint32_t  BUFADDR;                /* ALT_SDMMC_BUFADDR */
    volatile uint32_t  _pad_0x9c_0xff[25];     /* *UNDEFINED* */
    volatile uint32_t  CARDTHRCTL;             /* ALT_SDMMC_CARDTHRCTL */
    volatile uint32_t  BACK_END_POWER_R;       /* ALT_SDMMC_BACK_END_POWER_R */
    volatile uint32_t  UHS_REG_EXT;            /* ALT_SDMMC_UHS_REG_EXT */
    volatile uint32_t  EMMC_DDR_REG;           /* ALT_SDMMC_EMMC_DDR_REG */
    volatile uint32_t  ENABLE_SHIFT;           /* ALT_SDMMC_ENABLE_SHIFT */
    volatile uint32_t  _pad_0x114_0x1ff[59];   /* *UNDEFINED* */
    volatile uint32_t  DATA;                   /* SDMMC_DATA */
    volatile uint32_t  _pad_0x204_0x400[127];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_SDMMC. */
typedef struct ALT_SDMMC_raw_s  ALT_SDMMC_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_SDMMC_H__ */

