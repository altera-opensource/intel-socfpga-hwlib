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

/* Altera - ALT_NOC_FW_MMAP_PRIV */

#ifndef __ALT_SOCAL_NOC_FW_MMAP_PRIV_H__
#define __ALT_SOCAL_NOC_FW_MMAP_PRIV_H__

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
 * Component : NOC_FW_MMAP_PRIV
 * L4_Privilege Filter
 * 
 */
/*
 * Register : priv
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
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [0]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER
 *  [1]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA    
 *  [2]     | ???    | 0x0   | *UNDEFINED*                            
 *  [3]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER
 *  [4]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER
 *  [5]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE
 *  [6]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE   
 *  [7]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0  
 *  [8]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1  
 *  [9]     | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0   
 *  [10]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1   
 *  [11]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0        
 *  [12]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1        
 *  [13]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2        
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                            
 *  [16]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC        
 *  [17]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0        
 *  [18]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1        
 *  [19]    | ???    | 0x0   | *UNDEFINED*                            
 *  [20]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0         
 *  [21]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1         
 *  [22]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2         
 *  [23]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3         
 *  [24]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4         
 *  [25]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0    
 *  [26]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1    
 *  [27]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_UART0        
 *  [28]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_UART1        
 *  [29]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA   
 *  [30]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA     
 *  [31]    | RW     | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_TCU          
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_MSB        0
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_MSB        1
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA_SET(value) (((value) << 1) & 0x00000002)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_MSB        3
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER_SET(value) (((value) << 3) & 0x00000008)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_MSB        4
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER_SET(value) (((value) << 4) & 0x00000010)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_MSB        5
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE_SET(value) (((value) << 5) & 0x00000020)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_MSB        6
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE_SET(value) (((value) << 6) & 0x00000040)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_MSB        7
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0_SET(value) (((value) << 7) & 0x00000080)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_MSB        8
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_MSB        9
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0_SET(value) (((value) << 9) & 0x00000200)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_MSB        10
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1_SET(value) (((value) << 10) & 0x00000400)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_MSB        11
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0_SET(value) (((value) << 11) & 0x00000800)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_MSB        12
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1_SET(value) (((value) << 12) & 0x00001000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_MSB        13
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2_SET(value) (((value) << 13) & 0x00002000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_MSB        16
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC_SET(value) (((value) << 16) & 0x00010000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_MSB        17
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0_SET(value) (((value) << 17) & 0x00020000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_MSB        18
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1_SET(value) (((value) << 18) & 0x00040000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_MSB        20
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0_SET(value) (((value) << 20) & 0x00100000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_MSB        21
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1_SET(value) (((value) << 21) & 0x00200000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_MSB        22
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2_SET(value) (((value) << 22) & 0x00400000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_MSB        23
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3_SET(value) (((value) << 23) & 0x00800000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_MSB        24
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4_SET(value) (((value) << 24) & 0x01000000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_MSB        25
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0_SET(value) (((value) << 25) & 0x02000000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_MSB        26
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_SET_MSK    0x04000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_CLR_MSK    0xfbffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1_SET(value) (((value) << 26) & 0x04000000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_MSB        27
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_SET_MSK    0x08000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART0_SET(value) (((value) << 27) & 0x08000000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_MSB        28
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_SET_MSK    0x10000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_CLR_MSK    0xefffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_UART1_SET(value) (((value) << 28) & 0x10000000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_MSB        29
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_SET_MSK    0x20000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_CLR_MSK    0xdfffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA_SET(value) (((value) << 29) & 0x20000000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_MSB        30
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_SET_MSK    0x40000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_CLR_MSK    0xbfffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : tcu
 * 
 * Privilege bit for TCU slave. When 0, only privileged transactions are allowed to
 * slave. When 1, both privileged and non-privileged transactions are allowed to
 * slave
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_MSB        31
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_TCU register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_SET_MSK    0x80000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_TCU register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_CLR_MSK    0x7fffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_TCU field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_TCU register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_TCU_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_NOC_FW_MMAP_PRIV_PRIV.
 */
