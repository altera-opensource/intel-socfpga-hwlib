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
 * $Id: //acds/rel/20.1std/embedded/ip/hps/altera_hps/hwlib/include/soc_cv_av/alt_sdram.h#1 $
 */

/*! \file
 *  Altera - SDRam API
 */


#ifndef __ALT_SDRAM_H__
#define __ALT_SDRAM_H__

#include "hwlib.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

/******************************************************************************/
/*! \addtogroup SDRAM_MGR SDRam API
 *
 * This module defines an API for setting traffic priorities and access rights
 * to SDRam
 * 
 * @{
 */

/*!
 * This type enumerated the memory ports in the CycloneV or ArriaV Soc
 * Note that each port can be either a Read (R) or Write (W) only port
 */
typedef enum ALT_SDR_PORT_e
{
    ALT_SDR_PORT_FPGA_AXI_R0 = 0,
    ALT_SDR_PORT_FPGA_AXI_W1 = 1,
    ALT_SDR_PORT_FPGA_AXI_R2 = 2,
    ALT_SDR_PORT_FPGA_AXI_W3 = 3,
    ALT_SDR_PORT_FPGA_AXI_R4 = 4,
    ALT_SDR_PORT_FPGA_AXI_W5 = 5,
    ALT_SDR_PORT_L3_AXI_R    = 6,
    ALT_SDR_PORT_MPU_AXI_R   = 7,
    ALT_SDR_PORT_L3_AXI_W    = 8,
    ALT_SDR_PORT_MPU_AXI_W   = 9
} ALT_SDR_PORT_t;

/*****************************************************************************/
/*!
                 Priority and Weight API

    For any/all of the ports enumerated in ALT_SDR_PORT_NUM, this allows you 
    set the priority for transactions and round-robin weight

******************************************************************************/

#define ALT_SDR_NUM_PORTS                  10
#define ALT_SDR_MAX_PRIORITY_WEIGHT        127
#define ALT_E_PRIORITY_WEIGHT_TOO_HIGH     -32
#define ALT_SDR_NUM_PRIORITIES             8
/*!
 * Enables and sets the priority and weight for a given port
 *
 * \param       port      Which port is being set
 *
 * \param       priority  0(lowest)-7(highest)
 *                  ***** WARNING ***** NO Traffic will be serviced
 *                  from a lower priority port until all the traffic
 *                  on all higher priority ports is complete
 * \param       weight    0-31
 *                  Within the given priority, how large of a
 *                  round-robin timeslice is given to this port
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_PRIORITY_WEIGHT_TOO_HIGH       This value will be returned
                    if the sum of the weights for a given priority is greater than
                    the maximum (127)
 * \retval      ALT_E_ERROR     
 */
ALT_STATUS_CODE alt_sdr_priority_set(ALT_SDR_PORT_t port, uint8_t priority, uint8_t weight);

/*!
 * Gets the QOS, priority and weight for a given port
 *
 * \param       port
 *              Which port is being examined
 *
 * \param       priority
 *                  *see the priority_set function above for description
 *
 * \param       weight
 *                  *see the priority_set function above for description
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_BAD_ARG   One of the pointers passed in was NULLor the 
 *                              port value was invalid
 * \retval      ALT_E_ERROR     
 */
ALT_STATUS_CODE alt_sdr_priority_get(ALT_SDR_PORT_t port, bool *enabled, uint8_t *priority, uint8_t *weight);

/*!
 * Disables a port priority
 *
 * \param       port
 *              Which port is being disabled
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_BAD_ARG   One of the pointers passed in was NULLor the 
 *                              port value was invalid
 * \retval      ALT_E_ERROR
 */
ALT_STATUS_CODE alt_sdr_priority_disable(ALT_SDR_PORT_t port);


/******************************************************************************/
/*!

                SDRam Rules API

    Allows the developer to set rules that allow for one of the ports enumerated 
    in ALT_SDR_PORT to be granted or denied access to blocks of memory
    conditionally based on whether transaction is TrustZone Secure or NonSecure

******************************************************************************/


