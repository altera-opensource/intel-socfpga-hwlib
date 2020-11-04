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
 
#include <stdio.h>
#include <string.h>
#include "altx_ethernet.h"
#include "alt_ethernet.h"
#include "alt_cache.h"

#include "socal/alt_rstmgr.h"
#include "socal/alt_sysmgr.h"
#include "socal/socal.h"
#include "socal/hps.h"
#include "alt_interrupt.h"
#include "alt_printf.h"

#ifdef ALT_DEBUG_ETHERNET
    #define dprintf printf
#else
    #define dprintf null_printf
#endif
 
/* Lookup tables for the emac registers 
   Cooresponding to Emac0, Emac1, and Emac 2 */
const void * Alt_Emac_Addr[] = {
    ALT_EMAC0_ADDR,
    ALT_EMAC1_ADDR,
    ALT_EMAC2_ADDR
};

static const void * Alt_Sysmgr_Emac_Addr[] = {
    ALTX_SYSMGR_CORE_EMAC0_ADDR,
    ALTX_SYSMGR_CORE_EMAC1_ADDR,
    ALTX_SYSMGR_CORE_EMAC2_ADDR
};

static const uint32_t Alt_Rstmgr_Per0modrst_Emac_Set_Msk[] = {
    ALT_RSTMGR_PER0MODRST_EMAC0_SET_MSK,
    ALT_RSTMGR_PER0MODRST_EMAC1_SET_MSK,
    ALT_RSTMGR_PER0MODRST_EMAC2_SET_MSK
};

static const uint32_t Alt_Sysmgr_Fpgaintf_En_3_Emac_Set_Msk[] = {
    ALTX_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SET_MSK,
    ALTX_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SET_MSK,
    ALTX_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SET_MSK
};

static const uint32_t Alt_Sysmgr_Core_Emac_Phy_Intf_Sel_Set_Msk[] = {
    ALTX_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_SET_MSK,
    ALTX_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_SET_MSK,
    ALTX_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_SET_MSK
};

/* Delay function used during ethernet setup */
void alt_eth_delay(volatile uint32_t delay)
{
    volatile uint32_t i; 
    
    for(i = delay; i != 0; i--);
}

/*  Reset the EMAC, Disable the FPGA Interface, and set the PHY mode  */
void alt_eth_reset_mac(uint32_t instance)
{
    if (instance > 2) { return; }
     
    /* Reset the EMAC */
    alt_setbits_word(ALT_RSTMGR_PER0MODRST_ADDR, Alt_Rstmgr_Per0modrst_Emac_Set_Msk[instance]);
    
    /* Program the phy_intf_sel field of the emac* register in the System Manager to select
       RGMII PHY interface. */
    alt_replbits_word(Alt_Sysmgr_Emac_Addr[instance],
                      Alt_Sysmgr_Core_Emac_Phy_Intf_Sel_Set_Msk[instance],  
                      ALTX_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_RGMII);
                    
    /* Disable the Ethernet Controller FPGA interface by clearing the emac_* bit in the fpgaintf_en_3
      register of the System Manager. */
    alt_clrbits_word(ALTX_SYSMGR_CORE_FPGAINTF_EN_3_ADDR, Alt_Sysmgr_Fpgaintf_En_3_Emac_Set_Msk[instance]);           
                    
    /* clear the emac* bit in the per0modrst register of
       the Reset Manager to bring the EMAC out of reset. */
    alt_clrbits_word(ALT_RSTMGR_PER0MODRST_ADDR, Alt_Rstmgr_Per0modrst_Emac_Set_Msk[instance]);
      
}   

void alt_eth_reinit_rxdesc(alt_eth_emac_instance_t * emac)
{
    alt_eth_dma_set_rx_state(ALT_ETH_DISABLE, emac->instance); 
    alt_eth_setup_rxdesc(emac);
    alt_eth_dma_set_rx_state(ALT_ETH_ENABLE, emac->instance); 
}

void alt_eth_setup_rxdesc(alt_eth_emac_instance_t * emac)
{
    int32_t i;
  
    alt_eth_dma_desc_t *rx_desc;

    for (i = 0; i < NUMBER_OF_RX_DESCRIPTORS; i++)
    {
        rx_desc = &emac->rx_desc_ring[i];
        rx_desc->buffer1_addr = (uint32_t) &emac->rx_buf[i * ETH_BUFFER_SIZE];
        rx_desc->control_buffer_size = ETH_DMARXDESC_RCH | ETH_BUFFER_SIZE;       
     
        /*set own bit*/
        rx_desc->status = ETH_DMARXDESC_OWN;     
     
        rx_desc->buffer2_next_desc_addr = (uint32_t)&emac->rx_desc_ring[i+1];
        if (i == (NUMBER_OF_RX_DESCRIPTORS - 1))
        {
            rx_desc->buffer2_next_desc_addr = (uint32_t)&emac->rx_desc_ring[0];
        }           
    }

    emac->rx_current_desc_number = 0;
    emac->rx_processed_desc_number = 0;
    emac->rxints = 0;
  
    /* Set RX Descriptor List Address Register */
    alt_eth_dma_set_rx_desc_addr((uint32_t) &emac->rx_desc_ring[0], emac->instance); 
}

