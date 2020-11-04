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
/*! \file
 *  Contains definitions for the Altera Hardware Libraries Ethernet
 *  Application Programming Interface
 */

#ifndef __ALT_ETHERNET_H__
#define __ALT_ETHERNET_H__

#include "hwlib.h"
#include "socal/hps.h"
#include "socal/alt_emac.h"
#include "alt_interrupt.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

#define ETH_RESET_DELAY           ((uint32_t)0x000FFFFF)
#define NUMBER_OF_TX_DESCRIPTORS  32
#define NUMBER_OF_RX_DESCRIPTORS  32
#define ETH_BUFFER_SIZE           1536

typedef enum
{
    ALT_ETH_RESET = 0, 
    ALT_ETH_SET   = 1
} alt_eth_set_reset_state_t;

typedef enum {
    ALT_ETH_DISABLE = 0,
    ALT_ETH_ENABLE = 1
} alt_eth_enable_disable_state_t;

/* Uncomment the line below when using time stamping and/or IPv4 checksum offload */
/*#define USE_ALTERNATE_DESCRIPTOR_SIZE*/

/* NOTE: this must be defined for A10 and S10 */
#define USE_ENHANCED_DMA_DESCRIPTORS

/**--------------------------------------------------------------------------**/
/** 
  * @brief                           DMA descriptors types
  */ 
/**--------------------------------------------------------------------------**/
/** 
  * @brief  ETH DMA Descriptors data structure definition
  */ 
typedef struct
{
    uint32_t   status;                   /*!< Status */
    uint32_t   control_buffer_size;      /*!< Control and Buffer1, Buffer2 sizes */
    uint32_t   buffer1_addr;             /*!< Buffer1 address pointer */
    uint32_t   buffer2_next_desc_addr;   /*!< Buffer2 or next desc address pointer */
#ifdef USE_ALTERNATE_DESCRIPTOR_SIZE
    uint32_t   extended_status;          /* Extended status for PTP receive desc */
    uint32_t   reserved1;                /* Reserved */
    uint32_t   time_stamp_low;           /* Time Stamp Low value for transmit and receive */
    uint32_t   time_stamp_high;          /* Time Stamp High value for transmit and receive */
#endif  
} alt_eth_dma_desc_t;

#ifdef USE_ENHANCED_DMA_DESCRIPTORS
/**--------------------------------------------------------------------------**/
/*                Ethernet DMA descriptors registers bits definition          */ 
/**--------------------------------------------------------------------------**/

/**
   DMA Tx Desciptor
  -----------------------------------------------------------------------------------------------
  TDES0 | OWN(31) | CTRL[30:26] | Reserved[25:24] | CTRL[23:20] | Reserved[19:17] | Status[16:0] |
  -----------------------------------------------------------------------------------------------
  TDES1 | Reserved[31:29] | Buffer2 ByteCount[28:16] | Reserved[15:13] | Buffer1 ByteCount[12:0] |
  -----------------------------------------------------------------------------------------------
  TDES2 |                         Buffer1 Address [31:0]                                         |
  -----------------------------------------------------------------------------------------------
  TDES3 |                   Buffer2 Address [31:0] / Next Descriptor Address [31:0]              |
  -----------------------------------------------------------------------------------------------
*/

/** 
  * @brief  Bit definition of TDES0 register: DMA Tx descriptor status register
  */ 
#define ETH_DMATXDESC_OWN                     ((uint32_t)0x80000000)  /*!< OWN bit: descriptor is owned by DMA engine */
#define ETH_DMATXDESC_IC                      ((uint32_t)0x40000000)  /*!< Interrupt on Completion */
#define ETH_DMATXDESC_LS                      ((uint32_t)0x20000000)  /*!< Last Segment */
#define ETH_DMATXDESC_FS                      ((uint32_t)0x10000000)  /*!< First Segment */
#define ETH_DMATXDESC_DC                      ((uint32_t)0x08000000)  /*!< Disable CRC */
#define ETH_DMATXDESC_DP                      ((uint32_t)0x04000000)  /*!< Disable Padding */
#define ETH_DMATXDESC_TTSE                    ((uint32_t)0x02000000)  /*!< Transmit Time Stamp Enable */
#define ETH_DMATXDESC_CIC                     ((uint32_t)0x00C00000)  /*!< Checksum Insertion Control: 4 cases */
#define ETH_DMATXDESC_CIC_BYPASS              ((uint32_t)0x00000000)  /*!< Do Nothing: Checksum Engine is bypassed */ 
#define ETH_DMATXDESC_CIC_IPV4HEADER          ((uint32_t)0x00400000)  /*!< IPV4 header Checksum Insertion */ 
#define ETH_DMATXDESC_CIC_TCPUDPICMP_SEGMENT  ((uint32_t)0x00800000)  /*!< TCP/UDP/ICMP Checksum Insertion calculated over segment only */ 
#define ETH_DMATXDESC_CIC_TCPUDPICMP_FULL     ((uint32_t)0x00C00000)  /*!< TCP/UDP/ICMP Checksum Insertion fully calculated */ 
#define ETH_DMATXDESC_TER                     ((uint32_t)0x00200000)  /*!< Transmit End of Ring */
#define ETH_DMATXDESC_TCH                     ((uint32_t)0x00100000)  /*!< Second Address Chained */
#define ETH_DMATXDESC_TTSS                    ((uint32_t)0x00020000)  /*!< Tx Time Stamp Status */
#define ETH_DMATXDESC_IHE                     ((uint32_t)0x00010000)  /*!< IP Header Error */
#define ETH_DMATXDESC_ES                      ((uint32_t)0x00008000)  /*!< Error summary: OR of the following bits: UE || ED || EC || LCO || NC || LCA || FF || JT */
#define ETH_DMATXDESC_JT                      ((uint32_t)0x00004000)  /*!< Jabber Timeout */
#define ETH_DMATXDESC_FF                      ((uint32_t)0x00002000)  /*!< Frame Flushed: DMA/MTL flushed the frame due to SW flush */
#define ETH_DMATXDESC_PCE                     ((uint32_t)0x00001000)  /*!< Payload Checksum Error */
#define ETH_DMATXDESC_LCA                     ((uint32_t)0x00000800)  /*!< Loss of Carrier: carrier lost during transmission */
#define ETH_DMATXDESC_NC                      ((uint32_t)0x00000400)  /*!< No Carrier: no carrier signal from the transceiver */
#define ETH_DMATXDESC_LCO                     ((uint32_t)0x00000200)  /*!< Late Collision: transmission aborted due to collision */
#define ETH_DMATXDESC_EC                      ((uint32_t)0x00000100)  /*!< Excessive Collision: transmission aborted after 16 collisions */
#define ETH_DMATXDESC_VF                      ((uint32_t)0x00000080)  /*!< VLAN Frame */
#define ETH_DMATXDESC_CC                      ((uint32_t)0x00000078)  /*!< Collision Count */
#define ETH_DMATXDESC_ED                      ((uint32_t)0x00000004)  /*!< Excessive Deferral */
#define ETH_DMATXDESC_UF                      ((uint32_t)0x00000002)  /*!< Underflow Error: late data arrival from the memory */
#define ETH_DMATXDESC_DB                      ((uint32_t)0x00000001)  /*!< Deferred Bit */


