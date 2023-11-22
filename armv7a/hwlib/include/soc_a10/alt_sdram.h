/******************************************************************************
*
* Copyright 2016 Altera Corporation. All Rights Reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
* this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

/*
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/soc_a10/alt_sdram.h#1 $
 */

/*! \file
 *  Altera - Arria10 SDRam API 
 */

#ifndef __ALT_SDRAM_PRIORITY_H__
#define __ALT_SDRAM_PRIORITY_H__

#include <stdint.h>
#include "alt_interrupt.h"
#include "socal/hps.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */


/*****************************************************************************/
/*! \addtogroup ALT_SDRAM SDRam Controller API
 *
 *               QOS API
 *  This API allows the developer to set the QOS levels of the various ports
 *
 * @{
 *****************************************************************************/

/*!
 * This type enumerates the modes for a port
 */

typedef enum ALT_SDR_MODE_e
{
    ALT_SDR_MODE_PROGRAMMABLE = 0,
    ALT_SDR_MODE_BANDWIDTH_LIMITER = 1,
    ALT_SDR_MODE_BYPASS = 2,
    ALT_SDR_MODE_BANDWIDTH_REGULATOR = 3
} ALT_SDR_MODE_t;

/*!
 * This type enumerates the various peripheral ports
 */

typedef enum ALT_SDR_PORT_e
{
    ALT_SDR_PORT_MPU_M0            = 0,
    ALT_SDR_PORT_MPU_M1            = 1,
    ALT_SDR_PORT_FPGA2SOC32        = 2,
    ALT_SDR_PORT_FPGA2SOC64        = 3,
    ALT_SDR_PORT_FPGA2SOC128       = 4,
    ALT_SDR_PORT_DMA               = 5,
    ALT_SDR_PORT_EMAC0             = 6,
    ALT_SDR_PORT_EMAC1             = 7,
    ALT_SDR_PORT_EMAC2             = 8,
    ALT_SDR_PORT_USB0              = 9,
    ALT_SDR_PORT_USB1              = 10,
    ALT_SDR_PORT_NAND              = 11,
    ALT_SDR_PORT_SDMMC             = 12,
    ALT_SDR_PORT_FPGA2SDRAM0_32    = 13,
    ALT_SDR_PORT_FPGA2SDRAM0_64    = 14,
    ALT_SDR_PORT_FPGA2SDRAM0_128   = 15,
    ALT_SDR_PORT_FPGA2SDRAM1_32    = 16,
    ALT_SDR_PORT_FPGA2SDRAM1_64    = 17,
    ALT_SDR_PORT_FPGA2SDRAM2_32    = 18,
    ALT_SDR_PORT_FPGA2SDRAM2_64    = 19,
    ALT_SDR_PORT_FPGA2SDRAM2_128   = 20
} ALT_SDR_PORT_t;

/*!
 * This type defines the structure for passing parameters to/from the 
 * alt_sdr_(set/get)_port_qos functions. 
 */

typedef struct ALT_SDR_QOS_INFO_s
{
    ALT_SDR_MODE_t  Mode;
    uint16_t        Bandwidth;
    uint16_t        Saturation;
    uint8_t         ReadPriority;  /* 0 (Lowest) to 3 (Highest). However, disabling the QOS gives highest priority */
    uint8_t         WritePriority; /* 0 (Lowest) to 3 (Highest). However, disabling the QOS gives highest priority */
    bool            Enabled;
    bool            ClkEn;
    bool            ExThrEn;
} __attribute__((aligned(4))) ALT_SDR_QOS_INFO_t;

/*!
 * alt_sdr_set_port_qos - Sets the QOS parameters for a given port
 * NOTE: Setting the QOS for an FPGA* port before bringing up the
 *       FPGA bridge will cause a data abort
 *
 * \param       port
 *              The peripheral port whos parameters are being set
 *
 * \param       qos
 *              A pointer to a struct that contains the values to be
 *              programmed to the port
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_BAD_ARG   Either the pointer was NULL or port
 *                               number was invalid
 */

ALT_STATUS_CODE alt_sdr_port_qos_set(ALT_SDR_PORT_t port, ALT_SDR_QOS_INFO_t *qos);

/*!
 * alt_sdr_get_port_qos - Retreive the QOS parameters for a given port
 * NOTE: Reading the QOS for an FPGA* port before bringing up the
 *       FPGA bridge will cause a data abort
 *
 * \param       port
 *              The peripheral port whos parameters are being set
 *
 * \param       qos
 *              A pointer to a struct that will be filled in with the 
 *              values already programmed to the port
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_BAD_ARG   Either the pointer was NULL or port
 *                               number was invalid
 */

ALT_STATUS_CODE alt_sdr_port_qos_get(ALT_SDR_PORT_t port, ALT_SDR_QOS_INFO_t *qos);

/******************************************************************************
                 Firewall API
******************************************************************************/

/*!
 * This type defines the structure for passing parameters to/from the 
 * alt_sdr_(set/get)_target_firewall functions. 
 * Each of these values specifies whether or not a nonsecure memory operation
 * would be allowed to access this memory
 */

typedef struct ALT_SDR_FIREWALL_ACCESS_s
{
    bool        AHB_AP_Allow_NS_Access;    /* 0- Secure Only, 1 N/S Allowed */
    bool        FPGA2SOC_Allow_NS_Access;  /* 0- Secure Only, 1 N/S Allowed */
    bool        DMA_Allow_NS_Access;       /* 0- Secure Only, 1 N/S Allowed */
    bool        MPU_M0_Allow_NS_Access;    /* 0- Secure Only, 1 N/S Allowed */
} ALT_SDR_FIREWALL_ACCESS_t;