void alt_eth_setup_txdesc(alt_eth_emac_instance_t * emac)
{
    int32_t i;
  
    alt_eth_dma_desc_t *tx_desc;

    for (i = 0; i < NUMBER_OF_TX_DESCRIPTORS; i++)
    {
        tx_desc = &emac->tx_desc_ring[i];
        tx_desc->buffer1_addr = (uint32_t)NULL;
        tx_desc->buffer2_next_desc_addr = (uint32_t)&emac->tx_desc_ring[i+1];
        tx_desc->status = 0;
        tx_desc->control_buffer_size = 0;
    
        if (i == (NUMBER_OF_TX_DESCRIPTORS - 1))
        {
            tx_desc->buffer2_next_desc_addr = (uint32_t)&emac->tx_desc_ring[0];
        }      
    }

    emac->tx_current_desc_number = 0;
    emac->txints = 0;
  
    /* Set TX Descriptor List Address Register */
    alt_eth_dma_set_tx_desc_addr((uint32_t) &emac->tx_desc_ring[0], emac->instance);
  
}

ALT_STATUS_CODE alt_eth_irq_init(alt_eth_emac_instance_t * emac, alt_int_callback_t callback)
{
    
    ALT_STATUS_CODE status = ALT_E_SUCCESS;    
    
    if (emac->instance==0) { emac->irqnum = ALT_INT_INTERRUPT_EMAC0_IRQ; }
    if (emac->instance==1) { emac->irqnum = ALT_INT_INTERRUPT_EMAC1_IRQ; }
    if (emac->instance>=2) { emac->irqnum = ALT_INT_INTERRUPT_EMAC2_IRQ; }    
         
    /* Ethernet IRQ Callback */
    status = alt_int_isr_register( emac->irqnum,
                            callback,
                            (void *)emac);

    /* Configure the EMAC as Level. */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_int_dist_trigger_set(emac->irqnum,
                                         ALT_INT_TRIGGER_AUTODETECT);
    }
   
    /* Configure the EMAC priority */
    if (status == ALT_E_SUCCESS)
    {  
        status = alt_int_dist_priority_set(emac->irqnum, 16);
    }
    
    /* Set CPUs 0 and 1 as the target. */
    if (status == ALT_E_SUCCESS)
    {                    
        status = alt_int_dist_target_set(emac->irqnum, 3);
    }
    
    /* Enable the interrupt in the Distributor. */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_int_dist_enable(emac->irqnum);
    }

    return status;
}

void alt_eth_irq_callback(uint32_t icciar, void * context)
{

    uint32_t status;
    alt_eth_emac_instance_t * emac;
   
    emac = context;
       
    /* Check to make sure this is a valid interrupt. */
    if (icciar != emac->irqnum) { return; }
              
    status = alt_eth_dma_get_status_reg(emac->instance) & emac->interrupt_mask;
                                         
    if (status & ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_NIE_SET_MSK)
    {
        alt_eth_dma_clear_status_bits(ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_NIE_SET_MSK, emac->instance);        
    }
    
    if (status & ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_TIE_SET_MSK)
    {
        emac->txints++;
        alt_eth_dma_clear_status_bits(ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_TIE_SET_MSK, emac->instance);        
    }
        
    if (status & ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_RIE_SET_MSK)
    {
        emac->rxints++;        
        alt_eth_dma_clear_status_bits(ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_RIE_SET_MSK, emac->instance);         
    }

}