/*                    Bit definition of TDES1 register              */ 
#define ETH_DMATXDESC_TBS2  ((uint32_t)0x1FFF0000)  /*!< Transmit Buffer2 Size */
#define ETH_DMATXDESC_TBS1  ((uint32_t)0x00001FFF)  /*!< Transmit Buffer1 Size */

/*                    Bit definition of TDES2 register              */ 
#define ETH_DMATXDESC_B1AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer1 Address Pointer */

/*                    Bit definition of TDES3 register              */ 
#define ETH_DMATXDESC_B2AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer2 Address Pointer */

  /*---------------------------------------------------------------------------------------------
  TDES6 |                         Transmit Time Stamp Low [31:0]                                 |
  -----------------------------------------------------------------------------------------------
  TDES7 |                         Transmit Time Stamp High [31:0]                                |
  ----------------------------------------------------------------------------------------------*/

/* Bit definition of TDES6 register */
 #define ETH_DMAPTPTXDESC_TTSL  ((uint32_t)0xFFFFFFFF)  /* Transmit Time Stamp Low */

/* Bit definition of TDES7 register */
 #define ETH_DMAPTPTXDESC_TTSH  ((uint32_t)0xFFFFFFFF)  /* Transmit Time Stamp High */

/**
  DMA Rx Descriptor
  --------------------------------------------------------------------------------------------------------------------
  RDES0 | OWN(31) |                                             Status [30:0]                                          |
  ---------------------------------------------------------------------------------------------------------------------
  RDES1 | CTRL(31) | Reserved[30:29] | Buffer2 ByteCount[28:16] | CTRL[15:14] | Reserved(13) | Buffer1 ByteCount[12:0] |
  ---------------------------------------------------------------------------------------------------------------------
  RDES2 |                                       Buffer1 Address [31:0]                                                 |
  ---------------------------------------------------------------------------------------------------------------------
  RDES3 |                          Buffer2 Address [31:0] / Next Descriptor Address [31:0]                             |
  ---------------------------------------------------------------------------------------------------------------------
*/

/*    Bit definition of RDES0 register: DMA Rx descriptor status register  */ 
#define ETH_DMARXDESC_OWN         ((uint32_t)0x80000000)  /*!< OWN bit: descriptor is owned by DMA engine  */
#define ETH_DMARXDESC_AFM         ((uint32_t)0x40000000)  /*!< DA Filter Fail for the rx frame  */
#define ETH_DMARXDESC_FL          ((uint32_t)0x3FFF0000)  /*!< Receive descriptor frame length  */
#define ETH_DMARXDESC_ES          ((uint32_t)0x00008000)  /*!< Error summary: OR of the following bits: DE || OE || IPC || LC || RWT || RE || CE */
#define ETH_DMARXDESC_DE          ((uint32_t)0x00004000)  /*!< Descriptor error: no more descriptors for receive frame  */
#define ETH_DMARXDESC_SAF         ((uint32_t)0x00002000)  /*!< SA Filter Fail for the received frame */
#define ETH_DMARXDESC_LE          ((uint32_t)0x00001000)  /*!< Frame size not matching with length field */
#define ETH_DMARXDESC_OE          ((uint32_t)0x00000800)  /*!< Overflow Error: Frame was damaged due to buffer overflow */
#define ETH_DMARXDESC_VLAN        ((uint32_t)0x00000400)  /*!< VLAN Tag: received frame is a VLAN frame */
#define ETH_DMARXDESC_FS          ((uint32_t)0x00000200)  /*!< First descriptor of the frame  */
#define ETH_DMARXDESC_LS          ((uint32_t)0x00000100)  /*!< Last descriptor of the frame  */ 
#define ETH_DMARXDESC_IPV4HCE     ((uint32_t)0x00000080)  /*!< IPC Checksum Error: Rx Ipv4 header checksum error   */    
#define ETH_DMARXDESC_LC          ((uint32_t)0x00000040)  /*!< Late collision occurred during reception   */
#define ETH_DMARXDESC_FT          ((uint32_t)0x00000020)  /*!< Frame type - Ethernet, otherwise 802.3    */
#define ETH_DMARXDESC_RWT         ((uint32_t)0x00000010)  /*!< Receive Watchdog Timeout: watchdog timer expired during reception    */
#define ETH_DMARXDESC_RE          ((uint32_t)0x00000008)  /*!< Receive error: error reported by MII interface  */
#define ETH_DMARXDESC_DBE         ((uint32_t)0x00000004)  /*!< Dribble bit error: frame contains non int multiple of 8 bits  */
#define ETH_DMARXDESC_CE          ((uint32_t)0x00000002)  /*!< CRC error */
#define ETH_DMARXDESC_MAMPCE      ((uint32_t)0x00000001)  /*!< Rx MAC Address/Payload Checksum Error: Rx MAC address matched/ Rx Payload Checksum Error */

