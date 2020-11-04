/******************************************************************************
 *
 * Copyright 2017 Altera Corporation. All Rights Reserved.
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

#ifndef __ALT_PHY_KSZ9031_H__
#define __ALT_PHY_KSZ9031_H__

#include "hwlib.h"
#include "socal/hps.h"
#include "socal/alt_emac.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

/******************************************************************************/
/* There are 3 functions required to support a phy for use with the Ethernet API.
 * The format and function of the 3 functions is specified in more detail in alt_ethernet.h.
 * The 3 functions:
 * ALT_STATUS_CODE alt_eth_phy_config(uint32_t instance);
 * ALT_STATUS_CODE alt_eth_phy_reset(uint32_t instance);
 * ALT_STATUS_CODE alt_eth_phy_get_duplex_and_speed(uint32_t * phy_duplex_status, uint32_t * phy_speed, uint32_t instance);
 * 
 * To use a phy different than alt_eth_phy_ksz9031.c, simply create a C file containing 
 * the 3 functions and include it in your build instead of the alt_eth_phy_ksz9031.c file.
*/

/* Within a phy, there are some parameters that may change based upon the devkit or board. 
   This file supports the S10 DevKit.   The parameters which may change based on board follow: */
#define EMAC0_PHY_ADDRESS               (7)
#define EMAC1_PHY_ADDRESS               (0)   /* no phy */
#define EMAC2_PHY_ADDRESS               (0)   /* no phy */ 

/* Micrel KSZ9031 Extended registers */           
#define PHY_CONTROL_PAD_SKEW_REG        (4)
#define PHY_CONTROL_PAD_SKEW_VALUE      (0x70)
#define PHY_RX_DATA_PAD_SKEW_REG        (5)
#define PHY_RX_DATA_PAD_SKEW_VALUE      (0x7777)
#define PHY_TX_DATA_PAD_SKEW_REG        (6)
#define PHY_TX_DATA_PAD_SKEW_VALUE      (0x0) 
#define PHY_CLK_PAD_SKEW_REG            (8)
#define PHY_CLK_PAD_SKEW_VALUE          (0x3FC) 

/* Auto-Negotiation FLP burst transmit timing */
#define PHY_MMD_D0_FLP_LO_REG           (3)
#define PHY_MMD_D0_FLP_16MS_LO          (0x1A80)
#define PHY_MMD_D0_FLP_HI_REG           (4)
#define PHY_MMD_D0_FLP_16MS_HI          (0x0006) 
/*  End of ksz9031 parameters that may change based on DevKit or Board */
/******************************************************************************/
   

/*  PHY_Read_write_Timeouts   */ 
#define PHY_READ_TO                     ((uint32_t)0x0004FFFF)
#define PHY_WRITE_TO                    ((uint32_t)0x0004FFFF)

/*  PHY_Register_address */ 
#define PHY_BCR                         (0)            /*!< Transceiver Basic Control Register */
#define PHY_BSR                         (1)            /*!< Transceiver Basic Status Register */
#define PHY_ID1                         (2)            /*!< PHY Identifier Register */
#define PHY_ID2                         (3)            /*!< PHY Identifier Register */
#define PHY_AUTON                       (4)            /*!< PHY AutoNegotiate Register */
#define PHY_1GCTL                       (9)            /*!< PHY 1000T Control Register */
#define PHY_1GSTS                       (10)           /*!< PHY 1000T Status Register */
#define PHY_CR                          (31)           /*!< PHY Status register */

/* PHY Reset delay */ 
#define PHY_RESET_DELAY                 ((uint32_t)0x000FFFFF) 

/* Speed and Duplex mask values  */
#define PHY_SPEED_10                    (0x0010) 
#define PHY_SPEED_100                   (0x0020)   
#define PHY_SPEED_1000                  (0x0040) 
#define PHY_SPEED_MASK                  (0x0070) 
#define PHY_DUPLEX_STATUS               (0x0008) 

/* 1000BASE-T Control register */
#define PHYADVERTISE_1000FULL           (0x0200)      /* Advertise 1000BASE-T full duplex */
#define PHYADVERTISE_1000HALF           (0x0100)      /* Advertise 1000BASE-T half duplex */
                                                  