/*  Ethernet API Functions  */
ALT_STATUS_CODE alt_eth_dma_mac_config(alt_eth_emac_instance_t * emac)
{
    uint32_t tmpreg = 0, interrupt_mask;
    uint32_t alt_mac_config_reg_settings = 0;
    uint32_t phy_duplex_status, phy_speed;
    ALT_STATUS_CODE status;  
    
    if (emac->instance > 2) { return ALT_E_ERROR; }        
    
    /* Reset the EMAC */
    alt_eth_reset_mac(emac->instance);
     
    /* Reset the PHY  */
    status = alt_eth_phy_reset(emac->instance);
    if (status != ALT_E_SUCCESS) { return status; }
    
    /* Configure the PHY */
    status = alt_eth_phy_config(emac->instance);
    if (status != ALT_E_SUCCESS) { return status; }    
      
    /* Reset the Ethernet */
    status = alt_eth_software_reset(emac->instance);
    if (status != ALT_E_SUCCESS) { return status; }    
        
    /* note: this does not mean Enhanced Descriptor Format which is always used in A10/S10 */
    #ifdef USE_ALTERNATE_DESCRIPTOR_SIZE          
        tmpreg=ALTX_EMAC_DMAGRP_BUS_MODE_ATDS_SET_MSK; /* Alternate Descriptor Size */
    #endif
    
    /* Set the DMA Bus Mode Register */
    alt_write_word(ALTX_EMAC_DMAGRP_BUS_MODE_ADDR(Alt_Emac_Addr[emac->instance]), 
        (tmpreg
          /*| ALTX_EMAC_DMAGRP_BUS_MODE_USP_SET_MSK      */     /* Use separate PBL */ 
          /*| ALTX_EMAC_DMAGRP_BUS_MODE_AAL_SET_MSK      */     /* Address Aligned Beats */
          /*| ALTX_EMAC_DMAGRP_BUS_MODE_EIGHTXPBL_SET(1) */
          /*| ALTX_EMAC_DMAGRP_BUS_MODE_PBL_SET(8)       */     /* Programmable Burst Length */
          /*| ALTX_EMAC_DMAGRP_BUS_MODE_RPBL_SET(8)      */     /* Programmable Burst Length */
            | ALTX_EMAC_DMAGRP_BUS_MODE_FB_SET_MSK              /* Fixed Burst */
        )); 
    
    /* Initialize the tx and rx descriptors */
    alt_eth_setup_rxdesc(emac);
    alt_eth_setup_txdesc(emac);
         
    /* set the DMA OP Mode Regsiter */     
    alt_write_word(ALTX_EMAC_DMAGRP_OPERATION_MODE_ADDR(Alt_Emac_Addr[emac->instance]),   
        (0 
         /*| ALTX_EMAC_DMAGRP_OPERATION_MODE_OSF_SET_MSK   */   /* Operate on Second Frame */ 
         /*| ALTX_EMAC_DMAGRP_OPERATION_MODE_TSF_SET_MSK   */   /* Transmit Store and Forward */
         /*| ALTX_EMAC_DMAGRP_OPERATION_MODE_RSF_SET_MSK   */   /* Receive Store and Forward */
         /*| ALTX_EMAC_DMAGRP_OPERATION_MODE_FTF_SET_MSK   */   /* Receive Store and Forward */         
        )); 
                                     
    interrupt_mask = ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_NIE_SET_MSK |
                     /*ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_AIE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_ERE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_FBE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_ETE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_RWE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_RSE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_RUE_SET_MSK |*/
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_RIE_SET_MSK |
                     /*ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_TUE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_OVE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_TJE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_UNE_SET_MSK |
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_TSE_SET_MSK |*/
                     ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_TIE_SET_MSK;              
 
     emac->interrupt_mask = interrupt_mask;
      
     /* clear the interrupt requests */
     alt_eth_dma_clear_status_bits(interrupt_mask, emac->instance);
     
     /* Enable Interrupts */    
     alt_eth_dma_set_irq_reg(interrupt_mask, ALT_ETH_ENABLE, emac->instance);                     
                     
     /* confirm that all previous transactions are complete */    
     if (alt_read_word(ALTX_EMAC_DMAGRP_AHB_OR_AXI_STATUS_ADDR(Alt_Emac_Addr[emac->instance])) != 0)
     {
        return ALT_E_ERROR;
     }
     
    /* Set the Gmac Configuration register */
    alt_mac_config_reg_settings = (ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_IPC_SET_MSK           /* Checksum Offload */
                                   | ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_JD_SET_MSK          /* Jabber Disable */
                                   | ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_PS_SET_MSK          /* Port Select = MII */
                                   | ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_BE_SET_MSK          /* Frame Burst Enable */
                                   | ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_WD_SET_MSK          /* Watchdog Disable */
                                   /*| ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_DO_SET_MSK  */
                                   );  
    
    /* Configure the MAC with the Duplex Mode fixed by the auto-negotiation process */
    status = alt_eth_phy_get_duplex_and_speed(&phy_duplex_status, &phy_speed, emac->instance);
    if (status != ALT_E_SUCCESS) { return status; }
    
    if (phy_duplex_status != ALT_ETH_RESET)
    {
        /* Set Ethernet duplex mode to Full-duplex following the auto-negotiation */
        alt_mac_config_reg_settings |= ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_DM_SET_MSK;  
    }
       
    /* Configure the MAC with the speed fixed by the auto-negotiation process */
    if (phy_speed == 100)
    {
        /* Set Ethernet speed to 100M following the auto-negotiation */ 
        alt_mac_config_reg_settings |= ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_FES_SET_MSK;  
        dprintf("Auto Negotiation speed = 100\n");       
    } 
    
    if (phy_speed == 1000)
    {
        /* Set Ethernet speed to 1G following the auto-negotiation */ 
        alt_mac_config_reg_settings |= ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_PS_SET_MSK;     
        dprintf("Auto Negotiation speed = 1000\n"); 
    } 
    
    /* Read the MII Status Register to clear the changed flag */
    alt_eth_mac_get_mii_link_state(emac->instance);
    
    /* Disable MAC interrupts */
    alt_eth_mac_set_irq_reg(ALTX_EMAC_GMACGRP_INTERRUPT_STATUS_LPIIS_SET_MSK |   /* Disable Low Power IRQ */
                        ALTX_EMAC_GMACGRP_INTERRUPT_STATUS_TSIS_SET_MSK,         /* Disable Timestamp IRQ */
                        ALT_ETH_DISABLE, emac->instance); 
                        
    /* Set the Gmac Configuration Register */
    alt_write_word(ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_ADDR(Alt_Emac_Addr[emac->instance]),
                   alt_mac_config_reg_settings);  
    
    /* Disable promiscuous mode */
    alt_replbits_word(ALTX_EMAC_GMACGRP_MAC_FRAME_FILTER_ADDR(Alt_Emac_Addr[emac->instance]),1, 0);  
       
    /* Initialize the ethernet irq handler */   
    alt_eth_irq_init(emac, alt_eth_irq_callback);
    
    /* Start the receive and transmit DMA */
    alt_eth_start(emac->instance);
    
    /* Return Ethernet configuration success */
    return ALT_E_SUCCESS;
}

void alt_eth_mac_set_tx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance)
{ 
    if (instance > 2) { return; }
    
    if (new_state != ALT_ETH_DISABLE)
    {
        /* Enable the MAC transmission */
        alt_setbits_word(ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_TE_SET_MSK);
    }
    else
    {
        /* Disable the MAC transmission */
        alt_clrbits_word(ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_TE_SET_MSK);  
    }
}

void alt_eth_mac_set_rx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance)
{ 
    if (instance > 2) { return; }
    
    if (new_state != ALT_ETH_DISABLE)
    {
        /* Enable the MAC reception */ 
        alt_setbits_word(ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_RE_SET_MSK);
    }
    else
    {
        /* Disable the MAC reception */
        alt_clrbits_word(ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_GMACGRP_MAC_CONFIGURATION_RE_SET_MSK);
    }
}