/*    Bit definition of RDES1 register              */ 
#define ETH_DMARXDESC_DIC   ((uint32_t)0x80000000)  /*!< Disable Interrupt on Completion */
#define ETH_DMARXDESC_RBS2  ((uint32_t)0x1FFF0000)  /*!< Receive Buffer2 Size */
#define ETH_DMARXDESC_RER   ((uint32_t)0x00008000)  /*!< Receive End of Ring */
#define ETH_DMARXDESC_RCH   ((uint32_t)0x00004000)  /*!< Second Address Chained */
#define ETH_DMARXDESC_RBS1  ((uint32_t)0x00001FFF)  /*!< Receive Buffer1 Size */

/*    Bit definition of RDES2 register            */ 
#define ETH_DMARXDESC_B1AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer1 Address Pointer */

/*    Bit definition of RDES3 register            */ 
#define ETH_DMARXDESC_B2AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer2 Address Pointer */

/*---------------------------------------------------------------------------------------------------------------------
  RDES4 |                   Reserved[31:15]              |             Extended Status [14:0]                          |
  ---------------------------------------------------------------------------------------------------------------------
  RDES5 |                                            Reserved[31:0]                                                    |
  ---------------------------------------------------------------------------------------------------------------------
  RDES6 |                                       Receive Time Stamp Low [31:0]                                          |
  ---------------------------------------------------------------------------------------------------------------------
  RDES7 |                                       Receive Time Stamp High [31:0]                                         |
  --------------------------------------------------------------------------------------------------------------------*/

/* Bit definition of RDES4 register */
#define ETH_DMAPTPRXDESC_PTPV                             ((uint32_t)0x00002000)  /* PTP Version */
#define ETH_DMAPTPRXDESC_PTPFT                            ((uint32_t)0x00001000)  /* PTP Frame Type */
#define ETH_DMAPTPRXDESC_PTPMT                            ((uint32_t)0x00000F00)  /* PTP Message Type */
#define ETH_DMAPTPRXDESC_PTPMT_SYNC                       ((uint32_t)0x00000100)  /* SYNC message (all clock types) */
#define ETH_DMAPTPRXDESC_PTPMT_FOLLOWUP                   ((uint32_t)0x00000200)  /* FollowUp message (all clock types) */ 
#define ETH_DMAPTPRXDESC_PTPMT_DELAYREQ                   ((uint32_t)0x00000300)  /* DelayReq message (all clock types) */ 
#define ETH_DMAPTPRXDESC_PTPMT_DELAYRESP                  ((uint32_t)0x00000400)  /* DelayResp message (all clock types) */ 
#define ETH_DMAPTPRXDESC_PTPMT_PDELAYREQ_ANNOUNCE         ((uint32_t)0x00000500)  /* PdelayReq message (peer-to-peer transparent clock) or Announce message (Ordinary or Boundary clock) */ 
#define ETH_DMAPTPRXDESC_PTPMT_PDELAYREQ_MANAGE           ((uint32_t)0x00000600)  /* PdelayResp message (peer-to-peer transparent clock) or Management message (Ordinary or Boundary clock)  */ 
#define ETH_DMAPTPRXDESC_PTPMT_PDELAYRESPFOLLOWUP_SIGNAL  ((uint32_t)0x00000700)  /* PdelayRespFollowUp message (peer-to-peer transparent clock) or Signaling message (Ordinary or Boundary clock) */           
#define ETH_DMAPTPRXDESC_IPV6PR                           ((uint32_t)0x00000040)  /* IPv4 Packet Received */
#define ETH_DMAPTPRXDESC_IPCB                             ((uint32_t)0x00000020)  /* IP Checksum Bypassed */
#define ETH_DMAPTPRXDESC_IPPE                             ((uint32_t)0x00000010)  /* IP Payload Error */
#define ETH_DMAPTPRXDESC_IPHE                             ((uint32_t)0x00000008)  /* IP Header Error */
#define ETH_DMAPTPRXDESC_IPPT                             ((uint32_t)0x00000007)  /* IP Payload Type */
#define ETH_DMAPTPRXDESC_IPPT_UDP                         ((uint32_t)0x00000001)  /* UDP payload encapsulated in the IP datagram */
#define ETH_DMAPTPRXDESC_IPPT_TCP                         ((uint32_t)0x00000002)  /* TCP payload encapsulated in the IP datagram */ 
#define ETH_DMAPTPRXDESC_IPPT_ICMP                        ((uint32_t)0x00000003)  /* ICMP payload encapsulated in the IP datagram */

