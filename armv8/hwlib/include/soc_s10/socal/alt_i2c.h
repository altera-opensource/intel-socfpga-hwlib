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

/* Altera - ALT_I2C */

#ifndef __ALT_SOCAL_I2C_H__
#define __ALT_SOCAL_I2C_H__

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
 * Component : I2C
 * DW_apb_i2c address block
 * 
 */
/*
 * Register : I2C Control Register - IC_CON
 * 
 * Name: I2C Control Register
 * 
 * Size: 20 bits
 * 
 * Address Offset: 0x00
 * 
 * Read/Write Access:
 * 
 * If configuration parameter  I2C_DYNAMIC_TAR_UPDATE=1 bit 4 is readonly.
 * 
 * If configuration parameter  IC_RX_FULL_HLD_BUS_EN =0  bit 9 is readonly.
 * 
 * If configuration parameter IC_STOP_DET_IF_MASTER_ACTIVE =0 bit 10 is readonly.
 * 
 * If configuration parameter IC_BUS_CLEAR_FEATURE=0 bit 11 is readonly
 * 
 * If configuration parameter IC_OPTIONAL_SAR=0  bit 16 is readonly
 * 
 * If configuration parameter IC_SMBUS=0  bit 17 is readonly
 * 
 * If configuration parameter IC_SMBUS_ARP=0  bits 18 & 19 are readonly
 * 
 * This register can be written only when the DW_apb_i2c
 * 
 * is disabled, which corresponds to the IC_ENABLE[0] register
 * 
 * being set to 0. Writes at other times have no effect.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                     
 * :--------|:-------|:------|:-------------------------------------------------
 *  [0]     | RW     | 0x1   | ALT_I2C_IC_CON_MASTER_MODE                      
 *  [2:1]   | RW     | 0x2   | ALT_I2C_IC_CON_SPEED                            
 *  [3]     | RW     | 0x1   | ALT_I2C_IC_CON_IC_10BITADDR_SLAVE               
 *  [4]     | R      | 0x1   | ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY      
 *  [5]     | RW     | 0x1   | ALT_I2C_IC_CON_IC_RESTART_EN                    
 *  [6]     | RW     | 0x1   | ALT_I2C_IC_CON_IC_SLAVE_DISABLE                 
 *  [7]     | RW     | 0x0   | ALT_I2C_IC_CON_STOP_DET_IFADDRESSED             
 *  [8]     | RW     | 0x0   | ALT_I2C_IC_CON_TX_EMPTY_CTRL                    
 *  [9]     | R      | 0x0   | ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL            
 *  [10]    | R      | 0x0   | ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE        
 *  [11]    | R      | 0x0   | ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL      
 *  [15:12] | R      | 0x0   | ALT_I2C_IC_CON_RSVD_IC_CON_1                    
 *  [16]    | R      | 0x0   | ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL           
 *  [17]    | R      | 0x0   | ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN        
 *  [18]    | R      | 0x0   | ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN                
 *  [19]    | R      | 0x0   | ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN
 *  [31:20] | R      | 0x0   | ALT_I2C_IC_CON_RSVD_IC_CON_2                    
 * 
 */
/*
 * Field : MASTER_MODE
 * 
 * This bit controls whether the DW_apb_i2c master is enabled.
 * 
 * 0: master disabled
 * 
 * 1: master enabled
 * 
 * Reset value: IC_MASTER_MODE configuration parameter
 * 
 * NOTE: Software should ensure that if this bit is written with '1'
 * 
 * then bit 6 should also be written with a '1'.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description            
 * :--------------------------------------|:------|:------------------------
 *  ALT_I2C_IC_CON_MASTER_MODE_E_DISABLED | 0x0   | Master mode is disabled
 *  ALT_I2C_IC_CON_MASTER_MODE_E_ENABLED  | 0x1   | Master mode is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_MASTER_MODE
 * 
 * Master mode is disabled
 */
#define ALT_I2C_IC_CON_MASTER_MODE_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_MASTER_MODE
 * 
 * Master mode is enabled
 */
#define ALT_I2C_IC_CON_MASTER_MODE_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_MASTER_MODE register field. */
#define ALT_I2C_IC_CON_MASTER_MODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_MASTER_MODE register field. */
#define ALT_I2C_IC_CON_MASTER_MODE_MSB        0
/* The width in bits of the ALT_I2C_IC_CON_MASTER_MODE register field. */
#define ALT_I2C_IC_CON_MASTER_MODE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_MASTER_MODE register field value. */
#define ALT_I2C_IC_CON_MASTER_MODE_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CON_MASTER_MODE register field value. */
#define ALT_I2C_IC_CON_MASTER_MODE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CON_MASTER_MODE register field. */
#define ALT_I2C_IC_CON_MASTER_MODE_RESET      0x1
/* Extracts the ALT_I2C_IC_CON_MASTER_MODE field value from a register. */
#define ALT_I2C_IC_CON_MASTER_MODE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CON_MASTER_MODE register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_MASTER_MODE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : SPEED
 * 
 * These bits control at which speed the DW_apb_i2c operates; its
 * 
 * setting is relevant only if one is operating the DW_apb_i2c in
 * 
 * master mode. Hardware protects against illegal values being
 * 
 * programmed by software. This register should be programmed
 * 
 * only with a value in the range of 1 to IC_MAX_SPEED_MODE;
 * 
 * otherwise, hardware updates this register with the value of
 * 
 * IC_MAX_SPEED_MODE.
 * 
 * 1: standard mode (100 kbit/s)
 * 
 * 2: fast mode (<=400 kbit/s) or fast mode plus (<=1000Kbit/s)
 * 
 * 3: high speed mode (3.4 Mbit/s)
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: IC_MAX_SPEED_MODE configuration
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                        
 * :--------------------------------|:------|:------------------------------------
 *  ALT_I2C_IC_CON_SPEED_E_STANDARD | 0x1   | Standard Speed mode of operation   
 *  ALT_I2C_IC_CON_SPEED_E_FAST     | 0x2   | Fast or Fast Plus mode of operation
 *  ALT_I2C_IC_CON_SPEED_E_HIGH     | 0x3   | High Speed mode of operation       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_SPEED
 * 
 * Standard Speed mode of operation
 */
#define ALT_I2C_IC_CON_SPEED_E_STANDARD 0x1
/*
 * Enumerated value for register field ALT_I2C_IC_CON_SPEED
 * 
 * Fast or Fast Plus mode of operation
 */
#define ALT_I2C_IC_CON_SPEED_E_FAST     0x2
/*
 * Enumerated value for register field ALT_I2C_IC_CON_SPEED
 * 
 * High Speed mode of operation
 */
#define ALT_I2C_IC_CON_SPEED_E_HIGH     0x3

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_SPEED register field. */
#define ALT_I2C_IC_CON_SPEED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_SPEED register field. */
#define ALT_I2C_IC_CON_SPEED_MSB        2
/* The width in bits of the ALT_I2C_IC_CON_SPEED register field. */
#define ALT_I2C_IC_CON_SPEED_WIDTH      2
/* The mask used to set the ALT_I2C_IC_CON_SPEED register field value. */
#define ALT_I2C_IC_CON_SPEED_SET_MSK    0x00000006
/* The mask used to clear the ALT_I2C_IC_CON_SPEED register field value. */
#define ALT_I2C_IC_CON_SPEED_CLR_MSK    0xfffffff9
/* The reset value of the ALT_I2C_IC_CON_SPEED register field. */
#define ALT_I2C_IC_CON_SPEED_RESET      0x2
/* Extracts the ALT_I2C_IC_CON_SPEED field value from a register. */
#define ALT_I2C_IC_CON_SPEED_GET(value) (((value) & 0x00000006) >> 1)
/* Produces a ALT_I2C_IC_CON_SPEED register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_SPEED_SET(value) (((value) << 1) & 0x00000006)

/*
 * Field : IC_10BITADDR_SLAVE
 * 
 * When acting as a slave, this bit controls whether the DW_apb_i2c
 * 
 * responds to 7- or 10-bit addresses.
 * 
 * 0: 7-bit addressing. The DW_apb_i2c ignores transactions that
 * 
 * involve 10-bit addressing; for 7-bit addressing,
 * 
 * only the lower 7 bits of the IC_SAR register are compared.
 * 
 * 1: 10-bit addressing. The DW_apb_i2c responds to only 10-bit
 * 
 * addressing transfers that match the full 10 bits of the IC_SAR
 * 
 * register.
 * 
 * Reset value: IC_10BITADDR_SLAVE configuration parameter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description           
 * :------------------------------------------------|:------|:-----------------------
 *  ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_E_ADDR_7BITS  | 0x0   | Slave  7Bit addressing
 *  ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_E_ADDR_10BITS | 0x1   | Slave 10Bit addressing
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_10BITADDR_SLAVE
 * 
 * Slave  7Bit addressing
 */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_E_ADDR_7BITS  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_10BITADDR_SLAVE
 * 
 * Slave 10Bit addressing
 */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_E_ADDR_10BITS 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_IC_10BITADDR_SLAVE register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_IC_10BITADDR_SLAVE register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_MSB        3
/* The width in bits of the ALT_I2C_IC_CON_IC_10BITADDR_SLAVE register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_IC_10BITADDR_SLAVE register field value. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_IC_CON_IC_10BITADDR_SLAVE register field value. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_IC_CON_IC_10BITADDR_SLAVE register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_RESET      0x1
/* Extracts the ALT_I2C_IC_CON_IC_10BITADDR_SLAVE field value from a register. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_IC_CON_IC_10BITADDR_SLAVE register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_IC_10BITADDR_SLAVE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : IC_10BITADDR_MASTER_rd_only
 * 
 * If the I2C_DYNAMIC_TAR_UPDATE configuration parameter is
 * 
 * set to 'No' (0), this bit is named IC_10BITADDR_MASTER and
 * 
 * controls whether the DW_apb_i2c starts its transfers in 7- or 10-bit
 * 
 * addressing mode when acting as a master.
 * 
 * If I2C_DYNAMIC_TAR_UPDATE is set to 'Yes' (1), the
 * 
 * function of this bit is handled by bit 12 of IC_TAR register, and
 * 
 * becomes a read-only copy called
 * 
 * IC_10BITADDR_MASTER_rd_only.
 * 
 * 0: 7-bit addressing
 * 
 * 1: 10-bit addressing
 * 
 * Dependencies: If I2C_DYNAMIC_TAR_UPDATE = 1, then this
 * 
 * bit is read-only. If I2C_DYNAMIC_TAR_UPDATE = 0, then this
 * 
 * bit can be read or write.
 * 
 * Reset value: IC_10BITADDR_MASTER configuration
 * 
 * parameter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                     | Value | Description                 
 * :---------------------------------------------------------|:------|:-----------------------------
 *  ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_E_ADDR_7BITS  | 0x0   | Master  7Bit addressing mode
 *  ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_E_ADDR_10BITS | 0x1   | Master 10Bit addressing mode
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY
 * 
 * Master  7Bit addressing mode
 */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_E_ADDR_7BITS     0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY
 * 
 * Master 10Bit addressing mode
 */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_E_ADDR_10BITS    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_MSB        4
/* The width in bits of the ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY register field value. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY register field value. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY register field. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_RESET      0x1
/* Extracts the ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY field value from a register. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : IC_RESTART_EN
 * 
 * Determines whether RESTART conditions may be sent when
 * 
 * acting as a master. Some older slaves do not support handling
 * 
 * RESTART conditions; however, RESTART conditions are used in
 * 
 * several DW_apb_i2c operations.
 * 
 * 0: disable
 * 
 * 1: enable
 * 
 * When RESTART is disabled, the master is prohibited from
 * 
 * performing the following functions:
 * 
 * * Change direction within a transfer (split)
 * 
 * * Send a START BYTE
 * 
 * * High-speed mode operation
 * 
 * * Combined format transfers in 7-bit addressing modes
 * 
 * * Read operation with a 10-bit address
 * 
 * * Send multiple bytes per transfer
 * 
 * By replacing RESTART condition followed by a STOP and a
 * 
 * subsequent START condition, split operations are broken down
 * 
 * into multiple DW_apb_i2c transfers. If the above operations are
 * 
 * performed, it will result in setting bit 6 (TX_ABRT) of the
 * 
 * IC_RAW_INTR_STAT register.
 * 
 * Reset value: IC_RESTART_EN configuration parameter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description            
 * :----------------------------------------|:------|:------------------------
 *  ALT_I2C_IC_CON_IC_RESTART_EN_E_DISABLED | 0x0   | Master restart disabled
 *  ALT_I2C_IC_CON_IC_RESTART_EN_E_ENABLED  | 0x1   | Master restart enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_RESTART_EN
 * 
 * Master restart disabled
 */
#define ALT_I2C_IC_CON_IC_RESTART_EN_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_RESTART_EN
 * 
 * Master restart enabled
 */
#define ALT_I2C_IC_CON_IC_RESTART_EN_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_IC_RESTART_EN register field. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_IC_RESTART_EN register field. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_MSB        5
/* The width in bits of the ALT_I2C_IC_CON_IC_RESTART_EN register field. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_IC_RESTART_EN register field value. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_IC_CON_IC_RESTART_EN register field value. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_IC_CON_IC_RESTART_EN register field. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_RESET      0x1
/* Extracts the ALT_I2C_IC_CON_IC_RESTART_EN field value from a register. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_IC_CON_IC_RESTART_EN register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_IC_RESTART_EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : IC_SLAVE_DISABLE
 * 
 * This bit controls whether I2C has its slave disabled,
 * 
 * which means once the presetn signal is applied, then
 * 
 * this bit takes on the value of the configuration parameter
 * 
 * IC_SLAVE_DISABLE. You have the choice of having the slave enabled
 * 
 * or disabled after reset is applied, which means software does not
 * 
 * have to configure the slave. By default, the slave is always enabled
 * 
 * (in reset state as well). If you need to disable it after reset, set
 * 
 * this bit to 1.
 * 
 * If this bit is set (slave is disabled), DW_apb_i2c functions only as
 * 
 * a master and does not perform any action that requires a slave.
 * 
 * 0: slave is enabled
 * 
 * 1: slave is disabled
 * 
 * Reset value: IC_SLAVE_DISABLE configuration parameter
 * 
 * NOTE: Software should ensure that if this bit is written with 0,
 * 
 * then bit 0 should also be written with a 0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description           
 * :-------------------------------------------------|:------|:-----------------------
 *  ALT_I2C_IC_CON_IC_SLAVE_DISABLE_E_SLAVE_ENABLED  | 0x0   | Slave mode is enabled 
 *  ALT_I2C_IC_CON_IC_SLAVE_DISABLE_E_SLAVE_DISABLED | 0x1   | Slave mode is disabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_SLAVE_DISABLE
 * 
 * Slave mode is enabled
 */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_E_SLAVE_ENABLED     0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_IC_SLAVE_DISABLE
 * 
 * Slave mode is disabled
 */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_E_SLAVE_DISABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_IC_SLAVE_DISABLE register field. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_IC_SLAVE_DISABLE register field. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_MSB        6
/* The width in bits of the ALT_I2C_IC_CON_IC_SLAVE_DISABLE register field. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_IC_SLAVE_DISABLE register field value. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_IC_CON_IC_SLAVE_DISABLE register field value. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_IC_CON_IC_SLAVE_DISABLE register field. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_RESET      0x1
/* Extracts the ALT_I2C_IC_CON_IC_SLAVE_DISABLE field value from a register. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_IC_CON_IC_SLAVE_DISABLE register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_IC_SLAVE_DISABLE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : STOP_DET_IFADDRESSED
 * 
 * In slave mode:
 * 
 * 1:  issues the STOP_DET interrrupt only when it is addressed.
 * 
 * 0:  issues the STOP_DET irrespective of whether it's addressed or not.
 * 
 * Dependencies: This register bit value is applicable in the slave mode only
 * (MASTER_MODE = 1'b0)
 * 
 * Reset value: 0x0
 * 
 * NOTE: During a general call address, this slave does not issue the
 * 
 * STOP_DET interrupt if STOP_DET_IF_ADDRESSED = 1'b1, even if
 * 
 * the slave responds to the general call address by generating ACK.
 * 
 * The STOP_DET interrupt is generated only when the transmitted
 * 
 * address matches the slave address (SAR).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description                                 
 * :-----------------------------------------------|:------|:---------------------------------------------
 *  ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_E_DISABLED | 0x0   | slave issues STOP_DET intr always           
 *  ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_E_ENABLED  | 0x1   | slave issues STOP_DET intr only if addressed
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_STOP_DET_IFADDRESSED
 * 
 * slave issues STOP_DET intr always
 */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_STOP_DET_IFADDRESSED
 * 
 * slave issues STOP_DET intr only if addressed
 */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_STOP_DET_IFADDRESSED register field. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_STOP_DET_IFADDRESSED register field. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_MSB        7
/* The width in bits of the ALT_I2C_IC_CON_STOP_DET_IFADDRESSED register field. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_STOP_DET_IFADDRESSED register field value. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_IC_CON_STOP_DET_IFADDRESSED register field value. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_IC_CON_STOP_DET_IFADDRESSED register field. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_STOP_DET_IFADDRESSED field value from a register. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_IC_CON_STOP_DET_IFADDRESSED register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_STOP_DET_IFADDRESSED_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : TX_EMPTY_CTRL
 * 
 * This bit controls the generation
 * 
 * of the TX_EMPTY interrupt, as described in the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                
 * :----------------------------------------|:------|:--------------------------------------------
 *  ALT_I2C_IC_CON_TX_EMPTY_CTRL_E_DISABLED | 0x0   | Default behaviour of TX_EMPTY interrupt    
 *  ALT_I2C_IC_CON_TX_EMPTY_CTRL_E_ENABLED  | 0x1   | Controlled generation of TX_EMPTY interrupt
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_TX_EMPTY_CTRL
 * 
 * Default behaviour of TX_EMPTY interrupt
 */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_TX_EMPTY_CTRL
 * 
 * Controlled generation of TX_EMPTY interrupt
 */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_TX_EMPTY_CTRL register field. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_TX_EMPTY_CTRL register field. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_MSB        8
/* The width in bits of the ALT_I2C_IC_CON_TX_EMPTY_CTRL register field. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_TX_EMPTY_CTRL register field value. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_IC_CON_TX_EMPTY_CTRL register field value. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_IC_CON_TX_EMPTY_CTRL register field. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_TX_EMPTY_CTRL field value from a register. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_IC_CON_TX_EMPTY_CTRL register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_TX_EMPTY_CTRL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : RX_FIFO_FULL_HLD_CTRL
 * 
 * This bit controls whether
 * 
 * DW_apb_i2c should hold the bus when the Rx FIFO is physically full to its
 * RX_BUFFER_DEPTH,
 * 
 * as described in the IC_RX_FULL_HLD_BUS_EN parameter.
 * 
 * Dependencies: This register bit value is applicable only when the
 * 
 * IC_RX_FULL_HLD_BUS_EN configuration parameter is set to 1 and
 * IC_ULTRA_FAST_MODE=0
 * 
 * If IC_RX_FULL_HLD_BUS_EN = 0, then this bit is read-only.
 * 
 * If IC_RX_FULL_HLD_BUS_EN = 1, then this bit can be read or write.
 * 
 * Reset value: 0x0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description                  
 * :------------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_E_DISABLED | 0x0   | Overflow when RX_FIFO is full
 *  ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_E_ENABLED  | 0x1   | Hold bus when RX_FIFO is full
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL
 * 
 * Overflow when RX_FIFO is full
 */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL
 * 
 * Hold bus when RX_FIFO is full
 */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL register field. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL register field. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_MSB        9
/* The width in bits of the ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL register field. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL register field value. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL register field value. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL register field. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL field value from a register. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : STOP_DET_IF_MASTER_ACTIVE
 * 
 * In Master mode:
 * 
 * 1'b1: issues the STOP_DET interrupt only when master is active.
 * 
 * 1'b0: issues the STOP_DET irrespective of whether master is active or not.
 * 
 * Dependencies: This Register bit value is applicable only when
 * IC_STOP_DET_IF_MASTER_ACTIVE=1 and IC_ULTRA_FAST_MODE=0
 * 
 * Reset value: 0x0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                | Value | Description                                    
 * :----------------------------------------------------|:------|:------------------------------------------------
 *  ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_E_DISABLED | 0x0   | Master issues the STOP_DET interrupt           
 * :                                                    |       | irrespective of whether master is active or not
 *  ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_E_ENABLED  | 0x1   | Master issues the STOP_DET interrupt only when 
 * :                                                    |       | master is active                               
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE
 * 
 * Master issues the STOP_DET interrupt irrespective of whether master is active or
 * not
 */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE
 * 
 * Master issues the STOP_DET interrupt only when master is active
 */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE register field. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE register field. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_MSB        10
/* The width in bits of the ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE register field. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE register field value. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE register field value. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE register field. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE field value from a register. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : RSVD_BUS_CLEAR_FEATURE_CTRL
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_MSB        11
/* The width in bits of the ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL register field value. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL register field value. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL field value from a register. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : RSVD_IC_CON_1
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RSVD_IC_CON_1 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RSVD_IC_CON_1 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_MSB        15
/* The width in bits of the ALT_I2C_IC_CON_RSVD_IC_CON_1 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_WIDTH      4
/* The mask used to set the ALT_I2C_IC_CON_RSVD_IC_CON_1 register field value. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_SET_MSK    0x0000f000
/* The mask used to clear the ALT_I2C_IC_CON_RSVD_IC_CON_1 register field value. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_CLR_MSK    0xffff0fff
/* The reset value of the ALT_I2C_IC_CON_RSVD_IC_CON_1 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RSVD_IC_CON_1 field value from a register. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_GET(value) (((value) & 0x0000f000) >> 12)
/* Produces a ALT_I2C_IC_CON_RSVD_IC_CON_1 register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_1_SET(value) (((value) << 12) & 0x0000f000)

/*
 * Field : RSVD_OPTIONAL_SAR_CTRL
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_MSB        16
/* The width in bits of the ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL register field value. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_SET_MSK    0x00010000
/* The mask used to clear the ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL register field value. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_CLR_MSK    0xfffeffff
/* The reset value of the ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL register field. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL field value from a register. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RSVD_SMBUS_SLAVE_QUICK_EN
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_MSB        17
/* The width in bits of the ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN register field value. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_SET_MSK    0x00020000
/* The mask used to clear the ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN register field value. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_CLR_MSK    0xfffdffff
/* The reset value of the ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN field value from a register. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : RSVD_SMBUS_ARP_EN
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_MSB        18
/* The width in bits of the ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN register field value. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_SET_MSK    0x00040000
/* The mask used to clear the ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN register field value. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_CLR_MSK    0xfffbffff
/* The reset value of the ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN field value from a register. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_MSB        19
/* The width in bits of the ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN register field value. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_SET_MSK    0x00080000
/* The mask used to clear the ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN register field value. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN register field. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN field value from a register. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : RSVD_IC_CON_2
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CON_RSVD_IC_CON_2 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CON_RSVD_IC_CON_2 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_MSB        31
/* The width in bits of the ALT_I2C_IC_CON_RSVD_IC_CON_2 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_WIDTH      12
/* The mask used to set the ALT_I2C_IC_CON_RSVD_IC_CON_2 register field value. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_SET_MSK    0xfff00000
/* The mask used to clear the ALT_I2C_IC_CON_RSVD_IC_CON_2 register field value. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_CLR_MSK    0x000fffff
/* The reset value of the ALT_I2C_IC_CON_RSVD_IC_CON_2 register field. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_RESET      0x0
/* Extracts the ALT_I2C_IC_CON_RSVD_IC_CON_2 field value from a register. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_GET(value) (((value) & 0xfff00000) >> 20)
/* Produces a ALT_I2C_IC_CON_RSVD_IC_CON_2 register field value suitable for setting the register. */
#define ALT_I2C_IC_CON_RSVD_IC_CON_2_SET(value) (((value) << 20) & 0xfff00000)

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
 * The struct declaration for register ALT_I2C_IC_CON.
 */
struct ALT_I2C_IC_CON_s
{
    volatile uint32_t        MASTER_MODE                       :  1;  /* ALT_I2C_IC_CON_MASTER_MODE */
    volatile uint32_t        SPEED                             :  2;  /* ALT_I2C_IC_CON_SPEED */
    volatile uint32_t        IC_10BITADDR_SLAVE                :  1;  /* ALT_I2C_IC_CON_IC_10BITADDR_SLAVE */
    const volatile uint32_t  IC_10BITADDR_MASTER_rd_only       :  1;  /* ALT_I2C_IC_CON_IC_10BITADDR_MASTER_RD_ONLY */
    volatile uint32_t        IC_RESTART_EN                     :  1;  /* ALT_I2C_IC_CON_IC_RESTART_EN */
    volatile uint32_t        IC_SLAVE_DISABLE                  :  1;  /* ALT_I2C_IC_CON_IC_SLAVE_DISABLE */
    volatile uint32_t        STOP_DET_IFADDRESSED              :  1;  /* ALT_I2C_IC_CON_STOP_DET_IFADDRESSED */
    volatile uint32_t        TX_EMPTY_CTRL                     :  1;  /* ALT_I2C_IC_CON_TX_EMPTY_CTRL */
    const volatile uint32_t  RX_FIFO_FULL_HLD_CTRL             :  1;  /* ALT_I2C_IC_CON_RX_FIFO_FULL_HLD_CTRL */
    const volatile uint32_t  STOP_DET_IF_MASTER_ACTIVE         :  1;  /* ALT_I2C_IC_CON_STOP_DET_IF_MASTER_ACTIVE */
    const volatile uint32_t  RSVD_BUS_CLEAR_FEATURE_CTRL       :  1;  /* ALT_I2C_IC_CON_RSVD_BUS_CLEAR_FEATURE_CTRL */
    const volatile uint32_t  RSVD_IC_CON_1                     :  4;  /* ALT_I2C_IC_CON_RSVD_IC_CON_1 */
    const volatile uint32_t  RSVD_OPTIONAL_SAR_CTRL            :  1;  /* ALT_I2C_IC_CON_RSVD_OPTIONAL_SAR_CTRL */
    const volatile uint32_t  RSVD_SMBUS_SLAVE_QUICK_EN         :  1;  /* ALT_I2C_IC_CON_RSVD_SMBUS_SLAVE_QUICK_EN */
    const volatile uint32_t  RSVD_SMBUS_ARP_EN                 :  1;  /* ALT_I2C_IC_CON_RSVD_SMBUS_ARP_EN */
    const volatile uint32_t  RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN :  1;  /* ALT_I2C_IC_CON_RSVD_SMBUS_PERSISTENT_SLV_ADDR_EN */
    const volatile uint32_t  RSVD_IC_CON_2                     : 12;  /* ALT_I2C_IC_CON_RSVD_IC_CON_2 */
};

/* The typedef declaration for register ALT_I2C_IC_CON. */
typedef struct ALT_I2C_IC_CON_s  ALT_I2C_IC_CON_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CON register. */
#define ALT_I2C_IC_CON_RESET       0x0000007d
/* The byte offset of the ALT_I2C_IC_CON register from the beginning of the component. */
#define ALT_I2C_IC_CON_OFST        0x0
/* The address of the ALT_I2C_IC_CON register. */
#define ALT_I2C_IC_CON_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CON_OFST))

/*
 * Register : I2C Target Address Register - IC_TAR
 * 
 * Name: I2C Target Address Register
 * 
 * Size: 12 bits; when I2C_DYNAMIC_TAR_UPDATE = 0 and IC_DEVICE_ID = 0
 * 
 * 13 bits; when I2C_DYNAMIC_TAR_UPDATE = 1 and IC_DEVICE_ID = 0
 * 
 * 14 bits; when IC_DEVICE_ID=1 irrespective of I2C_DYNAMIC_TAR_UPDATE is set.
 * 
 * 17 bits; when IC_SMBUS=1
 * 
 * Address Offset: 0x04
 * 
 * Read/Write Access: Read/Write
 * 
 * If the configuration parameter I2C_DYNAMIC_TAR_UPDATE is set to 'No' (0),
 * 
 * this register is 12 bits wide, and bits 31:12 are reserved. This register
 * 
 * can be written to only when IC_ENABLE[0] is set to 0.
 * 
 * However, if I2C_DYNAMIC_TAR_UPDATE = 1, then the register becomes 13 bits wide.
 * 
 * All bits can be dynamically updated as long as any set of the following
 * 
 * conditions are true:
 * 
 * * DW_apb_i2c is NOT enabled (IC_ENABLE[0] is set to 0);
 * 
 * or
 * 
 * * DW_apb_i2c is enabled (IC_ENABLE[0]=1);
 * 
 * AND
 * 
 * DW_apb_i2c is NOT engaged in any Master (tx, rx) operation (IC_STATUS[5]=0);
 * 
 * AND
 * 
 * DW_apb_i2c is enabled to operate in Master mode (IC_CON[0]=1);
 * 
 * AND
 * 
 * there are NO entries in the TX FIFO (IC_STATUS[2]=1)
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [9:0]   | RW     | 0x55  | ALT_I2C_IC_TAR_IC_TAR              
 *  [10]    | RW     | 0x0   | ALT_I2C_IC_TAR_GC_OR_START         
 *  [11]    | RW     | 0x0   | ALT_I2C_IC_TAR_SPECIAL             
 *  [12]    | RW     | 0x1   | ALT_I2C_IC_TAR_IC_10BITADDR_MASTER 
 *  [13]    | R      | 0x0   | ALT_I2C_IC_TAR_RSVD_DEVICE_ID      
 *  [15:14] | R      | 0x0   | ALT_I2C_IC_TAR_RSVD_IC_TAR_1       
 *  [16]    | R      | 0x0   | ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD
 *  [31:17] | R      | 0x0   | ALT_I2C_IC_TAR_RSVD_IC_TAR_2       
 * 
 */
/*
 * Field : IC_TAR
 * 
 * This is the target address for any master transaction. When
 * 
 * transmitting a General Call, these bits are ignored. To generate a
 * 
 * START BYTE, the CPU needs to write only once into these bits.
 * 
 * Reset value: IC_DEFAULT_TAR_SLAVE_ADDR configuration
 * 
 * parameter
 * 
 * If the IC_TAR and IC_SAR are the same, loopback exists but the
 * 
 * FIFOs are shared between master and slave, so full loopback is
 * 
 * not feasible. Only one direction loopback mode is supported
 * 
 * (simplex), not duplex. A master cannot transmit to itself; it can
 * 
 * transmit to only a slave.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_IC_TAR register field. */
#define ALT_I2C_IC_TAR_IC_TAR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_IC_TAR register field. */
#define ALT_I2C_IC_TAR_IC_TAR_MSB        9
/* The width in bits of the ALT_I2C_IC_TAR_IC_TAR register field. */
#define ALT_I2C_IC_TAR_IC_TAR_WIDTH      10
/* The mask used to set the ALT_I2C_IC_TAR_IC_TAR register field value. */
#define ALT_I2C_IC_TAR_IC_TAR_SET_MSK    0x000003ff
/* The mask used to clear the ALT_I2C_IC_TAR_IC_TAR register field value. */
#define ALT_I2C_IC_TAR_IC_TAR_CLR_MSK    0xfffffc00
/* The reset value of the ALT_I2C_IC_TAR_IC_TAR register field. */
#define ALT_I2C_IC_TAR_IC_TAR_RESET      0x55
/* Extracts the ALT_I2C_IC_TAR_IC_TAR field value from a register. */
#define ALT_I2C_IC_TAR_IC_TAR_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_I2C_IC_TAR_IC_TAR register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_IC_TAR_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : GC_OR_START
 * 
 * If bit 11 (SPECIAL) is set to 1 and bit 13(Device-ID) is set to 0, then this bit
 * indicates whether a
 * 
 * General Call or START byte command is to be performed by the
 * 
 * DW_apb_i2c.
 * 
 * 0: General Call Address  after issuing a General Call, only writes
 * 
 * may be performed. Attempting to issue a read command results in
 * 
 * setting bit 6 (TX_ABRT) of the IC_RAW_INTR_STAT register.
 * 
 * The DW_apb_i2c remains in General Call mode until the
 * 
 * SPECIAL bit value (bit 11) is cleared.
 * 
 * 1: START BYTE
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                   
 * :------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_TAR_GC_OR_START_E_GENERAL_CALL | 0x0   | GENERAL_CALL byte transmission
 *  ALT_I2C_IC_TAR_GC_OR_START_E_START_BYTE   | 0x1   | START byte transmission       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TAR_GC_OR_START
 * 
 * GENERAL_CALL byte transmission
 */
#define ALT_I2C_IC_TAR_GC_OR_START_E_GENERAL_CALL   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TAR_GC_OR_START
 * 
 * START byte transmission
 */
#define ALT_I2C_IC_TAR_GC_OR_START_E_START_BYTE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_GC_OR_START register field. */
#define ALT_I2C_IC_TAR_GC_OR_START_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_GC_OR_START register field. */
#define ALT_I2C_IC_TAR_GC_OR_START_MSB        10
/* The width in bits of the ALT_I2C_IC_TAR_GC_OR_START register field. */
#define ALT_I2C_IC_TAR_GC_OR_START_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TAR_GC_OR_START register field value. */
#define ALT_I2C_IC_TAR_GC_OR_START_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_TAR_GC_OR_START register field value. */
#define ALT_I2C_IC_TAR_GC_OR_START_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_TAR_GC_OR_START register field. */
#define ALT_I2C_IC_TAR_GC_OR_START_RESET      0x0
/* Extracts the ALT_I2C_IC_TAR_GC_OR_START field value from a register. */
#define ALT_I2C_IC_TAR_GC_OR_START_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_TAR_GC_OR_START register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_GC_OR_START_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : SPECIAL
 * 
 * This bit indicates whether software performs a Device-ID or General Call or
 * 
 * START BYTE command.
 * 
 * 0: ignore bit 10 GC_OR_START and use IC_TAR normally
 * 
 * 1: perform special I2C command as specified in Device_ID or GC_OR_START
 * 
 * bit
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description                            
 * :----------------------------------|:------|:----------------------------------------
 *  ALT_I2C_IC_TAR_SPECIAL_E_DISABLED | 0x0   | Disables programming of GENERAL_CALL or
 * :                                  |       | START_BYTE transmission                
 *  ALT_I2C_IC_TAR_SPECIAL_E_ENABLED  | 0x1   | Enables  programming of GENERAL_CALL or
 * :                                  |       | START_BYTE transmission                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TAR_SPECIAL
 * 
 * Disables programming of GENERAL_CALL or START_BYTE transmission
 */