void alt_eth_start(uint32_t instance)
{
    /* Enable transmit state machine of the MAC for transmission on the MII */  
    alt_eth_mac_set_tx_state(ALT_ETH_ENABLE, instance);
    
    /* Flush Transmit FIFO */
    alt_eth_dma_flush_tx_fifo(instance);
    
    /* Enable receive state machine of the MAC for reception from the MII */  
    alt_eth_mac_set_rx_state(ALT_ETH_ENABLE, instance);
    
    /* Start DMA transmission */
    alt_eth_dma_set_tx_state(ALT_ETH_ENABLE, instance); 
    
    /* Start DMA reception */
    alt_eth_dma_set_rx_state(ALT_ETH_ENABLE, instance); 
    
    alt_eth_delay(ETH_RESET_DELAY);  
    
}

void alt_eth_stop(uint32_t instance)
{
    
    /* Stop DMA transmission */
    alt_eth_dma_set_tx_state(ALT_ETH_DISABLE, instance); 
    
    /* Stop DMA reception */
    alt_eth_dma_set_rx_state(ALT_ETH_DISABLE, instance);
     
    /* Disable transmit state machine of the MAC for transmission on the MII */  
    alt_eth_mac_set_tx_state(ALT_ETH_DISABLE, instance);
    
    /* Flush Transmit FIFO */
    alt_eth_dma_flush_tx_fifo(instance);
    
    /* Disable receive state machine of the MAC for reception from the MII */  
    alt_eth_mac_set_rx_state(ALT_ETH_DISABLE, instance);
          
    alt_eth_delay(ETH_RESET_DELAY);  
}

alt_eth_enable_disable_state_t alt_eth_mac_get_bpa_state(uint32_t instance)
{
    alt_eth_enable_disable_state_t bitstatus = ALT_ETH_DISABLE;
    
    if (instance > 2) { return bitstatus; }
    
    /* The Flow Control register should not be written to until this bit is cleared */
    if (ALTX_EMAC_GMACGRP_FLOW_CONTROL_FCA_BPA_GET(alt_read_word(ALTX_EMAC_GMACGRP_FLOW_CONTROL_ADDR(Alt_Emac_Addr[instance]))))
    {
        bitstatus = ALT_ETH_ENABLE;
    }
    else
    {
        bitstatus = ALT_ETH_DISABLE;
    }
    
    return bitstatus;
}

void alt_eth_mac_pause_ctrl_frame(uint32_t instance)  
{ 
    if (instance > 2) { return; }
    
    /* When Set In full duplex MAC initiates pause control frame */ 
    alt_setbits_word(ALTX_EMAC_GMACGRP_FLOW_CONTROL_ADDR(Alt_Emac_Addr[instance]), 
                     ALTX_EMAC_GMACGRP_FLOW_CONTROL_FCA_BPA_SET_MSK);

}

alt_eth_set_reset_state_t alt_eth_mac_get_mii_link_state(uint32_t instance)
{
    alt_eth_set_reset_state_t bitstatus = ALT_ETH_RESET;
    
    if (instance > 2) { return bitstatus; }    
    
    if (ALTX_EMAC_GMACGRP_SGMII_RGMII_SMII_CONTROL_STATUS_LNKSTS_GET(alt_read_word(ALTX_EMAC_GMACGRP_SGMII_RGMII_SMII_CONTROL_STATUS_ADDR(Alt_Emac_Addr[instance]))))
    {
        bitstatus = ALT_ETH_SET;
    }
    else
    {
        bitstatus = ALT_ETH_RESET;
    }
    
    return bitstatus;
}

void alt_eth_mac_set_bpa_state(alt_eth_enable_disable_state_t new_state, uint32_t instance)   
{  
    if (instance > 2) { return; }
    
    if (new_state != ALT_ETH_DISABLE)
    {
        /* Activate the MAC BackPressure operation */
        /* In Half duplex: during backpressure, when the MAC receives a new frame,
        the transmitter starts sending a JAM pattern resulting in a collision */
        alt_setbits_word(ALTX_EMAC_GMACGRP_FLOW_CONTROL_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_GMACGRP_FLOW_CONTROL_FCA_BPA_SET_MSK);
    
    }
    else
    {
        /* Deactivate the MAC BackPressure operation */ 
        alt_clrbits_word(ALTX_EMAC_GMACGRP_FLOW_CONTROL_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_GMACGRP_FLOW_CONTROL_FCA_BPA_SET_MSK);
    
    } 
}

alt_eth_set_reset_state_t alt_eth_mac_check_status_reg(uint32_t mac_bit_mask, uint32_t instance)
{
    alt_eth_set_reset_state_t bitstatus = ALT_ETH_RESET;
    
    if (instance > 2) { return bitstatus; }
    
    if (alt_read_word(ALTX_EMAC_GMACGRP_INTERRUPT_STATUS_ADDR(Alt_Emac_Addr[instance])) & mac_bit_mask)
    {
        bitstatus = ALT_ETH_SET;
    }
    else
    {
        bitstatus = ALT_ETH_RESET;
    }
    
    return bitstatus;
}

uint32_t alt_eth_mac_get_irq_status_reg(uint32_t instance)
{
    if (instance > 2) { return 0; }
    
    return alt_read_word(ALTX_EMAC_GMACGRP_INTERRUPT_STATUS_ADDR(Alt_Emac_Addr[instance]));
}

void alt_eth_mac_set_irq_reg(uint32_t mac_irq_mask, alt_eth_enable_disable_state_t new_state, uint32_t instance)
{
    if (instance > 2) { return; }
    
    if (new_state != ALT_ETH_DISABLE)
    {
        /* Enable the selected ETHERNET MAC interrupts */
        alt_clrbits_word(ALTX_EMAC_GMACGRP_INTERRUPT_MASK_ADDR(Alt_Emac_Addr[instance]), 
                         mac_irq_mask);
    }
    else
    {
        /* Disable the selected ETHERNET MAC interrupts */
        alt_setbits_word(ALTX_EMAC_GMACGRP_INTERRUPT_MASK_ADDR(Alt_Emac_Addr[instance]), 
                         mac_irq_mask);
    }
}