/* Bit definition of RDES6 register */
#define ETH_DMAPTPRXDESC_RTSL  ((uint32_t)0xFFFFFFFF)  /* Receive Time Stamp Low */

/* Bit definition of RDES7 register */
#define ETH_DMAPTPRXDESC_RTSH  ((uint32_t)0xFFFFFFFF)  /* Receive Time Stamp High */


#else       /**------------Non-Enhanced Descriptors-------------------------**/

/**--------------------------------------------------------------------------**/
/*        Ethernet DMA descriptors registers bits definition                  */ 
/**--------------------------------------------------------------------------**/

/**
   DMA Tx Descriptor
  -----------------------------------------------------------------------------------------------
  TDES0 | OWN(31) | CTRL[30:26] | Reserved[25:24] | CTRL[23:20] | Reserved[19:17] | Status[16:0] |
  -----------------------------------------------------------------------------------------------
  TDES1 | Reserved[31:29] | Buffer2 ByteCount[28:16] | Reserved[15:13] | Buffer1 ByteCount[12:0] |
  -----------------------------------------------------------------------------------------------
  TDES2 |                         Buffer1 Address [31:0]                                         |
  -----------------------------------------------------------------------------------------------
  TDES3 |                   Buffer2 Address [31:0] / Next Descriptor Address [31:0]              |
  -----------------------------------------------------------------------------------------------
*/

/*    Bit definition of TDES0 register: DMA Tx descriptor status register  */ 
#define ETH_DMATXDESC_OWN                     ((uint32_t)0x80000000)  /*!< OWN bit: descriptor is owned by DMA engine */
#define ETH_DMATXDESC_TTSS                    ((uint32_t)0x00020000)  /*!< Tx Time Stamp Status */
#define ETH_DMATXDESC_IHE                     ((uint32_t)0x00010000)  /*!< IP Header Error */
#define ETH_DMATXDESC_ES                      ((uint32_t)0x00008000)  /*!< Error summary: OR of the following bits: UE || ED || EC || LCO || NC || LCA || FF || JT */
#define ETH_DMATXDESC_JT                      ((uint32_t)0x00004000)  /*!< Jabber Timeout */
#define ETH_DMATXDESC_FF                      ((uint32_t)0x00002000)  /*!< Frame Flushed: DMA/MTL flushed the frame due to SW flush */
#define ETH_DMATXDESC_PCE                     ((uint32_t)0x00001000)  /*!< Payload Checksum Error */
#define ETH_DMATXDESC_LCA                     ((uint32_t)0x00000800)  /*!< Loss of Carrier: carrier lost during transmission */
#define ETH_DMATXDESC_NC                      ((uint32_t)0x00000400)  /*!< No Carrier: no carrier signal from the transceiver */
#define ETH_DMATXDESC_LCO                     ((uint32_t)0x00000200)  /*!< Late Collision: transmission aborted due to collision */
#define ETH_DMATXDESC_EC                      ((uint32_t)0x00000100)  /*!< Excessive Collision: transmission aborted after 16 collisions */
#define ETH_DMATXDESC_VF                      ((uint32_t)0x00000080)  /*!< VLAN Frame */
#define ETH_DMATXDESC_CC                      ((uint32_t)0x00000078)  /*!< Collision Count */
#define ETH_DMATXDESC_ED                      ((uint32_t)0x00000004)  /*!< Excessive Deferral */
#define ETH_DMATXDESC_UF                      ((uint32_t)0x00000002)  /*!< Underflow Error: late data arrival from the memory */
#define ETH_DMATXDESC_DB                      ((uint32_t)0x00000001)  /*!< Deferred Bit */

/*    Bit definition of TDES1 register: DMA Tx descriptor control-size register  */ 
#define ETH_DMATXDESC_IC                      ((uint32_t)0x80000000)  /*!< Interrupt on Completion */
#define ETH_DMATXDESC_LS                      ((uint32_t)0x40000000)  /*!< Last Segment */
#define ETH_DMATXDESC_FS                      ((uint32_t)0x20000000)  /*!< First Segment */
#define ETH_DMATXDESC_CIC                     ((uint32_t)0x18000000)  /*!< Checksum Insertion Control: 4 cases */
#define ETH_DMATXDESC_CIC_BYPASS              ((uint32_t)0x00000000)  /*!< Do Nothing: Checksum Engine is bypassed */ 
#define ETH_DMATXDESC_CIC_IPV4HEADER          ((uint32_t)0x08000000)  /*!< IPV4 header Checksum Insertion */ 
#define ETH_DMATXDESC_CIC_TCPUDPICMP_SEGMENT  ((uint32_t)0x10000000)  /*!< TCP/UDP/ICMP Checksum Insertion calculated over segment only */ 
#define ETH_DMATXDESC_CIC_TCPUDPICMP_FULL     ((uint32_t)0x18000000)  /*!< TCP/UDP/ICMP Checksum Insertion fully calculated */ 
#define ETH_DMATXDESC_DC                      ((uint32_t)0x04000000)  /*!< Disable CRC */
#define ETH_DMATXDESC_TER                     ((uint32_t)0x02000000)  /*!< Transmit End of Ring */
#define ETH_DMATXDESC_TCH                     ((uint32_t)0x01000000)  /*!< Second Address Chained */
#define ETH_DMATXDESC_DP                      ((uint32_t)0x00800000)  /*!< Disable Padding */
#define ETH_DMATXDESC_TTSE                    ((uint32_t)0x00400000)  /*!< Transmit Time Stamp Enable */
#define ETH_DMATXDESC_TBS2                    ((uint32_t)0x003FF800)  /*!< Transmit Buffer2 Size */
#define ETH_DMATXDESC_TBS1                    ((uint32_t)0x000007FF)  /*!< Transmit Buffer1 Size */

