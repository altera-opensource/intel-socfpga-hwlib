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
 * Component : ALT_I2C
 * 
 */
/*
 * Register : ic_con
 * 
 * Name: I2C Control Register
 * 
 * Size: 10 bits
 * 
 * Address Offset: 0x00
 * 
 * Read/Write Access:
 * 
 * If configuration parameter I2C_DYNAMIC_TAR_UPDATE = 0,
 * 
 * all bits are Read/Write.
 * 
 * If I2C_DYNAMIC_TAR_UPDATE = 1, bit 4 is Read-only.
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
 * :--------|:-------|:------|:---------------------------------
 *  [0]     | RW     | 0x1   | ALT_I2C_CON_MST_MOD             
 *  [2:1]   | RW     | 0x2   | ALT_I2C_CON_SPEED               
 *  [3]     | RW     | 0x1   | ALT_I2C_CON_IC_10BITADDR_SLV    
 *  [4]     | R      | 0x1   | ALT_I2C_CON_IC_10BITADDR_MST    
 *  [5]     | RW     | 0x1   | ALT_I2C_CON_IC_RESTART_EN       
 *  [6]     | RW     | 0x1   | ALT_I2C_CON_IC_SLV_DIS          
 *  [7]     | RW     | 0x0   | ALT_I2C_CON_STOP_DET_IFADDRED   
 *  [8]     | RW     | 0x0   | ALT_I2C_CON_TX_EMPTY_CTL        
 *  [9]     | RW     | 0x0   | ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL
 *  [31:10] | R      | 0x0   | ALT_I2C_CON_RSVD_IC_CON_31TO10  
 * 
 */
/*
 * Field : master_mode
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
 *  Enum                      | Value | Description    
 * :--------------------------|:------|:----------------
 *  ALT_I2C_CON_MST_MOD_E_DIS | 0x0   | master disabled
 *  ALT_I2C_CON_MST_MOD_E_EN  | 0x1   | master enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_CON_MST_MOD
 * 
 * master disabled
 */
#define ALT_I2C_CON_MST_MOD_E_DIS   0x0
/*
 * Enumerated value for register field ALT_I2C_CON_MST_MOD
 * 
 * master enabled
 */
#define ALT_I2C_CON_MST_MOD_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_MST_MOD register field. */
#define ALT_I2C_CON_MST_MOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_MST_MOD register field. */
#define ALT_I2C_CON_MST_MOD_MSB        0
/* The width in bits of the ALT_I2C_CON_MST_MOD register field. */
#define ALT_I2C_CON_MST_MOD_WIDTH      1
/* The mask used to set the ALT_I2C_CON_MST_MOD register field value. */
#define ALT_I2C_CON_MST_MOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CON_MST_MOD register field value. */
#define ALT_I2C_CON_MST_MOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CON_MST_MOD register field. */
#define ALT_I2C_CON_MST_MOD_RESET      0x1
/* Extracts the ALT_I2C_CON_MST_MOD field value from a register. */
#define ALT_I2C_CON_MST_MOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CON_MST_MOD register field value suitable for setting the register. */
#define ALT_I2C_CON_MST_MOD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : speed
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
 * Reset value: IC_MAX_SPEED_MODE configuration
 * 
 * Field Enumeration Values:
 * 
 *  Enum                         | Value | Description               
 * :-----------------------------|:------|:---------------------------
 *  ALT_I2C_CON_SPEED_E_STANDARD | 0x1   | standard mode (100 kbit/s)
 *  ALT_I2C_CON_SPEED_E_FAST     | 0x2   | fast mode (400 kbit/s)    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_CON_SPEED
 * 
 * standard mode (100 kbit/s)
 */
#define ALT_I2C_CON_SPEED_E_STANDARD    0x1
/*
 * Enumerated value for register field ALT_I2C_CON_SPEED
 * 
 * fast mode (400 kbit/s)
 */
#define ALT_I2C_CON_SPEED_E_FAST        0x2

/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_SPEED register field. */
#define ALT_I2C_CON_SPEED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_SPEED register field. */
#define ALT_I2C_CON_SPEED_MSB        2
/* The width in bits of the ALT_I2C_CON_SPEED register field. */
#define ALT_I2C_CON_SPEED_WIDTH      2
/* The mask used to set the ALT_I2C_CON_SPEED register field value. */
#define ALT_I2C_CON_SPEED_SET_MSK    0x00000006
/* The mask used to clear the ALT_I2C_CON_SPEED register field value. */
#define ALT_I2C_CON_SPEED_CLR_MSK    0xfffffff9
/* The reset value of the ALT_I2C_CON_SPEED register field. */
#define ALT_I2C_CON_SPEED_RESET      0x2
/* Extracts the ALT_I2C_CON_SPEED field value from a register. */
#define ALT_I2C_CON_SPEED_GET(value) (((value) & 0x00000006) >> 1)
/* Produces a ALT_I2C_CON_SPEED register field value suitable for setting the register. */
#define ALT_I2C_CON_SPEED_SET(value) (((value) << 1) & 0x00000006)

/*
 * Field : ic_10bitaddr_slave
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
 *  Enum                                        | Value | Description      
 * :--------------------------------------------|:------|:------------------
 *  ALT_I2C_CON_IC_10BITADDR_SLV_E_SLVADDR7BIT  | 0x0   | 7-bit addressing 
 *  ALT_I2C_CON_IC_10BITADDR_SLV_E_SLVADDR10BIT | 0x1   | 10-bit addressing
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_CON_IC_10BITADDR_SLV
 * 
 * 7-bit addressing
 */
#define ALT_I2C_CON_IC_10BITADDR_SLV_E_SLVADDR7BIT  0x0
/*
 * Enumerated value for register field ALT_I2C_CON_IC_10BITADDR_SLV
 * 
 * 10-bit addressing
 */
#define ALT_I2C_CON_IC_10BITADDR_SLV_E_SLVADDR10BIT 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_IC_10BITADDR_SLV register field. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_IC_10BITADDR_SLV register field. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_MSB        3
/* The width in bits of the ALT_I2C_CON_IC_10BITADDR_SLV register field. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_WIDTH      1
/* The mask used to set the ALT_I2C_CON_IC_10BITADDR_SLV register field value. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_CON_IC_10BITADDR_SLV register field value. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_CON_IC_10BITADDR_SLV register field. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_RESET      0x1
/* Extracts the ALT_I2C_CON_IC_10BITADDR_SLV field value from a register. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_CON_IC_10BITADDR_SLV register field value suitable for setting the register. */
#define ALT_I2C_CON_IC_10BITADDR_SLV_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : ic_10bitaddr_master
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
 *  Enum                                        | Value | Description      
 * :--------------------------------------------|:------|:------------------
 *  ALT_I2C_CON_IC_10BITADDR_MST_E_MSTADDR7BIT  | 0x0   | 7-bit addressing 
 *  ALT_I2C_CON_IC_10BITADDR_MST_E_MSTADDR10BIT | 0x1   | 10-bit addressing
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_CON_IC_10BITADDR_MST
 * 
 * 7-bit addressing
 */
#define ALT_I2C_CON_IC_10BITADDR_MST_E_MSTADDR7BIT  0x0
/*
 * Enumerated value for register field ALT_I2C_CON_IC_10BITADDR_MST
 * 
 * 10-bit addressing
 */
#define ALT_I2C_CON_IC_10BITADDR_MST_E_MSTADDR10BIT 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_IC_10BITADDR_MST register field. */
#define ALT_I2C_CON_IC_10BITADDR_MST_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_IC_10BITADDR_MST register field. */
#define ALT_I2C_CON_IC_10BITADDR_MST_MSB        4
/* The width in bits of the ALT_I2C_CON_IC_10BITADDR_MST register field. */
#define ALT_I2C_CON_IC_10BITADDR_MST_WIDTH      1
/* The mask used to set the ALT_I2C_CON_IC_10BITADDR_MST register field value. */
#define ALT_I2C_CON_IC_10BITADDR_MST_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_CON_IC_10BITADDR_MST register field value. */
#define ALT_I2C_CON_IC_10BITADDR_MST_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_CON_IC_10BITADDR_MST register field. */
#define ALT_I2C_CON_IC_10BITADDR_MST_RESET      0x1
/* Extracts the ALT_I2C_CON_IC_10BITADDR_MST field value from a register. */
#define ALT_I2C_CON_IC_10BITADDR_MST_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_CON_IC_10BITADDR_MST register field value suitable for setting the register. */
#define ALT_I2C_CON_IC_10BITADDR_MST_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : ic_restart_en
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
 *  Enum                            | Value | Description           
 * :--------------------------------|:------|:-----------------------
 *  ALT_I2C_CON_IC_RESTART_EN_E_DIS | 0x0   | restart master disable
 *  ALT_I2C_CON_IC_RESTART_EN_E_EN  | 0x1   | restart master enable 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_CON_IC_RESTART_EN
 * 
 * restart master disable
 */
#define ALT_I2C_CON_IC_RESTART_EN_E_DIS 0x0
/*
 * Enumerated value for register field ALT_I2C_CON_IC_RESTART_EN
 * 
 * restart master enable
 */
#define ALT_I2C_CON_IC_RESTART_EN_E_EN  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_IC_RESTART_EN register field. */
#define ALT_I2C_CON_IC_RESTART_EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_IC_RESTART_EN register field. */
#define ALT_I2C_CON_IC_RESTART_EN_MSB        5
/* The width in bits of the ALT_I2C_CON_IC_RESTART_EN register field. */
#define ALT_I2C_CON_IC_RESTART_EN_WIDTH      1
/* The mask used to set the ALT_I2C_CON_IC_RESTART_EN register field value. */
#define ALT_I2C_CON_IC_RESTART_EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_CON_IC_RESTART_EN register field value. */
#define ALT_I2C_CON_IC_RESTART_EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_CON_IC_RESTART_EN register field. */
#define ALT_I2C_CON_IC_RESTART_EN_RESET      0x1
/* Extracts the ALT_I2C_CON_IC_RESTART_EN field value from a register. */
#define ALT_I2C_CON_IC_RESTART_EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_CON_IC_RESTART_EN register field value suitable for setting the register. */
#define ALT_I2C_CON_IC_RESTART_EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : ic_slave_disable
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
 *  Enum                         | Value | Description  
 * :-----------------------------|:------|:--------------
 *  ALT_I2C_CON_IC_SLV_DIS_E_EN  | 0x0   | slave enable 
 *  ALT_I2C_CON_IC_SLV_DIS_E_DIS | 0x1   | slave disable
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_CON_IC_SLV_DIS
 * 
 * slave enable
 */
#define ALT_I2C_CON_IC_SLV_DIS_E_EN     0x0
/*
 * Enumerated value for register field ALT_I2C_CON_IC_SLV_DIS
 * 
 * slave disable
 */
#define ALT_I2C_CON_IC_SLV_DIS_E_DIS    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_IC_SLV_DIS register field. */
#define ALT_I2C_CON_IC_SLV_DIS_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_IC_SLV_DIS register field. */
#define ALT_I2C_CON_IC_SLV_DIS_MSB        6
/* The width in bits of the ALT_I2C_CON_IC_SLV_DIS register field. */
#define ALT_I2C_CON_IC_SLV_DIS_WIDTH      1
/* The mask used to set the ALT_I2C_CON_IC_SLV_DIS register field value. */
#define ALT_I2C_CON_IC_SLV_DIS_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_CON_IC_SLV_DIS register field value. */
#define ALT_I2C_CON_IC_SLV_DIS_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_CON_IC_SLV_DIS register field. */
#define ALT_I2C_CON_IC_SLV_DIS_RESET      0x1
/* Extracts the ALT_I2C_CON_IC_SLV_DIS field value from a register. */
#define ALT_I2C_CON_IC_SLV_DIS_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_CON_IC_SLV_DIS register field value suitable for setting the register. */
#define ALT_I2C_CON_IC_SLV_DIS_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : stop_det_ifaddressed
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_STOP_DET_IFADDRED register field. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_STOP_DET_IFADDRED register field. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_MSB        7
/* The width in bits of the ALT_I2C_CON_STOP_DET_IFADDRED register field. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_WIDTH      1
/* The mask used to set the ALT_I2C_CON_STOP_DET_IFADDRED register field value. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_CON_STOP_DET_IFADDRED register field value. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_CON_STOP_DET_IFADDRED register field. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_RESET      0x0
/* Extracts the ALT_I2C_CON_STOP_DET_IFADDRED field value from a register. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_CON_STOP_DET_IFADDRED register field value suitable for setting the register. */
#define ALT_I2C_CON_STOP_DET_IFADDRED_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : tx_empty_ctrl
 * 
 * This bit controls the generation
 * 
 * of the TX_EMPTY interrupt, as described in the IC_RAW_INTR_STAT register.
 * 
 * Reset value: 0x0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_TX_EMPTY_CTL register field. */
#define ALT_I2C_CON_TX_EMPTY_CTL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_TX_EMPTY_CTL register field. */
#define ALT_I2C_CON_TX_EMPTY_CTL_MSB        8
/* The width in bits of the ALT_I2C_CON_TX_EMPTY_CTL register field. */
#define ALT_I2C_CON_TX_EMPTY_CTL_WIDTH      1
/* The mask used to set the ALT_I2C_CON_TX_EMPTY_CTL register field value. */
#define ALT_I2C_CON_TX_EMPTY_CTL_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_CON_TX_EMPTY_CTL register field value. */
#define ALT_I2C_CON_TX_EMPTY_CTL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_CON_TX_EMPTY_CTL register field. */
#define ALT_I2C_CON_TX_EMPTY_CTL_RESET      0x0
/* Extracts the ALT_I2C_CON_TX_EMPTY_CTL field value from a register. */
#define ALT_I2C_CON_TX_EMPTY_CTL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_CON_TX_EMPTY_CTL register field value suitable for setting the register. */
#define ALT_I2C_CON_TX_EMPTY_CTL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : rx_fifo_full_hld_ctrl
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
 * IC_RX_FULL_HLD_BUS_EN configuration parameter is set to 1.
 * 
 * If IC_RX_FULL_HLD_BUS_EN = 0, then this bit is read-only.
 * 
 * If IC_RX_FULL_HLD_BUS_EN = 1, then this bit can be read or write.
 * 
 * Reset value: 0x0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL register field. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL register field. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_MSB        9
/* The width in bits of the ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL register field. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_WIDTH      1
/* The mask used to set the ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL register field value. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL register field value. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL register field. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_RESET      0x0
/* Extracts the ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL field value from a register. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL register field value suitable for setting the register. */
#define ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : rsvd_ic_con_31to10
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_CON_RSVD_IC_CON_31TO10 register field. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_CON_RSVD_IC_CON_31TO10 register field. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_MSB        31
/* The width in bits of the ALT_I2C_CON_RSVD_IC_CON_31TO10 register field. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_WIDTH      22
/* The mask used to set the ALT_I2C_CON_RSVD_IC_CON_31TO10 register field value. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_SET_MSK    0xfffffc00
/* The mask used to clear the ALT_I2C_CON_RSVD_IC_CON_31TO10 register field value. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_CLR_MSK    0x000003ff
/* The reset value of the ALT_I2C_CON_RSVD_IC_CON_31TO10 register field. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_RESET      0x0
/* Extracts the ALT_I2C_CON_RSVD_IC_CON_31TO10 field value from a register. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_GET(value) (((value) & 0xfffffc00) >> 10)
/* Produces a ALT_I2C_CON_RSVD_IC_CON_31TO10 register field value suitable for setting the register. */
#define ALT_I2C_CON_RSVD_IC_CON_31TO10_SET(value) (((value) << 10) & 0xfffffc00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CON.
 */
struct ALT_I2C_CON_s
{
    uint32_t        master_mode           :  1;  /* ALT_I2C_CON_MST_MOD */
    uint32_t        speed                 :  2;  /* ALT_I2C_CON_SPEED */
    uint32_t        ic_10bitaddr_slave    :  1;  /* ALT_I2C_CON_IC_10BITADDR_SLV */
    const uint32_t  ic_10bitaddr_master   :  1;  /* ALT_I2C_CON_IC_10BITADDR_MST */
    uint32_t        ic_restart_en         :  1;  /* ALT_I2C_CON_IC_RESTART_EN */
    uint32_t        ic_slave_disable      :  1;  /* ALT_I2C_CON_IC_SLV_DIS */
    uint32_t        stop_det_ifaddressed  :  1;  /* ALT_I2C_CON_STOP_DET_IFADDRED */
    uint32_t        tx_empty_ctrl         :  1;  /* ALT_I2C_CON_TX_EMPTY_CTL */
    uint32_t        rx_fifo_full_hld_ctrl :  1;  /* ALT_I2C_CON_RX_FIFO_FULL_HLD_CTL */
    const uint32_t  rsvd_ic_con_31to10    : 22;  /* ALT_I2C_CON_RSVD_IC_CON_31TO10 */
};

/* The typedef declaration for register ALT_I2C_CON. */
typedef volatile struct ALT_I2C_CON_s  ALT_I2C_CON_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CON register. */
#define ALT_I2C_CON_RESET       0x0000007d
/* The byte offset of the ALT_I2C_CON register from the beginning of the component. */
#define ALT_I2C_CON_OFST        0x0
/* The address of the ALT_I2C_CON register. */
#define ALT_I2C_CON_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CON_OFST))

/*
 * Register : ic_tar
 * 
 * Name: I2C Target Address Register
 * 
 * Size: 12 bits or 13 bits; 13 bits only when I2C_DYNAMIC_TAR_UPDATE = 1
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
 * :--------|:-------|:------|:-----------------------------
 *  [9:0]   | RW     | 0x55  | ALT_I2C_TAR_IC_TAR          
 *  [10]    | RW     | 0x0   | ALT_I2C_TAR_GC_OR_START     
 *  [11]    | RW     | 0x0   | ALT_I2C_TAR_SPECIAL         
 *  [12]    | RW     | 0x1   | ALT_I2C_TAR_IC_10BITADDR_MST
 *  [31:13] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : ic_tar
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_TAR_IC_TAR register field. */
#define ALT_I2C_TAR_IC_TAR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_TAR_IC_TAR register field. */
#define ALT_I2C_TAR_IC_TAR_MSB        9
/* The width in bits of the ALT_I2C_TAR_IC_TAR register field. */
#define ALT_I2C_TAR_IC_TAR_WIDTH      10
/* The mask used to set the ALT_I2C_TAR_IC_TAR register field value. */
#define ALT_I2C_TAR_IC_TAR_SET_MSK    0x000003ff
/* The mask used to clear the ALT_I2C_TAR_IC_TAR register field value. */
#define ALT_I2C_TAR_IC_TAR_CLR_MSK    0xfffffc00
/* The reset value of the ALT_I2C_TAR_IC_TAR register field. */
#define ALT_I2C_TAR_IC_TAR_RESET      0x55
/* Extracts the ALT_I2C_TAR_IC_TAR field value from a register. */
#define ALT_I2C_TAR_IC_TAR_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_I2C_TAR_IC_TAR register field value suitable for setting the register. */
#define ALT_I2C_TAR_IC_TAR_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : gc_or_start
 * 
 * If bit 11 (SPECIAL) is set to 1, then this bit indicates whether a
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
 *  Enum                                | Value | Description 
 * :------------------------------------|:------|:-------------
 *  ALT_I2C_TAR_GC_OR_START_E_GENCALL   | 0x0   | General Call
 *  ALT_I2C_TAR_GC_OR_START_E_STARTBYTE | 0x1   | START Byte  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_TAR_GC_OR_START
 * 
 * General Call
 */
#define ALT_I2C_TAR_GC_OR_START_E_GENCALL   0x0
/*
 * Enumerated value for register field ALT_I2C_TAR_GC_OR_START
 * 
 * START Byte
 */