void alt_eth_mac_set_mac_addr(uint8_t *address, uint32_t instance)
{
    uint32_t tmpreg;
    
    if (instance > 2) { return; }    
      
    /* Calculate the selected MAC address high register */
    tmpreg = ((uint32_t)address[5] << 8) | (uint32_t)address[4];
    
    /* Load the selected MAC address high register */
    alt_write_word(ALTX_EMAC_GMACGRP_MAC_ADDRESS0_HIGH_ADDR(Alt_Emac_Addr[instance]), 
                   tmpreg);
    
    /* Calculate the selected MAC address low register */
    tmpreg = ((uint32_t)address[3] << 24) | ((uint32_t)address[2] << 16) | 
             ((uint32_t)address[1] << 8) | address[0];
                
     /* Load the selected MAC address low register */
    alt_write_word(ALTX_EMAC_GMACGRP_MAC_ADDRESS0_LOW_ADDR(Alt_Emac_Addr[instance]), tmpreg);
}

void alt_eth_mac_get_mac_addr(uint8_t *address, uint32_t instance)
{
    uint32_t tmpreg;
    
    if (instance > 2) { return; }    
      
    /* Get the selected MAC address high register */
    tmpreg = alt_read_word(ALTX_EMAC_GMACGRP_MAC_ADDRESS0_HIGH_ADDR(Alt_Emac_Addr[instance]));
    
     /* Calculate the selected MAC address buffer */
    address[5] = ((tmpreg >> 8) & (uint8_t)0xFF);
    address[4] = (tmpreg & (uint8_t)0xFF);
     
    /* Load the selected MAC address low register */
    tmpreg = alt_read_word(ALTX_EMAC_GMACGRP_MAC_ADDRESS0_LOW_ADDR(Alt_Emac_Addr[instance]));
    
    /* Calculate the selected MAC address buffer */
    address[3] = ((tmpreg >> 24) & (uint8_t)0xFF);
    address[2] = ((tmpreg >> 16) & (uint8_t)0xFF);
    address[1] = ((tmpreg >> 8 ) & (uint8_t)0xFF);
    address[0] = (tmpreg & (uint8_t)0xFF);
}

alt_eth_set_reset_state_t alt_eth_get_software_reset_status(uint32_t instance)
{
    alt_eth_set_reset_state_t bitstatus = ALT_ETH_RESET;
    
    if (instance > 2) { return bitstatus; }    
    
    if(ALTX_EMAC_DMAGRP_BUS_MODE_SWR_GET(alt_read_word(ALTX_EMAC_DMAGRP_BUS_MODE_ADDR(Alt_Emac_Addr[instance]))))
    {
        bitstatus = ALT_ETH_SET;
    }
    else
    {
        bitstatus = ALT_ETH_RESET;
    }
    
    return bitstatus;
}

ALT_STATUS_CODE alt_eth_software_reset(uint32_t instance)
{
    unsigned int i;
    
    if (instance > 2) { return ALT_E_ERROR; }    
    
    /* Set the SWR bit: resets all MAC subsystem internal registers and logic */
    /* After reset all the registers holds their respective reset values */
    alt_setbits_word(ALTX_EMAC_DMAGRP_BUS_MODE_ADDR(Alt_Emac_Addr[instance]), 
                     ALTX_EMAC_DMAGRP_BUS_MODE_SWR_SET_MSK);
                        
    /* Wait for the software reset to clear */
    for (i = 0; i < 10; i++)
    {
        alt_eth_delay(ETH_RESET_DELAY);
        if (alt_eth_get_software_reset_status(instance) == ALT_ETH_RESET)
        {
            break;
        }
    }
    
    if (i==10) { return ALT_E_ERROR; }
    
    return ALT_E_SUCCESS;
}

/******************************************************************************/                             
/*                           DMA and Descriptors functions                    */
/******************************************************************************/

uint32_t alt_eth_dma_get_rx_desc_frame_len(alt_eth_dma_desc_t *rx_dma_desc)
{
    /* Return the Receive desc frame length */
    return ((rx_dma_desc->status & ETH_DMARXDESC_FL) >> ETH_DMARXDESC_FRAME_LENGTHSHIFT);
}

uint32_t alt_eth_dma_get_status_reg(uint32_t instance)
{  

    if (instance > 2) { return 0; }
    
    return alt_read_word(ALTX_EMAC_DMAGRP_STATUS_ADDR(Alt_Emac_Addr[instance]));
}

alt_eth_set_reset_state_t alt_eth_dma_check_status_reg(uint32_t dma_bit_mask, uint32_t instance)
{  
    alt_eth_set_reset_state_t bitstatus = ALT_ETH_RESET;
    
    if (instance > 2) { return bitstatus; }    
    
    if (alt_read_word(ALTX_EMAC_DMAGRP_STATUS_ADDR(Alt_Emac_Addr[instance])) & dma_bit_mask)
    {
        bitstatus = ALT_ETH_SET;
    }
    else
    {
        bitstatus = ALT_ETH_RESET;
    }
    
    return bitstatus;
}

void alt_eth_dma_clear_status_bits(uint32_t dma_bit_mask, uint32_t instance)
{
    if (instance > 2) { return; }
    
    /* Clear the selected ETHERNET DMA bit(s) */
    alt_write_word(ALTX_EMAC_DMAGRP_STATUS_ADDR(Alt_Emac_Addr[instance]), dma_bit_mask);
} 