#define ALT_I2C_IC_TAR_SPECIAL_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TAR_SPECIAL
 * 
 * Enables  programming of GENERAL_CALL or START_BYTE transmission
 */
#define ALT_I2C_IC_TAR_SPECIAL_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_SPECIAL register field. */
#define ALT_I2C_IC_TAR_SPECIAL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_SPECIAL register field. */
#define ALT_I2C_IC_TAR_SPECIAL_MSB        11
/* The width in bits of the ALT_I2C_IC_TAR_SPECIAL register field. */
#define ALT_I2C_IC_TAR_SPECIAL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TAR_SPECIAL register field value. */
#define ALT_I2C_IC_TAR_SPECIAL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_TAR_SPECIAL register field value. */
#define ALT_I2C_IC_TAR_SPECIAL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_TAR_SPECIAL register field. */
#define ALT_I2C_IC_TAR_SPECIAL_RESET      0x0
/* Extracts the ALT_I2C_IC_TAR_SPECIAL field value from a register. */
#define ALT_I2C_IC_TAR_SPECIAL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_TAR_SPECIAL register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_SPECIAL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : IC_10BITADDR_MASTER
 * 
 * This bit controls whether the DW_apb_i2c starts its transfers in 7-
 * 
 * or 10-bit addressing mode when acting as a master.
 * 
 * 0: 7-bit addressing
 * 
 * 1: 10-bit addressing
 * 
 * Dependencies: This bit exists in this register only if the
 * 
 * I2C_DYNAMIC_TAR_UPDATE configuration parameter is set
 * 
 * to 'Yes' (1).
 * 
 * Reset value: IC_10BITADDR_MASTER configuration
 * 
 * parameter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                      
 * :-------------------------------------------------|:------|:----------------------------------
 *  ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_E_ADDR_7BITS  | 0x0   | Address  7Bit transmission format
 *  ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_E_ADDR_10BITS | 0x1   | Address 10Bit transmission format
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TAR_IC_10BITADDR_MASTER
 * 
 * Address  7Bit transmission format
 */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_E_ADDR_7BITS     0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TAR_IC_10BITADDR_MASTER
 * 
 * Address 10Bit transmission format
 */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_E_ADDR_10BITS    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_IC_10BITADDR_MASTER register field. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_IC_10BITADDR_MASTER register field. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_MSB        12
/* The width in bits of the ALT_I2C_IC_TAR_IC_10BITADDR_MASTER register field. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TAR_IC_10BITADDR_MASTER register field value. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_IC_TAR_IC_10BITADDR_MASTER register field value. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_IC_TAR_IC_10BITADDR_MASTER register field. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_RESET      0x1
/* Extracts the ALT_I2C_IC_TAR_IC_10BITADDR_MASTER field value from a register. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_IC_TAR_IC_10BITADDR_MASTER register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_IC_10BITADDR_MASTER_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : RSVD_DEVICE_ID
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_RSVD_DEVICE_ID register field. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_RSVD_DEVICE_ID register field. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_MSB        13
/* The width in bits of the ALT_I2C_IC_TAR_RSVD_DEVICE_ID register field. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TAR_RSVD_DEVICE_ID register field value. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_IC_TAR_RSVD_DEVICE_ID register field value. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_IC_TAR_RSVD_DEVICE_ID register field. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_RESET      0x0
/* Extracts the ALT_I2C_IC_TAR_RSVD_DEVICE_ID field value from a register. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_IC_TAR_RSVD_DEVICE_ID register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_RSVD_DEVICE_ID_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : RSVD_IC_TAR_1
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_RSVD_IC_TAR_1 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_RSVD_IC_TAR_1 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_MSB        15
/* The width in bits of the ALT_I2C_IC_TAR_RSVD_IC_TAR_1 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_WIDTH      2
/* The mask used to set the ALT_I2C_IC_TAR_RSVD_IC_TAR_1 register field value. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_SET_MSK    0x0000c000
/* The mask used to clear the ALT_I2C_IC_TAR_RSVD_IC_TAR_1 register field value. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_CLR_MSK    0xffff3fff
/* The reset value of the ALT_I2C_IC_TAR_RSVD_IC_TAR_1 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_RESET      0x0
/* Extracts the ALT_I2C_IC_TAR_RSVD_IC_TAR_1 field value from a register. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_I2C_IC_TAR_RSVD_IC_TAR_1 register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_1_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : RSVD_SMBUS_QUICK_CMD
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD register field. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD register field. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_MSB        16
/* The width in bits of the ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD register field. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD register field value. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_SET_MSK    0x00010000
/* The mask used to clear the ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD register field value. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_CLR_MSK    0xfffeffff
/* The reset value of the ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD register field. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_RESET      0x0
/* Extracts the ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD field value from a register. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RSVD_IC_TAR_2
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TAR_RSVD_IC_TAR_2 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TAR_RSVD_IC_TAR_2 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_MSB        31
/* The width in bits of the ALT_I2C_IC_TAR_RSVD_IC_TAR_2 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_WIDTH      15
/* The mask used to set the ALT_I2C_IC_TAR_RSVD_IC_TAR_2 register field value. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_SET_MSK    0xfffe0000
/* The mask used to clear the ALT_I2C_IC_TAR_RSVD_IC_TAR_2 register field value. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_CLR_MSK    0x0001ffff
/* The reset value of the ALT_I2C_IC_TAR_RSVD_IC_TAR_2 register field. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_RESET      0x0
/* Extracts the ALT_I2C_IC_TAR_RSVD_IC_TAR_2 field value from a register. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_GET(value) (((value) & 0xfffe0000) >> 17)
/* Produces a ALT_I2C_IC_TAR_RSVD_IC_TAR_2 register field value suitable for setting the register. */
#define ALT_I2C_IC_TAR_RSVD_IC_TAR_2_SET(value) (((value) << 17) & 0xfffe0000)

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
 * The struct declaration for register ALT_I2C_IC_TAR.
 */
struct ALT_I2C_IC_TAR_s
{
    volatile uint32_t        IC_TAR               : 10;  /* ALT_I2C_IC_TAR_IC_TAR */
    volatile uint32_t        GC_OR_START          :  1;  /* ALT_I2C_IC_TAR_GC_OR_START */
    volatile uint32_t        SPECIAL              :  1;  /* ALT_I2C_IC_TAR_SPECIAL */
    volatile uint32_t        IC_10BITADDR_MASTER  :  1;  /* ALT_I2C_IC_TAR_IC_10BITADDR_MASTER */
    const volatile uint32_t  RSVD_DEVICE_ID       :  1;  /* ALT_I2C_IC_TAR_RSVD_DEVICE_ID */
    const volatile uint32_t  RSVD_IC_TAR_1        :  2;  /* ALT_I2C_IC_TAR_RSVD_IC_TAR_1 */
    const volatile uint32_t  RSVD_SMBUS_QUICK_CMD :  1;  /* ALT_I2C_IC_TAR_RSVD_SMBUS_QUICK_CMD */
    const volatile uint32_t  RSVD_IC_TAR_2        : 15;  /* ALT_I2C_IC_TAR_RSVD_IC_TAR_2 */
};

/* The typedef declaration for register ALT_I2C_IC_TAR. */
typedef struct ALT_I2C_IC_TAR_s  ALT_I2C_IC_TAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_TAR register. */
#define ALT_I2C_IC_TAR_RESET       0x00001055
/* The byte offset of the ALT_I2C_IC_TAR register from the beginning of the component. */
#define ALT_I2C_IC_TAR_OFST        0x4
/* The address of the ALT_I2C_IC_TAR register. */
#define ALT_I2C_IC_TAR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_TAR_OFST))

/*
 * Register : I2C Slave Address Register - IC_SAR
 * 
 * Name: I2C Slave Address Register
 * 
 * Size: 10 bits
 * 
 * Address Offset: 0x08
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description               
 * :--------|:-------|:------|:---------------------------
 *  [9:0]   | RW     | 0x55  | ALT_I2C_IC_SAR_IC_SAR     
 *  [31:10] | R      | 0x0   | ALT_I2C_IC_SAR_RSVD_IC_SAR
 * 
 */
/*
 * Field : IC_SAR
 * 
 * The IC_SAR holds the slave address when the I2C is operating as a slave. For
 * 7-bit
 * 
 * addressing, only IC_SAR[6:0] is used.
 * 
 * This register can be written only when the I2C interface is disabled, which
 * 
 * corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
 * have
 * 
 * no effect.
 * 
 * Note
 * 
 * The default values cannot be any of the reserved address locations:
 * 
 * that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
 * 
 * device is not guaranteed if you program the IC_SAR or IC_TAR to
 * 
 * a reserved value.
 * 
 * Reset value: IC_DEFAULT_SLAVE_ADDR configuration parameter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SAR_IC_SAR register field. */
#define ALT_I2C_IC_SAR_IC_SAR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SAR_IC_SAR register field. */
#define ALT_I2C_IC_SAR_IC_SAR_MSB        9
/* The width in bits of the ALT_I2C_IC_SAR_IC_SAR register field. */
#define ALT_I2C_IC_SAR_IC_SAR_WIDTH      10
/* The mask used to set the ALT_I2C_IC_SAR_IC_SAR register field value. */
#define ALT_I2C_IC_SAR_IC_SAR_SET_MSK    0x000003ff
/* The mask used to clear the ALT_I2C_IC_SAR_IC_SAR register field value. */
#define ALT_I2C_IC_SAR_IC_SAR_CLR_MSK    0xfffffc00
/* The reset value of the ALT_I2C_IC_SAR_IC_SAR register field. */
#define ALT_I2C_IC_SAR_IC_SAR_RESET      0x55
/* Extracts the ALT_I2C_IC_SAR_IC_SAR field value from a register. */
#define ALT_I2C_IC_SAR_IC_SAR_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_I2C_IC_SAR_IC_SAR register field value suitable for setting the register. */
#define ALT_I2C_IC_SAR_IC_SAR_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : RSVD_IC_SAR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SAR_RSVD_IC_SAR register field. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SAR_RSVD_IC_SAR register field. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_MSB        31
/* The width in bits of the ALT_I2C_IC_SAR_RSVD_IC_SAR register field. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_WIDTH      22
/* The mask used to set the ALT_I2C_IC_SAR_RSVD_IC_SAR register field value. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_SET_MSK    0xfffffc00
/* The mask used to clear the ALT_I2C_IC_SAR_RSVD_IC_SAR register field value. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_CLR_MSK    0x000003ff
/* The reset value of the ALT_I2C_IC_SAR_RSVD_IC_SAR register field. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_RESET      0x0
/* Extracts the ALT_I2C_IC_SAR_RSVD_IC_SAR field value from a register. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_GET(value) (((value) & 0xfffffc00) >> 10)
/* Produces a ALT_I2C_IC_SAR_RSVD_IC_SAR register field value suitable for setting the register. */
#define ALT_I2C_IC_SAR_RSVD_IC_SAR_SET(value) (((value) << 10) & 0xfffffc00)

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
 * The struct declaration for register ALT_I2C_IC_SAR.
 */
struct ALT_I2C_IC_SAR_s
{
    volatile uint32_t        IC_SAR      : 10;  /* ALT_I2C_IC_SAR_IC_SAR */
    const volatile uint32_t  RSVD_IC_SAR : 22;  /* ALT_I2C_IC_SAR_RSVD_IC_SAR */
};

/* The typedef declaration for register ALT_I2C_IC_SAR. */
typedef struct ALT_I2C_IC_SAR_s  ALT_I2C_IC_SAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_SAR register. */
#define ALT_I2C_IC_SAR_RESET       0x00000055
/* The byte offset of the ALT_I2C_IC_SAR register from the beginning of the component. */
#define ALT_I2C_IC_SAR_OFST        0x8
/* The address of the ALT_I2C_IC_SAR register. */
#define ALT_I2C_IC_SAR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_SAR_OFST))

/*
 * Register : I2C Rx/Tx Data Buffer and Command Register - IC_DATA_CMD
 * 
 * Name: I2C Rx/Tx Data Buffer and Command Register;
 * 
 * this is the register the CPU writes to when
 * 
 * filling the TX FIFO and the CPU reads from when
 * 
 * retrieving bytes from RX FIFO
 * 
 * Size:
 * 
 * Write
 * 
 * 11 bits when IC_EMPTYFIFO_HOLD_MASTER_EN=1
 * 
 * 9  bits when IC_EMPTYFIFO_HOLD_MASTER_EN=0
 * 
 * Read
 * 
 * 12 bits when IC_FIRST_DATA_BYTE_STATUS = 1
 * 
 * 8 bits  when  IC_FIRST_DATA_BYTE_STATUS = 0
 * 
 * Address Offset: 0x10
 * 
 * Read/Write Access: Read/Write
 * 
 * NOTE: With nine bits required for writes,
 * 
 * the DW_apb_i2c requires 16-bit data on the
 * 
 * APB bus transfers when writing into the
 * 
 * transmit FIFO. Eight-bit transfers remain for
 * 
 * reads from the receive FIFO.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_I2C_IC_DATA_CMD_DAT             
 *  [8]     | W      | 0x0   | ALT_I2C_IC_DATA_CMD_CMD             
 *  [9]     | W      | 0x0   | ALT_I2C_IC_DATA_CMD_STOP            
 *  [10]    | W      | 0x0   | ALT_I2C_IC_DATA_CMD_RESTART         
 *  [11]    | R      | 0x0   | ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE 
 *  [31:12] | R      | 0x0   | ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD
 * 
 */
/*
 * Field : DAT
 * 
 * This register contains the data to be transmitted or received on the I2C bus.
 * 
 * If you are writing to this register and want to perform a read,
 * 
 * bits 7:0 (DAT) are ignored by the DW_apb_i2c. However, when you read
 * 
 * this register, these bits return the value of data received on the
 * 
 * DW_apb_i2c interface.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DATA_CMD_DAT register field. */
#define ALT_I2C_IC_DATA_CMD_DAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DATA_CMD_DAT register field. */
#define ALT_I2C_IC_DATA_CMD_DAT_MSB        7
/* The width in bits of the ALT_I2C_IC_DATA_CMD_DAT register field. */
#define ALT_I2C_IC_DATA_CMD_DAT_WIDTH      8
/* The mask used to set the ALT_I2C_IC_DATA_CMD_DAT register field value. */
#define ALT_I2C_IC_DATA_CMD_DAT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_IC_DATA_CMD_DAT register field value. */
#define ALT_I2C_IC_DATA_CMD_DAT_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_IC_DATA_CMD_DAT register field. */
#define ALT_I2C_IC_DATA_CMD_DAT_RESET      0x0
/* Extracts the ALT_I2C_IC_DATA_CMD_DAT field value from a register. */
#define ALT_I2C_IC_DATA_CMD_DAT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_IC_DATA_CMD_DAT register field value suitable for setting the register. */
#define ALT_I2C_IC_DATA_CMD_DAT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CMD
 * 
 * This bit controls whether a read or a write is performed.
 * 
 * This bit does not control the direction when the DW_apb_i2c
 * 
 * acts as a slave. It controls only the direction
 * 
 * when it acts as a master.
 * 
 * 1 = Read
 * 
 * 0 = Write
 * 
 * When a command is entered in the TX FIFO, this bit distinguishes the write and
 * 
 * read commands. In slave-receiver mode, this bit is a 'don't care' because writes
 * to
 * 
 * this register are not required. In slave-transmitter mode, a '0' indicates that
 * CPU
 * 
 * data is to be transmitted and as DAT or IC_DATA_CMD[7:0].
 * 
 * When programming this bit, you should remember the following: attempting to
 * 
 * perform a read operation after a General Call command has been sent results in a
 * 
 * TX_ABRT interrupt (bit 6 of the IC_RAW_INTR_STAT register), unless bit 11
 * 
 * (SPECIAL) in the IC_TAR register has been cleared.
 * 
 * If a '1' is written to this bit after receiving a RD_REQ interrupt, then a
 * TX_ABRT
 * 
 * interrupt occurs.
 * 
 * NOTE: It is possible that while attempting a master I2C read transfer on
 * 
 * DW_apb_i2c, a RD_REQ interrupt may have occurred simultaneously due to a
 * 
 * remote I2C master addressing DW_apb_i2c. In this type of scenario, DW_apb_i2c
 * 
 * ignores the IC_DATA_CMD write, generates a TX_ABRT interrupt, and waits to
 * 
 * service the RD_REQ interrupt.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description         
 * :--------------------------------|:------|:---------------------
 *  ALT_I2C_IC_DATA_CMD_CMD_E_WRITE | 0x0   | Master Write Command
 *  ALT_I2C_IC_DATA_CMD_CMD_E_READ  | 0x1   | Master Read  Command
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_CMD
 * 
 * Master Write Command
 */
#define ALT_I2C_IC_DATA_CMD_CMD_E_WRITE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_CMD
 * 
 * Master Read  Command
 */
#define ALT_I2C_IC_DATA_CMD_CMD_E_READ  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DATA_CMD_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_CMD_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DATA_CMD_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_CMD_MSB        8
/* The width in bits of the ALT_I2C_IC_DATA_CMD_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_CMD_WIDTH      1
/* The mask used to set the ALT_I2C_IC_DATA_CMD_CMD register field value. */
#define ALT_I2C_IC_DATA_CMD_CMD_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_IC_DATA_CMD_CMD register field value. */
#define ALT_I2C_IC_DATA_CMD_CMD_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_IC_DATA_CMD_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_CMD_RESET      0x0
/* Extracts the ALT_I2C_IC_DATA_CMD_CMD field value from a register. */
#define ALT_I2C_IC_DATA_CMD_CMD_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_IC_DATA_CMD_CMD register field value suitable for setting the register. */
#define ALT_I2C_IC_DATA_CMD_CMD_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : STOP
 * 
 * This bit controls whether a STOP is issued after the byte is sent or received.
 * 
 * This bit is available only if IC_EMPTYFIFO_HOLD_MASTER_EN is configured to 1.
 * 
 * 1 - STOP is issued after this byte, regardless of whether or not the Tx FIFO is
 * 
 * empty. If the Tx FIFO is not empty, the master immediately tries to start a new
 * 
 * transfer by issuing a START and arbitrating for the bus.
 * 
 * 0 - STOP is not issued after this byte, regardless of whether or not the Tx FIFO
 * is
 * 
 * empty. If the Tx FIFO is not empty, the master continues the current transfer by
 * 
 * sending/receiving data bytes according to the value of the CMD bit. If the Tx
 * FIFO
 * 
 * is empty, the master holds the SCL line low and stalls the bus until a new
 * 
 * command is available in the Tx FIFO.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                        
 * :-----------------------------------|:------|:------------------------------------
 *  ALT_I2C_IC_DATA_CMD_STOP_E_DISABLE | 0x0   | Donot Issue STOP after this command
 *  ALT_I2C_IC_DATA_CMD_STOP_E_ENABLE  | 0x1   | Issue STOP after this command      
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_STOP
 * 
 * Donot Issue STOP after this command
 */
#define ALT_I2C_IC_DATA_CMD_STOP_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_STOP
 * 
 * Issue STOP after this command
 */
#define ALT_I2C_IC_DATA_CMD_STOP_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DATA_CMD_STOP register field. */
#define ALT_I2C_IC_DATA_CMD_STOP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DATA_CMD_STOP register field. */
#define ALT_I2C_IC_DATA_CMD_STOP_MSB        9
/* The width in bits of the ALT_I2C_IC_DATA_CMD_STOP register field. */
#define ALT_I2C_IC_DATA_CMD_STOP_WIDTH      1
/* The mask used to set the ALT_I2C_IC_DATA_CMD_STOP register field value. */
#define ALT_I2C_IC_DATA_CMD_STOP_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_IC_DATA_CMD_STOP register field value. */
#define ALT_I2C_IC_DATA_CMD_STOP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_IC_DATA_CMD_STOP register field. */
#define ALT_I2C_IC_DATA_CMD_STOP_RESET      0x0
/* Extracts the ALT_I2C_IC_DATA_CMD_STOP field value from a register. */
#define ALT_I2C_IC_DATA_CMD_STOP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_IC_DATA_CMD_STOP register field value suitable for setting the register. */
#define ALT_I2C_IC_DATA_CMD_STOP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : RESTART
 * 
 * This bit controls whether a RESTART is issued before the byte is sent or
 * received.
 * 
 * This bit is available only if IC_EMPTYFIFO_HOLD_MASTER_EN is configured to 1.
 * 
 * 1 - If IC_RESTART_EN is 1, a RESTART is issued before the data is
 * 
 * sent/received (according to the value of CMD), regardless of whether or not the
 * 
 * transfer direction is changing from the previous command; if IC_RESTART_EN
 * 
 * is 0, a STOP followed by a START is issued instead.
 * 
 * 0 - If IC_RESTART_EN is 1, a RESTART is issued only if the transfer direction is
 * 
 * changing from the previous command; if IC_RESTART_EN is 0, a STOP followed
 * 
 * by a START is issued instead.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                            
 * :--------------------------------------|:------|:----------------------------------------
 *  ALT_I2C_IC_DATA_CMD_RESTART_E_DISABLE | 0x0   | Donot Issue RESTART before this command
 *  ALT_I2C_IC_DATA_CMD_RESTART_E_ENABLE  | 0x1   | Issue RESTART before this command      
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_RESTART
 * 
 * Donot Issue RESTART before this command
 */
#define ALT_I2C_IC_DATA_CMD_RESTART_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_RESTART
 * 
 * Issue RESTART before this command
 */
#define ALT_I2C_IC_DATA_CMD_RESTART_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DATA_CMD_RESTART register field. */
#define ALT_I2C_IC_DATA_CMD_RESTART_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DATA_CMD_RESTART register field. */
#define ALT_I2C_IC_DATA_CMD_RESTART_MSB        10
/* The width in bits of the ALT_I2C_IC_DATA_CMD_RESTART register field. */
#define ALT_I2C_IC_DATA_CMD_RESTART_WIDTH      1
/* The mask used to set the ALT_I2C_IC_DATA_CMD_RESTART register field value. */
#define ALT_I2C_IC_DATA_CMD_RESTART_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_DATA_CMD_RESTART register field value. */
#define ALT_I2C_IC_DATA_CMD_RESTART_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_DATA_CMD_RESTART register field. */
#define ALT_I2C_IC_DATA_CMD_RESTART_RESET      0x0
/* Extracts the ALT_I2C_IC_DATA_CMD_RESTART field value from a register. */
#define ALT_I2C_IC_DATA_CMD_RESTART_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_DATA_CMD_RESTART register field value suitable for setting the register. */
#define ALT_I2C_IC_DATA_CMD_RESTART_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : FIRST_DATA_BYTE
 * 
 * Indicates the first data byte
 * 
 * received after the address phase for receive transfer in Master receiver or
 * Slave receiver mode.
 * 
 * Reset value : 0x0
 * 
 * Dependencies: This Register bit value is  applicable only when
 * FIRST_DATA_BYTE_STATUS=1
 * 
 * NOTE:  In case of APB_DATA_WIDTH=8,
 * 
 * a.      The user has to perform two APB Reads to IC_DATA_CMD in order to get
 * status on 11 bit.
 * 
 * b.      Inorder to read the 11 bit, the user has to perform the first data byte
 * read [7:0] (offset 0x10)
 * 
 * and then perform the second read[15:8](offset 0x11)  in order to know the status
 * of 11 bit
 * 
 * (whether the data received in previous read is a first data byte or not).
 * 
 * c.      The 11th bit is an optional read field, user can ignore 2nd byte read
 * [15:8] (offset 0x11)
 * 
 * if not interested in FIRST_DATA_BYTE status.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description                      
 * :-----------------------------------------------|:------|:----------------------------------
 *  ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_E_INACTIVE | 0x0   | Sequential data byte received    
 *  ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_E_ACTIVE   | 0x1   | Non sequential data byte received
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE
 * 
 * Sequential data byte received
 */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE
 * 
 * Non sequential data byte received
 */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE register field. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE register field. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_MSB        11
/* The width in bits of the ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE register field. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE register field value. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE register field value. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE register field. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_RESET      0x0
/* Extracts the ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE field value from a register. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE register field value suitable for setting the register. */
#define ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : RSVD_IC_DATA_CMD
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_MSB        31
/* The width in bits of the ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_WIDTH      20
/* The mask used to set the ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD register field value. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_SET_MSK    0xfffff000
/* The mask used to clear the ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD register field value. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_CLR_MSK    0x00000fff
/* The reset value of the ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD register field. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_RESET      0x0
/* Extracts the ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD field value from a register. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_GET(value) (((value) & 0xfffff000) >> 12)
/* Produces a ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD register field value suitable for setting the register. */
#define ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD_SET(value) (((value) << 12) & 0xfffff000)

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
 * The struct declaration for register ALT_I2C_IC_DATA_CMD.
 */
struct ALT_I2C_IC_DATA_CMD_s
{
    volatile uint32_t        DAT              :  8;  /* ALT_I2C_IC_DATA_CMD_DAT */
    volatile uint32_t        CMD              :  1;  /* ALT_I2C_IC_DATA_CMD_CMD */
    volatile uint32_t        STOP             :  1;  /* ALT_I2C_IC_DATA_CMD_STOP */
    volatile uint32_t        RESTART          :  1;  /* ALT_I2C_IC_DATA_CMD_RESTART */
    const volatile uint32_t  FIRST_DATA_BYTE  :  1;  /* ALT_I2C_IC_DATA_CMD_FIRST_DATA_BYTE */
    const volatile uint32_t  RSVD_IC_DATA_CMD : 20;  /* ALT_I2C_IC_DATA_CMD_RSVD_IC_DATA_CMD */
};

/* The typedef declaration for register ALT_I2C_IC_DATA_CMD. */
typedef struct ALT_I2C_IC_DATA_CMD_s  ALT_I2C_IC_DATA_CMD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_DATA_CMD register. */
#define ALT_I2C_IC_DATA_CMD_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_DATA_CMD register from the beginning of the component. */
#define ALT_I2C_IC_DATA_CMD_OFST        0x10
/* The address of the ALT_I2C_IC_DATA_CMD register. */
#define ALT_I2C_IC_DATA_CMD_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_DATA_CMD_OFST))

/*
 * Register : Standard Speed I2C Clock SCL High Count Register - IC_SS_SCL_HCNT
 * 
 * Name: Standard Speed I2C Clock SCL High Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x14
 * 
 * Read/Write Access: Read/Write
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                     
 * :--------|:-------|:------|:-------------------------------------------------
 *  [15:0]  | RW     | 0x1f4 | ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT           
 *  [31:16] | R      | 0x0   | ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT
 * 
 */
/*
 * Field : IC_SS_SCL_HCNT
 * 
 * This register must be set before any I2C bus transaction can take place to
 * 
 * ensure proper I/O timing. This register sets the SCL clock high-period
 * 
 * count for standard speed.
 * 
 * This register can be written only when the I2C interface is disabled which
 * 
 * corresponds to the IC_ENABLE[0] register being set to 0. Writes at other
 * 
 * times have no effect.
 * 
 * The minimum valid value is 6; hardware prevents values less than this
 * 
 * being written, and if attempted results in 6 being set. For designs with
 * 
 * APB_DATA_WIDTH = 8, the order of programming is important to ensure
 * 
 * the correct operation of the DW_apb_i2c. The lower byte must be
 * 
 * programmed first. Then the upper byte is programmed.
 * 
 * When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
 * 
 * this register is read only.
 * 
 * NOTE: This register must not be programmed to a value higher than
 * 
 * 65525, because DW_apb_i2c uses a 16-bit counter to flag an I2C bus idle
 * 
 * condition when this counter reaches a value of IC_SS_SCL_HCNT + 10.
 * 
 * Reset value: IC_SS_SCL_HIGH_COUNT configuration parameter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_MSB        15
/* The width in bits of the ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT register field value. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT register field value. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_RESET      0x1f4
/* Extracts the ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT field value from a register. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT register field value suitable for setting the register. */
#define ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : RSVD_IC_SS_SCL_HIGH_COUNT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_MSB        31
/* The width in bits of the ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT register field value. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT register field value. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_RESET      0x0
/* Extracts the ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT field value from a register. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT register field value suitable for setting the register. */
#define ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_I2C_IC_SS_SCL_HCNT.
 */
struct ALT_I2C_IC_SS_SCL_HCNT_s
{
    volatile uint32_t        IC_SS_SCL_HCNT            : 16;  /* ALT_I2C_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT */
    const volatile uint32_t  RSVD_IC_SS_SCL_HIGH_COUNT : 16;  /* ALT_I2C_IC_SS_SCL_HCNT_RSVD_IC_SS_SCL_HIGH_COUNT */
};

/* The typedef declaration for register ALT_I2C_IC_SS_SCL_HCNT. */
typedef struct ALT_I2C_IC_SS_SCL_HCNT_s  ALT_I2C_IC_SS_SCL_HCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_SS_SCL_HCNT register. */
#define ALT_I2C_IC_SS_SCL_HCNT_RESET       0x000001f4
/* The byte offset of the ALT_I2C_IC_SS_SCL_HCNT register from the beginning of the component. */
#define ALT_I2C_IC_SS_SCL_HCNT_OFST        0x14
/* The address of the ALT_I2C_IC_SS_SCL_HCNT register. */
#define ALT_I2C_IC_SS_SCL_HCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_SS_SCL_HCNT_OFST))

/*
 * Register : Standard Speed I2C Clock SCL Low Count Register - IC_SS_SCL_LCNT
 * 
 * Name: Standard Speed I2C Clock SCL Low Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x18
 * 
 * Read/Write Access: Read/Write
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | RW     | 0x24c | ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT          
 *  [31:16] | R      | 0x0   | ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT
 * 
 */
/*
 * Field : IC_SS_SCL_LCNT
 * 
 * This register must be set before any I2C bus transaction can take place to
 * 
 * ensure proper I/O timing. This register sets the SCL clock low period
 * 
 * count for standard speed.
 * 
 * This register can be written only when the I2C interface is disabled which
 * 
 * corresponds to the IC_ENABLE[0] register being set to 0. Writes at other
 * 
 * times have no effect.
 * 
 * The minimum valid value is 8; hardware prevents values less than this
 * 
 * being written, and if attempted, results in 8 being set. For designs with
 * 
 * APB_DATA_WIDTH = 8, the order of programming is important to
 * 
 * ensure the correct operation of DW_apb_i2c. The lower byte must be
 * 
 * programmed first, and then the upper byte is programmed.
 * 
 * When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
 * 
 * this register is read only.
 * 
 * Reset value: IC_SS_SCL_LOW_COUNT configuration parameter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_MSB        15
/* The width in bits of the ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT register field value. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT register field value. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_RESET      0x24c
/* Extracts the ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT field value from a register. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT register field value suitable for setting the register. */
#define ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : RSVD_IC_SS_SCL_LOW_COUNT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_MSB        31
/* The width in bits of the ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT register field value. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT register field value. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT register field. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_RESET      0x0
/* Extracts the ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT field value from a register. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT register field value suitable for setting the register. */
#define ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_I2C_IC_SS_SCL_LCNT.
 */
struct ALT_I2C_IC_SS_SCL_LCNT_s
{
    volatile uint32_t        IC_SS_SCL_LCNT           : 16;  /* ALT_I2C_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT */
    const volatile uint32_t  RSVD_IC_SS_SCL_LOW_COUNT : 16;  /* ALT_I2C_IC_SS_SCL_LCNT_RSVD_IC_SS_SCL_LOW_COUNT */
};

/* The typedef declaration for register ALT_I2C_IC_SS_SCL_LCNT. */
typedef struct ALT_I2C_IC_SS_SCL_LCNT_s  ALT_I2C_IC_SS_SCL_LCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_SS_SCL_LCNT register. */
#define ALT_I2C_IC_SS_SCL_LCNT_RESET       0x0000024c
/* The byte offset of the ALT_I2C_IC_SS_SCL_LCNT register from the beginning of the component. */
#define ALT_I2C_IC_SS_SCL_LCNT_OFST        0x18
/* The address of the ALT_I2C_IC_SS_SCL_LCNT register. */
#define ALT_I2C_IC_SS_SCL_LCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_SS_SCL_LCNT_OFST))

/*
 * Register : Fast Mode or Fast Mode Plus I2C Clock SCL High Count Register - IC_FS_SCL_HCNT
 * 
 * Name: Fast Mode or Fast Mode Plus I2C Clock SCL High Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x1c
 * 
 * Read/Write Access: Read/Write
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [15:0]  | RW     | 0x4b  | ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT     
 *  [31:16] | R      | 0x0   | ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT
 * 
 */
/*
 * Field : IC_FS_SCL_HCNT
 * 
 * This register must be set before any I2C bus transaction can take place to
 * 
 * ensure proper I/O timing. This register sets the SCL clock high-period
 * 
 * count for fast mode or fast mode plus. It is used in high-speed mode to send the
 * Master Code
 * 
 * and START BYTE or General CALL.
 * 
 * This register goes away and becomes read-only returning 0s if
 * 
 * IC_MAX_SPEED_MODE = standard. This register can be written only
 * 
 * when the I2C interface is disabled, which corresponds to the IC_ENABLE[0]
 * 
 * register being set to 0. Writes at other times have no effect.
 * 
 * The minimum valid value is 6; hardware prevents values less than this
 * 
 * being written, and if attempted results in 6 being set. For designs with
 * 
 * APB_DATA_WIDTH == 8 the order of programming is important to
 * 
 * ensure the correct operation of the DW_apb_i2c. The lower byte must be
 * 
 * programmed first. Then the upper byte is programmed.
 * 
 * When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
 * 
 * this register is read only.
 * 
 * Reset value: IC_FS_SCL_HIGH_COUNT configuration parameter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_MSB        15
/* The width in bits of the ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT register field value. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT register field value. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_RESET      0x4b
/* Extracts the ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT field value from a register. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT register field value suitable for setting the register. */
#define ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : RSVD_IC_FS_SCL_HCNT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_MSB        31
/* The width in bits of the ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT register field value. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT register field value. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_RESET      0x0
/* Extracts the ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT field value from a register. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT register field value suitable for setting the register. */
#define ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_I2C_IC_FS_SCL_HCNT.
 */
