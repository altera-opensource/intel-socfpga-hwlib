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
#include "altx_ethernet.h"
#include "alt_eth_phy_ksz9031.h"
#include "alt_ethernet.h"

#include <stdio.h>
#include "socal/alt_rstmgr.h"
#include "socal/alt_sysmgr.h"
#include "socal/socal.h"
#include "socal/hps.h"
#include "alt_printf.h"

#ifdef ALT_DEBUG_ETHERNET
    #define dprintf printf
#else
    #define dprintf null_printf
#endif

extern void * Alt_Emac_Addr[];

static const uint32_t Phy_Addr[] = {
    EMAC0_PHY_ADDRESS,
    EMAC1_PHY_ADDRESS,
    EMAC2_PHY_ADDRESS  
};

/******************************************************************************/
void alt_eth_phy_delay(volatile uint32_t delay)
{
    volatile uint32_t index = 0; 
    for(index = delay; index != 0; index--);
}

ALT_STATUS_CODE alt_eth_phy_get_duplex_and_speed(uint32_t * phy_duplex_status, uint32_t * phy_speed, uint32_t emac_instance)
{
    uint32_t regval=0;
    ALT_STATUS_CODE rc;
    
    rc = alt_eth_phy_read_register(emac_instance, PHY_CR, &regval);
    if (regval & PHY_DUPLEX_STATUS) { *phy_duplex_status = ALT_ETH_SET; }
    else                            { *phy_duplex_status = ALT_ETH_RESET; }
    
    if (regval & PHY_SPEED_100)       { *phy_speed = 100; }
    else if (regval & PHY_SPEED_1000) { *phy_speed = 1000; }
    else                              { *phy_speed = 10; }
    
    return rc;
}

ALT_STATUS_CODE alt_eth_phy_config(uint32_t emac_instance)
{
    uint32_t rdval,timeout;
    ALT_STATUS_CODE rc;
      
    /*--------------------   Configure the PHY skew values  ----------------*/
    rc = alt_eth_phy_write_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_CONTROL_PAD_SKEW_REG, PHY_CONTROL_PAD_SKEW_VALUE);
    if (rc==ALT_E_ERROR) { return rc; }
       
    rc = alt_eth_phy_write_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_CLK_PAD_SKEW_REG,     PHY_CLK_PAD_SKEW_VALUE);
    if (rc==ALT_E_ERROR) { return rc; }
    
    rc = alt_eth_phy_write_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_RX_DATA_PAD_SKEW_REG, PHY_RX_DATA_PAD_SKEW_VALUE);
    if (rc==ALT_E_ERROR) { return rc; }
    
    rc = alt_eth_phy_write_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_TX_DATA_PAD_SKEW_REG, PHY_TX_DATA_PAD_SKEW_VALUE);
    if (rc==ALT_E_ERROR) { return rc; }
    
    /*Configure AN FLP Burst Trasmit timing interval*/
    rc = alt_eth_phy_write_register_extended(emac_instance, PHY_MMD_DEV_ADDR_00, PHY_MMD_D0_FLP_LO_REG, PHY_MMD_D0_FLP_16MS_LO);
    if (rc==ALT_E_ERROR) { return rc; }
    
    rc = alt_eth_phy_write_register_extended(emac_instance, PHY_MMD_DEV_ADDR_00, PHY_MMD_D0_FLP_HI_REG, PHY_MMD_D0_FLP_16MS_HI);
    if (rc==ALT_E_ERROR) { return rc; }
    