/*        Bit definition of TDES2 register          */ 
#define ETH_DMATXDESC_B1AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer1 Address Pointer */

/*        Bit definition of TDES3 register          */ 
#define ETH_DMATXDESC_B2AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer2 Address Pointer */

/**
  DMA Rx Descriptor
  --------------------------------------------------------------------------------------------------------------------
  RDES0 | OWN(31) |                                             Status [30:0]                                          |
  ---------------------------------------------------------------------------------------------------------------------
  RDES1 | CTRL(31) | Reserved[30:29] | Buffer2 ByteCount[28:16] | CTRL[15:14] | Reserved(13) | Buffer1 ByteCount[12:0] |
  ---------------------------------------------------------------------------------------------------------------------
  RDES2 |                                       Buffer1 Address [31:0]                                                 |
  ---------------------------------------------------------------------------------------------------------------------
  RDES3 |                          Buffer2 Address [31:0] / Next Descriptor Address [31:0]                             |
  ---------------------------------------------------------------------------------------------------------------------
*/

/*    Bit definition of RDES0 register: DMA Rx descriptor status register  */ 
#define ETH_DMARXDESC_OWN         ((uint32_t)0x80000000)  /*!< OWN bit: descriptor is owned by DMA engine  */
#define ETH_DMARXDESC_AFM         ((uint32_t)0x40000000)  /*!< DA Filter Fail for the rx frame  */
#define ETH_DMARXDESC_FL          ((uint32_t)0x3FFF0000)  /*!< Receive descriptor frame length  */
#define ETH_DMARXDESC_ES          ((uint32_t)0x00008000)  /*!< Error summary: OR of the following bits: DE || OE || IPC || LC || RWT || RE || CE */
#define ETH_DMARXDESC_DE          ((uint32_t)0x00004000)  /*!< Descriptor error: no more descriptors for receive frame  */
#define ETH_DMARXDESC_SAF         ((uint32_t)0x00002000)  /*!< SA Filter Fail for the received frame */
#define ETH_DMARXDESC_LE          ((uint32_t)0x00001000)  /*!< Frame size not matching with length field */
#define ETH_DMARXDESC_OE          ((uint32_t)0x00000800)  /*!< Overflow Error: Frame was damaged due to buffer overflow */
#define ETH_DMARXDESC_VLAN        ((uint32_t)0x00000400)  /*!< VLAN Tag: received frame is a VLAN frame */
#define ETH_DMARXDESC_FS          ((uint32_t)0x00000200)  /*!< First descriptor of the frame  */
#define ETH_DMARXDESC_LS          ((uint32_t)0x00000100)  /*!< Last descriptor of the frame  */ 
#define ETH_DMARXDESC_IPV4HCE     ((uint32_t)0x00000080)  /*!< IPC Checksum Error: Rx Ipv4 header checksum error   */    
#define ETH_DMARXDESC_LC          ((uint32_t)0x00000040)  /*!< Late collision occurred during reception   */
#define ETH_DMARXDESC_FT          ((uint32_t)0x00000020)  /*!< Frame type - Ethernet, otherwise 802.3    */
#define ETH_DMARXDESC_RWT         ((uint32_t)0x00000010)  /*!< Receive Watchdog Timeout: watchdog timer expired during reception    */
#define ETH_DMARXDESC_RE          ((uint32_t)0x00000008)  /*!< Receive error: error reported by MII interface  */
#define ETH_DMARXDESC_DBE         ((uint32_t)0x00000004)  /*!< Dribble bit error: frame contains non int multiple of 8 bits  */
#define ETH_DMARXDESC_CE          ((uint32_t)0x00000002)  /*!< CRC error */
#define ETH_DMARXDESC_MAMPCE      ((uint32_t)0x00000001)  /*!< Rx MAC Address/Payload Checksum Error: Rx MAC address matched/ Rx Payload Checksum Error */

/*    Bit definition of RDES1 register              */ 
#define ETH_DMARXDESC_DIC   ((uint32_t)0x80000000)  /*!< Disable Interrupt on Completion */
#define ETH_DMARXDESC_RER   ((uint32_t)0x02000000)  /*!< Receive End of Ring */
#define ETH_DMARXDESC_RCH   ((uint32_t)0x01000000)  /*!< Second Address Chained */
#define ETH_DMARXDESC_RBS2  ((uint32_t)0x003FF800)  /*!< Receive Buffer2 Size */
#define ETH_DMARXDESC_RBS1  ((uint32_t)0x000007FF)  /*!< Receive Buffer1 Size */

/*    Bit definition of RDES2 register        */ 
#define ETH_DMARXDESC_B1AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer1 Address Pointer */

/*    Bit definition of RDES3 register          */ 
#define ETH_DMARXDESC_B2AP  ((uint32_t)0xFFFFFFFF)  /*!< Buffer2 Address Pointer */


#endif           /*#ifdef USE_ENHANCED_DMA_DESCRIPTORS*/


#ifdef USE_ENHANCED_DMA_DESCRIPTORS

    /* ETHERNET DMA Tx descriptors Buffer2 Size Shift */
    #define  ETH_DMATXDESC_BUFFER2_SIZESHIFT           16
    
    /* ETHERNET DMA Rx descriptors Frame Length Shift */
    #define  ETH_DMARXDESC_FRAME_LENGTHSHIFT           16
    
    /* ETHERNET DMA Rx descriptors Buffer2 Size Shift */
    #define  ETH_DMARXDESC_BUFFER2_SIZESHIFT           16