void alt_eth_dma_set_irq_reg(uint32_t dma_irq_mask, alt_eth_enable_disable_state_t new_state, uint32_t instance)
{
    if (instance > 2) { return; }
    
    if (new_state != ALT_ETH_DISABLE)
    {
        /* Enable the selected ETHERNET DMA interrupts */
        alt_setbits_word(ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_ADDR(Alt_Emac_Addr[instance]), 
                         dma_irq_mask);
    }
    else
    {
        /* Disable the selected ETHERNET DMA interrupts */
        alt_clrbits_word(ALTX_EMAC_DMAGRP_INTERRUPT_ENABLE_ADDR(Alt_Emac_Addr[instance]), 
                         dma_irq_mask);
    }
}

void alt_eth_dma_flush_tx_fifo(uint32_t instance)
{
    if (instance > 2) { return; }
    
    /* Set the Flush Transmit FIFO bit */ 
    alt_setbits_word(ALTX_EMAC_DMAGRP_OPERATION_MODE_ADDR(Alt_Emac_Addr[instance]), ALTX_EMAC_DMAGRP_OPERATION_MODE_FTF_SET_MSK);
}

alt_eth_set_reset_state_t alt_eth_dma_get_tx_fifo_flush_state(uint32_t instance)
{   
    alt_eth_set_reset_state_t bitstatus = ALT_ETH_RESET;
    
    if (instance > 2) { return bitstatus; }    
    
    if (ALTX_EMAC_DMAGRP_OPERATION_MODE_FTF_GET(alt_read_word(ALTX_EMAC_DMAGRP_OPERATION_MODE_ADDR(Alt_Emac_Addr[instance]))))
    {
        bitstatus = ALT_ETH_SET;
    }
    else
    {
        bitstatus = ALT_ETH_RESET;
    }
    
    return bitstatus; 
}

void alt_eth_dma_set_tx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance)
{
    if (instance > 2) { return; }
    
    if (new_state != ALT_ETH_DISABLE)
    {
        /* Enable the DMA transmission */
        alt_setbits_word(ALTX_EMAC_DMAGRP_OPERATION_MODE_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_DMAGRP_OPERATION_MODE_ST_SET_MSK);
    
    }
    else
    {
        /* Disable the DMA transmission */
        alt_clrbits_word(ALTX_EMAC_DMAGRP_OPERATION_MODE_ADDR(Alt_Emac_Addr[instance]), 
                         ALTX_EMAC_DMAGRP_OPERATION_MODE_ST_SET_MSK);
    
    }
}

void alt_eth_dma_set_rx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance)
{ 
    if (instance > 2) { return; }
    
    if (new_state != ALT_ETH_DISABLE)
    {
        /* Enable the DMA reception */
        alt_setbits_word(ALTX_EMAC_DMAGRP_OPERATION_MODE_ADDR(Alt_Emac_Addr[instance]), 
                       ALTX_EMAC_DMAGRP_OPERATION_MODE_SR_SET_MSK);
    
    }
    else
    {
        /* Disable the DMA reception */
        alt_clrbits_word(ALTX_EMAC_DMAGRP_OPERATION_MODE_ADDR(Alt_Emac_Addr[instance]), 
                       ALTX_EMAC_DMAGRP_OPERATION_MODE_SR_SET_MSK);
    
    }
}

alt_eth_set_reset_state_t alt_eth_dma_check_overflow_counter_reg(uint32_t dma_overflow_mask, uint32_t instance)
{
    alt_eth_set_reset_state_t bitstatus = ALT_ETH_RESET;
    
    if (instance > 2) { return bitstatus; }    
       
    if (alt_read_word(ALTX_EMAC_DMAGRP_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_ADDR(Alt_Emac_Addr[instance])) & dma_overflow_mask)
    {
        bitstatus = ALT_ETH_SET;
    }
    else
    {
        bitstatus = ALT_ETH_RESET;
    }
    
    return bitstatus;
}

uint32_t alt_eth_dma_get_curr_tx_desc_addr(uint32_t instance)
{
    if (instance > 2) { return 0; }
    
    return ((uint32_t)alt_read_word(ALTX_EMAC_DMAGRP_CURRENT_HOST_TRANSMIT_DESCRIPTOR_ADDR(Alt_Emac_Addr[instance])));
}

uint32_t alt_eth_dma_get_curr_rx_desc_addr(uint32_t instance)
{
    if (instance > 2) { return 0; }
    
    return ((uint32_t)alt_read_word(ALTX_EMAC_DMAGRP_CURRENT_HOST_RECEIVE_DESCRIPTOR_ADDR(Alt_Emac_Addr[instance])));
}

uint32_t alt_eth_dma_get_curr_tx_buff_addr(uint32_t instance)
{
    if (instance > 2) { return 0; }
    
    return ((uint32_t)alt_read_word(ALTX_EMAC_DMAGRP_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_ADDR(Alt_Emac_Addr[instance])));
}

uint32_t alt_eth_dma_get_curr_rx_buff_addr(uint32_t instance)
{
    if (instance > 2) { return 0; }
    
    return ((uint32_t)alt_read_word(ALTX_EMAC_DMAGRP_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_ADDR(Alt_Emac_Addr[instance])));
}

void alt_eth_dma_set_tx_desc_addr(uint32_t tx_desc_list_addr, uint32_t instance)
{
    if (instance > 2) { return; }
    
    alt_write_word(ALTX_EMAC_DMAGRP_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_ADDR(Alt_Emac_Addr[instance]), tx_desc_list_addr);
}