#define ALT_I2C_TAR_GC_OR_START_E_STARTBYTE 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_TAR_GC_OR_START register field. */
#define ALT_I2C_TAR_GC_OR_START_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_TAR_GC_OR_START register field. */
#define ALT_I2C_TAR_GC_OR_START_MSB        10
/* The width in bits of the ALT_I2C_TAR_GC_OR_START register field. */
#define ALT_I2C_TAR_GC_OR_START_WIDTH      1
/* The mask used to set the ALT_I2C_TAR_GC_OR_START register field value. */
#define ALT_I2C_TAR_GC_OR_START_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_TAR_GC_OR_START register field value. */
#define ALT_I2C_TAR_GC_OR_START_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_TAR_GC_OR_START register field. */
#define ALT_I2C_TAR_GC_OR_START_RESET      0x0
/* Extracts the ALT_I2C_TAR_GC_OR_START field value from a register. */
#define ALT_I2C_TAR_GC_OR_START_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_TAR_GC_OR_START register field value suitable for setting the register. */
#define ALT_I2C_TAR_GC_OR_START_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : special
 * 
 * This bit indicates whether software performs a General Call or
 * 
 * START BYTE command.
 * 
 * 0: ignore bit 10 GC_OR_START and use IC_TAR normally
 * 
 * 1: perform special I2C command as specified in GC_OR_START
 * 
 * bit
 * 
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                                
 * :--------------------------------|:------|:--------------------------------------------
 *  ALT_I2C_TAR_SPECIAL_E_GENCALL   | 0x0   | Ignore bit 10 gc_or_start and use ic_tar   
 * :                                |       | normally                                   
 *  ALT_I2C_TAR_SPECIAL_E_STARTBYTE | 0x1   | Perform special I2C command as specified in
 * :                                |       | gc_or_start                                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_TAR_SPECIAL
 * 
 * Ignore bit 10 gc_or_start and use ic_tar normally
 */
#define ALT_I2C_TAR_SPECIAL_E_GENCALL   0x0
/*
 * Enumerated value for register field ALT_I2C_TAR_SPECIAL
 * 
 * Perform special I2C command as specified in gc_or_start
 */
#define ALT_I2C_TAR_SPECIAL_E_STARTBYTE 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_TAR_SPECIAL register field. */
#define ALT_I2C_TAR_SPECIAL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_TAR_SPECIAL register field. */
#define ALT_I2C_TAR_SPECIAL_MSB        11
/* The width in bits of the ALT_I2C_TAR_SPECIAL register field. */
#define ALT_I2C_TAR_SPECIAL_WIDTH      1
/* The mask used to set the ALT_I2C_TAR_SPECIAL register field value. */
#define ALT_I2C_TAR_SPECIAL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_TAR_SPECIAL register field value. */
#define ALT_I2C_TAR_SPECIAL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_TAR_SPECIAL register field. */
#define ALT_I2C_TAR_SPECIAL_RESET      0x0
/* Extracts the ALT_I2C_TAR_SPECIAL field value from a register. */
#define ALT_I2C_TAR_SPECIAL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_TAR_SPECIAL register field value suitable for setting the register. */
#define ALT_I2C_TAR_SPECIAL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : ic_10bitaddr_master
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
 *  Enum                                   | Value | Description          
 * :---------------------------------------|:------|:----------------------
 *  ALT_I2C_TAR_IC_10BITADDR_MST_E_START7  | 0x0   | Master Address, 7bit 
 *  ALT_I2C_TAR_IC_10BITADDR_MST_E_START10 | 0x1   | Master Address, 10bit
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_TAR_IC_10BITADDR_MST
 * 
 * Master Address, 7bit
 */
#define ALT_I2C_TAR_IC_10BITADDR_MST_E_START7   0x0
/*
 * Enumerated value for register field ALT_I2C_TAR_IC_10BITADDR_MST
 * 
 * Master Address, 10bit
 */
#define ALT_I2C_TAR_IC_10BITADDR_MST_E_START10  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_TAR_IC_10BITADDR_MST register field. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_TAR_IC_10BITADDR_MST register field. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_MSB        12
/* The width in bits of the ALT_I2C_TAR_IC_10BITADDR_MST register field. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_WIDTH      1
/* The mask used to set the ALT_I2C_TAR_IC_10BITADDR_MST register field value. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_TAR_IC_10BITADDR_MST register field value. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_TAR_IC_10BITADDR_MST register field. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_RESET      0x1
/* Extracts the ALT_I2C_TAR_IC_10BITADDR_MST field value from a register. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_TAR_IC_10BITADDR_MST register field value suitable for setting the register. */
#define ALT_I2C_TAR_IC_10BITADDR_MST_SET(value) (((value) << 12) & 0x00001000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_TAR.
 */