struct ALT_I2C_IC_FS_SCL_HCNT_s
{
    volatile uint32_t        IC_FS_SCL_HCNT      : 16;  /* ALT_I2C_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT */
    const volatile uint32_t  RSVD_IC_FS_SCL_HCNT : 16;  /* ALT_I2C_IC_FS_SCL_HCNT_RSVD_IC_FS_SCL_HCNT */
};

/* The typedef declaration for register ALT_I2C_IC_FS_SCL_HCNT. */
typedef struct ALT_I2C_IC_FS_SCL_HCNT_s  ALT_I2C_IC_FS_SCL_HCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_FS_SCL_HCNT register. */
#define ALT_I2C_IC_FS_SCL_HCNT_RESET       0x0000004b
/* The byte offset of the ALT_I2C_IC_FS_SCL_HCNT register from the beginning of the component. */
#define ALT_I2C_IC_FS_SCL_HCNT_OFST        0x1c
/* The address of the ALT_I2C_IC_FS_SCL_HCNT register. */
#define ALT_I2C_IC_FS_SCL_HCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_FS_SCL_HCNT_OFST))

/*
 * Register : Fast Mode or Fast Mode Plus I2C Clock SCL Low Count Register - IC_FS_SCL_LCNT
 * 
 * Name: Fast Mode or Fast Mode Plus I2C Clock SCL Low Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x20
 * 
 * Read/Write Access: Read/Write
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [15:0]  | RW     | 0xa3  | ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT     
 *  [31:16] | R      | 0x0   | ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT
 * 
 */
/*
 * Field : IC_FS_SCL_LCNT
 * 
 * This register must be set before any I2C bus transaction can take place to
 * 
 * ensure proper I/O timing. This register sets the SCL clock low period count
 * 
 * for fast speed. It is used in high-speed mode to send the Master Code and
 * 
 * START BYTE or General CALL.
 * 
 * This register goes away and becomes read-only returning 0s if
 * 
 * IC_MAX_SPEED_MODE = standard.
 * 
 * This register can be written only when the I2C interface is disabled, which
 * 
 * corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
 * 
 * have no effect.
 * 
 * The minimum valid value is 8; hardware prevents values less than this
 * 
 * being written, and if attempted results in 8 being set. For designs with
 * 
 * APB_DATA_WIDTH = 8 the order of programming is important to ensure
 * 
 * the correct operation of the DW_apb_i2c. The lower byte must be
 * 
 * programmed first. Then the upper byte is programmed. If the value is less
 * 
 * than 8 then the count value gets changed to 8.
 * 
 * When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
 * 
 * this register is read only.
 * 
 * Reset value: IC_FS_SCL_LOW_COUNT configuration parameter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_MSB        15
/* The width in bits of the ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT register field value. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT register field value. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_RESET      0xa3
/* Extracts the ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT field value from a register. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT register field value suitable for setting the register. */
#define ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : RSVD_IC_FS_SCL_LCNT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_MSB        31
/* The width in bits of the ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_WIDTH      16
/* The mask used to set the ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT register field value. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT register field value. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_RESET      0x0
/* Extracts the ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT field value from a register. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT register field value suitable for setting the register. */
#define ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_I2C_IC_FS_SCL_LCNT.
 */
struct ALT_I2C_IC_FS_SCL_LCNT_s
{
    volatile uint32_t        IC_FS_SCL_LCNT      : 16;  /* ALT_I2C_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT */
    const volatile uint32_t  RSVD_IC_FS_SCL_LCNT : 16;  /* ALT_I2C_IC_FS_SCL_LCNT_RSVD_IC_FS_SCL_LCNT */
};

/* The typedef declaration for register ALT_I2C_IC_FS_SCL_LCNT. */
typedef struct ALT_I2C_IC_FS_SCL_LCNT_s  ALT_I2C_IC_FS_SCL_LCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_FS_SCL_LCNT register. */
#define ALT_I2C_IC_FS_SCL_LCNT_RESET       0x000000a3
/* The byte offset of the ALT_I2C_IC_FS_SCL_LCNT register from the beginning of the component. */
#define ALT_I2C_IC_FS_SCL_LCNT_OFST        0x20
/* The address of the ALT_I2C_IC_FS_SCL_LCNT register. */
#define ALT_I2C_IC_FS_SCL_LCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_FS_SCL_LCNT_OFST))

/*
 * Register : High Speed I2C Clock SCL Low Count Register - IC_INTR_STAT
 * 
 * Name: I2C Interrupt Status Register
 * 
 * Size: 15 bits
 * 
 * Address Offset: 0x2C
 * 
 * Read/Write Access: Read
 * 
 * Each bit in this register has a corresponding mask bit
 * 
 * in the IC_INTR_MASK register. These bits are cleared by reading the matching
 * 
 * interrupt clear register. The unmasked raw versions of these bits are
 * 
 * available in the IC_RAW_INTR_STAT register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [0]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_RX_UNDER             
 *  [1]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_RX_OVER              
 *  [2]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_RX_FULL              
 *  [3]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_TX_OVER              
 *  [4]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_TX_EMPTY             
 *  [5]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_RD_REQ               
 *  [6]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_TX_ABRT              
 *  [7]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_RX_DONE              
 *  [8]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_ACTIVITY             
 *  [9]     | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_STOP_DET             
 *  [10]    | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_START_DET            
 *  [11]    | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_GEN_CALL             
 *  [12]    | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_RESTART_DET          
 *  [13]    | R      | 0x0   | ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD       
 *  [14]    | R      | 0x0   | ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW
 *  [31:15] | R      | 0x0   | ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT      
 * 
 */
/*
 * Field : R_RX_UNDER
 * 
 * Set if the processor attempts to read the receive buffer when it is empty by
 * 
 * reading from the IC_DATA_CMD register. If the module is disabled
 * 
 * (IC_ENABLE[0]=0), this bit keeps its level until the master or slave state
 * 
 * machines go into idle, and when ic_en goes to 0, this interrupt is cleared.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                   
 * :-------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_RX_UNDER_E_INACTIVE | 0x0   | RX_UNDER interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_RX_UNDER_E_ACTIVE   | 0x1   | RX_UNDER interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_UNDER
 * 
 * RX_UNDER interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_UNDER
 * 
 * RX_UNDER interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_RX_UNDER register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_RX_UNDER register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_RX_UNDER field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_INTR_STAT_R_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : R_RX_OVER
 * 
 * Set if the receive buffer is completely filled to IC_RX_BUFFER_DEPTH and
 * 
 * an additional byte is received from an external I2C device. The DW_apb_i2c
 * 
 * acknowledges this, but any data bytes received after the FIFO is full are lost.
 * If
 * 
 * the module is disabled (IC_ENABLE[0]=0), this bit keeps its level until the
 * 
 * master or slave state machines go into idle, and when ic_en goes to 0, this
 * 
 * interrupt is cleared.
 * 
 * NOTE: If configuration parameter IC_RX_FULL_HLD_BUS_EN is Enabled and IC_CON[9]
 * bit (RX_FIFO_FULL_HLD_CTRL) is programmed to HIGH,
 * 
 * then the RX_OVER interrupt will never occur, because the Rx FIFO will never
 * overflow.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                    
 * :------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_RX_OVER_E_INACTIVE | 0x0   | R_RX_OVER interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_RX_OVER_E_ACTIVE   | 0x1   | R_RX_OVER interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_OVER
 * 
 * R_RX_OVER interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_OVER
 * 
 * R_RX_OVER interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_MSB        1
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_RX_OVER register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_RX_OVER register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_RX_OVER field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_INTR_STAT_R_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_OVER_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : R_RX_FULL
 * 
 * Set when the receive buffer reaches or goes above the RX_TL threshold in the
 * 
 * IC_RX_TL register. It is automatically cleared by hardware when buffer level
 * 
 * goes below the threshold. If the module is disabled (IC_ENABLE[0]=0), the
 * 
 * RX FIFO is flushed and held in reset; therefore the RX FIFO is not full. So this
 * 
 * bit is cleared once the IC_ENABLE bit 0 is programmed with a 0, regardless of
 * 
 * the activity that continues.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                    
 * :------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_RX_FULL_E_INACTIVE | 0x0   | R_RX_FULL interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_RX_FULL_E_ACTIVE   | 0x1   | R_RX_FULL interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_FULL
 * 
 * R_RX_FULL interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_FULL
 * 
 * R_RX_FULL interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_MSB        2
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_RX_FULL register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_RX_FULL register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_RX_FULL field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_IC_INTR_STAT_R_RX_FULL register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_FULL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : R_TX_OVER
 * 
 * Set during transmit if the transmit buffer is filled to IC_TX_BUFFER_DEPTH
 * 
 * and the processor attempts to issue another I2C command by writing to the
 * 
 * IC_DATA_CMD register. When the module is disabled, this bit keeps its level
 * 
 * until the master or slave state machines go into idle, and when ic_en goes to 0,
 * 
 * this interrupt is cleared.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                    
 * :------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_TX_OVER_E_INACTIVE | 0x0   | R_TX_OVER interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_TX_OVER_E_ACTIVE   | 0x1   | R_TX_OVER interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_TX_OVER
 * 
 * R_TX_OVER interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_TX_OVER
 * 
 * R_TX_OVER interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_MSB        3
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_TX_OVER register field value. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_TX_OVER register field value. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_TX_OVER field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_IC_INTR_STAT_R_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_TX_OVER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : R_TX_EMPTY
 * 
 * The behavior of the TX_EMPTY interrupt status differs based on the
 * 
 * TX_EMPTY_CTRL selection in the IC_CON register.
 * 
 * When TX_EMPTY_CTRL = 0:  This bit is set to 1 when the transmit buffer is at or
 * below the threshold
 * 
 * value set in the IC_TX_TL register.
 * 
 * When TX_EMPTY_CTRL = 1: This bit is set to 1 when the transmit buffer is at or
 * below the threshold
 * 
 * value set in the IC_TX_TL register and the transmission of the
 * 
 * address/data from the internal shift register for the most recently popped
 * 
 * command is completed.
 * 
 * It is automatically cleared by hardware when the buffer level goes above the
 * 
 * threshold. When IC_ENABLE[0] is set to 0, the TX FIFO is flushed and held in
 * 
 * reset. There the TX FIFO looks like it has no data within it, so this bit is set
 * 
 * to 1, provided there is activity in the master or slave state machines. When
 * 
 * there is no longer any activity, then with ic_en=0, this bit is set to 0.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                     
 * :-------------------------------------------|:------|:---------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_E_INACTIVE | 0x0   | R_TX_EMPTY interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_E_ACTIVE   | 0x1   | R_TX_EMPTY interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_TX_EMPTY
 * 
 * R_TX_EMPTY interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_TX_EMPTY
 * 
 * R_TX_EMPTY interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_MSB        4
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_TX_EMPTY register field value. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_TX_EMPTY register field value. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_TX_EMPTY field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_IC_INTR_STAT_R_TX_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_TX_EMPTY_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : R_RD_REQ
 * 
 * This bit is set to 1 when DW_apb_i2c is acting as a slave and another I2C
 * 
 * master is attempting to read data from DW_apb_i2c. The DW_apb_i2c holds
 * 
 * the I2C bus in a wait state (SCL=0) until this interrupt is serviced, which
 * means
 * 
 * that the slave has been addressed by a remote master that is asking for data to
 * 
 * be transferred. The processor must respond to this interrupt and then write the
 * 
 * requested data to the IC_DATA_CMD register. This bit is set to 0 just after the
 * 
 * processor reads the IC_CLR_RD_REQ register.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description                   
 * :-----------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_RD_REQ_E_INACTIVE | 0x0   | R_RD_REQ interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_RD_REQ_E_ACTIVE   | 0x1   | R_RD_REQ interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RD_REQ
 * 
 * R_RD_REQ interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RD_REQ
 * 
 * R_RD_REQ interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_MSB        5
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_RD_REQ register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_RD_REQ register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_RD_REQ field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_IC_INTR_STAT_R_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_RD_REQ_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : R_TX_ABRT
 * 
 * This bit indicates if DW_apb_i2c, as an I2C transmitter,
 * 
 * is unable to complete the intended actions on the
 * 
 * contents of the transmit FIFO. This situation can
 * 
 * occur both as an I2C master or an I2C slave, and is
 * 
 * referred to as a 'transmit abort'.
 * 
 * When this bit is set to 1, the IC_TX_ABRT_SOURCE register
 * 
 * indicates the reason why the transmit abort takes places.
 * 
 * NOTE: The DW_apb_i2c flushes/resets/empties the TX FIFO whenever this
 * 
 * bit is set. The TX FIFO remains in this flushed state until the register
 * 
 * IC_CLR_TX_ABRT is read. Once this read is performed, the TX FIFO is then
 * 
 * ready to accept more data bytes from the APB interface.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                    
 * :------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_TX_ABRT_E_INACTIVE | 0x0   | R_TX_ABRT interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_TX_ABRT_E_ACTIVE   | 0x1   | R_TX_ABRT interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_TX_ABRT
 * 
 * R_TX_ABRT interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_TX_ABRT
 * 
 * R_TX_ABRT interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_MSB        6
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_TX_ABRT register field value. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_TX_ABRT register field value. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_TX_ABRT field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_IC_INTR_STAT_R_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_TX_ABRT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : R_RX_DONE
 * 
 * When the DW_apb_i2c is acting as a slave-transmitter,
 * 
 * this bit is set to 1 if the master does not acknowledge
 * 
 * a transmitted byte. This occurs on the last byte of
 * 
 * the transmission, indicating that the transmission is done.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                    
 * :------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_RX_DONE_E_INACTIVE | 0x0   | R_RX_DONE interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_RX_DONE_E_ACTIVE   | 0x1   | R_RX_DONE interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_DONE
 * 
 * R_RX_DONE interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RX_DONE
 * 
 * R_RX_DONE interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_MSB        7
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_RX_DONE register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_RX_DONE register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_RX_DONE field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_IC_INTR_STAT_R_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_RX_DONE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : R_ACTIVITY
 * 
 * This bit captures DW_apb_i2c activity and stays set until it is cleared. There
 * 
 * are four ways to clear it:
 * 
 * * Disabling the DW_apb_i2c
 * 
 * * Reading the IC_CLR_ACTIVITY register
 * 
 * * Reading the IC_CLR_INTR register
 * 
 * * System reset
 * 
 * Once this bit is set, it stays set unless one of the four methods is used to
 * clear it.
 * 
 * Even if the DW_apb_i2c module is idle, this bit remains set until cleared,
 * 
 * indicating that there was activity on the bus.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                     
 * :-------------------------------------------|:------|:---------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_ACTIVITY_E_INACTIVE | 0x0   | R_ACTIVITY interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_ACTIVITY_E_ACTIVE   | 0x1   | R_ACTIVITY interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_ACTIVITY
 * 
 * R_ACTIVITY interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_ACTIVITY
 * 
 * R_ACTIVITY interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_MSB        8
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_ACTIVITY register field value. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_ACTIVITY register field value. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_ACTIVITY field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_IC_INTR_STAT_R_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_ACTIVITY_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : R_STOP_DET
 * 
 * The behavior of the STOP_DET interrupt status differs based on the
 * 
 * STOP_DET_IFADDRESSED selection in the IC_CON register
 * 
 * When STOP_DET_IFADDRESSED =0 : Indicates whether a STOP condition has occurred
 * on the I2C interface
 * 
 * regardless of whether DW_apb_i2c is operating in slave or master mode.
 * 
 * In slave mode, a STOP_DET interrupt is generated irrespective of whether
 * 
 * the slave is addressed or not.
 * 
 * When STOP_DET_IFADDRESSED = 1 :
 * 
 * In Master Mode (MASTER_MODE = 1'b1), indicates a STOP condition has occured on
 * the I2C interface.
 * 
 * In Slave Mode (MASTER_MODE = 1'b0),STOP_DET interrupt is generated only if the
 * slave is addressed.
 * 
 * NOTE: During a general call address, this slave does not issue a STOP_DET
 * 
 * interrupt if STOP_DET_IFADDRESSED=1'b1, even if the slave responds to
 * 
 * the general call address by generating ACK. The STOP_DET interrupt is
 * 
 * generated only when the transmitted address matches the slave address
 * 
 * (SAR).
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                     
 * :-------------------------------------------|:------|:---------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_STOP_DET_E_INACTIVE | 0x0   | R_STOP_DET interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_STOP_DET_E_ACTIVE   | 0x1   | R_STOP_DET interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_STOP_DET
 * 
 * R_STOP_DET interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_STOP_DET
 * 
 * R_STOP_DET interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_MSB        9
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_STOP_DET register field value. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_STOP_DET register field value. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_STOP_DET field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_IC_INTR_STAT_R_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_STOP_DET_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : R_START_DET
 * 
 * Indicates whether a START or RESTART condition has occurred on the I2C
 * 
 * interface regardless of whether DW_apb_i2c is operating in slave or master
 * 
 * mode.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                      
 * :--------------------------------------------|:------|:----------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_START_DET_E_INACTIVE | 0x0   | R_START_DET interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_START_DET_E_ACTIVE   | 0x1   | R_START_DET interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_START_DET
 * 
 * R_START_DET interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_START_DET
 * 
 * R_START_DET interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_MSB        10
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_START_DET register field value. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_START_DET register field value. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_START_DET field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_INTR_STAT_R_START_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_START_DET_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : R_GEN_CALL
 * 
 * Set only when a General Call address is received and it is acknowledged. It
 * 
 * stays set until it is cleared either by disabling DW_apb_i2c or when the CPU
 * 
 * reads bit 0 of the IC_CLR_GEN_CALL register. DW_apb_i2c stores the
 * 
 * received data in the Rx buffer.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                     
 * :-------------------------------------------|:------|:---------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_GEN_CALL_E_INACTIVE | 0x0   | R_GEN_CALL interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_GEN_CALL_E_ACTIVE   | 0x1   | R_GEN_CALL interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_GEN_CALL
 * 
 * R_GEN_CALL interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_GEN_CALL
 * 
 * R_GEN_CALL interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_MSB        11
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_GEN_CALL register field value. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_GEN_CALL register field value. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_GEN_CALL field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_INTR_STAT_R_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_GEN_CALL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : R_RESTART_DET
 * 
 * Indicates a RESTART condition has occurred on the I2C
 * 
 * interface when DW_apb_i2c is operating in slave mode and addressed. This feature
 * is avaliable only when IC_SLV_RESTART_DET_EN is enabled.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                        
 * :----------------------------------------------|:------|:------------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_RESTART_DET_E_INACTIVE | 0x0   | R_RESTART_DET interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_RESTART_DET_E_ACTIVE   | 0x1   | R_RESTART_DET interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RESTART_DET
 * 
 * R_RESTART_DET interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_RESTART_DET
 * 
 * R_RESTART_DET interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_MSB        12
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_RESTART_DET register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_RESTART_DET register field value. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_RESTART_DET field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_IC_INTR_STAT_R_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_RESTART_DET_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : R_MASTER_ON_HOLD
 * 
 * Indicates whether master is holding the bus and TX FIFO is empty.
 * 
 * Enabled only when I2C_DYNAMIC_TAR_UPDATE=1 and IC_EMPTYFIFO_HOLD_MASTER_EN=1.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                           
 * :-------------------------------------------------|:------|:---------------------------------------
 *  ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_E_INACTIVE | 0x0   | R_MASTER_ON_HOLD interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_E_ACTIVE   | 0x1   | R_MASTER_ON_HOLD interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD
 * 
 * R_MASTER_ON_HOLD interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD
 * 
 * R_MASTER_ON_HOLD interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_MSB        13
/* The width in bits of the ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD register field value. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD register field value. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD field value from a register. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : RSVD_R_SCL_STUCK_AT_LOW
 * 
 * Indicates whether the SCL Line is stuck at low for the IC_SCL_STUCK_LOW_TIMEOUT
 * number of ic_clk periods.
 * 
 * This bit is set to 0 just after the user reads the IC_CLR_SCL_STCK_DET
 * register.Enabled only when IC_BUS_CLEAR_FEATURE=1
 * 
 * Reset Value = 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description                             
 * :--------------------------------------------------------|:------|:-----------------------------------------
 *  ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_E_INACTIVE | 0x0   | R_SCL_STUCK_AT_LOW interrupt is inactive
 *  ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_E_ACTIVE   | 0x1   | R_SCL_STUCK_AT_LOW interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW
 * 
 * R_SCL_STUCK_AT_LOW interrupt is inactive
 */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW
 * 
 * R_SCL_STUCK_AT_LOW interrupt is active
 */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_MSB        14
/* The width in bits of the ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_SET_MSK    0x00004000
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_CLR_MSK    0xffffbfff
/* The reset value of the ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW field value from a register. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : RSVD_IC_INTR_STAT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_MSB        31
/* The width in bits of the ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_WIDTH      17
/* The mask used to set the ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT register field value. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_SET_MSK    0xffff8000
/* The mask used to clear the ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT register field value. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_CLR_MSK    0x00007fff
/* The reset value of the ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT field value from a register. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_GET(value) (((value) & 0xffff8000) >> 15)
/* Produces a ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT_SET(value) (((value) << 15) & 0xffff8000)

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
 * The struct declaration for register ALT_I2C_IC_INTR_STAT.
 */
struct ALT_I2C_IC_INTR_STAT_s
{
    const volatile uint32_t  R_RX_UNDER              :  1;  /* ALT_I2C_IC_INTR_STAT_R_RX_UNDER */
    const volatile uint32_t  R_RX_OVER               :  1;  /* ALT_I2C_IC_INTR_STAT_R_RX_OVER */
    const volatile uint32_t  R_RX_FULL               :  1;  /* ALT_I2C_IC_INTR_STAT_R_RX_FULL */
    const volatile uint32_t  R_TX_OVER               :  1;  /* ALT_I2C_IC_INTR_STAT_R_TX_OVER */
    const volatile uint32_t  R_TX_EMPTY              :  1;  /* ALT_I2C_IC_INTR_STAT_R_TX_EMPTY */
    const volatile uint32_t  R_RD_REQ                :  1;  /* ALT_I2C_IC_INTR_STAT_R_RD_REQ */
    const volatile uint32_t  R_TX_ABRT               :  1;  /* ALT_I2C_IC_INTR_STAT_R_TX_ABRT */
    const volatile uint32_t  R_RX_DONE               :  1;  /* ALT_I2C_IC_INTR_STAT_R_RX_DONE */
    const volatile uint32_t  R_ACTIVITY              :  1;  /* ALT_I2C_IC_INTR_STAT_R_ACTIVITY */
    const volatile uint32_t  R_STOP_DET              :  1;  /* ALT_I2C_IC_INTR_STAT_R_STOP_DET */
    const volatile uint32_t  R_START_DET             :  1;  /* ALT_I2C_IC_INTR_STAT_R_START_DET */
    const volatile uint32_t  R_GEN_CALL              :  1;  /* ALT_I2C_IC_INTR_STAT_R_GEN_CALL */
    const volatile uint32_t  R_RESTART_DET           :  1;  /* ALT_I2C_IC_INTR_STAT_R_RESTART_DET */
    const volatile uint32_t  R_MASTER_ON_HOLD        :  1;  /* ALT_I2C_IC_INTR_STAT_R_MASTER_ON_HOLD */
    const volatile uint32_t  RSVD_R_SCL_STUCK_AT_LOW :  1;  /* ALT_I2C_IC_INTR_STAT_RSVD_R_SCL_STUCK_AT_LOW */
    const volatile uint32_t  RSVD_IC_INTR_STAT       : 17;  /* ALT_I2C_IC_INTR_STAT_RSVD_IC_INTR_STAT */
};

/* The typedef declaration for register ALT_I2C_IC_INTR_STAT. */
typedef struct ALT_I2C_IC_INTR_STAT_s  ALT_I2C_IC_INTR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_INTR_STAT register. */
#define ALT_I2C_IC_INTR_STAT_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_INTR_STAT register from the beginning of the component. */
#define ALT_I2C_IC_INTR_STAT_OFST        0x2c
/* The address of the ALT_I2C_IC_INTR_STAT register. */
#define ALT_I2C_IC_INTR_STAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_INTR_STAT_OFST))

/*
 * Register : I2C Interrupt Mask Register - IC_INTR_MASK
 * 
 * Name: I2C Interrupt Mask Register
 * 
 * Size: 15 bits
 * 
 * Address Offset: 0x30
 * 
 * Read/Write Access: Read/Write However,
 * 
 * if configuration parameter IC_SLV_RESTART_DET = 0, bit 13 is read only;
 * 
 * if configuration parameter I2C_DYNAMIC_TAR_UPDATE = 0 or
 * IC_EMPTYFIFO_HOLD_MASTER_EN = 0, bit 14 is read only.
 * 
 * if configuration parameter IC_BUS_CLEAR_FEATURE = 0, bit 15 is read only.
 * 
 * These bits mask their corresponding interrupt status bits.
 * 
 * They are active high; a value of 0 prevents a bit from
 * 
 * generating an interrupt.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [0]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_RX_UNDER             
 *  [1]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_RX_OVER              
 *  [2]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_RX_FULL              
 *  [3]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_TX_OVER              
 *  [4]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_TX_EMPTY             
 *  [5]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_RD_REQ               
 *  [6]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_TX_ABRT              
 *  [7]     | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_RX_DONE              
 *  [8]     | RW     | 0x0   | ALT_I2C_IC_INTR_MASK_M_ACTIVITY             
 *  [9]     | RW     | 0x0   | ALT_I2C_IC_INTR_MASK_M_STOP_DET             
 *  [10]    | RW     | 0x0   | ALT_I2C_IC_INTR_MASK_M_START_DET            
 *  [11]    | RW     | 0x1   | ALT_I2C_IC_INTR_MASK_M_GEN_CALL             
 *  [12]    | RW     | 0x0   | ALT_I2C_IC_INTR_MASK_M_RESTART_DET          
 *  [13]    | RW     | 0x0   | ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD       
 *  [14]    | R      | 0x0   | ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW
 *  [31:15] | R      | 0x0   | ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT      
 * 
 */
/*
 * Field : M_RX_UNDER
 * 
 * This bit masks the R_RX_UNDER interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                   
 * :-------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_RX_UNDER_E_ENABLED  | 0x0   | RX_UNDER interrupt is masked  
 *  ALT_I2C_IC_INTR_MASK_M_RX_UNDER_E_DISABLED | 0x1   | RX_UNDER interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_UNDER
 * 
 * RX_UNDER interrupt is masked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_E_ENABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_UNDER
 * 
 * RX_UNDER interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_E_DISABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_RX_UNDER register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_RX_UNDER register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_RX_UNDER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_RX_UNDER field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_INTR_MASK_M_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : M_RX_OVER
 * 
 * This bit masks the R_RX_OVER interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                  
 * :------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_RX_OVER_E_ENABLED  | 0x0   | RX_OVER interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_RX_OVER_E_DISABLED | 0x1   | RX_OVER interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_OVER
 * 
 * RX_OVER interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_E_ENABLED    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_OVER
 * 
 * RX_OVER interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_E_DISABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_MSB        1
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_RX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_RX_OVER register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_RX_OVER register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_RX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_RX_OVER field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_INTR_MASK_M_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_OVER_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : M_RX_FULL
 * 
 * This bit masks the R_RX_FULL interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                  
 * :------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_RX_FULL_E_ENABLED  | 0x0   | RX_FULL interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_RX_FULL_E_DISABLED | 0x1   | RX_FULL interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_FULL
 * 
 * RX_FULL interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_E_ENABLED    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_FULL
 * 
 * RX_FULL interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_E_DISABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_FULL register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_FULL register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_MSB        2
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_RX_FULL register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_RX_FULL register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_RX_FULL register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_RX_FULL register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_RX_FULL field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_IC_INTR_MASK_M_RX_FULL register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_FULL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : M_TX_OVER
 * 
 * This bit masks the R_TX_OVER interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                  
 * :------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_TX_OVER_E_ENABLED  | 0x0   | TX_OVER interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_TX_OVER_E_DISABLED | 0x1   | TX_OVER interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_TX_OVER
 * 
 * TX_OVER interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_E_ENABLED    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_TX_OVER
 * 
 * TX_OVER interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_E_DISABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_TX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_TX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_MSB        3
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_TX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_TX_OVER register field value. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_TX_OVER register field value. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_TX_OVER register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_TX_OVER field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_IC_INTR_MASK_M_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_TX_OVER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : M_TX_EMPTY
 * 
 * This bit masks the R_TX_EMPTY interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                   
 * :-------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_E_ENABLED  | 0x0   | TX_EMPTY interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_E_DISABLED | 0x1   | TX_EMPTY interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_TX_EMPTY
 * 
 * TX_EMPTY interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_E_ENABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_TX_EMPTY
 * 
 * TX_EMPTY interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_E_DISABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_MSB        4
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_TX_EMPTY register field value. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_TX_EMPTY register field value. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_TX_EMPTY register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_TX_EMPTY field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_IC_INTR_MASK_M_TX_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_TX_EMPTY_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : M_RD_REQ
 * 
 * This bit masks the R_RD_REQ interrupt in IC_INTR_STAT register.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description                 
 * :-----------------------------------------|:------|:-----------------------------
 *  ALT_I2C_IC_INTR_MASK_M_RD_REQ_E_ENABLED  | 0x0   | RD_REQ interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_RD_REQ_E_DISABLED | 0x1   | RD_REQ interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RD_REQ
 * 
 * RD_REQ interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_E_ENABLED     0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RD_REQ
 * 
 * RD_REQ interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_E_DISABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_RD_REQ register field. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_RD_REQ register field. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_MSB        5
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_RD_REQ register field. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_RD_REQ register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_RD_REQ register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_RD_REQ register field. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_RD_REQ field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_IC_INTR_MASK_M_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_RD_REQ_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : M_TX_ABRT
 * 
 * This bit masks the R_TX_ABRT interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                   
 * :------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_TX_ABRT_E_ENABLED  | 0x0   | TX_ABORT interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_TX_ABRT_E_DISABLED | 0x1   | TX_ABORT interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_TX_ABRT
 * 
 * TX_ABORT interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_E_ENABLED    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_TX_ABRT
 * 
 * TX_ABORT interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_E_DISABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_MSB        6
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_TX_ABRT register field value. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_TX_ABRT register field value. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_TX_ABRT register field. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_TX_ABRT field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_IC_INTR_MASK_M_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_TX_ABRT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : M_RX_DONE
 * 
 * This bit masks the R_RX_DONE interrupt in IC_INTR_STAT register.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                  
 * :------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_RX_DONE_E_ENABLED  | 0x0   | RX_DONE interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_RX_DONE_E_DISABLED | 0x1   | RX_DONE interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_DONE
 * 
 * RX_DONE interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_E_ENABLED    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RX_DONE
 * 
 * RX_DONE interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_E_DISABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_DONE register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_RX_DONE register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_MSB        7
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_RX_DONE register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_RX_DONE register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_RX_DONE register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_RX_DONE register field. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_RX_DONE field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_IC_INTR_MASK_M_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_RX_DONE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : M_ACTIVITY
 * 
 * This bit masks the R_ACTIVITY interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                   
 * :-------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_ACTIVITY_E_ENABLED  | 0x0   | ACTIVITY interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_ACTIVITY_E_DISABLED | 0x1   | ACTIVITY interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_ACTIVITY
 * 
 * ACTIVITY interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_E_ENABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_ACTIVITY
 * 
 * ACTIVITY interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_E_DISABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_MSB        8
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_ACTIVITY register field value. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_ACTIVITY register field value. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_ACTIVITY register field. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_MASK_M_ACTIVITY field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_IC_INTR_MASK_M_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_ACTIVITY_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : M_STOP_DET
 * 
 * This bit masks the R_STOP_DET interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                   
 * :-------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_STOP_DET_E_ENABLED  | 0x0   | STOP_DET interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_STOP_DET_E_DISABLED | 0x1   | STOP_DET interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_STOP_DET
 * 
 * STOP_DET interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_E_ENABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_STOP_DET
 * 
 * STOP_DET interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_E_DISABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_STOP_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_STOP_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_MSB        9
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_STOP_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_STOP_DET register field value. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_STOP_DET register field value. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_STOP_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_MASK_M_STOP_DET field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_IC_INTR_MASK_M_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_STOP_DET_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : M_START_DET
 * 
 * This bit masks the R_START_DET interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                    
 * :--------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_START_DET_E_ENABLED  | 0x0   | START_DET interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_START_DET_E_DISABLED | 0x1   | START_DET interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_START_DET
 * 
 * START_DET interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_E_ENABLED  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_START_DET
 * 
 * START_DET interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_E_DISABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_START_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_START_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_MSB        10
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_START_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_START_DET register field value. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_START_DET register field value. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_START_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_MASK_M_START_DET field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_INTR_MASK_M_START_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_START_DET_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : M_GEN_CALL
 * 
 * This bit masks the R_GEN_CALL interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                   
 * :-------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_GEN_CALL_E_ENABLED  | 0x0   | GEN_CALL interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_GEN_CALL_E_DISABLED | 0x1   | GEN_CALL interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_GEN_CALL
 * 
 * GEN_CALL interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_E_ENABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_GEN_CALL
 * 
 * GEN_CALL interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_E_DISABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_MSB        11
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_GEN_CALL register field value. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_GEN_CALL register field value. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_GEN_CALL register field. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_RESET      0x1
/* Extracts the ALT_I2C_IC_INTR_MASK_M_GEN_CALL field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_INTR_MASK_M_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_GEN_CALL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : M_RESTART_DET
 * 
 * This bit masks the R_RESTART_DET interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                      
 * :----------------------------------------------|:------|:----------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_RESTART_DET_E_ENABLED  | 0x0   | RESTART_DET interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_RESTART_DET_E_DISABLED | 0x1   | RESTART_DET interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RESTART_DET
 * 
 * RESTART_DET interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_E_ENABLED    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_RESTART_DET
 * 
 * RESTART_DET interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_E_DISABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_MSB        12
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_RESTART_DET register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_RESTART_DET register field value. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_RESTART_DET register field. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_MASK_M_RESTART_DET field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_IC_INTR_MASK_M_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_RESTART_DET_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : M_MASTER_ON_HOLD
 * 
 * This bit masks the R_MASTER_ON_HOLD interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                         
 * :-------------------------------------------------|:------|:-------------------------------------
 *  ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_E_ENABLED  | 0x0   | MASTER_ON_HOLD interrupt is   masked
 *  ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_E_DISABLED | 0x1   | MASTER_ON_HOLD interrupt is unmasked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD
 * 
 * MASTER_ON_HOLD interrupt is   masked
 */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_E_ENABLED     0x0