#ifdef ALT_DEBUG_ETHERNET
    alt_eth_phy_read_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_CONTROL_PAD_SKEW_REG, &rdval);
    dprintf("skew reg 0x%x 0x%x\n",PHY_CONTROL_PAD_SKEW_REG,rdval);
    
    alt_eth_phy_read_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_CLK_PAD_SKEW_REG, &rdval);
    dprintf("skew reg 0x%x 0x%x\n",PHY_CLK_PAD_SKEW_REG,rdval);
      
    alt_eth_phy_read_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_RX_DATA_PAD_SKEW_REG, &rdval);
    dprintf("skew reg 0x%x 0x%x\n",PHY_RX_DATA_PAD_SKEW_REG,rdval);
    
    alt_eth_phy_read_register_extended(emac_instance, PHY_MMD_DEV_ADDR_02, PHY_TX_DATA_PAD_SKEW_REG,&rdval);
    dprintf("skew reg 0x%x 0x%x\n",PHY_TX_DATA_PAD_SKEW_REG,rdval);;

    alt_eth_phy_read_register_extended(emac_instance, PHY_MMD_DEV_ADDR_00, PHY_MMD_D0_FLP_LO_REG,&rdval);
    dprintf("skew reg 0x%x 0x%x\n",PHY_MMD_D0_FLP_LO_REG,rdval);
    
    alt_eth_phy_read_register_extended(emac_instance, PHY_MMD_DEV_ADDR_00, PHY_MMD_D0_FLP_HI_REG,&rdval);
    dprintf("skew reg 0x%x 0x%x\n",PHY_MMD_D0_FLP_HI_REG,rdval);   
#endif  /* ALT_DEBUG_ETHERNET */
       
    /* Check PHY Status if auto-negotiation is supported */
    rc = alt_eth_phy_read_register(emac_instance, PHY_BSR, &rdval);
    if (((rdval & PHY_AUTOCAP) == 0) || (rc==ALT_E_ERROR))
    {
      return ALT_E_ERROR;
    }
    
    /* Set Advertise capabilities for 10Base-T/10Base-T full-duplex/100Base-T/100Base-T full-duplex */
    rc = alt_eth_phy_read_register(emac_instance, PHY_AUTON, &rdval);
    if (rc==ALT_E_ERROR) { return rc; }
    
    rdval |= (PHYANA_10BASET | PHYANA_10BASETFD | PHYANA_100BASETX | PHYANA_100BASETXFD);
    rc = alt_eth_phy_write_register(emac_instance, PHY_AUTON, rdval);
    if (rc==ALT_E_ERROR) { return rc; }
      
    /* Set Advertise capabilities for 1000 Base-T/1000 Base-T full-duplex */   
    rc = alt_eth_phy_write_register(emac_instance, PHY_1GCTL, 
                ~(PHYADVERTISE_1000FULL | PHYADVERTISE_1000HALF));    
    if (rc==ALT_E_ERROR) { return rc; }
    
    /* Wait for linked status... */
    timeout = 0;
    do
    {
        timeout++;
        rc=alt_eth_phy_read_register(emac_instance, PHY_BSR, &rdval);
    } while (!(rdval & PHY_LINKED_STATUS) && (timeout < PHY_READ_TO) && (rc==ALT_E_SUCCESS));
   
    /* Return ERROR in case of timeout */
    if ((timeout == PHY_READ_TO) || (rc==ALT_E_ERROR))
    {
        dprintf("Error Link Down\n");
        return ALT_E_ERROR;
    }
    dprintf("Link is up!\n");
 
    /* Configure the PHY for AutoNegotiate */
    rc = alt_eth_phy_read_register(emac_instance, PHY_BCR, &rdval);  
    if (rc==ALT_E_ERROR) { return rc; }
    
    rdval |= PHY_AUTONEGOTIATION;
    rdval |= PHY_RESTART_AUTONEGOTIATION;
    rc = alt_eth_phy_write_register(emac_instance, PHY_BCR, rdval);  
    if (rc==ALT_E_ERROR) { return rc; }    
    
    /* Wait until the auto-negotiation is completed */
    timeout = 0;
    do
    {
        timeout++;
        rc = alt_eth_phy_read_register(emac_instance, PHY_BSR, &rdval);
    } while (!(rdval & PHY_AUTONEGO_COMPLETE) && (timeout < PHY_READ_TO) && (rc==ALT_E_SUCCESS));  
   
    /* Return ERROR in case of timeout */
    if ((timeout == PHY_READ_TO) || (rc==ALT_E_ERROR))
    {
        alt_eth_phy_read_register(emac_instance, PHY_BSR, &rdval);
        dprintf("Error Auto Negotiation: Status reg = 0x%x\n",rdval);
        return ALT_E_ERROR;
    }
    dprintf("Auto Negotiation Complete! \n");
     
    return ALT_E_SUCCESS;
} 