#define ALT_SDR_CTL_PROTPORT_DENY_NONE        0
#define ALT_SDR_CTL_PROTPORT_DENY_FPGA        0x3F
#define ALT_SDR_CTL_PROTPORT_DENY_CPU_READ    (1<<7)
#define ALT_SDR_CTL_PROTPORT_DENY_CPU_WRITE   (1<<9)
#define ALT_SDR_CTL_PROTPORT_DENY_L3_READ     (1<<6)
#define ALT_SDR_CTL_PROTPORT_DENY_L3_WRITE    (1<<8)
#define ALT_SDR_CTL_PROTPORT_DENY_CPU         ALT_SDR_CTL_PROTPORT_DENY_CPU_READ | ALT_SDR_CTL_PROTPORT_DENY_CPU_WRITE
#define ALT_SDR_CTL_PROTPORT_DENY_L3          ALT_SDR_CTL_PROTPORT_DENY_L3_READ | ALT_SDR_CTL_PROTPORT_DENY_L3_WRITE

/*!
 * This type specifies the port rule id lower and upper bounds for 
 * each of the embedded devices
 * 
 */
typedef enum ALT_SDR_RULEID_e
{
    ALT_SDR_CTL_RULEID_MIN     =   0x000,
    ALT_SDR_RULEID_L2M0_LO     =   0x002,
    ALT_SDR_RULEID_L2M0_HI     =   0x7FA,
    ALT_SDR_RULEID_DMA_LO      =   0x001,
    ALT_SDR_RULEID_DMA_HI      =   0x079,
    ALT_SDR_RULEID_EMAC0_LO    =   0x801,
    ALT_SDR_RULEID_EMAC0_HI    =   0x879,
    ALT_SDR_RULEID_EMAC1_LO    =   0x802,
    ALT_SDR_RULEID_EMAC1_HI    =   0x87A,
    ALT_SDR_RULEID_USB0        =   0x803,
    ALT_SDR_RULEID_USB1        =   0x806,
    ALT_SDR_RULEID_NAND_LO     =   0x804,
    ALT_SDR_RULEID_NAND_HI     =   0xFFC,
    ALT_SDR_RULEID_TMC         =   0x800,
    ALT_SDR_RULEID_DAP         =   0x004,
    ALT_SDR_RULEID_SDMMC       =   0x805,
    ALT_SDR_RULEID_FPGA2SOC_LO =   0x000,
    ALT_SDR_RULEID_FPGA2SOC_HI =   0x7F8,
    ALT_SDR_CTL_RULEID_MAX     =   0xFFF
} ALT_SDR_RULEID_t;

/*!
 * This type enumerates the values for security access
 * The system boots in Trustzone Secure mode, but can be transitioned
 * to nonsecure mode using a series of steps outlined by ARM. For the
 * purposes of this API it would be best to specify SECURE when using
 * this API unless you are specifically using technology that uses 
 * ARM Trustzone
 * 
 */
typedef enum ALT_SDR_ACCESS_e
{
    ALT_SDR_ACCESS_SECURE      =   0,
    ALT_SDR_ACCESS_NONSECURE   =   1,
    ALT_SDR_ACCESS_BOTH        =   2
} ALT_SDR_ACCESS_t;

/*!
 *  This type enumerates the mask values for the various ports
 *  This allows the developer to specify as many (or few) ports
 *  as necessary in a single uint32
 * 
 */