struct ALT_I2C_TAR_s
{
    uint32_t  ic_tar              : 10;  /* ALT_I2C_TAR_IC_TAR */
    uint32_t  gc_or_start         :  1;  /* ALT_I2C_TAR_GC_OR_START */
    uint32_t  special             :  1;  /* ALT_I2C_TAR_SPECIAL */
    uint32_t  ic_10bitaddr_master :  1;  /* ALT_I2C_TAR_IC_10BITADDR_MST */
    uint32_t                      : 19;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_TAR. */
typedef volatile struct ALT_I2C_TAR_s  ALT_I2C_TAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_TAR register. */
#define ALT_I2C_TAR_RESET       0x00001055
/* The byte offset of the ALT_I2C_TAR register from the beginning of the component. */
#define ALT_I2C_TAR_OFST        0x4
/* The address of the ALT_I2C_TAR register. */
#define ALT_I2C_TAR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_TAR_OFST))

/*
 * Register : ic_sar
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
 * :--------|:-------|:------|:-------------------
 *  [9:0]   | RW     | 0x55  | ALT_I2C_SAR_IC_SAR
 *  [31:10] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : ic_sar
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_SAR_IC_SAR register field. */
#define ALT_I2C_SAR_IC_SAR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_SAR_IC_SAR register field. */
#define ALT_I2C_SAR_IC_SAR_MSB        9
/* The width in bits of the ALT_I2C_SAR_IC_SAR register field. */
#define ALT_I2C_SAR_IC_SAR_WIDTH      10
/* The mask used to set the ALT_I2C_SAR_IC_SAR register field value. */
#define ALT_I2C_SAR_IC_SAR_SET_MSK    0x000003ff
/* The mask used to clear the ALT_I2C_SAR_IC_SAR register field value. */
#define ALT_I2C_SAR_IC_SAR_CLR_MSK    0xfffffc00
/* The reset value of the ALT_I2C_SAR_IC_SAR register field. */
#define ALT_I2C_SAR_IC_SAR_RESET      0x55
/* Extracts the ALT_I2C_SAR_IC_SAR field value from a register. */
#define ALT_I2C_SAR_IC_SAR_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_I2C_SAR_IC_SAR register field value suitable for setting the register. */
#define ALT_I2C_SAR_IC_SAR_SET(value) (((value) << 0) & 0x000003ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_SAR.
 */
struct ALT_I2C_SAR_s
{
    uint32_t  ic_sar : 10;  /* ALT_I2C_SAR_IC_SAR */
    uint32_t         : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_SAR. */
typedef volatile struct ALT_I2C_SAR_s  ALT_I2C_SAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_SAR register. */
#define ALT_I2C_SAR_RESET       0x00000055
/* The byte offset of the ALT_I2C_SAR register from the beginning of the component. */
#define ALT_I2C_SAR_OFST        0x8
/* The address of the ALT_I2C_SAR register. */
#define ALT_I2C_SAR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_SAR_OFST))

/*
 * Register : ic_data_cmd
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
 * When IC_EMPTYFIFO_HOLD_MASTER_EN=1 - 11 bits (writes), 8 bits (read)
 * 
 * When IC_EMPTYFIFO_HOLD_MASTER_EN=0 - 9 bits (writes), 8 bits (read)
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
 * :--------|:-------|:------|:-------------------------
 *  [7:0]   | RW     | 0x0   | ALT_I2C_DATA_CMD_DAT    
 *  [8]     | W      | 0x0   | ALT_I2C_DATA_CMD_CMD    
 *  [9]     | W      | 0x0   | ALT_I2C_DATA_CMD_STOP   
 *  [10]    | W      | 0x0   | ALT_I2C_DATA_CMD_RESTART
 *  [31:11] | ???    | 0x0   | *UNDEFINED*             
 * 
 */
/*
 * Field : dat
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_DATA_CMD_DAT register field. */
#define ALT_I2C_DATA_CMD_DAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_DATA_CMD_DAT register field. */
#define ALT_I2C_DATA_CMD_DAT_MSB        7
/* The width in bits of the ALT_I2C_DATA_CMD_DAT register field. */
#define ALT_I2C_DATA_CMD_DAT_WIDTH      8
/* The mask used to set the ALT_I2C_DATA_CMD_DAT register field value. */
#define ALT_I2C_DATA_CMD_DAT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_DATA_CMD_DAT register field value. */
#define ALT_I2C_DATA_CMD_DAT_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_DATA_CMD_DAT register field. */
#define ALT_I2C_DATA_CMD_DAT_RESET      0x0
/* Extracts the ALT_I2C_DATA_CMD_DAT field value from a register. */
#define ALT_I2C_DATA_CMD_DAT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_DATA_CMD_DAT register field value suitable for setting the register. */
#define ALT_I2C_DATA_CMD_DAT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : cmd
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
 * Reset value: 0x0
 * 
 * Field Enumeration Values:
 * 
 *  Enum                      | Value | Description 
 * :--------------------------|:------|:-------------
 *  ALT_I2C_DATA_CMD_CMD_E_WR | 0x0   | Master Write
 *  ALT_I2C_DATA_CMD_CMD_E_RD | 0x1   | Master Read 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_DATA_CMD_CMD
 * 
 * Master Write
 */
#define ALT_I2C_DATA_CMD_CMD_E_WR   0x0
/*
 * Enumerated value for register field ALT_I2C_DATA_CMD_CMD
 * 
 * Master Read
 */
#define ALT_I2C_DATA_CMD_CMD_E_RD   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_DATA_CMD_CMD register field. */
#define ALT_I2C_DATA_CMD_CMD_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_DATA_CMD_CMD register field. */
#define ALT_I2C_DATA_CMD_CMD_MSB        8
/* The width in bits of the ALT_I2C_DATA_CMD_CMD register field. */
#define ALT_I2C_DATA_CMD_CMD_WIDTH      1
/* The mask used to set the ALT_I2C_DATA_CMD_CMD register field value. */
#define ALT_I2C_DATA_CMD_CMD_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_DATA_CMD_CMD register field value. */
#define ALT_I2C_DATA_CMD_CMD_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_DATA_CMD_CMD register field. */
#define ALT_I2C_DATA_CMD_CMD_RESET      0x0
/* Extracts the ALT_I2C_DATA_CMD_CMD field value from a register. */
#define ALT_I2C_DATA_CMD_CMD_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_DATA_CMD_CMD register field value suitable for setting the register. */
#define ALT_I2C_DATA_CMD_CMD_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : stop
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_DATA_CMD_STOP register field. */
#define ALT_I2C_DATA_CMD_STOP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_DATA_CMD_STOP register field. */
#define ALT_I2C_DATA_CMD_STOP_MSB        9
/* The width in bits of the ALT_I2C_DATA_CMD_STOP register field. */
#define ALT_I2C_DATA_CMD_STOP_WIDTH      1
/* The mask used to set the ALT_I2C_DATA_CMD_STOP register field value. */
#define ALT_I2C_DATA_CMD_STOP_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_DATA_CMD_STOP register field value. */
#define ALT_I2C_DATA_CMD_STOP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_DATA_CMD_STOP register field. */
#define ALT_I2C_DATA_CMD_STOP_RESET      0x0
/* Extracts the ALT_I2C_DATA_CMD_STOP field value from a register. */
#define ALT_I2C_DATA_CMD_STOP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_DATA_CMD_STOP register field value suitable for setting the register. */
#define ALT_I2C_DATA_CMD_STOP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : restart
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_DATA_CMD_RESTART register field. */
#define ALT_I2C_DATA_CMD_RESTART_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_DATA_CMD_RESTART register field. */
#define ALT_I2C_DATA_CMD_RESTART_MSB        10
/* The width in bits of the ALT_I2C_DATA_CMD_RESTART register field. */
#define ALT_I2C_DATA_CMD_RESTART_WIDTH      1
/* The mask used to set the ALT_I2C_DATA_CMD_RESTART register field value. */
#define ALT_I2C_DATA_CMD_RESTART_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_DATA_CMD_RESTART register field value. */
#define ALT_I2C_DATA_CMD_RESTART_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_DATA_CMD_RESTART register field. */
#define ALT_I2C_DATA_CMD_RESTART_RESET      0x0
/* Extracts the ALT_I2C_DATA_CMD_RESTART field value from a register. */
#define ALT_I2C_DATA_CMD_RESTART_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_DATA_CMD_RESTART register field value suitable for setting the register. */
#define ALT_I2C_DATA_CMD_RESTART_SET(value) (((value) << 10) & 0x00000400)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_DATA_CMD.
 */
struct ALT_I2C_DATA_CMD_s
{
    uint32_t  dat     :  8;  /* ALT_I2C_DATA_CMD_DAT */
    uint32_t  cmd     :  1;  /* ALT_I2C_DATA_CMD_CMD */
    uint32_t  stop    :  1;  /* ALT_I2C_DATA_CMD_STOP */
    uint32_t  restart :  1;  /* ALT_I2C_DATA_CMD_RESTART */
    uint32_t          : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_DATA_CMD. */
typedef volatile struct ALT_I2C_DATA_CMD_s  ALT_I2C_DATA_CMD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_DATA_CMD register. */
#define ALT_I2C_DATA_CMD_RESET       0x00000000
/* The byte offset of the ALT_I2C_DATA_CMD register from the beginning of the component. */
#define ALT_I2C_DATA_CMD_OFST        0x10
/* The address of the ALT_I2C_DATA_CMD register. */
#define ALT_I2C_DATA_CMD_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_DATA_CMD_OFST))

/*
 * Register : ic_ss_scl_hcnt
 * 
 * Name: Standard Speed I2C Clock SCL High Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x14
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [15:0]  | RW     | 0x190 | ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ic_ss_scl_hcnt
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_MSB        15
/* The width in bits of the ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_WIDTH      16
/* The mask used to set the ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT register field value. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT register field value. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT register field. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_RESET      0x190
/* Extracts the ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT field value from a register. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT register field value suitable for setting the register. */
#define ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_SS_SCL_HCNT.
 */
struct ALT_I2C_SS_SCL_HCNT_s
{
    uint32_t  ic_ss_scl_hcnt : 16;  /* ALT_I2C_SS_SCL_HCNT_IC_SS_SCL_HCNT */
    uint32_t                 : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_SS_SCL_HCNT. */
typedef volatile struct ALT_I2C_SS_SCL_HCNT_s  ALT_I2C_SS_SCL_HCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_SS_SCL_HCNT register. */
#define ALT_I2C_SS_SCL_HCNT_RESET       0x00000190
/* The byte offset of the ALT_I2C_SS_SCL_HCNT register from the beginning of the component. */
#define ALT_I2C_SS_SCL_HCNT_OFST        0x14
/* The address of the ALT_I2C_SS_SCL_HCNT register. */
#define ALT_I2C_SS_SCL_HCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_SS_SCL_HCNT_OFST))

/*
 * Register : ic_ss_scl_lcnt
 * 
 * Name: Standard Speed I2C Clock SCL Low Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x18
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [15:0]  | RW     | 0x1d6 | ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ic_ss_scl_lcnt
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_MSB        15
/* The width in bits of the ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_WIDTH      16
/* The mask used to set the ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT register field value. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT register field value. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT register field. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_RESET      0x1d6
/* Extracts the ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT field value from a register. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT register field value suitable for setting the register. */
#define ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_SS_SCL_LCNT.
 */
struct ALT_I2C_SS_SCL_LCNT_s
{
    uint32_t  ic_ss_scl_lcnt : 16;  /* ALT_I2C_SS_SCL_LCNT_IC_SS_SCL_LCNT */
    uint32_t                 : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_SS_SCL_LCNT. */
typedef volatile struct ALT_I2C_SS_SCL_LCNT_s  ALT_I2C_SS_SCL_LCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_SS_SCL_LCNT register. */
#define ALT_I2C_SS_SCL_LCNT_RESET       0x000001d6
/* The byte offset of the ALT_I2C_SS_SCL_LCNT register from the beginning of the component. */
#define ALT_I2C_SS_SCL_LCNT_OFST        0x18
/* The address of the ALT_I2C_SS_SCL_LCNT register. */
#define ALT_I2C_SS_SCL_LCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_SS_SCL_LCNT_OFST))

/*
 * Register : ic_fs_scl_hcnt
 * 
 * Name: Fast Mode or Fast Mode Plus I2C Clock SCL High Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x1c
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [15:0]  | RW     | 0x3c  | ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ic_fs_scl_hcnt
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_MSB        15
/* The width in bits of the ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_WIDTH      16
/* The mask used to set the ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT register field value. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT register field value. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT register field. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_RESET      0x3c
/* Extracts the ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT field value from a register. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT register field value suitable for setting the register. */
#define ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_FS_SCL_HCNT.
 */
struct ALT_I2C_FS_SCL_HCNT_s
{
    uint32_t  ic_fs_scl_hcnt : 16;  /* ALT_I2C_FS_SCL_HCNT_IC_FS_SCL_HCNT */
    uint32_t                 : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_FS_SCL_HCNT. */
typedef volatile struct ALT_I2C_FS_SCL_HCNT_s  ALT_I2C_FS_SCL_HCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_FS_SCL_HCNT register. */
#define ALT_I2C_FS_SCL_HCNT_RESET       0x0000003c
/* The byte offset of the ALT_I2C_FS_SCL_HCNT register from the beginning of the component. */
#define ALT_I2C_FS_SCL_HCNT_OFST        0x1c
/* The address of the ALT_I2C_FS_SCL_HCNT register. */
#define ALT_I2C_FS_SCL_HCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_FS_SCL_HCNT_OFST))

/*
 * Register : ic_fs_scl_lcnt
 * 
 * Name: Fast Mode or Fast Mode Plus I2C Clock SCL Low Count Register
 * 
 * Size: 16 bits
 * 
 * Address Offset: 0x20
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [15:0]  | RW     | 0x82  | ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ic_fs_scl_lcnt
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_MSB        15
/* The width in bits of the ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_WIDTH      16
/* The mask used to set the ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT register field value. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT register field value. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT register field. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_RESET      0x82
/* Extracts the ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT field value from a register. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT register field value suitable for setting the register. */
#define ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_FS_SCL_LCNT.
 */
struct ALT_I2C_FS_SCL_LCNT_s
{
    uint32_t  ic_fs_scl_lcnt : 16;  /* ALT_I2C_FS_SCL_LCNT_IC_FS_SCL_LCNT */
    uint32_t                 : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_FS_SCL_LCNT. */
typedef volatile struct ALT_I2C_FS_SCL_LCNT_s  ALT_I2C_FS_SCL_LCNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_FS_SCL_LCNT register. */
#define ALT_I2C_FS_SCL_LCNT_RESET       0x00000082
/* The byte offset of the ALT_I2C_FS_SCL_LCNT register from the beginning of the component. */
#define ALT_I2C_FS_SCL_LCNT_OFST        0x20
/* The address of the ALT_I2C_FS_SCL_LCNT register. */
#define ALT_I2C_FS_SCL_LCNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_FS_SCL_LCNT_OFST))

/*
 * Register : ic_intr_stat
 * 
 * Name: I2C Interrupt Status Register
 * 
 * Size: 14 bits
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
 * :--------|:-------|:------|:--------------------------------
 *  [0]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_RX_UNDER   
 *  [1]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_RX_OVER    
 *  [2]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_RX_FULL    
 *  [3]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_TX_OVER    
 *  [4]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_TX_EMPTY   
 *  [5]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_RD_REQ     
 *  [6]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_TX_ABRT    
 *  [7]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_RX_DONE    
 *  [8]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_ACTIVITY   
 *  [9]     | R      | 0x0   | ALT_I2C_INTR_STAT_R_STOP_DET   
 *  [10]    | R      | 0x0   | ALT_I2C_INTR_STAT_R_START_DET  
 *  [11]    | R      | 0x0   | ALT_I2C_INTR_STAT_R_GEN_CALL   
 *  [12]    | R      | 0x0   | ALT_I2C_INTR_STAT_R_RESTART_DET
 *  [13]    | R      | 0x0   | ALT_I2C_INTR_STAT_R_MST_ON_HOLD
 *  [31:14] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : r_rx_under
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_RX_UNDER register field value. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_INTR_STAT_R_RX_UNDER register field value. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_INTR_STAT_R_RX_UNDER register field. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_RX_UNDER field value from a register. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_INTR_STAT_R_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : r_rx_over
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_MSB        1
/* The width in bits of the ALT_I2C_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_RX_OVER register field value. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_INTR_STAT_R_RX_OVER register field value. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_INTR_STAT_R_RX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_RX_OVER field value from a register. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_INTR_STAT_R_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_RX_OVER_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : r_rx_full
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_MSB        2
/* The width in bits of the ALT_I2C_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_RX_FULL register field value. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_INTR_STAT_R_RX_FULL register field value. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_INTR_STAT_R_RX_FULL register field. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_RX_FULL field value from a register. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_INTR_STAT_R_RX_FULL register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_RX_FULL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : r_tx_over
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_MSB        3
/* The width in bits of the ALT_I2C_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_TX_OVER register field value. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_INTR_STAT_R_TX_OVER register field value. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_INTR_STAT_R_TX_OVER register field. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_TX_OVER field value from a register. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_INTR_STAT_R_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_TX_OVER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : r_tx_empty
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_MSB        4
/* The width in bits of the ALT_I2C_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_TX_EMPTY register field value. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_INTR_STAT_R_TX_EMPTY register field value. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_INTR_STAT_R_TX_EMPTY register field. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_TX_EMPTY field value from a register. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_INTR_STAT_R_TX_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_TX_EMPTY_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : r_rd_req
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
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_MSB        5
/* The width in bits of the ALT_I2C_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_RD_REQ register field value. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_INTR_STAT_R_RD_REQ register field value. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_INTR_STAT_R_RD_REQ register field. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_RD_REQ field value from a register. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_INTR_STAT_R_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_RD_REQ_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : r_tx_abrt
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_MSB        6
/* The width in bits of the ALT_I2C_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_TX_ABRT register field value. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_INTR_STAT_R_TX_ABRT register field value. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_INTR_STAT_R_TX_ABRT register field. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_TX_ABRT field value from a register. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_INTR_STAT_R_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_TX_ABRT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : r_rx_done
 * 
 * When the DW_apb_i2c is acting as a slave-transmitter,
 * 
 * this bit is set to 1 if the master does not acknowledge
 * 
 * a transmitted byte. This occurs on the last byte of
 * 
 * the transmission, indicating that the transmission is done.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_MSB        7
/* The width in bits of the ALT_I2C_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_RX_DONE register field value. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_INTR_STAT_R_RX_DONE register field value. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_INTR_STAT_R_RX_DONE register field. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_RX_DONE field value from a register. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_INTR_STAT_R_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_RX_DONE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : r_activity
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_MSB        8
/* The width in bits of the ALT_I2C_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_ACTIVITY register field value. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_INTR_STAT_R_ACTIVITY register field value. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_INTR_STAT_R_ACTIVITY register field. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_ACTIVITY field value from a register. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_INTR_STAT_R_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_ACTIVITY_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : r_stop_det
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_MSB        9
/* The width in bits of the ALT_I2C_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_STOP_DET register field value. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_INTR_STAT_R_STOP_DET register field value. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_INTR_STAT_R_STOP_DET register field. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_STOP_DET field value from a register. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_INTR_STAT_R_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_STOP_DET_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : r_start_det
 * 
 * Indicates whether a START or RESTART condition has occurred on the I2C
 * 
 * interface regardless of whether DW_apb_i2c is operating in slave or master
 * 
 * mode.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_INTR_STAT_R_START_DET_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_INTR_STAT_R_START_DET_MSB        10
/* The width in bits of the ALT_I2C_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_INTR_STAT_R_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_START_DET register field value. */
#define ALT_I2C_INTR_STAT_R_START_DET_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_INTR_STAT_R_START_DET register field value. */
#define ALT_I2C_INTR_STAT_R_START_DET_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_INTR_STAT_R_START_DET register field. */
#define ALT_I2C_INTR_STAT_R_START_DET_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_START_DET field value from a register. */
#define ALT_I2C_INTR_STAT_R_START_DET_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_INTR_STAT_R_START_DET register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_START_DET_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : r_gen_call
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_MSB        11
/* The width in bits of the ALT_I2C_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_GEN_CALL register field value. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_INTR_STAT_R_GEN_CALL register field value. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_INTR_STAT_R_GEN_CALL register field. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_GEN_CALL field value from a register. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_INTR_STAT_R_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_GEN_CALL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : r_restart_det
 * 
 * Indicates a RESTART condition has occurred on the I2C
 * 
 * interface when DW_apb_i2c is operating in slave mode and addressed. This feature
 * is avaliable only when IC_SLV_RESTART_DET_EN is enabled.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_MSB        12
/* The width in bits of the ALT_I2C_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_RESTART_DET register field value. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_INTR_STAT_R_RESTART_DET register field value. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_INTR_STAT_R_RESTART_DET register field. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_RESTART_DET field value from a register. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_INTR_STAT_R_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_RESTART_DET_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : r_master_on_hold
 * 
 * Indicates whether master is holding the bus and TX FIFO is empty.
 * 
 * Enabled only when I2C_DYNAMIC_TAR_UPDATE=1 and IC_EMPTYFIFO_HOLD_MASTER_EN=1.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_STAT_R_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_STAT_R_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_MSB        13
/* The width in bits of the ALT_I2C_INTR_STAT_R_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_STAT_R_MST_ON_HOLD register field value. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_INTR_STAT_R_MST_ON_HOLD register field value. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_INTR_STAT_R_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_RESET      0x0
/* Extracts the ALT_I2C_INTR_STAT_R_MST_ON_HOLD field value from a register. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_INTR_STAT_R_MST_ON_HOLD register field value suitable for setting the register. */
#define ALT_I2C_INTR_STAT_R_MST_ON_HOLD_SET(value) (((value) << 13) & 0x00002000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_INTR_STAT.
 */
struct ALT_I2C_INTR_STAT_s
{
    const uint32_t  r_rx_under       :  1;  /* ALT_I2C_INTR_STAT_R_RX_UNDER */
    const uint32_t  r_rx_over        :  1;  /* ALT_I2C_INTR_STAT_R_RX_OVER */
    const uint32_t  r_rx_full        :  1;  /* ALT_I2C_INTR_STAT_R_RX_FULL */
    const uint32_t  r_tx_over        :  1;  /* ALT_I2C_INTR_STAT_R_TX_OVER */
    const uint32_t  r_tx_empty       :  1;  /* ALT_I2C_INTR_STAT_R_TX_EMPTY */
    const uint32_t  r_rd_req         :  1;  /* ALT_I2C_INTR_STAT_R_RD_REQ */
    const uint32_t  r_tx_abrt        :  1;  /* ALT_I2C_INTR_STAT_R_TX_ABRT */
    const uint32_t  r_rx_done        :  1;  /* ALT_I2C_INTR_STAT_R_RX_DONE */
    const uint32_t  r_activity       :  1;  /* ALT_I2C_INTR_STAT_R_ACTIVITY */
    const uint32_t  r_stop_det       :  1;  /* ALT_I2C_INTR_STAT_R_STOP_DET */
    const uint32_t  r_start_det      :  1;  /* ALT_I2C_INTR_STAT_R_START_DET */
    const uint32_t  r_gen_call       :  1;  /* ALT_I2C_INTR_STAT_R_GEN_CALL */
    const uint32_t  r_restart_det    :  1;  /* ALT_I2C_INTR_STAT_R_RESTART_DET */
    const uint32_t  r_master_on_hold :  1;  /* ALT_I2C_INTR_STAT_R_MST_ON_HOLD */
    uint32_t                         : 18;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_INTR_STAT. */
typedef volatile struct ALT_I2C_INTR_STAT_s  ALT_I2C_INTR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_INTR_STAT register. */
#define ALT_I2C_INTR_STAT_RESET       0x00000000
/* The byte offset of the ALT_I2C_INTR_STAT register from the beginning of the component. */
#define ALT_I2C_INTR_STAT_OFST        0x2c
/* The address of the ALT_I2C_INTR_STAT register. */
#define ALT_I2C_INTR_STAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_INTR_STAT_OFST))

/*
 * Register : ic_intr_mask
 * 
 * Name: I2C Interrupt Mask Register
 * 
 * Size: 14 bits
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
 * These bits mask their corresponding interrupt status bits.
 * 
 * They are active high; a value of 0 prevents a bit from
 * 
 * generating an interrupt.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [0]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_RX_UNDER   
 *  [1]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_RX_OVER    
 *  [2]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_RX_FULL    
 *  [3]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_TX_OVER    
 *  [4]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_TX_EMPTY   
 *  [5]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_RD_REQ     
 *  [6]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_TX_ABRT    
 *  [7]     | RW     | 0x1   | ALT_I2C_INTR_MSK_M_RX_DONE    
 *  [8]     | RW     | 0x0   | ALT_I2C_INTR_MSK_M_ACTIVITY   
 *  [9]     | RW     | 0x0   | ALT_I2C_INTR_MSK_M_STOP_DET   
 *  [10]    | RW     | 0x0   | ALT_I2C_INTR_MSK_M_START_DET  
 *  [11]    | RW     | 0x1   | ALT_I2C_INTR_MSK_M_GEN_CALL   
 *  [12]    | RW     | 0x0   | ALT_I2C_INTR_MSK_M_RESTART_DET
 *  [13]    | RW     | 0x0   | ALT_I2C_INTR_MSK_M_MST_ON_HOLD
 *  [31:14] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : m_rx_under
 * 
 * This bit masks the R_RX_UNDER interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_RX_UNDER register field. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_RX_UNDER register field. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_INTR_MSK_M_RX_UNDER register field. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_RX_UNDER register field value. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_INTR_MSK_M_RX_UNDER register field value. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_INTR_MSK_M_RX_UNDER register field. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_RX_UNDER field value from a register. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_INTR_MSK_M_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : m_rx_over
 * 
 * This bit masks the R_RX_OVER interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_RX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_RX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_MSB        1
/* The width in bits of the ALT_I2C_INTR_MSK_M_RX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_RX_OVER register field value. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_INTR_MSK_M_RX_OVER register field value. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_INTR_MSK_M_RX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_RX_OVER field value from a register. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_INTR_MSK_M_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_RX_OVER_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : m_rx_full
 * 
 * This bit masks the R_RX_FULL interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_RX_FULL register field. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_RX_FULL register field. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_MSB        2
/* The width in bits of the ALT_I2C_INTR_MSK_M_RX_FULL register field. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_RX_FULL register field value. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_INTR_MSK_M_RX_FULL register field value. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_INTR_MSK_M_RX_FULL register field. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_RX_FULL field value from a register. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_INTR_MSK_M_RX_FULL register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_RX_FULL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : m_tx_over
 * 
 * This bit masks the R_TX_OVER interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_TX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_TX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_MSB        3
/* The width in bits of the ALT_I2C_INTR_MSK_M_TX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_TX_OVER register field value. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_INTR_MSK_M_TX_OVER register field value. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_INTR_MSK_M_TX_OVER register field. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_TX_OVER field value from a register. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_INTR_MSK_M_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_TX_OVER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : m_tx_empty
 * 
 * This bit masks the R_TX_EMPTY interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_TX_EMPTY register field. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_TX_EMPTY register field. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_MSB        4
/* The width in bits of the ALT_I2C_INTR_MSK_M_TX_EMPTY register field. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_TX_EMPTY register field value. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_INTR_MSK_M_TX_EMPTY register field value. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_INTR_MSK_M_TX_EMPTY register field. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_TX_EMPTY field value from a register. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_INTR_MSK_M_TX_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_TX_EMPTY_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : m_rd_req
 * 
 * This bit masks the R_RD_REQ interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_RD_REQ register field. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_RD_REQ register field. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_MSB        5
/* The width in bits of the ALT_I2C_INTR_MSK_M_RD_REQ register field. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_RD_REQ register field value. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_INTR_MSK_M_RD_REQ register field value. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_INTR_MSK_M_RD_REQ register field. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_RD_REQ field value from a register. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_INTR_MSK_M_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_RD_REQ_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : m_tx_abrt
 * 
 * This bit masks the R_TX_ABRT interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_TX_ABRT register field. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_TX_ABRT register field. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_MSB        6
/* The width in bits of the ALT_I2C_INTR_MSK_M_TX_ABRT register field. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_TX_ABRT register field value. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_INTR_MSK_M_TX_ABRT register field value. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_INTR_MSK_M_TX_ABRT register field. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_TX_ABRT field value from a register. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_INTR_MSK_M_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_TX_ABRT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : m_rx_done
 * 
 * This bit masks the R_RX_DONE interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_RX_DONE register field. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_RX_DONE register field. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_MSB        7
/* The width in bits of the ALT_I2C_INTR_MSK_M_RX_DONE register field. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_RX_DONE register field value. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_INTR_MSK_M_RX_DONE register field value. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_INTR_MSK_M_RX_DONE register field. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_RX_DONE field value from a register. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_INTR_MSK_M_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_RX_DONE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : m_activity
 * 
 * This bit masks the R_ACTIVITY interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_ACTIVITY register field. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_ACTIVITY register field. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_MSB        8
/* The width in bits of the ALT_I2C_INTR_MSK_M_ACTIVITY register field. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_ACTIVITY register field value. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_INTR_MSK_M_ACTIVITY register field value. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_INTR_MSK_M_ACTIVITY register field. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_INTR_MSK_M_ACTIVITY field value from a register. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_INTR_MSK_M_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_ACTIVITY_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : m_stop_det
 * 
 * This bit masks the R_STOP_DET interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_STOP_DET register field. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_STOP_DET register field. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_MSB        9
/* The width in bits of the ALT_I2C_INTR_MSK_M_STOP_DET register field. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_STOP_DET register field value. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_INTR_MSK_M_STOP_DET register field value. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_INTR_MSK_M_STOP_DET register field. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_INTR_MSK_M_STOP_DET field value from a register. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_INTR_MSK_M_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_STOP_DET_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : m_start_det
 * 
 * This bit masks the R_START_DET interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_START_DET register field. */
#define ALT_I2C_INTR_MSK_M_START_DET_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_START_DET register field. */
#define ALT_I2C_INTR_MSK_M_START_DET_MSB        10
/* The width in bits of the ALT_I2C_INTR_MSK_M_START_DET register field. */
#define ALT_I2C_INTR_MSK_M_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_START_DET register field value. */
#define ALT_I2C_INTR_MSK_M_START_DET_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_INTR_MSK_M_START_DET register field value. */
#define ALT_I2C_INTR_MSK_M_START_DET_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_INTR_MSK_M_START_DET register field. */
#define ALT_I2C_INTR_MSK_M_START_DET_RESET      0x0
/* Extracts the ALT_I2C_INTR_MSK_M_START_DET field value from a register. */
#define ALT_I2C_INTR_MSK_M_START_DET_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_INTR_MSK_M_START_DET register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_START_DET_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : m_gen_call
 * 
 * This bit masks the R_GEN_CALL interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_GEN_CALL register field. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_GEN_CALL register field. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_MSB        11
/* The width in bits of the ALT_I2C_INTR_MSK_M_GEN_CALL register field. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_GEN_CALL register field value. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_INTR_MSK_M_GEN_CALL register field value. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_INTR_MSK_M_GEN_CALL register field. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_RESET      0x1
/* Extracts the ALT_I2C_INTR_MSK_M_GEN_CALL field value from a register. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_INTR_MSK_M_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_GEN_CALL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : m_restart_det
 * 
 * This bit masks the R_RESTART_DET interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_RESTART_DET register field. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_RESTART_DET register field. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_MSB        12
/* The width in bits of the ALT_I2C_INTR_MSK_M_RESTART_DET register field. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_RESTART_DET register field value. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_INTR_MSK_M_RESTART_DET register field value. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_INTR_MSK_M_RESTART_DET register field. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_INTR_MSK_M_RESTART_DET field value from a register. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_INTR_MSK_M_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_RESTART_DET_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : m_master_on_hold
 * 
 * This bit masks the R_MASTER_ON_HOLD interrupt in IC_INTR_STAT register.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_INTR_MSK_M_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_INTR_MSK_M_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_MSB        13
/* The width in bits of the ALT_I2C_INTR_MSK_M_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_WIDTH      1
/* The mask used to set the ALT_I2C_INTR_MSK_M_MST_ON_HOLD register field value. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_INTR_MSK_M_MST_ON_HOLD register field value. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_INTR_MSK_M_MST_ON_HOLD register field. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_RESET      0x0
/* Extracts the ALT_I2C_INTR_MSK_M_MST_ON_HOLD field value from a register. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_INTR_MSK_M_MST_ON_HOLD register field value suitable for setting the register. */
#define ALT_I2C_INTR_MSK_M_MST_ON_HOLD_SET(value) (((value) << 13) & 0x00002000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_INTR_MSK.
 */
struct ALT_I2C_INTR_MSK_s
{
    uint32_t  m_rx_under       :  1;  /* ALT_I2C_INTR_MSK_M_RX_UNDER */
    uint32_t  m_rx_over        :  1;  /* ALT_I2C_INTR_MSK_M_RX_OVER */
    uint32_t  m_rx_full        :  1;  /* ALT_I2C_INTR_MSK_M_RX_FULL */
    uint32_t  m_tx_over        :  1;  /* ALT_I2C_INTR_MSK_M_TX_OVER */
    uint32_t  m_tx_empty       :  1;  /* ALT_I2C_INTR_MSK_M_TX_EMPTY */
    uint32_t  m_rd_req         :  1;  /* ALT_I2C_INTR_MSK_M_RD_REQ */
    uint32_t  m_tx_abrt        :  1;  /* ALT_I2C_INTR_MSK_M_TX_ABRT */
    uint32_t  m_rx_done        :  1;  /* ALT_I2C_INTR_MSK_M_RX_DONE */
    uint32_t  m_activity       :  1;  /* ALT_I2C_INTR_MSK_M_ACTIVITY */
    uint32_t  m_stop_det       :  1;  /* ALT_I2C_INTR_MSK_M_STOP_DET */
    uint32_t  m_start_det      :  1;  /* ALT_I2C_INTR_MSK_M_START_DET */
    uint32_t  m_gen_call       :  1;  /* ALT_I2C_INTR_MSK_M_GEN_CALL */
    uint32_t  m_restart_det    :  1;  /* ALT_I2C_INTR_MSK_M_RESTART_DET */
    uint32_t  m_master_on_hold :  1;  /* ALT_I2C_INTR_MSK_M_MST_ON_HOLD */
    uint32_t                   : 18;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_INTR_MSK. */
typedef volatile struct ALT_I2C_INTR_MSK_s  ALT_I2C_INTR_MSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_INTR_MSK register. */
#define ALT_I2C_INTR_MSK_RESET       0x000008ff
/* The byte offset of the ALT_I2C_INTR_MSK register from the beginning of the component. */
#define ALT_I2C_INTR_MSK_OFST        0x30
/* The address of the ALT_I2C_INTR_MSK register. */
#define ALT_I2C_INTR_MSK_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_INTR_MSK_OFST))

/*
 * Register : ic_raw_intr_stat
 * 
 * Name: I2C Raw Interrupt Status Register
 * 
 * Size: 14 bits
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
 * :--------|:-------|:------|:----------------------------------
 *  [0]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_RX_UNDER   
 *  [1]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_RX_OVER    
 *  [2]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_RX_FULL    
 *  [3]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_TX_OVER    
 *  [4]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_TX_EMPTY   
 *  [5]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_RD_REQ     
 *  [6]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_TX_ABRT    
 *  [7]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_RX_DONE    
 *  [8]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_ACTIVITY   
 *  [9]     | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_STOP_DET   
 *  [10]    | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_START_DET  
 *  [11]    | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_GEN_CALL   
 *  [12]    | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_RESTART_DET
 *  [13]    | R      | 0x0   | ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD
 *  [31:14] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : rx_under
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_RX_UNDER register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_RX_UNDER register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_RAW_INTR_STAT_RX_UNDER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_RX_UNDER field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_RAW_INTR_STAT_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : rx_over
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_MSB        1
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_RX_OVER register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_RX_OVER register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_RAW_INTR_STAT_RX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_RX_OVER field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_RAW_INTR_STAT_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_RX_OVER_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : rx_full
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_MSB        2
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_RX_FULL register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_RX_FULL register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_RAW_INTR_STAT_RX_FULL register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_RX_FULL field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_RAW_INTR_STAT_RX_FULL register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_RX_FULL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : tx_over
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_MSB        3
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_TX_OVER register field value. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_TX_OVER register field value. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_RAW_INTR_STAT_TX_OVER register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_TX_OVER field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_RAW_INTR_STAT_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_TX_OVER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : tx_empty
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_MSB        4
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_TX_EMPTY register field value. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_TX_EMPTY register field value. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_RAW_INTR_STAT_TX_EMPTY register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_TX_EMPTY field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_RAW_INTR_STAT_TX_EMPTY register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_TX_EMPTY_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : rd_req
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
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_MSB        5
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_RD_REQ register field value. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_RD_REQ register field value. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_RAW_INTR_STAT_RD_REQ register field. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_RD_REQ field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_RAW_INTR_STAT_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_RD_REQ_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : tx_abrt
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_MSB        6
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_TX_ABRT register field value. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_TX_ABRT register field value. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_RAW_INTR_STAT_TX_ABRT register field. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_TX_ABRT field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_RAW_INTR_STAT_TX_ABRT register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_TX_ABRT_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : rx_done
 * 
 * When the DW_apb_i2c is acting as a slave-transmitter,
 * 
 * this bit is set to 1 if the master does not acknowledge
 * 
 * a transmitted byte. This occurs on the last byte of
 * 
 * the transmission, indicating that the transmission is done.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_MSB        7
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_RX_DONE register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_RX_DONE register field value. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_RAW_INTR_STAT_RX_DONE register field. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_RX_DONE field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_RAW_INTR_STAT_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_RX_DONE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : activity
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_ACTIVITY register field. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_ACTIVITY register field. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_MSB        8
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_ACTIVITY register field. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_ACTIVITY register field value. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_ACTIVITY register field value. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_RAW_INTR_STAT_ACTIVITY register field. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_ACTIVITY field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_RAW_INTR_STAT_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_ACTIVITY_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : stop_det
 * 
 * The behavior of the STOP_DET interrupt status
 * 
 * differs based on the STOP_DET_IFADDRESSED selection in the IC_CON register
 * 
 * When STOP_DET_IFADDRESSED =0
 * 
 * Indicates whether a STOP condition has occurred on the I2C interface regardless
 * 
 * of whether DW_apb_i2c is operating in slave or master mode. In slave mode,
 * 
 * a STOP_DET interrupt is generated irrespective of whether the
 * 
 * slave is addressed or not.
 * 
 * When STOP_DET_IFADDRESSED = 1
 * 
 * In Master Mode (MASTER_MODE = 1), indicates a STOP condition has occured on the
 * I2C interface.
 * 
 * In Slave Mode (MASTER_MODE = 0), a STOP_DET interrupt is generated only if the
 * slave is addressed.
 * 
 * NOTE: During a general call address, this slave does not issue a STOP_DET
 * 
 * interrupt if STOP_DET_IFADDRESSED=1, even if the slave responds to the
 * 
 * general call address by generating ACK. The STOP_DET interrupt is generated
 * 
 * only when the transmitted address matches the slave address (SAR).
 * 
 * Reset value: 0x0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_MSB        9
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_STOP_DET register field value. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_STOP_DET register field value. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_RAW_INTR_STAT_STOP_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_STOP_DET field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_RAW_INTR_STAT_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_STOP_DET_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : start_det
 * 
 * Indicates whether a START or RESTART condition has occurred on the I2C
 * 
 * interface regardless of whether DW_apb_i2c is operating in slave or master
 * 
 * mode.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_MSB        10
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_START_DET register field value. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_START_DET register field value. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_RAW_INTR_STAT_START_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_START_DET field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_RAW_INTR_STAT_START_DET register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_START_DET_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : gen_call
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_MSB        11
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_GEN_CALL register field value. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_GEN_CALL register field value. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_RAW_INTR_STAT_GEN_CALL register field. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_GEN_CALL field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_RAW_INTR_STAT_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_GEN_CALL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : restart_det
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_MSB        12
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_RESTART_DET register field value. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_RESTART_DET register field value. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_RAW_INTR_STAT_RESTART_DET register field. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_RESTART_DET field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_RAW_INTR_STAT_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_RESTART_DET_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : master_on_hold
 * 
 * Indicates whether master is holding the bus and TX FIFO is empty.
 * 
 * Enabled only when I2C_DYNAMIC_TAR_UPDATE=1 and IC_EMPTYFIFO_HOLD_MASTER_EN=1.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD register field. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD register field. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_MSB        13
/* The width in bits of the ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD register field. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_WIDTH      1
/* The mask used to set the ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD register field value. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD register field value. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD register field. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_RESET      0x0
/* Extracts the ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD field value from a register. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD register field value suitable for setting the register. */
#define ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD_SET(value) (((value) << 13) & 0x00002000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_RAW_INTR_STAT.
 */
struct ALT_I2C_RAW_INTR_STAT_s
{
    const uint32_t  rx_under       :  1;  /* ALT_I2C_RAW_INTR_STAT_RX_UNDER */
    const uint32_t  rx_over        :  1;  /* ALT_I2C_RAW_INTR_STAT_RX_OVER */
    const uint32_t  rx_full        :  1;  /* ALT_I2C_RAW_INTR_STAT_RX_FULL */
    const uint32_t  tx_over        :  1;  /* ALT_I2C_RAW_INTR_STAT_TX_OVER */
    const uint32_t  tx_empty       :  1;  /* ALT_I2C_RAW_INTR_STAT_TX_EMPTY */
    const uint32_t  rd_req         :  1;  /* ALT_I2C_RAW_INTR_STAT_RD_REQ */
    const uint32_t  tx_abrt        :  1;  /* ALT_I2C_RAW_INTR_STAT_TX_ABRT */
    const uint32_t  rx_done        :  1;  /* ALT_I2C_RAW_INTR_STAT_RX_DONE */
    const uint32_t  activity       :  1;  /* ALT_I2C_RAW_INTR_STAT_ACTIVITY */
    const uint32_t  stop_det       :  1;  /* ALT_I2C_RAW_INTR_STAT_STOP_DET */
    const uint32_t  start_det      :  1;  /* ALT_I2C_RAW_INTR_STAT_START_DET */
    const uint32_t  gen_call       :  1;  /* ALT_I2C_RAW_INTR_STAT_GEN_CALL */
    const uint32_t  restart_det    :  1;  /* ALT_I2C_RAW_INTR_STAT_RESTART_DET */
    const uint32_t  master_on_hold :  1;  /* ALT_I2C_RAW_INTR_STAT_MST_ON_HOLD */
    uint32_t                       : 18;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_RAW_INTR_STAT. */
typedef volatile struct ALT_I2C_RAW_INTR_STAT_s  ALT_I2C_RAW_INTR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_RAW_INTR_STAT register. */
#define ALT_I2C_RAW_INTR_STAT_RESET       0x00000000
/* The byte offset of the ALT_I2C_RAW_INTR_STAT register from the beginning of the component. */
#define ALT_I2C_RAW_INTR_STAT_OFST        0x34
/* The address of the ALT_I2C_RAW_INTR_STAT register. */
#define ALT_I2C_RAW_INTR_STAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_RAW_INTR_STAT_OFST))

/*
 * Register : ic_rx_tl
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
 * :-------|:-------|:------|:--------------------
 *  [7:0]  | RW     | 0x0   | ALT_I2C_RX_TL_RX_TL
 *  [31:8] | ???    | 0x0   | *UNDEFINED*        
 * 
 */
/*
 * Field : rx_tl
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_RX_TL_RX_TL register field. */
#define ALT_I2C_RX_TL_RX_TL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_RX_TL_RX_TL register field. */
#define ALT_I2C_RX_TL_RX_TL_MSB        7
/* The width in bits of the ALT_I2C_RX_TL_RX_TL register field. */
#define ALT_I2C_RX_TL_RX_TL_WIDTH      8
/* The mask used to set the ALT_I2C_RX_TL_RX_TL register field value. */
#define ALT_I2C_RX_TL_RX_TL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_RX_TL_RX_TL register field value. */
#define ALT_I2C_RX_TL_RX_TL_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_RX_TL_RX_TL register field. */
#define ALT_I2C_RX_TL_RX_TL_RESET      0x0
/* Extracts the ALT_I2C_RX_TL_RX_TL field value from a register. */
#define ALT_I2C_RX_TL_RX_TL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_RX_TL_RX_TL register field value suitable for setting the register. */
#define ALT_I2C_RX_TL_RX_TL_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_RX_TL.
 */
struct ALT_I2C_RX_TL_s
{
    uint32_t  rx_tl :  8;  /* ALT_I2C_RX_TL_RX_TL */
    uint32_t        : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_RX_TL. */
typedef volatile struct ALT_I2C_RX_TL_s  ALT_I2C_RX_TL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_RX_TL register. */
#define ALT_I2C_RX_TL_RESET       0x00000000
/* The byte offset of the ALT_I2C_RX_TL register from the beginning of the component. */
#define ALT_I2C_RX_TL_OFST        0x38
/* The address of the ALT_I2C_RX_TL register. */
#define ALT_I2C_RX_TL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_RX_TL_OFST))

/*
 * Register : ic_tx_tl
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
 * :-------|:-------|:------|:--------------------
 *  [7:0]  | RW     | 0x0   | ALT_I2C_TX_TL_TX_TL
 *  [31:8] | ???    | 0x0   | *UNDEFINED*        
 * 
 */
/*
 * Field : tx_tl
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_TL_TX_TL register field. */
#define ALT_I2C_TX_TL_TX_TL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_TL_TX_TL register field. */
#define ALT_I2C_TX_TL_TX_TL_MSB        7
/* The width in bits of the ALT_I2C_TX_TL_TX_TL register field. */
#define ALT_I2C_TX_TL_TX_TL_WIDTH      8
/* The mask used to set the ALT_I2C_TX_TL_TX_TL register field value. */
#define ALT_I2C_TX_TL_TX_TL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_TX_TL_TX_TL register field value. */
#define ALT_I2C_TX_TL_TX_TL_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_TX_TL_TX_TL register field. */
#define ALT_I2C_TX_TL_TX_TL_RESET      0x0
/* Extracts the ALT_I2C_TX_TL_TX_TL field value from a register. */
#define ALT_I2C_TX_TL_TX_TL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_TX_TL_TX_TL register field value suitable for setting the register. */
#define ALT_I2C_TX_TL_TX_TL_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_TX_TL.
 */
struct ALT_I2C_TX_TL_s
{
    uint32_t  tx_tl :  8;  /* ALT_I2C_TX_TL_TX_TL */
    uint32_t        : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_TX_TL. */
typedef volatile struct ALT_I2C_TX_TL_s  ALT_I2C_TX_TL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_TX_TL register. */
#define ALT_I2C_TX_TL_RESET       0x00000000
/* The byte offset of the ALT_I2C_TX_TL register from the beginning of the component. */
#define ALT_I2C_TX_TL_OFST        0x3c
/* The address of the ALT_I2C_TX_TL register. */
#define ALT_I2C_TX_TL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_TX_TL_OFST))

/*
 * Register : ic_clr_intr
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
 * :-------|:-------|:------|:--------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_INTR_CLR_INTR
 *  [31:1] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : clr_intr
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_CLR_INTR_CLR_INTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_CLR_INTR_CLR_INTR_MSB        0
/* The width in bits of the ALT_I2C_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_CLR_INTR_CLR_INTR_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_INTR_CLR_INTR register field value. */
#define ALT_I2C_CLR_INTR_CLR_INTR_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_INTR_CLR_INTR register field value. */
#define ALT_I2C_CLR_INTR_CLR_INTR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_INTR_CLR_INTR register field. */
#define ALT_I2C_CLR_INTR_CLR_INTR_RESET      0x0
/* Extracts the ALT_I2C_CLR_INTR_CLR_INTR field value from a register. */
#define ALT_I2C_CLR_INTR_CLR_INTR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_INTR_CLR_INTR register field value suitable for setting the register. */
#define ALT_I2C_CLR_INTR_CLR_INTR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_INTR.
 */
struct ALT_I2C_CLR_INTR_s
{
    const uint32_t  clr_intr :  1;  /* ALT_I2C_CLR_INTR_CLR_INTR */
    uint32_t                 : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_INTR. */
typedef volatile struct ALT_I2C_CLR_INTR_s  ALT_I2C_CLR_INTR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_INTR register. */
#define ALT_I2C_CLR_INTR_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_INTR register from the beginning of the component. */
#define ALT_I2C_CLR_INTR_OFST        0x40
/* The address of the ALT_I2C_CLR_INTR register. */
#define ALT_I2C_CLR_INTR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_INTR_OFST))

/*
 * Register : ic_clr_rx_under
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
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : clr_rx_under
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_MSB        0
/* The width in bits of the ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER register field value. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER register field value. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER register field. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_RESET      0x0
/* Extracts the ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER field value from a register. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER register field value suitable for setting the register. */
#define ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_RX_UNDER.
 */
struct ALT_I2C_CLR_RX_UNDER_s
{
    const uint32_t  clr_rx_under :  1;  /* ALT_I2C_CLR_RX_UNDER_CLR_RX_UNDER */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_RX_UNDER. */
typedef volatile struct ALT_I2C_CLR_RX_UNDER_s  ALT_I2C_CLR_RX_UNDER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_RX_UNDER register. */
#define ALT_I2C_CLR_RX_UNDER_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_RX_UNDER register from the beginning of the component. */
#define ALT_I2C_CLR_RX_UNDER_OFST        0x44
/* The address of the ALT_I2C_CLR_RX_UNDER register. */
#define ALT_I2C_CLR_RX_UNDER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_RX_UNDER_OFST))

/*
 * Register : ic_clr_rx_over
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
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_RX_OVER_CLR_RX_OVER
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : clr_rx_over
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_MSB        0
/* The width in bits of the ALT_I2C_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_RX_OVER_CLR_RX_OVER register field value. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_RX_OVER_CLR_RX_OVER register field value. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_RX_OVER_CLR_RX_OVER register field. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_RESET      0x0
/* Extracts the ALT_I2C_CLR_RX_OVER_CLR_RX_OVER field value from a register. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_RX_OVER_CLR_RX_OVER register field value suitable for setting the register. */
#define ALT_I2C_CLR_RX_OVER_CLR_RX_OVER_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_RX_OVER.
 */
struct ALT_I2C_CLR_RX_OVER_s
{
    const uint32_t  clr_rx_over :  1;  /* ALT_I2C_CLR_RX_OVER_CLR_RX_OVER */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_RX_OVER. */
typedef volatile struct ALT_I2C_CLR_RX_OVER_s  ALT_I2C_CLR_RX_OVER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_RX_OVER register. */
#define ALT_I2C_CLR_RX_OVER_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_RX_OVER register from the beginning of the component. */
#define ALT_I2C_CLR_RX_OVER_OFST        0x48
/* The address of the ALT_I2C_CLR_RX_OVER register. */
#define ALT_I2C_CLR_RX_OVER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_RX_OVER_OFST))

/*
 * Register : ic_clr_tx_over
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
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_TX_OVER_CLR_TX_OVER
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : clr_tx_over
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_MSB        0
/* The width in bits of the ALT_I2C_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_TX_OVER_CLR_TX_OVER register field value. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_TX_OVER_CLR_TX_OVER register field value. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_TX_OVER_CLR_TX_OVER register field. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_RESET      0x0
/* Extracts the ALT_I2C_CLR_TX_OVER_CLR_TX_OVER field value from a register. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_TX_OVER_CLR_TX_OVER register field value suitable for setting the register. */
#define ALT_I2C_CLR_TX_OVER_CLR_TX_OVER_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_TX_OVER.
 */
struct ALT_I2C_CLR_TX_OVER_s
{
    const uint32_t  clr_tx_over :  1;  /* ALT_I2C_CLR_TX_OVER_CLR_TX_OVER */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_TX_OVER. */
typedef volatile struct ALT_I2C_CLR_TX_OVER_s  ALT_I2C_CLR_TX_OVER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_TX_OVER register. */
#define ALT_I2C_CLR_TX_OVER_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_TX_OVER register from the beginning of the component. */
#define ALT_I2C_CLR_TX_OVER_OFST        0x4c
/* The address of the ALT_I2C_CLR_TX_OVER register. */
#define ALT_I2C_CLR_TX_OVER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_TX_OVER_OFST))

/*
 * Register : ic_clr_rd_req
 * 
 * Name: Clear RD_REQ Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x50
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_RD_REQ_CLR_RD_REQ
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : clr_rd_req
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_MSB        0
/* The width in bits of the ALT_I2C_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_RD_REQ_CLR_RD_REQ register field value. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_RD_REQ_CLR_RD_REQ register field value. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_RD_REQ_CLR_RD_REQ register field. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_RESET      0x0
/* Extracts the ALT_I2C_CLR_RD_REQ_CLR_RD_REQ field value from a register. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_RD_REQ_CLR_RD_REQ register field value suitable for setting the register. */
#define ALT_I2C_CLR_RD_REQ_CLR_RD_REQ_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_RD_REQ.
 */
struct ALT_I2C_CLR_RD_REQ_s
{
    const uint32_t  clr_rd_req :  1;  /* ALT_I2C_CLR_RD_REQ_CLR_RD_REQ */
    uint32_t                   : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_RD_REQ. */
typedef volatile struct ALT_I2C_CLR_RD_REQ_s  ALT_I2C_CLR_RD_REQ_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_RD_REQ register. */
#define ALT_I2C_CLR_RD_REQ_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_RD_REQ register from the beginning of the component. */
#define ALT_I2C_CLR_RD_REQ_OFST        0x50
/* The address of the ALT_I2C_CLR_RD_REQ register. */
#define ALT_I2C_CLR_RD_REQ_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_RD_REQ_OFST))

/*
 * Register : ic_clr_tx_abrt
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
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : clr_tx_abort
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT register field. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT register field. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_MSB        0
/* The width in bits of the ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT register field. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT register field value. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT register field value. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT register field. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_RESET      0x0
/* Extracts the ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT field value from a register. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT register field value suitable for setting the register. */
#define ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_TX_ABRT.
 */
struct ALT_I2C_CLR_TX_ABRT_s
{
    const uint32_t  clr_tx_abort :  1;  /* ALT_I2C_CLR_TX_ABRT_CLR_TX_ABT */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_TX_ABRT. */
typedef volatile struct ALT_I2C_CLR_TX_ABRT_s  ALT_I2C_CLR_TX_ABRT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_TX_ABRT register. */
#define ALT_I2C_CLR_TX_ABRT_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_TX_ABRT register from the beginning of the component. */
#define ALT_I2C_CLR_TX_ABRT_OFST        0x54
/* The address of the ALT_I2C_CLR_TX_ABRT register. */
#define ALT_I2C_CLR_TX_ABRT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_TX_ABRT_OFST))

/*
 * Register : ic_clr_rx_done
 * 
 * Name: Clear RX_DONE Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x58
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_RX_DONE_CLR_RX_DONE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : clr_rx_done
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_MSB        0
/* The width in bits of the ALT_I2C_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_RX_DONE_CLR_RX_DONE register field value. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_RX_DONE_CLR_RX_DONE register field value. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_RX_DONE_CLR_RX_DONE register field. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_RESET      0x0
/* Extracts the ALT_I2C_CLR_RX_DONE_CLR_RX_DONE field value from a register. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_RX_DONE_CLR_RX_DONE register field value suitable for setting the register. */
#define ALT_I2C_CLR_RX_DONE_CLR_RX_DONE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_RX_DONE.
 */
struct ALT_I2C_CLR_RX_DONE_s
{
    const uint32_t  clr_rx_done :  1;  /* ALT_I2C_CLR_RX_DONE_CLR_RX_DONE */
    uint32_t                    : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_RX_DONE. */
typedef volatile struct ALT_I2C_CLR_RX_DONE_s  ALT_I2C_CLR_RX_DONE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_RX_DONE register. */
#define ALT_I2C_CLR_RX_DONE_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_RX_DONE register from the beginning of the component. */
#define ALT_I2C_CLR_RX_DONE_OFST        0x58
/* The address of the ALT_I2C_CLR_RX_DONE register. */
#define ALT_I2C_CLR_RX_DONE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_RX_DONE_OFST))

/*
 * Register : ic_clr_activity
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
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : clr_activity
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_MSB        0
/* The width in bits of the ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY register field value. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY register field value. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY register field. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY field value from a register. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_ACTIVITY.
 */
struct ALT_I2C_CLR_ACTIVITY_s
{
    const uint32_t  clr_activity :  1;  /* ALT_I2C_CLR_ACTIVITY_CLR_ACTIVITY */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_ACTIVITY. */
typedef volatile struct ALT_I2C_CLR_ACTIVITY_s  ALT_I2C_CLR_ACTIVITY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_ACTIVITY register. */
#define ALT_I2C_CLR_ACTIVITY_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_ACTIVITY register from the beginning of the component. */
#define ALT_I2C_CLR_ACTIVITY_OFST        0x5c
/* The address of the ALT_I2C_CLR_ACTIVITY register. */
#define ALT_I2C_CLR_ACTIVITY_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_ACTIVITY_OFST))

/*
 * Register : ic_clr_stop_det
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
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_STOP_DET_CLR_STOP_DET
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : clr_stop_det
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_MSB        0
/* The width in bits of the ALT_I2C_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_STOP_DET_CLR_STOP_DET register field value. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_STOP_DET_CLR_STOP_DET register field value. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_STOP_DET_CLR_STOP_DET register field. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_RESET      0x0
/* Extracts the ALT_I2C_CLR_STOP_DET_CLR_STOP_DET field value from a register. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_STOP_DET_CLR_STOP_DET register field value suitable for setting the register. */
#define ALT_I2C_CLR_STOP_DET_CLR_STOP_DET_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_STOP_DET.
 */
struct ALT_I2C_CLR_STOP_DET_s
{
    const uint32_t  clr_stop_det :  1;  /* ALT_I2C_CLR_STOP_DET_CLR_STOP_DET */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_STOP_DET. */
typedef volatile struct ALT_I2C_CLR_STOP_DET_s  ALT_I2C_CLR_STOP_DET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_STOP_DET register. */
#define ALT_I2C_CLR_STOP_DET_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_STOP_DET register from the beginning of the component. */
#define ALT_I2C_CLR_STOP_DET_OFST        0x60
/* The address of the ALT_I2C_CLR_STOP_DET register. */
#define ALT_I2C_CLR_STOP_DET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_STOP_DET_OFST))

/*
 * Register : ic_clr_start_det
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
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_START_DET_CLR_START_DET
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : clr_start_det
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_MSB        0
/* The width in bits of the ALT_I2C_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_START_DET_CLR_START_DET register field value. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_START_DET_CLR_START_DET register field value. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_START_DET_CLR_START_DET register field. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_RESET      0x0
/* Extracts the ALT_I2C_CLR_START_DET_CLR_START_DET field value from a register. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_START_DET_CLR_START_DET register field value suitable for setting the register. */
#define ALT_I2C_CLR_START_DET_CLR_START_DET_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_START_DET.
 */
struct ALT_I2C_CLR_START_DET_s
{
    const uint32_t  clr_start_det :  1;  /* ALT_I2C_CLR_START_DET_CLR_START_DET */
    uint32_t                      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_START_DET. */
typedef volatile struct ALT_I2C_CLR_START_DET_s  ALT_I2C_CLR_START_DET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_START_DET register. */
#define ALT_I2C_CLR_START_DET_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_START_DET register from the beginning of the component. */
#define ALT_I2C_CLR_START_DET_OFST        0x64
/* The address of the ALT_I2C_CLR_START_DET register. */
#define ALT_I2C_CLR_START_DET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_START_DET_OFST))

/*
 * Register : ic_clr_gen_call
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
 * :-------|:-------|:------|:----------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : clr_gen_call
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_MSB        0
/* The width in bits of the ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL register field value. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL register field value. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL register field. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_RESET      0x0
/* Extracts the ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL field value from a register. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_GEN_CALL.
 */
struct ALT_I2C_CLR_GEN_CALL_s
{
    const uint32_t  clr_gen_call :  1;  /* ALT_I2C_CLR_GEN_CALL_CLR_GEN_CALL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_GEN_CALL. */
typedef volatile struct ALT_I2C_CLR_GEN_CALL_s  ALT_I2C_CLR_GEN_CALL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_GEN_CALL register. */
#define ALT_I2C_CLR_GEN_CALL_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_GEN_CALL register from the beginning of the component. */
#define ALT_I2C_CLR_GEN_CALL_OFST        0x68
/* The address of the ALT_I2C_CLR_GEN_CALL register. */
#define ALT_I2C_CLR_GEN_CALL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_GEN_CALL_OFST))

/*
 * Register : ic_enable
 * 
 * Name: I2C Enable Register
 * 
 * Size: 2 bits
 * 
 * Address Offset: 0x6c
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [0]    | RW     | 0x0   | ALT_I2C_EN_EN   
 *  [1]    | RW     | 0x0   | ALT_I2C_EN_TXABT
 *  [31:2] | ???    | 0x0   | *UNDEFINED*     
 * 
 */
/*
 * Field : enable
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
 *  Enum                | Value | Description                                   
 * :--------------------|:------|:-----------------------------------------------
 *  ALT_I2C_EN_EN_E_DIS | 0x0   | Disables i2c. TX and RX FIFOs are held in an  
 * :                    |       | erased state                                  
 *  ALT_I2C_EN_EN_E_EN  | 0x1   | Enables i2c. Software can disable i2c while it
 * :                    |       | is active                                     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_EN_EN
 * 
 * Disables i2c. TX and RX FIFOs are held in an erased state
 */
#define ALT_I2C_EN_EN_E_DIS 0x0
/*
 * Enumerated value for register field ALT_I2C_EN_EN
 * 
 * Enables i2c. Software can disable i2c while it is active
 */
#define ALT_I2C_EN_EN_E_EN  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_EN_EN register field. */
#define ALT_I2C_EN_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_EN_EN register field. */
#define ALT_I2C_EN_EN_MSB        0
/* The width in bits of the ALT_I2C_EN_EN register field. */
#define ALT_I2C_EN_EN_WIDTH      1
/* The mask used to set the ALT_I2C_EN_EN register field value. */
#define ALT_I2C_EN_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_EN_EN register field value. */
#define ALT_I2C_EN_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_EN_EN register field. */
#define ALT_I2C_EN_EN_RESET      0x0
/* Extracts the ALT_I2C_EN_EN field value from a register. */
#define ALT_I2C_EN_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_EN_EN register field value suitable for setting the register. */
#define ALT_I2C_EN_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : txabort
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_EN_TXABT register field. */
#define ALT_I2C_EN_TXABT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_EN_TXABT register field. */
#define ALT_I2C_EN_TXABT_MSB        1
/* The width in bits of the ALT_I2C_EN_TXABT register field. */
#define ALT_I2C_EN_TXABT_WIDTH      1
/* The mask used to set the ALT_I2C_EN_TXABT register field value. */
#define ALT_I2C_EN_TXABT_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_EN_TXABT register field value. */
#define ALT_I2C_EN_TXABT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_EN_TXABT register field. */
#define ALT_I2C_EN_TXABT_RESET      0x0
/* Extracts the ALT_I2C_EN_TXABT field value from a register. */
#define ALT_I2C_EN_TXABT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_EN_TXABT register field value suitable for setting the register. */
#define ALT_I2C_EN_TXABT_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_EN.
 */
struct ALT_I2C_EN_s
{
    uint32_t  enable  :  1;  /* ALT_I2C_EN_EN */
    uint32_t  txabort :  1;  /* ALT_I2C_EN_TXABT */
    uint32_t          : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_EN. */
typedef volatile struct ALT_I2C_EN_s  ALT_I2C_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_EN register. */
#define ALT_I2C_EN_RESET       0x00000000
/* The byte offset of the ALT_I2C_EN register from the beginning of the component. */
#define ALT_I2C_EN_OFST        0x6c
/* The address of the ALT_I2C_EN register. */
#define ALT_I2C_EN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_EN_OFST))

/*
 * Register : ic_status
 * 
 * Name: I2C Status Register
 * 
 * Size: 7 bits
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
 * * Bits 3 and 4 are set to 0
 * 
 * When the master or slave state machines goes to idle
 * 
 * and ic_en=0:
 * 
 * * Bits 5 and 6 are set to 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description              
 * :-------|:-------|:------|:--------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_STAT_ACTIVITY    
 *  [1]    | R      | 0x1   | ALT_I2C_STAT_TFNF        
 *  [2]    | R      | 0x1   | ALT_I2C_STAT_TFE         
 *  [3]    | R      | 0x0   | ALT_I2C_STAT_RFNE        
 *  [4]    | R      | 0x0   | ALT_I2C_STAT_RFF         
 *  [5]    | R      | 0x0   | ALT_I2C_STAT_MST_ACTIVITY
 *  [6]    | R      | 0x0   | ALT_I2C_STAT_SLV_ACTIVITY
 *  [31:7] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : activity
 * 
 * I2C Activity Status.
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_STAT_ACTIVITY register field. */
#define ALT_I2C_STAT_ACTIVITY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_STAT_ACTIVITY register field. */
#define ALT_I2C_STAT_ACTIVITY_MSB        0
/* The width in bits of the ALT_I2C_STAT_ACTIVITY register field. */
#define ALT_I2C_STAT_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_STAT_ACTIVITY register field value. */
#define ALT_I2C_STAT_ACTIVITY_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_STAT_ACTIVITY register field value. */
#define ALT_I2C_STAT_ACTIVITY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_STAT_ACTIVITY register field. */
#define ALT_I2C_STAT_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_STAT_ACTIVITY field value from a register. */
#define ALT_I2C_STAT_ACTIVITY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_STAT_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_STAT_ACTIVITY_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : tfnf
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
 *  Enum                        | Value | Description              
 * :----------------------------|:------|:--------------------------
 *  ALT_I2C_STAT_TFNF_E_FULL    | 0x0   | Transmit FIFO is full    
 *  ALT_I2C_STAT_TFNF_E_NOTFULL | 0x1   | Transmit FIFO is not full
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_STAT_TFNF
 * 
 * Transmit FIFO is full
 */
#define ALT_I2C_STAT_TFNF_E_FULL    0x0
/*
 * Enumerated value for register field ALT_I2C_STAT_TFNF
 * 
 * Transmit FIFO is not full
 */
#define ALT_I2C_STAT_TFNF_E_NOTFULL 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_STAT_TFNF register field. */
#define ALT_I2C_STAT_TFNF_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_STAT_TFNF register field. */
#define ALT_I2C_STAT_TFNF_MSB        1
/* The width in bits of the ALT_I2C_STAT_TFNF register field. */
#define ALT_I2C_STAT_TFNF_WIDTH      1
/* The mask used to set the ALT_I2C_STAT_TFNF register field value. */
#define ALT_I2C_STAT_TFNF_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_STAT_TFNF register field value. */
#define ALT_I2C_STAT_TFNF_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_STAT_TFNF register field. */
#define ALT_I2C_STAT_TFNF_RESET      0x1
/* Extracts the ALT_I2C_STAT_TFNF field value from a register. */
#define ALT_I2C_STAT_TFNF_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_STAT_TFNF register field value suitable for setting the register. */
#define ALT_I2C_STAT_TFNF_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : tfe
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
 *  Enum                        | Value | Description               
 * :----------------------------|:------|:---------------------------
 *  ALT_I2C_STAT_TFE_E_NOTEMPTY | 0x0   | Transmit FIFO is not empty
 *  ALT_I2C_STAT_TFE_E_EMPTY    | 0x1   | Transmit FIFO is empty    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_STAT_TFE
 * 
 * Transmit FIFO is not empty
 */
#define ALT_I2C_STAT_TFE_E_NOTEMPTY 0x0
/*
 * Enumerated value for register field ALT_I2C_STAT_TFE
 * 
 * Transmit FIFO is empty
 */
#define ALT_I2C_STAT_TFE_E_EMPTY    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_STAT_TFE register field. */
#define ALT_I2C_STAT_TFE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_STAT_TFE register field. */
#define ALT_I2C_STAT_TFE_MSB        2
/* The width in bits of the ALT_I2C_STAT_TFE register field. */
#define ALT_I2C_STAT_TFE_WIDTH      1
/* The mask used to set the ALT_I2C_STAT_TFE register field value. */
#define ALT_I2C_STAT_TFE_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_STAT_TFE register field value. */
#define ALT_I2C_STAT_TFE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_STAT_TFE register field. */
#define ALT_I2C_STAT_TFE_RESET      0x1
/* Extracts the ALT_I2C_STAT_TFE field value from a register. */
#define ALT_I2C_STAT_TFE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_STAT_TFE register field value suitable for setting the register. */
#define ALT_I2C_STAT_TFE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : rfne
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
 *  Enum                         | Value | Description              
 * :-----------------------------|:------|:--------------------------
 *  ALT_I2C_STAT_RFNE_E_EMPTY    | 0x0   | Receive FIFO is empty    
 *  ALT_I2C_STAT_RFNE_E_NOTEMPTY | 0x1   | Receive FIFO is not empty
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_STAT_RFNE
 * 
 * Receive FIFO is empty
 */
#define ALT_I2C_STAT_RFNE_E_EMPTY       0x0
/*
 * Enumerated value for register field ALT_I2C_STAT_RFNE
 * 
 * Receive FIFO is not empty
 */
#define ALT_I2C_STAT_RFNE_E_NOTEMPTY    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_STAT_RFNE register field. */
#define ALT_I2C_STAT_RFNE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_STAT_RFNE register field. */
#define ALT_I2C_STAT_RFNE_MSB        3
/* The width in bits of the ALT_I2C_STAT_RFNE register field. */
#define ALT_I2C_STAT_RFNE_WIDTH      1
/* The mask used to set the ALT_I2C_STAT_RFNE register field value. */
#define ALT_I2C_STAT_RFNE_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_STAT_RFNE register field value. */
#define ALT_I2C_STAT_RFNE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_STAT_RFNE register field. */
#define ALT_I2C_STAT_RFNE_RESET      0x0
/* Extracts the ALT_I2C_STAT_RFNE field value from a register. */
#define ALT_I2C_STAT_RFNE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_STAT_RFNE register field value suitable for setting the register. */
#define ALT_I2C_STAT_RFNE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : rff
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
 *  Enum                       | Value | Description             
 * :---------------------------|:------|:-------------------------
 *  ALT_I2C_STAT_RFF_E_NOTFULL | 0x0   | Receive FIFO is not full
 *  ALT_I2C_STAT_RFF_E_FULL    | 0x1   | Receive FIFO is full    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_STAT_RFF
 * 
 * Receive FIFO is not full
 */
#define ALT_I2C_STAT_RFF_E_NOTFULL  0x0
/*
 * Enumerated value for register field ALT_I2C_STAT_RFF
 * 
 * Receive FIFO is full
 */
#define ALT_I2C_STAT_RFF_E_FULL     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_STAT_RFF register field. */
#define ALT_I2C_STAT_RFF_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_STAT_RFF register field. */
#define ALT_I2C_STAT_RFF_MSB        4
/* The width in bits of the ALT_I2C_STAT_RFF register field. */
#define ALT_I2C_STAT_RFF_WIDTH      1
/* The mask used to set the ALT_I2C_STAT_RFF register field value. */
#define ALT_I2C_STAT_RFF_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_STAT_RFF register field value. */
#define ALT_I2C_STAT_RFF_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_STAT_RFF register field. */
#define ALT_I2C_STAT_RFF_RESET      0x0
/* Extracts the ALT_I2C_STAT_RFF field value from a register. */
#define ALT_I2C_STAT_RFF_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_STAT_RFF register field value suitable for setting the register. */
#define ALT_I2C_STAT_RFF_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : mst_activity
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
 *  Enum                                | Value | Description                                    
 * :------------------------------------|:------|:------------------------------------------------
 *  ALT_I2C_STAT_MST_ACTIVITY_E_IDLE    | 0x0   | Master FSM is in IDLE state. Master part of i2c
 * :                                    |       | is not Active                                  
 *  ALT_I2C_STAT_MST_ACTIVITY_E_NOTIDLE | 0x1   | Master FSM is not in IDLE state. Master part of
 * :                                    |       | i2c is Active                                  
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_STAT_MST_ACTIVITY
 * 
 * Master FSM is in IDLE state. Master part of i2c is not Active
 */
#define ALT_I2C_STAT_MST_ACTIVITY_E_IDLE    0x0
/*
 * Enumerated value for register field ALT_I2C_STAT_MST_ACTIVITY
 * 
 * Master FSM is not in IDLE state. Master part of i2c is Active
 */
#define ALT_I2C_STAT_MST_ACTIVITY_E_NOTIDLE 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_STAT_MST_ACTIVITY register field. */
#define ALT_I2C_STAT_MST_ACTIVITY_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_STAT_MST_ACTIVITY register field. */
#define ALT_I2C_STAT_MST_ACTIVITY_MSB        5
/* The width in bits of the ALT_I2C_STAT_MST_ACTIVITY register field. */
#define ALT_I2C_STAT_MST_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_STAT_MST_ACTIVITY register field value. */
#define ALT_I2C_STAT_MST_ACTIVITY_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_STAT_MST_ACTIVITY register field value. */
#define ALT_I2C_STAT_MST_ACTIVITY_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_STAT_MST_ACTIVITY register field. */
#define ALT_I2C_STAT_MST_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_STAT_MST_ACTIVITY field value from a register. */
#define ALT_I2C_STAT_MST_ACTIVITY_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_STAT_MST_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_STAT_MST_ACTIVITY_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : slv_activity
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
 *  Enum                                | Value | Description                                     
 * :------------------------------------|:------|:-------------------------------------------------
 *  ALT_I2C_STAT_SLV_ACTIVITY_E_IDLE    | 0x0   | Slave FSM is in IDLE state so the Slave part of 
 * :                                    |       | i2c is not Active                               
 *  ALT_I2C_STAT_SLV_ACTIVITY_E_NOTIDLE | 0x1   | Slave FSM is not in IDLE state so the Slave part
 * :                                    |       | of i2c is Active                                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_STAT_SLV_ACTIVITY
 * 
 * Slave FSM is in IDLE state so the Slave part of i2c is not Active
 */
#define ALT_I2C_STAT_SLV_ACTIVITY_E_IDLE    0x0
/*
 * Enumerated value for register field ALT_I2C_STAT_SLV_ACTIVITY
 * 
 * Slave FSM is not in IDLE state so the Slave part of i2c is Active
 */
#define ALT_I2C_STAT_SLV_ACTIVITY_E_NOTIDLE 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_STAT_SLV_ACTIVITY register field. */
#define ALT_I2C_STAT_SLV_ACTIVITY_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_STAT_SLV_ACTIVITY register field. */
#define ALT_I2C_STAT_SLV_ACTIVITY_MSB        6
/* The width in bits of the ALT_I2C_STAT_SLV_ACTIVITY register field. */
#define ALT_I2C_STAT_SLV_ACTIVITY_WIDTH      1
/* The mask used to set the ALT_I2C_STAT_SLV_ACTIVITY register field value. */
#define ALT_I2C_STAT_SLV_ACTIVITY_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_STAT_SLV_ACTIVITY register field value. */
#define ALT_I2C_STAT_SLV_ACTIVITY_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_STAT_SLV_ACTIVITY register field. */
#define ALT_I2C_STAT_SLV_ACTIVITY_RESET      0x0
/* Extracts the ALT_I2C_STAT_SLV_ACTIVITY field value from a register. */
#define ALT_I2C_STAT_SLV_ACTIVITY_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_STAT_SLV_ACTIVITY register field value suitable for setting the register. */
#define ALT_I2C_STAT_SLV_ACTIVITY_SET(value) (((value) << 6) & 0x00000040)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_STAT.
 */
struct ALT_I2C_STAT_s
{
    const uint32_t  activity     :  1;  /* ALT_I2C_STAT_ACTIVITY */
    const uint32_t  tfnf         :  1;  /* ALT_I2C_STAT_TFNF */
    const uint32_t  tfe          :  1;  /* ALT_I2C_STAT_TFE */
    const uint32_t  rfne         :  1;  /* ALT_I2C_STAT_RFNE */
    const uint32_t  rff          :  1;  /* ALT_I2C_STAT_RFF */
    const uint32_t  mst_activity :  1;  /* ALT_I2C_STAT_MST_ACTIVITY */
    const uint32_t  slv_activity :  1;  /* ALT_I2C_STAT_SLV_ACTIVITY */
    uint32_t                     : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_STAT. */
typedef volatile struct ALT_I2C_STAT_s  ALT_I2C_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_STAT register. */
#define ALT_I2C_STAT_RESET       0x00000006
/* The byte offset of the ALT_I2C_STAT register from the beginning of the component. */
#define ALT_I2C_STAT_OFST        0x70
/* The address of the ALT_I2C_STAT register. */
#define ALT_I2C_STAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_STAT_OFST))

/*
 * Register : ic_txflr
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
 * :-------|:-------|:------|:--------------------
 *  [6:0]  | R      | 0x0   | ALT_I2C_TXFLR_TXFLR
 *  [31:7] | ???    | 0x0   | *UNDEFINED*        
 * 
 */
/*
 * Field : txflr
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_TXFLR_TXFLR register field. */
#define ALT_I2C_TXFLR_TXFLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_TXFLR_TXFLR register field. */
#define ALT_I2C_TXFLR_TXFLR_MSB        6
/* The width in bits of the ALT_I2C_TXFLR_TXFLR register field. */
#define ALT_I2C_TXFLR_TXFLR_WIDTH      7
/* The mask used to set the ALT_I2C_TXFLR_TXFLR register field value. */
#define ALT_I2C_TXFLR_TXFLR_SET_MSK    0x0000007f
/* The mask used to clear the ALT_I2C_TXFLR_TXFLR register field value. */
#define ALT_I2C_TXFLR_TXFLR_CLR_MSK    0xffffff80
/* The reset value of the ALT_I2C_TXFLR_TXFLR register field. */
#define ALT_I2C_TXFLR_TXFLR_RESET      0x0
/* Extracts the ALT_I2C_TXFLR_TXFLR field value from a register. */
#define ALT_I2C_TXFLR_TXFLR_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_I2C_TXFLR_TXFLR register field value suitable for setting the register. */
#define ALT_I2C_TXFLR_TXFLR_SET(value) (((value) << 0) & 0x0000007f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_TXFLR.
 */
struct ALT_I2C_TXFLR_s
{
    const uint32_t  txflr :  7;  /* ALT_I2C_TXFLR_TXFLR */
    uint32_t              : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_TXFLR. */
typedef volatile struct ALT_I2C_TXFLR_s  ALT_I2C_TXFLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_TXFLR register. */
#define ALT_I2C_TXFLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_TXFLR register from the beginning of the component. */
#define ALT_I2C_TXFLR_OFST        0x74
/* The address of the ALT_I2C_TXFLR register. */
#define ALT_I2C_TXFLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_TXFLR_OFST))

/*
 * Register : ic_rxflr
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
 * :-------|:-------|:------|:--------------------
 *  [6:0]  | R      | 0x0   | ALT_I2C_RXFLR_RXFLR
 *  [31:7] | ???    | 0x0   | *UNDEFINED*        
 * 
 */
/*
 * Field : rxflr
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_RXFLR_RXFLR register field. */
#define ALT_I2C_RXFLR_RXFLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_RXFLR_RXFLR register field. */
#define ALT_I2C_RXFLR_RXFLR_MSB        6
/* The width in bits of the ALT_I2C_RXFLR_RXFLR register field. */
#define ALT_I2C_RXFLR_RXFLR_WIDTH      7
/* The mask used to set the ALT_I2C_RXFLR_RXFLR register field value. */
#define ALT_I2C_RXFLR_RXFLR_SET_MSK    0x0000007f
/* The mask used to clear the ALT_I2C_RXFLR_RXFLR register field value. */
#define ALT_I2C_RXFLR_RXFLR_CLR_MSK    0xffffff80
/* The reset value of the ALT_I2C_RXFLR_RXFLR register field. */
#define ALT_I2C_RXFLR_RXFLR_RESET      0x0
/* Extracts the ALT_I2C_RXFLR_RXFLR field value from a register. */
#define ALT_I2C_RXFLR_RXFLR_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_I2C_RXFLR_RXFLR register field value suitable for setting the register. */
#define ALT_I2C_RXFLR_RXFLR_SET(value) (((value) << 0) & 0x0000007f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_RXFLR.
 */
struct ALT_I2C_RXFLR_s
{
    const uint32_t  rxflr :  7;  /* ALT_I2C_RXFLR_RXFLR */
    uint32_t              : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_RXFLR. */
typedef volatile struct ALT_I2C_RXFLR_s  ALT_I2C_RXFLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_RXFLR register. */
#define ALT_I2C_RXFLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_RXFLR register from the beginning of the component. */
#define ALT_I2C_RXFLR_OFST        0x78
/* The address of the ALT_I2C_RXFLR register. */
#define ALT_I2C_RXFLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_RXFLR_OFST))

/*
 * Register : ic_sda_hold
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
 * :--------|:-------|:------|:--------------------------------
 *  [15:0]  | RW     | 0x1   | ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD
 *  [23:16] | RW     | 0x0   | ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : ic_sda_tx_hold
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_MSB        15
/* The width in bits of the ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_WIDTH      16
/* The mask used to set the ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD register field value. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD register field value. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_CLR_MSK    0xffff0000
/* The reset value of the ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_RESET      0x1
/* Extracts the ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD field value from a register. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD register field value suitable for setting the register. */
#define ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : ic_sda_rx_hold
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_MSB        23
/* The width in bits of the ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_WIDTH      8
/* The mask used to set the ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD register field value. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD register field value. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_CLR_MSK    0xff00ffff
/* The reset value of the ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD register field. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_RESET      0x0
/* Extracts the ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD field value from a register. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD register field value suitable for setting the register. */
#define ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD_SET(value) (((value) << 16) & 0x00ff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_SDA_HOLD.
 */
struct ALT_I2C_SDA_HOLD_s
{
    uint32_t  ic_sda_tx_hold : 16;  /* ALT_I2C_SDA_HOLD_IC_SDA_TX_HOLD */
    uint32_t  ic_sda_rx_hold :  8;  /* ALT_I2C_SDA_HOLD_IC_SDA_RX_HOLD */
    uint32_t                 :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_SDA_HOLD. */
typedef volatile struct ALT_I2C_SDA_HOLD_s  ALT_I2C_SDA_HOLD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_SDA_HOLD register. */
#define ALT_I2C_SDA_HOLD_RESET       0x00000001
/* The byte offset of the ALT_I2C_SDA_HOLD register from the beginning of the component. */
#define ALT_I2C_SDA_HOLD_OFST        0x7c
/* The address of the ALT_I2C_SDA_HOLD register. */
#define ALT_I2C_SDA_HOLD_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_SDA_HOLD_OFST))

/*
 * Register : ic_tx_abrt_source
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
 * :--------|:-------|:------|:-----------------------------------------------
 *  [0]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK        
 *  [1]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK        
 *  [2]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK        
 *  [3]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK         
 *  [4]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK          
 *  [5]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD             
 *  [6]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET            
 *  [7]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET         
 *  [8]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT           
 *  [9]     | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT        
 *  [10]    | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT       
 *  [11]    | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS              
 *  [12]    | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ARB_LOST                  
 *  [13]    | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO      
 *  [14]    | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST          
 *  [15]    | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX           
 *  [16]    | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT            
 *  [22:17] | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17
 *  [31:23] | R      | 0x0   | ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT              
 * 
 */
/*
 * Field : abrt_7b_addr_noack
 * 
 * 1: Master is in 7-bit addressing mode
 * 
 * and the address sent was not
 * 
 * acknowledged by any slave.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_MSB        0
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : abrt_10addr1_noack
 * 
 * 1: Master is in 10-bit address mode and
 * 
 * the first 10-bit address byte was not
 * 
 * acknowledged by any slave.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_MSB        1
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : abrt_10addr2_noack
 * 
 * 1: Master is in 10-bit address mode and
 * 
 * the second address byte of the 10-bit
 * 
 * address was not acknowledged by any slave.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_MSB        2
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : abrt_txdata_noack
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
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_MSB        3
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_SET_MSK    0x00000008
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_CLR_MSK    0xfffffff7
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : abrt_gcall_noack
 * 
 * 1: DW_apb_i2c in master mode sent a
 * 
 * General Call and no slave on the bus
 * 
 * acknowledged the General Call.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_MSB        4
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : abrt_gcall_read
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
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_MSB        5
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : abrt_hs_ackdet
 * 
 * 1: Master is in High Speed mode and
 * 
 * the High Speed Master code was
 * 
 * acknowledged (wrong behavior).
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_MSB        6
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : abrt_sbyte_ackdet
 * 
 * 1: Master has sent a START Byte and
 * 
 * the START Byte was acknowledged (wrong behavior).
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_MSB        7
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : abrt_hs_norstrt
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
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Master-Receiver
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_MSB        8
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_SET_MSK    0x00000100
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_CLR_MSK    0xfffffeff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : abrt_sbyte_norstrt
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_MSB        9
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_SET_MSK    0x00000200
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_CLR_MSK    0xfffffdff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : abrt_10b_rd_norstrt
 * 
 * 1: The restart is disabled
 * 
 * (IC_RESTART_EN bit (IC_CON[5]) =0)
 * 
 * and the master sends a read
 * 
 * command in 10-bit addressing mode.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Receiver
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_MSB        10
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_SET_MSK    0x00000400
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_CLR_MSK    0xfffffbff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : abrt_master_dis
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_MSB        11
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_SET_MSK    0x00000800
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : arb_lost
 * 
 * 1: Master has lost arbitration, or if
 * 
 * IC_TX_ABRT_SOURCE[14] is also
 * 
 * set, then the slave transmitter has lost
 * 
 * arbitration.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * or Slave-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ARB_LOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ARB_LOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_MSB        12
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ARB_LOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ARB_LOST register field value. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_SET_MSK    0x00001000
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ARB_LOST register field value. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_CLR_MSK    0xffffefff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ARB_LOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ARB_LOST field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_I2C_TX_ABRT_SRC_ARB_LOST register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ARB_LOST_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : abrt_slvflush_txfifo
 * 
 * 1: Slave has received a read command
 * 
 * and some data exists in the TX FIFO so
 * 
 * the slave issues a TX_ABRT interrupt to
 * 
 * flush old data in TX FIFO.
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Slave-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_MSB        13
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_SET_MSK    0x00002000
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_CLR_MSK    0xffffdfff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : abrt_slv_arblost
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
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Slave-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_MSB        14
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_SET_MSK    0x00004000
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_CLR_MSK    0xffffbfff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : abrt_slvrd_intx
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
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Slave-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_MSB        15
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_SET_MSK    0x00008000
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_CLR_MSK    0xffff7fff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : abrt_user_abrt
 * 
 * This is a master-mode-only bit. Master has
 * 
 * detected the transfer abort (IC_ENABLE[1])
 * 
 * Reset value: 0x0
 * 
 * Role of DW_apb_i2c: Master-Transmitter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_MSB        16
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_WIDTH      1
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_SET_MSK    0x00010000
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT register field value. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_CLR_MSK    0xfffeffff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT register field. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : rsvd_ic_tx_abrt_source_22to17
 * 
 * Reserved
 * 
 * Reset value: 0x0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 register field. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 register field. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_MSB        22
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 register field. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_WIDTH      6
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 register field value. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_SET_MSK    0x007e0000
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 register field value. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_CLR_MSK    0xff81ffff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 register field. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_GET(value) (((value) & 0x007e0000) >> 17)
/* Produces a ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17_SET(value) (((value) << 17) & 0x007e0000)

/*
 * Field : tx_flush_cnt
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT register field. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT register field. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_MSB        31
/* The width in bits of the ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT register field. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_WIDTH      9
/* The mask used to set the ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT register field value. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_SET_MSK    0xff800000
/* The mask used to clear the ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT register field value. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_CLR_MSK    0x007fffff
/* The reset value of the ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT register field. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_RESET      0x0
/* Extracts the ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT field value from a register. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_GET(value) (((value) & 0xff800000) >> 23)
/* Produces a ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT register field value suitable for setting the register. */
#define ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT_SET(value) (((value) << 23) & 0xff800000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_TX_ABRT_SRC.
 */
struct ALT_I2C_TX_ABRT_SRC_s
{
    const uint32_t  abrt_7b_addr_noack            :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_7B_ADDR_NOACK */
    const uint32_t  abrt_10addr1_noack            :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR1_NOACK */
    const uint32_t  abrt_10addr2_noack            :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_10ADDR2_NOACK */
    const uint32_t  abrt_txdata_noack             :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_TXDATA_NOACK */
    const uint32_t  abrt_gcall_noack              :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_NOACK */
    const uint32_t  abrt_gcall_read               :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_GCALL_RD */
    const uint32_t  abrt_hs_ackdet                :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_HS_ACKDET */
    const uint32_t  abrt_sbyte_ackdet             :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_ACKDET */
    const uint32_t  abrt_hs_norstrt               :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_HS_NORSTRT */
    const uint32_t  abrt_sbyte_norstrt            :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_SBYTE_NORSTRT */
    const uint32_t  abrt_10b_rd_norstrt           :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_10B_RD_NORSTRT */
    const uint32_t  abrt_master_dis               :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_MST_DIS */
    const uint32_t  arb_lost                      :  1;  /* ALT_I2C_TX_ABRT_SRC_ARB_LOST */
    const uint32_t  abrt_slvflush_txfifo          :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_SLVFLUSH_TXFIFO */
    const uint32_t  abrt_slv_arblost              :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_SLV_ARBLOST */
    const uint32_t  abrt_slvrd_intx               :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_SLVRD_INTX */
    const uint32_t  abrt_user_abrt                :  1;  /* ALT_I2C_TX_ABRT_SRC_ABRT_USER_ABRT */
    const uint32_t  rsvd_ic_tx_abrt_source_22to17 :  6;  /* ALT_I2C_TX_ABRT_SRC_RSVD_IC_TX_ABRT_SRC_22TO17 */
    const uint32_t  tx_flush_cnt                  :  9;  /* ALT_I2C_TX_ABRT_SRC_TX_FLUSH_CNT */
};

/* The typedef declaration for register ALT_I2C_TX_ABRT_SRC. */
typedef volatile struct ALT_I2C_TX_ABRT_SRC_s  ALT_I2C_TX_ABRT_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_TX_ABRT_SRC register. */
#define ALT_I2C_TX_ABRT_SRC_RESET       0x00000000
/* The byte offset of the ALT_I2C_TX_ABRT_SRC register from the beginning of the component. */
#define ALT_I2C_TX_ABRT_SRC_OFST        0x80
/* The address of the ALT_I2C_TX_ABRT_SRC register. */
#define ALT_I2C_TX_ABRT_SRC_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_TX_ABRT_SRC_OFST))

/*
 * Register : ic_slv_data_nack_only
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
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x0   | ALT_I2C_SLV_DATA_NACK_ONLY_NACK
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : nack
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
 *  Enum                                         | Value | Description                          
 * :---------------------------------------------|:------|:--------------------------------------
 *  ALT_I2C_SLV_DATA_NACK_ONLY_NACK_E_NORM       | 0x0   | Generate NACK/ACK normally           
 *  ALT_I2C_SLV_DATA_NACK_ONLY_NACK_E_AFTERDBYTE | 0x1   | Generate NACK after data byte receive
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_SLV_DATA_NACK_ONLY_NACK
 * 
 * Generate NACK/ACK normally
 */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_E_NORM          0x0
/*
 * Enumerated value for register field ALT_I2C_SLV_DATA_NACK_ONLY_NACK
 * 
 * Generate NACK after data byte receive
 */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_E_AFTERDBYTE    0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_MSB        0
/* The width in bits of the ALT_I2C_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_WIDTH      1
/* The mask used to set the ALT_I2C_SLV_DATA_NACK_ONLY_NACK register field value. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_SLV_DATA_NACK_ONLY_NACK register field value. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_SLV_DATA_NACK_ONLY_NACK register field. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_RESET      0x0
/* Extracts the ALT_I2C_SLV_DATA_NACK_ONLY_NACK field value from a register. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_SLV_DATA_NACK_ONLY_NACK register field value suitable for setting the register. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_NACK_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_SLV_DATA_NACK_ONLY.
 */
struct ALT_I2C_SLV_DATA_NACK_ONLY_s
{
    uint32_t  nack :  1;  /* ALT_I2C_SLV_DATA_NACK_ONLY_NACK */
    uint32_t       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_SLV_DATA_NACK_ONLY. */
typedef volatile struct ALT_I2C_SLV_DATA_NACK_ONLY_s  ALT_I2C_SLV_DATA_NACK_ONLY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_SLV_DATA_NACK_ONLY register. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_RESET       0x00000000
/* The byte offset of the ALT_I2C_SLV_DATA_NACK_ONLY register from the beginning of the component. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_OFST        0x84
/* The address of the ALT_I2C_SLV_DATA_NACK_ONLY register. */
#define ALT_I2C_SLV_DATA_NACK_ONLY_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_SLV_DATA_NACK_ONLY_OFST))

/*
 * Register : ic_dma_cr
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
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | RW     | 0x0   | ALT_I2C_DMA_CR_RDMAE               
 *  [1]    | RW     | 0x0   | ALT_I2C_DMA_CR_TDMAE               
 *  [31:2] | R      | 0x0   | ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2
 * 
 */
/*
 * Field : rdmae
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
 *  Enum                       | Value | Description        
 * :---------------------------|:------|:--------------------
 *  ALT_I2C_DMA_CR_RDMAE_E_DIS | 0x0   | Receive DMA disable
 *  ALT_I2C_DMA_CR_RDMAE_E_EN  | 0x1   | Receive DMA enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_DMA_CR_RDMAE
 * 
 * Receive DMA disable
 */
#define ALT_I2C_DMA_CR_RDMAE_E_DIS  0x0
/*
 * Enumerated value for register field ALT_I2C_DMA_CR_RDMAE
 * 
 * Receive DMA enabled
 */
#define ALT_I2C_DMA_CR_RDMAE_E_EN   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_DMA_CR_RDMAE register field. */
#define ALT_I2C_DMA_CR_RDMAE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_DMA_CR_RDMAE register field. */
#define ALT_I2C_DMA_CR_RDMAE_MSB        0
/* The width in bits of the ALT_I2C_DMA_CR_RDMAE register field. */
#define ALT_I2C_DMA_CR_RDMAE_WIDTH      1
/* The mask used to set the ALT_I2C_DMA_CR_RDMAE register field value. */
#define ALT_I2C_DMA_CR_RDMAE_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_DMA_CR_RDMAE register field value. */
#define ALT_I2C_DMA_CR_RDMAE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_DMA_CR_RDMAE register field. */
#define ALT_I2C_DMA_CR_RDMAE_RESET      0x0
/* Extracts the ALT_I2C_DMA_CR_RDMAE field value from a register. */
#define ALT_I2C_DMA_CR_RDMAE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_DMA_CR_RDMAE register field value suitable for setting the register. */
#define ALT_I2C_DMA_CR_RDMAE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : tdmae
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
 *  Enum                       | Value | Description         
 * :---------------------------|:------|:---------------------
 *  ALT_I2C_DMA_CR_TDMAE_E_DIS | 0x0   | Transmit DMA disable
 *  ALT_I2C_DMA_CR_TDMAE_E_EN  | 0x1   | Transmit DMA enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_DMA_CR_TDMAE
 * 
 * Transmit DMA disable
 */
#define ALT_I2C_DMA_CR_TDMAE_E_DIS  0x0
/*
 * Enumerated value for register field ALT_I2C_DMA_CR_TDMAE
 * 
 * Transmit DMA enabled
 */
#define ALT_I2C_DMA_CR_TDMAE_E_EN   0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_DMA_CR_TDMAE register field. */
#define ALT_I2C_DMA_CR_TDMAE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_DMA_CR_TDMAE register field. */
#define ALT_I2C_DMA_CR_TDMAE_MSB        1
/* The width in bits of the ALT_I2C_DMA_CR_TDMAE register field. */
#define ALT_I2C_DMA_CR_TDMAE_WIDTH      1
/* The mask used to set the ALT_I2C_DMA_CR_TDMAE register field value. */
#define ALT_I2C_DMA_CR_TDMAE_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_DMA_CR_TDMAE register field value. */
#define ALT_I2C_DMA_CR_TDMAE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_DMA_CR_TDMAE register field. */
#define ALT_I2C_DMA_CR_TDMAE_RESET      0x0
/* Extracts the ALT_I2C_DMA_CR_TDMAE field value from a register. */
#define ALT_I2C_DMA_CR_TDMAE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_DMA_CR_TDMAE register field value suitable for setting the register. */
#define ALT_I2C_DMA_CR_TDMAE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : rsvd_ic_dma_cr_31to2
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 register field. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 register field. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_MSB        31
/* The width in bits of the ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 register field. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_WIDTH      30
/* The mask used to set the ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 register field value. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 register field value. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_CLR_MSK    0x00000003
/* The reset value of the ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 register field. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_RESET      0x0
/* Extracts the ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 field value from a register. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 register field value suitable for setting the register. */
#define ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2_SET(value) (((value) << 2) & 0xfffffffc)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_DMA_CR.
 */
struct ALT_I2C_DMA_CR_s
{
    uint32_t        rdmae                :  1;  /* ALT_I2C_DMA_CR_RDMAE */
    uint32_t        tdmae                :  1;  /* ALT_I2C_DMA_CR_TDMAE */
    const uint32_t  rsvd_ic_dma_cr_31to2 : 30;  /* ALT_I2C_DMA_CR_RSVD_IC_DMA_CR_31TO2 */
};

/* The typedef declaration for register ALT_I2C_DMA_CR. */
typedef volatile struct ALT_I2C_DMA_CR_s  ALT_I2C_DMA_CR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_DMA_CR register. */
#define ALT_I2C_DMA_CR_RESET       0x00000000
/* The byte offset of the ALT_I2C_DMA_CR register from the beginning of the component. */
#define ALT_I2C_DMA_CR_OFST        0x88
/* The address of the ALT_I2C_DMA_CR register. */
#define ALT_I2C_DMA_CR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_DMA_CR_OFST))

/*
 * Register : ic_dma_tdlr
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
 * :-------|:-------|:------|:------------------------
 *  [5:0]  | RW     | 0x0   | ALT_I2C_DMA_TDLR_DMATDL
 *  [31:6] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : dmatdl
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_DMA_TDLR_DMATDL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_DMA_TDLR_DMATDL_MSB        5
/* The width in bits of the ALT_I2C_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_DMA_TDLR_DMATDL_WIDTH      6
/* The mask used to set the ALT_I2C_DMA_TDLR_DMATDL register field value. */
#define ALT_I2C_DMA_TDLR_DMATDL_SET_MSK    0x0000003f
/* The mask used to clear the ALT_I2C_DMA_TDLR_DMATDL register field value. */
#define ALT_I2C_DMA_TDLR_DMATDL_CLR_MSK    0xffffffc0
/* The reset value of the ALT_I2C_DMA_TDLR_DMATDL register field. */
#define ALT_I2C_DMA_TDLR_DMATDL_RESET      0x0
/* Extracts the ALT_I2C_DMA_TDLR_DMATDL field value from a register. */
#define ALT_I2C_DMA_TDLR_DMATDL_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_I2C_DMA_TDLR_DMATDL register field value suitable for setting the register. */
#define ALT_I2C_DMA_TDLR_DMATDL_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_DMA_TDLR.
 */
struct ALT_I2C_DMA_TDLR_s
{
    uint32_t  dmatdl :  6;  /* ALT_I2C_DMA_TDLR_DMATDL */
    uint32_t         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_DMA_TDLR. */
typedef volatile struct ALT_I2C_DMA_TDLR_s  ALT_I2C_DMA_TDLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_DMA_TDLR register. */
#define ALT_I2C_DMA_TDLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_DMA_TDLR register from the beginning of the component. */
#define ALT_I2C_DMA_TDLR_OFST        0x8c
/* The address of the ALT_I2C_DMA_TDLR register. */
#define ALT_I2C_DMA_TDLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_DMA_TDLR_OFST))

/*
 * Register : ic_dma_rdlr
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
 * :-------|:-------|:------|:------------------------
 *  [5:0]  | RW     | 0x0   | ALT_I2C_DMA_RDLR_DMARDL
 *  [31:6] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : dmardl
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_DMA_RDLR_DMARDL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_DMA_RDLR_DMARDL_MSB        5
/* The width in bits of the ALT_I2C_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_DMA_RDLR_DMARDL_WIDTH      6
/* The mask used to set the ALT_I2C_DMA_RDLR_DMARDL register field value. */
#define ALT_I2C_DMA_RDLR_DMARDL_SET_MSK    0x0000003f
/* The mask used to clear the ALT_I2C_DMA_RDLR_DMARDL register field value. */
#define ALT_I2C_DMA_RDLR_DMARDL_CLR_MSK    0xffffffc0
/* The reset value of the ALT_I2C_DMA_RDLR_DMARDL register field. */
#define ALT_I2C_DMA_RDLR_DMARDL_RESET      0x0
/* Extracts the ALT_I2C_DMA_RDLR_DMARDL field value from a register. */
#define ALT_I2C_DMA_RDLR_DMARDL_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_I2C_DMA_RDLR_DMARDL register field value suitable for setting the register. */
#define ALT_I2C_DMA_RDLR_DMARDL_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_DMA_RDLR.
 */
struct ALT_I2C_DMA_RDLR_s
{
    uint32_t  dmardl :  6;  /* ALT_I2C_DMA_RDLR_DMARDL */
    uint32_t         : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_DMA_RDLR. */
typedef volatile struct ALT_I2C_DMA_RDLR_s  ALT_I2C_DMA_RDLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_DMA_RDLR register. */
#define ALT_I2C_DMA_RDLR_RESET       0x00000000
/* The byte offset of the ALT_I2C_DMA_RDLR register from the beginning of the component. */
#define ALT_I2C_DMA_RDLR_OFST        0x90
/* The address of the ALT_I2C_DMA_RDLR register. */
#define ALT_I2C_DMA_RDLR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_DMA_RDLR_OFST))

/*
 * Register : ic_sda_setup
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
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [7:0]  | RW     | 0x64  | ALT_I2C_SDA_SETUP_SDA_SETUP
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : sda_setup
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_MSB        7
/* The width in bits of the ALT_I2C_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_WIDTH      8
/* The mask used to set the ALT_I2C_SDA_SETUP_SDA_SETUP register field value. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_SDA_SETUP_SDA_SETUP register field value. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_SDA_SETUP_SDA_SETUP register field. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_RESET      0x64
/* Extracts the ALT_I2C_SDA_SETUP_SDA_SETUP field value from a register. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_SDA_SETUP_SDA_SETUP register field value suitable for setting the register. */
#define ALT_I2C_SDA_SETUP_SDA_SETUP_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_SDA_SETUP.
 */
struct ALT_I2C_SDA_SETUP_s
{
    uint32_t  sda_setup :  8;  /* ALT_I2C_SDA_SETUP_SDA_SETUP */
    uint32_t            : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_SDA_SETUP. */
typedef volatile struct ALT_I2C_SDA_SETUP_s  ALT_I2C_SDA_SETUP_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_SDA_SETUP register. */
#define ALT_I2C_SDA_SETUP_RESET       0x00000064
/* The byte offset of the ALT_I2C_SDA_SETUP register from the beginning of the component. */
#define ALT_I2C_SDA_SETUP_OFST        0x94
/* The address of the ALT_I2C_SDA_SETUP register. */
#define ALT_I2C_SDA_SETUP_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_SDA_SETUP_OFST))

/*
 * Register : ic_ack_general_call
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
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                   
 * :-------|:-------|:------|:-----------------------------------------------
 *  [0]    | RW     | 0x1   | ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL         
 *  [31:1] | R      | 0x0   | ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1
 * 
 */
/*
 * Field : ack_gen_call
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
 *  Enum                                         | Value | Description             
 * :---------------------------------------------|:------|:-------------------------
 *  ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_E_NACK | 0x0   | I2C responds with a NACK
 *  ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_E_ACK  | 0x1   | I2C responds with an ACK
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL
 * 
 * I2C responds with a NACK
 */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_E_NACK    0x0
/*
 * Enumerated value for register field ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL
 * 
 * I2C responds with an ACK
 */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_E_ACK     0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_MSB        0
/* The width in bits of the ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_WIDTH      1
/* The mask used to set the ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL register field value. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL register field value. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL register field. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_RESET      0x1
/* Extracts the ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL field value from a register. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL register field value suitable for setting the register. */
#define ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : rsvd_ic_ack_gen_31to1
 * 
 * Reserved bits [31:1] - Read Only
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 register field. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 register field. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_MSB        31
/* The width in bits of the ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 register field. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_WIDTH      31
/* The mask used to set the ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 register field value. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_SET_MSK    0xfffffffe
/* The mask used to clear the ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 register field value. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_CLR_MSK    0x00000001
/* The reset value of the ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 register field. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_RESET      0x0
/* Extracts the ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 field value from a register. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_GET(value) (((value) & 0xfffffffe) >> 1)
/* Produces a ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 register field value suitable for setting the register. */
#define ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1_SET(value) (((value) << 1) & 0xfffffffe)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_ACK_GENERAL_CALL.
 */
struct ALT_I2C_ACK_GENERAL_CALL_s
{
    uint32_t        ack_gen_call          :  1;  /* ALT_I2C_ACK_GENERAL_CALL_ACK_GEN_CALL */
    const uint32_t  rsvd_ic_ack_gen_31to1 : 31;  /* ALT_I2C_ACK_GENERAL_CALL_RSVD_IC_ACK_GEN_31TO1 */
};

/* The typedef declaration for register ALT_I2C_ACK_GENERAL_CALL. */
typedef volatile struct ALT_I2C_ACK_GENERAL_CALL_s  ALT_I2C_ACK_GENERAL_CALL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_ACK_GENERAL_CALL register. */
#define ALT_I2C_ACK_GENERAL_CALL_RESET       0x00000001
/* The byte offset of the ALT_I2C_ACK_GENERAL_CALL register from the beginning of the component. */
#define ALT_I2C_ACK_GENERAL_CALL_OFST        0x98
/* The address of the ALT_I2C_ACK_GENERAL_CALL register. */
#define ALT_I2C_ACK_GENERAL_CALL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_ACK_GENERAL_CALL_OFST))

/*
 * Register : ic_enable_status
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
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_EN_STAT_IC_EN              
 *  [1]    | R      | 0x0   | ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY
 *  [2]    | R      | 0x0   | ALT_I2C_EN_STAT_SLV_RX_DATA_LOST   
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : ic_en
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_EN_STAT_IC_EN register field. */
#define ALT_I2C_EN_STAT_IC_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_EN_STAT_IC_EN register field. */
#define ALT_I2C_EN_STAT_IC_EN_MSB        0
/* The width in bits of the ALT_I2C_EN_STAT_IC_EN register field. */
#define ALT_I2C_EN_STAT_IC_EN_WIDTH      1
/* The mask used to set the ALT_I2C_EN_STAT_IC_EN register field value. */
#define ALT_I2C_EN_STAT_IC_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_EN_STAT_IC_EN register field value. */
#define ALT_I2C_EN_STAT_IC_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_EN_STAT_IC_EN register field. */
#define ALT_I2C_EN_STAT_IC_EN_RESET      0x0
/* Extracts the ALT_I2C_EN_STAT_IC_EN field value from a register. */
#define ALT_I2C_EN_STAT_IC_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_EN_STAT_IC_EN register field value suitable for setting the register. */
#define ALT_I2C_EN_STAT_IC_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : slv_disabled_while_busy
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY register field. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY register field. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_MSB        1
/* The width in bits of the ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY register field. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_WIDTH      1
/* The mask used to set the ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY register field value. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_SET_MSK    0x00000002
/* The mask used to clear the ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY register field value. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_CLR_MSK    0xfffffffd
/* The reset value of the ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY register field. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_RESET      0x0
/* Extracts the ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY field value from a register. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY register field value suitable for setting the register. */
#define ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : slv_rx_data_lost
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_I2C_EN_STAT_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_EN_STAT_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_MSB        2
/* The width in bits of the ALT_I2C_EN_STAT_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_WIDTH      1
/* The mask used to set the ALT_I2C_EN_STAT_SLV_RX_DATA_LOST register field value. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_I2C_EN_STAT_SLV_RX_DATA_LOST register field value. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_I2C_EN_STAT_SLV_RX_DATA_LOST register field. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_RESET      0x0
/* Extracts the ALT_I2C_EN_STAT_SLV_RX_DATA_LOST field value from a register. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_I2C_EN_STAT_SLV_RX_DATA_LOST register field value suitable for setting the register. */
#define ALT_I2C_EN_STAT_SLV_RX_DATA_LOST_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_EN_STAT.
 */
struct ALT_I2C_EN_STAT_s
{
    const uint32_t  ic_en                   :  1;  /* ALT_I2C_EN_STAT_IC_EN */
    const uint32_t  slv_disabled_while_busy :  1;  /* ALT_I2C_EN_STAT_SLV_DISD_WHILE_BUSY */
    const uint32_t  slv_rx_data_lost        :  1;  /* ALT_I2C_EN_STAT_SLV_RX_DATA_LOST */
    uint32_t                                : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_EN_STAT. */
typedef volatile struct ALT_I2C_EN_STAT_s  ALT_I2C_EN_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_EN_STAT register. */
#define ALT_I2C_EN_STAT_RESET       0x00000000
/* The byte offset of the ALT_I2C_EN_STAT register from the beginning of the component. */
#define ALT_I2C_EN_STAT_OFST        0x9c
/* The address of the ALT_I2C_EN_STAT register. */
#define ALT_I2C_EN_STAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_EN_STAT_OFST))

/*
 * Register : ic_fs_spklen
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
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [7:0]  | RW     | 0x2   | ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : ic_fs_spklen
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_MSB        7
/* The width in bits of the ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_WIDTH      8
/* The mask used to set the ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN register field value. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_SET_MSK    0x000000ff
/* The mask used to clear the ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN register field value. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_CLR_MSK    0xffffff00
/* The reset value of the ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN register field. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_RESET      0x2
/* Extracts the ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN field value from a register. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN register field value suitable for setting the register. */
#define ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_FS_SPKLEN.
 */
struct ALT_I2C_FS_SPKLEN_s
{
    uint32_t  ic_fs_spklen :  8;  /* ALT_I2C_FS_SPKLEN_IC_FS_SPKLEN */
    uint32_t               : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_FS_SPKLEN. */
typedef volatile struct ALT_I2C_FS_SPKLEN_s  ALT_I2C_FS_SPKLEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_FS_SPKLEN register. */
#define ALT_I2C_FS_SPKLEN_RESET       0x00000002
/* The byte offset of the ALT_I2C_FS_SPKLEN register from the beginning of the component. */
#define ALT_I2C_FS_SPKLEN_OFST        0xa0
/* The address of the ALT_I2C_FS_SPKLEN register. */
#define ALT_I2C_FS_SPKLEN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_FS_SPKLEN_OFST))

/*
 * Register : ic_clr_restart_det
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
 * :-------|:-------|:------|:----------------------------------------
 *  [0]    | R      | 0x0   | ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                            
 * 
 */
/*
 * Field : clr_restart_det
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_MSB        0
/* The width in bits of the ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_WIDTH      1
/* The mask used to set the ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET register field value. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_SET_MSK    0x00000001
/* The mask used to clear the ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET register field value. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET register field. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_RESET      0x0
/* Extracts the ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET field value from a register. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET register field value suitable for setting the register. */
#define ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_CLR_RESTART_DET.
 */
struct ALT_I2C_CLR_RESTART_DET_s
{
    const uint32_t  clr_restart_det :  1;  /* ALT_I2C_CLR_RESTART_DET_CLR_RESTART_DET */
    uint32_t                        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_CLR_RESTART_DET. */
typedef volatile struct ALT_I2C_CLR_RESTART_DET_s  ALT_I2C_CLR_RESTART_DET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_CLR_RESTART_DET register. */
#define ALT_I2C_CLR_RESTART_DET_RESET       0x00000000
/* The byte offset of the ALT_I2C_CLR_RESTART_DET register from the beginning of the component. */
#define ALT_I2C_CLR_RESTART_DET_OFST        0xa8
/* The address of the ALT_I2C_CLR_RESTART_DET register. */
#define ALT_I2C_CLR_RESTART_DET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_CLR_RESTART_DET_OFST))

/*
 * Register : ic_comp_param_1
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
 * :--------|:-------|:------|:-------------------------------------
 *  [1:0]   | R      | 0x2   | ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH 
 *  [3:2]   | R      | 0x2   | ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD  
 *  [4]     | R      | 0x0   | ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES
 *  [5]     | R      | 0x1   | ALT_I2C_COMP_PARAM_1_INTR_IO        
 *  [6]     | R      | 0x1   | ALT_I2C_COMP_PARAM_1_HAS_DMA        
 *  [7]     | R      | 0x1   | ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS 
 *  [15:8]  | R      | 0x3f  | ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH   
 *  [23:16] | R      | 0x3f  | ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH   
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : apb_data_width
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
 *  Enum                                              | Value | Description              
 * :--------------------------------------------------|:------|:--------------------------
 *  ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_E_WIDTH32BITS | 0x2   | APB Data Width is 32 Bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH
 * 
 * APB Data Width is 32 Bits
 */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_E_WIDTH32BITS   0x2

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_MSB        1
/* The width in bits of the ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_WIDTH      2
/* The mask used to set the ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH register field value. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_SET_MSK    0x00000003
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH register field value. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_CLR_MSK    0xfffffffc
/* The reset value of the ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH register field. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_RESET      0x2
/* Extracts the ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH field value from a register. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : max_speed_mode
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
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description           
 * :------------------------------------------|:------|:-----------------------
 *  ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_E_FAST | 0x2   | Fast Mode (400 kbit/s)
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD
 * 
 * Fast Mode (400 kbit/s)
 */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_E_FAST   0x2

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD register field. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD register field. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_MSB        3
/* The width in bits of the ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD register field. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_WIDTH      2
/* The mask used to set the ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD register field value. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_SET_MSK    0x0000000c
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD register field value. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_CLR_MSK    0xfffffff3
/* The reset value of the ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD register field. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_RESET      0x2
/* Extracts the ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD field value from a register. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : hc_count_values
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
 *  Enum                                        | Value | Description              
 * :--------------------------------------------|:------|:--------------------------
 *  ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_E_RDWR | 0x0   | *CNT registers read/write
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES
 * 
 * * CNT registers read/write
 */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_E_RDWR 0x0

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_MSB        4
/* The width in bits of the ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_WIDTH      1
/* The mask used to set the ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES register field value. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_SET_MSK    0x00000010
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES register field value. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_CLR_MSK    0xffffffef
/* The reset value of the ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES register field. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_RESET      0x0
/* Extracts the ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES field value from a register. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : intr_io
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
 *  Enum                                    | Value | Description              
 * :----------------------------------------|:------|:--------------------------
 *  ALT_I2C_COMP_PARAM_1_INTR_IO_E_COMBINED | 0x1   | Combined Interrupt Output
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_INTR_IO
 * 
 * Combined Interrupt Output
 */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_E_COMBINED 0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_MSB        5
/* The width in bits of the ALT_I2C_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_WIDTH      1
/* The mask used to set the ALT_I2C_COMP_PARAM_1_INTR_IO register field value. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_SET_MSK    0x00000020
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_INTR_IO register field value. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_CLR_MSK    0xffffffdf
/* The reset value of the ALT_I2C_COMP_PARAM_1_INTR_IO register field. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_RESET      0x1
/* Extracts the ALT_I2C_COMP_PARAM_1_INTR_IO field value from a register. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_I2C_COMP_PARAM_1_INTR_IO register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_INTR_IO_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : has_dma
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
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_I2C_COMP_PARAM_1_HAS_DMA_E_PRESENT | 0x1   | Has DMA    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_HAS_DMA
 * 
 * Has DMA
 */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_E_PRESENT  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_MSB        6
/* The width in bits of the ALT_I2C_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_WIDTH      1
/* The mask used to set the ALT_I2C_COMP_PARAM_1_HAS_DMA register field value. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_SET_MSK    0x00000040
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_HAS_DMA register field value. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_CLR_MSK    0xffffffbf
/* The reset value of the ALT_I2C_COMP_PARAM_1_HAS_DMA register field. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_RESET      0x1
/* Extracts the ALT_I2C_COMP_PARAM_1_HAS_DMA field value from a register. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_I2C_COMP_PARAM_1_HAS_DMA register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_HAS_DMA_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : add_encoded_params
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
 *  Enum                                               | Value | Description       
 * :---------------------------------------------------|:------|:-------------------
 *  ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_E_ADDENCPARAMS | 0x1   | Add Encoded Params
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS
 * 
 * Add Encoded Params
 */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_E_ADDENCPARAMS  0x1

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS register field. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS register field. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_MSB        7
/* The width in bits of the ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS register field. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_WIDTH      1
/* The mask used to set the ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS register field value. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_SET_MSK    0x00000080
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS register field value. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_CLR_MSK    0xffffff7f
/* The reset value of the ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS register field. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_RESET      0x1
/* Extracts the ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS field value from a register. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : rx_buffer_depth
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
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description             
 * :------------------------------------------------|:------|:-------------------------
 *  ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_E_FIFO64BYTES | 0x40  | Rx Fifo Depth 64 Entries
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH
 * 
 * Rx Fifo Depth 64 Entries
 */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_E_FIFO64BYTES 0x40

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_MSB        15
/* The width in bits of the ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_WIDTH      8
/* The mask used to set the ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH register field value. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH register field value. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_CLR_MSK    0xffff00ff
/* The reset value of the ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_RESET      0x3f
/* Extracts the ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH field value from a register. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : tx_buffer_depth
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
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description               
 * :------------------------------------------------|:------|:---------------------------
 *  ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_E_FIFO64BYTES | 0x40  | Tx Buffer Depth 64 Entries
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH
 * 
 * Tx Buffer Depth 64 Entries
 */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_E_FIFO64BYTES 0x40

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_MSB        23
/* The width in bits of the ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_WIDTH      8
/* The mask used to set the ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH register field value. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH register field value. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_CLR_MSK    0xff00ffff
/* The reset value of the ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH register field. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_RESET      0x3f
/* Extracts the ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH field value from a register. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH register field value suitable for setting the register. */
#define ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH_SET(value) (((value) << 16) & 0x00ff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_COMP_PARAM_1.
 */
struct ALT_I2C_COMP_PARAM_1_s
{
    const uint32_t  apb_data_width     :  2;  /* ALT_I2C_COMP_PARAM_1_APB_DATA_WIDTH */
    const uint32_t  max_speed_mode     :  2;  /* ALT_I2C_COMP_PARAM_1_MAX_SPEED_MOD */
    const uint32_t  hc_count_values    :  1;  /* ALT_I2C_COMP_PARAM_1_HC_COUNT_VALUES */
    const uint32_t  intr_io            :  1;  /* ALT_I2C_COMP_PARAM_1_INTR_IO */
    const uint32_t  has_dma            :  1;  /* ALT_I2C_COMP_PARAM_1_HAS_DMA */
    const uint32_t  add_encoded_params :  1;  /* ALT_I2C_COMP_PARAM_1_ADD_ENC_PARAMS */
    const uint32_t  rx_buffer_depth    :  8;  /* ALT_I2C_COMP_PARAM_1_RX_BUF_DEPTH */
    const uint32_t  tx_buffer_depth    :  8;  /* ALT_I2C_COMP_PARAM_1_TX_BUF_DEPTH */
    uint32_t                           :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_I2C_COMP_PARAM_1. */
typedef volatile struct ALT_I2C_COMP_PARAM_1_s  ALT_I2C_COMP_PARAM_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_COMP_PARAM_1 register. */
#define ALT_I2C_COMP_PARAM_1_RESET       0x003f3fea
/* The byte offset of the ALT_I2C_COMP_PARAM_1 register from the beginning of the component. */
#define ALT_I2C_COMP_PARAM_1_OFST        0xf4
/* The address of the ALT_I2C_COMP_PARAM_1 register. */
#define ALT_I2C_COMP_PARAM_1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_COMP_PARAM_1_OFST))

/*
 * Register : ic_comp_version
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
 * :-------|:-------|:-----------|:-----------------------------
 *  [31:0] | R      | 0x3132312a | ALT_I2C_COMP_VER_IC_COMP_VER
 * 
 */
/*
 * Field : ic_comp_version
 * 
 * Specific values for this register are
 * 
 * described in the Releases Table in the
 * 
 * DW_apb_i2c Release Notes
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value      | Description  
 * :-----------------------------------------|:-----------|:--------------
 *  ALT_I2C_COMP_VER_IC_COMP_VER_E_VER_1_21A | 0x3132312a | Version 1.21a
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_I2C_COMP_VER_IC_COMP_VER
 * 
 * Version 1.21a
 */
#define ALT_I2C_COMP_VER_IC_COMP_VER_E_VER_1_21A    0x3132312a

/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_VER_IC_COMP_VER register field. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_VER_IC_COMP_VER register field. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_MSB        31
/* The width in bits of the ALT_I2C_COMP_VER_IC_COMP_VER register field. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_WIDTH      32
/* The mask used to set the ALT_I2C_COMP_VER_IC_COMP_VER register field value. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_SET_MSK    0xffffffff
/* The mask used to clear the ALT_I2C_COMP_VER_IC_COMP_VER register field value. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_CLR_MSK    0x00000000
/* The reset value of the ALT_I2C_COMP_VER_IC_COMP_VER register field. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_RESET      0x3132312a
/* Extracts the ALT_I2C_COMP_VER_IC_COMP_VER field value from a register. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_I2C_COMP_VER_IC_COMP_VER register field value suitable for setting the register. */
#define ALT_I2C_COMP_VER_IC_COMP_VER_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_COMP_VER.
 */
struct ALT_I2C_COMP_VER_s
{
    const uint32_t  ic_comp_version : 32;  /* ALT_I2C_COMP_VER_IC_COMP_VER */
};

/* The typedef declaration for register ALT_I2C_COMP_VER. */
typedef volatile struct ALT_I2C_COMP_VER_s  ALT_I2C_COMP_VER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_COMP_VER register. */
#define ALT_I2C_COMP_VER_RESET       0x3132312a
/* The byte offset of the ALT_I2C_COMP_VER register from the beginning of the component. */
#define ALT_I2C_COMP_VER_OFST        0xf8
/* The address of the ALT_I2C_COMP_VER register. */
#define ALT_I2C_COMP_VER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_COMP_VER_OFST))

/*
 * Register : ic_comp_type
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
 * :-------|:-------|:-----------|:-------------------------------
 *  [31:0] | R      | 0x44570140 | ALT_I2C_COMP_TYPE_IC_COMP_TYPE
 * 
 */
/*
 * Field : ic_comp_type
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
/* The Least Significant Bit (LSB) position of the ALT_I2C_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_I2C_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_MSB        31
/* The width in bits of the ALT_I2C_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_WIDTH      32
/* The mask used to set the ALT_I2C_COMP_TYPE_IC_COMP_TYPE register field value. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_I2C_COMP_TYPE_IC_COMP_TYPE register field value. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_CLR_MSK    0x00000000
/* The reset value of the ALT_I2C_COMP_TYPE_IC_COMP_TYPE register field. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_RESET      0x44570140
/* Extracts the ALT_I2C_COMP_TYPE_IC_COMP_TYPE field value from a register. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_I2C_COMP_TYPE_IC_COMP_TYPE register field value suitable for setting the register. */
#define ALT_I2C_COMP_TYPE_IC_COMP_TYPE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_I2C_COMP_TYPE.
 */
struct ALT_I2C_COMP_TYPE_s
{
    const uint32_t  ic_comp_type : 32;  /* ALT_I2C_COMP_TYPE_IC_COMP_TYPE */
};

/* The typedef declaration for register ALT_I2C_COMP_TYPE. */
typedef volatile struct ALT_I2C_COMP_TYPE_s  ALT_I2C_COMP_TYPE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_I2C_COMP_TYPE register. */
#define ALT_I2C_COMP_TYPE_RESET       0x44570140
/* The byte offset of the ALT_I2C_COMP_TYPE register from the beginning of the component. */
#define ALT_I2C_COMP_TYPE_OFST        0xfc
/* The address of the ALT_I2C_COMP_TYPE register. */
#define ALT_I2C_COMP_TYPE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_I2C_COMP_TYPE_OFST))

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_I2C.
 */
struct ALT_I2C_s
{
    ALT_I2C_CON_t                 ic_con;                 /* ALT_I2C_CON */
    ALT_I2C_TAR_t                 ic_tar;                 /* ALT_I2C_TAR */
    ALT_I2C_SAR_t                 ic_sar;                 /* ALT_I2C_SAR */
    volatile uint32_t             _pad_0xc_0xf;           /* *UNDEFINED* */
    ALT_I2C_DATA_CMD_t            ic_data_cmd;            /* ALT_I2C_DATA_CMD */
    ALT_I2C_SS_SCL_HCNT_t         ic_ss_scl_hcnt;         /* ALT_I2C_SS_SCL_HCNT */
    ALT_I2C_SS_SCL_LCNT_t         ic_ss_scl_lcnt;         /* ALT_I2C_SS_SCL_LCNT */
    ALT_I2C_FS_SCL_HCNT_t         ic_fs_scl_hcnt;         /* ALT_I2C_FS_SCL_HCNT */
    ALT_I2C_FS_SCL_LCNT_t         ic_fs_scl_lcnt;         /* ALT_I2C_FS_SCL_LCNT */
    volatile uint32_t             _pad_0x24_0x2b[2];      /* *UNDEFINED* */
    ALT_I2C_INTR_STAT_t           ic_intr_stat;           /* ALT_I2C_INTR_STAT */
    ALT_I2C_INTR_MSK_t            ic_intr_mask;           /* ALT_I2C_INTR_MSK */
    ALT_I2C_RAW_INTR_STAT_t       ic_raw_intr_stat;       /* ALT_I2C_RAW_INTR_STAT */
    ALT_I2C_RX_TL_t               ic_rx_tl;               /* ALT_I2C_RX_TL */
    ALT_I2C_TX_TL_t               ic_tx_tl;               /* ALT_I2C_TX_TL */
    ALT_I2C_CLR_INTR_t            ic_clr_intr;            /* ALT_I2C_CLR_INTR */
    ALT_I2C_CLR_RX_UNDER_t        ic_clr_rx_under;        /* ALT_I2C_CLR_RX_UNDER */
    ALT_I2C_CLR_RX_OVER_t         ic_clr_rx_over;         /* ALT_I2C_CLR_RX_OVER */
    ALT_I2C_CLR_TX_OVER_t         ic_clr_tx_over;         /* ALT_I2C_CLR_TX_OVER */
    ALT_I2C_CLR_RD_REQ_t          ic_clr_rd_req;          /* ALT_I2C_CLR_RD_REQ */
    ALT_I2C_CLR_TX_ABRT_t         ic_clr_tx_abrt;         /* ALT_I2C_CLR_TX_ABRT */
    ALT_I2C_CLR_RX_DONE_t         ic_clr_rx_done;         /* ALT_I2C_CLR_RX_DONE */
    ALT_I2C_CLR_ACTIVITY_t        ic_clr_activity;        /* ALT_I2C_CLR_ACTIVITY */
    ALT_I2C_CLR_STOP_DET_t        ic_clr_stop_det;        /* ALT_I2C_CLR_STOP_DET */
    ALT_I2C_CLR_START_DET_t       ic_clr_start_det;       /* ALT_I2C_CLR_START_DET */
    ALT_I2C_CLR_GEN_CALL_t        ic_clr_gen_call;        /* ALT_I2C_CLR_GEN_CALL */
    ALT_I2C_EN_t                  ic_enable;              /* ALT_I2C_EN */
    ALT_I2C_STAT_t                ic_status;              /* ALT_I2C_STAT */
    ALT_I2C_TXFLR_t               ic_txflr;               /* ALT_I2C_TXFLR */
    ALT_I2C_RXFLR_t               ic_rxflr;               /* ALT_I2C_RXFLR */
    ALT_I2C_SDA_HOLD_t            ic_sda_hold;            /* ALT_I2C_SDA_HOLD */
    ALT_I2C_TX_ABRT_SRC_t         ic_tx_abrt_source;      /* ALT_I2C_TX_ABRT_SRC */
    ALT_I2C_SLV_DATA_NACK_ONLY_t  ic_slv_data_nack_only;  /* ALT_I2C_SLV_DATA_NACK_ONLY */
    ALT_I2C_DMA_CR_t              ic_dma_cr;              /* ALT_I2C_DMA_CR */
    ALT_I2C_DMA_TDLR_t            ic_dma_tdlr;            /* ALT_I2C_DMA_TDLR */
    ALT_I2C_DMA_RDLR_t            ic_dma_rdlr;            /* ALT_I2C_DMA_RDLR */
    ALT_I2C_SDA_SETUP_t           ic_sda_setup;           /* ALT_I2C_SDA_SETUP */
    ALT_I2C_ACK_GENERAL_CALL_t    ic_ack_general_call;    /* ALT_I2C_ACK_GENERAL_CALL */
    ALT_I2C_EN_STAT_t             ic_enable_status;       /* ALT_I2C_EN_STAT */
    ALT_I2C_FS_SPKLEN_t           ic_fs_spklen;           /* ALT_I2C_FS_SPKLEN */
    volatile uint32_t             _pad_0xa4_0xa7;         /* *UNDEFINED* */
    ALT_I2C_CLR_RESTART_DET_t     ic_clr_restart_det;     /* ALT_I2C_CLR_RESTART_DET */
    volatile uint32_t             _pad_0xac_0xf3[18];     /* *UNDEFINED* */
    ALT_I2C_COMP_PARAM_1_t        ic_comp_param_1;        /* ALT_I2C_COMP_PARAM_1 */
    ALT_I2C_COMP_VER_t            ic_comp_version;        /* ALT_I2C_COMP_VER */
    ALT_I2C_COMP_TYPE_t           ic_comp_type;           /* ALT_I2C_COMP_TYPE */
};

/* The typedef declaration for register group ALT_I2C. */
typedef volatile struct ALT_I2C_s  ALT_I2C_t;
/* The struct declaration for the raw register contents of register group ALT_I2C. */
struct ALT_I2C_raw_s
{
    volatile uint32_t  ic_con;                 /* ALT_I2C_CON */
    volatile uint32_t  ic_tar;                 /* ALT_I2C_TAR */
    volatile uint32_t  ic_sar;                 /* ALT_I2C_SAR */
    uint32_t           _pad_0xc_0xf;           /* *UNDEFINED* */
    volatile uint32_t  ic_data_cmd;            /* ALT_I2C_DATA_CMD */
    volatile uint32_t  ic_ss_scl_hcnt;         /* ALT_I2C_SS_SCL_HCNT */
    volatile uint32_t  ic_ss_scl_lcnt;         /* ALT_I2C_SS_SCL_LCNT */
    volatile uint32_t  ic_fs_scl_hcnt;         /* ALT_I2C_FS_SCL_HCNT */
    volatile uint32_t  ic_fs_scl_lcnt;         /* ALT_I2C_FS_SCL_LCNT */
    uint32_t           _pad_0x24_0x2b[2];      /* *UNDEFINED* */
    volatile uint32_t  ic_intr_stat;           /* ALT_I2C_INTR_STAT */
    volatile uint32_t  ic_intr_mask;           /* ALT_I2C_INTR_MSK */
    volatile uint32_t  ic_raw_intr_stat;       /* ALT_I2C_RAW_INTR_STAT */
    volatile uint32_t  ic_rx_tl;               /* ALT_I2C_RX_TL */
    volatile uint32_t  ic_tx_tl;               /* ALT_I2C_TX_TL */
    volatile uint32_t  ic_clr_intr;            /* ALT_I2C_CLR_INTR */
    volatile uint32_t  ic_clr_rx_under;        /* ALT_I2C_CLR_RX_UNDER */
    volatile uint32_t  ic_clr_rx_over;         /* ALT_I2C_CLR_RX_OVER */
    volatile uint32_t  ic_clr_tx_over;         /* ALT_I2C_CLR_TX_OVER */
    volatile uint32_t  ic_clr_rd_req;          /* ALT_I2C_CLR_RD_REQ */
    volatile uint32_t  ic_clr_tx_abrt;         /* ALT_I2C_CLR_TX_ABRT */
    volatile uint32_t  ic_clr_rx_done;         /* ALT_I2C_CLR_RX_DONE */
    volatile uint32_t  ic_clr_activity;        /* ALT_I2C_CLR_ACTIVITY */
    volatile uint32_t  ic_clr_stop_det;        /* ALT_I2C_CLR_STOP_DET */
    volatile uint32_t  ic_clr_start_det;       /* ALT_I2C_CLR_START_DET */
    volatile uint32_t  ic_clr_gen_call;        /* ALT_I2C_CLR_GEN_CALL */
    volatile uint32_t  ic_enable;              /* ALT_I2C_EN */
    volatile uint32_t  ic_status;              /* ALT_I2C_STAT */
    volatile uint32_t  ic_txflr;               /* ALT_I2C_TXFLR */
    volatile uint32_t  ic_rxflr;               /* ALT_I2C_RXFLR */
    volatile uint32_t  ic_sda_hold;            /* ALT_I2C_SDA_HOLD */
    volatile uint32_t  ic_tx_abrt_source;      /* ALT_I2C_TX_ABRT_SRC */
    volatile uint32_t  ic_slv_data_nack_only;  /* ALT_I2C_SLV_DATA_NACK_ONLY */
    volatile uint32_t  ic_dma_cr;              /* ALT_I2C_DMA_CR */
    volatile uint32_t  ic_dma_tdlr;            /* ALT_I2C_DMA_TDLR */
    volatile uint32_t  ic_dma_rdlr;            /* ALT_I2C_DMA_RDLR */
    volatile uint32_t  ic_sda_setup;           /* ALT_I2C_SDA_SETUP */
    volatile uint32_t  ic_ack_general_call;    /* ALT_I2C_ACK_GENERAL_CALL */
    volatile uint32_t  ic_enable_status;       /* ALT_I2C_EN_STAT */
    volatile uint32_t  ic_fs_spklen;           /* ALT_I2C_FS_SPKLEN */
    uint32_t           _pad_0xa4_0xa7;         /* *UNDEFINED* */
    volatile uint32_t  ic_clr_restart_det;     /* ALT_I2C_CLR_RESTART_DET */
    uint32_t           _pad_0xac_0xf3[18];     /* *UNDEFINED* */
    volatile uint32_t  ic_comp_param_1;        /* ALT_I2C_COMP_PARAM_1 */
    volatile uint32_t  ic_comp_version;        /* ALT_I2C_COMP_VER */
    volatile uint32_t  ic_comp_type;           /* ALT_I2C_COMP_TYPE */
};

/* The typedef declaration for the raw register contents of register group ALT_I2C. */
typedef volatile struct ALT_I2C_raw_s  ALT_I2C_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_I2C_H__ */