struct ALT_NOC_FW_MMAP_PRIV_PRIV_s
{
    volatile uint32_t  nand_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_REGISTER */
    volatile uint32_t  nand_data     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_NAND_DATA */
    uint32_t                         :  1;  /* *UNDEFINED* */
    volatile uint32_t  usb0_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_USB0_REGISTER */
    volatile uint32_t  usb1_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_USB1_REGISTER */
    volatile uint32_t  dma_nonsecure :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_NONSECURE */
    volatile uint32_t  dma_secure    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_DMA_SECURE */
    volatile uint32_t  spi_master0   :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER0 */
    volatile uint32_t  spi_master1   :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_MASTER1 */
    volatile uint32_t  spi_slave0    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE0 */
    volatile uint32_t  spi_slave1    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SPI_SLAVE1 */
    volatile uint32_t  emac0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC0 */
    volatile uint32_t  emac1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC1 */
    volatile uint32_t  emac2         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_EMAC2 */
    uint32_t                         :  2;  /* *UNDEFINED* */
    volatile uint32_t  sdmmc         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SDMMC */
    volatile uint32_t  gpio0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO0 */
    volatile uint32_t  gpio1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_GPIO1 */
    uint32_t                         :  1;  /* *UNDEFINED* */
    volatile uint32_t  i2c0          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_I2C0 */
    volatile uint32_t  i2c1          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_I2C1 */
    volatile uint32_t  i2c2          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_I2C2 */
    volatile uint32_t  i2c3          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_I2C3 */
    volatile uint32_t  i2c4          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_I2C4 */
    volatile uint32_t  sp_timer0     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER0 */
    volatile uint32_t  sp_timer1     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SP_TIMER1 */
    volatile uint32_t  uart0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_UART0 */
    volatile uint32_t  uart1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_UART1 */
    volatile uint32_t  lwsoc2fpga    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_LWSOC2FPGA */
    volatile uint32_t  soc2fpga      :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SOC2FPGA */
    volatile uint32_t  tcu           :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_TCU */
};

/* The typedef declaration for register ALT_NOC_FW_MMAP_PRIV_PRIV. */
typedef struct ALT_NOC_FW_MMAP_PRIV_PRIV_s  ALT_NOC_FW_MMAP_PRIV_PRIV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_MMAP_PRIV_PRIV register from the beginning of the component. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_OFST        0x0