/*
 * Enumerated value for register field ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD
 * 
 * MASTER_ON_HOLD interrupt is unmasked
 */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_E_DISABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_MSB        13
/* The width in bits of the ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD register field value. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD register field value. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD field value from a register. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : RSVD_M_SCL_STUCK_AT_LOW
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_MSB        14
/* The width in bits of the ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_WIDTH      1
/* The mask used to set the ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_SET_MSK    0x00004000
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_CLR_MSK    0xffffbfff
/* The reset value of the ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW field value from a register. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : RSVD_IC_INTR_STAT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_MSB        31
/* The width in bits of the ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_WIDTH      17
/* The mask used to set the ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT register field value. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_SET_MSK    0xffff8000
/* The mask used to clear the ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT register field value. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_CLR_MSK    0x00007fff
/* The reset value of the ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT register field. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_RESET      0x0
/* Extracts the ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT field value from a register. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_GET(value) (((value) & 0xffff8000) >> 15)
/* Produces a ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT register field value suitable for setting the register. */
#define ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT_SET(value) (((value) << 15) & 0xffff8000)

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
 * The struct declaration for register ALT_I2C_IC_INTR_MASK.
 */
struct ALT_I2C_IC_INTR_MASK_s
{
    volatile uint32_t        M_RX_UNDER              :  1;  /* ALT_I2C_IC_INTR_MASK_M_RX_UNDER */
    volatile uint32_t        M_RX_OVER               :  1;  /* ALT_I2C_IC_INTR_MASK_M_RX_OVER */
    volatile uint32_t        M_RX_FULL               :  1;  /* ALT_I2C_IC_INTR_MASK_M_RX_FULL */
    volatile uint32_t        M_TX_OVER               :  1;  /* ALT_I2C_IC_INTR_MASK_M_TX_OVER */
    volatile uint32_t        M_TX_EMPTY              :  1;  /* ALT_I2C_IC_INTR_MASK_M_TX_EMPTY */
    volatile uint32_t        M_RD_REQ                :  1;  /* ALT_I2C_IC_INTR_MASK_M_RD_REQ */
    volatile uint32_t        M_TX_ABRT               :  1;  /* ALT_I2C_IC_INTR_MASK_M_TX_ABRT */
    volatile uint32_t        M_RX_DONE               :  1;  /* ALT_I2C_IC_INTR_MASK_M_RX_DONE */
    volatile uint32_t        M_ACTIVITY              :  1;  /* ALT_I2C_IC_INTR_MASK_M_ACTIVITY */
    volatile uint32_t        M_STOP_DET              :  1;  /* ALT_I2C_IC_INTR_MASK_M_STOP_DET */
    volatile uint32_t        M_START_DET             :  1;  /* ALT_I2C_IC_INTR_MASK_M_START_DET */
    volatile uint32_t        M_GEN_CALL              :  1;  /* ALT_I2C_IC_INTR_MASK_M_GEN_CALL */
    volatile uint32_t        M_RESTART_DET           :  1;  /* ALT_I2C_IC_INTR_MASK_M_RESTART_DET */
    volatile uint32_t        M_MASTER_ON_HOLD        :  1;  /* ALT_I2C_IC_INTR_MASK_M_MASTER_ON_HOLD */
    const volatile uint32_t  RSVD_M_SCL_STUCK_AT_LOW :  1;  /* ALT_I2C_IC_INTR_MASK_RSVD_M_SCL_STUCK_AT_LOW */
    const volatile uint32_t  RSVD_IC_INTR_STAT       : 17;  /* ALT_I2C_IC_INTR_MASK_RSVD_IC_INTR_STAT */
};

/* The typedef declaration for register ALT_I2C_IC_INTR_MASK. */
typedef struct ALT_I2C_IC_INTR_MASK_s  ALT_I2C_IC_INTR_MASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_INTR_MASK register. */
#define ALT_I2C_IC_INTR_MASK_RESET       0x000008ff
/* The byte offset of the ALT_I2C_IC_INTR_MASK register from the beginning of the component. */
#define ALT_I2C_IC_INTR_MASK_OFST        0x30
/* The address of the ALT_I2C_IC_INTR_MASK register. */
#define ALT_I2C_IC_INTR_MASK_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_INTR_MASK_OFST))

/*
 * Register : I2C Raw Interrupt Status Register - IC_RAW_INTR_STAT
 * 
 * Name: I2C Raw Interrupt Status Register
 * 
 * Size: 15 bits
 * 
 * Address Offset: 0x34
 * 
 * Read/Write Access: Read
 * 
 * Unlike the IC_INTR_STAT register, these bits are not masked so they
 * 
 * always show the true status of the DW_apb_i2c.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                   
 * :--------|:-------|:------|:-----------------------------------------------
 *  [0]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER             
 *  [1]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RX_OVER              
 *  [2]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RX_FULL              
 *  [3]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_TX_OVER              
 *  [4]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY             
 *  [5]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RD_REQ               
 *  [6]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT              
 *  [7]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RX_DONE              
 *  [8]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY    
 *  [9]     | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_STOP_DET             
 *  [10]    | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_START_DET            
 *  [11]    | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL             
 *  [12]    | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET          
 *  [13]    | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD       
 *  [14]    | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW
 *  [31:15] | R      | 0x0   | ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT
 * 
 */
/*
 * Field : RX_UNDER
 * 
 * Set if the processor attempts to read the receive buffer when it is empty by
 * 
 * reading from the IC_DATA_CMD register. If the module is disabled
 * 
 * (IC_ENABLE[0]=0), this bit keeps its level until the master or slave state
 * 
 * machines go into idle, and when ic_en goes to 0, this interrupt is cleared.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description                   
 * :---------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_E_INACTIVE | 0x0   | RX_UNDER interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_E_ACTIVE   | 0x1   | RX_UNDER interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER
 * 
 * RX_UNDER interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER
 * 
 * RX_UNDER interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RX_OVER
 * 
 * Set if the receive buffer is completely filled to IC_RX_BUFFER_DEPTH and
 * 
 * an additional byte is received from an external I2C device. The DW_apb_i2c
 * 
 * acknowledges this, but any data bytes received after the FIFO is full are lost.
 * If
 * 
 * the module is disabled (IC_ENABLE[0]=0), this bit keeps its level until the
 * 
 * master or slave state machines go into idle, and when ic_en goes to 0, this
 * 
 * interrupt is cleared.
 * 
 * NOTE: If the parameter IC_RX_FULL_HLD_BUS_EN=1, then the RX_OVER interrupt is
 * 
 * never set to 1, because the criteria to set this interrupt are never met.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                  
 * :--------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_E_INACTIVE | 0x0   | RX_OVER interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_E_ACTIVE   | 0x1   | RX_OVER interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_OVER
 * 
 * RX_OVER interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_OVER
 * 
 * RX_OVER interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_MSB        1
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RX_OVER register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RX_OVER register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RX_OVER field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_OVER_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RX_FULL
 * 
 * Set when the receive buffer reaches or goes above the RX_TL threshold in the
 * 
 * IC_RX_TL register. It is automatically cleared by hardware when buffer level
 * 
 * goes below the threshold. If the module is disabled (IC_ENABLE[0]=0), the
 * 
 * RX FIFO is flushed and held in reset; therefore the RX FIFO is not full. So this
 * 
 * bit is cleared once the IC_ENABLE bit 0 is programmed with a 0, regardless of
 * 
 * the activity that continues.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                  
 * :--------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_E_INACTIVE | 0x0   | RX_FULL interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_E_ACTIVE   | 0x1   | RX_FULL interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_FULL
 * 
 * RX_FULL interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_FULL
 * 
 * RX_FULL interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_MSB        2
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RX_FULL register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RX_FULL register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RX_FULL field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RX_FULL register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_FULL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : TX_OVER
 * 
 * Set during transmit if the transmit buffer is filled to IC_TX_BUFFER_DEPTH
 * 
 * and the processor attempts to issue another I2C command by writing to the
 * 
 * IC_DATA_CMD register. When the module is disabled, this bit keeps its level
 * 
 * until the master or slave state machines go into idle, and when ic_en goes to 0,
 * 
 * this interrupt is cleared.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                  
 * :--------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_E_INACTIVE | 0x0   | TX_OVER interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_E_ACTIVE   | 0x1   | TX_OVER interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_TX_OVER
 * 
 * TX_OVER interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_TX_OVER
 * 
 * TX_OVER interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_MSB        3
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_TX_OVER register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_TX_OVER register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_TX_OVER field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_OVER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : TX_EMPTY
 * 
 * The behavior of the TX_EMPTY interrupt status
 * 
 * differs based on the TX_EMPTY_CTRL selection in the IC_CON register.
 * 
 * When TX_EMPTY_CTRL = 0:
 * 
 * This bit is set to 1 when the transmit buffer is at or below the threshold value
 * set in the IC_TX_TL register.
 * 
 * When TX_EMPTY_CTRL = 1:
 * 
 * This bit is set to 1 when the transmit buffer is at or below the threshold
 * value.
 * 
 * set in the IC_TX_TL register and the transmission of the address/data from
 * 
 * the internal shift register for the most recently popped command is completed.
 * 
 * It is automatically cleared by hardware when the buffer level goes above the
 * 
 * threshold. When IC_ENABLE[0] is set to 0, the TX FIFO is flushed and held in
 * 
 * reset. There the TX FIFO looks like it has no data within it, so this bit is set
 * to 1,
 * 
 * provided there is activity in the master or slave state machines. When there is
 * no
 * 
 * longer any activity, then with ic_en=0, this bit is set to 0.
 * 
 * Reset value: 0x0.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description                   
 * :---------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_E_INACTIVE | 0x0   | TX_EMPTY interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_E_ACTIVE   | 0x1   | TX_EMPTY interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY
 * 
 * TX_EMPTY interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY
 * 
 * TX_EMPTY interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_MSB        4
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : RD_REQ
 * 
 * This bit is set to 1 when DW_apb_i2c is acting as a slave and another I2C
 * 
 * master is attempting to read data from DW_apb_i2c. The DW_apb_i2c holds
 * 
 * the I2C bus in a wait state (SCL=0) until this interrupt is serviced, which
 * means
 * 
 * that the slave has been addressed by a remote master that is asking for data to
 * 
 * be transferred. The processor must respond to this interrupt and then write the
 * 
 * requested data to the IC_DATA_CMD register. This bit is set to 0 just after the
 * 
 * processor reads the IC_CLR_RD_REQ register.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                 
 * :-------------------------------------------|:------|:-----------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_E_INACTIVE | 0x0   | RD_REQ interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_E_ACTIVE   | 0x1   | RD_REQ interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RD_REQ
 * 
 * RD_REQ interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RD_REQ
 * 
 * RD_REQ interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_MSB        5
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RD_REQ register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RD_REQ register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RD_REQ field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RD_REQ_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : TX_ABRT
 * 
 * This bit indicates if DW_apb_i2c, as an I2C transmitter,
 * 
 * is unable to complete the intended actions on the
 * 
 * contents of the transmit FIFO. This situation can
 * 
 * occur both as an I2C master or an I2C slave, and is
 * 
 * referred to as a 'transmit abort'.
 * 
 * When this bit is set to 1, the IC_TX_ABRT_SOURCE register
 * 
 * indicates the reason why the transmit abort takes places.
 * 
 * NOTE: The DW_apb_i2c flushes/resets/empties only the TX_FIFO whenever
 * 
 * there is a transmit abort caused by any of the events tracked by the
 * 
 * IC_TX_ABRT_SOURCE register. The Tx FIFO remains in this flushed state
 * 
 * until the register IC_CLR_TX_ABRT is read. Once this read is performed, the
 * 
 * Tx FIFO is then ready to accept more data bytes from the APB interface. RX
 * 
 * FIFO flush because of TX_ABRT is controlled by the coreConsultant parameter
 * IC_AVOID_RX_FIFO_FLUSH_ON_TX_ABRT.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                  
 * :--------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_E_INACTIVE | 0x0   | TX_ABRT interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_E_ACTIVE   | 0x1   | TX_ABRT interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT
 * 
 * TX_ABRT interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT
 * 
 * TX_ABRT interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_MSB        6
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RX_DONE
 * 
 * When the DW_apb_i2c is acting as a slave-transmitter,
 * 
 * this bit is set to 1 if the master does not acknowledge
 * 
 * a transmitted byte. This occurs on the last byte of
 * 
 * the transmission, indicating that the transmission is done.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description                  
 * :--------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_E_INACTIVE | 0x0   | RX_DONE interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_E_ACTIVE   | 0x1   | RX_DONE interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_DONE
 * 
 * RX_DONE interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RX_DONE
 * 
 * RX_DONE interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_MSB        7
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RX_DONE register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RX_DONE register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RX_DONE field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RX_DONE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RAW_INTR_ACTIVITY
 * 
 * This bit captures DW_apb_i2c activity and stays set until it is cleared. There
 * 
 * are four ways to clear it:
 * 
 * * Disabling the DW_apb_i2c
 * 
 * * Reading the IC_CLR_ACTIVITY register
 * 
 * * Reading the IC_CLR_INTR register
 * 
 * * System reset
 * 
 * Once this bit is set, it stays set unless one of the four methods is used to
 * clear it.
 * 
 * Even if the DW_apb_i2c module is idle, this bit remains set until cleared,
 * 
 * indicating that there was activity on the bus.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description                            
 * :------------------------------------------------------|:------|:----------------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_E_INACTIVE | 0x0   | RAW_INTR_ACTIVITY interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_E_ACTIVE   | 0x1   | RAW_INTR_ACTIVITY interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY
 * 
 * RAW_INTR_ACTIVITY interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY
 * 
 * RAW_INTR_ACTIVITY interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_MSB        8
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : STOP_DET
 * 
 * Indicates whether a STOP condition
 * 
 * has occurred on the I2C interface regardless of whether DW_apb_i2c is operating
 * in slave or master mode.
 * 
 * In Slave Mode:
 * 
 * If IC_CON[7]=1'b1  (STOP_DET_IFADDRESSED), the STOP_DET interrupt will be issued
 * only if slave is addressed.
 * 
 * Note: During general call address, this slave will not issue the STOP_DET
 * interrupt if STOP_DET_IF_ADDRESSED = 1'b1,
 * 
 * even if slave responds for general call address by generating ACK.
 * 
 * The STOP_DET interrupt is generated only when the transmitted address matches
 * with the slave address(SAR).
 * 
 * If IC_CON[7]=1'b0  (STOP_DET_IFADDRESSED),the STOP_DET interrupt will be issued
 * irrespective of whether it's being addressed.
 * 
 * In Master Mode:
 * 
 * if IC_CON[10]=1'b1  (STOP_DET_IF_MASTER_ACTIVE),the STOP_DET interrupt will be
 * issued only if Master is active.
 * 
 * If IC_CON[10]=1'b0  (STOP_DET_IFADDRESSED),the STOP_DET interrupt will be issued
 * irrespective of whether master is active or not.
 * 
 * In Master mode, this field is not dependent on  IC_CON[10]
 * (STOP_DET_IF_MASTER_ACTIVE) when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description                   
 * :---------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_E_INACTIVE | 0x0   | STOP_DET interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_E_ACTIVE   | 0x1   | STOP_DET interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_STOP_DET
 * 
 * STOP_DET interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_STOP_DET
 * 
 * STOP_DET interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_MSB        9
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_STOP_DET register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_STOP_DET register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_STOP_DET field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_STOP_DET_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : START_DET
 * 
 * Indicates whether a START or RESTART condition has occurred on the I2C
 * 
 * interface regardless of whether DW_apb_i2c is operating in slave or master
 * 
 * mode.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                    
 * :----------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_START_DET_E_INACTIVE | 0x0   | START_DET interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_START_DET_E_ACTIVE   | 0x1   | START_DET interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_START_DET
 * 
 * START_DET interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_START_DET
 * 
 * START_DET interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_MSB        10
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_START_DET register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_START_DET register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_START_DET field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_START_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_START_DET_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : GEN_CALL
 * 
 * Set only when a General Call address is received and it is acknowledged. It
 * 
 * stays set until it is cleared either by disabling DW_apb_i2c or when the CPU
 * 
 * reads bit 0 of the IC_CLR_GEN_CALL register. DW_apb_i2c stores the
 * 
 * received data in the Rx buffer.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description                   
 * :---------------------------------------------|:------|:-------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_E_INACTIVE | 0x0   | GEN_CALL interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_E_ACTIVE   | 0x1   | GEN_CALL interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL
 * 
 * GEN_CALL interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL
 * 
 * GEN_CALL interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_MSB        11
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : RESTART_DET
 * 
 * Indicates whether a RESTART condition has occurred on the I2C interface
 * 
 * when DW_apb_i2c is operating in Slave mode and the slave is being addressed.
 * Enabled only when IC_SLV_RESTART_DET_EN=1.
 * 
 * (Note:Following are exceptions where the Restart interrupt will not get
 * generated.
 * 
 * In the case of High speed Mode or Startbyte transfer, where the Restart comes
 * before the Address field as per the
 * 
 * I2C protocol defined format, the Slave is still not in the addressed mode and
 * hence will not generate the RESTART_DET interrupt.)
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description                      
 * :------------------------------------------------|:------|:----------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_E_INACTIVE | 0x0   | RESTART_DET interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_E_ACTIVE   | 0x1   | RESTART_DET interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET
 * 
 * RESTART_DET interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET
 * 
 * RESTART_DET interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_MSB        12
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : MASTER_ON_HOLD
 * 
 * Indicates whether master is holding the bus and TX FIFO is empty.
 * 
 * Enabled only when I2C_DYNAMIC_TAR_UPDATE=1 and IC_EMPTYFIFO_HOLD_MASTER_EN=1.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                         
 * :---------------------------------------------------|:------|:-------------------------------------
 *  ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_E_INACTIVE | 0x0   | MASTER_ON_HOLD interrupt is inactive
 *  ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_E_ACTIVE   | 0x1   | MASTER_ON_HOLD interrupt is active  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD
 * 
 * MASTER_ON_HOLD interrupt is inactive
 */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD
 * 
 * MASTER_ON_HOLD interrupt is active
 */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_MSB        13
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : RSVD_SCL_STUCK_AT_LOW
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_MSB        14
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_WIDTH      1
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_SET_MSK    0x00004000
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_CLR_MSK    0xffffbfff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : RSVD_IC_RAW_INTR_STAT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_MSB        31
/* The width in bits of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_WIDTH      17
/* The mask used to set the ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_SET_MSK    0xffff8000
/* The mask used to clear the ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT register field value. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_CLR_MSK    0x00007fff
/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT register field. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_RESET      0x0
/* Extracts the ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT field value from a register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_GET(value) (((value) & 0xffff8000) >> 15)
/* Produces a ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT register field value suitable for setting the register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT_SET(value) (((value) << 15) & 0xffff8000)

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
 * The struct declaration for register ALT_I2C_IC_RAW_INTR_STAT.
 */
struct ALT_I2C_IC_RAW_INTR_STAT_s
{
    const volatile uint32_t  RX_UNDER              :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RX_UNDER */
    const volatile uint32_t  RX_OVER               :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RX_OVER */
    const volatile uint32_t  RX_FULL               :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RX_FULL */
    const volatile uint32_t  TX_OVER               :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_TX_OVER */
    const volatile uint32_t  TX_EMPTY              :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_TX_EMPTY */
    const volatile uint32_t  RD_REQ                :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RD_REQ */
    const volatile uint32_t  TX_ABRT               :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_TX_ABRT */
    const volatile uint32_t  RX_DONE               :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RX_DONE */
    const volatile uint32_t  RAW_INTR_ACTIVITY     :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RAW_INTR_ACTIVITY */
    const volatile uint32_t  STOP_DET              :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_STOP_DET */
    const volatile uint32_t  START_DET             :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_START_DET */
    const volatile uint32_t  GEN_CALL              :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_GEN_CALL */
    const volatile uint32_t  RESTART_DET           :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RESTART_DET */
    const volatile uint32_t  MASTER_ON_HOLD        :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_MASTER_ON_HOLD */
    const volatile uint32_t  RSVD_SCL_STUCK_AT_LOW :  1;  /* ALT_I2C_IC_RAW_INTR_STAT_RSVD_SCL_STUCK_AT_LOW */
    const volatile uint32_t  RSVD_IC_RAW_INTR_STAT : 17;  /* ALT_I2C_IC_RAW_INTR_STAT_RSVD_IC_RAW_INTR_STAT */
};

/* The typedef declaration for register ALT_I2C_IC_RAW_INTR_STAT. */
typedef struct ALT_I2C_IC_RAW_INTR_STAT_s  ALT_I2C_IC_RAW_INTR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_RAW_INTR_STAT register. */
#define ALT_I2C_IC_RAW_INTR_STAT_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_RAW_INTR_STAT register from the beginning of the component. */
#define ALT_I2C_IC_RAW_INTR_STAT_OFST        0x34
/* The address of the ALT_I2C_IC_RAW_INTR_STAT register. */
#define ALT_I2C_IC_RAW_INTR_STAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_RAW_INTR_STAT_OFST))

/*
 * Register : I2C Receive FIFO Threshold Register - IC_RX_TL
 * 
 * Name: I2C Receive FIFO Threshold Register
 * 
 * Size: 8bits
 * 
 * Address Offset: 0x38
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_I2C_IC_RX_TL_RX_TL        
 *  [31:8] | R      | 0x0   | ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL
 * 
 */
/*
 * Field : RX_TL
 * 
 * Receive FIFO Threshold Level
 * 
 * Controls the level of entries (or above) that triggers
 * 
 * the RX_FULL interrupt (bit 2 in IC_RAW_INTR_STAT register).
 * 
 * The valid range is 0-255, with the additional restriction that
 * 
 * hardware does not allow this value to be set to a value larger
 * 
 * than the depth of the buffer. If an attempt is made to do that,
 * 
 * the actual value set will be the maximum depth of the buffer.
 * 
 * A value of 0 sets the threshold for 1 entry, and a value of 255
 * 
 * sets the threshold for 256 entries.
 * 
 * Reset value: IC_RX_TL configuration parameter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RX_TL_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RX_TL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RX_TL_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RX_TL_MSB        7
/* The width in bits of the ALT_I2C_IC_RX_TL_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RX_TL_WIDTH      8
/* The mask used to set the ALT_I2C_IC_RX_TL_RX_TL register field value. */
#define ALT_I2C_IC_RX_TL_RX_TL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_IC_RX_TL_RX_TL register field value. */
#define ALT_I2C_IC_RX_TL_RX_TL_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_IC_RX_TL_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RX_TL_RESET      0x0
/* Extracts the ALT_I2C_IC_RX_TL_RX_TL field value from a register. */
#define ALT_I2C_IC_RX_TL_RX_TL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_IC_RX_TL_RX_TL register field value suitable for setting the register. */
#define ALT_I2C_IC_RX_TL_RX_TL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_IC_RX_TL
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_MSB        31
/* The width in bits of the ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_WIDTH      24
/* The mask used to set the ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL register field value. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_SET_MSK    0xffffff00
/* The mask used to clear the ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL register field value. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_CLR_MSK    0x000000ff
/* The reset value of the ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL register field. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_RESET      0x0
/* Extracts the ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL field value from a register. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL register field value suitable for setting the register. */
#define ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_I2C_IC_RX_TL.
 */
struct ALT_I2C_IC_RX_TL_s
{
    volatile uint32_t        RX_TL         :  8;  /* ALT_I2C_IC_RX_TL_RX_TL */
    const volatile uint32_t  RSVD_IC_RX_TL : 24;  /* ALT_I2C_IC_RX_TL_RSVD_IC_RX_TL */
};

/* The typedef declaration for register ALT_I2C_IC_RX_TL. */
typedef struct ALT_I2C_IC_RX_TL_s  ALT_I2C_IC_RX_TL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_RX_TL register. */
#define ALT_I2C_IC_RX_TL_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_RX_TL register from the beginning of the component. */
#define ALT_I2C_IC_RX_TL_OFST        0x38
/* The address of the ALT_I2C_IC_RX_TL register. */
#define ALT_I2C_IC_RX_TL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_RX_TL_OFST))

/*
 * Register : I2C Transmit FIFO Threshold Register - IC_TX_TL
 * 
 * Name: I2C Transmit FIFO Threshold Register
 * 
 * Size: 8 bits
 * 
 * Address Offset: 0x3c
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_I2C_IC_TX_TL_TX_TL        
 *  [31:8] | R      | 0x0   | ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL
 * 
 */
/*
 * Field : TX_TL
 * 
 * Transmit FIFO Threshold Level
 * 
 * Controls the level of entries (or below) that trigger
 * 
 * the TX_EMPTY interrupt (bit 4 in IC_RAW_INTR_STAT register).
 * 
 * The valid range is 0-255, with the additional restriction that
 * 
 * it may not be set to value larger than the depth of the buffer.
 * 
 * If an attempt is made to do that, the actual value set will be
 * 
 * the maximum depth of the buffer.
 * 
 * A value of 0 sets the threshold for 0 entries, and a value of 255
 * 
 * sets the threshold for 255 entries.
 * 
 * Reset value: IC_TX_TL configuration parameter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_TL_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_TX_TL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_TL_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_TX_TL_MSB        7
/* The width in bits of the ALT_I2C_IC_TX_TL_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_TX_TL_WIDTH      8
/* The mask used to set the ALT_I2C_IC_TX_TL_TX_TL register field value. */
#define ALT_I2C_IC_TX_TL_TX_TL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_IC_TX_TL_TX_TL register field value. */
#define ALT_I2C_IC_TX_TL_TX_TL_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_IC_TX_TL_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_TX_TL_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_TL_TX_TL field value from a register. */
#define ALT_I2C_IC_TX_TL_TX_TL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_IC_TX_TL_TX_TL register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_TL_TX_TL_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_IC_TX_TL
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_MSB        31
/* The width in bits of the ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_WIDTH      24
/* The mask used to set the ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL register field value. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_SET_MSK    0xffffff00
/* The mask used to clear the ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL register field value. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_CLR_MSK    0x000000ff
/* The reset value of the ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL register field. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL field value from a register. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_I2C_IC_TX_TL.
 */
struct ALT_I2C_IC_TX_TL_s
{
    volatile uint32_t        TX_TL         :  8;  /* ALT_I2C_IC_TX_TL_TX_TL */
    const volatile uint32_t  RSVD_IC_TX_TL : 24;  /* ALT_I2C_IC_TX_TL_RSVD_IC_TX_TL */
};

/* The typedef declaration for register ALT_I2C_IC_TX_TL. */
typedef struct ALT_I2C_IC_TX_TL_s  ALT_I2C_IC_TX_TL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_TX_TL register. */
#define ALT_I2C_IC_TX_TL_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_TX_TL register from the beginning of the component. */
#define ALT_I2C_IC_TX_TL_OFST        0x3c
/* The address of the ALT_I2C_IC_TX_TL register. */
#define ALT_I2C_IC_TX_TL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_TX_TL_OFST))

/*
 * Register : Clear Combined and Individual Interrupt Register - IC_CLR_INTR
 * 
 * Name: Clear Combined and Individual Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x40
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_INTR_CLR_INTR        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR
 * 
 */
/*
 * Field : CLR_INTR
 * 
 * Read this register to clear the combined interrupt,
 * 
 * all individual interrupts, and the IC_TX_ABRT_SOURCE register.
 * 
 * This bit does not clear hardware clearable interrupts but software
 * 
 * clearable interrupts. Refer to Bit 9 of the IC_TX_ABRT_SOURCE register
 * 
 * for an exception to clearing IC_TX_ABRT_SOURCE.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_INTR_CLR_INTR register field value. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_INTR_CLR_INTR register field value. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_INTR_CLR_INTR field value from a register. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_INTR_CLR_INTR register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_INTR_CLR_INTR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_INTR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR register field value. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR register field value. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR register field. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR field value from a register. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_INTR.
 */