void alt_eth_dma_set_rx_desc_addr(uint32_t rx_desc_list_addr, uint32_t instance)
{
    if (instance > 2) { return; }
    
    alt_write_word(ALTX_EMAC_DMAGRP_RECEIVE_DESCRIPTOR_LIST_ADDRESS_ADDR(Alt_Emac_Addr[instance]), rx_desc_list_addr);
}

void alt_eth_dma_resume_dma_tx(uint32_t instance)
{
    if (instance > 2) { return; }
    
    alt_write_word(ALTX_EMAC_DMAGRP_TRANSMIT_POLL_DEMAND_ADDR(Alt_Emac_Addr[instance]), 0);
}

void alt_eth_dma_resume_dma_rx(uint32_t instance)
{
    if (instance > 2) { return; }
    
    alt_write_word(ALTX_EMAC_DMAGRP_RECEIVE_POLL_DEMAND_ADDR(Alt_Emac_Addr[instance]), 0);
}

ALT_STATUS_CODE alt_eth_send_packet(uint8_t * pkt, uint32_t len, uint32_t first, uint32_t last, alt_eth_emac_instance_t * emac)
{
    alt_eth_dma_desc_t *tx_desc;
    int32_t index=0;
    unsigned int i;
    int32_t paranoid=NUMBER_OF_TX_DESCRIPTORS+1;
    
    tx_desc = &emac->tx_desc_ring[emac->tx_current_desc_number];
    
    /* Check if it is a free descriptor.  */
    if (tx_desc->status & ETH_DMATXDESC_OWN) 
    {
        /* Buffer is still owned by device.  */
        dprintf("No free tx descriptors!\n");
        return(ALT_E_ERROR);
    }
    
    /* check if len is too large */
    if (len >= ETH_BUFFER_SIZE)
    {
        return(ALT_E_ERROR);
    }
    
    /* Copy data to local buffer   */
    for (i = 0; i < len; i++)
    {
        *(uint8_t *)(emac->tx_buf + (emac->tx_current_desc_number * ETH_BUFFER_SIZE) + i) = *(pkt + i);
    }
    
    /* set the buffer pointer */
    tx_desc->buffer1_addr = (uint32_t)&emac->tx_buf[emac->tx_current_desc_number * ETH_BUFFER_SIZE];
    
    /* Set the buffer size.  */
    tx_desc->control_buffer_size = (len & ETH_DMATXDESC_TBS1);
    
#ifdef USE_ENHANCED_DMA_DESCRIPTORS
    tx_desc->status =   ETH_DMATXDESC_TCH;       
     
    /* Set the Descriptor's FS bit.  */
    if (first) { tx_desc->status |=  (ETH_DMATXDESC_FS | ETH_DMATXDESC_CIC_TCPUDPICMP_FULL); }
    
    /* set the Descriptor's LS and IC bit.  */
    if (last)  { tx_desc->status |=  ( ETH_DMATXDESC_LS | ETH_DMATXDESC_IC); }
#else    
    tx_desc->control_buffer_size |=   ETH_DMATXDESC_TCH;     
    
    /* Set the Descriptor's FS bit.  */
    if (first) { tx_desc->control_buffer_size |=  (ETH_DMATXDESC_FS | ETH_DMATXDESC_CIC_TCPUDPICMP_FULL); }
    
    /* set the Descriptor's LS and IC bit.  */
    if (last)  { tx_desc->control_buffer_size |=  ( ETH_DMATXDESC_LS | ETH_DMATXDESC_IC); }
#endif 

    if (last)  { index = emac->tx_current_desc_number; }

    /* Set the current index to the next descriptor.  */
    emac->tx_current_desc_number = (emac->tx_current_desc_number + 1);
    if (emac->tx_current_desc_number >= NUMBER_OF_TX_DESCRIPTORS) { emac->tx_current_desc_number=0; }      
    
    /* if this is the last descriptor, set the chain's owned bits to owned by hardware */
    if (last)
    {
        /* paranoid will never get to 0.  Its just here for non human paranoid error checkers */
        while (paranoid--)  
        {
            tx_desc = &emac->tx_desc_ring[index];
            
            if (tx_desc->status & ETH_DMATXDESC_OWN)
            {
                /* tx buffer error, re-initialize and return error*/
                dprintf("Send packet error!\n");                
                alt_eth_dma_set_tx_state(ALT_ETH_DISABLE, emac->instance); 
                alt_eth_dma_flush_tx_fifo(emac->instance);
                alt_eth_setup_txdesc(emac);
                alt_eth_dma_set_tx_state(ALT_ETH_ENABLE, emac->instance); 
                return ALT_E_ERROR;
            }
         
            /* Set OWN bit.  */
            tx_desc->status |= ETH_DMATXDESC_OWN;

#ifdef USE_ENHANCED_DMA_DESCRIPTORS            
            if (tx_desc->status & ETH_DMATXDESC_FS) { break; }
#else
            if (tx_desc->control_buffer_size & ETH_DMATXDESC_FS) { break; }
#endif            
            index--;
            if (index < 0) { index=NUMBER_OF_TX_DESCRIPTORS-1; }
        } 
       
        /* If the DMA transmission is suspended, resume transmission.  */
        if (alt_eth_dma_check_status_reg(ALTX_EMAC_DMAGRP_STATUS_TS_SET_MSK,emac->instance))
        {         
            /* Clear TBUS ETHERNET DMA flag */
            alt_eth_dma_clear_status_bits(ALTX_EMAC_DMAGRP_STATUS_TS_SET_MSK,emac->instance);
            
            /* Resume DMA transmission */
            alt_eth_dma_resume_dma_tx(emac->instance);
        }
    }    

    return ALT_E_SUCCESS;
}
                