/*
 * Register : priv_set
 * 
 * Sets Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                
 * :--------|:-------|:------|:--------------------------------------------
 *  [0]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER
 *  [1]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA    
 *  [2]     | ???    | 0x0   | *UNDEFINED*                                
 *  [3]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER
 *  [4]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER
 *  [5]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE
 *  [6]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE   
 *  [7]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0  
 *  [8]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1  
 *  [9]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0   
 *  [10]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1   
 *  [11]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0        
 *  [12]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1        
 *  [13]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2        
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                                
 *  [16]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC        
 *  [17]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0        
 *  [18]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1        
 *  [19]    | ???    | 0x0   | *UNDEFINED*                                
 *  [20]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0         
 *  [21]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1         
 *  [22]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2         
 *  [23]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3         
 *  [24]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4         
 *  [25]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0    
 *  [26]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1    
 *  [27]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0        
 *  [28]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1        
 *  [29]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA   
 *  [30]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA     
 *  [31]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU          
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_MSB        0
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : nand_data
 * 
 * Privilege bit for nand_data. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_MSB        1
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : usb0_register
 * 
 * Privilege bit for usb0_register. Writing zero has no effect. Writing one will
 * set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_MSB        3
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : usb1_register
 * 
 * Privilege bit for usb1_register. Writing zero has no effect. Writing one will
 * set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_MSB        4
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : dma_nonsecure
 * 
 * Privilege bit for dma_nonsecure. Writing zero has no effect. Writing one will
 * set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_MSB        5
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : dma_secure
 * 
 * Privilege bit for dma_secure. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_MSB        6
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : spi_master0
 * 
 * Privilege bit for spi_master0. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_MSB        7
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : spi_master1
 * 
 * Privilege bit for spi_master1. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_MSB        8
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : spi_slave0
 * 
 * Privilege bit for spi_slave0. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_MSB        9
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : spi_slave1
 * 
 * Privilege bit for spi_slave1. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_MSB        10
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : emac0
 * 
 * Privilege bit for emac0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_MSB        11
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : emac1
 * 
 * Privilege bit for emac1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_MSB        12
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : emac2
 * 
 * Privilege bit for emac2. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_MSB        13
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : sdmmc
 * 
 * Privilege bit for sdmmc. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_MSB        16
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : gpio0
 * 
 * Privilege bit for gpio0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_MSB        17
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : gpio1
 * 
 * Privilege bit for gpio1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_MSB        18
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : i2c0
 * 
 * Privilege bit for i2c0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_MSB        20
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : i2c1
 * 
 * Privilege bit for i2c1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_MSB        21
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : i2c2
 * 
 * Privilege bit for i2c2. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_MSB        22
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : i2c3
 * 
 * Privilege bit for i2c3. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_MSB        23
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : i2c4
 * 
 * Privilege bit for i2c4. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_MSB        24
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : sp_timer0
 * 
 * Privilege bit for sp_timer0. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_MSB        25
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : sp_timer1
 * 
 * Privilege bit for sp_timer1. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_MSB        26
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_SET_MSK    0x04000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_CLR_MSK    0xfbffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : uart0
 * 
 * Privilege bit for uart0. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_MSB        27
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_SET_MSK    0x08000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : uart1
 * 
 * Privilege bit for uart1. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_MSB        28
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_SET_MSK    0x10000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_CLR_MSK    0xefffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : lwsoc2fpga
 * 
 * Privilege bit for Lightweight SOC2FPGA. Writing zero has no effect. Writing one
 * will set the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_MSB        29
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_SET_MSK    0x20000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_CLR_MSK    0xdfffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : soc2fpga
 * 
 * Privilege bit for SOC2FPGA. Writing zero has no effect. Writing one will set the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_MSB        30
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_SET_MSK    0x40000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_CLR_MSK    0xbfffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : tcu
 * 
 * Privilege bit for TCU slave. Writing zero has no effect. Writing one will set
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_MSB        31
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_SET_MSK    0x80000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_CLR_MSK    0x7fffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_NOC_FW_MMAP_PRIV_PRIV_SET.
 */
struct ALT_NOC_FW_MMAP_PRIV_PRIV_SET_s
{
    volatile uint32_t  nand_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_REGISTER */
    volatile uint32_t  nand_data     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_NAND_DATA */
    uint32_t                         :  1;  /* *UNDEFINED* */
    volatile uint32_t  usb0_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB0_REGISTER */
    volatile uint32_t  usb1_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_USB1_REGISTER */
    volatile uint32_t  dma_nonsecure :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_NONSECURE */
    volatile uint32_t  dma_secure    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_DMA_SECURE */
    volatile uint32_t  spi_master0   :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER0 */
    volatile uint32_t  spi_master1   :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_MASTER1 */
    volatile uint32_t  spi_slave0    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE0 */
    volatile uint32_t  spi_slave1    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SPI_SLAVE1 */
    volatile uint32_t  emac0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC0 */
    volatile uint32_t  emac1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC1 */
    volatile uint32_t  emac2         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_EMAC2 */
    uint32_t                         :  2;  /* *UNDEFINED* */
    volatile uint32_t  sdmmc         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SDMMC */
    volatile uint32_t  gpio0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO0 */
    volatile uint32_t  gpio1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_GPIO1 */
    uint32_t                         :  1;  /* *UNDEFINED* */
    volatile uint32_t  i2c0          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C0 */
    volatile uint32_t  i2c1          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C1 */
    volatile uint32_t  i2c2          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C2 */
    volatile uint32_t  i2c3          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C3 */
    volatile uint32_t  i2c4          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_I2C4 */
    volatile uint32_t  sp_timer0     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER0 */
    volatile uint32_t  sp_timer1     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SP_TIMER1 */
    volatile uint32_t  uart0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART0 */
    volatile uint32_t  uart1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_UART1 */
    volatile uint32_t  lwsoc2fpga    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_LWSOC2FPGA */
    volatile uint32_t  soc2fpga      :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_SOC2FPGA */
    volatile uint32_t  tcu           :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET_TCU */
};