typedef enum ALT_SDR_PORT_MASK_e
{
    ALT_SDR_PORT_MASK_FPGA_AXI_R0   =   1<<3,
    ALT_SDR_PORT_MASK_FPGA_AXI_W1   =   1<<4,
    ALT_SDR_PORT_MASK_FPGA_AXI_R2   =   1<<5,
    ALT_SDR_PORT_MASK_FPGA_AXI_W3   =   1<<6,
    ALT_SDR_PORT_MASK_FPGA_AXI_R4   =   1<<7,
    ALT_SDR_PORT_MASK_FPGA_AXI_W5   =   1<<8,
    ALT_SDR_PORT_MASK_FPGA          =   0x01F8,

    ALT_SDR_PORT_MASK_L3_AXI_R      =   1<<9,
    ALT_SDR_PORT_MASK_L3_AXI_W      =   1<<11,
    ALT_SDR_PORT_MASK_L3            =   0x0A00,

    ALT_SDR_PORT_MASK_MPU_AXI_R     =   1<<10,
    ALT_SDR_PORT_MASK_MPU_AXI_W     =   1<<12,
    ALT_SDR_PORT_MASK_CPUS          =   0x1400,

    ALT_SDR_PORT_MASK_ALL           =   0x1FF8
} ALT_SDR_PORT_MASK_t;


typedef enum ALT_SDR_ACCESS_DATA_e
{
    ALT_SDR_ACCESS_DATA_ALLOW       =   0, 
             /*!<If the default rule is to deny access to memory,
               then this value specifies that this rule will allow
               a specific region of memory to access the memory> */
    ALT_SDR_ACCESS_DATA_DENY        =   (1<<13)
             /*!<If the feault rule is allow access to memory,
               then this value specifies that this rule will deny
               access to this region of memory> */
} ALT_SDR_ACCESS_DATA_t;

#define ALT_SDR_CTL_PROTRULERDWR_WRITE        (1<<5)

#define ALT_SDR_MAX_RULE_NUM                          19
#define ALT_SDR_CTL_RULE_NEW                  0xFFFFFFFFu
#define ALT_SDR_CTL_RULE_INVALID              0xFFFFFFFEu

typedef struct ALT_SDR_RULE_s
{
    uint32_t                    LowAddr;
    uint32_t                    HighAddr;
    ALT_SDR_RULEID_t            RuleMin;
    ALT_SDR_RULEID_t            RuleMax;
    ALT_SDR_ACCESS_t            SecurityType;
    ALT_SDR_PORT_MASK_t         Ports;
    ALT_SDR_ACCESS_DATA_t       AccessPermission;
} __attribute__((aligned(4))) ALT_SDR_RULE_t;

/*!
 * Sets a rule to enforce the specified policy
 *
 * \param       rulenum
 *              May be either ALT_SDR_CTL_RULE_NEW to use the next
 *              available rule or a specific rule number (less than 
 *              ALT_SDR_MAX_RULE_NUM);
 *
 * \param       ruleinfo - specifies the details of this rule
 *
 * \returns     The rule ID for the newly created rule, or 
 *              ALT_SDR_CTL_RULE_INVALID if the function fails
 */

uint32_t  alt_sdr_rule_set(uint32_t rulenum, ALT_SDR_RULE_t *ruleinfo);

/*!
 * Deletes a rule that was created using the alt_sdr_set_rule function
 * The rulenum should be value returned by alt_sdr_set_rule when the
 * rule was created
 *
 * \param       rulenum
 *              The rule that was previously set
 *
 * \retval      ALT_E_BAD_ARG   One of the pointers passed in was NULLor the
 *                              port value was invalid
 * \retval      ALT_E_ERROR
 *
 */

ALT_STATUS_CODE alt_sdr_rule_delete(uint32_t rulenum);

/*!
 * Sets the default system-wide sdram rule. This will apply to all memory
 * accesses that do not follow within the memory range of the individual
 * rules specified by set_rule
 *
 * \retval      ALT_E_BAD_ARG   One of the pointers passed in was NULLor the
 *                              port value was invalid
 * \retval      ALT_E_ERROR
 *
 */

ALT_STATUS_CODE alt_sdr_rule_set_default(uint32_t defaultRule);

/*! @} */

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /*__ALT_SDRAM_H__*/