ALT_STATUS_CODE alt_eth_phy_reset(uint32_t emac_instance)
{
    int i;
    ALT_STATUS_CODE rc;
    uint32_t rdval;
        
    /* Put the PHY in reset mode */
    if ((alt_eth_phy_write_register(emac_instance, PHY_BCR, PHY_RESET)) != ALT_E_SUCCESS)
    {
        /* Return ERROR in case of write timeout */
        return ALT_E_ERROR;
    }
        
    /* Wait for the reset to clear */
    for (i=0; i<10; i++)
    {
        alt_eth_phy_delay(PHY_RESET_DELAY);
        rc = alt_eth_phy_read_register(emac_instance, PHY_BCR, &rdval);
        if (((rdval & PHY_RESET) == 0) || (rc==ALT_E_ERROR)) {  break; }
    }
    
    if (i==10) { return ALT_E_ERROR; }
         
    /* Delay to assure PHY reset */
    alt_eth_phy_delay(PHY_RESET_DELAY);
        
    return rc;
}    

/******************************************************************************/                             
/*                                PHY functions                               */
/******************************************************************************/

ALT_STATUS_CODE alt_eth_phy_read_register(uint32_t emac_instance, uint32_t phy_reg, uint32_t * rdval)
{
    uint32_t tmpreg = 0;     
    volatile uint32_t timeout = 0;
    uint32_t phy_addr;
     
    if (emac_instance > 2) { return  ALT_E_ERROR; }
    
    phy_addr=Phy_Addr[emac_instance];
    
    /* Prepare the MII address register value */
    tmpreg = 0;
    /* Set the PHY device address */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_PA_SET(phy_addr);
    /* Set the PHY register address */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_GR_SET(phy_reg);
    /* Set the read mode */
    tmpreg &= ALTX_EMAC_GMACGRP_GMII_ADDRESS_GW_CLR_MSK;
    /* Set the clock divider */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_CR_SET(ALTX_EMAC_GMACGRP_GMII_ADDRESS_CR_E_DIV102);
    /* Set the MII Busy bit */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_GB_SET(ALTX_EMAC_GMACGRP_GMII_ADDRESS_GB_SET_MSK);
    /* Write the result value into the MII Address register */
    alt_write_word(ALTX_EMAC_GMACGRP_GMII_ADDRESS_ADDR(Alt_Emac_Addr[emac_instance]), tmpreg & 0xffff);
    
    /* Check the Busy flag */
    do
    {
        timeout++;
        tmpreg = alt_read_word(ALTX_EMAC_GMACGRP_GMII_ADDRESS_ADDR(Alt_Emac_Addr[emac_instance]));
    } while ((tmpreg & ALTX_EMAC_GMACGRP_GMII_ADDRESS_GB_SET_MSK) && (timeout < PHY_READ_TO));
    
    /* Return ERROR in case of timeout */
    if (timeout == PHY_READ_TO)
    {
        return ALT_E_ERROR;
    }
    
    /* Return data register value */
    *rdval = alt_read_word(ALTX_EMAC_GMACGRP_GMII_DATA_ADDR(Alt_Emac_Addr[emac_instance]));
    
    return ALT_E_SUCCESS;
}