/* The typedef declaration for register ALT_NOC_FW_MMAP_PRIV_PRIV_SET. */
typedef struct ALT_NOC_FW_MMAP_PRIV_PRIV_SET_s  ALT_NOC_FW_MMAP_PRIV_PRIV_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_MMAP_PRIV_PRIV_SET register from the beginning of the component. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_SET_OFST        0x4

/*
 * Register : priv_clear
 * 
 * Clears Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [0]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER
 *  [1]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA    
 *  [2]     | ???    | 0x0   | *UNDEFINED*                                  
 *  [3]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER
 *  [4]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER
 *  [5]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE
 *  [6]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE   
 *  [7]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0  
 *  [8]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1  
 *  [9]     | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0   
 *  [10]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1   
 *  [11]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0        
 *  [12]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1        
 *  [13]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2        
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                                  
 *  [16]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC        
 *  [17]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0        
 *  [18]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1        
 *  [19]    | ???    | 0x0   | *UNDEFINED*                                  
 *  [20]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0         
 *  [21]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1         
 *  [22]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2         
 *  [23]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3         
 *  [24]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4         
 *  [25]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0    
 *  [26]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1    
 *  [27]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0        
 *  [28]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1        
 *  [29]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA   
 *  [30]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA     
 *  [31]    | W      | 0x0   | ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU          
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_MSB        0
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : nand_data
 * 
 * Privilege bit for nand_data. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_MSB        1
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : usb0_register
 * 
 * Privilege bit for usb0_register. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_MSB        3
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : usb1_register
 * 
 * Privilege bit for usb1_register. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_MSB        4
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : dma_nonsecure
 * 
 * Privilege bit for dma_nonsecure. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_MSB        5
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : dma_secure
 * 
 * Privilege bit for dma_secure. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_MSB        6
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : spi_master0
 * 
 * Privilege bit for spi_master0. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_MSB        7
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : spi_master1
 * 
 * Privilege bit for spi_master1. Writing zero has no effect. Writing one will
 * clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_MSB        8
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : spi_slave0
 * 
 * Privilege bit for spi_slave0. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_MSB        9
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : spi_slave1
 * 
 * Privilege bit for spi_slave1. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_MSB        10
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : emac0
 * 
 * Privilege bit for emac0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_MSB        11
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : emac1
 * 
 * Privilege bit for emac1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_MSB        12
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : emac2
 * 
 * Privilege bit for emac2. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_MSB        13
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : sdmmc
 * 
 * Privilege bit for sdmmc. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_MSB        16
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : gpio0
 * 
 * Privilege bit for gpio0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_MSB        17
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : gpio1
 * 
 * Privilege bit for gpio1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_MSB        18
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : i2c0
 * 
 * Privilege bit for i2c0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_MSB        20
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : i2c1
 * 
 * Privilege bit for i2c1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_MSB        21
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : i2c2
 * 
 * Privilege bit for i2c2. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_MSB        22
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : i2c3
 * 
 * Privilege bit for i2c3. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_MSB        23
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : i2c4
 * 
 * Privilege bit for i2c4. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_MSB        24
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : sp_timer0
 * 
 * Privilege bit for sp_timer0. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_MSB        25
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : sp_timer1
 * 
 * Privilege bit for sp_timer1. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_MSB        26
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_SET_MSK    0x04000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_CLR_MSK    0xfbffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : uart0
 * 
 * Privilege bit for uart0. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_MSB        27
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_SET_MSK    0x08000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : uart1
 * 
 * Privilege bit for uart1. Writing zero has no effect. Writing one will clear the
 * privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_MSB        28
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_SET_MSK    0x10000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_CLR_MSK    0xefffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : lwsoc2fpga
 * 
 * Privilege bit for Lightweight SOC2FPGA. Writing zero has no effect. Writing one
 * will clear the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_MSB        29
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_SET_MSK    0x20000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_CLR_MSK    0xdfffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : soc2fpga
 * 
 * Privilege bit for SOC2FPGA. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_MSB        30
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_SET_MSK    0x40000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_CLR_MSK    0xbfffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : tcu
 * 
 * Privilege bit for TCU slave. Writing zero has no effect. Writing one will clear
 * the privilege bit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_MSB        31
/* The width in bits of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_SET_MSK    0x80000000
/* The mask used to clear the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU register field value. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_CLR_MSK    0x7fffffff
/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU register field. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_RESET      0x0
/* Extracts the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU field value from a register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU register field value suitable for setting the register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR.
 */