ALT_STATUS_CODE alt_eth_get_packet(uint8_t * pkt, uint32_t * len, alt_eth_emac_instance_t * emac)
{
    static int numrxpackets=0;
    alt_eth_dma_desc_t * desc;
    uint32_t size=0,rx_search_desc_number,packet_end=0,packet_start=0,wrap,i;
    
    if (emac->instance > 2) { return ALT_E_ERROR; }    
    
    /* If the DMA reception is suspended, resume transmission.  */
#ifdef ALT_RX_RESUME    
    if (alt_eth_dma_check_status_reg(ALTX_EMAC_DMAGRP_STATUS_RS_SET_MSK,emac->instance))
    {
        /* Clear TBUS ETHERNET DMA flag */
        alt_eth_dma_clear_status_bits(ALTX_EMAC_DMAGRP_STATUS_RS_SET_MSK,emac->instance);

        /* Resume DMA transmission */
        alt_eth_dma_resume_dma_rx(emac->instance);
    }
#endif    
 
    rx_search_desc_number=emac->rx_processed_desc_number;
    wrap=rx_search_desc_number;
    desc=&emac->rx_desc_ring[rx_search_desc_number];
    while ((desc->status & ETH_DMARXDESC_OWN)==0)
    {
        if (desc->status & ETH_DMARXDESC_FS)  {  packet_start++; }
        
        if (desc->status & ETH_DMARXDESC_LS)
        { 
            packet_end=1;
            break;
        };
        
        rx_search_desc_number++;
        if (rx_search_desc_number == NUMBER_OF_RX_DESCRIPTORS) { rx_search_desc_number = 0; }
        desc=&emac->rx_desc_ring[rx_search_desc_number];
        if (rx_search_desc_number==wrap) {
           dprintf("Error: Rx buffer wrap, End of Packet not found.\n");
           alt_eth_reinit_rxdesc(emac);
           return ALT_E_ERROR;
        }
    }
    if (packet_end==0) { 
        /* no packet available */
        return ALT_E_ERROR; 
    }  
    
    if (packet_start != 1)
    {
        dprintf("Rx Packet Error, %d Packet Starts found\n",packet_start);
        alt_eth_reinit_rxdesc(emac);
        return ALT_E_ERROR;
    }
    
    if (alt_eth_dma_check_status_reg(ALTX_EMAC_DMAGRP_STATUS_RU_SET_MSK, emac->instance))
    {      
        dprintf("Rx Unavailable Error\n");
        alt_eth_dma_clear_status_bits(ALTX_EMAC_DMAGRP_STATUS_RU_SET_MSK, emac->instance); 
        alt_eth_reinit_rxdesc(emac);
        return ALT_E_ERROR;
    } 
    
    if (alt_eth_dma_check_status_reg(ALTX_EMAC_DMAGRP_STATUS_OVF_SET_MSK, emac->instance))
    {
        dprintf("Rx OverFlow Error\n");
        alt_eth_reinit_rxdesc(emac);
        alt_eth_dma_clear_status_bits(ALTX_EMAC_DMAGRP_STATUS_OVF_SET_MSK, emac->instance);
        return ALT_E_ERROR;
    }     
        
    /* A complete packet is available, process it */   
    desc=&emac->rx_desc_ring[emac->rx_processed_desc_number];   
    while ((desc->status & ETH_DMARXDESC_OWN)==0)
    {
        emac->rx_processed_desc_number++;
        if (emac->rx_processed_desc_number == NUMBER_OF_RX_DESCRIPTORS) { emac->rx_processed_desc_number = 0; }
        
        if (desc->status & ETH_DMARXDESC_LS)
        { 
            size=((desc->status >> ETH_DMARXDESC_FRAME_LENGTHSHIFT) & ETH_DMARXDESC_RBS1);  
            for (i = 0; i < size; i++)
            {
                *(pkt + i) = *(uint8_t *)((uintptr_t)desc->buffer1_addr + i);
            }
            desc->status = ETH_DMARXDESC_OWN;            
            break;
        };
        
        desc->status = ETH_DMARXDESC_OWN;        
        desc=&emac->rx_desc_ring[emac->rx_processed_desc_number];
    }
    
    *len = size;
    
    numrxpackets++;
    if ((numrxpackets & 0x1fff)==0) 
    {
#ifdef ALT_DEBUG_ETHERNET
        dprintf("numrxpkts=%d numrxints=%d numtxints=%d missed=%d ovmiss=%d\n",
          numrxpackets,emac->rxints,emac->txints,
          (uint32_t)alt_read_word(ALTX_EMAC_DMAGRP_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_ADDR(Alt_Emac_Addr[emac->instance])) & 0xffff,
          ((uint32_t)alt_read_word(ALTX_EMAC_DMAGRP_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_ADDR(Alt_Emac_Addr[emac->instance])) >> 17) & 0x7ff);
#endif          
    }
              
    alt_eth_mac_check_mii_link_status(emac->instance);
       
    return ALT_E_SUCCESS;   
}

void alt_eth_mac_check_mii_link_status(uint32_t instance)
{
    uint32_t status;
    
    /* Read the MAC Status to determine if the link changed */
    status = alt_eth_mac_get_irq_status_reg(instance);
    
    /* Interrupt on PHY status change.  */
    if(status & ALTX_EMAC_GMACGRP_INTERRUPT_STATUS_RGSMIIIS_SET_MSK)
    {
        dprintf("PHY STATUS CHANGE\n");
        
        /* If link is up, we need to restart the negotiation process */
        if (alt_eth_mac_get_mii_link_state(instance))
        {
            /* may need to implement this later */
            dprintf("Need to regonotiate\n");
        }
    }
}