#else

    /* ETHERNET DMA Tx descriptors Buffer2 Size Shift */
    #define  ETH_DMATXDESC_BUFFER2_SIZESHIFT           11
    
    /* ETHERNET DMA Rx descriptors Frame Length Shift */
    #define  ETH_DMARXDESC_FRAME_LENGTHSHIFT           16
    
    /* ETHERNET DMA Rx descriptors Buffer2 Size Shift */
    #define  ETH_DMARXDESC_BUFFER2_SIZESHIFT           11

#endif

/******************************************************************************/
/*!
 * This type definition defines the structure that must be passed into various
 * Ethernet API functions.  This structure must be allocated by the application
 * program.  This structure allows using the Ethernet API with more than one
 * instance.   After the application program allocates this structure,
 * the instance variable must be set to the desired EMAC, 0,1, or 2.
 * The other variables are maintained by the Ethernet API and do not have to
 * be set by the application program.
 */

typedef struct ALT_ETH_EMAC_INSTANCE_s
{
    uint32_t instance;    /* This specifies the EMAC to use */
    uint32_t tx_current_desc_number;
    uint32_t rx_current_desc_number;
    uint32_t rx_processed_desc_number;
   
    ALT_INT_INTERRUPT_t irqnum; 
    uint32_t interrupt_mask;
    uint32_t rxints;
    uint32_t txints;
   
    /* Ethernet packet buffers */ 
    uint8_t rx_buf[ETH_BUFFER_SIZE * NUMBER_OF_RX_DESCRIPTORS];
    uint8_t tx_buf[ETH_BUFFER_SIZE * NUMBER_OF_TX_DESCRIPTORS];

    /* Descriptor rings */
    alt_eth_dma_desc_t tx_desc_ring[NUMBER_OF_TX_DESCRIPTORS];
    alt_eth_dma_desc_t rx_desc_ring[NUMBER_OF_RX_DESCRIPTORS];
} alt_eth_emac_instance_t;


/******************************************************************************/
/*!
 * A simple delay function which loops until the specified count is reached.
 *
 *
 * \param       delay
 *              The number to count to.
 */
void alt_eth_delay(volatile uint32_t delay);

/******************************************************************************/
/*!
 * Reset the EMAC, Disable the FPGA Interface, and set the PHY mode to RGMII
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 */
void alt_eth_reset_mac(uint32_t instance);

/******************************************************************************/
/*!
 * Initalizes the RX Descriptor ring
 *
 *
 * \param       emac
 *              The application allocated EMAC instance structure.
 */
void alt_eth_setup_rxdesc(alt_eth_emac_instance_t * emac);

/******************************************************************************/
/*!
 * Initalizes the TX Descriptor ring
 *
 *
 * \param       emac
 *              The application allocated EMAC instance structure.
 */
void alt_eth_setup_txdesc(alt_eth_emac_instance_t * emac);

/******************************************************************************/
/*!
 * Initializes the Ethernet IRQ handler
 *
 *
 * \param       emac
 *              The application allocated EMAC instance structure.
 * \param       callback
 *              The function to call when an interrupt is recieved.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_irq_init(alt_eth_emac_instance_t * emac, alt_int_callback_t callback);

/******************************************************************************/
/*!
 * The Ethernet IRQ Callback function
 * This IRQ Handler is used for rx and tx stats only as the Ethernet API
 * is operated in a polled mode.
 *
 * The IRQ handler is initialized to use this function in the alt_eth_dma_mac_config
 * function.  
 *
 *
 * \param       icciar
 *              The Interrupt controller CPU interrupt
 * \param       context
 *              The application allocated EMAC instance structure.
 *
 */
void alt_eth_irq_callback(uint32_t icciar, void * context);

/******************************************************************************/
/*!
 * Set the SWR bit: resets all MAC subsystem internal registers and logic
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE  alt_eth_software_reset(uint32_t instance);

/******************************************************************************/
/*!
 * Start the receive and transmit DMA 
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void  alt_eth_start(uint32_t instance);

/******************************************************************************/
/*!
 * Stop the receive and transmit DMA 
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void  alt_eth_stop(uint32_t instance);

/******************************************************************************/
/*!
 * This is the main configuration routine.  This routine sets up the PHY, EMAC, and
 * DMA and starts the DMA rx and tx.    
 *
 * For an application to initialize and use Ethernet
 *   1) Allocate the alt_eth_emac_instance_t structure.
 *   2) Set the structure instance variable to the EMAC you want to use
 *   3) Call this function.   
 *   4) Use the alt_eth_send_packet and alt_eth_get_packet functions
 *      to send and get packets.
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_dma_mac_config(alt_eth_emac_instance_t * emac);

/******************************************************************************/
/*!
 * Sends a Packet to the Ethernet Interface
 *
 *
 * \param       pkt
 *              The array containing the packet to send.
 * \param       len
 *              The length of the data to send in bytes. 
 * \param       first
 *              This indicates if this is the first packet in a frame.  
 * \param       last
 *              This indicates if this is the last packet in a frame. 
 * \param       emac
 *              The application allocated EMAC instance structure.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_eth_send_packet(uint8_t * pkt, uint32_t len, uint32_t first, uint32_t last, alt_eth_emac_instance_t * emac);

/******************************************************************************/
/*!
 * Gets a Packet from the Ethernet Interface
 *
 *
 * \param       pkt
 *              The array to recieve the packet.
 * \param       len
 *              The size of the pkt received. 
 * \param       emac
 *              The application allocated EMAC instance structure.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed, no packet returned.
 *                              Note the failure code is also used when no
 *                              packet is available from the interface.
 */
