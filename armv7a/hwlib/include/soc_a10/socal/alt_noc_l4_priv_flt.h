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

/* Altera - ALT_NOC_L4_PRIV_FLT */

#ifndef __ALT_SOCAL_NOC_L4_PRIV_FLT_H__
#define __ALT_SOCAL_NOC_L4_PRIV_FLT_H__

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
 * Component : ALT_NOC_L4_PRIV_FLT
 * 
 */
/*
 * Register : l4_priv
 * 
 * This register controls access to various Peripherals depending on the privilege
 * setting. By default, all slaves will be assumed as Privileged. To allow non-
 * Privileged access to a slave, the corresponding bit for the slave must be set.
 * Once set, both Privilege and non-Privileged transactions are allowed to the
 * Slave. Note that the privilege filter only checks for transaction Privilege
 * level, transaction Security is left to Firewalls. Firewalls therefore may still
 * block transaction to Peripherals depending on Security configurations.
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset   | Description                              
 * :-----|:-------|:--------|:------------------------------------------
 *  [0]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG     
 *  [1]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA    
 *  [2]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA    
 *  [3]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG     
 *  [4]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG     
 *  [5]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE
 *  [6]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE   
 *  [7]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0     
 *  [8]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1     
 *  [9]  | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0     
 *  [10] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1     
 *  [11] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0        
 *  [12] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1        
 *  [13] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2        
 *  [14] | RW     | Unknown | ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3        
 *  [15] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI         
 *  [16] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC        
 *  [17] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0        
 *  [18] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1        
 *  [19] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2        
 *  [20] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0         
 *  [21] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1         
 *  [22] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2         
 *  [23] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3         
 *  [24] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4         
 *  [25] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0      
 *  [26] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1      
 *  [27] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0        
 *  [28] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1        
 *  [29] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F        
 *  [30] | RW     | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F          
 *  [31] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : nand_register
 * 
 * Privilege bit for nand register. When 0, only privileged transactions are
 * allowed to slave. When 1, both privileged and non-privileged transactions are
 * allowed to slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_MSB        0
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : nand_data
 * 
 * Privilege bit for nand_data. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_MSB        1
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : qspi_data
 * 
 * Privilege bit for qspi_data. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_MSB        2
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb0_register
 * 
 * Privilege bit for usb0_register. When 0, only privileged transactions are
 * allowed to slave. When 1, both privileged and non-privileged transactions are
 * allowed to slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_MSB        3
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : usb1_register
 * 
 * Privilege bit for usb1_register. When 0, only privileged transactions are
 * allowed to slave. When 1, both privileged and non-privileged transactions are
 * allowed to slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_MSB        4
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : dma_nonsecure
 * 
 * Privilege bit for dma_nonsecure. When 0, only privileged transactions are
 * allowed to slave. When 1, both privileged and non-privileged transactions are
 * allowed to slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_MSB        5
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : dma_secure
 * 
 * Privilege bit for dma_secure. When 0, only privileged transactions are allowed
 * to slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_MSB        6
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : spi_master0
 * 
 * Privilege bit for spi_master0. When 0, only privileged transactions are allowed
 * to slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_MSB        7
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : spi_master1
 * 
 * Privilege bit for spi_master1. When 0, only privileged transactions are allowed
 * to slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_MSB        8
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : spi_slave0
 * 
 * Privilege bit for spi_slave0. When 0, only privileged transactions are allowed
 * to slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_MSB        9
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : spi_slave1
 * 
 * Privilege bit for spi_slave1. When 0, only privileged transactions are allowed
 * to slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_MSB        10
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : emac0
 * 
 * Privilege bit for emac0. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_MSB        11
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : emac1
 * 
 * Privilege bit for emac1. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_MSB        12
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : emac2
 * 
 * Privilege bit for emac2. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_MSB        13
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : emac3
 * 
 * Privilege bit for emac3. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_MSB        14
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_SET_MSK    0x00004000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_CLR_MSK    0xffffbfff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 register field is UNKNOWN. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : qspi
 * 
 * Privilege bit for qspi. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_MSB        15
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_SET_MSK    0x00008000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_CLR_MSK    0xffff7fff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : sdmmc
 * 
 * Privilege bit for sdmmc. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_MSB        16
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : gpio0
 * 
 * Privilege bit for gpio0. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_MSB        17
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : gpio1
 * 
 * Privilege bit for gpio1. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_MSB        18
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : gpio2
 * 
 * Privilege bit for gpio2. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_MSB        19
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_SET_MSK    0x00080000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : i2c0
 * 
 * Privilege bit for i2c0. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_MSB        20
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : i2c1
 * 
 * Privilege bit for i2c1. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_MSB        21
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : i2c2
 * 
 * Privilege bit for i2c2. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_MSB        22
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : i2c3
 * 
 * Privilege bit for i2c3. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_MSB        23
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : i2c4
 * 
 * Privilege bit for i2c4. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_MSB        24
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : sp_timer0
 * 
 * Privilege bit for sp_timer0. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_MSB        25
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : sp_timer1
 * 
 * Privilege bit for sp_timer1. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_MSB        26
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_SET_MSK    0x04000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_CLR_MSK    0xfbffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : uart0
 * 
 * Privilege bit for uart0. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_MSB        27
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_SET_MSK    0x08000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : uart1
 * 
 * Privilege bit for uart1. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_MSB        28
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_SET_MSK    0x10000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_CLR_MSK    0xefffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : lwsoc2fpga
 * 
 * Privilege bit for Lightweight SOC2FPGA. When 0, only privileged transactions are
 * allowed to slave. When 1, both privileged and non-privileged transactions are
 * allowed to slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_MSB        29
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_SET_MSK    0x20000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_CLR_MSK    0xdfffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : soc2fpga
 * 
 * Privilege bit for SOC2FPGA. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_MSB        30
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_SET_MSK    0x40000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_CLR_MSK    0xbfffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F_SET(value) (((value) << 30) & 0x40000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_L4_PRIV_FLT_L4_PRIV.
 */