ALT_STATUS_CODE alt_eth_phy_write_register(uint32_t emac_instance, uint32_t phy_reg, uint32_t phy_value)
{
    uint32_t tmpreg = 0;     
    volatile uint32_t timeout = 0;
    uint32_t phy_addr;
    
    if (emac_instance > 2) { return  ALT_E_ERROR; }    
    
    phy_addr=Phy_Addr[emac_instance];
     
    /* Prepare the MII address register value */
    tmpreg = 0;
    /* Set the PHY device address */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_PA_SET(phy_addr);
    /* Set the PHY register address */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_GR_SET(phy_reg);
    /* Set the write mode */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_GW_SET_MSK;
    /* Set the clock divider */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_CR_SET(ALTX_EMAC_GMACGRP_GMII_ADDRESS_CR_E_DIV102);
    /* Set the MII Busy bit */
    tmpreg |= ALTX_EMAC_GMACGRP_GMII_ADDRESS_GB_SET(ALTX_EMAC_GMACGRP_GMII_ADDRESS_GB_SET_MSK);
    /* Give the value to the MII data register */
    alt_write_word(ALTX_EMAC_GMACGRP_GMII_DATA_ADDR(Alt_Emac_Addr[emac_instance]), phy_value & 0xffff);
    /* Write the result value into the MII Address register */
    alt_write_word(ALTX_EMAC_GMACGRP_GMII_ADDRESS_ADDR(Alt_Emac_Addr[emac_instance]), tmpreg & 0xffff);
    
    /* Check the Busy flag */
    do
    {
        timeout++;
        tmpreg = alt_read_word(ALTX_EMAC_GMACGRP_GMII_ADDRESS_ADDR(Alt_Emac_Addr[emac_instance]));
    } while ((tmpreg & ALTX_EMAC_GMACGRP_GMII_ADDRESS_GB_SET_MSK) && (timeout < PHY_WRITE_TO));
    
    /* Return ERROR in case of timeout */
    if (timeout == PHY_WRITE_TO)
    {
        return ALT_E_ERROR;
    }
    
    /* Return SUCCESS */
    return ALT_E_SUCCESS;  
}


ALT_STATUS_CODE alt_eth_phy_write_register_extended(uint32_t emac_instance, uint32_t dev_addr, uint32_t phy_reg, uint32_t phy_value)
{
    ALT_STATUS_CODE rc;
    
    rc = alt_eth_phy_write_register(emac_instance,
                          PHY_MMD_CTRL_REG, 
                          dev_addr);
    if (rc==ALT_E_ERROR) { return rc; }
    
    rc = alt_eth_phy_write_register(emac_instance,
                          PHY_MMD_REGDATA_REG, 
                          phy_reg);                         
    if (rc==ALT_E_ERROR) { return rc; }                     
    
    rc = alt_eth_phy_write_register(emac_instance,
                          PHY_MMD_CTRL_REG, 
                          (PHY_MOD_DATA_NO_POST_INC << 14) | dev_addr);
    if (rc==ALT_E_ERROR) { return rc; }
    
    rc = alt_eth_phy_write_register(emac_instance,
                          PHY_MMD_REGDATA_REG, 
                          phy_value);
    
    return rc;
}

ALT_STATUS_CODE alt_eth_phy_read_register_extended(uint32_t emac_instance, uint32_t dev_addr, uint32_t phy_reg, uint32_t * rdval)
{
    ALT_STATUS_CODE rc;
    
    rc=alt_eth_phy_write_register(emac_instance,
                         PHY_MMD_CTRL_REG, 
                         dev_addr);
    if (rc == ALT_E_ERROR) { return ALT_E_ERROR; }
   
    rc=alt_eth_phy_write_register(emac_instance,
                         PHY_MMD_REGDATA_REG, 
                         phy_reg);
    if (rc == ALT_E_ERROR)  { return ALT_E_ERROR; }    
    
    rc=alt_eth_phy_write_register(emac_instance,
                         PHY_MMD_CTRL_REG, 
                         (PHY_MOD_DATA_NO_POST_INC << 14) | dev_addr);
    if (rc == ALT_E_ERROR)  { return ALT_E_ERROR; }                     
               
    return alt_eth_phy_read_register(emac_instance,
                               PHY_MMD_REGDATA_REG,rdval);
}


ALT_STATUS_CODE alt_eth_phy_loopback(uint32_t new_state, uint32_t emac_instance)
{
    uint32_t tmpreg = 0;
    ALT_STATUS_CODE rc;
        
    /* Get the PHY configuration to update it */
    if (alt_eth_phy_read_register(emac_instance, PHY_BCR, &tmpreg) == ALT_E_ERROR)
    { 
        return ALT_E_ERROR; 
    }  
    
    if (new_state)
    {
        /* Enable the PHY loopback mode */
        tmpreg |= PHY_LOOPBACK;  
    }
    else
    {
        /* Disable the PHY loopback mode: normal mode */
        tmpreg &= (~PHY_LOOPBACK);
    }
    
    /* Update the PHY control register with the new configuration */
    rc = alt_eth_phy_write_register(emac_instance, PHY_BCR, tmpreg);
   
    return rc;
} 