ALT_STATUS_CODE alt_eth_get_packet(uint8_t * pkt, uint32_t * len, alt_eth_emac_instance_t * emac);

/******************************************************************************/
/*!
 * Enable or Disable Mac Transmission
 *
 *
 * \param       new_state
 *              ALT_ETH_ENABLE or ALT_ETH_DISABLE
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void alt_eth_mac_set_tx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance);

/******************************************************************************/
/*!
 * Enable or Disable Mac Reception
 *
 *
 * \param       new_state
 *              ALT_ETH_ENABLE or ALT_ETH_DISABLE
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void alt_eth_mac_set_rx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance);

/******************************************************************************/
/*!
 *  Enable or Disable the MAC BackPressure operation 
 *  In Half duplex: during backpressure, when the MAC receives a new frame,
 *  the transmitter starts sending a JAM pattern resulting in a collision 
 *
 *
 * \param       new_state
 *              ALT_ETH_ENABLE or ALT_ETH_DISABLE
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void alt_eth_mac_set_bpa_state(alt_eth_enable_disable_state_t new_state, uint32_t instance);

/******************************************************************************/
/*!
 * Get the Backpressure Activate state
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 * \retval      ALT_ETH_ENABLE    Enabled
 * \retval      ALT_ETH_DISABLE   Disabled
 *
 */
alt_eth_enable_disable_state_t alt_eth_mac_get_bpa_state(uint32_t instance);

/******************************************************************************/
/*!
 *  Enable or Disable the selected ETHERNET MAC interrupts
 *
 *
 * \param       mac_irq_mask
 *              The mask of the desired IRQ(s).
 * \param       new_state
 *              ALT_ETH_ENABLE or ALT_ETH_DISABLE
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void alt_eth_mac_set_irq_reg(uint32_t mac_irq_mask, alt_eth_enable_disable_state_t new_state, uint32_t instance);


/******************************************************************************/
/*!
 * Get the link state
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 * \retval      ALT_ETH_RESET   The link is down
 * \retval      ALT_ETH_SET     The link is up
 *
 */
alt_eth_set_reset_state_t alt_eth_mac_get_mii_link_state(uint32_t instance);

/******************************************************************************/
/*!
 * check the gmac int status bits specified by mask
 *
 *
 * \param       mac_bit_mask
 *              mask of the gmac int status bits to check
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_ETH_RESET   No bits in the mask are set
 * \retval      ALT_ETH_SET     At least one bit in the mask is set
 *
 */
alt_eth_set_reset_state_t alt_eth_mac_check_status_reg(uint32_t mac_bit_mask, uint32_t instance);  

/******************************************************************************/
/*!
 * Gets the gmac int status register value
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The gmac int status register value
 *
 */
uint32_t alt_eth_mac_get_irq_status_reg(uint32_t instance);

/******************************************************************************/
/*!
 * Initiates mac pause control frame
 * This is only valid in full duplex mode
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 */
void alt_eth_mac_pause_ctrl_frame(uint32_t instance); 

/******************************************************************************/
/*!
 * Sets the mac address specified
 *
 *
 * \param       address
 *              8 bit array containing the mac address to set
 *              where address[5] is the high order mac byte.  
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 */
void alt_eth_mac_set_mac_addr(uint8_t *address, uint32_t instance);

/******************************************************************************/
/*!
 * Gets the mac address
 *
 *
 * \param       address
 *              8 bit array to recieve the 5 byte mac address
 *              where address[5] is the high order mac byte.  
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 */
void alt_eth_mac_get_mac_addr(uint8_t *address, uint32_t instance);

/******************************************************************************/
/*!
 * Checks the PHY link status and if changed renegotiates the link
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 */
void alt_eth_mac_check_mii_link_status(uint32_t instance);

/******************************************************************************/
/*!
 * Get the dma status register value
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The value of the dma irq stat register
 *
 */
uint32_t alt_eth_dma_get_status_reg(uint32_t instance);

/******************************************************************************/
/*!
 * Checks the specified bits in the dma status reg
 *
 *
 * \param       dma_bit_mask
 *              mask of the dma status bits to check
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_ETH_RESET   No bits in the mask are set
 * \retval      ALT_ETH_SET     At least one bit in the mask is set
 *
 */
alt_eth_set_reset_state_t alt_eth_dma_check_status_reg(uint32_t dma_bit_mask, uint32_t instance);

/******************************************************************************/
/*!
 * Clear bits in the dma status reg
 *
 *
 * \param       dma_bit_mask
 *              mask of the dma int status bits to clear
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_ETH_RESET   No bits in the mask are set
 * \retval      ALT_ETH_SET     At least one bit in the mask is set
 *
 */
void alt_eth_dma_clear_status_bits(uint32_t dma_bit_mask, uint32_t instance);

/******************************************************************************/
/*!
 * Flush the tx fifo
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 *
 */
void alt_eth_dma_flush_tx_fifo(uint32_t instance);

/******************************************************************************/
/*!
 * Get the tx fifo flush state
 *
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_ETH_RESET   Tx fifo flush is complete
 * \retval      ALT_ETH_SET     Tx fifo flush is in progress
 */
alt_eth_set_reset_state_t alt_eth_dma_get_tx_fifo_flush_state(uint32_t instance);