struct ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_s
{
    volatile uint32_t  nand_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_REGISTER */
    volatile uint32_t  nand_data     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_NAND_DATA */
    uint32_t                         :  1;  /* *UNDEFINED* */
    volatile uint32_t  usb0_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB0_REGISTER */
    volatile uint32_t  usb1_register :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_USB1_REGISTER */
    volatile uint32_t  dma_nonsecure :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_NONSECURE */
    volatile uint32_t  dma_secure    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_DMA_SECURE */
    volatile uint32_t  spi_master0   :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER0 */
    volatile uint32_t  spi_master1   :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_MASTER1 */
    volatile uint32_t  spi_slave0    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE0 */
    volatile uint32_t  spi_slave1    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SPI_SLAVE1 */
    volatile uint32_t  emac0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC0 */
    volatile uint32_t  emac1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC1 */
    volatile uint32_t  emac2         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_EMAC2 */
    uint32_t                         :  2;  /* *UNDEFINED* */
    volatile uint32_t  sdmmc         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SDMMC */
    volatile uint32_t  gpio0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO0 */
    volatile uint32_t  gpio1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_GPIO1 */
    uint32_t                         :  1;  /* *UNDEFINED* */
    volatile uint32_t  i2c0          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C0 */
    volatile uint32_t  i2c1          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C1 */
    volatile uint32_t  i2c2          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C2 */
    volatile uint32_t  i2c3          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C3 */
    volatile uint32_t  i2c4          :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_I2C4 */
    volatile uint32_t  sp_timer0     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER0 */
    volatile uint32_t  sp_timer1     :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SP_TIMER1 */
    volatile uint32_t  uart0         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART0 */
    volatile uint32_t  uart1         :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_UART1 */
    volatile uint32_t  lwsoc2fpga    :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_LWSOC2FPGA */
    volatile uint32_t  soc2fpga      :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_SOC2FPGA */
    volatile uint32_t  tcu           :  1;  /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_TCU */
};

/* The typedef declaration for register ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR. */
typedef struct ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_s  ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR register. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR register from the beginning of the component. */
#define ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_OFST        0x8

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
 * The struct declaration for register group ALT_NOC_FW_MMAP_PRIV.
 */
struct ALT_NOC_FW_MMAP_PRIV_s
{
    volatile ALT_NOC_FW_MMAP_PRIV_PRIV_t        priv;                /* ALT_NOC_FW_MMAP_PRIV_PRIV */
    volatile ALT_NOC_FW_MMAP_PRIV_PRIV_SET_t    priv_set;            /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET */
    volatile ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR_t  priv_clear;          /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR */
    volatile uint32_t                           _pad_0xc_0x100[61];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_MMAP_PRIV. */
typedef struct ALT_NOC_FW_MMAP_PRIV_s  ALT_NOC_FW_MMAP_PRIV_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_MMAP_PRIV. */
struct ALT_NOC_FW_MMAP_PRIV_raw_s
{
    volatile uint32_t  priv;                /* ALT_NOC_FW_MMAP_PRIV_PRIV */
    volatile uint32_t  priv_set;            /* ALT_NOC_FW_MMAP_PRIV_PRIV_SET */
    volatile uint32_t  priv_clear;          /* ALT_NOC_FW_MMAP_PRIV_PRIV_CLEAR */
    volatile uint32_t  _pad_0xc_0x100[61];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_MMAP_PRIV. */
typedef struct ALT_NOC_FW_MMAP_PRIV_raw_s  ALT_NOC_FW_MMAP_PRIV_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_MMAP_PRIV_H__ */