/*!
 * This type enumerates the varous memory port targets where the 
 * firewalls exist
 */

typedef enum ALT_SDR_MEM_TARGET_e
{                    
   ALT_SDR_MEM_NAND_REGISTERS = 0,
   ALT_SDR_MEM_NAND_DATA      = 1,
   ALT_SDR_MEM_QSPI_DATA      = 2,
   ALT_SDR_MEM_USB0_REGISTERS = 3,
   ALT_SDR_MEM_USB1_REGISTERS = 4,
   ALT_SDR_MEM_SPI_MASTER0    = 7,
   ALT_SDR_MEM_SPI_MASTER1    = 8,
   ALT_SDR_MEM_SPI_SLAVE0     = 9,
   ALT_SDR_MEM_SPI_SLAVE1     = 10,
   ALT_SDR_MEM_EMAC0          = 11,
   ALT_SDR_MEM_EMAC1          = 12,
   ALT_SDR_MEM_EMAC2          = 13,
   ALT_SDR_MEM_QSPI           = 15,
   ALT_SDR_MEM_SDMMC          = 16,
   ALT_SDR_MEM_GPIO0          = 17,
   ALT_SDR_MEM_GPIO1          = 18,
   ALT_SDR_MEM_GPIO2          = 19,
   ALT_SDR_MEM_I2C0           = 20,
   ALT_SDR_MEM_I2C1           = 21,
   ALT_SDR_MEM_I2C2           = 22,
   ALT_SDR_MEM_I2C3           = 23,
   ALT_SDR_MEM_I2C4           = 24,
   ALT_SDR_MEM_SP_TIMER0      = 25,
   ALT_SDR_MEM_SP_TIMER1      = 26,
   ALT_SDR_MEM_UART0          = 27,
   ALT_SDR_MEM_UART1          = 28,

   ALT_SDR_MEM_CAN0_ECC       = 64,
   ALT_SDR_MEM_CAN1_ECC       = 65,
   ALT_SDR_MEM_DMA_ECC        = 66,
   ALT_SDR_MEM_EMAC0RX_ECC    = 67,
   ALT_SDR_MEM_EMAC0TX_ECC    = 68,
   ALT_SDR_MEM_EMAC1RX_ECC    = 69,
   ALT_SDR_MEM_EMAC1TX_ECC    = 70,
   ALT_SDR_MEM_EMAC2RX_ECC    = 71,
   ALT_SDR_MEM_EMAC2TX_ECC    = 72,
   ALT_SDR_MEM_EMAC3RX_ECC    = 73,
   ALT_SDR_MEM_EMAC3TX_ECC    = 74,
   ALT_SDR_MEM_NAND_ECC       = 75,
   ALT_SDR_MEM_NAND_READ_ECC  = 76,
   ALT_SDR_MEM_NAND_WRITE_ECC = 77,
   ALT_SDR_MEM_ONCHIPRAM_ECC  = 78,
   ALT_SDR_MEM_QSPI_ECC       = 79,
   ALT_SDR_MEM_SDMMC_ECC      = 80,
   ALT_SDR_MEM_USB0_ECC       = 81,
   ALT_SDR_MEM_USB1_ECC       = 82,
   ALT_SDR_MEM_CLOCK_MGR      = 83,
   ALT_SDR_MEM_FPGA_MGR       = 84,
   ALT_SDR_MEM_PIN_MUX        = 85,
   ALT_SDR_MEM_RESET_MGR      = 86,
   ALT_SDR_MEM_SYSTEM_MGR     = 87,
   ALT_SDR_MEM_OSC0           = 88,
   ALT_SDR_MEM_OSC1           = 89,
   ALT_SDR_MEM_WATCHDOG0      = 90,
   ALT_SDR_MEM_WATCHDOG1      = 91,
   ALT_SDR_MEM_DAP            = 92,
   ALT_SDR_MEM_FPGA_MGR_STREAM= 93,
   ALT_SDR_MEM_SEC_MGR_STREAM = 94,
   ALT_SDR_MEM_HMC            = 95,
   ALT_SDR_MEM_HMC_ADAPTOR    = 96,
   ALT_SDR_MEM_L3_INTCON      = 97,
   ALT_SDR_MEM_DDR_SCHEDULER  = 98,
   ALT_SDR_MEM_L4_INTCON_FW   = 99,
   ALT_SDR_MEM_L4_INTCON_PROBES= 100,
   ALT_SDR_MEM_L4_QOS_CSR     = 101
}ALT_SDR_MEM_TARGET_t;

/*!
 * alt_sdr_firewall_set - Sets the firewall permissions for a given memory target
 *
 *
 * \param       target
 *              The memory port target whos permissions are being set
 *
 * \param       access
 *              A pointer to a struct that specifies which devices may send
 *              nonsecure memory accesses to the port
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_BAD_ARG   Either the pointer was NULL or port
 *                               number was invalid
 */

ALT_STATUS_CODE alt_sdr_firewall_set(ALT_SDR_MEM_TARGET_t target, ALT_SDR_FIREWALL_ACCESS_t *access);

/*!
 * alt_sdr_firewall_get - Retreives the firewall permissions for a given memory target
 *
 *
 * \param       target
 *              The memory port target whos permissions are being read
 *
 * \param       access
 *              A pointer to a struct that will be filled in with the 
 *              values already programmed to the memory port
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_BAD_ARG   Either the pointer was NULL or port
 *                               value was invalid
 */

ALT_STATUS_CODE alt_sdr_firewall_get(ALT_SDR_MEM_TARGET_t target, ALT_SDR_FIREWALL_ACCESS_t *access);

/*! @} */

#ifdef __cplusplus
}
#endif
#endif