/******************************************************************************/
/*!
 * Enable or Disable the TX DMA
 *
 *
 * \param       new_state
 *              ALT_ETH_ENABLE or ALT_ETH_DISABLE
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void alt_eth_dma_set_tx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance);

/******************************************************************************/
/*!
 * Enable or Disable the RX DMA
 *
 *
 * \param       new_state
 *              ALT_ETH_ENABLE or ALT_ETH_DISABLE
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void alt_eth_dma_set_rx_state(alt_eth_enable_disable_state_t new_state, uint32_t instance);

/******************************************************************************/
/*!
 *  Enable or Disable the selected DMA interrupts
 *
 *
 * \param       dma_irq_mask
 *              The mask of the desired IRQ(s).
 * \param       new_state
 *              ALT_ETH_ENABLE or ALT_ETH_DISABLE
 * \param       instance
 *              The EMAC instance 0,1, or 2.
 *
 */
void alt_eth_dma_set_irq_reg(uint32_t dma_irq_mask, alt_eth_enable_disable_state_t new_state, uint32_t instance);

/******************************************************************************/
/*!
 * Check the state of bits in the DMA overflow counter register
 *
 * \param       dma_overflow_mask
 *              The mask of the desired bits to check.
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_ETH_RESET   No bits specified by the mask are set
 * \retval      ALT_ETH_SET     At least 1 bit specified by the mask is set
 */
alt_eth_set_reset_state_t alt_eth_dma_check_overflow_counter_reg(uint32_t dma_overflow_mask, uint32_t instance);

/******************************************************************************/
/*!
 * Get the address of the current Transmit Descriptor being read by the DMA
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The tx address 
 */
uint32_t alt_eth_dma_get_curr_tx_desc_addr(uint32_t instance);

/******************************************************************************/
/*!
 * Get the address of the current Receive Descriptor being read by the DMA
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The rx address 
 */
uint32_t alt_eth_dma_get_curr_rx_desc_addr(uint32_t instance);

/******************************************************************************/
/*!
 * Get the address of the current Transmit buffer address being read by the DMA
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The tx buf address 
 */
uint32_t alt_eth_dma_get_curr_tx_buff_addr(uint32_t instance);

/******************************************************************************/
/*!
 * Get the address of the current Receive buffer address being read by the DMA
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The rx buf address 
 */
uint32_t alt_eth_dma_get_curr_rx_buff_addr(uint32_t instance);

/******************************************************************************/
/*!
 * Set the start address of the Transmit Descriptor list
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The tx list address 
 */
void alt_eth_dma_set_tx_desc_addr(uint32_t tx_desc_list_addr, uint32_t instance);

/******************************************************************************/
/*!
 * Set the start address of the Receive Descriptor list
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      uint32_t        The rx list address 
 */
void alt_eth_dma_set_rx_desc_addr(uint32_t rx_desc_list_addr, uint32_t instance);

/******************************************************************************/
/*!
 * Resume TX DMA operations suspended by underflow or no available descriptor
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 */
void alt_eth_dma_resume_dma_tx(uint32_t instance);

/******************************************************************************/
/*!
 * Resume RX DMA operations suspended by no available descriptor
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 */
void alt_eth_dma_resume_dma_rx(uint32_t instance);


/**--------------------------------------------------------------------------**/
/*            PHY Specific Function Prototypes.                                  */ 
/**--------------------------------------------------------------------------**/

/******************************************************************************/
/*!
 * Configure the phy
 * This routine is contained in a separate phy file that must be included in the
 * build.  This is one of the 3 functions comprising the software interface between
 * the phy and the alt_ethernet files. To use a different phy simply include the proper phy
 * c file in the build.
 *
 * This routine must initialize the phy, bring the link up, and complete negotiation.
 * The phy instance is derived from the emac instance via a lookup table in the phy .h file.
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_E_SUCCESS   Phy configuration was successful.
 * \retval      ALT_E_ERROR     Phy configuration failed.
 */
ALT_STATUS_CODE alt_eth_phy_config(uint32_t instance);

/******************************************************************************/
/*!
 * Reset the phy
 * This routine is contained in a separate phy file that must be included in the
 * build.  This is one of the 3 functions comprising the software interface between
 * the phy and the alt_ethernet files. To use a different phy simply include the proper phy
 * c file in the build.
 *
 * The phy instance is derived from the emac instance via a lookup table in the phy .h file.
 *
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_E_SUCCESS   Phy reset successful.
 * \retval      ALT_E_ERROR     Phy reset failed.
 */
ALT_STATUS_CODE alt_eth_phy_reset(uint32_t instance);

/******************************************************************************/
/*!
 * Get phy duplex and speed
 * As a result of the alt_eth_phy_config phy negotiation, a certain phy speed
 * and duplex was obtained.  This function returns those values.
 *
 * This routine is contained in a separate phy file that must be included in the
 * build.  This is one of the 3 functions comprising the software interface between
 * the phy and the alt_ethernet files. To use a different phy simply include the proper phy
 * c file in the build.
 *
 * The phy instance is derived from the emac instance via a lookup table in the phy .h file.
 *
 * \param       phy_duplex_status
 *              returns 1 for Duplex Mode is set, 0 for Duplex mode is not set 
 * \param       phy_speed
 *              returns 10, 100, or 1000
 * \param       instance
 *              The EMAC instance 0,1, or 2. 
 *
 * \retval      ALT_E_SUCCESS   Phy duplex and speed obtained successfully
 * \retval      ALT_E_ERROR     Phy duplex and speed query failed
 */
ALT_STATUS_CODE alt_eth_phy_get_duplex_and_speed(uint32_t * phy_duplex_status, uint32_t * phy_speed, uint32_t instance);


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* __ALT_ETHERNET_H__ */