struct ALT_NOC_L4_PRIV_FLT_L4_PRIV_s
{
    uint32_t  nand_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_REG */
    uint32_t  nand_data     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_NAND_DATA */
    uint32_t  qspi_data     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI_DATA */
    uint32_t  usb0_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB0_REG */
    uint32_t  usb1_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_USB1_REG */
    uint32_t  dma_nonsecure :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_NONSECURE */
    uint32_t  dma_secure    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_DMA_SECURE */
    uint32_t  spi_master0   :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST0 */
    uint32_t  spi_master1   :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_MST1 */
    uint32_t  spi_slave0    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV0 */
    uint32_t  spi_slave1    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SPI_SLV1 */
    uint32_t  emac0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC0 */
    uint32_t  emac1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC1 */
    uint32_t  emac2         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC2 */
    uint32_t  emac3         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_EMAC3 */
    uint32_t  qspi          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_QSPI */
    uint32_t  sdmmc         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SDMMC */
    uint32_t  gpio0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO0 */
    uint32_t  gpio1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO1 */
    uint32_t  gpio2         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_GPIO2 */
    uint32_t  i2c0          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C0 */
    uint32_t  i2c1          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C1 */
    uint32_t  i2c2          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C2 */
    uint32_t  i2c3          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C3 */
    uint32_t  i2c4          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_I2C4 */
    uint32_t  sp_timer0     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR0 */
    uint32_t  sp_timer1     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SP_TMR1 */
    uint32_t  uart0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART0 */
    uint32_t  uart1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_UART1 */
    uint32_t  lwsoc2fpga    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_LWH2F */
    uint32_t  soc2fpga      :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_H2F */
    uint32_t                :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_L4_PRIV_FLT_L4_PRIV. */
typedef volatile struct ALT_NOC_L4_PRIV_FLT_L4_PRIV_s  ALT_NOC_L4_PRIV_FLT_L4_PRIV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_RESET       0x00000000
/* The byte offset of the ALT_NOC_L4_PRIV_FLT_L4_PRIV register from the beginning of the component. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_OFST        0x0

/*
 * Register : l4_priv_set
 * 
 * Sets Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset   | Description                                  
 * :-----|:-------|:--------|:----------------------------------------------
 *  [0]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG     
 *  [1]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA    
 *  [2]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA    
 *  [3]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG     
 *  [4]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG     
 *  [5]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE
 *  [6]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE   
 *  [7]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0     
 *  [8]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1     
 *  [9]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0     
 *  [10] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1     
 *  [11] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0        
 *  [12] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1        
 *  [13] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2        
 *  [14] | RW     | Unknown | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3        
 *  [15] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI         
 *  [16] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC        
 *  [17] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0        
 *  [18] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1        
 *  [19] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2        
 *  [20] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0         
 *  [21] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1         
 *  [22] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2         
 *  [23] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3         
 *  [24] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4         
 *  [25] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0      
 *  [26] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1      
 *  [27] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0        
 *  [28] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1        
 *  [29] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F        
 *  [30] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F          
 *  [31] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : nand_register
 * 
 * Privilege bit for nand register. Writing zero has no effect. Writing one will
 * set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_MSB        0
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : nand_data
 * 
 * Privilege bit for nand_data. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_MSB        1
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : qspi_data
 * 
 * Privilege bit for qspi_data. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_MSB        2
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb0_register
 * 
 * Privilege bit for usb0_register. Writing zero has no effect. Writing one will
 * set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_MSB        3
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : usb1_register
 * 
 * Privilege bit for usb1_register. Writing zero has no effect. Writing one will
 * set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_MSB        4
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : dma_nonsecure
 * 
 * Privilege bit for dma_nonsecure. Writing zero has no effect. Writing one will
 * set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_MSB        5
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : dma_secure
 * 
 * Privilege bit for dma_secure. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_MSB        6
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : spi_master0
 * 
 * Privilege bit for spi_master0. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_MSB        7
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : spi_master1
 * 
 * Privilege bit for spi_master1. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_MSB        8
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : spi_slave0
 * 
 * Privilege bit for spi_slave0. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_MSB        9
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : spi_slave1
 * 
 * Privilege bit for spi_slave1. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_MSB        10
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : emac0
 * 
 * Privilege bit for emac0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_MSB        11
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : emac1
 * 
 * Privilege bit for emac1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_MSB        12
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : emac2
 * 
 * Privilege bit for emac2. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_MSB        13
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : emac3
 * 
 * Privilege bit for emac3. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_MSB        14
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_SET_MSK    0x00004000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_CLR_MSK    0xffffbfff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 register field is UNKNOWN. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : qspi
 * 
 * Privilege bit for qspi. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_MSB        15
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_SET_MSK    0x00008000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_CLR_MSK    0xffff7fff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : sdmmc
 * 
 * Privilege bit for sdmmc. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_MSB        16
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : gpio0
 * 
 * Privilege bit for gpio0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_MSB        17
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : gpio1
 * 
 * Privilege bit for gpio1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_MSB        18
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : gpio2
 * 
 * Privilege bit for gpio2. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_MSB        19
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_SET_MSK    0x00080000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : i2c0
 * 
 * Privilege bit for i2c0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_MSB        20
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : i2c1
 * 
 * Privilege bit for i2c1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_MSB        21
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : i2c2
 * 
 * Privilege bit for i2c2. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_MSB        22
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : i2c3
 * 
 * Privilege bit for i2c3. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_MSB        23
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : i2c4
 * 
 * Privilege bit for i2c4. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_MSB        24
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : sp_timer0
 * 
 * Privilege bit for sp_timer0. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_MSB        25
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : sp_timer1
 * 
 * Privilege bit for sp_timer1. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_MSB        26
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_SET_MSK    0x04000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_CLR_MSK    0xfbffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : uart0
 * 
 * Privilege bit for uart0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_MSB        27
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_SET_MSK    0x08000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : uart1
 * 
 * Privilege bit for uart1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_MSB        28
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_SET_MSK    0x10000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_CLR_MSK    0xefffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : lwsoc2fpga
 * 
 * Privilege bit for Lightweight SOC2FPGA. Writing zero has no effect. Writing one
 * will set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_MSB        29
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_SET_MSK    0x20000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_CLR_MSK    0xdfffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : soc2fpga
 * 
 * Privilege bit for SOC2FPGA. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_MSB        30
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_SET_MSK    0x40000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_CLR_MSK    0xbfffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F_SET(value) (((value) << 30) & 0x40000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET.
 */
struct ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_s
{
    uint32_t  nand_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_REG */
    uint32_t  nand_data     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_NAND_DATA */
    uint32_t  qspi_data     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI_DATA */
    uint32_t  usb0_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB0_REG */
    uint32_t  usb1_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_USB1_REG */
    uint32_t  dma_nonsecure :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_NONSECURE */
    uint32_t  dma_secure    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_DMA_SECURE */
    uint32_t  spi_master0   :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST0 */
    uint32_t  spi_master1   :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_MST1 */
    uint32_t  spi_slave0    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV0 */
    uint32_t  spi_slave1    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SPI_SLV1 */
    uint32_t  emac0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC0 */
    uint32_t  emac1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC1 */
    uint32_t  emac2         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC2 */
    uint32_t  emac3         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_EMAC3 */
    uint32_t  qspi          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_QSPI */
    uint32_t  sdmmc         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SDMMC */
    uint32_t  gpio0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO0 */
    uint32_t  gpio1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO1 */
    uint32_t  gpio2         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_GPIO2 */
    uint32_t  i2c0          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C0 */
    uint32_t  i2c1          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C1 */
    uint32_t  i2c2          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C2 */
    uint32_t  i2c3          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C3 */
    uint32_t  i2c4          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_I2C4 */
    uint32_t  sp_timer0     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR0 */
    uint32_t  sp_timer1     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_SP_TMR1 */
    uint32_t  uart0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART0 */
    uint32_t  uart1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_UART1 */
    uint32_t  lwsoc2fpga    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_LWH2F */
    uint32_t  soc2fpga      :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_H2F */
    uint32_t                :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET. */
typedef volatile struct ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_s  ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_RESET       0x00000000
/* The byte offset of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET register from the beginning of the component. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_OFST        0x4

/*
 * Register : l4_priv_clear
 * 
 * Clears Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset   | Description                                  
 * :-----|:-------|:--------|:----------------------------------------------
 *  [0]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG     
 *  [1]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA    
 *  [2]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA    
 *  [3]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG     
 *  [4]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG     
 *  [5]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE
 *  [6]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE   
 *  [7]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0     
 *  [8]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1     
 *  [9]  | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0     
 *  [10] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1     
 *  [11] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0        
 *  [12] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1        
 *  [13] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2        
 *  [14] | RW     | Unknown | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3        
 *  [15] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI         
 *  [16] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC        
 *  [17] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0        
 *  [18] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1        
 *  [19] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2        
 *  [20] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0         
 *  [21] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1         
 *  [22] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2         
 *  [23] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3         
 *  [24] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4         
 *  [25] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0      
 *  [26] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1      
 *  [27] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0        
 *  [28] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1        
 *  [29] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F        
 *  [30] | W      | 0x0     | ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F          
 *  [31] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : nand_register
 * 
 * Privilege bit for nand register. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_MSB        0
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : nand_data
 * 
 * Privilege bit for nand_data. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_MSB        1
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : qspi_data
 * 
 * Privilege bit for qspi_data. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_MSB        2
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb0_register
 * 
 * Privilege bit for usb0_register. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_MSB        3
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : usb1_register
 * 
 * Privilege bit for usb1_register. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_MSB        4
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : dma_nonsecure
 * 
 * Privilege bit for dma_nonsecure. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_MSB        5
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : dma_secure
 * 
 * Privilege bit for dma_secure. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_MSB        6
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : spi_master0
 * 
 * Privilege bit for spi_master0. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_MSB        7
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : spi_master1
 * 
 * Privilege bit for spi_master1. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_MSB        8
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : spi_slave0
 * 
 * Privilege bit for spi_slave0. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_MSB        9
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : spi_slave1
 * 
 * Privilege bit for spi_slave1. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_MSB        10
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : emac0
 * 
 * Privilege bit for emac0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_MSB        11
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : emac1
 * 
 * Privilege bit for emac1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_MSB        12
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : emac2
 * 
 * Privilege bit for emac2. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_MSB        13
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : emac3
 * 
 * Privilege bit for emac3. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_MSB        14
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_SET_MSK    0x00004000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_CLR_MSK    0xffffbfff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 register field is UNKNOWN. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : qspi
 * 
 * Privilege bit for qspi. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_MSB        15
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_SET_MSK    0x00008000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_CLR_MSK    0xffff7fff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : sdmmc
 * 
 * Privilege bit for sdmmc. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_MSB        16
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : gpio0
 * 
 * Privilege bit for gpio0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_MSB        17
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : gpio1
 * 
 * Privilege bit for gpio1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_MSB        18
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : gpio2
 * 
 * Privilege bit for gpio2. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_MSB        19
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_SET_MSK    0x00080000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : i2c0
 * 
 * Privilege bit for i2c0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_MSB        20
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : i2c1
 * 
 * Privilege bit for i2c1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_MSB        21
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : i2c2
 * 
 * Privilege bit for i2c2. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_MSB        22
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : i2c3
 * 
 * Privilege bit for i2c3. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_MSB        23
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : i2c4
 * 
 * Privilege bit for i2c4. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_MSB        24
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : sp_timer0
 * 
 * Privilege bit for sp_timer0. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_MSB        25
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : sp_timer1
 * 
 * Privilege bit for sp_timer1. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_MSB        26
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_SET_MSK    0x04000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_CLR_MSK    0xfbffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : uart0
 * 
 * Privilege bit for uart0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_MSB        27
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_SET_MSK    0x08000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : uart1
 * 
 * Privilege bit for uart1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_MSB        28
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_SET_MSK    0x10000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_CLR_MSK    0xefffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : lwsoc2fpga
 * 
 * Privilege bit for Lightweight SOC2FPGA. Writing zero has no effect. Writing one
 * will clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_MSB        29
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_SET_MSK    0x20000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_CLR_MSK    0xdfffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : soc2fpga
 * 
 * Privilege bit for SOC2FPGA. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_MSB        30
/* The width in bits of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_WIDTH      1
/* The mask used to set the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_SET_MSK    0x40000000
/* The mask used to clear the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F register field value. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_CLR_MSK    0xbfffffff
/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F register field. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_RESET      0x0
/* Extracts the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F field value from a register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F register field value suitable for setting the register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F_SET(value) (((value) << 30) & 0x40000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR.
 */
struct ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_s
{
    uint32_t  nand_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_REG */
    uint32_t  nand_data     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_NAND_DATA */
    uint32_t  qspi_data     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI_DATA */
    uint32_t  usb0_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB0_REG */
    uint32_t  usb1_register :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_USB1_REG */
    uint32_t  dma_nonsecure :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_NONSECURE */
    uint32_t  dma_secure    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_DMA_SECURE */
    uint32_t  spi_master0   :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST0 */
    uint32_t  spi_master1   :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_MST1 */
    uint32_t  spi_slave0    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV0 */
    uint32_t  spi_slave1    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SPI_SLV1 */
    uint32_t  emac0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC0 */
    uint32_t  emac1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC1 */
    uint32_t  emac2         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC2 */
    uint32_t  emac3         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_EMAC3 */
    uint32_t  qspi          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_QSPI */
    uint32_t  sdmmc         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SDMMC */
    uint32_t  gpio0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO0 */
    uint32_t  gpio1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO1 */
    uint32_t  gpio2         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_GPIO2 */
    uint32_t  i2c0          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C0 */
    uint32_t  i2c1          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C1 */
    uint32_t  i2c2          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C2 */
    uint32_t  i2c3          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C3 */
    uint32_t  i2c4          :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_I2C4 */
    uint32_t  sp_timer0     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR0 */
    uint32_t  sp_timer1     :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_SP_TMR1 */
    uint32_t  uart0         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART0 */
    uint32_t  uart1         :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_UART1 */
    uint32_t  lwsoc2fpga    :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_LWH2F */
    uint32_t  soc2fpga      :  1;  /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_H2F */
    uint32_t                :  1;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR. */
typedef volatile struct ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_s  ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR register. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR register from the beginning of the component. */
#define ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_OFST        0x8

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_L4_PRIV_FLT.
 */
struct ALT_NOC_L4_PRIV_FLT_s
{
    ALT_NOC_L4_PRIV_FLT_L4_PRIV_t      l4_priv;             /* ALT_NOC_L4_PRIV_FLT_L4_PRIV */
    ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET_t  l4_priv_set;         /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET */
    ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR_t  l4_priv_clear;       /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR */
    volatile uint32_t                  _pad_0xc_0x100[61];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_L4_PRIV_FLT. */
typedef volatile struct ALT_NOC_L4_PRIV_FLT_s  ALT_NOC_L4_PRIV_FLT_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_L4_PRIV_FLT. */
struct ALT_NOC_L4_PRIV_FLT_raw_s
{
    volatile uint32_t  l4_priv;             /* ALT_NOC_L4_PRIV_FLT_L4_PRIV */
    volatile uint32_t  l4_priv_set;         /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_SET */
    volatile uint32_t  l4_priv_clear;       /* ALT_NOC_L4_PRIV_FLT_L4_PRIV_CLR */
    uint32_t           _pad_0xc_0x100[61];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_L4_PRIV_FLT. */
typedef volatile struct ALT_NOC_L4_PRIV_FLT_raw_s  ALT_NOC_L4_PRIV_FLT_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_L4_PRIV_FLT_H__ */