/* PHY Auto-Negotiation advertisement */                                                                                  
#define PHYANA_SEL_MASK                 (0x1F)        /* Link type selector                             */
#define PHYANA_10BASET                  (1 << 5)      /* Advertise 10BASET capability                   */
#define PHYANA_10BASETFD                (1 << 6)      /* Advertise 10BASET Full duplex capability       */
#define PHYANA_100BASETX                (1 << 7)      /* Advertise 100BASETX capability                 */
#define PHYANA_100BASETXFD              (1 << 8)      /* Advertise 100 BASETX Full duplex capability    */
#define PHYANA_PAUSE_OP_MASK            (3 << 10)     /* Advertise PAUSE frame capability               */
#define PHYANA_REMOTE_FAULT             (1 << 13)     /* Remote fault detected                          */
                                                                                                   
/* Data operations */                             
#define PHY_MOD_DATA_NO_POST_INC        (0x1)
#define PHY_MOD_DATA_POST_INC_RW        (0x2)
#define PHY_MOD_DATA_POST_INC_W         (0x3)
                                                 
#define PHY_MMD_CTRL_REG                (0x0d)
#define PHY_MMD_REGDATA_REG             (0x0e)
                                                                                     
#define PHY_MMD_DEV_ADDR_02             (2)
#define PHY_MMD_DEV_ADDR_00             (0)
                                                        
/* PHY_basic_Control_register           */ 
#define PHY_COLLTEST                    (1 << 7 )    /* Collision test enable                          */
#define PHY_DUPLEX_MODE                 (1 << 8 )    /* Set Duplex Mode                                */
#define PHY_RESTART_AUTONEGOTIATION     (1 << 9 )    /* Restart Auto-Negotiation of Link abilities     */
#define PHY_POWERDOWN                   (1 << 11)    /* Power-Down switch                              */
#define PHY_AUTONEGOTIATION             (1 << 12)    /* Auto-Negotiation Enable                        */
#define PHY_SPEEDSEL                    (1 << 13)    /* Link Speed Selection                           */
#define PHY_LOOPBACK                    (1 << 14)    /* Set loopback mode                              */
#define PHY_RESET                       (1 << 15)    /* Do a PHY reset                                 */
                                                     
/** PHY_basic_status_register           */ 
#define PHY_AUTONEGO_COMPLETE           (0x0020)     /*!< Auto-Negotiation process completed */
#define PHY_LINKED_STATUS               (0x0004)     /*!< Valid link established */
#define PHY_JABBER_DETECTION            (0x0002)     /*!< Jabber condition detected */
#define PHY_AUTOCAP                     (0x0008)     /*!< Auto Negotiation Capability */

/******************************************************************************/
/*!
 * Write a PHY register
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 * \param       phy_reg
 *              The register to write.
 * \param       wrval
 *              The value to write
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_phy_write_register(uint32_t emac_instance, uint32_t phy_reg, uint32_t wrval);

/******************************************************************************/
/*!
 * Read a PHY register
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 * \param       phy_reg
 *              The register to read.
 * \param       *rdval
 *              The value read
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_phy_read_register(uint32_t emac_instance, uint32_t phy_reg, uint32_t * rdval);

/******************************************************************************/
/*!
 * Read an extended PHY register
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 * \param       dev_addr
 *              The internal device address.  
 * \param       phy_reg
 *              The register to read.
 * \param       *rdval
 *              The value read
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_phy_read_register_extended(uint32_t emac_instance,  uint32_t dev_addr, uint32_t phy_reg, uint32_t * rdval);

/******************************************************************************/
/*!
 * Write an extended PHY register
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 * \param       dev_addr
 *              The internal device address.  
 * \param       phy_reg
 *              The register to write.
 * \param       wrval
 *              The value to write
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_phy_write_register_extended(uint32_t emac_instance, uint32_t dev_addr, uint32_t phy_reg, uint32_t wrval);

/******************************************************************************/
/*!
 * Enable or Disable Loopback mode
 *
 *
 * \param       newstate
 *              0 to Disable or 1 to Enable
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_phy_loopback(uint32_t new_state, uint32_t emac_instance);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* __ALT_PHY_KSZ9031_H__ */