struct ALT_I2C_IC_CLR_INTR_s
{
    const volatile uint32_t  CLR_INTR         :  1;  /* ALT_I2C_IC_CLR_INTR_CLR_INTR */
    const volatile uint32_t  RSVD_IC_CLR_INTR : 31;  /* ALT_I2C_IC_CLR_INTR_RSVD_IC_CLR_INTR */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_INTR. */
typedef struct ALT_I2C_IC_CLR_INTR_s  ALT_I2C_IC_CLR_INTR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_INTR register. */
#define ALT_I2C_IC_CLR_INTR_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_INTR register from the beginning of the component. */
#define ALT_I2C_IC_CLR_INTR_OFST        0x40
/* The address of the ALT_I2C_IC_CLR_INTR register. */
#define ALT_I2C_IC_CLR_INTR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_INTR_OFST))

/*
 * Register : Clear RX_UNDER Interrupt Register - IC_CLR_RX_UNDER
 * 
 * Name: Clear RX_UNDER Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x44
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER
 * 
 */
/*
 * Field : CLR_RX_UNDER
 * 
 * Read this register to clear the RX_UNDER
 * 
 * interrupt (bit 0) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER register field value. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER register field value. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER field value from a register. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_RX_UNDER
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER register field value. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER register field value. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER register field. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER field value from a register. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_RX_UNDER.
 */
struct ALT_I2C_IC_CLR_RX_UNDER_s
{
    const volatile uint32_t  CLR_RX_UNDER         :  1;  /* ALT_I2C_IC_CLR_RX_UNDER_CLR_RX_UNDER */
    const volatile uint32_t  RSVD_IC_CLR_RX_UNDER : 31;  /* ALT_I2C_IC_CLR_RX_UNDER_RSVD_IC_CLR_RX_UNDER */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_RX_UNDER. */
typedef struct ALT_I2C_IC_CLR_RX_UNDER_s  ALT_I2C_IC_CLR_RX_UNDER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_RX_UNDER register. */
#define ALT_I2C_IC_CLR_RX_UNDER_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_RX_UNDER register from the beginning of the component. */
#define ALT_I2C_IC_CLR_RX_UNDER_OFST        0x44
/* The address of the ALT_I2C_IC_CLR_RX_UNDER register. */
#define ALT_I2C_IC_CLR_RX_UNDER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_RX_UNDER_OFST))

/*
 * Register : Clear RX_OVER Interrupt Register - IC_CLR_RX_OVER
 * 
 * Name: Clear RX_OVER Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x48
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER
 * 
 */
/*
 * Field : CLR_RX_OVER
 * 
 * Read this register to clear the RX_OVER
 * 
 * interrupt (bit 1) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER register field value. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER register field value. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER field value from a register. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_RX_OVER
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER register field value. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER register field value. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER register field. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER field value from a register. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_RX_OVER.
 */
struct ALT_I2C_IC_CLR_RX_OVER_s
{
    const volatile uint32_t  CLR_RX_OVER         :  1;  /* ALT_I2C_IC_CLR_RX_OVER_CLR_RX_OVER */
    const volatile uint32_t  RSVD_IC_CLR_RX_OVER : 31;  /* ALT_I2C_IC_CLR_RX_OVER_RSVD_IC_CLR_RX_OVER */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_RX_OVER. */
typedef struct ALT_I2C_IC_CLR_RX_OVER_s  ALT_I2C_IC_CLR_RX_OVER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_RX_OVER register. */
#define ALT_I2C_IC_CLR_RX_OVER_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_RX_OVER register from the beginning of the component. */
#define ALT_I2C_IC_CLR_RX_OVER_OFST        0x48
/* The address of the ALT_I2C_IC_CLR_RX_OVER register. */
#define ALT_I2C_IC_CLR_RX_OVER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_RX_OVER_OFST))

/*
 * Register : Clear TX_OVER Interrupt Register - IC_CLR_TX_OVER
 * 
 * Name: Clear TX_OVER Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x4c
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER
 * 
 */
/*
 * Field : CLR_TX_OVER
 * 
 * Read this register to clear the TX_OVER
 * 
 * interrupt (bit 3) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER register field value. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER register field value. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER field value from a register. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_TX_OVER
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER register field value. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER register field value. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER register field. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER field value from a register. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_TX_OVER.
 */
struct ALT_I2C_IC_CLR_TX_OVER_s
{
    const volatile uint32_t  CLR_TX_OVER         :  1;  /* ALT_I2C_IC_CLR_TX_OVER_CLR_TX_OVER */
    const volatile uint32_t  RSVD_IC_CLR_TX_OVER : 31;  /* ALT_I2C_IC_CLR_TX_OVER_RSVD_IC_CLR_TX_OVER */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_TX_OVER. */
typedef struct ALT_I2C_IC_CLR_TX_OVER_s  ALT_I2C_IC_CLR_TX_OVER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_TX_OVER register. */
#define ALT_I2C_IC_CLR_TX_OVER_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_TX_OVER register from the beginning of the component. */
#define ALT_I2C_IC_CLR_TX_OVER_OFST        0x4c
/* The address of the ALT_I2C_IC_CLR_TX_OVER register. */
#define ALT_I2C_IC_CLR_TX_OVER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_TX_OVER_OFST))

/*
 * Register : Clear RD_REQ Interrupt Register - IC_CLR_RD_REQ
 * 
 * Name: Clear RD_REQ Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x50
 * 
 * Read/Write Access: Read
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ
 * 
 */
/*
 * Field : CLR_RD_REQ
 * 
 * Read this register to clear the RD_REQ
 * 
 * interrupt (bit 5) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ register field value. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ register field value. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ field value from a register. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_RD_REQ
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ register field value. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ register field value. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ register field. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ field value from a register. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_RD_REQ.
 */
struct ALT_I2C_IC_CLR_RD_REQ_s
{
    const volatile uint32_t  CLR_RD_REQ         :  1;  /* ALT_I2C_IC_CLR_RD_REQ_CLR_RD_REQ */
    const volatile uint32_t  RSVD_IC_CLR_RD_REQ : 31;  /* ALT_I2C_IC_CLR_RD_REQ_RSVD_IC_CLR_RD_REQ */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_RD_REQ. */
typedef struct ALT_I2C_IC_CLR_RD_REQ_s  ALT_I2C_IC_CLR_RD_REQ_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_RD_REQ register. */
#define ALT_I2C_IC_CLR_RD_REQ_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_RD_REQ register from the beginning of the component. */
#define ALT_I2C_IC_CLR_RD_REQ_OFST        0x50
/* The address of the ALT_I2C_IC_CLR_RD_REQ register. */
#define ALT_I2C_IC_CLR_RD_REQ_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_RD_REQ_OFST))

/*
 * Register : Clear TX_ABRT Interrupt Register - IC_CLR_TX_ABRT
 * 
 * Name: Clear TX_ABRT Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x54
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT
 * 
 */
/*
 * Field : CLR_TX_ABRT
 * 
 * Read this register to clear the TX_ABRT
 * 
 * interrupt (bit 6) of the IC_RAW_INTR_STAT register,
 * 
 * and the IC_TX_ABRT_SOURCE register.
 * 
 * This also releases the TX FIFO from the flushed/reset
 * 
 * state, allowing more writes to the TX FIFO.
 * 
 * Refer to Bit 9 of the IC_TX_ABRT_SOURCE register for
 * 
 * an exception to clearing IC_TX_ABRT_SOURCE.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT register field value. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT register field value. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT field value from a register. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_TX_ABRT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT register field value. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT register field value. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT register field. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT field value from a register. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_TX_ABRT.
 */
struct ALT_I2C_IC_CLR_TX_ABRT_s
{
    const volatile uint32_t  CLR_TX_ABRT         :  1;  /* ALT_I2C_IC_CLR_TX_ABRT_CLR_TX_ABRT */
    const volatile uint32_t  RSVD_IC_CLR_TX_ABRT : 31;  /* ALT_I2C_IC_CLR_TX_ABRT_RSVD_IC_CLR_TX_ABRT */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_TX_ABRT. */
typedef struct ALT_I2C_IC_CLR_TX_ABRT_s  ALT_I2C_IC_CLR_TX_ABRT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_TX_ABRT register. */
#define ALT_I2C_IC_CLR_TX_ABRT_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_TX_ABRT register from the beginning of the component. */
#define ALT_I2C_IC_CLR_TX_ABRT_OFST        0x54
/* The address of the ALT_I2C_IC_CLR_TX_ABRT register. */
#define ALT_I2C_IC_CLR_TX_ABRT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_TX_ABRT_OFST))

/*
 * Register : Clear RX_DONE Interrupt Register - IC_CLR_RX_DONE
 * 
 * Name: Clear RX_DONE Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x58
 * 
 * Read/Write Access: Read
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE
 * 
 */
/*
 * Field : CLR_RX_DONE
 * 
 * Read this register to clear the RX_DONE
 * 
 * interrupt (bit 7) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE register field value. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE register field value. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE field value from a register. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_RX_DONE
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE register field value. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE register field value. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE register field. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE field value from a register. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_RX_DONE.
 */
struct ALT_I2C_IC_CLR_RX_DONE_s
{
    const volatile uint32_t  CLR_RX_DONE         :  1;  /* ALT_I2C_IC_CLR_RX_DONE_CLR_RX_DONE */
    const volatile uint32_t  RSVD_IC_CLR_RX_DONE : 31;  /* ALT_I2C_IC_CLR_RX_DONE_RSVD_IC_CLR_RX_DONE */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_RX_DONE. */
typedef struct ALT_I2C_IC_CLR_RX_DONE_s  ALT_I2C_IC_CLR_RX_DONE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_RX_DONE register. */
#define ALT_I2C_IC_CLR_RX_DONE_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_RX_DONE register from the beginning of the component. */
#define ALT_I2C_IC_CLR_RX_DONE_OFST        0x58
/* The address of the ALT_I2C_IC_CLR_RX_DONE register. */
#define ALT_I2C_IC_CLR_RX_DONE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_RX_DONE_OFST))

/*
 * Register : Clear ACTIVITY Interrupt Register - IC_CLR_ACTIVITY
 * 
 * Name: Clear ACTIVITY Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x5c
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY
 * 
 */
/*
 * Field : CLR_ACTIVITY
 * 
 * Reading this register clears the ACTIVITY
 * 
 * interrupt if the I2C is not active anymore. If the
 * 
 * I2C module is still active on the bus, the ACTIVITY
 * 
 * interrupt bit continues to be set. It is automatically
 * 
 * cleared by hardware if the module is disabled and if
 * 
 * there is no further activity on the bus. The value read
 * 
 * from this register to get status of the ACTIVITY interrupt
 * 
 * (bit 8) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY register field value. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY register field value. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY field value from a register. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_ACTIVITY
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY register field value. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY register field value. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY register field. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY field value from a register. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_ACTIVITY.
 */
struct ALT_I2C_IC_CLR_ACTIVITY_s
{
    const volatile uint32_t  CLR_ACTIVITY         :  1;  /* ALT_I2C_IC_CLR_ACTIVITY_CLR_ACTIVITY */
    const volatile uint32_t  RSVD_IC_CLR_ACTIVITY : 31;  /* ALT_I2C_IC_CLR_ACTIVITY_RSVD_IC_CLR_ACTIVITY */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_ACTIVITY. */
typedef struct ALT_I2C_IC_CLR_ACTIVITY_s  ALT_I2C_IC_CLR_ACTIVITY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_ACTIVITY register. */
#define ALT_I2C_IC_CLR_ACTIVITY_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_ACTIVITY register from the beginning of the component. */
#define ALT_I2C_IC_CLR_ACTIVITY_OFST        0x5c
/* The address of the ALT_I2C_IC_CLR_ACTIVITY register. */
#define ALT_I2C_IC_CLR_ACTIVITY_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_ACTIVITY_OFST))

/*
 * Register : Clear STOP_DET Interrupt Register - IC_CLR_STOP_DET
 * 
 * Name: Clear STOP_DET Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x60
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET
 * 
 */
/*
 * Field : CLR_STOP_DET
 * 
 * Read this register to clear the STOP_DET
 * 
 * interrupt (bit 9) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET register field value. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET register field value. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET field value from a register. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_STOP_DET
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET register field value. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET register field value. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET register field. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET field value from a register. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_STOP_DET.
 */
struct ALT_I2C_IC_CLR_STOP_DET_s
{
    const volatile uint32_t  CLR_STOP_DET         :  1;  /* ALT_I2C_IC_CLR_STOP_DET_CLR_STOP_DET */
    const volatile uint32_t  RSVD_IC_CLR_STOP_DET : 31;  /* ALT_I2C_IC_CLR_STOP_DET_RSVD_IC_CLR_STOP_DET */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_STOP_DET. */
typedef struct ALT_I2C_IC_CLR_STOP_DET_s  ALT_I2C_IC_CLR_STOP_DET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_STOP_DET register. */
#define ALT_I2C_IC_CLR_STOP_DET_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_STOP_DET register from the beginning of the component. */
#define ALT_I2C_IC_CLR_STOP_DET_OFST        0x60
/* The address of the ALT_I2C_IC_CLR_STOP_DET register. */
#define ALT_I2C_IC_CLR_STOP_DET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_STOP_DET_OFST))

/*
 * Register : Clear START_DET Interrupt Register - IC_CLR_START_DET
 * 
 * Name: Clear START_DET Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x64
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                   
 * :-------|:-------|:------|:-----------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_START_DET_CLR_START_DET        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET
 * 
 */
/*
 * Field : CLR_START_DET
 * 
 * Read this register to clear the START_DET
 * 
 * interrupt (bit 10) of the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_START_DET_CLR_START_DET register field value. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_START_DET_CLR_START_DET register field value. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_START_DET_CLR_START_DET field value from a register. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_START_DET_CLR_START_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_START_DET_CLR_START_DET_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_START_DET
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET register field value. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET register field value. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET register field. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET field value from a register. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_START_DET.
 */
struct ALT_I2C_IC_CLR_START_DET_s
{
    const volatile uint32_t  CLR_START_DET         :  1;  /* ALT_I2C_IC_CLR_START_DET_CLR_START_DET */
    const volatile uint32_t  RSVD_IC_CLR_START_DET : 31;  /* ALT_I2C_IC_CLR_START_DET_RSVD_IC_CLR_START_DET */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_START_DET. */
typedef struct ALT_I2C_IC_CLR_START_DET_s  ALT_I2C_IC_CLR_START_DET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_START_DET register. */
#define ALT_I2C_IC_CLR_START_DET_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_START_DET register from the beginning of the component. */
#define ALT_I2C_IC_CLR_START_DET_OFST        0x64
/* The address of the ALT_I2C_IC_CLR_START_DET register. */
#define ALT_I2C_IC_CLR_START_DET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_START_DET_OFST))

/*
 * Register : Clear GEN_CALL Interrupt Register - IC_CLR_GEN_CALL
 * 
 * Name: Clear GEN_CALL Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x68
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL
 * 
 */
/*
 * Field : CLR_GEN_CALL
 * 
 * Read this register to clear the GEN_CALL
 * 
 * interrupt (bit 11) of IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL register field value. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL register field value. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL field value from a register. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_GEN_CALL
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL register field value. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL register field value. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL register field. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL field value from a register. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_GEN_CALL.
 */
struct ALT_I2C_IC_CLR_GEN_CALL_s
{
    const volatile uint32_t  CLR_GEN_CALL         :  1;  /* ALT_I2C_IC_CLR_GEN_CALL_CLR_GEN_CALL */
    const volatile uint32_t  RSVD_IC_CLR_GEN_CALL : 31;  /* ALT_I2C_IC_CLR_GEN_CALL_RSVD_IC_CLR_GEN_CALL */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_GEN_CALL. */
typedef struct ALT_I2C_IC_CLR_GEN_CALL_s  ALT_I2C_IC_CLR_GEN_CALL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_GEN_CALL register. */
#define ALT_I2C_IC_CLR_GEN_CALL_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_GEN_CALL register from the beginning of the component. */
#define ALT_I2C_IC_CLR_GEN_CALL_OFST        0x68
/* The address of the ALT_I2C_IC_CLR_GEN_CALL register. */
#define ALT_I2C_IC_CLR_GEN_CALL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_GEN_CALL_OFST))

/*
 * Register : I2C ENABLE Register - IC_ENABLE
 * 
 * Name: I2C Enable Register
 * 
 * Size: 18 bits
 * 
 * Address Offset: 0x6c
 * 
 * Read/Write Access: Read/Write
 * 
 * Bit 16 is read only when IC_SMBUS=0.
 * 
 * Bits 17 & 18 are read only when IC_SMBUS_SUSPEND_ALERT=0.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                     
 * :--------|:-------|:------|:-------------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_I2C_IC_ENABLE_ENABLE                        
 *  [1]     | RW     | 0x0   | ALT_I2C_IC_ENABLE_ABORT                         
 *  [2]     | RW     | 0x0   | ALT_I2C_IC_ENABLE_TX_CMD_BLOCK                  
 *  [3]     | R      | 0x0   | ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE
 *  [15:4]  | R      | 0x0   | ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1              
 *  [16]    | R      | 0x0   | ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET          
 *  [17]    | R      | 0x0   | ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN         
 *  [18]    | R      | 0x0   | ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN           
 *  [31:19] | R      | 0x0   | ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2              
 * 
 */
/*
 * Field : ENABLE
 * 
 * Controls whether the DW_apb_i2c is enabled.
 * 
 * 0: Disables DW_apb_i2c (TX and RX FIFOs are
 * 
 * held in an erased state)
 * 
 * 1: Enables DW_apb_i2c
 * 
 * Software can disable DW_apb_i2c while it is active.
 * 
 * However, it is important that care be taken to ensure
 * 
 * that DW_apb_i2c is disabled properly.
 * 
 * When DW_apb_i2c is disabled, the following occurs:
 * 
 * * The TX FIFO and RX FIFO get flushed.
 * 
 * * Status bits in the IC_INTR_STAT register are still
 * 
 * active until DW_apb_i2c goes into IDLE state.
 * 
 * If the module is transmitting, it stops as well as deletes
 * 
 * the contents of the transmit buffer after the current transfer
 * 
 * is complete. If the module is receiving, the DW_apb_i2c stops
 * 
 * the current transfer at the end of the current byte and does not
 * 
 * acknowledge the transfer.
 * 
 * In systems with asynchronous pclk and ic_clk when IC_CLK_TYPE
 * 
 * parameter set to asynchronous (1), there is a two ic_clk delay
 * 
 * when enabling or disabling the DW_apb_i2c.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description    
 * :------------------------------------|:------|:----------------
 *  ALT_I2C_IC_ENABLE_ENABLE_E_DISABLED | 0x0   | I2C is disabled
 *  ALT_I2C_IC_ENABLE_ENABLE_E_ENABLED  | 0x1   | I2C is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_ENABLE
 * 
 * I2C is disabled
 */
#define ALT_I2C_IC_ENABLE_ENABLE_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_ENABLE
 * 
 * I2C is enabled
 */
#define ALT_I2C_IC_ENABLE_ENABLE_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_ENABLE_MSB        0
/* The width in bits of the ALT_I2C_IC_ENABLE_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_ENABLE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_ENABLE register field value. */
#define ALT_I2C_IC_ENABLE_ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_ENABLE_ENABLE register field value. */
#define ALT_I2C_IC_ENABLE_ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_ENABLE_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_ENABLE_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_ENABLE field value from a register. */
#define ALT_I2C_IC_ENABLE_ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_ENABLE_ENABLE register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ABORT
 * 
 * When set, the controller initiates the transfer abort.
 * 
 * 0: ABORT not initiated or ABORT done
 * 
 * 1: ABORT operation in progress
 * 
 * The software can abort the I2C transfer in master mode by setting this bit. The
 * software
 * 
 * can set this bit only when ENABLE is already set; otherwise, the controller
 * ignores any
 * 
 * write to ABORT bit. The software cannot clear the ABORT bit once set. In
 * response to
 * 
 * an ABORT, the controller issues a STOP and flushes the Tx FIFO after completing
 * the
 * 
 * current transfer, then sets the TX_ABORT interrupt after the abort operation.
 * The
 * 
 * ABORT bit is cleared automatically after the abort operation.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description                    
 * :----------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_ENABLE_ABORT_E_DISABLE | 0x0   | ABORT operation not in progress
 *  ALT_I2C_IC_ENABLE_ABORT_E_ENABLED | 0x1   | ABORT operation in progress    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_ABORT
 * 
 * ABORT operation not in progress
 */
#define ALT_I2C_IC_ENABLE_ABORT_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_ABORT
 * 
 * ABORT operation in progress
 */
#define ALT_I2C_IC_ENABLE_ABORT_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_ABORT register field. */
#define ALT_I2C_IC_ENABLE_ABORT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_ABORT register field. */
#define ALT_I2C_IC_ENABLE_ABORT_MSB        1
/* The width in bits of the ALT_I2C_IC_ENABLE_ABORT register field. */
#define ALT_I2C_IC_ENABLE_ABORT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_ABORT register field value. */
#define ALT_I2C_IC_ENABLE_ABORT_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_ENABLE_ABORT register field value. */
#define ALT_I2C_IC_ENABLE_ABORT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_ENABLE_ABORT register field. */
#define ALT_I2C_IC_ENABLE_ABORT_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_ABORT field value from a register. */
#define ALT_I2C_IC_ENABLE_ABORT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_ENABLE_ABORT register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_ABORT_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TX_CMD_BLOCK
 * 
 * In Master mode
 * 
 * 1'b1  blocks the transmission of data on I2C bus even if Tx FIFO has data to
 * transmit.
 * 
 * 1'b0  The transmission of data starts on I2C bus automatically, as soon as the
 * first data is available in the Tx FIFO.
 * 
 * Reset value : IC_TX_CMD_BLOCK_DEFAULT
 * 
 * Dependencies: This Register bit value is  applicable only when IC_TX_CMD_BLOCK
 * =1
 * 
 * NOTE:In order to block the execution of Master commands,
 * 
 * set the TX_CMD_BLOCK bit only when  Tx FIFO is empty (IC_STATUS[2]==1) and
 * Master is in Idle state (IC_STATUS[5] == 0).
 * 
 * Then any further commands put in the Tx FIFO will not get executed until
 * TX_CMD_BLOCK bit is unset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description                     
 * :---------------------------------------------|:------|:---------------------------------
 *  ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_E_NOT_BLOCKED | 0x0   | Tx Command execution not blocked
 *  ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_E_BLOCKED     | 0x1   | Tx Command execution blocked    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_TX_CMD_BLOCK
 * 
 * Tx Command execution not blocked
 */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_E_NOT_BLOCKED    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_TX_CMD_BLOCK
 * 
 * Tx Command execution blocked
 */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_E_BLOCKED        0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_TX_CMD_BLOCK register field. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_TX_CMD_BLOCK register field. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_MSB        2
/* The width in bits of the ALT_I2C_IC_ENABLE_TX_CMD_BLOCK register field. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_TX_CMD_BLOCK register field value. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_IC_ENABLE_TX_CMD_BLOCK register field value. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_IC_ENABLE_TX_CMD_BLOCK register field. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_TX_CMD_BLOCK field value from a register. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_IC_ENABLE_TX_CMD_BLOCK register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_TX_CMD_BLOCK_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RSVD_SDA_STUCK_RECOVERY_ENABLE
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_MSB        3
/* The width in bits of the ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE field value from a register. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RSVD_IC_ENABLE_1
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_MSB        15
/* The width in bits of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_WIDTH      12
/* The mask used to set the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_SET_MSK    0x0000fff0
/* The mask used to clear the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_CLR_MSK    0xffff000f
/* The reset value of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 field value from a register. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_GET(value) (((value) & 0x0000fff0) >> 4)
/* Produces a ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1_SET(value) (((value) << 4) & 0x0000fff0)

/*
 * Field : RSVD_SMBUS_CLK_RESET
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_MSB        16
/* The width in bits of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_SET_MSK    0x00010000
/* The mask used to clear the ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_CLR_MSK    0xfffeffff
/* The reset value of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET field value from a register. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RSVD_SMBUS_SUSPEND_EN
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_MSB        17
/* The width in bits of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_SET_MSK    0x00020000
/* The mask used to clear the ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_CLR_MSK    0xfffdffff
/* The reset value of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN field value from a register. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : RSVD_SMBUS_ALERT_EN
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_MSB        18
/* The width in bits of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_SET_MSK    0x00040000
/* The mask used to clear the ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_CLR_MSK    0xfffbffff
/* The reset value of the ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN register field. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN field value from a register. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : RSVD_IC_ENABLE_2
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_MSB        31
/* The width in bits of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_WIDTH      13
/* The mask used to set the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_SET_MSK    0xfff80000
/* The mask used to clear the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 register field value. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_CLR_MSK    0x0007ffff
/* The reset value of the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 register field. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 field value from a register. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_GET(value) (((value) & 0xfff80000) >> 19)
/* Produces a ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2_SET(value) (((value) << 19) & 0xfff80000)

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
 * The struct declaration for register ALT_I2C_IC_ENABLE.
 */
struct ALT_I2C_IC_ENABLE_s
{
    volatile uint32_t        ENABLE                         :  1;  /* ALT_I2C_IC_ENABLE_ENABLE */
    volatile uint32_t        ABORT                          :  1;  /* ALT_I2C_IC_ENABLE_ABORT */
    volatile uint32_t        TX_CMD_BLOCK                   :  1;  /* ALT_I2C_IC_ENABLE_TX_CMD_BLOCK */
    const volatile uint32_t  RSVD_SDA_STUCK_RECOVERY_ENABLE :  1;  /* ALT_I2C_IC_ENABLE_RSVD_SDA_STUCK_RECOVERY_ENABLE */
    const volatile uint32_t  RSVD_IC_ENABLE_1               : 12;  /* ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_1 */
    const volatile uint32_t  RSVD_SMBUS_CLK_RESET           :  1;  /* ALT_I2C_IC_ENABLE_RSVD_SMBUS_CLK_RESET */
    const volatile uint32_t  RSVD_SMBUS_SUSPEND_EN          :  1;  /* ALT_I2C_IC_ENABLE_RSVD_SMBUS_SUSPEND_EN */
    const volatile uint32_t  RSVD_SMBUS_ALERT_EN            :  1;  /* ALT_I2C_IC_ENABLE_RSVD_SMBUS_ALERT_EN */
    const volatile uint32_t  RSVD_IC_ENABLE_2               : 13;  /* ALT_I2C_IC_ENABLE_RSVD_IC_ENABLE_2 */
};

/* The typedef declaration for register ALT_I2C_IC_ENABLE. */
typedef struct ALT_I2C_IC_ENABLE_s  ALT_I2C_IC_ENABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_ENABLE register. */
#define ALT_I2C_IC_ENABLE_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_ENABLE register from the beginning of the component. */
#define ALT_I2C_IC_ENABLE_OFST        0x6c
/* The address of the ALT_I2C_IC_ENABLE register. */
#define ALT_I2C_IC_ENABLE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_ENABLE_OFST))

/*
 * Register : I2C STATUS Register - IC_STATUS
 * 
 * Name: I2C Status Register
 * 
 * Size: 21 bits
 * 
 * Address Offset: 0x70
 * 
 * Read/Write Access: Read
 * 
 * This is a read-only register used to indicate the current
 * 
 * transfer status and FIFO status. The status register may be
 * 
 * read at any time. None of the bits in this register request
 * 
 * an interrupt.
 * 
 * When the I2C is disabled by writing 0 in bit 0 of the
 * 
 * IC_ENABLE register:
 * 
 * * Bits 1 and 2 are set to 1
 * 
 * * Bits 3 and 10 are set to 0
 * 
 * When the master or slave state machines goes to idle
 * 
 * and ic_en=0:
 * 
 * * Bits 5 and 6 are set to 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                     
 * :--------|:-------|:------|:-------------------------------------------------
 *  [0]     | R      | 0x0   | ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY            
 *  [1]     | R      | 0x1   | ALT_I2C_IC_STATUS_TFNF                          
 *  [2]     | R      | 0x1   | ALT_I2C_IC_STATUS_TFE                           
 *  [3]     | R      | 0x0   | ALT_I2C_IC_STATUS_RFNE                          
 *  [4]     | R      | 0x0   | ALT_I2C_IC_STATUS_RFF                           
 *  [5]     | R      | 0x0   | ALT_I2C_IC_STATUS_MST_ACTIVITY                  
 *  [6]     | R      | 0x0   | ALT_I2C_IC_STATUS_SLV_ACTIVITY                  
 *  [7]     | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY   
 *  [8]     | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL    
 *  [9]     | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY   
 *  [10]    | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL    
 *  [11]    | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED  
 *  [15:12] | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1              
 *  [16]    | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT      
 *  [17]    | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID   
 *  [18]    | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED
 *  [19]    | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS     
 *  [20]    | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS       
 *  [31:21] | R      | 0x0   | ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2              
 * 
 */
/*
 * Field : IC_STATUS_ACTIVITY
 * 
 * I2C Activity Status.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description  
 * :------------------------------------------------|:------|:--------------
 *  ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_E_INACTIVE | 0x0   | I2C is idle  
 *  ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_E_ACTIVE   | 0x1   | I2C is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY
 * 
 * I2C is idle
 */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY
 * 
 * I2C is active
 */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_MSB        0
/* The width in bits of the ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY register field value. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY register field value. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY field value from a register. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TFNF
 * 
 * Transmit FIFO Not Full.
 * 
 * Set when the transmit FIFO contains one or more
 * 
 * empty locations, and is cleared when the FIFO is full.
 * 
 * 0: Transmit FIFO is full
 * 
 * 1: Transmit FIFO is not full
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description     
 * :----------------------------------|:------|:-----------------
 *  ALT_I2C_IC_STATUS_TFNF_E_FULL     | 0x0   | Tx FIFO is full 
 *  ALT_I2C_IC_STATUS_TFNF_E_NOT_FULL | 0x1   | Tx FIFO not full
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_TFNF
 * 
 * Tx FIFO is full
 */
#define ALT_I2C_IC_STATUS_TFNF_E_FULL       0x0
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_TFNF
 * 
 * Tx FIFO not full
 */
#define ALT_I2C_IC_STATUS_TFNF_E_NOT_FULL   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_TFNF register field. */
#define ALT_I2C_IC_STATUS_TFNF_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_TFNF register field. */
#define ALT_I2C_IC_STATUS_TFNF_MSB        1
/* The width in bits of the ALT_I2C_IC_STATUS_TFNF register field. */
#define ALT_I2C_IC_STATUS_TFNF_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_TFNF register field value. */
#define ALT_I2C_IC_STATUS_TFNF_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_STATUS_TFNF register field value. */
#define ALT_I2C_IC_STATUS_TFNF_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_STATUS_TFNF register field. */
#define ALT_I2C_IC_STATUS_TFNF_RESET      0x1
/* Extracts the ALT_I2C_IC_STATUS_TFNF field value from a register. */
#define ALT_I2C_IC_STATUS_TFNF_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_STATUS_TFNF register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_TFNF_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TFE
 * 
 * Transmit FIFO Completely Empty.
 * 
 * When the transmit FIFO is completely empty, this bit is set.
 * 
 * When it contains one or more valid entries, this bit is
 * 
 * cleared. This bit field does not request an interrupt.
 * 
 * 0: Transmit FIFO is not empty
 * 
 * 1: Transmit FIFO is empty
 * 
 * Reset value: 0x1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description      
 * :----------------------------------|:------|:------------------
 *  ALT_I2C_IC_STATUS_TFE_E_NON_EMPTY | 0x0   | Tx FIFO not empty
 *  ALT_I2C_IC_STATUS_TFE_E_EMPTY     | 0x1   | Tx FIFO is empty 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_TFE
 * 
 * Tx FIFO not empty
 */
#define ALT_I2C_IC_STATUS_TFE_E_NON_EMPTY   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_TFE
 * 
 * Tx FIFO is empty
 */
#define ALT_I2C_IC_STATUS_TFE_E_EMPTY       0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_TFE register field. */
#define ALT_I2C_IC_STATUS_TFE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_TFE register field. */
#define ALT_I2C_IC_STATUS_TFE_MSB        2
/* The width in bits of the ALT_I2C_IC_STATUS_TFE register field. */
#define ALT_I2C_IC_STATUS_TFE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_TFE register field value. */
#define ALT_I2C_IC_STATUS_TFE_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_IC_STATUS_TFE register field value. */
#define ALT_I2C_IC_STATUS_TFE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_IC_STATUS_TFE register field. */
#define ALT_I2C_IC_STATUS_TFE_RESET      0x1
/* Extracts the ALT_I2C_IC_STATUS_TFE field value from a register. */
#define ALT_I2C_IC_STATUS_TFE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_IC_STATUS_TFE register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_TFE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RFNE
 * 
 * Receive FIFO Not Empty.
 * 
 * This bit is set when the receive FIFO contains one or
 * 
 * more entries; it is cleared when the receive FIFO is empty.
 * 
 * 0: Receive FIFO is empty
 * 
 * 1: Receive FIFO is not empty
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description      
 * :-----------------------------------|:------|:------------------
 *  ALT_I2C_IC_STATUS_RFNE_E_EMPTY     | 0x0   | Rx FIFO is empty 
 *  ALT_I2C_IC_STATUS_RFNE_E_NOT_EMPTY | 0x1   | Rx FIFO not empty
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_RFNE
 * 
 * Rx FIFO is empty
 */
#define ALT_I2C_IC_STATUS_RFNE_E_EMPTY      0x0
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_RFNE
 * 
 * Rx FIFO not empty
 */
#define ALT_I2C_IC_STATUS_RFNE_E_NOT_EMPTY  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RFNE register field. */
#define ALT_I2C_IC_STATUS_RFNE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RFNE register field. */
#define ALT_I2C_IC_STATUS_RFNE_MSB        3
/* The width in bits of the ALT_I2C_IC_STATUS_RFNE register field. */
#define ALT_I2C_IC_STATUS_RFNE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RFNE register field value. */
#define ALT_I2C_IC_STATUS_RFNE_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_IC_STATUS_RFNE register field value. */
#define ALT_I2C_IC_STATUS_RFNE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_IC_STATUS_RFNE register field. */
#define ALT_I2C_IC_STATUS_RFNE_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RFNE field value from a register. */
#define ALT_I2C_IC_STATUS_RFNE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_IC_STATUS_RFNE register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RFNE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : RFF
 * 
 * Receive FIFO Completely Full.
 * 
 * When the receive FIFO is completely full, this
 * 
 * bit is set. When the receive FIFO contains one
 * 
 * or more empty location, this bit is cleared.
 * 
 * 0: Receive FIFO is not full
 * 
 * 1: Receive FIFO is full
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description     
 * :---------------------------------|:------|:-----------------
 *  ALT_I2C_IC_STATUS_RFF_E_NOT_FULL | 0x0   | Rx FIFO not full
 *  ALT_I2C_IC_STATUS_RFF_E_FULL     | 0x1   | Rx FIFO is full 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_RFF
 * 
 * Rx FIFO not full
 */
#define ALT_I2C_IC_STATUS_RFF_E_NOT_FULL    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_RFF
 * 
 * Rx FIFO is full
 */
#define ALT_I2C_IC_STATUS_RFF_E_FULL        0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RFF register field. */
#define ALT_I2C_IC_STATUS_RFF_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RFF register field. */
#define ALT_I2C_IC_STATUS_RFF_MSB        4
/* The width in bits of the ALT_I2C_IC_STATUS_RFF register field. */
#define ALT_I2C_IC_STATUS_RFF_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RFF register field value. */
#define ALT_I2C_IC_STATUS_RFF_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_IC_STATUS_RFF register field value. */
#define ALT_I2C_IC_STATUS_RFF_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_IC_STATUS_RFF register field. */
#define ALT_I2C_IC_STATUS_RFF_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RFF field value from a register. */
#define ALT_I2C_IC_STATUS_RFF_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_IC_STATUS_RFF register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RFF_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : MST_ACTIVITY
 * 
 * Master FSM Activity Status.
 * 
 * When the Master Finite State Machine (FSM) is
 * 
 * not in the IDLE state, this bit is set.
 * 
 * 0: Master FSM is in IDLE state so the Master part
 * 
 * of DW_apb_i2c is not Active
 * 
 * 1: Master FSM is not in IDLE state so the Master
 * 
 * part of DW_apb_i2c is Active
 * 
 * Note
 * 
 * IC_STATUS[0]-that is, ACTIVITY bit-is the OR of
 * 
 * SLV_ACTIVITY and MST_ACTIVITY bits.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description    
 * :----------------------------------------|:------|:----------------
 *  ALT_I2C_IC_STATUS_MST_ACTIVITY_E_IDLE   | 0x0   | Master is  idle
 *  ALT_I2C_IC_STATUS_MST_ACTIVITY_E_ACTIVE | 0x1   | Master not idle
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_MST_ACTIVITY
 * 
 * Master is  idle
 */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_E_IDLE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_MST_ACTIVITY
 * 
 * Master not idle
 */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_E_ACTIVE 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_MST_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_MST_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_MSB        5
/* The width in bits of the ALT_I2C_IC_STATUS_MST_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_MST_ACTIVITY register field value. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_IC_STATUS_MST_ACTIVITY register field value. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_IC_STATUS_MST_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_MST_ACTIVITY field value from a register. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_IC_STATUS_MST_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_MST_ACTIVITY_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : SLV_ACTIVITY
 * 
 * Slave FSM Activity Status.
 * 
 * When the Slave Finite State Machine (FSM) is not
 * 
 * in the IDLE state, this bit is set.
 * 
 * 0: Slave FSM is in IDLE state so the Slave part of
 * 
 * DW_apb_i2c is not Active
 * 
 * 1: Slave FSM is not in IDLE state so the Slave part
 * 
 * of DW_apb_i2c is Active
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description   
 * :----------------------------------------|:------|:---------------
 *  ALT_I2C_IC_STATUS_SLV_ACTIVITY_E_IDLE   | 0x0   | Slave is  idle
 *  ALT_I2C_IC_STATUS_SLV_ACTIVITY_E_ACTIVE | 0x1   | Slave not idle
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_SLV_ACTIVITY
 * 
 * Slave is  idle
 */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_E_IDLE   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_STATUS_SLV_ACTIVITY
 * 
 * Slave not idle
 */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_E_ACTIVE 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_SLV_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_SLV_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_MSB        6
/* The width in bits of the ALT_I2C_IC_STATUS_SLV_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_SLV_ACTIVITY register field value. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_IC_STATUS_SLV_ACTIVITY register field value. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_IC_STATUS_SLV_ACTIVITY register field. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_SLV_ACTIVITY field value from a register. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_IC_STATUS_SLV_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_SLV_ACTIVITY_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RSVD_MST_HOLD_TX_FIFO_EMPTY
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_MSB        7
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY register field value. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY register field value. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RSVD_MST_HOLD_RX_FIFO_FULL
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_MSB        8
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL register field value. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL register field value. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : RSVD_SLV_HOLD_TX_FIFO_EMPTY
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_MSB        9
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : RSVD_SLV_HOLD_RX_FIFO_FULL
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_MSB        10
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL register field. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : RSVD_SDA_STUCK_NOT_RECOVERED
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_MSB        11
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : RSVD_IC_STATUS_1
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_MSB        15
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_WIDTH      4
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 register field value. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_SET_MSK    0x0000f000
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 register field value. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_CLR_MSK    0xffff0fff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_GET(value) (((value) & 0x0000f000) >> 12)
/* Produces a ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1_SET(value) (((value) << 12) & 0x0000f000)

/*
 * Field : RSVD_SMBUS_QUICK_CMD_BIT
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_MSB        16
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_SET_MSK    0x00010000
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_CLR_MSK    0xfffeffff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RSVD_SMBUS_SLAVE_ADDR_VALID
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_MSB        17
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_SET_MSK    0x00020000
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_CLR_MSK    0xfffdffff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : RSVD_SMBUS_SLAVE_ADDR_RESOLVED
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_MSB        18
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_SET_MSK    0x00040000
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_CLR_MSK    0xfffbffff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : RSVD_SMBUS_SUSPEND_STATUS
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_MSB        19
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_SET_MSK    0x00080000
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : RSVD_SMBUS_ALERT_STATUS
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_MSB        20
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_WIDTH      1
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_SET_MSK    0x00100000
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS register field value. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_CLR_MSK    0xffefffff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS register field. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : RSVD_IC_STATUS_2
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_MSB        31
/* The width in bits of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_WIDTH      11
/* The mask used to set the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 register field value. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_SET_MSK    0xffe00000
/* The mask used to clear the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 register field value. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_CLR_MSK    0x001fffff
/* The reset value of the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 register field. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_RESET      0x0
/* Extracts the ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 field value from a register. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_GET(value) (((value) & 0xffe00000) >> 21)
/* Produces a ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 register field value suitable for setting the register. */
#define ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2_SET(value) (((value) << 21) & 0xffe00000)

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
 * The struct declaration for register ALT_I2C_IC_STATUS.
 */
struct ALT_I2C_IC_STATUS_s
{
    const volatile uint32_t  IC_STATUS_ACTIVITY             :  1;  /* ALT_I2C_IC_STATUS_IC_STATUS_ACTIVITY */
    const volatile uint32_t  TFNF                           :  1;  /* ALT_I2C_IC_STATUS_TFNF */
    const volatile uint32_t  TFE                            :  1;  /* ALT_I2C_IC_STATUS_TFE */
    const volatile uint32_t  RFNE                           :  1;  /* ALT_I2C_IC_STATUS_RFNE */
    const volatile uint32_t  RFF                            :  1;  /* ALT_I2C_IC_STATUS_RFF */
    const volatile uint32_t  MST_ACTIVITY                   :  1;  /* ALT_I2C_IC_STATUS_MST_ACTIVITY */
    const volatile uint32_t  SLV_ACTIVITY                   :  1;  /* ALT_I2C_IC_STATUS_SLV_ACTIVITY */
    const volatile uint32_t  RSVD_MST_HOLD_TX_FIFO_EMPTY    :  1;  /* ALT_I2C_IC_STATUS_RSVD_MST_HOLD_TX_FIFO_EMPTY */
    const volatile uint32_t  RSVD_MST_HOLD_RX_FIFO_FULL     :  1;  /* ALT_I2C_IC_STATUS_RSVD_MST_HOLD_RX_FIFO_FULL */
    const volatile uint32_t  RSVD_SLV_HOLD_TX_FIFO_EMPTY    :  1;  /* ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_TX_FIFO_EMPTY */
    const volatile uint32_t  RSVD_SLV_HOLD_RX_FIFO_FULL     :  1;  /* ALT_I2C_IC_STATUS_RSVD_SLV_HOLD_RX_FIFO_FULL */
    const volatile uint32_t  RSVD_SDA_STUCK_NOT_RECOVERED   :  1;  /* ALT_I2C_IC_STATUS_RSVD_SDA_STUCK_NOT_RECOVERED */
    const volatile uint32_t  RSVD_IC_STATUS_1               :  4;  /* ALT_I2C_IC_STATUS_RSVD_IC_STATUS_1 */
    const volatile uint32_t  RSVD_SMBUS_QUICK_CMD_BIT       :  1;  /* ALT_I2C_IC_STATUS_RSVD_SMBUS_QUICK_CMD_BIT */
    const volatile uint32_t  RSVD_SMBUS_SLAVE_ADDR_VALID    :  1;  /* ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_VALID */
    const volatile uint32_t  RSVD_SMBUS_SLAVE_ADDR_RESOLVED :  1;  /* ALT_I2C_IC_STATUS_RSVD_SMBUS_SLAVE_ADDR_RESOLVED */
    const volatile uint32_t  RSVD_SMBUS_SUSPEND_STATUS      :  1;  /* ALT_I2C_IC_STATUS_RSVD_SMBUS_SUSPEND_STATUS */
    const volatile uint32_t  RSVD_SMBUS_ALERT_STATUS        :  1;  /* ALT_I2C_IC_STATUS_RSVD_SMBUS_ALERT_STATUS */
    const volatile uint32_t  RSVD_IC_STATUS_2               : 11;  /* ALT_I2C_IC_STATUS_RSVD_IC_STATUS_2 */
};

/* The typedef declaration for register ALT_I2C_IC_STATUS. */
typedef struct ALT_I2C_IC_STATUS_s  ALT_I2C_IC_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_STATUS register. */
#define ALT_I2C_IC_STATUS_RESET       0x00000006
/* The byte offset of the ALT_I2C_IC_STATUS register from the beginning of the component. */
#define ALT_I2C_IC_STATUS_OFST        0x70
/* The address of the ALT_I2C_IC_STATUS register. */
#define ALT_I2C_IC_STATUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_STATUS_OFST))

/*
 * Register : I2C Transmit FIFO Level Register - IC_TXFLR
 * 
 * Name: I2C Transmit FIFO Level Register
 * 
 * Size: TX_ABW + 1
 * 
 * Address Offset: 0x74
 * 
 * Read/Write Access: Read
 * 
 * This register contains the number of valid data
 * 
 * entries in the transmit FIFO buffer. It is cleared
 * 
 * whenever:
 * 
 * * The I2C is disabled
 * 
 * * There is a transmit abort that is, TX_ABRT bit is
 * 
 * set in the IC_RAW_INTR_STAT register
 * 
 * * The slave bulk transmit mode is aborted
 * 
 * The register increments whenever data is placed into
 * 
 * the transmit FIFO and decrements when data is
 * 
 * taken from the transmit FIFO.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [6:0]  | R      | 0x0   | ALT_I2C_IC_TXFLR_TXFLR     
 *  [31:7] | R      | 0x0   | ALT_I2C_IC_TXFLR_RSVD_TXFLR
 * 
 */
/*
 * Field : TXFLR
 * 
 * Transmit FIFO Level.
 * 
 * Contains the number of valid data entries in the
 * 
 * transmit FIFO.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TXFLR_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_TXFLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TXFLR_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_TXFLR_MSB        6
/* The width in bits of the ALT_I2C_IC_TXFLR_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_TXFLR_WIDTH      7
/* The mask used to set the ALT_I2C_IC_TXFLR_TXFLR register field value. */
#define ALT_I2C_IC_TXFLR_TXFLR_SET_MSK    0x0000007f
/* The mask used to clear the ALT_I2C_IC_TXFLR_TXFLR register field value. */
#define ALT_I2C_IC_TXFLR_TXFLR_CLR_MSK    0xffffff80
/* The reset value of the ALT_I2C_IC_TXFLR_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_TXFLR_RESET      0x0
/* Extracts the ALT_I2C_IC_TXFLR_TXFLR field value from a register. */
#define ALT_I2C_IC_TXFLR_TXFLR_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_I2C_IC_TXFLR_TXFLR register field value suitable for setting the register. */
#define ALT_I2C_IC_TXFLR_TXFLR_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : RSVD_TXFLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TXFLR_RSVD_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TXFLR_RSVD_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_MSB        31
/* The width in bits of the ALT_I2C_IC_TXFLR_RSVD_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_WIDTH      25
/* The mask used to set the ALT_I2C_IC_TXFLR_RSVD_TXFLR register field value. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_SET_MSK    0xffffff80
/* The mask used to clear the ALT_I2C_IC_TXFLR_RSVD_TXFLR register field value. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_CLR_MSK    0x0000007f
/* The reset value of the ALT_I2C_IC_TXFLR_RSVD_TXFLR register field. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_RESET      0x0
/* Extracts the ALT_I2C_IC_TXFLR_RSVD_TXFLR field value from a register. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_GET(value) (((value) & 0xffffff80) >> 7)
/* Produces a ALT_I2C_IC_TXFLR_RSVD_TXFLR register field value suitable for setting the register. */
#define ALT_I2C_IC_TXFLR_RSVD_TXFLR_SET(value) (((value) << 7) & 0xffffff80)

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
 * The struct declaration for register ALT_I2C_IC_TXFLR.
 */
struct ALT_I2C_IC_TXFLR_s
{
    const volatile uint32_t  TXFLR      :  7;  /* ALT_I2C_IC_TXFLR_TXFLR */
    const volatile uint32_t  RSVD_TXFLR : 25;  /* ALT_I2C_IC_TXFLR_RSVD_TXFLR */
};

/* The typedef declaration for register ALT_I2C_IC_TXFLR. */
typedef struct ALT_I2C_IC_TXFLR_s  ALT_I2C_IC_TXFLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_TXFLR register. */
#define ALT_I2C_IC_TXFLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_TXFLR register from the beginning of the component. */
#define ALT_I2C_IC_TXFLR_OFST        0x74
/* The address of the ALT_I2C_IC_TXFLR register. */
#define ALT_I2C_IC_TXFLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_TXFLR_OFST))

/*
 * Register : I2C Receive FIFO Level Register - IC_RXFLR
 * 
 * Name: I2C Receive FIFO Level Register
 * 
 * Size: RX_ABW + 1
 * 
 * Address Offset: 0x78
 * 
 * Read/Write Access: Read
 * 
 * This register contains the number of valid data
 * 
 * entries in the receive FIFO buffer. It is cleared
 * 
 * whenever:
 * 
 * * The I2C is disabled
 * 
 * * Whenever there is a transmit abort caused by any
 * 
 * of the events tracked in IC_TX_ABRT_SOURCE
 * 
 * The register increments whenever data is placed into
 * 
 * the receive FIFO and decrements when data is
 * 
 * taken from the receive FIFO.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [6:0]  | R      | 0x0   | ALT_I2C_IC_RXFLR_RXFLR     
 *  [31:7] | R      | 0x0   | ALT_I2C_IC_RXFLR_RSVD_RXFLR
 * 
 */
/*
 * Field : RXFLR
 * 
 * Receive FIFO Level.
 * 
 * Contains the number of valid data entries in the
 * 
 * receive FIFO.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RXFLR_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RXFLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RXFLR_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RXFLR_MSB        6
/* The width in bits of the ALT_I2C_IC_RXFLR_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RXFLR_WIDTH      7
/* The mask used to set the ALT_I2C_IC_RXFLR_RXFLR register field value. */
#define ALT_I2C_IC_RXFLR_RXFLR_SET_MSK    0x0000007f
/* The mask used to clear the ALT_I2C_IC_RXFLR_RXFLR register field value. */
#define ALT_I2C_IC_RXFLR_RXFLR_CLR_MSK    0xffffff80
/* The reset value of the ALT_I2C_IC_RXFLR_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RXFLR_RESET      0x0
/* Extracts the ALT_I2C_IC_RXFLR_RXFLR field value from a register. */
#define ALT_I2C_IC_RXFLR_RXFLR_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_I2C_IC_RXFLR_RXFLR register field value suitable for setting the register. */
#define ALT_I2C_IC_RXFLR_RXFLR_SET(value) (((value) << 0) & 0x0000007f)

/*
 * Field : RSVD_RXFLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_RXFLR_RSVD_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_RXFLR_RSVD_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_MSB        31
/* The width in bits of the ALT_I2C_IC_RXFLR_RSVD_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_WIDTH      25
/* The mask used to set the ALT_I2C_IC_RXFLR_RSVD_RXFLR register field value. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_SET_MSK    0xffffff80
/* The mask used to clear the ALT_I2C_IC_RXFLR_RSVD_RXFLR register field value. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_CLR_MSK    0x0000007f
/* The reset value of the ALT_I2C_IC_RXFLR_RSVD_RXFLR register field. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_RESET      0x0
/* Extracts the ALT_I2C_IC_RXFLR_RSVD_RXFLR field value from a register. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_GET(value) (((value) & 0xffffff80) >> 7)
/* Produces a ALT_I2C_IC_RXFLR_RSVD_RXFLR register field value suitable for setting the register. */
#define ALT_I2C_IC_RXFLR_RSVD_RXFLR_SET(value) (((value) << 7) & 0xffffff80)

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
 * The struct declaration for register ALT_I2C_IC_RXFLR.
 */
struct ALT_I2C_IC_RXFLR_s
{
    const volatile uint32_t  RXFLR      :  7;  /* ALT_I2C_IC_RXFLR_RXFLR */
    const volatile uint32_t  RSVD_RXFLR : 25;  /* ALT_I2C_IC_RXFLR_RSVD_RXFLR */
};

/* The typedef declaration for register ALT_I2C_IC_RXFLR. */
typedef struct ALT_I2C_IC_RXFLR_s  ALT_I2C_IC_RXFLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_RXFLR register. */
#define ALT_I2C_IC_RXFLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_RXFLR register from the beginning of the component. */
#define ALT_I2C_IC_RXFLR_OFST        0x78
/* The address of the ALT_I2C_IC_RXFLR register. */
#define ALT_I2C_IC_RXFLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_RXFLR_OFST))

/*
 * Register : I2C SDA Hold Time Length Register - IC_SDA_HOLD
 * 
 * Name: I2C SDA Hold Time Length Register
 * 
 * Size: 24 bits
 * 
 * Address Offset: 0x7c
 * 
 * Read/Write Access: Read/Write
 * 
 * The bits [15:0] of this register are used to control the hold time of SDA during
 * 
 * transmit in both slave and master mode (after SCL goes from HIGH to LOW).
 * 
 * The bits [23:16] of this register are used to extend the SDA transition (if any)
 * 
 * whenever SCL is HIGH in the receiver in either master or slave mode.
 * 
 * The values in this register are in units of ic_clk period.
 * 
 * This register controls the amount of time delay.
 * 
 * The relevant I2C requirement is thd:DAT as detailed in the I2C
 * 
 * Bus Specification.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [15:0]  | RW     | 0x1   | ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD  
 *  [23:16] | RW     | 0x0   | ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD  
 *  [31:24] | R      | 0x0   | ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD
 * 
 */
/*
 * Field : IC_SDA_TX_HOLD
 * 
 * Sets the required SDA hold time
 * 
 * in units of ic_clk period, when DW_apb_i2c acts as a transmitter.
 * 
 * Reset value: IC_DEFAULT_SDA_HOLD[15:0].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_MSB        15
/* The width in bits of the ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_WIDTH      16
/* The mask used to set the ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD register field value. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD register field value. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_RESET      0x1
/* Extracts the ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD field value from a register. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD register field value suitable for setting the register. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : IC_SDA_RX_HOLD
 * 
 * Sets the required SDA hold time
 * 
 * in units of ic_clk period, when DW_apb_i2c acts as a receiver.
 * 
 * Reset value: IC_DEFAULT_SDA_HOLD[23:16].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_MSB        23
/* The width in bits of the ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_WIDTH      8
/* The mask used to set the ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD register field value. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD register field value. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_CLR_MSK    0xff00ffff
/* The reset value of the ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_RESET      0x0
/* Extracts the ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD field value from a register. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD register field value suitable for setting the register. */
#define ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : RSVD_IC_SDA_HOLD
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_MSB        31
/* The width in bits of the ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_WIDTH      8
/* The mask used to set the ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD register field value. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_SET_MSK    0xff000000
/* The mask used to clear the ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD register field value. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_CLR_MSK    0x00ffffff
/* The reset value of the ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD register field. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_RESET      0x0
/* Extracts the ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD field value from a register. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD register field value suitable for setting the register. */
#define ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD_SET(value) (((value) << 24) & 0xff000000)

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
 * The struct declaration for register ALT_I2C_IC_SDA_HOLD.
 */
struct ALT_I2C_IC_SDA_HOLD_s
{
    volatile uint32_t        IC_SDA_TX_HOLD   : 16;  /* ALT_I2C_IC_SDA_HOLD_IC_SDA_TX_HOLD */
    volatile uint32_t        IC_SDA_RX_HOLD   :  8;  /* ALT_I2C_IC_SDA_HOLD_IC_SDA_RX_HOLD */
    const volatile uint32_t  RSVD_IC_SDA_HOLD :  8;  /* ALT_I2C_IC_SDA_HOLD_RSVD_IC_SDA_HOLD */
};

/* The typedef declaration for register ALT_I2C_IC_SDA_HOLD. */
typedef struct ALT_I2C_IC_SDA_HOLD_s  ALT_I2C_IC_SDA_HOLD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_SDA_HOLD register. */
#define ALT_I2C_IC_SDA_HOLD_RESET       0x00000001
/* The byte offset of the ALT_I2C_IC_SDA_HOLD register from the beginning of the component. */
#define ALT_I2C_IC_SDA_HOLD_OFST        0x7c
/* The address of the ALT_I2C_IC_SDA_HOLD register. */
#define ALT_I2C_IC_SDA_HOLD_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_SDA_HOLD_OFST))

/*
 * Register : I2C Transmit Abort Source Register - IC_TX_ABRT_SOURCE
 * 
 * Name: I2C Transmit Abort Source Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x80
 * 
 * Read/Write Access: Read
 * 
 * This register has 32 bits that indicate the source
 * 
 * of the TX_ABRT bit. Except for Bit 9, this register is
 * 
 * cleared whenever the IC_CLR_TX_ABRT register or the
 * 
 * IC_CLR_INTR register is read. To clear Bit 9, the source
 * 
 * of the ABRT_SBYTE_NORSTRT must be fixed first; RESTART must
 * 
 * be enabled (IC_CON[5]=1), the SPECIAL bit must be cleared
 * 
 * (IC_TAR[11]), or the GC_OR_START bit must be cleared (IC_TAR[10]).
 * 
 * Once the source of the ABRT_SBYTE_NORSTRT is fixed, then this
 * 
 * bit can be cleared in the same manner as other bits in this
 * 
 * register. If the source of the ABRT_SBYTE_NORSTRT is not fixed
 * 
 * before attempting to clear this bit, Bit 9 clears for one cycle
 * 
 * and is then re-asserted.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                         
 * :--------|:-------|:------|:-----------------------------------------------------
 *  [0]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK        
 *  [1]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK        
 *  [2]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK        
 *  [3]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK         
 *  [4]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK          
 *  [5]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ           
 *  [6]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET            
 *  [7]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET         
 *  [8]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT           
 *  [9]     | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT        
 *  [10]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT       
 *  [11]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS           
 *  [12]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST                  
 *  [13]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO      
 *  [14]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST          
 *  [15]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX           
 *  [16]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT            
 *  [17]    | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW
 *  [20:18] | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE    
 *  [22:21] | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE    
 *  [31:23] | R      | 0x0   | ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT              
 * 
 */
/*
 * Field : ABRT_7B_ADDR_NOACK
 * 
 * 1: Master is in 7-bit addressing mode
 * 
 * and the address sent was not
 * 
 * acknowledged by any slave.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description                                 
 * :--------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_E_INACTIVE | 0x0   | This abort is not generated                 
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_E_ACTIVE   | 0x1   | This abort is generated because of NOACK for
 * :                                                        |       | 7-bit address                               
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK
 * 
 * This abort is not generated
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK
 * 
 * This abort is generated because of NOACK for 7-bit address
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_MSB        0
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ABRT_10ADDR1_NOACK
 * 
 * 1: Master is in 10-bit address mode and
 * 
 * the first 10-bit address byte was not
 * 
 * acknowledged by any slave.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description                                   
 * :--------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_E_INACTIVE | 0x0   | This abort is not generated                   
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_E_ACTIVE   | 0x1   | Byte 1 of 10Bit Address not ACKed by any slave
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK
 * 
 * This abort is not generated
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK
 * 
 * Byte 1 of 10Bit Address not ACKed by any slave
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_MSB        1
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : ABRT_10ADDR2_NOACK
 * 
 * 1: Master is in 10-bit address mode and
 * 
 * the second address byte of the 10-bit
 * 
 * address was not acknowledged by any slave.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description                                   
 * :--------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_E_INACTIVE | 0x0   | This abort is not generated                   
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_E_ACTIVE   | 0x1   | Byte 2 of 10Bit Address not ACKed by any slave
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK
 * 
 * This abort is not generated
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK
 * 
 * Byte 2 of 10Bit Address not ACKed by any slave
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_MSB        2
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : ABRT_TXDATA_NOACK
 * 
 * 1: This is a master-mode only bit.
 * 
 * Master has received an
 * 
 * acknowledgement for the address, but
 * 
 * when it sent data byte(s) following the
 * 
 * address, it did not receive an
 * 
 * acknowledge from the remote slave(s).
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                      | Value | Description                                   
 * :--------------------------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_E_ABRT_TXDATA_NOACK_VOID      | 0x0   | Transmitted data non-ACKed by addressed slave-
 * :                                                                          |       | scenario not present                          
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_E_ABRT_TXDATA_NOACK_GENERATED | 0x1   | Transmitted data not ACKed by addressed slave 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK
 * 
 * Transmitted data non-ACKed by addressed slave-scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_E_ABRT_TXDATA_NOACK_VOID        0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK
 * 
 * Transmitted data not ACKed by addressed slave
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_E_ABRT_TXDATA_NOACK_GENERATED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_MSB        3
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : ABRT_GCALL_NOACK
 * 
 * 1: DW_apb_i2c in master mode sent a
 * 
 * General Call and no slave on the bus
 * 
 * acknowledged the General Call.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                    | Value | Description                              
 * :------------------------------------------------------------------------|:------|:------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_E_ABRT_GCALL_NOACK_VOID      | 0x0   | GCALL not ACKed by any slave-scenario not
 * :                                                                        |       | present                                  
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_E_ABRT_GCALL_NOACK_GENERATED | 0x1   | GCALL not ACKed by any slave             
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK
 * 
 * GCALL not ACKed by any slave-scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_E_ABRT_GCALL_NOACK_VOID      0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK
 * 
 * GCALL not ACKed by any slave
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_E_ABRT_GCALL_NOACK_GENERATED 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_MSB        4
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : ABRT_GCALL_READ
 * 
 * 1: DW_apb_i2c in master mode sent a
 * 
 * General Call but the user programmed
 * 
 * the byte following the General Call to
 * 
 * be a read from the bus
 * 
 * (IC_DATA_CMD[9] is set to 1).
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                  | Value | Description                                    
 * :----------------------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_E_ABRT_GCALL_READ_VOID      | 0x0   | GCALL is followed by read from bus-scenario not
 * :                                                                      |       | present                                        
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_E_ABRT_GCALL_READ_GENERATED | 0x1   | GCALL is followed by read from bus             
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ
 * 
 * GCALL is followed by read from bus-scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_E_ABRT_GCALL_READ_VOID        0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ
 * 
 * GCALL is followed by read from bus
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_E_ABRT_GCALL_READ_GENERATED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_MSB        5
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : ABRT_HS_ACKDET
 * 
 * 1: Master is in High Speed mode and
 * 
 * the High Speed Master code was
 * 
 * acknowledged (wrong behavior).
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                             | Value | Description                                  
 * :-----------------------------------------------------------------|:------|:----------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_E_ABRT_HS_ACK_VOID      | 0x0   | HS Master code ACKed in HS Mode- scenario not
 * :                                                                 |       | present                                      
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_E_ABRT_HS_ACK_GENERATED | 0x1   | HS Master code ACKed in HS Mode              
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET
 * 
 * HS Master code ACKed in HS Mode- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_E_ABRT_HS_ACK_VOID         0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET
 * 
 * HS Master code ACKed in HS Mode
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_E_ABRT_HS_ACK_GENERATED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_MSB        6
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : ABRT_SBYTE_ACKDET
 * 
 * 1: Master has sent a START Byte and
 * 
 * the START Byte was acknowledged (wrong behavior).
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                      | Value | Description                              
 * :--------------------------------------------------------------------------|:------|:------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_E_ABRT_SBYTE_ACKDET_VOID      | 0x0   | ACK detected for START byte- scenario not
 * :                                                                          |       | present                                  
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_E_ABRT_SBYTE_ACKDET_GENERATED | 0x1   | ACK detected for START byte              
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET
 * 
 * ACK detected for START byte- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_E_ABRT_SBYTE_ACKDET_VOID        0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET
 * 
 * ACK detected for START byte
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_E_ABRT_SBYTE_ACKDET_GENERATED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_MSB        7
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : ABRT_HS_NORSTRT
 * 
 * 1: The restart is disabled
 * 
 * (IC_RESTART_EN bit (IC_CON[5]) =0)
 * 
 * and the user is trying to use the
 * 
 * master to transfer data in High Speed
 * 
 * mode.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                  | Value | Description                                 
 * :----------------------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_E_ABRT_HS_NORSTRT_VOID      | 0x0   | User trying to switch Master to HS mode when
 * :                                                                      |       | RESTART disabled- scenario not present      
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_E_ABRT_HS_NORSTRT_GENERATED | 0x1   | User trying to switch Master to HS mode when
 * :                                                                      |       | RESTART disabled                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT
 * 
 * User trying to switch Master to HS mode when RESTART disabled- scenario not
 * present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_E_ABRT_HS_NORSTRT_VOID        0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT
 * 
 * User trying to switch Master to HS mode when RESTART disabled
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_E_ABRT_HS_NORSTRT_GENERATED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_MSB        8
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : ABRT_SBYTE_NORSTRT
 * 
 * To clear Bit 9, the source of the
 * 
 * ABRT_SBYTE_NORSTRT must be fixed first;
 * 
 * restart must be enabled (IC_CON[5]=1),
 * 
 * the SPECIAL bit must be cleared (IC_TAR[11]),
 * 
 * or the GC_OR_START bit must be cleared
 * 
 * (IC_TAR[10]). Once the source of the
 * 
 * ABRT_SBYTE_NORSTRT is fixed,
 * 
 * then this bit can be cleared in the same
 * 
 * manner as other bits in this register. If
 * 
 * the source of the ABRT_SBYTE_NORSTRT is not fixed
 * 
 * before attempting to clear this bit, bit 9
 * 
 * clears for one cycle and then gets reasserted.
 * 
 * 1: The restart is disabled (IC_RESTART_EN bit
 * 
 * (IC_CON[5]) =0) and the user is trying to
 * 
 * send a START Byte.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                        | Value | Description                                
 * :----------------------------------------------------------------------------|:------|:--------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_E_ABRT_SBYTE_NORSTRT_VOID      | 0x0   | User trying to send START byte when RESTART
 * :                                                                            |       | disabled- scenario not present             
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_E_ABRT_SBYTE_NORSTRT_GENERATED | 0x1   | User trying to send START byte when RESTART
 * :                                                                            |       | disabled                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT
 * 
 * User trying to send START byte when RESTART disabled- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_E_ABRT_SBYTE_NORSTRT_VOID      0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT
 * 
 * User trying to send START byte when RESTART disabled
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_E_ABRT_SBYTE_NORSTRT_GENERATED 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_MSB        9
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : ABRT_10B_RD_NORSTRT
 * 
 * 1: The restart is disabled
 * 
 * (IC_RESTART_EN bit (IC_CON[5]) =0)
 * 
 * and the master sends a read
 * 
 * command in 10-bit addressing mode.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Receiver
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                  | Value | Description                                   
 * :----------------------------------------------------------------------|:------|:-----------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_E_ABRT_10B_RD_VOID      | 0x0   | Master not trying to read in 10Bit addressing 
 * :                                                                      |       | mode when RESTART disabled                    
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_E_ABRT_10B_RD_GENERATED | 0x1   | Master trying to read in 10Bit addressing mode
 * :                                                                      |       | when RESTART disabled                         
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT
 * 
 * Master not trying to read in 10Bit addressing mode when RESTART disabled
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_E_ABRT_10B_RD_VOID        0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT
 * 
 * Master trying to read in 10Bit addressing mode when RESTART disabled
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_E_ABRT_10B_RD_GENERATED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_MSB        10
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : ABRT_MASTER_DIS
 * 
 * 1: User tries to initiate a Master
 * 
 * operation with the Master mode disabled.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                  | Value | Description                                 
 * :----------------------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_E_ABRT_MASTER_DIS_VOID      | 0x0   | User initiating master operation when MASTER
 * :                                                                      |       | disabled- scenario not present              
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_E_ABRT_MASTER_DIS_GENERATED | 0x1   | User intitating master operation when MASTER
 * :                                                                      |       | disabled                                    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS
 * 
 * User initiating master operation when MASTER disabled- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_E_ABRT_MASTER_DIS_VOID        0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS
 * 
 * User intitating master operation when MASTER disabled
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_E_ABRT_MASTER_DIS_GENERATED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_MSB        11
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : ARB_LOST
 * 
 * 1: Master has lost arbitration, or if
 * 
 * IC_TX_ABRT_SOURCE[14] is also
 * 
 * set, then the slave transmitter has lost
 * 
 * arbitration.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Slave-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                     | Value | Description                                  
 * :---------------------------------------------------------|:------|:----------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_E_ABRT_LOST_VOID      | 0x0   | Master or Slave-Transmitter lost arbitration-
 * :                                                         |       | scenario not present                         
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_E_ABRT_LOST_GENERATED | 0x1   | Master or Slave-Transmitter lost arbitration 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST
 * 
 * Master or Slave-Transmitter lost arbitration- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_E_ABRT_LOST_VOID         0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST
 * 
 * Master or Slave-Transmitter lost arbitration
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_E_ABRT_LOST_GENERATED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_MSB        12
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : ABRT_SLVFLUSH_TXFIFO
 * 
 * 1: Slave has received a read command
 * 
 * and some data exists in the TX FIFO so
 * 
 * the slave issues a TX_ABRT interrupt to
 * 
 * flush old data in TX FIFO.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Slave-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                            | Value | Description                                
 * :--------------------------------------------------------------------------------|:------|:--------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_E_ABRT_SLVFLUSH_TXFIFO_VOID      | 0x0   | Slave flushes existing data in TX-FIFO upon
 * :                                                                                |       | getting read command- scenario not present 
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_E_ABRT_SLVFLUSH_TXFIFO_GENERATED | 0x1   | Slave flushes existing data in TX-FIFO upon
 * :                                                                                |       | getting read command                       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO
 * 
 * Slave flushes existing data in TX-FIFO upon getting read command- scenario not
 * present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_E_ABRT_SLVFLUSH_TXFIFO_VOID      0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO
 * 
 * Slave flushes existing data in TX-FIFO upon getting read command
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_E_ABRT_SLVFLUSH_TXFIFO_GENERATED 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_MSB        13
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : ABRT_SLV_ARBLOST
 * 
 * 1: Slave lost the bus while transmitting
 * 
 * data to a remote master.
 * 
 * IC_TX_ABRT_SOURCE[12] is set at
 * 
 * the same time.
 * 
 * Note: Even though the slave never
 * 
 * 'owns' the bus, something could go
 * 
 * wrong on the bus. This is a fail safe
 * 
 * check. For instance, during a data
 * 
 * transmission at the low-to-high
 * 
 * transition of SCL, if what is on the data
 * 
 * bus is not what is supposed to be
 * 
 * transmitted, then DW_apb_i2c no
 * 
 * longer own the bus.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Slave-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                    | Value | Description                             
 * :------------------------------------------------------------------------|:------|:-----------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_E_ABRT_SLV_ARBLOST_VOID      | 0x0   | Slave lost arbitration to remote master-
 * :                                                                        |       | scenario not present                    
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_E_ABRT_SLV_ARBLOST_GENERATED | 0x1   | Slave lost arbitration to remote master 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST
 * 
 * Slave lost arbitration to remote master- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_E_ABRT_SLV_ARBLOST_VOID      0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST
 * 
 * Slave lost arbitration to remote master
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_E_ABRT_SLV_ARBLOST_GENERATED 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_MSB        14
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_SET_MSK    0x00004000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_CLR_MSK    0xffffbfff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : ABRT_SLVRD_INTX
 * 
 * 1: When the processor side responds to
 * 
 * a slave mode request for data to be
 * 
 * transmitted to a remote master and user
 * 
 * writes a 1 in CMD (bit 8) of
 * 
 * IC_DATA_CMD register.
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Slave-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                  | Value | Description                                 
 * :----------------------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_E_ABRT_SLVRD_INTX_VOID      | 0x0   | Slave trying to transmit to remote master in
 * :                                                                      |       | read mode- scenario not present             
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_E_ABRT_SLVRD_INTX_GENERATED | 0x1   | Slave trying to transmit to remote master in
 * :                                                                      |       | read mode                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX
 * 
 * Slave trying to transmit to remote master in read mode- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_E_ABRT_SLVRD_INTX_VOID        0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX
 * 
 * Slave trying to transmit to remote master in read mode
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_E_ABRT_SLVRD_INTX_GENERATED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_MSB        15
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_SET_MSK    0x00008000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_CLR_MSK    0xffff7fff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : ABRT_USER_ABRT
 * 
 * This is a master-mode-only bit. Master has
 * 
 * detected the transfer abort (IC_ENABLE[1])
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                                | Value | Description                                    
 * :--------------------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_E_ABRT_USER_ABRT_VOID      | 0x0   | Transfer abort detected by master- scenario not
 * :                                                                    |       | present                                        
 *  ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_E_ABRT_USER_ABRT_GENERATED | 0x1   | Transfer abort detected by master              
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT
 * 
 * Transfer abort detected by master- scenario not present
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_E_ABRT_USER_ABRT_VOID      0x0
/*
 * Enumerated value for register field ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT
 * 
 * Transfer abort detected by master
 */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_E_ABRT_USER_ABRT_GENERATED 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_MSB        16
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_SET_MSK    0x00010000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_CLR_MSK    0xfffeffff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RSVD_ABRT_SDA_STUCK_AT_LOW
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_MSB        17
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_WIDTH      1
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_SET_MSK    0x00020000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_CLR_MSK    0xfffdffff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : RSVD_ABRT_DEVICE_WRITE
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_MSB        20
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_WIDTH      3
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_SET_MSK    0x001c0000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_CLR_MSK    0xffe3ffff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_GET(value) (((value) & 0x001c0000) >> 18)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE_SET(value) (((value) << 18) & 0x001c0000)

/*
 * Field : RSVD_IC_TX_ABRT_SOURCE
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_MSB        22
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_WIDTH      2
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_SET_MSK    0x00600000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_CLR_MSK    0xff9fffff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_GET(value) (((value) & 0x00600000) >> 21)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE_SET(value) (((value) << 21) & 0x00600000)

/*
 * Field : TX_FLUSH_CNT
 * 
 * This field indicates the
 * 
 * number of Tx FIFO Data Commands which are flushed due to TX_ABRT interrupt.
 * 
 * It is cleared whenever I2C is disabled.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter or Slave-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_MSB        31
/* The width in bits of the ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_WIDTH      9
/* The mask used to set the ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_SET_MSK    0xff800000
/* The mask used to clear the ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT register field value. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_CLR_MSK    0x007fffff
/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT register field. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_RESET      0x0
/* Extracts the ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT field value from a register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_GET(value) (((value) & 0xff800000) >> 23)
/* Produces a ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT register field value suitable for setting the register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_SET(value) (((value) << 23) & 0xff800000)

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
 * The struct declaration for register ALT_I2C_IC_TX_ABRT_SOURCE.
 */
struct ALT_I2C_IC_TX_ABRT_SOURCE_s
{
    const volatile uint32_t  ABRT_7B_ADDR_NOACK         :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK */
    const volatile uint32_t  ABRT_10ADDR1_NOACK         :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK */
    const volatile uint32_t  ABRT_10ADDR2_NOACK         :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK */
    const volatile uint32_t  ABRT_TXDATA_NOACK          :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK */
    const volatile uint32_t  ABRT_GCALL_NOACK           :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK */
    const volatile uint32_t  ABRT_GCALL_READ            :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ */
    const volatile uint32_t  ABRT_HS_ACKDET             :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET */
    const volatile uint32_t  ABRT_SBYTE_ACKDET          :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET */
    const volatile uint32_t  ABRT_HS_NORSTRT            :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT */
    const volatile uint32_t  ABRT_SBYTE_NORSTRT         :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT */
    const volatile uint32_t  ABRT_10B_RD_NORSTRT        :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT */
    const volatile uint32_t  ABRT_MASTER_DIS            :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS */
    const volatile uint32_t  ARB_LOST                   :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ARB_LOST */
    const volatile uint32_t  ABRT_SLVFLUSH_TXFIFO       :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO */
    const volatile uint32_t  ABRT_SLV_ARBLOST           :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST */
    const volatile uint32_t  ABRT_SLVRD_INTX            :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX */
    const volatile uint32_t  ABRT_USER_ABRT             :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT */
    const volatile uint32_t  RSVD_ABRT_SDA_STUCK_AT_LOW :  1;  /* ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_SDA_STUCK_AT_LOW */
    const volatile uint32_t  RSVD_ABRT_DEVICE_WRITE     :  3;  /* ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_ABRT_DEVICE_WRITE */
    const volatile uint32_t  RSVD_IC_TX_ABRT_SOURCE     :  2;  /* ALT_I2C_IC_TX_ABRT_SOURCE_RSVD_IC_TX_ABRT_SOURCE */
    const volatile uint32_t  TX_FLUSH_CNT               :  9;  /* ALT_I2C_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT */
};

/* The typedef declaration for register ALT_I2C_IC_TX_ABRT_SOURCE. */
typedef struct ALT_I2C_IC_TX_ABRT_SOURCE_s  ALT_I2C_IC_TX_ABRT_SOURCE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_TX_ABRT_SOURCE register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_TX_ABRT_SOURCE register from the beginning of the component. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_OFST        0x80
/* The address of the ALT_I2C_IC_TX_ABRT_SOURCE register. */
#define ALT_I2C_IC_TX_ABRT_SOURCE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_TX_ABRT_SOURCE_OFST))

/*
 * Register : Generate Slave Data NACK Register - IC_SLV_DATA_NACK_ONLY
 * 
 * Name: Generate Slave Data NACK Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x84
 * 
 * Read/Write Access: Read/Write
 * 
 * The register is used to generate a NACK for
 * 
 * the data part of a transfer when DW_apb_i2c is
 * 
 * acting as a slave-receiver. This register only
 * 
 * exists when the IC_SLV_DATA_NACK_ONLY parameter
 * 
 * is set to 1. When this parameter disabled, this
 * 
 * register does not exist and writing to the register's
 * 
 * address has no effect.
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                             
 * :-------|:-------|:------|:---------------------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK                      
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY
 * 
 */
/*
 * Field : NACK
 * 
 * Generate NACK.
 * 
 * This NACK generation only occurs when DW_apb_i2c is a
 * 
 * slave-receiver. If this register is set to a value of 1,
 * 
 * it can only generate a NACK after a data byte is received;
 * 
 * hence, the data transfer is aborted and the data received
 * 
 * is not pushed to the receive buffer.
 * 
 * When the register is set to a value of 0, it generates
 * 
 * NACK/ACK, depending on normal criteria.
 * 
 * 1 = generate NACK after data byte received
 * 
 * 0 = generate NACK/ACK normally
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                            
 * :----------------------------------------------|:------|:----------------------------------------
 *  ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_E_DISABLED | 0x0   | Slave reciever generates NACK normally 
 *  ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_E_ENABLED  | 0x1   | Slave reciever generates NACK upon data
 * :                                              |       | reception only                         
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK
 * 
 * Slave reciever generates NACK normally
 */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK
 * 
 * Slave reciever generates NACK upon data reception only
 */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_MSB        0
/* The width in bits of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_WIDTH      1
/* The mask used to set the ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK register field value. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK register field value. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_RESET      0x0
/* Extracts the ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK field value from a register. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK register field value suitable for setting the register. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_SLV_DATA_NACK_ONLY
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_MSB        31
/* The width in bits of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_WIDTH      31
/* The mask used to set the ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY register field value. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY register field value. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY register field. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_RESET      0x0
/* Extracts the ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY field value from a register. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY register field value suitable for setting the register. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_SLV_DATA_NACK_ONLY.
 */
struct ALT_I2C_IC_SLV_DATA_NACK_ONLY_s
{
    volatile uint32_t        NACK                       :  1;  /* ALT_I2C_IC_SLV_DATA_NACK_ONLY_NACK */
    const volatile uint32_t  RSVD_IC_SLV_DATA_NACK_ONLY : 31;  /* ALT_I2C_IC_SLV_DATA_NACK_ONLY_RSVD_IC_SLV_DATA_NACK_ONLY */
};

/* The typedef declaration for register ALT_I2C_IC_SLV_DATA_NACK_ONLY. */
typedef struct ALT_I2C_IC_SLV_DATA_NACK_ONLY_s  ALT_I2C_IC_SLV_DATA_NACK_ONLY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_SLV_DATA_NACK_ONLY register. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_SLV_DATA_NACK_ONLY register from the beginning of the component. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_OFST        0x84
/* The address of the ALT_I2C_IC_SLV_DATA_NACK_ONLY register. */
#define ALT_I2C_IC_SLV_DATA_NACK_ONLY_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_SLV_DATA_NACK_ONLY_OFST))

/*
 * Register : DMA Control Register - IC_DMA_CR
 * 
 * Name: DMA Control Register
 * 
 * Size: 2 bits
 * 
 * Address Offset: 0x88
 * 
 * Read/Write Access: Read/Write
 * 
 * This register is only valid when DW_apb_i2c is configured
 * 
 * with a set of DMA Controller interface signals (IC_HAS_DMA = 1).
 * 
 * When DW_apb_i2c is not configured for DMA operation, this register
 * 
 * does not exist and writing to the register's address has no
 * 
 * effect and reading from this register address will return zero.
 * 
 * The register is used to enable the DMA Controller interface operation.
 * 
 * There is a separate bit for transmit and receive. This can be programmed
 * 
 * regardless of the state of IC_ENABLE.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [0]    | RW     | 0x0   | ALT_I2C_IC_DMA_CR_RDMAE              
 *  [1]    | RW     | 0x0   | ALT_I2C_IC_DMA_CR_TDMAE              
 *  [31:2] | R      | 0x0   | ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31
 * 
 */
/*
 * Field : RDMAE
 * 
 * Receive DMA Enable.
 * 
 * This bit enables/disables the receive FIFO DMA
 * 
 * channel.
 * 
 * 0 = Receive DMA disabled
 * 
 * 1 = Receive DMA enabled
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                      
 * :-----------------------------------|:------|:----------------------------------
 *  ALT_I2C_IC_DMA_CR_RDMAE_E_DISABLED | 0x0   | Receive FIFO DMA channel disabled
 *  ALT_I2C_IC_DMA_CR_RDMAE_E_ENABLED  | 0x1   | Receive FIFO DMA channel enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_DMA_CR_RDMAE
 * 
 * Receive FIFO DMA channel disabled
 */
#define ALT_I2C_IC_DMA_CR_RDMAE_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_DMA_CR_RDMAE
 * 
 * Receive FIFO DMA channel enabled
 */
#define ALT_I2C_IC_DMA_CR_RDMAE_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DMA_CR_RDMAE register field. */
#define ALT_I2C_IC_DMA_CR_RDMAE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DMA_CR_RDMAE register field. */
#define ALT_I2C_IC_DMA_CR_RDMAE_MSB        0
/* The width in bits of the ALT_I2C_IC_DMA_CR_RDMAE register field. */
#define ALT_I2C_IC_DMA_CR_RDMAE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_DMA_CR_RDMAE register field value. */
#define ALT_I2C_IC_DMA_CR_RDMAE_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_DMA_CR_RDMAE register field value. */
#define ALT_I2C_IC_DMA_CR_RDMAE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_DMA_CR_RDMAE register field. */
#define ALT_I2C_IC_DMA_CR_RDMAE_RESET      0x0
/* Extracts the ALT_I2C_IC_DMA_CR_RDMAE field value from a register. */
#define ALT_I2C_IC_DMA_CR_RDMAE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_DMA_CR_RDMAE register field value suitable for setting the register. */
#define ALT_I2C_IC_DMA_CR_RDMAE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TDMAE
 * 
 * Transmit DMA Enable.
 * 
 * //This bit enables/disables the transmit FIFO DMA
 * 
 * channel.
 * 
 * 0 = Transmit DMA disabled
 * 
 * 1 = Transmit DMA enabled
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description                       
 * :-----------------------------------|:------|:-----------------------------------
 *  ALT_I2C_IC_DMA_CR_TDMAE_E_DISABLED | 0x0   | transmit FIFO DMA channel disabled
 *  ALT_I2C_IC_DMA_CR_TDMAE_E_ENABLED  | 0x1   | Transmit FIFO DMA channel enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_DMA_CR_TDMAE
 * 
 * transmit FIFO DMA channel disabled
 */
#define ALT_I2C_IC_DMA_CR_TDMAE_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_DMA_CR_TDMAE
 * 
 * Transmit FIFO DMA channel enabled
 */
#define ALT_I2C_IC_DMA_CR_TDMAE_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DMA_CR_TDMAE register field. */
#define ALT_I2C_IC_DMA_CR_TDMAE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DMA_CR_TDMAE register field. */
#define ALT_I2C_IC_DMA_CR_TDMAE_MSB        1
/* The width in bits of the ALT_I2C_IC_DMA_CR_TDMAE register field. */
#define ALT_I2C_IC_DMA_CR_TDMAE_WIDTH      1
/* The mask used to set the ALT_I2C_IC_DMA_CR_TDMAE register field value. */
#define ALT_I2C_IC_DMA_CR_TDMAE_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_DMA_CR_TDMAE register field value. */
#define ALT_I2C_IC_DMA_CR_TDMAE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_DMA_CR_TDMAE register field. */
#define ALT_I2C_IC_DMA_CR_TDMAE_RESET      0x0
/* Extracts the ALT_I2C_IC_DMA_CR_TDMAE field value from a register. */
#define ALT_I2C_IC_DMA_CR_TDMAE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_DMA_CR_TDMAE register field value suitable for setting the register. */
#define ALT_I2C_IC_DMA_CR_TDMAE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : RSVD_IC_DMA_CR_2_31
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 register field. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 register field. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_MSB        31
/* The width in bits of the ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 register field. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_WIDTH      30
/* The mask used to set the ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 register field value. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 register field value. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_CLR_MSK    0x00000003
/* The reset value of the ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 register field. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_RESET      0x0
/* Extracts the ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 field value from a register. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 register field value suitable for setting the register. */
#define ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31_SET(value) (((value) << 2) & 0xfffffffc)

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
 * The struct declaration for register ALT_I2C_IC_DMA_CR.
 */
struct ALT_I2C_IC_DMA_CR_s
{
    volatile uint32_t        RDMAE               :  1;  /* ALT_I2C_IC_DMA_CR_RDMAE */
    volatile uint32_t        TDMAE               :  1;  /* ALT_I2C_IC_DMA_CR_TDMAE */
    const volatile uint32_t  RSVD_IC_DMA_CR_2_31 : 30;  /* ALT_I2C_IC_DMA_CR_RSVD_IC_DMA_CR_2_31 */
};

/* The typedef declaration for register ALT_I2C_IC_DMA_CR. */
typedef struct ALT_I2C_IC_DMA_CR_s  ALT_I2C_IC_DMA_CR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_DMA_CR register. */
#define ALT_I2C_IC_DMA_CR_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_DMA_CR register from the beginning of the component. */
#define ALT_I2C_IC_DMA_CR_OFST        0x88
/* The address of the ALT_I2C_IC_DMA_CR register. */
#define ALT_I2C_IC_DMA_CR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_DMA_CR_OFST))

/*
 * Register : DMA Transmit Data Level Register - IC_DMA_TDLR
 * 
 * Name: DMA Transmit Data Level Register
 * 
 * Size: log2(IC_TX_BUFFER_DEPTH)  bits
 * 
 * Address Offset: 0x8c
 * 
 * Read/Write Access: Read/Write
 * 
 * This register is only valid when the DW_apb_i2c
 * 
 * is configured with a set of DMA interface signals
 * 
 * (IC_HAS_DMA = 1). When DW_apb_i2c is not configured
 * 
 * for DMA operation, this register does not exist;
 * 
 * writing to its address has no effect; reading from
 * 
 * its address returns zero.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [5:0]  | RW     | 0x0   | ALT_I2C_IC_DMA_TDLR_DMATDL       
 *  [31:6] | R      | 0x0   | ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR
 * 
 */
/*
 * Field : DMATDL
 * 
 * Transmit Data Level.
 * 
 * This bit field controls the level at which a
 * 
 * DMA request is made by the transmit logic. It
 * 
 * is equal to the watermark level; that is, the
 * 
 * dma_tx_req signal is generated when the number
 * 
 * of valid data entries in the transmit FIFO is
 * 
 * equal to or below this field value, and TDMAE = 1.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_MSB        5
/* The width in bits of the ALT_I2C_IC_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_WIDTH      6
/* The mask used to set the ALT_I2C_IC_DMA_TDLR_DMATDL register field value. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_SET_MSK    0x0000003f
/* The mask used to clear the ALT_I2C_IC_DMA_TDLR_DMATDL register field value. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_CLR_MSK    0xffffffc0
/* The reset value of the ALT_I2C_IC_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_RESET      0x0
/* Extracts the ALT_I2C_IC_DMA_TDLR_DMATDL field value from a register. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_I2C_IC_DMA_TDLR_DMATDL register field value suitable for setting the register. */
#define ALT_I2C_IC_DMA_TDLR_DMATDL_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : RSVD_DMA_TDLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR register field. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR register field. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_MSB        31
/* The width in bits of the ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR register field. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_WIDTH      26
/* The mask used to set the ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR register field value. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_SET_MSK    0xffffffc0
/* The mask used to clear the ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR register field value. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_CLR_MSK    0x0000003f
/* The reset value of the ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR register field. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_RESET      0x0
/* Extracts the ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR field value from a register. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_GET(value) (((value) & 0xffffffc0) >> 6)
/* Produces a ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR register field value suitable for setting the register. */
#define ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR_SET(value) (((value) << 6) & 0xffffffc0)

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
 * The struct declaration for register ALT_I2C_IC_DMA_TDLR.
 */
struct ALT_I2C_IC_DMA_TDLR_s
{
    volatile uint32_t        DMATDL        :  6;  /* ALT_I2C_IC_DMA_TDLR_DMATDL */
    const volatile uint32_t  RSVD_DMA_TDLR : 26;  /* ALT_I2C_IC_DMA_TDLR_RSVD_DMA_TDLR */
};

/* The typedef declaration for register ALT_I2C_IC_DMA_TDLR. */
typedef struct ALT_I2C_IC_DMA_TDLR_s  ALT_I2C_IC_DMA_TDLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_DMA_TDLR register. */
#define ALT_I2C_IC_DMA_TDLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_DMA_TDLR register from the beginning of the component. */
#define ALT_I2C_IC_DMA_TDLR_OFST        0x8c
/* The address of the ALT_I2C_IC_DMA_TDLR register. */
#define ALT_I2C_IC_DMA_TDLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_DMA_TDLR_OFST))

/*
 * Register : DMA Transmit Data Level Register - IC_DMA_RDLR
 * 
 * Name: I2C Receive Data Level Register
 * 
 * Size: log2(IC_RX_BUFFER_DEPTH)  bits
 * 
 * Address Offset: 0x90
 * 
 * Read/Write Access: Read/Write
 * 
 * This register is only valid when DW_apb_i2c
 * 
 * is configured with a set of DMA interface signals
 * 
 * (IC_HAS_DMA = 1). When DW_apb_i2c is not configured
 * 
 * for DMA operation, this register does not exist;
 * 
 * writing to its address has no effect; reading from
 * 
 * its address returns zero.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [5:0]  | RW     | 0x0   | ALT_I2C_IC_DMA_RDLR_DMARDL       
 *  [31:6] | R      | 0x0   | ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR
 * 
 */
/*
 * Field : DMARDL
 * 
 * Receive Data Level.
 * 
 * This bit field controls the level at which a DMA
 * 
 * request is made by the receive logic. The watermark level =
 * 
 * DMARDL+1; that is, dma_rx_req is generated when the number
 * 
 * of valid data entries in the receive FIFO is equal to or more
 * 
 * than this field value + 1, and RDMAE =1. For instance, when
 * 
 * DMARDL is 0, then dma_rx_req is asserted when 1 or more data
 * 
 * entries are present in the receive FIFO.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_MSB        5
/* The width in bits of the ALT_I2C_IC_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_WIDTH      6
/* The mask used to set the ALT_I2C_IC_DMA_RDLR_DMARDL register field value. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_SET_MSK    0x0000003f
/* The mask used to clear the ALT_I2C_IC_DMA_RDLR_DMARDL register field value. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_CLR_MSK    0xffffffc0
/* The reset value of the ALT_I2C_IC_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_RESET      0x0
/* Extracts the ALT_I2C_IC_DMA_RDLR_DMARDL field value from a register. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_I2C_IC_DMA_RDLR_DMARDL register field value suitable for setting the register. */
#define ALT_I2C_IC_DMA_RDLR_DMARDL_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : RSVD_DMA_RDLR
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR register field. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR register field. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_MSB        31
/* The width in bits of the ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR register field. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_WIDTH      26
/* The mask used to set the ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR register field value. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_SET_MSK    0xffffffc0
/* The mask used to clear the ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR register field value. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_CLR_MSK    0x0000003f
/* The reset value of the ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR register field. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_RESET      0x0
/* Extracts the ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR field value from a register. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_GET(value) (((value) & 0xffffffc0) >> 6)
/* Produces a ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR register field value suitable for setting the register. */
#define ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR_SET(value) (((value) << 6) & 0xffffffc0)

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
 * The struct declaration for register ALT_I2C_IC_DMA_RDLR.
 */
struct ALT_I2C_IC_DMA_RDLR_s
{
    volatile uint32_t        DMARDL        :  6;  /* ALT_I2C_IC_DMA_RDLR_DMARDL */
    const volatile uint32_t  RSVD_DMA_RDLR : 26;  /* ALT_I2C_IC_DMA_RDLR_RSVD_DMA_RDLR */
};

/* The typedef declaration for register ALT_I2C_IC_DMA_RDLR. */
typedef struct ALT_I2C_IC_DMA_RDLR_s  ALT_I2C_IC_DMA_RDLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_DMA_RDLR register. */
#define ALT_I2C_IC_DMA_RDLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_DMA_RDLR register from the beginning of the component. */
#define ALT_I2C_IC_DMA_RDLR_OFST        0x90
/* The address of the ALT_I2C_IC_DMA_RDLR register. */
#define ALT_I2C_IC_DMA_RDLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_DMA_RDLR_OFST))

/*
 * Register : I2C SDA Setup Register - IC_SDA_SETUP
 * 
 * Name: I2C SDA Setup Register
 * 
 * Size: 8 bits
 * 
 * Address Offset: 0x94
 * 
 * Read/Write Access: Read/Write
 * 
 * This register controls the amount of time delay
 * 
 * (in terms of number of ic_clk clock periods) introduced
 * 
 * in the rising edge of SCL, relative to SDA changing, when
 * 
 * DW_apb_i2c services a read request in a slave-transmitter operation.
 * 
 * The relevant I2C requirement is tSU:DAT (note 4) as detailed in the
 * 
 * I2C Bus Specification.
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [7:0]  | RW     | 0x64  | ALT_I2C_IC_SDA_SETUP_SDA_SETUP        
 *  [31:8] | R      | 0x0   | ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP
 * 
 */
/*
 * Field : SDA_SETUP
 * 
 * SDA Setup.
 * 
 * It is recommended that if the required delay is 1000ns,
 * 
 * then for an ic_clk frequency of 10 MHz, IC_SDA_SETUP
 * 
 * should be programmed to a value of 11.
 * 
 * Default Reset value: 0x64, but can be hardcoded by setting
 * 
 * the IC_DEFAULT_SDA_SETUP configuration parameter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_MSB        7
/* The width in bits of the ALT_I2C_IC_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_WIDTH      8
/* The mask used to set the ALT_I2C_IC_SDA_SETUP_SDA_SETUP register field value. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_IC_SDA_SETUP_SDA_SETUP register field value. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_IC_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_RESET      0x64
/* Extracts the ALT_I2C_IC_SDA_SETUP_SDA_SETUP field value from a register. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_IC_SDA_SETUP_SDA_SETUP register field value suitable for setting the register. */
#define ALT_I2C_IC_SDA_SETUP_SDA_SETUP_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_IC_SDA_SETUP
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_MSB        31
/* The width in bits of the ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_WIDTH      24
/* The mask used to set the ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP register field value. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_SET_MSK    0xffffff00
/* The mask used to clear the ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP register field value. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_CLR_MSK    0x000000ff
/* The reset value of the ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP register field. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_RESET      0x0
/* Extracts the ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP field value from a register. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP register field value suitable for setting the register. */
#define ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_I2C_IC_SDA_SETUP.
 */
struct ALT_I2C_IC_SDA_SETUP_s
{
    volatile uint32_t        SDA_SETUP         :  8;  /* ALT_I2C_IC_SDA_SETUP_SDA_SETUP */
    const volatile uint32_t  RSVD_IC_SDA_SETUP : 24;  /* ALT_I2C_IC_SDA_SETUP_RSVD_IC_SDA_SETUP */
};

/* The typedef declaration for register ALT_I2C_IC_SDA_SETUP. */
typedef struct ALT_I2C_IC_SDA_SETUP_s  ALT_I2C_IC_SDA_SETUP_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_SDA_SETUP register. */
#define ALT_I2C_IC_SDA_SETUP_RESET       0x00000064
/* The byte offset of the ALT_I2C_IC_SDA_SETUP register from the beginning of the component. */
#define ALT_I2C_IC_SDA_SETUP_OFST        0x94
/* The address of the ALT_I2C_IC_SDA_SETUP register. */
#define ALT_I2C_IC_SDA_SETUP_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_SDA_SETUP_OFST))

/*
 * Register : I2C ACK General Call Register - IC_ACK_GENERAL_CALL
 * 
 * Name: I2C ACK General Call Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x98
 * 
 * Read/Write Access: Read/Write
 * 
 * The register controls whether DW_apb_i2c responds
 * 
 * with a ACK or NACK when it receives an I2C
 * 
 * General Call address.
 * 
 * Note :This register is applicable only when the DW_apb_i2c is in slave mode
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                     
 * :-------|:-------|:------|:-------------------------------------------------
 *  [0]    | RW     | 0x1   | ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31
 * 
 */
/*
 * Field : ACK_GEN_CALL
 * 
 * ACK General Call.
 * 
 * When set to 1, DW_apb_i2c responds with a ACK
 * 
 * (by asserting ic_data_oe) when it receives a General Call.
 * 
 * Otherwise, DW_apb_i2c responds with a NACK
 * 
 * (by negating ic_data_oe).
 * 
 * Default Reset value: 0x1, but can be hardcoded by setting the
 * 
 * IC_DEFAULT_ACK_GENERAL_CALL configuration parameter.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                | Value | Description                    
 * :----------------------------------------------------|:------|:--------------------------------
 *  ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_E_DISABLED | 0x0   | Generate NACK for  General Call
 *  ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_E_ENABLED  | 0x1   | Generate ACK for a General Call
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL
 * 
 * Generate NACK for  General Call
 */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL
 * 
 * Generate ACK for a General Call
 */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_MSB        0
/* The width in bits of the ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL register field value. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL register field value. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_RESET      0x1
/* Extracts the ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL field value from a register. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_ACK_GEN_1_31
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_MSB        31
/* The width in bits of the ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_WIDTH      31
/* The mask used to set the ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 register field value. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 register field value. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 register field. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_RESET      0x0
/* Extracts the ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 field value from a register. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 register field value suitable for setting the register. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_ACK_GENERAL_CALL.
 */
struct ALT_I2C_IC_ACK_GENERAL_CALL_s
{
    volatile uint32_t        ACK_GEN_CALL         :  1;  /* ALT_I2C_IC_ACK_GENERAL_CALL_ACK_GEN_CALL */
    const volatile uint32_t  RSVD_IC_ACK_GEN_1_31 : 31;  /* ALT_I2C_IC_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_1_31 */
};

/* The typedef declaration for register ALT_I2C_IC_ACK_GENERAL_CALL. */
typedef struct ALT_I2C_IC_ACK_GENERAL_CALL_s  ALT_I2C_IC_ACK_GENERAL_CALL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_ACK_GENERAL_CALL register. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_RESET       0x00000001
/* The byte offset of the ALT_I2C_IC_ACK_GENERAL_CALL register from the beginning of the component. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_OFST        0x98
/* The address of the ALT_I2C_IC_ACK_GENERAL_CALL register. */
#define ALT_I2C_IC_ACK_GENERAL_CALL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_ACK_GENERAL_CALL_OFST))

/*
 * Register : I2C Enable Status Register - IC_ENABLE_STATUS
 * 
 * Name: I2C Enable Status Register
 * 
 * Size: 3 bits
 * 
 * Address Offset: 0x9C
 * 
 * Read/Write Access: Read
 * 
 * The register is used to report the DW_apb_i2c hardware
 * 
 * status when the IC_ENABLE[0] register is set from 1 to 0;
 * 
 * that is, when DW_apb_i2c is disabled.
 * 
 * If IC_ENABLE[0] has been set to 1, bits 2:1 are forced to 0,
 * 
 * and bit 0 is forced to 1.
 * 
 * If IC_ENABLE[0] has been set to 0, bits 2:1 is only be valid
 * 
 * as soon as bit 0 is read as '0'.
 * 
 * Note
 * 
 * When IC_ENABLE[0] has been written with '0'a delay occurs for
 * 
 * bit 0 to be read as '0' because disabling the DW_apb_i2c
 * 
 * depends on I2C bus activities.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                     
 * :-------|:-------|:------|:-------------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_ENABLE_STATUS_IC_EN                  
 *  [1]    | R      | 0x0   | ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY
 *  [2]    | R      | 0x0   | ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST       
 *  [31:3] | R      | 0x0   | ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS  
 * 
 */
/*
 * Field : IC_EN
 * 
 * ic_en Status.
 * 
 * This bit always reflects the value driven
 * 
 * on the output port ic_en.
 * 
 * When read as 1, DW_apb_i2c is deemed to be in
 * 
 * an enabled state.
 * 
 * When read as 0, DW_apb_i2c is deemed completely
 * 
 * inactive.
 * 
 * NOTE: The CPU can safely read this bit anytime.
 * 
 * When this bit is read as 0, the CPU can safely
 * 
 * read SLV_RX_DATA_LOST (bit 2) and
 * 
 * SLV_DISABLED_WHILE_BUSY (bit 1).
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description 
 * :------------------------------------------|:------|:-------------
 *  ALT_I2C_IC_ENABLE_STATUS_IC_EN_E_DISABLED | 0x0   | I2C disabled
 *  ALT_I2C_IC_ENABLE_STATUS_IC_EN_E_ENABLED  | 0x1   | I2C enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_STATUS_IC_EN
 * 
 * I2C disabled
 */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_STATUS_IC_EN
 * 
 * I2C enabled
 */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_STATUS_IC_EN register field. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_STATUS_IC_EN register field. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_MSB        0
/* The width in bits of the ALT_I2C_IC_ENABLE_STATUS_IC_EN register field. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_STATUS_IC_EN register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_ENABLE_STATUS_IC_EN register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_ENABLE_STATUS_IC_EN register field. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_STATUS_IC_EN field value from a register. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_ENABLE_STATUS_IC_EN register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_STATUS_IC_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : SLV_DISABLED_WHILE_BUSY
 * 
 * Slave Disabled While Busy (Transmit, Receive).
 * 
 * This bit indicates if a potential or active Slave
 * 
 * operation has been aborted due to the setting bit 0 of
 * 
 * the IC_ENABLE register from 1 to 0. This bit is set
 * 
 * when the CPU writes a 0 to the IC_ENABLE register
 * 
 * while: (a) DW_apb_i2c is receiving the address byte
 * 
 * of the Slave-Transmitter operation from a remote master;
 * 
 * OR, (b) address and data bytes of the Slave-Receiver
 * 
 * operation from a remote master.
 * 
 * When read as 1, DW_apb_i2c is deemed to have forced a
 * 
 * NACK during any part of an I2C transfer, irrespective
 * 
 * of whether the I2C address matches the slave address set
 * 
 * in DW_apb_i2c (IC_SAR register) OR if the transfer is
 * 
 * completed before IC_ENABLE is set to 0 but has not
 * 
 * taken effect.
 * 
 * NOTE: If the remote I2C master terminates the transfer
 * 
 * with a STOP condition before the DW_apb_i2c has a chance
 * 
 * to NACK a transfer, and IC_ENABLE[0] has been set to 0, then
 * 
 * this bit will also be set to 1.
 * 
 * When read as 0, DW_apb_i2c is deemed to have been disabled
 * 
 * when there is master activity, or when the I2C bus is idle.
 * 
 * NOTE: The CPU can safely read this bit when IC_EN (bit 0)
 * 
 * is read as 0.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                        | Value | Description                        
 * :------------------------------------------------------------|:------|:------------------------------------
 *  ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_E_INACTIVE | 0x0   | Slave is disabled when it is idle  
 *  ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_E_ACTIVE   | 0x1   | Slave is disabled when it is active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY
 * 
 * Slave is disabled when it is idle
 */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_E_INACTIVE 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY
 * 
 * Slave is disabled when it is active
 */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_E_ACTIVE   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MSB        1
/* The width in bits of the ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY field value from a register. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : SLV_RX_DATA_LOST
 * 
 * Slave Received Data Lost.
 * 
 * This bit indicates if a Slave-Receiver operation has been
 * 
 * aborted with at least one data byte received from an
 * 
 * I2C transfer due to the setting bit 0 of IC_ENABLE from 1 to 0.
 * 
 * When read as 1, DW_apb_i2c is deemed to have been actively engaged
 * 
 * in an aborted I2C transfer (with matching address) and the
 * 
 * data phase of the I2C transfer has been entered, even though
 * 
 * a data byte has been responded with a NACK.
 * 
 * NOTE: If the remote I2C master terminates the transfer with a
 * 
 * STOP condition before the DW_apb_i2c has a chance to NACK a
 * 
 * transfer, and IC_ENABLE[0] has been set to 0, then this bit is
 * 
 * also set to 1.
 * 
 * When read as 0, DW_apb_i2c is deemed to have been disabled without
 * 
 * being actively involved in the data phase of a Slave-Receiver transfer.
 * 
 * NOTE: The CPU can safely read this bit when IC_EN (bit 0) is
 * 
 * read as 0.
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description              
 * :-----------------------------------------------------|:------|:--------------------------
 *  ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_E_INACTIVE | 0x0   | Slave RX Data is not lost
 *  ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_E_ACTIVE   | 0x1   | Slave RX Data is lost    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST
 * 
 * Slave RX Data is not lost
 */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST
 * 
 * Slave RX Data is lost
 */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MSB        2
/* The width in bits of the ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_WIDTH      1
/* The mask used to set the ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST field value from a register. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RSVD_IC_ENABLE_STATUS
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS register field. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS register field. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_MSB        31
/* The width in bits of the ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS register field. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_WIDTH      29
/* The mask used to set the ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_SET_MSK    0xfffffff8
/* The mask used to clear the ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS register field value. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_CLR_MSK    0x00000007
/* The reset value of the ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS register field. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_RESET      0x0
/* Extracts the ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS field value from a register. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_GET(value) (((value) & 0xfffffff8) >> 3)
/* Produces a ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS register field value suitable for setting the register. */
#define ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS_SET(value) (((value) << 3) & 0xfffffff8)

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
 * The struct declaration for register ALT_I2C_IC_ENABLE_STATUS.
 */
struct ALT_I2C_IC_ENABLE_STATUS_s
{
    const volatile uint32_t  IC_EN                   :  1;  /* ALT_I2C_IC_ENABLE_STATUS_IC_EN */
    const volatile uint32_t  SLV_DISABLED_WHILE_BUSY :  1;  /* ALT_I2C_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY */
    const volatile uint32_t  SLV_RX_DATA_LOST        :  1;  /* ALT_I2C_IC_ENABLE_STATUS_SLV_RX_DATA_LOST */
    const volatile uint32_t  RSVD_IC_ENABLE_STATUS   : 29;  /* ALT_I2C_IC_ENABLE_STATUS_RSVD_IC_ENABLE_STATUS */
};

/* The typedef declaration for register ALT_I2C_IC_ENABLE_STATUS. */
typedef struct ALT_I2C_IC_ENABLE_STATUS_s  ALT_I2C_IC_ENABLE_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_ENABLE_STATUS register. */
#define ALT_I2C_IC_ENABLE_STATUS_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_ENABLE_STATUS register from the beginning of the component. */
#define ALT_I2C_IC_ENABLE_STATUS_OFST        0x9c
/* The address of the ALT_I2C_IC_ENABLE_STATUS register. */
#define ALT_I2C_IC_ENABLE_STATUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_ENABLE_STATUS_OFST))

/*
 * Register : I2C SS, FS or FM+  spike suppression limit - IC_FS_SPKLEN
 * 
 * Name: I2C SS, FS or FM+  spike suppression limit
 * 
 * Size: 8 bits
 * 
 * Address: 0xA0
 * 
 * Read/Write Access: Read/Write
 * 
 * This register is used to store the duration, measured in ic_clk cycles,
 * 
 * of the longest spike that is filtered out by the spike suppression logic w
 * 
 * hen the component is operating in SS, FS or FM+ modes.
 * 
 * The relevant I2C requirement is tSP (table 4) as detailed in the
 * 
 * I2C Bus Specification. This register must be programmed with a minimum value of
 * 1.
 * 
 * Dependencies: This register is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [7:0]  | RW     | 0x2   | ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN     
 *  [31:8] | R      | 0x0   | ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN
 * 
 */
/*
 * Field : IC_FS_SPKLEN
 * 
 * This register must be set before any I2C bus transaction can take place to
 * 
 * ensure stable operation. This register sets the duration, measured in ic_clk
 * cycles,
 * 
 * of the longest spike in the SCL or SDA lines that will be filtered out by the
 * spike
 * 
 * suppression logic.
 * 
 * This register can be written only when the I2C interface is disabled which
 * 
 * corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
 * 
 * have no effect.
 * 
 * The minimum valid value is 1; hardware prevents values less than this being
 * 
 * written, and if attempted results in 1 being set.
 * 
 * Default Reset value: IC_DEFAULT_FS_SPKLEN configuration parameter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_MSB        7
/* The width in bits of the ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_WIDTH      8
/* The mask used to set the ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN register field value. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN register field value. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_RESET      0x2
/* Extracts the ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN field value from a register. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN register field value suitable for setting the register. */
#define ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : RSVD_IC_FS_SPKLEN
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_MSB        31
/* The width in bits of the ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_WIDTH      24
/* The mask used to set the ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN register field value. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_SET_MSK    0xffffff00
/* The mask used to clear the ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN register field value. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_CLR_MSK    0x000000ff
/* The reset value of the ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN register field. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_RESET      0x0
/* Extracts the ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN field value from a register. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN register field value suitable for setting the register. */
#define ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_I2C_IC_FS_SPKLEN.
 */
struct ALT_I2C_IC_FS_SPKLEN_s
{
    volatile uint32_t        IC_FS_SPKLEN      :  8;  /* ALT_I2C_IC_FS_SPKLEN_IC_FS_SPKLEN */
    const volatile uint32_t  RSVD_IC_FS_SPKLEN : 24;  /* ALT_I2C_IC_FS_SPKLEN_RSVD_IC_FS_SPKLEN */
};

/* The typedef declaration for register ALT_I2C_IC_FS_SPKLEN. */
typedef struct ALT_I2C_IC_FS_SPKLEN_s  ALT_I2C_IC_FS_SPKLEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_FS_SPKLEN register. */
#define ALT_I2C_IC_FS_SPKLEN_RESET       0x00000002
/* The byte offset of the ALT_I2C_IC_FS_SPKLEN register from the beginning of the component. */
#define ALT_I2C_IC_FS_SPKLEN_OFST        0xa0
/* The address of the ALT_I2C_IC_FS_SPKLEN register. */
#define ALT_I2C_IC_FS_SPKLEN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_FS_SPKLEN_OFST))

/*
 * Register : Clear RESTART_DET Interrupt Register - IC_CLR_RESTART_DET
 * 
 * Name: Clear RESTART_DET Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0xA8
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET        
 *  [31:1] | R      | 0x0   | ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET
 * 
 */
/*
 * Field : CLR_RESTART_DET
 * 
 * Read this register to clear the RESTART_DET
 * 
 * interrupt (bit 12) of IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_MSB        0
/* The width in bits of the ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET register field value. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET register field value. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET field value from a register. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSVD_IC_CLR_RESTART_DET
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_MSB        31
/* The width in bits of the ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_WIDTH      31
/* The mask used to set the ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET register field value. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET register field value. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET register field. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET field value from a register. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET_SET(value) (((value) << 1) & 0xfffffffe)

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
 * The struct declaration for register ALT_I2C_IC_CLR_RESTART_DET.
 */
struct ALT_I2C_IC_CLR_RESTART_DET_s
{
    const volatile uint32_t  CLR_RESTART_DET         :  1;  /* ALT_I2C_IC_CLR_RESTART_DET_CLR_RESTART_DET */
    const volatile uint32_t  RSVD_IC_CLR_RESTART_DET : 31;  /* ALT_I2C_IC_CLR_RESTART_DET_RSVD_IC_CLR_RESTART_DET */
};

/* The typedef declaration for register ALT_I2C_IC_CLR_RESTART_DET. */
typedef struct ALT_I2C_IC_CLR_RESTART_DET_s  ALT_I2C_IC_CLR_RESTART_DET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_CLR_RESTART_DET register. */
#define ALT_I2C_IC_CLR_RESTART_DET_RESET       0x00000000
/* The byte offset of the ALT_I2C_IC_CLR_RESTART_DET register from the beginning of the component. */
#define ALT_I2C_IC_CLR_RESTART_DET_OFST        0xa8
/* The address of the ALT_I2C_IC_CLR_RESTART_DET register. */
#define ALT_I2C_IC_CLR_RESTART_DET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_CLR_RESTART_DET_OFST))

/*
 * Register : Component Parameter Register 1 - IC_COMP_PARAM_1
 * 
 * Name: Component Parameter Register 1
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0xf4
 * 
 * Read/Write Access: Read
 * 
 * Note
 * 
 * This is a constant read-only register that contains
 * 
 * encoded information about the component's parameter settings.
 * 
 * The reset value depends on coreConsultant parameter(s).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [1:0]   | R      | 0x2   | ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH      
 *  [3:2]   | R      | 0x2   | ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE      
 *  [4]     | R      | 0x0   | ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES     
 *  [5]     | R      | 0x1   | ALT_I2C_IC_COMP_PARAM_1_INTR_IO             
 *  [6]     | R      | 0x1   | ALT_I2C_IC_COMP_PARAM_1_HAS_DMA             
 *  [7]     | R      | 0x1   | ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS  
 *  [15:8]  | R      | 0x3f  | ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH     
 *  [23:16] | R      | 0x3f  | ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH     
 *  [31:24] | R      | 0x0   | ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1
 * 
 */
/*
 * Field : APB_DATA_WIDTH
 * 
 * The value of this register is
 * 
 * derived from the APB_DATA_WIDTH coreConsultant
 * 
 * parameter.
 * 
 * 0x0: 8 bits
 * 
 * 0x1: 16 bits
 * 
 * 0x2: 32 bits
 * 
 * 0x3: Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                | Value | Description                  
 * :----------------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_08BITS | 0x0   | APB data bus width is 08 bits
 *  ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_16BITS | 0x1   | APB data bus width is 16 bits
 *  ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_32BITS | 0x2   | APB data bus width is 32 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH
 * 
 * APB data bus width is 08 bits
 */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_08BITS 0x0
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH
 * 
 * APB data bus width is 16 bits
 */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_16BITS 0x1
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH
 * 
 * APB data bus width is 32 bits
 */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_E_APB_32BITS 0x2

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_MSB        1
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_WIDTH      2
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_SET_MSK    0x00000003
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_CLR_MSK    0xfffffffc
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_RESET      0x2
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : MAX_SPEED_MODE
 * 
 * The value of this register is
 * 
 * derived from the IC_MAX_SPEED_MODE coreConsultant
 * 
 * parameter.
 * 
 * 0x0: Reserved
 * 
 * 0x1: Standard
 * 
 * 0x2: Fast
 * 
 * 0x3: High
 * 
 * Dependencies: This field is not applicable  when IC_ULTRA_FAST_MODE=1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                  
 * :--------------------------------------------------|:------|:------------------------------
 *  ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_E_STANDARD | 0x1   | IC MAX SPEED is STANDARD MODE
 *  ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_E_FAST     | 0x2   | IC MAX SPEED is FAST MODE    
 *  ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_E_HIGH     | 0x3   | IC MAX SPEED is HIGH MODE    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE
 * 
 * IC MAX SPEED is STANDARD MODE
 */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_E_STANDARD   0x1
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE
 * 
 * IC MAX SPEED is FAST MODE
 */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_E_FAST       0x2
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE
 * 
 * IC MAX SPEED is HIGH MODE
 */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_E_HIGH       0x3

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE register field. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE register field. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_MSB        3
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE register field. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_WIDTH      2
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_SET_MSK    0x0000000c
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_CLR_MSK    0xfffffff3
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE register field. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_RESET      0x2
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : HC_COUNT_VALUES
 * 
 * The value of this register is
 * 
 * derived from the IC_HC_COUNT VALUES coreConsultant
 * 
 * parameter
 * 
 * 0: False
 * 
 * 1: True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                           
 * :---------------------------------------------------|:------|:---------------------------------------
 *  ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_E_DISABLED | 0x0   | Disables capability of reading encoded
 * :                                                   |       | parameters                            
 *  ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_E_ENABLED  | 0x1   | Enables  Capability of reading encoded
 * :                                                   |       | parameters                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES
 * 
 * Disables capability of reading encoded parameters
 */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES
 * 
 * Enables  Capability of reading encoded parameters
 */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_MSB        4
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_WIDTH      1
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_RESET      0x0
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : INTR_IO
 * 
 * The value of this register is
 * 
 * derived from the IC_INTR_IO coreConsultant
 * 
 * parameter
 * 
 * 0: Individual
 * 
 * 1: Combined
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description                 
 * :---------------------------------------------|:------|:-----------------------------
 *  ALT_I2C_IC_COMP_PARAM_1_INTR_IO_E_INDIVIDUAL | 0x0   | INDIVIDUAL Interrupt outputs
 *  ALT_I2C_IC_COMP_PARAM_1_INTR_IO_E_COMBINED   | 0x1   | COMBINED   Interrupt outputs
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_INTR_IO
 * 
 * INDIVIDUAL Interrupt outputs
 */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_E_INDIVIDUAL    0x0
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_INTR_IO
 * 
 * COMBINED   Interrupt outputs
 */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_E_COMBINED      0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_MSB        5
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_WIDTH      1
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_INTR_IO register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_INTR_IO register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_RESET      0x1
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_INTR_IO field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_INTR_IO register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_INTR_IO_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : HAS_DMA
 * 
 * The value of this register is
 * 
 * derived from the IC_HAS_DMA coreConsultant
 * 
 * parameter
 * 
 * 0: False
 * 
 * 1: True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                         
 * :-------------------------------------------|:------|:-------------------------------------
 *  ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_E_DISABLED | 0x0   | DMA handshaking signals are disabled
 *  ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_E_ENABLED  | 0x1   | DMA handshaking signals are enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_HAS_DMA
 * 
 * DMA handshaking signals are disabled
 */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_E_DISABLED  0x0
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_HAS_DMA
 * 
 * DMA handshaking signals are enabled
 */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_E_ENABLED   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_MSB        6
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_WIDTH      1
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_HAS_DMA register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_HAS_DMA register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_RESET      0x1
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_HAS_DMA field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_HAS_DMA register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_HAS_DMA_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : ADD_ENCODED_PARAMS
 * 
 * The value of this register is derived
 * 
 * from the IC_ADD_ENCODED_PARAMS coreConsultant
 * 
 * parameter.
 * 
 * Reading 1 in this bit means that the capability
 * 
 * of reading these encoded parameters via software has been
 * 
 * included. Otherwise, the entire register is 0 regardless of
 * 
 * the setting of any other parameters that are encoded in the
 * 
 * bits.
 * 
 * 0: False
 * 
 * 1: True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description                           
 * :------------------------------------------------------|:------|:---------------------------------------
 *  ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_E_DISBALED | 0x0   | Disables capability of reading encoded
 * :                                                      |       | parameters                            
 *  ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_E_ENABLED  | 0x1   | Enables  capability of reading encoded
 * :                                                      |       | parameters                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS
 * 
 * Disables capability of reading encoded parameters
 */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_E_DISBALED   0x0
/*
 * Enumerated value for register field ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS
 * 
 * Enables  capability of reading encoded parameters
 */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS register field. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS register field. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_MSB        7
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS register field. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_WIDTH      1
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS register field. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_RESET      0x1
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RX_BUFFER_DEPTH
 * 
 * The value of this register is
 * 
 * derived from the IC_RX_BUFFER_DEPTH coreConsultant
 * 
 * parameter.
 * 
 * 0x00: Reserved
 * 
 * 0x01: 2
 * 
 * 0x02: 3
 * 
 * to
 * 
 * 0xFF: 256
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_MSB        15
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_WIDTH      8
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_CLR_MSK    0xffff00ff
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_RESET      0x3f
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : TX_BUFFER_DEPTH
 * 
 * The value of this register is derived
 * 
 * from the IC_TX_BUFFER_DEPTH coreConsultant
 * 
 * parameter.
 * 
 * 0x00 = Reserved
 * 
 * 0x01 = 2
 * 
 * 0x02 = 3
 * 
 * to
 * 
 * 0xFF = 256
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_MSB        23
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_WIDTH      8
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_CLR_MSK    0xff00ffff
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH register field. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_RESET      0x3f
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : RSVD_IC_COMP_PARAM_1
 * 
 * Reserved bits - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_MSB        31
/* The width in bits of the ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_WIDTH      8
/* The mask used to set the ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_SET_MSK    0xff000000
/* The mask used to clear the ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 register field value. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_CLR_MSK    0x00ffffff
/* The reset value of the ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 register field. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_RESET      0x0
/* Extracts the ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 field value from a register. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1_SET(value) (((value) << 24) & 0xff000000)

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
 * The struct declaration for register ALT_I2C_IC_COMP_PARAM_1.
 */
struct ALT_I2C_IC_COMP_PARAM_1_s
{
    const volatile uint32_t  APB_DATA_WIDTH       :  2;  /* ALT_I2C_IC_COMP_PARAM_1_APB_DATA_WIDTH */
    const volatile uint32_t  MAX_SPEED_MODE       :  2;  /* ALT_I2C_IC_COMP_PARAM_1_MAX_SPEED_MODE */
    const volatile uint32_t  HC_COUNT_VALUES      :  1;  /* ALT_I2C_IC_COMP_PARAM_1_HC_COUNT_VALUES */
    const volatile uint32_t  INTR_IO              :  1;  /* ALT_I2C_IC_COMP_PARAM_1_INTR_IO */
    const volatile uint32_t  HAS_DMA              :  1;  /* ALT_I2C_IC_COMP_PARAM_1_HAS_DMA */
    const volatile uint32_t  ADD_ENCODED_PARAMS   :  1;  /* ALT_I2C_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS */
    const volatile uint32_t  RX_BUFFER_DEPTH      :  8;  /* ALT_I2C_IC_COMP_PARAM_1_RX_BUFFER_DEPTH */
    const volatile uint32_t  TX_BUFFER_DEPTH      :  8;  /* ALT_I2C_IC_COMP_PARAM_1_TX_BUFFER_DEPTH */
    const volatile uint32_t  RSVD_IC_COMP_PARAM_1 :  8;  /* ALT_I2C_IC_COMP_PARAM_1_RSVD_IC_COMP_PARAM_1 */
};

/* The typedef declaration for register ALT_I2C_IC_COMP_PARAM_1. */
typedef struct ALT_I2C_IC_COMP_PARAM_1_s  ALT_I2C_IC_COMP_PARAM_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_COMP_PARAM_1 register. */
#define ALT_I2C_IC_COMP_PARAM_1_RESET       0x003f3fea
/* The byte offset of the ALT_I2C_IC_COMP_PARAM_1 register from the beginning of the component. */
#define ALT_I2C_IC_COMP_PARAM_1_OFST        0xf4
/* The address of the ALT_I2C_IC_COMP_PARAM_1 register. */
#define ALT_I2C_IC_COMP_PARAM_1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_COMP_PARAM_1_OFST))

/*
 * Register : I2C Component Version Register - IC_COMP_VERSION
 * 
 * Name: I2C Component Version Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0xf8
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                            
 * :-------|:-------|:-----------|:----------------------------------------
 *  [31:0] | R      | 0x3230302a | ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION
 * 
 */
/*
 * Field : IC_COMP_VERSION
 * 
 * Specific values for this register are
 * 
 * described in the Releases Table in the
 * 
 * DW_apb_i2c Release Notes
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION register field. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION register field. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_MSB        31
/* The width in bits of the ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION register field. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_WIDTH      32
/* The mask used to set the ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION register field value. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_SET_MSK    0xffffffff
/* The mask used to clear the ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION register field value. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_CLR_MSK    0x00000000
/* The reset value of the ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION register field. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_RESET      0x3230302a
/* Extracts the ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION field value from a register. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_I2C_IC_COMP_VERSION.
 */
struct ALT_I2C_IC_COMP_VERSION_s
{
    const volatile uint32_t  IC_COMP_VERSION : 32;  /* ALT_I2C_IC_COMP_VERSION_IC_COMP_VERSION */
};

/* The typedef declaration for register ALT_I2C_IC_COMP_VERSION. */
typedef struct ALT_I2C_IC_COMP_VERSION_s  ALT_I2C_IC_COMP_VERSION_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_COMP_VERSION register. */
#define ALT_I2C_IC_COMP_VERSION_RESET       0x3230302a
/* The byte offset of the ALT_I2C_IC_COMP_VERSION register from the beginning of the component. */
#define ALT_I2C_IC_COMP_VERSION_OFST        0xf8
/* The address of the ALT_I2C_IC_COMP_VERSION register. */
#define ALT_I2C_IC_COMP_VERSION_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_COMP_VERSION_OFST))

/*
 * Register : I2C Component Type Register - IC_COMP_TYPE
 * 
 * Name: I2C Component Type Register
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0xfc
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                      
 * :-------|:-------|:-----------|:----------------------------------
 *  [31:0] | R      | 0x44570140 | ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE
 * 
 */
/*
 * Field : IC_COMP_TYPE
 * 
 * Designware Component Type number
 * 
 * = 0x44_57_01_40. This assigned unique
 * 
 * hex value is constant and is derived
 * 
 * from the two ASCII letters 'DW' followed
 * 
 * by a 16-bit unsigned number.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_MSB        31
/* The width in bits of the ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_WIDTH      32
/* The mask used to set the ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE register field value. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE register field value. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_CLR_MSK    0x00000000
/* The reset value of the ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_RESET      0x44570140
/* Extracts the ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE field value from a register. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE register field value suitable for setting the register. */
#define ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_I2C_IC_COMP_TYPE.
 */
struct ALT_I2C_IC_COMP_TYPE_s
{
    const volatile uint32_t  IC_COMP_TYPE : 32;  /* ALT_I2C_IC_COMP_TYPE_IC_COMP_TYPE */
};

/* The typedef declaration for register ALT_I2C_IC_COMP_TYPE. */
typedef struct ALT_I2C_IC_COMP_TYPE_s  ALT_I2C_IC_COMP_TYPE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_IC_COMP_TYPE register. */
#define ALT_I2C_IC_COMP_TYPE_RESET       0x44570140
/* The byte offset of the ALT_I2C_IC_COMP_TYPE register from the beginning of the component. */
#define ALT_I2C_IC_COMP_TYPE_OFST        0xfc
/* The address of the ALT_I2C_IC_COMP_TYPE register. */
#define ALT_I2C_IC_COMP_TYPE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_IC_COMP_TYPE_OFST))

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
 * The struct declaration for register group ALT_I2C.
 */
struct ALT_I2C_s
{
    volatile ALT_I2C_IC_CON_t                 IC_CON;                 /* ALT_I2C_IC_CON */
    volatile ALT_I2C_IC_TAR_t                 IC_TAR;                 /* ALT_I2C_IC_TAR */
    volatile ALT_I2C_IC_SAR_t                 IC_SAR;                 /* ALT_I2C_IC_SAR */
    volatile uint32_t                         _pad_0xc_0xf;           /* *UNDEFINED* */
    volatile ALT_I2C_IC_DATA_CMD_t            IC_DATA_CMD;            /* ALT_I2C_IC_DATA_CMD */
    volatile ALT_I2C_IC_SS_SCL_HCNT_t         IC_SS_SCL_HCNT;         /* ALT_I2C_IC_SS_SCL_HCNT */
    volatile ALT_I2C_IC_SS_SCL_LCNT_t         IC_SS_SCL_LCNT;         /* ALT_I2C_IC_SS_SCL_LCNT */
    volatile ALT_I2C_IC_FS_SCL_HCNT_t         IC_FS_SCL_HCNT;         /* ALT_I2C_IC_FS_SCL_HCNT */
    volatile ALT_I2C_IC_FS_SCL_LCNT_t         IC_FS_SCL_LCNT;         /* ALT_I2C_IC_FS_SCL_LCNT */
    volatile uint32_t                         _pad_0x24_0x2b[2];      /* *UNDEFINED* */
    volatile ALT_I2C_IC_INTR_STAT_t           IC_INTR_STAT;           /* ALT_I2C_IC_INTR_STAT */
    volatile ALT_I2C_IC_INTR_MASK_t           IC_INTR_MASK;           /* ALT_I2C_IC_INTR_MASK */
    volatile ALT_I2C_IC_RAW_INTR_STAT_t       IC_RAW_INTR_STAT;       /* ALT_I2C_IC_RAW_INTR_STAT */
    volatile ALT_I2C_IC_RX_TL_t               IC_RX_TL;               /* ALT_I2C_IC_RX_TL */
    volatile ALT_I2C_IC_TX_TL_t               IC_TX_TL;               /* ALT_I2C_IC_TX_TL */
    volatile ALT_I2C_IC_CLR_INTR_t            IC_CLR_INTR;            /* ALT_I2C_IC_CLR_INTR */
    volatile ALT_I2C_IC_CLR_RX_UNDER_t        IC_CLR_RX_UNDER;        /* ALT_I2C_IC_CLR_RX_UNDER */
    volatile ALT_I2C_IC_CLR_RX_OVER_t         IC_CLR_RX_OVER;         /* ALT_I2C_IC_CLR_RX_OVER */
    volatile ALT_I2C_IC_CLR_TX_OVER_t         IC_CLR_TX_OVER;         /* ALT_I2C_IC_CLR_TX_OVER */
    volatile ALT_I2C_IC_CLR_RD_REQ_t          IC_CLR_RD_REQ;          /* ALT_I2C_IC_CLR_RD_REQ */
    volatile ALT_I2C_IC_CLR_TX_ABRT_t         IC_CLR_TX_ABRT;         /* ALT_I2C_IC_CLR_TX_ABRT */
    volatile ALT_I2C_IC_CLR_RX_DONE_t         IC_CLR_RX_DONE;         /* ALT_I2C_IC_CLR_RX_DONE */
    volatile ALT_I2C_IC_CLR_ACTIVITY_t        IC_CLR_ACTIVITY;        /* ALT_I2C_IC_CLR_ACTIVITY */
    volatile ALT_I2C_IC_CLR_STOP_DET_t        IC_CLR_STOP_DET;        /* ALT_I2C_IC_CLR_STOP_DET */
    volatile ALT_I2C_IC_CLR_START_DET_t       IC_CLR_START_DET;       /* ALT_I2C_IC_CLR_START_DET */
    volatile ALT_I2C_IC_CLR_GEN_CALL_t        IC_CLR_GEN_CALL;        /* ALT_I2C_IC_CLR_GEN_CALL */
    volatile ALT_I2C_IC_ENABLE_t              IC_ENABLE;              /* ALT_I2C_IC_ENABLE */
    volatile ALT_I2C_IC_STATUS_t              IC_STATUS;              /* ALT_I2C_IC_STATUS */
    volatile ALT_I2C_IC_TXFLR_t               IC_TXFLR;               /* ALT_I2C_IC_TXFLR */
    volatile ALT_I2C_IC_RXFLR_t               IC_RXFLR;               /* ALT_I2C_IC_RXFLR */
    volatile ALT_I2C_IC_SDA_HOLD_t            IC_SDA_HOLD;            /* ALT_I2C_IC_SDA_HOLD */
    volatile ALT_I2C_IC_TX_ABRT_SOURCE_t      IC_TX_ABRT_SOURCE;      /* ALT_I2C_IC_TX_ABRT_SOURCE */
    volatile ALT_I2C_IC_SLV_DATA_NACK_ONLY_t  IC_SLV_DATA_NACK_ONLY;  /* ALT_I2C_IC_SLV_DATA_NACK_ONLY */
    volatile ALT_I2C_IC_DMA_CR_t              IC_DMA_CR;              /* ALT_I2C_IC_DMA_CR */
    volatile ALT_I2C_IC_DMA_TDLR_t            IC_DMA_TDLR;            /* ALT_I2C_IC_DMA_TDLR */
    volatile ALT_I2C_IC_DMA_RDLR_t            IC_DMA_RDLR;            /* ALT_I2C_IC_DMA_RDLR */
    volatile ALT_I2C_IC_SDA_SETUP_t           IC_SDA_SETUP;           /* ALT_I2C_IC_SDA_SETUP */
    volatile ALT_I2C_IC_ACK_GENERAL_CALL_t    IC_ACK_GENERAL_CALL;    /* ALT_I2C_IC_ACK_GENERAL_CALL */
    volatile ALT_I2C_IC_ENABLE_STATUS_t       IC_ENABLE_STATUS;       /* ALT_I2C_IC_ENABLE_STATUS */
    volatile ALT_I2C_IC_FS_SPKLEN_t           IC_FS_SPKLEN;           /* ALT_I2C_IC_FS_SPKLEN */
    volatile uint32_t                         _pad_0xa4_0xa7;         /* *UNDEFINED* */
    volatile ALT_I2C_IC_CLR_RESTART_DET_t     IC_CLR_RESTART_DET;     /* ALT_I2C_IC_CLR_RESTART_DET */
    volatile uint32_t                         _pad_0xac_0xf3[18];     /* *UNDEFINED* */
    volatile ALT_I2C_IC_COMP_PARAM_1_t        IC_COMP_PARAM_1;        /* ALT_I2C_IC_COMP_PARAM_1 */
    volatile ALT_I2C_IC_COMP_VERSION_t        IC_COMP_VERSION;        /* ALT_I2C_IC_COMP_VERSION */
    volatile ALT_I2C_IC_COMP_TYPE_t           IC_COMP_TYPE;           /* ALT_I2C_IC_COMP_TYPE */
};

/* The typedef declaration for register group ALT_I2C. */
typedef struct ALT_I2C_s  ALT_I2C_t;
/* The struct declaration for the raw register contents of register group ALT_I2C. */
struct ALT_I2C_raw_s
{
    volatile uint32_t  IC_CON;                 /* ALT_I2C_IC_CON */
    volatile uint32_t  IC_TAR;                 /* ALT_I2C_IC_TAR */
    volatile uint32_t  IC_SAR;                 /* ALT_I2C_IC_SAR */
    volatile uint32_t  _pad_0xc_0xf;           /* *UNDEFINED* */
    volatile uint32_t  IC_DATA_CMD;            /* ALT_I2C_IC_DATA_CMD */
    volatile uint32_t  IC_SS_SCL_HCNT;         /* ALT_I2C_IC_SS_SCL_HCNT */
    volatile uint32_t  IC_SS_SCL_LCNT;         /* ALT_I2C_IC_SS_SCL_LCNT */
    volatile uint32_t  IC_FS_SCL_HCNT;         /* ALT_I2C_IC_FS_SCL_HCNT */
    volatile uint32_t  IC_FS_SCL_LCNT;         /* ALT_I2C_IC_FS_SCL_LCNT */
    volatile uint32_t  _pad_0x24_0x2b[2];      /* *UNDEFINED* */
    volatile uint32_t  IC_INTR_STAT;           /* ALT_I2C_IC_INTR_STAT */
    volatile uint32_t  IC_INTR_MASK;           /* ALT_I2C_IC_INTR_MASK */
    volatile uint32_t  IC_RAW_INTR_STAT;       /* ALT_I2C_IC_RAW_INTR_STAT */
    volatile uint32_t  IC_RX_TL;               /* ALT_I2C_IC_RX_TL */
    volatile uint32_t  IC_TX_TL;               /* ALT_I2C_IC_TX_TL */
    volatile uint32_t  IC_CLR_INTR;            /* ALT_I2C_IC_CLR_INTR */
    volatile uint32_t  IC_CLR_RX_UNDER;        /* ALT_I2C_IC_CLR_RX_UNDER */
    volatile uint32_t  IC_CLR_RX_OVER;         /* ALT_I2C_IC_CLR_RX_OVER */
    volatile uint32_t  IC_CLR_TX_OVER;         /* ALT_I2C_IC_CLR_TX_OVER */
    volatile uint32_t  IC_CLR_RD_REQ;          /* ALT_I2C_IC_CLR_RD_REQ */
    volatile uint32_t  IC_CLR_TX_ABRT;         /* ALT_I2C_IC_CLR_TX_ABRT */
    volatile uint32_t  IC_CLR_RX_DONE;         /* ALT_I2C_IC_CLR_RX_DONE */
    volatile uint32_t  IC_CLR_ACTIVITY;        /* ALT_I2C_IC_CLR_ACTIVITY */
    volatile uint32_t  IC_CLR_STOP_DET;        /* ALT_I2C_IC_CLR_STOP_DET */
    volatile uint32_t  IC_CLR_START_DET;       /* ALT_I2C_IC_CLR_START_DET */
    volatile uint32_t  IC_CLR_GEN_CALL;        /* ALT_I2C_IC_CLR_GEN_CALL */
    volatile uint32_t  IC_ENABLE;              /* ALT_I2C_IC_ENABLE */
    volatile uint32_t  IC_STATUS;              /* ALT_I2C_IC_STATUS */
    volatile uint32_t  IC_TXFLR;               /* ALT_I2C_IC_TXFLR */
    volatile uint32_t  IC_RXFLR;               /* ALT_I2C_IC_RXFLR */
    volatile uint32_t  IC_SDA_HOLD;            /* ALT_I2C_IC_SDA_HOLD */
    volatile uint32_t  IC_TX_ABRT_SOURCE;      /* ALT_I2C_IC_TX_ABRT_SOURCE */
    volatile uint32_t  IC_SLV_DATA_NACK_ONLY;  /* ALT_I2C_IC_SLV_DATA_NACK_ONLY */
    volatile uint32_t  IC_DMA_CR;              /* ALT_I2C_IC_DMA_CR */
    volatile uint32_t  IC_DMA_TDLR;            /* ALT_I2C_IC_DMA_TDLR */
    volatile uint32_t  IC_DMA_RDLR;            /* ALT_I2C_IC_DMA_RDLR */
    volatile uint32_t  IC_SDA_SETUP;           /* ALT_I2C_IC_SDA_SETUP */
    volatile uint32_t  IC_ACK_GENERAL_CALL;    /* ALT_I2C_IC_ACK_GENERAL_CALL */
    volatile uint32_t  IC_ENABLE_STATUS;       /* ALT_I2C_IC_ENABLE_STATUS */
    volatile uint32_t  IC_FS_SPKLEN;           /* ALT_I2C_IC_FS_SPKLEN */
    volatile uint32_t  _pad_0xa4_0xa7;         /* *UNDEFINED* */
    volatile uint32_t  IC_CLR_RESTART_DET;     /* ALT_I2C_IC_CLR_RESTART_DET */
    volatile uint32_t  _pad_0xac_0xf3[18];     /* *UNDEFINED* */
    volatile uint32_t  IC_COMP_PARAM_1;        /* ALT_I2C_IC_COMP_PARAM_1 */
    volatile uint32_t  IC_COMP_VERSION;        /* ALT_I2C_IC_COMP_VERSION */
    volatile uint32_t  IC_COMP_TYPE;           /* ALT_I2C_IC_COMP_TYPE */
};

/* The typedef declaration for the raw register contents of register group ALT_I2C. */
typedef struct ALT_I2C_raw_s  ALT_I2C_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_I2C_H__ */

