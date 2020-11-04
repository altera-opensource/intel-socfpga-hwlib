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

/* Altera - ALT_EMAC_DMA */

#ifndef __ALT_SOCAL_EMAC_DMA_H__
#define __ALT_SOCAL_EMAC_DMA_H__

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
 * Component : EMAC_DMA
 * The address block DMA contains 23 Registers : Bus_Mode to HW_Feature
 * 
 */
/*
 * Register : Bus_Mode
 * 
 * <b> Register 0 (Bus Mode Register) </b>
 * 
 * The Bus Mode register establishes the bus operating modes for the DMA.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [0]     | RW     | 0x1   | ALT_EMAC_DMA_BUS_MODE_SWR        
 *  [1]     | R      | 0x0   | ALT_EMAC_DMA_BUS_MODE_DA         
 *  [6:2]   | RW     | 0x0   | ALT_EMAC_DMA_BUS_MODE_DSL        
 *  [7]     | RW     | 0x0   | ALT_EMAC_DMA_BUS_MODE_ATDS       
 *  [13:8]  | RW     | 0x1   | ALT_EMAC_DMA_BUS_MODE_PBL        
 *  [15:14] | R      | 0x0   | ALT_EMAC_DMA_BUS_MODE_PR         
 *  [16]    | RW     | 0x0   | ALT_EMAC_DMA_BUS_MODE_FB         
 *  [22:17] | RW     | 0x1   | ALT_EMAC_DMA_BUS_MODE_RPBL       
 *  [23]    | RW     | 0x0   | ALT_EMAC_DMA_BUS_MODE_USP        
 *  [24]    | RW     | 0x0   | ALT_EMAC_DMA_BUS_MODE_PBLX8      
 *  [25]    | RW     | 0x0   | ALT_EMAC_DMA_BUS_MODE_AAL        
 *  [26]    | R      | 0x0   | ALT_EMAC_DMA_BUS_MODE_MB         
 *  [27]    | R      | 0x0   | ALT_EMAC_DMA_BUS_MODE_TXPR       
 *  [29:28] | R      | 0x0   | ALT_EMAC_DMA_BUS_MODE_PRWG       
 *  [30]    | R      | 0x0   | ALT_EMAC_DMA_BUS_MODE_RESERVED_30
 *  [31]    | R      | 0x0   | ALT_EMAC_DMA_BUS_MODE_RIB        
 * 
 */
/*
 * Field : SWR
 * 
 * Software Reset
 * 
 * When this bit is set, the MAC DMA Controller resets the logic and all internal
 * registers of the MAC. It is cleared automatically after the reset operation has
 * completed in all of the DWC_gmac clock domains. Before reprogramming any
 * register of the DWC_gmac, you should read a zero (0) value in this bit .
 * 
 * <b> Note: </b><br>
 * 
 * * The Software reset function is driven only by this bit. Bit 0 of Register 64
 *   (Channel 1 Bus Mode Register) or Register 128 (Channel 2 Bus Mode Register)
 *   has no impact on the Software reset function.
 * 
 * * The reset operation is completed only when all resets in all active clock
 *   domains are de-asserted. Therefore, it is essential that all the PHY inputs
 *   clocks (applicable for the selected PHY interface) are present for the
 *   software reset completion.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_SWR register field. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_SWR register field. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_MSB        0
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_SWR register field. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_SWR register field value. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_SET_MSK    0x00000001
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_SWR register field value. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_SWR register field. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_RESET      0x1
/* Extracts the ALT_EMAC_DMA_BUS_MODE_SWR field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_EMAC_DMA_BUS_MODE_SWR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_SWR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DA
 * 
 * DMA Arbitration Scheme
 * 
 * This bit specifies the arbitration scheme between the transmit and receive paths
 * of Channel 0.
 * 
 * * 0: Weighted round-robin with Rx:Tx or Tx:Rx
 * 
 * The priority between the paths is according to the priority specified in bits
 * 15:14 (PR) and priority weights specified in Bit 27 (TXPR).
 * 
 * * 1: Fixed priority
 * 
 * The transmit path has priority over receive path when Bit 27 (TXPR) is set.
 * Otherwise, receive path has priority over the transmit path.
 * 
 * In the GMAC-AXI configuration, these bits are reserved and read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_DA register field. */
#define ALT_EMAC_DMA_BUS_MODE_DA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_DA register field. */
#define ALT_EMAC_DMA_BUS_MODE_DA_MSB        1
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_DA register field. */
#define ALT_EMAC_DMA_BUS_MODE_DA_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_DA register field value. */
#define ALT_EMAC_DMA_BUS_MODE_DA_SET_MSK    0x00000002
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_DA register field value. */
#define ALT_EMAC_DMA_BUS_MODE_DA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_DA register field. */
#define ALT_EMAC_DMA_BUS_MODE_DA_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_DA field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_DA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_EMAC_DMA_BUS_MODE_DA register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_DA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : DSL
 * 
 * Descriptor Skip Length
 * 
 * This bit specifies the number of Word, Dword, or Lword (depending on the 32-bit,
 * 64-bit, or 128-bit bus) to skip between two unchained descriptors. The address
 * skipping starts from the end of current descriptor to the start of next
 * descriptor. When the DSL value is equal to zero, the descriptor table is taken
 * as contiguous by the DMA in Ring mode.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_DSL register field. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_DSL register field. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_MSB        6
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_DSL register field. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_WIDTH      5
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_DSL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_SET_MSK    0x0000007c
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_DSL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_CLR_MSK    0xffffff83
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_DSL register field. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_DSL field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_GET(value) (((value) & 0x0000007c) >> 2)
/* Produces a ALT_EMAC_DMA_BUS_MODE_DSL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_DSL_SET(value) (((value) << 2) & 0x0000007c)

/*
 * Field : ATDS
 * 
 * Alternate Descriptor Size
 * 
 * When set, the size of the alternate descriptor increases to 32 bytes (8 DWORDS).
 * This is required when the Advanced Timestamp feature or the IPC Full Offload
 * Engine (Type 2) is enabled in the receiver. The enhanced descriptor is not
 * required if the Advanced Timestamp and IPC Full Checksum Offload (Type 2)
 * features are not enabled. In such cases, you can use the 16 bytes descriptor to
 * save 4 bytes of memory.
 * 
 * This bit is present only when you select the Alternate Descriptor feature and
 * any one of the following features during core configuration:
 * 
 * * Advanced Timestamp feature
 * 
 * * IPC Full Checksum Offload Engine (Type 2) feature
 * 
 * Otherwise, this bit is reserved and read-only.
 * 
 * When reset, the descriptor size reverts back to 4 DWORDs (16 bytes).
 * 
 * This bit preserves the backward compatibility for the descriptor size. In
 * versions prior to 3.50a, the descriptor size is 16 bytes for both normal and
 * enhanced descriptor. In version 3.50a, descriptor size is increased to 32 bytes
 * because of the Advanced Timestamp and IPC Full Checksum Offload Engine (Type 2)
 * features.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_ATDS register field. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_ATDS register field. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_MSB        7
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_ATDS register field. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_ATDS register field value. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_SET_MSK    0x00000080
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_ATDS register field value. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_CLR_MSK    0xffffff7f
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_ATDS register field. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_ATDS field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_EMAC_DMA_BUS_MODE_ATDS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_ATDS_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : PBL
 * 
 * Programmable Burst Length
 * 
 * These bits indicate the maximum number of beats to be transferred in one DMA
 * transaction. This is the maximum value that is used in a single block Read or
 * Write. The DMA always attempts to burst as specified in PBL each time it starts
 * a Burst transfer on the host bus. PBL can be programmed with permissible values
 * of 1, 2, 4, 8, 16, and 32. Any other value results in undefined behavior. When
 * USP is set high, this PBL value is applicable only for Tx DMA transactions.
 * 
 * If the number of beats to be transferred is more than 32, then perform the
 * following steps:
 * 
 * 1. Set the PBLx8 mode. <br>
 * 
 * 2. Set the PBL. <br>
 * 
 * For example, if the maximum number of beats to be transferred is 64, then first
 * set PBLx8 to 1 and then set PBL to 8. The PBL values have the following
 * limitation: The maximum number of possible beats (PBL) is limited by the size of
 * the Tx FIFO and Rx FIFO in the MTL layer and the data bus width on the DMA. The
 * FIFO has a constraint that the maximum beat supported is half the depth of the
 * FIFO, except when specified.
 * 
 * For different data bus widths and FIFO sizes, the valid PBL range (including x8
 * mode) is provided in the following list. If the PBL is common for both transmit
 * and receive DMA, the minimum Rx FIFO and Tx FIFO depths must be considered.
 * 
 * Note: In the half-duplex mode, the valid PBL range specified in the following
 * list is applicable only for Tx FIFO.
 * 
 * * 32-Bit Data Bus Width
 * 
 *     - 128 Bytes FIFO Depth: In the full-duplex mode, the valid PBL range is 16
 *       or less. In the half-duplex mode, the valid PBL range is 8 or less for the
 *       10 or 100 Mbps mode.
 * 
 *     - 256 Bytes FIFO Depth: In the full-duplex mode and the half-duplex (10 or
 *       100 Mbps) modes, the valid PBL range is 32 or less.
 * 
 *     - 512 Bytes FIFO Depth: In the full-duplex mode and the half-duplex (10 or
 *       100 Mbps) modes, the valid PBL range is 64 or less.
 * 
 *     - 1 KB FIFO Depth: In the full-duplex mode, the valid PBL range is 128 or
 *       less. In the half-duplex mode, the valid PBL range is 128 or less in the
 *       10 or 100 Mbps mode and 64 or less in the 1000 Mbps mode.
 * 
 *     - 2 KB and Higher FIFO Depth: All PBL values are supported in the full-
 *       duplex mode and half-duplex modes.
 * 
 * * 64-Bit Data Bus Width
 * 
 *     - 128 Bytes FIFO Depth: In the full-duplex mode, the valid PBL range is 8 or
 *       less. In the half-duplex mode, the valid PBL range is 4 or less for the 10
 *       or 100 Mbps mode.
 * 
 *     - 256 Bytes FIFO Depth: In the full-duplex mode and the half-duplex (10 or
 *       100 Mbps) modes, the valid PBL range is 16 or less.
 * 
 *     - 512 Bytes FIFO Depth: In the full-duplex mode and the half-duplex (10 or
 *       100 Mbps) modes, the valid PBL range is 32 or less.
 * 
 *     - 1 KB FIFO Depth: In the full-duplex mode, the valid PBL range is 64 or
 *       less. In the half-duplex mode, the valid PBL range is 64 or less in the 10
 *       or 100 Mbps mode and 32 or less in the 1000-Mbps mode.
 * 
 *     - 2 KB FIFO Depth: In the full-duplex mode and the half-duplex (10 or 100
 *       Mbps) modes, the valid PBL range is 128 or less.
 * 
 *     - 4 KB and Higher FIFO Depth: All PBL values are supported in the full-
 *       duplex and half-duplex modes.
 * 
 * * 128-Bit Data Bus Width
 * 
 *     - 128 Bytes FIFO Depth: In the full-duplex mode, the valid PBL range is 4 or
 *       less. In the half-duplex mode, the valid PBL range is 2 or less for the 10
 *       or 100 Mbps mode.
 * 
 *     - 256 Bytes FIFO Depth: In the full-duplex mode and the half-duplex (10 or
 *       100 Mbps) modes, the valid PBL range is 8 or less.
 * 
 *     - 512 Bytes FIFO Depth: In the full-duplex mode and the half-duplex (10 or
 *       100 Mbps) modes, the valid PBL range is 16 or less.
 * 
 *     - 1 KB FIFO Depth: In the full-duplex mode, the valid PBL range is 32 or
 *       less. In the half-duplex mode, the valid PBL range is 32 or less in the 10
 *       or 100 Mbps mode and 16 or less in the 1000-Mbps mode.
 * 
 *     - 2 KB FIFO Depth: In the full-duplex mode and the half-duplex (10 or 100
 *       Mbps) modes, the valid PBL range is 64 or less.
 * 
 *     - 4 KB FIFO Depth: In the full-duplex mode and the half-duplex (10 or 100
 *       Mbps) modes, the valid PBL range is 128 or less.
 * 
 *     - 8 KB and Higher FIFO Depth: All PBL values are supported in the full-
 *       duplex and half-duplex modes.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_PBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_PBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_MSB        13
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_PBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_WIDTH      6
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_PBL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_SET_MSK    0x00003f00
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_PBL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_CLR_MSK    0xffffc0ff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_PBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_BUS_MODE_PBL field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_GET(value) (((value) & 0x00003f00) >> 8)
/* Produces a ALT_EMAC_DMA_BUS_MODE_PBL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_PBL_SET(value) (((value) << 8) & 0x00003f00)

/*
 * Field : PR
 * 
 * Priority Ratio
 * 
 * These bits control the priority ratio in the weighted round-robin arbitration
 * between the Rx DMA and Tx DMA. These bits are valid only when Bit 1 (DA) is
 * reset. The priority ratio is Rx:Tx or Tx:Rx depending on whether Bit 27 (TXPR)
 * is reset or set.
 * 
 * * 00: The Priority Ratio is 1:1.
 * 
 * * 01: The Priority Ratio is 2:1.
 * 
 * * 10: The Priority Ratio is 3:1.
 * 
 * * 11: The Priority Ratio is 4:1.
 * 
 * In the GMAC-AXI configuration, these bits are reserved and  read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_PR register field. */
#define ALT_EMAC_DMA_BUS_MODE_PR_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_PR register field. */
#define ALT_EMAC_DMA_BUS_MODE_PR_MSB        15
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_PR register field. */
#define ALT_EMAC_DMA_BUS_MODE_PR_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_PR register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PR_SET_MSK    0x0000c000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_PR register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PR_CLR_MSK    0xffff3fff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_PR register field. */
#define ALT_EMAC_DMA_BUS_MODE_PR_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_PR field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_PR_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_EMAC_DMA_BUS_MODE_PR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_PR_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : FB
 * 
 * Fixed Burst
 * 
 * This bit controls whether the AHB or AXI Master interface performs fixed burst
 * transfers or not. When set, the AHB interface uses only SINGLE, INCR4, INCR8, or
 * INCR16 during start of the normal burst transfers. When reset, the AHB or AXI
 * interface uses SINGLE and INCR burst transfer operations.
 * 
 * For more information, see Bit 0 (UNDEF) of the AXI Bus Mode register in the
 * GMAC-AXI configuration.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_FB register field. */
#define ALT_EMAC_DMA_BUS_MODE_FB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_FB register field. */
#define ALT_EMAC_DMA_BUS_MODE_FB_MSB        16
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_FB register field. */
#define ALT_EMAC_DMA_BUS_MODE_FB_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_FB register field value. */
#define ALT_EMAC_DMA_BUS_MODE_FB_SET_MSK    0x00010000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_FB register field value. */
#define ALT_EMAC_DMA_BUS_MODE_FB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_FB register field. */
#define ALT_EMAC_DMA_BUS_MODE_FB_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_FB field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_FB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_EMAC_DMA_BUS_MODE_FB register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_FB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RPBL
 * 
 * Rx DMA PBL
 * 
 * This field indicates the maximum number of beats to be transferred in one Rx DMA
 * transaction. This is the maximum value that is used in a single block Read or
 * Write.
 * 
 * The Rx DMA always attempts to burst as specified in the RPBL bit each time it
 * starts a Burst transfer on the host bus. You can program RPBL with values of 1,
 * 2, 4, 8, 16, and 32. Any other value results in undefined behavior.
 * 
 * This field is valid and applicable only when USP is set high.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_RPBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_RPBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_MSB        22
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_RPBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_WIDTH      6
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_RPBL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_SET_MSK    0x007e0000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_RPBL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_CLR_MSK    0xff81ffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_RPBL register field. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_BUS_MODE_RPBL field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_GET(value) (((value) & 0x007e0000) >> 17)
/* Produces a ALT_EMAC_DMA_BUS_MODE_RPBL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_RPBL_SET(value) (((value) << 17) & 0x007e0000)

/*
 * Field : USP
 * 
 * Use Seperate PBL
 * 
 * When set high, this bit configures the Rx DMA to use the value configured in
 * Bits[22:17] as PBL. The PBL value in Bits[13:8] is applicable only to the Tx DMA
 * operations.
 * 
 * When reset to low, the PBL value in Bits[13:8] is applicable for both DMA
 * engines.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_USP register field. */
#define ALT_EMAC_DMA_BUS_MODE_USP_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_USP register field. */
#define ALT_EMAC_DMA_BUS_MODE_USP_MSB        23
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_USP register field. */
#define ALT_EMAC_DMA_BUS_MODE_USP_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_USP register field value. */
#define ALT_EMAC_DMA_BUS_MODE_USP_SET_MSK    0x00800000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_USP register field value. */
#define ALT_EMAC_DMA_BUS_MODE_USP_CLR_MSK    0xff7fffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_USP register field. */
#define ALT_EMAC_DMA_BUS_MODE_USP_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_USP field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_USP_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_EMAC_DMA_BUS_MODE_USP register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_USP_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : PBLx8
 * 
 * PBLx8 Mode
 * 
 * When set high, this bit multiplies the programmed PBL value (Bits[22:17] and
 * Bits[13:8]) eight times. Therefore, the DMA transfers the data in 8, 16, 32, 64,
 * 128, and 256 beats depending on the PBL value.
 * 
 * Note: This bit function is not backward compatible. Before release 3.50a, this
 * bit was 4xPBL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_PBLX8 register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_PBLX8 register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_MSB        24
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_PBLX8 register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_PBLX8 register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_SET_MSK    0x01000000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_PBLX8 register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_CLR_MSK    0xfeffffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_PBLX8 register field. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_PBLX8 field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_EMAC_DMA_BUS_MODE_PBLX8 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_PBLX8_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : AAL
 * 
 * Address Aligned Beats
 * 
 * When this bit is set high and the FB bit is equal to 1, the AHB or AXI interface
 * generates all bursts aligned to the start address LS bits. If the FB bit is
 * equal to 0, the first burst (accessing the data buffer's start address) is not
 * aligned, but subsequent bursts are aligned to the address.
 * 
 * This bit is valid only in the GMAC-AHB and GMAC-AXI configuration and is
 * reserved (RO with default value 0) in all other configurations.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_AAL register field. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_AAL register field. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_MSB        25
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_AAL register field. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_AAL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_SET_MSK    0x02000000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_AAL register field value. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_CLR_MSK    0xfdffffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_AAL register field. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_AAL field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_EMAC_DMA_BUS_MODE_AAL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_AAL_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : MB
 * 
 * Mixed Burst
 * 
 * When this bit is set high and the FB bit is low, the AHB Master interface starts
 * all bursts of length more than 16 with INCR (undefined burst) whereas it reverts
 * to fixed burst transfers (INCRx and SINGLE) for burst length of 16 and less.
 * 
 * This bit is valid only in the GMAC-AHB configuration and reserved in all other
 * configuration.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_MB register field. */
#define ALT_EMAC_DMA_BUS_MODE_MB_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_MB register field. */
#define ALT_EMAC_DMA_BUS_MODE_MB_MSB        26
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_MB register field. */
#define ALT_EMAC_DMA_BUS_MODE_MB_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_MB register field value. */
#define ALT_EMAC_DMA_BUS_MODE_MB_SET_MSK    0x04000000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_MB register field value. */
#define ALT_EMAC_DMA_BUS_MODE_MB_CLR_MSK    0xfbffffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_MB register field. */
#define ALT_EMAC_DMA_BUS_MODE_MB_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_MB field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_MB_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_EMAC_DMA_BUS_MODE_MB register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_MB_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : TXPR
 * 
 * Transmit Priority
 * 
 * When set, this bit indicates that the transmit DMA has higher priority than the
 * receive DMA during arbitration for the system-side bus. In the GMAC-AXI
 * configuration, this bit is reserved and read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_TXPR register field. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_TXPR register field. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_MSB        27
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_TXPR register field. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_TXPR register field value. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_SET_MSK    0x08000000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_TXPR register field value. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_TXPR register field. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_TXPR field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_EMAC_DMA_BUS_MODE_TXPR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_TXPR_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : PRWG
 * 
 * Channel Priority Weights
 * 
 * This field sets the priority weights for Channel 0 during the round-robin
 * arbitration between the DMA channels for the system bus.
 * 
 * * 00: The priority weight is 1.
 * 
 * * 01: The priority weight is 2.
 * 
 * * 10: The priority weight is 3.
 * 
 * * 11: The priority weight is 4.
 * 
 * This field is present in all DWC_gmac configurations except GMAC-AXI when you
 * select the AV feature. Otherwise, this field is reserved and read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_PRWG register field. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_PRWG register field. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_MSB        29
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_PRWG register field. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_PRWG register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_SET_MSK    0x30000000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_PRWG register field value. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_CLR_MSK    0xcfffffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_PRWG register field. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_PRWG field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_GET(value) (((value) & 0x30000000) >> 28)
/* Produces a ALT_EMAC_DMA_BUS_MODE_PRWG register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_PRWG_SET(value) (((value) << 28) & 0x30000000)

/*
 * Field : Reserved_30
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_RESERVED_30 register field. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_RESERVED_30 register field. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_MSB        30
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_RESERVED_30 register field. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_RESERVED_30 register field value. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_SET_MSK    0x40000000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_RESERVED_30 register field value. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_CLR_MSK    0xbfffffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_RESERVED_30 register field. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_RESERVED_30 field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_EMAC_DMA_BUS_MODE_RESERVED_30 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_RESERVED_30_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : RIB
 * 
 * Rebuild INCRx Burst
 * 
 * When this bit is set high and the AHB master gets an EBT (Retry, Split, or
 * Losing bus grant), the AHB master interface rebuilds the pending beats of any
 * burst transfer initiated with INCRx. The AHB master interface rebuilds the beats
 * with a combination of specified bursts with INCRx and SINGLE. By default, the
 * AHB master interface rebuilds pending beats of an EBT with an unspecified (INCR)
 * burst.
 * 
 * This bit is valid only in the GMAC-AHB configuration. It is reserved in all
 * other configuration.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_BUS_MODE_RIB register field. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_BUS_MODE_RIB register field. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_MSB        31
/* The width in bits of the ALT_EMAC_DMA_BUS_MODE_RIB register field. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_BUS_MODE_RIB register field value. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_SET_MSK    0x80000000
/* The mask used to clear the ALT_EMAC_DMA_BUS_MODE_RIB register field value. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_CLR_MSK    0x7fffffff
/* The reset value of the ALT_EMAC_DMA_BUS_MODE_RIB register field. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_RESET      0x0
/* Extracts the ALT_EMAC_DMA_BUS_MODE_RIB field value from a register. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_EMAC_DMA_BUS_MODE_RIB register field value suitable for setting the register. */
#define ALT_EMAC_DMA_BUS_MODE_RIB_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_BUS_MODE.
 */
struct ALT_EMAC_DMA_BUS_MODE_s
{
    volatile uint32_t        SWR         :  1;  /* ALT_EMAC_DMA_BUS_MODE_SWR */
    const volatile uint32_t  DA          :  1;  /* ALT_EMAC_DMA_BUS_MODE_DA */
    volatile uint32_t        DSL         :  5;  /* ALT_EMAC_DMA_BUS_MODE_DSL */
    volatile uint32_t        ATDS        :  1;  /* ALT_EMAC_DMA_BUS_MODE_ATDS */
    volatile uint32_t        PBL         :  6;  /* ALT_EMAC_DMA_BUS_MODE_PBL */
    const volatile uint32_t  PR          :  2;  /* ALT_EMAC_DMA_BUS_MODE_PR */
    volatile uint32_t        FB          :  1;  /* ALT_EMAC_DMA_BUS_MODE_FB */
    volatile uint32_t        RPBL        :  6;  /* ALT_EMAC_DMA_BUS_MODE_RPBL */
    volatile uint32_t        USP         :  1;  /* ALT_EMAC_DMA_BUS_MODE_USP */
    volatile uint32_t        PBLx8       :  1;  /* ALT_EMAC_DMA_BUS_MODE_PBLX8 */
    volatile uint32_t        AAL         :  1;  /* ALT_EMAC_DMA_BUS_MODE_AAL */
    const volatile uint32_t  MB          :  1;  /* ALT_EMAC_DMA_BUS_MODE_MB */
    const volatile uint32_t  TXPR        :  1;  /* ALT_EMAC_DMA_BUS_MODE_TXPR */
    const volatile uint32_t  PRWG        :  2;  /* ALT_EMAC_DMA_BUS_MODE_PRWG */
    const volatile uint32_t  Reserved_30 :  1;  /* ALT_EMAC_DMA_BUS_MODE_RESERVED_30 */
    const volatile uint32_t  RIB         :  1;  /* ALT_EMAC_DMA_BUS_MODE_RIB */
};

/* The typedef declaration for register ALT_EMAC_DMA_BUS_MODE. */
typedef struct ALT_EMAC_DMA_BUS_MODE_s  ALT_EMAC_DMA_BUS_MODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_BUS_MODE register. */
#define ALT_EMAC_DMA_BUS_MODE_RESET       0x00020101
/* The byte offset of the ALT_EMAC_DMA_BUS_MODE register from the beginning of the component. */
#define ALT_EMAC_DMA_BUS_MODE_OFST        0x0
/* The address of the ALT_EMAC_DMA_BUS_MODE register. */
#define ALT_EMAC_DMA_BUS_MODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_BUS_MODE_OFST))

/*
 * Register : Transmit_Poll_Demand
 * 
 * <b> Register 1 (Transmit Poll Demand Register) </b>
 * 
 * The Transmit Poll Demand register enables the Tx DMA to check whether or not the
 * DMA owns the current descriptor. The Transmit Poll Demand command is given to
 * wake up the Tx DMA if it is in the Suspend mode. The Tx DMA can go into the
 * Suspend mode because of an Underflow error in a transmitted frame or the
 * unavailability of descriptors owned by it. You can give this command anytime and
 * the Tx DMA resets this command when it again starts fetching the current
 * descriptor from host memory. When this register is read, it always returns zero.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD
 * 
 */
/*
 * Field : TPD
 * 
 * Transmit Poll Demand
 * 
 * When these bits are written with any value, the DMA reads the current descriptor
 * pointed to by Register 18 (Current Host Transmit Descriptor Register). If that
 * descriptor is not available (owned by the Host), the transmission returns to the
 * Suspend state and the Bit 2 (TU) of Register 5 (Status Register) is asserted. If
 * the descriptor is available, the transmission resumes.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD register field. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD register field. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_MSB        31
/* The width in bits of the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD register field. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_WIDTH      32
/* The mask used to set the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD register field value. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD register field value. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_CLR_MSK    0x00000000
/* The reset value of the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD register field. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_RESET      0x0
/* Extracts the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD field value from a register. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD register field value suitable for setting the register. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND.
 */
struct ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_s
{
    volatile uint32_t  TPD : 32;  /* ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_TPD */
};

/* The typedef declaration for register ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND. */
typedef struct ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_s  ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND register. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND register from the beginning of the component. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_OFST        0x4
/* The address of the ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND register. */
#define ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_OFST))

/*
 * Register : Receive_Poll_Demand
 * 
 * <b>Register 2 (Receive Poll Demand Register) </b>
 * 
 * The Receive Poll Demand register enables the receive DMA to check for new
 * descriptors. This command is used to wake up the Rx DMA from the SUSPEND state.
 * The RxDMA can go into the SUSPEND state only because of the unavailability of
 * descriptors it owns. When this register is read, it always returns zero.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD
 * 
 */
/*
 * Field : RPD
 * 
 * Receive Poll Demand
 * 
 * When these bits are written with any value, the DMA reads the current descriptor
 * pointed to by Register 19 (Current Host Receive Descriptor Register). If that
 * descriptor is not available (owned by the Host), the reception returns to the
 * Suspended state and the Bit 7 (RU) of Register 5 (Status Register) is not
 * asserted. If the descriptor is available, the Rx DMA returns to the active
 * state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD register field. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD register field. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_MSB        31
/* The width in bits of the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD register field. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_WIDTH      32
/* The mask used to set the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD register field value. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD register field value. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_CLR_MSK    0x00000000
/* The reset value of the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD register field. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_RESET      0x0
/* Extracts the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD field value from a register. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD register field value suitable for setting the register. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_RECEIVE_POLL_DEMAND.
 */
struct ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_s
{
    volatile uint32_t  RPD : 32;  /* ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RPD */
};

/* The typedef declaration for register ALT_EMAC_DMA_RECEIVE_POLL_DEMAND. */
typedef struct ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_s  ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND register. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND register from the beginning of the component. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_OFST        0x8
/* The address of the ALT_EMAC_DMA_RECEIVE_POLL_DEMAND register. */
#define ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_OFST))

/*
 * Register : Receive_Descriptor_List_Address
 * 
 * <b>Register 3 (Receive Descriptor List Address Register) </b>
 * 
 * The Receive Descriptor List Address register points to the start of the Receive
 * Descriptor List. The descriptor lists reside in the host's physical memory space
 * and must be Word, Dword, or Lword-aligned (for 32-bit, 64-bit, or 128-bit data
 * bus). The DMA internally converts it to bus width aligned address by making the
 * corresponding LS bits low. Writing to this register is permitted only when
 * reception is stopped. When stopped, this register must be written to before the
 * receive Start command is given.
 * 
 * You can write to this register only when Rx DMA has stopped, that is, Bit 1 (SR)
 * is set to zero in Register 6 (Operation Mode Register). When stopped, this
 * register can be written with a new descriptor list address. When you set the SR
 * bit to 1, the DMA takes the newly programmed descriptor base address.
 * 
 * If this register is not changed when the SR bit is set to 0, then the DMA takes
 * the descriptor address where it was stopped earlier.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                              
 * :-------|:-------|:------|:----------------------------------------------------------
 *  [1:0]  | R      | 0x0   | ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0
 *  [31:2] | RW     | 0x0   | ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT
 * 
 */
/*
 * Field : Reserved_1_0
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_MSB        1
/* The width in bits of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field value. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_SET_MSK    0x00000003
/* The mask used to clear the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field value. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_RESET      0x0
/* Extracts the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 field value from a register. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : RDESLA_32bit
 * 
 * Start of Receive List
 * 
 * This field contains the base address of the first descriptor in the Receive
 * Descriptor list. The LSB bits (1:0) for 32-bit bus width are ignored and
 * internally taken as all-zero by the DMA. Therefore, these LSB bits are read-only
 * (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_MSB        31
/* The width in bits of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_WIDTH      30
/* The mask used to set the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT register field value. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT register field value. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_CLR_MSK    0x00000003
/* The reset value of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT register field. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT field value from a register. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT_SET(value) (((value) << 2) & 0xfffffffc)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS.
 */
struct ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_s
{
    const volatile uint32_t  Reserved_1_0 :  2;  /* ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 */
    volatile uint32_t        RDESLA_32bit : 30;  /* ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RDESLA_32BIT */
};

/* The typedef declaration for register ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS. */
typedef struct ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_s  ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS register. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS register from the beginning of the component. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_OFST        0xc
/* The address of the ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS register. */
#define ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_OFST))

/*
 * Register : Transmit_Descriptor_List_Address
 * 
 * <b>Register 4 (Transmit Descriptor List Address Register)</b>
 * 
 * The Transmit Descriptor List Address register points to the start of the
 * Transmit Descriptor List. The descriptor lists reside in the host's physical
 * memory space and must be Word, Dword, or Lword-aligned (for 32-bit, 64-bit, or
 * 128-bit data bus). The DMA internally converts it to bus width aligned address
 * by making the corresponding LSB to low.
 * 
 * You can write to this register only when the Tx DMA has stopped, that is, Bit 13
 * (ST) is set to zero in Register 6 (Operation Mode Register). When stopped, this
 * register can be written with a new descriptor list address. When you set the ST
 * bit to 1, the DMA takes the newly programmed descriptor base address.
 * 
 * If this register is not changed when the ST bit is set to 0, then the DMA takes
 * the descriptor address where it was stopped earlier.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                               
 * :-------|:-------|:------|:-----------------------------------------------------------
 *  [1:0]  | R      | 0x0   | ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0
 *  [31:2] | RW     | 0x0   | ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT
 * 
 */
/*
 * Field : Reserved_1_0
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_MSB        1
/* The width in bits of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field value. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_SET_MSK    0x00000003
/* The mask used to clear the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field value. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_RESET      0x0
/* Extracts the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 field value from a register. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : TDESLA_32bit
 * 
 * Start of Transmit List
 * 
 * This field contains the base address of the first descriptor in the Transmit
 * Descriptor list. The LSB bits (1:0) for 32-bit bus width are ignored and are
 * internally taken as all-zero by the DMA. Therefore, these LSB bits are read-only
 * (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_MSB        31
/* The width in bits of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_WIDTH      30
/* The mask used to set the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT register field value. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT register field value. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_CLR_MSK    0x00000003
/* The reset value of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT register field. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT field value from a register. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT_SET(value) (((value) << 2) & 0xfffffffc)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS.
 */
struct ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_s
{
    const volatile uint32_t  Reserved_1_0 :  2;  /* ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESERVED_1_0 */
    volatile uint32_t        TDESLA_32bit : 30;  /* ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_TDESLA_32BIT */
};

/* The typedef declaration for register ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS. */
typedef struct ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_s  ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS register. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS register from the beginning of the component. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_OFST        0x10
/* The address of the ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS register. */
#define ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_OFST))

/*
 * Register : Status
 * 
 * <b>Register 5 (Status Register) </b>
 * 
 * The Status register contains all status bits that the DMA reports to the host.
 * The Software driver reads this register during an interrupt service routine or
 * polling. Most of the fields in this register cause the host to be interrupted.
 * The bits of this register are not cleared when read. Writing 1'b1 to
 * (unreserved) Bits[16:0] of this register clears these bits and writing 1'b0 has
 * no effect. Each field (Bits[16:0]) can be masked by masking the appropriate bit
 * in Register 7 (Interrupt Enable Register).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [0]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_TI            
 *  [1]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_TPS           
 *  [2]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_TU            
 *  [3]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_TJT           
 *  [4]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_OVF           
 *  [5]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_UNF           
 *  [6]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_RI            
 *  [7]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_RU            
 *  [8]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_RPS           
 *  [9]     | RW     | 0x0   | ALT_EMAC_DMA_STATUS_RWT           
 *  [10]    | RW     | 0x0   | ALT_EMAC_DMA_STATUS_ETI           
 *  [12:11] | R      | 0x0   | ALT_EMAC_DMA_STATUS_RESERVED_12_11
 *  [13]    | RW     | 0x0   | ALT_EMAC_DMA_STATUS_FBI           
 *  [14]    | RW     | 0x0   | ALT_EMAC_DMA_STATUS_ERI           
 *  [15]    | RW     | 0x0   | ALT_EMAC_DMA_STATUS_AIS           
 *  [16]    | RW     | 0x0   | ALT_EMAC_DMA_STATUS_NIS           
 *  [19:17] | R      | 0x0   | ALT_EMAC_DMA_STATUS_RS            
 *  [22:20] | R      | 0x0   | ALT_EMAC_DMA_STATUS_TS            
 *  [25:23] | R      | 0x0   | ALT_EMAC_DMA_STATUS_EB            
 *  [26]    | R      | 0x0   | ALT_EMAC_DMA_STATUS_GLI           
 *  [27]    | R      | 0x0   | ALT_EMAC_DMA_STATUS_GMI           
 *  [28]    | R      | 0x0   | ALT_EMAC_DMA_STATUS_GPI           
 *  [29]    | R      | 0x0   | ALT_EMAC_DMA_STATUS_TTI           
 *  [30]    | R      | 0x0   | ALT_EMAC_DMA_STATUS_GLPII         
 *  [31]    | R      | 0x0   | ALT_EMAC_DMA_STATUS_RESERVED_31   
 * 
 */
/*
 * Field : TI
 * 
 * Transmit Interrupt
 * 
 * This bit indicates that the frame transmission is complete. When transmission is
 * complete, Bit 31 (OWN) of TDES0 is reset, and the specific frame status
 * information is updated in the descriptor.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_TI register field. */
#define ALT_EMAC_DMA_STATUS_TI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_TI register field. */
#define ALT_EMAC_DMA_STATUS_TI_MSB        0
/* The width in bits of the ALT_EMAC_DMA_STATUS_TI register field. */
#define ALT_EMAC_DMA_STATUS_TI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_TI register field value. */
#define ALT_EMAC_DMA_STATUS_TI_SET_MSK    0x00000001
/* The mask used to clear the ALT_EMAC_DMA_STATUS_TI register field value. */
#define ALT_EMAC_DMA_STATUS_TI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_EMAC_DMA_STATUS_TI register field. */
#define ALT_EMAC_DMA_STATUS_TI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_TI field value from a register. */
#define ALT_EMAC_DMA_STATUS_TI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_EMAC_DMA_STATUS_TI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_TI_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TPS
 * 
 * Transmit Process Stopped
 * 
 * This bit is set when the transmission is stopped.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_TPS register field. */
#define ALT_EMAC_DMA_STATUS_TPS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_TPS register field. */
#define ALT_EMAC_DMA_STATUS_TPS_MSB        1
/* The width in bits of the ALT_EMAC_DMA_STATUS_TPS register field. */
#define ALT_EMAC_DMA_STATUS_TPS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_TPS register field value. */
#define ALT_EMAC_DMA_STATUS_TPS_SET_MSK    0x00000002
/* The mask used to clear the ALT_EMAC_DMA_STATUS_TPS register field value. */
#define ALT_EMAC_DMA_STATUS_TPS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_EMAC_DMA_STATUS_TPS register field. */
#define ALT_EMAC_DMA_STATUS_TPS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_TPS field value from a register. */
#define ALT_EMAC_DMA_STATUS_TPS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_EMAC_DMA_STATUS_TPS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_TPS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TU
 * 
 * Transmit Buffer Unavailable
 * 
 * This bit indicates that the host owns the Next Descriptor in the Transmit List
 * and the DMA cannot acquire it. Transmission is suspended. Bits[22:20] explain
 * the Transmit Process state transitions.
 * 
 * To resume processing Transmit descriptors, the host should change the ownership
 * of the descriptor by setting TDES0[31] and then issue a Transmit Poll Demand
 * command.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_TU register field. */
#define ALT_EMAC_DMA_STATUS_TU_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_TU register field. */
#define ALT_EMAC_DMA_STATUS_TU_MSB        2
/* The width in bits of the ALT_EMAC_DMA_STATUS_TU register field. */
#define ALT_EMAC_DMA_STATUS_TU_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_TU register field value. */
#define ALT_EMAC_DMA_STATUS_TU_SET_MSK    0x00000004
/* The mask used to clear the ALT_EMAC_DMA_STATUS_TU register field value. */
#define ALT_EMAC_DMA_STATUS_TU_CLR_MSK    0xfffffffb
/* The reset value of the ALT_EMAC_DMA_STATUS_TU register field. */
#define ALT_EMAC_DMA_STATUS_TU_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_TU field value from a register. */
#define ALT_EMAC_DMA_STATUS_TU_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_EMAC_DMA_STATUS_TU register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_TU_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : TJT
 * 
 * Transmit Jabber Timeout
 * 
 * This bit indicates that the Transmit Jabber Timer expired, which happens when
 * the frame size exceeds 2,048 (10,240 bytes when the Jumbo frame is enabled).
 * When the Jabber Timeout occurs, the transmission process is aborted and placed
 * in the Stopped state. This causes the Transmit Jabber Timeout TDES0[14] flag to
 * assert.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_TJT register field. */
#define ALT_EMAC_DMA_STATUS_TJT_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_TJT register field. */
#define ALT_EMAC_DMA_STATUS_TJT_MSB        3
/* The width in bits of the ALT_EMAC_DMA_STATUS_TJT register field. */
#define ALT_EMAC_DMA_STATUS_TJT_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_TJT register field value. */
#define ALT_EMAC_DMA_STATUS_TJT_SET_MSK    0x00000008
/* The mask used to clear the ALT_EMAC_DMA_STATUS_TJT register field value. */
#define ALT_EMAC_DMA_STATUS_TJT_CLR_MSK    0xfffffff7
/* The reset value of the ALT_EMAC_DMA_STATUS_TJT register field. */
#define ALT_EMAC_DMA_STATUS_TJT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_TJT field value from a register. */
#define ALT_EMAC_DMA_STATUS_TJT_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_EMAC_DMA_STATUS_TJT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_TJT_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : OVF
 * 
 * Receive Overflow
 * 
 * This bit indicates that the Receive Buffer had an Overflow during frame
 * reception. If the partial frame is transferred to the application, the overflow
 * status is set in RDES0[11].
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_OVF register field. */
#define ALT_EMAC_DMA_STATUS_OVF_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_OVF register field. */
#define ALT_EMAC_DMA_STATUS_OVF_MSB        4
/* The width in bits of the ALT_EMAC_DMA_STATUS_OVF register field. */
#define ALT_EMAC_DMA_STATUS_OVF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_OVF register field value. */
#define ALT_EMAC_DMA_STATUS_OVF_SET_MSK    0x00000010
/* The mask used to clear the ALT_EMAC_DMA_STATUS_OVF register field value. */
#define ALT_EMAC_DMA_STATUS_OVF_CLR_MSK    0xffffffef
/* The reset value of the ALT_EMAC_DMA_STATUS_OVF register field. */
#define ALT_EMAC_DMA_STATUS_OVF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_OVF field value from a register. */
#define ALT_EMAC_DMA_STATUS_OVF_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_EMAC_DMA_STATUS_OVF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_OVF_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : UNF
 * 
 * Transmit Underflow
 * 
 * This bit indicates that the Transmit Buffer had an Underflow during frame
 * transmission. Transmission is suspended and an Underflow Error TDES0[1] is set.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_UNF register field. */
#define ALT_EMAC_DMA_STATUS_UNF_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_UNF register field. */
#define ALT_EMAC_DMA_STATUS_UNF_MSB        5
/* The width in bits of the ALT_EMAC_DMA_STATUS_UNF register field. */
#define ALT_EMAC_DMA_STATUS_UNF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_UNF register field value. */
#define ALT_EMAC_DMA_STATUS_UNF_SET_MSK    0x00000020
/* The mask used to clear the ALT_EMAC_DMA_STATUS_UNF register field value. */
#define ALT_EMAC_DMA_STATUS_UNF_CLR_MSK    0xffffffdf
/* The reset value of the ALT_EMAC_DMA_STATUS_UNF register field. */
#define ALT_EMAC_DMA_STATUS_UNF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_UNF field value from a register. */
#define ALT_EMAC_DMA_STATUS_UNF_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_EMAC_DMA_STATUS_UNF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_UNF_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RI
 * 
 * Receive Interrupt
 * 
 * This bit indicates that the frame reception is complete. When reception is
 * complete, the Bit 31 of RDES1 (Disable Interrupt on Completion) is reset in the
 * last Descriptor, and the specific frame status information is updated in the
 * descriptor.
 * 
 * The reception remains in the Running state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_RI register field. */
#define ALT_EMAC_DMA_STATUS_RI_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_RI register field. */
#define ALT_EMAC_DMA_STATUS_RI_MSB        6
/* The width in bits of the ALT_EMAC_DMA_STATUS_RI register field. */
#define ALT_EMAC_DMA_STATUS_RI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_RI register field value. */
#define ALT_EMAC_DMA_STATUS_RI_SET_MSK    0x00000040
/* The mask used to clear the ALT_EMAC_DMA_STATUS_RI register field value. */
#define ALT_EMAC_DMA_STATUS_RI_CLR_MSK    0xffffffbf
/* The reset value of the ALT_EMAC_DMA_STATUS_RI register field. */
#define ALT_EMAC_DMA_STATUS_RI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_RI field value from a register. */
#define ALT_EMAC_DMA_STATUS_RI_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_EMAC_DMA_STATUS_RI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_RI_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RU
 * 
 * Receive Buffer Unavailable
 * 
 * This bit indicates that the host owns the Next Descriptor in the Receive List
 * and the DMA cannot acquire it. The Receive Process is suspended. To resume
 * processing Receive descriptors, the host should change the ownership of the
 * descriptor and issue a Receive Poll Demand command. If no Receive Poll Demand is
 * issued, the Receive Process resumes when the next recognized incoming frame is
 * received. This bit is set only when the previous Receive Descriptor is owned by
 * the DMA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_RU register field. */
#define ALT_EMAC_DMA_STATUS_RU_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_RU register field. */
#define ALT_EMAC_DMA_STATUS_RU_MSB        7
/* The width in bits of the ALT_EMAC_DMA_STATUS_RU register field. */
#define ALT_EMAC_DMA_STATUS_RU_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_RU register field value. */
#define ALT_EMAC_DMA_STATUS_RU_SET_MSK    0x00000080
/* The mask used to clear the ALT_EMAC_DMA_STATUS_RU register field value. */
#define ALT_EMAC_DMA_STATUS_RU_CLR_MSK    0xffffff7f
/* The reset value of the ALT_EMAC_DMA_STATUS_RU register field. */
#define ALT_EMAC_DMA_STATUS_RU_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_RU field value from a register. */
#define ALT_EMAC_DMA_STATUS_RU_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_EMAC_DMA_STATUS_RU register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_RU_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RPS
 * 
 * Receive Process Stopped
 * 
 * This bit is asserted when the Receive Process enters the Stopped state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_RPS register field. */
#define ALT_EMAC_DMA_STATUS_RPS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_RPS register field. */
#define ALT_EMAC_DMA_STATUS_RPS_MSB        8
/* The width in bits of the ALT_EMAC_DMA_STATUS_RPS register field. */
#define ALT_EMAC_DMA_STATUS_RPS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_RPS register field value. */
#define ALT_EMAC_DMA_STATUS_RPS_SET_MSK    0x00000100
/* The mask used to clear the ALT_EMAC_DMA_STATUS_RPS register field value. */
#define ALT_EMAC_DMA_STATUS_RPS_CLR_MSK    0xfffffeff
/* The reset value of the ALT_EMAC_DMA_STATUS_RPS register field. */
#define ALT_EMAC_DMA_STATUS_RPS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_RPS field value from a register. */
#define ALT_EMAC_DMA_STATUS_RPS_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_EMAC_DMA_STATUS_RPS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_RPS_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : RWT
 * 
 * Receive Watchdog Timeout
 * 
 * When set, this bit indicates that the Receive Watchdog Timer expired while
 * receiving the current frame and the current frame is truncated after the
 * watchdog timeout.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_RWT register field. */
#define ALT_EMAC_DMA_STATUS_RWT_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_RWT register field. */
#define ALT_EMAC_DMA_STATUS_RWT_MSB        9
/* The width in bits of the ALT_EMAC_DMA_STATUS_RWT register field. */
#define ALT_EMAC_DMA_STATUS_RWT_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_RWT register field value. */
#define ALT_EMAC_DMA_STATUS_RWT_SET_MSK    0x00000200
/* The mask used to clear the ALT_EMAC_DMA_STATUS_RWT register field value. */
#define ALT_EMAC_DMA_STATUS_RWT_CLR_MSK    0xfffffdff
/* The reset value of the ALT_EMAC_DMA_STATUS_RWT register field. */
#define ALT_EMAC_DMA_STATUS_RWT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_RWT field value from a register. */
#define ALT_EMAC_DMA_STATUS_RWT_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_EMAC_DMA_STATUS_RWT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_RWT_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : ETI
 * 
 * Early Transmit Interrupt
 * 
 * This bit indicates that the frame to be transmitted is fully transferred to the
 * MTL Transmit FIFO.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_ETI register field. */
#define ALT_EMAC_DMA_STATUS_ETI_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_ETI register field. */
#define ALT_EMAC_DMA_STATUS_ETI_MSB        10
/* The width in bits of the ALT_EMAC_DMA_STATUS_ETI register field. */
#define ALT_EMAC_DMA_STATUS_ETI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_ETI register field value. */
#define ALT_EMAC_DMA_STATUS_ETI_SET_MSK    0x00000400
/* The mask used to clear the ALT_EMAC_DMA_STATUS_ETI register field value. */
#define ALT_EMAC_DMA_STATUS_ETI_CLR_MSK    0xfffffbff
/* The reset value of the ALT_EMAC_DMA_STATUS_ETI register field. */
#define ALT_EMAC_DMA_STATUS_ETI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_ETI field value from a register. */
#define ALT_EMAC_DMA_STATUS_ETI_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_EMAC_DMA_STATUS_ETI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_ETI_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Reserved_12_11
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_MSB        12
/* The width in bits of the ALT_EMAC_DMA_STATUS_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_STATUS_RESERVED_12_11 register field value. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_SET_MSK    0x00001800
/* The mask used to clear the ALT_EMAC_DMA_STATUS_RESERVED_12_11 register field value. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_CLR_MSK    0xffffe7ff
/* The reset value of the ALT_EMAC_DMA_STATUS_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_RESERVED_12_11 field value from a register. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_GET(value) (((value) & 0x00001800) >> 11)
/* Produces a ALT_EMAC_DMA_STATUS_RESERVED_12_11 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_RESERVED_12_11_SET(value) (((value) << 11) & 0x00001800)

/*
 * Field : FBI
 * 
 * Fatal Bus Error Interrupt
 * 
 * This bit indicates that a bus error occurred, as described in Bits[25:23]. When
 * this bit is set, the corresponding DMA engine disables all of its bus accesses.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_FBI register field. */
#define ALT_EMAC_DMA_STATUS_FBI_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_FBI register field. */
#define ALT_EMAC_DMA_STATUS_FBI_MSB        13
/* The width in bits of the ALT_EMAC_DMA_STATUS_FBI register field. */
#define ALT_EMAC_DMA_STATUS_FBI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_FBI register field value. */
#define ALT_EMAC_DMA_STATUS_FBI_SET_MSK    0x00002000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_FBI register field value. */
#define ALT_EMAC_DMA_STATUS_FBI_CLR_MSK    0xffffdfff
/* The reset value of the ALT_EMAC_DMA_STATUS_FBI register field. */
#define ALT_EMAC_DMA_STATUS_FBI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_FBI field value from a register. */
#define ALT_EMAC_DMA_STATUS_FBI_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_EMAC_DMA_STATUS_FBI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_FBI_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : ERI
 * 
 * Early Receive Interrupt
 * 
 * This bit indicates that the DMA filled the first data buffer of the packet. This
 * bit is cleared when the software writes 1 to this bit or Bit 6 (RI) of this
 * register is set (whichever occurs earlier).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_ERI register field. */
#define ALT_EMAC_DMA_STATUS_ERI_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_ERI register field. */
#define ALT_EMAC_DMA_STATUS_ERI_MSB        14
/* The width in bits of the ALT_EMAC_DMA_STATUS_ERI register field. */
#define ALT_EMAC_DMA_STATUS_ERI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_ERI register field value. */
#define ALT_EMAC_DMA_STATUS_ERI_SET_MSK    0x00004000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_ERI register field value. */
#define ALT_EMAC_DMA_STATUS_ERI_CLR_MSK    0xffffbfff
/* The reset value of the ALT_EMAC_DMA_STATUS_ERI register field. */
#define ALT_EMAC_DMA_STATUS_ERI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_ERI field value from a register. */
#define ALT_EMAC_DMA_STATUS_ERI_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_EMAC_DMA_STATUS_ERI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_ERI_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : AIS
 * 
 * Abnormal Interrupt Summary
 * 
 * Abnormal Interrupt Summary bit value is the logical OR of the following when the
 * corresponding interrupt bits are enabled in Register 7 (Interrupt Enable
 * Register):
 * 
 * * Register 5[1]: Transmit Process Stopped
 * 
 * * Register 5[3]: Transmit Jabber Timeout
 * 
 * * Register 5[4]: Receive FIFO Overflow
 * 
 * * Register 5[5]: Transmit Underflow
 * 
 * * Register 5[7]: Receive Buffer Unavailable
 * 
 * * Register 5[8]: Receive Process Stopped
 * 
 * * Register 5[9]: Receive Watchdog Timeout
 * 
 * * Register 5[10]: Early Transmit Interrupt
 * 
 * * Register 5[13]: Fatal Bus Error
 * 
 * Only unmasked bits affect the Abnormal Interrupt Summary bit.
 * 
 * This is a sticky bit and must be cleared each time a corresponding bit, which
 * causes AIS to be set, is cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_AIS register field. */
#define ALT_EMAC_DMA_STATUS_AIS_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_AIS register field. */
#define ALT_EMAC_DMA_STATUS_AIS_MSB        15
/* The width in bits of the ALT_EMAC_DMA_STATUS_AIS register field. */
#define ALT_EMAC_DMA_STATUS_AIS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_AIS register field value. */
#define ALT_EMAC_DMA_STATUS_AIS_SET_MSK    0x00008000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_AIS register field value. */
#define ALT_EMAC_DMA_STATUS_AIS_CLR_MSK    0xffff7fff
/* The reset value of the ALT_EMAC_DMA_STATUS_AIS register field. */
#define ALT_EMAC_DMA_STATUS_AIS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_AIS field value from a register. */
#define ALT_EMAC_DMA_STATUS_AIS_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_EMAC_DMA_STATUS_AIS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_AIS_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : NIS
 * 
 * Normal Interrupt Summary
 * 
 * Normal Interrupt Summary bit value is the logical OR of the following when the
 * corresponding interrupt bits are enabled in Register 7 (Interrupt Enable
 * Register):
 * 
 * * Register 5[0]: Transmit Interrupt
 * 
 * * Register 5[2]: Transmit Buffer Unavailable
 * 
 * * Register 5[6]: Receive Interrupt
 * 
 * * Register 5[14]: Early Receive Interrupt
 * 
 * Only unmasked bits (interrupts for which interrupt enable is set in Register 7)
 * affect the Normal Interrupt Summary bit.
 * 
 * This is a sticky bit and must be cleared (by writing 1 to this bit) each time a
 * corresponding bit, which causes NIS to be set, is cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_NIS register field. */
#define ALT_EMAC_DMA_STATUS_NIS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_NIS register field. */
#define ALT_EMAC_DMA_STATUS_NIS_MSB        16
/* The width in bits of the ALT_EMAC_DMA_STATUS_NIS register field. */
#define ALT_EMAC_DMA_STATUS_NIS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_NIS register field value. */
#define ALT_EMAC_DMA_STATUS_NIS_SET_MSK    0x00010000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_NIS register field value. */
#define ALT_EMAC_DMA_STATUS_NIS_CLR_MSK    0xfffeffff
/* The reset value of the ALT_EMAC_DMA_STATUS_NIS register field. */
#define ALT_EMAC_DMA_STATUS_NIS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_NIS field value from a register. */
#define ALT_EMAC_DMA_STATUS_NIS_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_EMAC_DMA_STATUS_NIS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_NIS_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RS
 * 
 * Received Process State
 * 
 * This field indicates the Receive DMA FSM state. This field does not generate an
 * interrupt.
 * 
 * * 3'b000: Stopped: Reset or Stop Receive Command issued
 * 
 * * 3'b001: Running: Fetching Receive Transfer Descriptor
 * 
 * * 3'b010: Reserved for future use
 * 
 * * 3'b011: Running: Waiting for receive packet
 * 
 * * 3'b100: Suspended: Receive Descriptor Unavailable
 * 
 * * 3'b101: Running: Closing Receive Descriptor
 * 
 * * 3'b110: TIME_STAMP write state
 * 
 * * 3'b111: Running: Transferring the receive packet data from receive buffer to
 *   host memory
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_RS register field. */
#define ALT_EMAC_DMA_STATUS_RS_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_RS register field. */
#define ALT_EMAC_DMA_STATUS_RS_MSB        19
/* The width in bits of the ALT_EMAC_DMA_STATUS_RS register field. */
#define ALT_EMAC_DMA_STATUS_RS_WIDTH      3
/* The mask used to set the ALT_EMAC_DMA_STATUS_RS register field value. */
#define ALT_EMAC_DMA_STATUS_RS_SET_MSK    0x000e0000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_RS register field value. */
#define ALT_EMAC_DMA_STATUS_RS_CLR_MSK    0xfff1ffff
/* The reset value of the ALT_EMAC_DMA_STATUS_RS register field. */
#define ALT_EMAC_DMA_STATUS_RS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_RS field value from a register. */
#define ALT_EMAC_DMA_STATUS_RS_GET(value) (((value) & 0x000e0000) >> 17)
/* Produces a ALT_EMAC_DMA_STATUS_RS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_RS_SET(value) (((value) << 17) & 0x000e0000)

/*
 * Field : TS
 * 
 * Transmit Process State
 * 
 * This field indicates the Transmit DMA FSM state. This field does not generate an
 * interrupt.
 * 
 * * 3'b000: Stopped; Reset or Stop Transmit Command issued
 * 
 * * 3'b001: Running; Fetching Transmit Transfer Descriptor
 * 
 * * 3'b010: Running; Waiting for status
 * 
 * * 3'b011: Running; Reading Data from host memory buffer and queuing it to
 *   transmit buffer (Tx FIFO)
 * 
 * * 3'b100: TIME_STAMP write state
 * 
 * * 3'b101: Reserved for future use
 * 
 * * 3'b110: Suspended; Transmit Descriptor Unavailable or Transmit Buffer
 *   Underflow
 * 
 * * 3'b111: Running; Closing Transmit Descriptor
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_TS register field. */
#define ALT_EMAC_DMA_STATUS_TS_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_TS register field. */
#define ALT_EMAC_DMA_STATUS_TS_MSB        22
/* The width in bits of the ALT_EMAC_DMA_STATUS_TS register field. */
#define ALT_EMAC_DMA_STATUS_TS_WIDTH      3
/* The mask used to set the ALT_EMAC_DMA_STATUS_TS register field value. */
#define ALT_EMAC_DMA_STATUS_TS_SET_MSK    0x00700000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_TS register field value. */
#define ALT_EMAC_DMA_STATUS_TS_CLR_MSK    0xff8fffff
/* The reset value of the ALT_EMAC_DMA_STATUS_TS register field. */
#define ALT_EMAC_DMA_STATUS_TS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_TS field value from a register. */
#define ALT_EMAC_DMA_STATUS_TS_GET(value) (((value) & 0x00700000) >> 20)
/* Produces a ALT_EMAC_DMA_STATUS_TS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_TS_SET(value) (((value) << 20) & 0x00700000)

/*
 * Field : EB
 * 
 * Error Bits
 * 
 * This field indicates the type of error that caused a Bus Error, for example,
 * error response on the AHB or AXI interface. This field is valid only when Bit 13
 * (FBI) is set. This field does not generate an interrupt.
 * 
 * * 0 0 0: Error during Rx DMA Write Data Transfer
 * 
 * * 0 1 1: Error during Tx DMA Read Data Transfer
 * 
 * * 1 0 0: Error during Rx DMA Descriptor Write Access
 * 
 * * 1 0 1: Error during Tx DMA Descriptor Write Access
 * 
 * * 1 1 0: Error during Rx DMA Descriptor Read Access
 * 
 * * 1 1 1: Error during Tx DMA Descriptor Read Access
 * 
 * Note: 001 and 010 are reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_EB register field. */
#define ALT_EMAC_DMA_STATUS_EB_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_EB register field. */
#define ALT_EMAC_DMA_STATUS_EB_MSB        25
/* The width in bits of the ALT_EMAC_DMA_STATUS_EB register field. */
#define ALT_EMAC_DMA_STATUS_EB_WIDTH      3
/* The mask used to set the ALT_EMAC_DMA_STATUS_EB register field value. */
#define ALT_EMAC_DMA_STATUS_EB_SET_MSK    0x03800000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_EB register field value. */
#define ALT_EMAC_DMA_STATUS_EB_CLR_MSK    0xfc7fffff
/* The reset value of the ALT_EMAC_DMA_STATUS_EB register field. */
#define ALT_EMAC_DMA_STATUS_EB_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_EB field value from a register. */
#define ALT_EMAC_DMA_STATUS_EB_GET(value) (((value) & 0x03800000) >> 23)
/* Produces a ALT_EMAC_DMA_STATUS_EB register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_EB_SET(value) (((value) << 23) & 0x03800000)

/*
 * Field : GLI
 * 
 * GMAC Line interface Interrupt
 * 
 * When set, this bit reflects any of the following interrupt events in the
 * DWC_gmac
 * 
 * interfaces (if present and enabled in your configuration):
 * 
 * * PCS (TBI, RTBI, or SGMII): Link change or auto-negotiation complete event
 * 
 * * SMII or RGMII: Link change event
 * 
 * * General Purpose Input Status (GPIS): Any LL or LH event on the gpi_i input
 *   ports
 * 
 * To identify the exact cause of the interrupt, the software must first read Bit
 * 11 and Bits[2:0] of Register 14 (Interrupt Status Register) and then to clear
 * the source of interrupt (which also clears the GLI interrupt), read any of the
 * following corresponding registers:
 * 
 * * PCS (TBI, RTBI, or SGMII): Register 49 (AN Status Register)
 * 
 * * SMII or RGMII: Register 54 (SGMII/RGMII/SMII Status Register)
 * 
 * * General Purpose Input (GPI): Register 56 (General Purpose IO Register)
 * 
 * The interrupt signal from the DWC_gmac subsystem (sbd_intr_o) is high when this
 * bit is high.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_GLI register field. */
#define ALT_EMAC_DMA_STATUS_GLI_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_GLI register field. */
#define ALT_EMAC_DMA_STATUS_GLI_MSB        26
/* The width in bits of the ALT_EMAC_DMA_STATUS_GLI register field. */
#define ALT_EMAC_DMA_STATUS_GLI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_GLI register field value. */
#define ALT_EMAC_DMA_STATUS_GLI_SET_MSK    0x04000000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_GLI register field value. */
#define ALT_EMAC_DMA_STATUS_GLI_CLR_MSK    0xfbffffff
/* The reset value of the ALT_EMAC_DMA_STATUS_GLI register field. */
#define ALT_EMAC_DMA_STATUS_GLI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_GLI field value from a register. */
#define ALT_EMAC_DMA_STATUS_GLI_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_EMAC_DMA_STATUS_GLI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_GLI_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : GMI
 * 
 * GMAC MMC Interrupt
 * 
 * This bit reflects an interrupt event in the MMC module of the DWC_gmac. The
 * software must read the corresponding registers in the DWC_gmac to get the exact
 * cause of interrupt and clear the source of interrupt to make this bit as 1'b0.
 * The interrupt signal from the DWC_gmac subsystem (sbd_intr_o) is high when this
 * bit is high.
 * 
 * This bit is applicable only when the MAC Management Counters (MMC) are enabled.
 * Otherwise, this bit is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_GMI register field. */
#define ALT_EMAC_DMA_STATUS_GMI_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_GMI register field. */
#define ALT_EMAC_DMA_STATUS_GMI_MSB        27
/* The width in bits of the ALT_EMAC_DMA_STATUS_GMI register field. */
#define ALT_EMAC_DMA_STATUS_GMI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_GMI register field value. */
#define ALT_EMAC_DMA_STATUS_GMI_SET_MSK    0x08000000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_GMI register field value. */
#define ALT_EMAC_DMA_STATUS_GMI_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_EMAC_DMA_STATUS_GMI register field. */
#define ALT_EMAC_DMA_STATUS_GMI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_GMI field value from a register. */
#define ALT_EMAC_DMA_STATUS_GMI_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_EMAC_DMA_STATUS_GMI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_GMI_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : GPI
 * 
 * GMAC PMT Interrupt
 * 
 * This bit indicates an interrupt event in the PMT module of the DWC_gmac. The
 * software must read the PMT Control and Status Register in the MAC to get the
 * exact cause of interrupt and clear its source to reset this bit to 1'b0. The
 * interrupt signal from the DWC_gmac subsystem (sbd_intr_o) is high when this bit
 * is high.
 * 
 * This bit is applicable only when the Power Management feature is enabled.
 * Otherwise, this bit is reserved.
 * 
 * Note: The GPI and pmt_intr_o interrupts are generated in different clock
 * domains.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_GPI register field. */
#define ALT_EMAC_DMA_STATUS_GPI_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_GPI register field. */
#define ALT_EMAC_DMA_STATUS_GPI_MSB        28
/* The width in bits of the ALT_EMAC_DMA_STATUS_GPI register field. */
#define ALT_EMAC_DMA_STATUS_GPI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_GPI register field value. */
#define ALT_EMAC_DMA_STATUS_GPI_SET_MSK    0x10000000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_GPI register field value. */
#define ALT_EMAC_DMA_STATUS_GPI_CLR_MSK    0xefffffff
/* The reset value of the ALT_EMAC_DMA_STATUS_GPI register field. */
#define ALT_EMAC_DMA_STATUS_GPI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_GPI field value from a register. */
#define ALT_EMAC_DMA_STATUS_GPI_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_EMAC_DMA_STATUS_GPI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_GPI_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : TTI
 * 
 * Timestamp Trigger Interrupt
 * 
 * This bit indicates an interrupt event in the Timestamp Generator block of
 * DWC_gmac. The software must read the corresponding registers in the DWC_gmac to
 * get the exact cause of interrupt and clear its source to reset this bit to 1'b0.
 * When this bit is high, the interrupt signal from the DWC_gmac subsystem
 * (sbd_intr_o) is high.
 * 
 * This bit is applicable only when the IEEE 1588 Timestamp feature is enabled.
 * Otherwise, this bit is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_TTI register field. */
#define ALT_EMAC_DMA_STATUS_TTI_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_TTI register field. */
#define ALT_EMAC_DMA_STATUS_TTI_MSB        29
/* The width in bits of the ALT_EMAC_DMA_STATUS_TTI register field. */
#define ALT_EMAC_DMA_STATUS_TTI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_TTI register field value. */
#define ALT_EMAC_DMA_STATUS_TTI_SET_MSK    0x20000000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_TTI register field value. */
#define ALT_EMAC_DMA_STATUS_TTI_CLR_MSK    0xdfffffff
/* The reset value of the ALT_EMAC_DMA_STATUS_TTI register field. */
#define ALT_EMAC_DMA_STATUS_TTI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_TTI field value from a register. */
#define ALT_EMAC_DMA_STATUS_TTI_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_EMAC_DMA_STATUS_TTI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_TTI_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : GLPII
 * 
 * GMAC LPI Interrupt (for Channel 0)
 * 
 * This bit indicates an interrupt event in the LPI logic of the DWC_gmac. To reset
 * this bit to 1'b0, the software must read the corresponding registers in the
 * DWC_gmac to get the exact cause of the interrupt and clear its source.
 * 
 * Note: GLPII status is given only in Channel 0 DMA register and is applicable
 * only when the Energy Efficient Ethernet feature is enabled. Otherwise, this bit
 * is reserved.When this bit is high, the interrupt signal from the MAC
 * (sbd_intr_o) is high.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_GLPII register field. */
#define ALT_EMAC_DMA_STATUS_GLPII_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_GLPII register field. */
#define ALT_EMAC_DMA_STATUS_GLPII_MSB        30
/* The width in bits of the ALT_EMAC_DMA_STATUS_GLPII register field. */
#define ALT_EMAC_DMA_STATUS_GLPII_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_GLPII register field value. */
#define ALT_EMAC_DMA_STATUS_GLPII_SET_MSK    0x40000000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_GLPII register field value. */
#define ALT_EMAC_DMA_STATUS_GLPII_CLR_MSK    0xbfffffff
/* The reset value of the ALT_EMAC_DMA_STATUS_GLPII register field. */
#define ALT_EMAC_DMA_STATUS_GLPII_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_GLPII field value from a register. */
#define ALT_EMAC_DMA_STATUS_GLPII_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_EMAC_DMA_STATUS_GLPII register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_GLPII_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : Reserved_31
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_STATUS_RESERVED_31 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_STATUS_RESERVED_31 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_MSB        31
/* The width in bits of the ALT_EMAC_DMA_STATUS_RESERVED_31 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_STATUS_RESERVED_31 register field value. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_SET_MSK    0x80000000
/* The mask used to clear the ALT_EMAC_DMA_STATUS_RESERVED_31 register field value. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_CLR_MSK    0x7fffffff
/* The reset value of the ALT_EMAC_DMA_STATUS_RESERVED_31 register field. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_RESET      0x0
/* Extracts the ALT_EMAC_DMA_STATUS_RESERVED_31 field value from a register. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_EMAC_DMA_STATUS_RESERVED_31 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_STATUS_RESERVED_31_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_STATUS.
 */
struct ALT_EMAC_DMA_STATUS_s
{
    volatile uint32_t        TI             :  1;  /* ALT_EMAC_DMA_STATUS_TI */
    volatile uint32_t        TPS            :  1;  /* ALT_EMAC_DMA_STATUS_TPS */
    volatile uint32_t        TU             :  1;  /* ALT_EMAC_DMA_STATUS_TU */
    volatile uint32_t        TJT            :  1;  /* ALT_EMAC_DMA_STATUS_TJT */
    volatile uint32_t        OVF            :  1;  /* ALT_EMAC_DMA_STATUS_OVF */
    volatile uint32_t        UNF            :  1;  /* ALT_EMAC_DMA_STATUS_UNF */
    volatile uint32_t        RI             :  1;  /* ALT_EMAC_DMA_STATUS_RI */
    volatile uint32_t        RU             :  1;  /* ALT_EMAC_DMA_STATUS_RU */
    volatile uint32_t        RPS            :  1;  /* ALT_EMAC_DMA_STATUS_RPS */
    volatile uint32_t        RWT            :  1;  /* ALT_EMAC_DMA_STATUS_RWT */
    volatile uint32_t        ETI            :  1;  /* ALT_EMAC_DMA_STATUS_ETI */
    const volatile uint32_t  Reserved_12_11 :  2;  /* ALT_EMAC_DMA_STATUS_RESERVED_12_11 */
    volatile uint32_t        FBI            :  1;  /* ALT_EMAC_DMA_STATUS_FBI */
    volatile uint32_t        ERI            :  1;  /* ALT_EMAC_DMA_STATUS_ERI */
    volatile uint32_t        AIS            :  1;  /* ALT_EMAC_DMA_STATUS_AIS */
    volatile uint32_t        NIS            :  1;  /* ALT_EMAC_DMA_STATUS_NIS */
    const volatile uint32_t  RS             :  3;  /* ALT_EMAC_DMA_STATUS_RS */
    const volatile uint32_t  TS             :  3;  /* ALT_EMAC_DMA_STATUS_TS */
    const volatile uint32_t  EB             :  3;  /* ALT_EMAC_DMA_STATUS_EB */
    const volatile uint32_t  GLI            :  1;  /* ALT_EMAC_DMA_STATUS_GLI */
    const volatile uint32_t  GMI            :  1;  /* ALT_EMAC_DMA_STATUS_GMI */
    const volatile uint32_t  GPI            :  1;  /* ALT_EMAC_DMA_STATUS_GPI */
    const volatile uint32_t  TTI            :  1;  /* ALT_EMAC_DMA_STATUS_TTI */
    const volatile uint32_t  GLPII          :  1;  /* ALT_EMAC_DMA_STATUS_GLPII */
    const volatile uint32_t  Reserved_31    :  1;  /* ALT_EMAC_DMA_STATUS_RESERVED_31 */
};

/* The typedef declaration for register ALT_EMAC_DMA_STATUS. */
typedef struct ALT_EMAC_DMA_STATUS_s  ALT_EMAC_DMA_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_STATUS register. */
#define ALT_EMAC_DMA_STATUS_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_STATUS register from the beginning of the component. */
#define ALT_EMAC_DMA_STATUS_OFST        0x14
/* The address of the ALT_EMAC_DMA_STATUS register. */
#define ALT_EMAC_DMA_STATUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_STATUS_OFST))

/*
 * Register : Operation_Mode
 * 
 * <b> Register 6 (Operation Mode Register) </b>
 * 
 * The Operation Mode register establishes the Transmit and Receive operating modes
 * and commands. This register should be the last CSR to be written as part of the
 * DMA initialization. This register is also present in the GMAC-MTL configuration
 * with unused and reserved bits 24, 13, 2, and 1.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [0]     | R      | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0    
 *  [1]     | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_SR            
 *  [2]     | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_OSF           
 *  [4:3]   | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RTC           
 *  [5]     | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_DGF           
 *  [6]     | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_FUF           
 *  [7]     | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_FEF           
 *  [8]     | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_EFC           
 *  [10:9]  | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RFA           
 *  [12:11] | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RFD           
 *  [13]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_ST            
 *  [16:14] | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_TTC           
 *  [19:17] | R      | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17
 *  [20]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_FTF           
 *  [21]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_TSF           
 *  [22]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RFD_2         
 *  [23]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RFA_2         
 *  [24]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_DFF           
 *  [25]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RSF           
 *  [26]    | RW     | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_DT            
 *  [31:27] | R      | 0x0   | ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27
 * 
 */
/*
 * Field : Reserved_0
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_MSB        0
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : SR
 * 
 * Start or Stop Receive
 * 
 * When this bit is set, the Receive process is placed in the Running state. The
 * DMA attempts to acquire the descriptor from the Receive list and processes the
 * incoming frames. The descriptor acquisition is attempted from the current
 * position in the list, which is the address set by Register 3 (Receive Descriptor
 * List Address Register) or the position retained when the Receive process was
 * previously stopped. If the DMA does not own the descriptor, reception is
 * suspended and Bit 7 (Receive Buffer Unavailable) of Register 5 (Status Register)
 * is set. The Start Receive command is effective only when the reception has
 * stopped. If the command is issued before setting Register 3 (Receive Descriptor
 * List Address Register), the DMA behavior is unpredictable.
 * 
 * When this bit is cleared, the Rx DMA operation is stopped after the transfer of
 * the current frame. The next descriptor position in the Receive list is saved and
 * becomes the current position after the Receive process is restarted. The Stop
 * Receive command is effective only when the Receive process is in either the
 * Running (waiting for receive packet) or in the Suspended state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_SR register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_SR register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_MSB        1
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_SR register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_SR register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_SET_MSK    0x00000002
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_SR register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_SR register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_SR field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_SR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_SR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : OSF
 * 
 * Operate on Second Frame
 * 
 * When this bit is set, it instructs the DMA to process the second frame of the
 * Transmit data even before the status for the first frame is obtained.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_OSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_OSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_MSB        2
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_OSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_OSF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_SET_MSK    0x00000004
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_OSF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_CLR_MSK    0xfffffffb
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_OSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_OSF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_OSF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_OSF_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : RTC
 * 
 * Receive Threshold Control
 * 
 * These two bits control the threshold level of the MTL Receive FIFO. Transfer
 * (request) to DMA starts when the frame size within the MTL Receive FIFO is
 * larger than the threshold. In addition, full frames with length less than the
 * threshold are transferred automatically.
 * 
 * The value of 11 is not applicable if the configured Receive FIFO size is 128
 * bytes. These bits are valid only when the RSF bit is zero, and are ignored when
 * the RSF bit is set to 1.
 * 
 * * 00: 64
 * 
 * * 01: 32
 * 
 * * 10: 96
 * 
 * * 11: 128
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_MSB        4
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RTC register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_SET_MSK    0x00000018
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RTC register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_CLR_MSK    0xffffffe7
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RTC field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_GET(value) (((value) & 0x00000018) >> 3)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RTC register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RTC_SET(value) (((value) << 3) & 0x00000018)

/*
 * Field : DGF
 * 
 * Drop Giant Frames
 * 
 * When set, the MAC drops the received giant frames in the Rx FIFO, that is,
 * frames that are larger than the computed giant frame limit. When reset, the MAC
 * does not drop the giant frames in the Rx FIFO.
 * 
 * Note: This bit is available in the following configurations in which the giant
 * frame status is not provided in Rx status and giant frames are not dropped by
 * default:
 * 
 * * Configurations in which IP Checksum Offload (Type 1) is selected in Rx
 * 
 * * Configurations in which the IPC Full Checksum Offload Engine (Type 2) is
 *   selected in Rx with normal descriptor format
 * 
 * * Configurations in which the Advanced Timestamp feature is selected
 * 
 * In all other configurations, this bit is not used (reserved and always reset).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_DGF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_DGF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_MSB        5
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_DGF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_DGF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_SET_MSK    0x00000020
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_DGF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_CLR_MSK    0xffffffdf
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_DGF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_DGF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_DGF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_DGF_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : FUF
 * 
 * Forward Undersized Good Frames
 * 
 * When set, the Rx FIFO forwards Undersized frames (frames with no Error and
 * length less than 64 bytes) including pad-bytes and CRC.
 * 
 * When reset, the Rx FIFO drops all frames of less than 64 bytes, unless a frame
 * is already transferred because of the lower value of Receive Threshold, for
 * example, RTC = 01.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_FUF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_FUF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_MSB        6
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_FUF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_FUF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_SET_MSK    0x00000040
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_FUF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_CLR_MSK    0xffffffbf
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_FUF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_FUF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_FUF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_FUF_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : FEF
 * 
 * Forward Error Frames
 * 
 * When this bit is reset, the Rx FIFO drops frames with error status (CRC error,
 * collision error, GMII_ER, giant frame, watchdog timeout, or overflow). However,
 * if the start byte (write) pointer of a frame is already transferred to the read
 * controller side (in Threshold mode), then the frame is not dropped.
 * 
 * In the GMAC-MTL configuration in which the Frame Length FIFO is also enabled
 * during core configuration, the Rx FIFO drops the error frames if that frame's
 * start byte is not transferred (output) on the ARI bus.
 * 
 * When the FEF bit is set, all frames except runt error frames are forwarded to
 * the DMA. If the Bit 25 (RSF) is set and the Rx FIFO overflows when a partial
 * frame is written, then the frame is dropped irrespective of the FEF bit setting.
 * However, if the Bit 25 (RSF) is reset and the Rx FIFO overflows when a partial
 * frame is
 * 
 * written, then a partial frame may be forwarded to the DMA.
 * 
 * Note: When FEF bit is reset, the giant frames are dropped if the giant frame
 * status is given in Rx Status in the following configurations:
 * 
 * * The IP checksum engine (Type 1) and full checksum offload engine (Type 2) are
 *   not selected.
 * 
 * * The advanced timestamp feature is not selected but the extended status is
 *   selected. The extended status is available with the following features:
 * 
 *     - L3-L4 filter in GMAC-CORE or GMAC-MTL configurations
 * 
 *     - Full checksum offload engine (Type 2) with enhanced descriptor format in
 *       the GMAC-DMA, GMAC-AHB, or GMAC-AXI configurations.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_FEF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_FEF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_MSB        7
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_FEF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_FEF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_SET_MSK    0x00000080
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_FEF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_CLR_MSK    0xffffff7f
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_FEF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_FEF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_FEF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_FEF_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : EFC
 * 
 * Enable HW Flow Control
 * 
 * When this bit is set, the flow control signal operation based on the fill-level
 * of Rx FIFO is enabled. When reset, the flow control operation is disabled. This
 * bit is not used (reserved and always reset) when the Rx FIFO is less than 4 KB.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_EFC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_EFC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_MSB        8
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_EFC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_EFC register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_SET_MSK    0x00000100
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_EFC register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_EFC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_EFC field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_EFC register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_EFC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : RFA
 * 
 * Threshold for Activating Flow Control (in half-duplex and full-duplex)
 * 
 * These bits control the threshold (Fill level of Rx FIFO) at which the flow
 * control is activated.
 * 
 * * 00: Full minus 1 KB, that is, FULL - 1KB
 * 
 * * 01: Full minus 2 KB, that is, FULL - 2KB
 * 
 * * 10: Full minus 3 KB, that is, FULL - 3KB
 * 
 * * 11: Full minus 4 KB, that is, FULL - 4KB
 * 
 * These values are applicable only to Rx FIFOs of 4 KB or more and when Bit 8
 * (EFC) is set high. If the Rx FIFO is 8 KB or more, an additional Bit (RFA_2) is
 * used for more threshold levels as described in Bit 23. These bits are reserved
 * and read-only when the depth of Rx FIFO is less than 4 KB.
 * 
 * Note: When FIFO size is exactly 4 KB, although the DWC_gmac allows you to
 * program the value of these bits to 11, the software should not program these
 * bits to 2'b11. The value 2'b11 means flow control on FIFO empty condition.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFA register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFA register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_MSB        10
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RFA register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RFA register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_SET_MSK    0x00000600
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RFA register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_CLR_MSK    0xfffff9ff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RFA register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RFA field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_GET(value) (((value) & 0x00000600) >> 9)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RFA register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_SET(value) (((value) << 9) & 0x00000600)

/*
 * Field : RFD
 * 
 * Threshold for Deactivating Flow Control (in half-duplex and full-duplex)
 * 
 * These bits control the threshold (Fill-level of Rx FIFO) at which the flow
 * control is de-asserted after activation.
 * 
 * * 00: Full minus 1 KB, that is, FULL - 1KB
 * 
 * * 01: Full minus 2 KB, that is, FULL - 2KB
 * 
 * * 10: Full minus 3 KB, that is, FULL - 3KB
 * 
 * * 11: Full minus 4 KB, that is, FULL - 4KB
 * 
 * The de-assertion is effective only after flow control is asserted. If the Rx
 * FIFO is 8 KB or more, an additional bit (RFD_2) is used for more threshold
 * levels as described in Bit 22. These bits are reserved and read-only when the Rx
 * FIFO depth is less than 4 KB.
 * 
 * Note: For proper flow control, the value programmed in the "RFD_2, RFD" fields
 * should be equal to or more than the value programmed in the "RFA_2, RFA" fields.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFD register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFD register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_MSB        12
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RFD register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RFD register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_SET_MSK    0x00001800
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RFD register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_CLR_MSK    0xffffe7ff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RFD register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RFD field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_GET(value) (((value) & 0x00001800) >> 11)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RFD register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_SET(value) (((value) << 11) & 0x00001800)

/*
 * Field : ST
 * 
 * Start or Stop Transmission Command
 * 
 * When this bit is set, transmission is placed in the Running state, and the DMA
 * checks the Transmit List at the current position for a frame to be transmitted.
 * Descriptor acquisition is attempted either from the current position in the
 * list, which is the Transmit List Base Address set by Register 4 (Transmit
 * Descriptor List Address Register), or from the position retained when
 * transmission was stopped previously. If the DMA does not own the current
 * descriptor, transmission enters the Suspended state and Bit 2 (Transmit Buffer
 * Unavailable) of Register 5 (Status Register) is set. The Start Transmission
 * command is effective only when transmission is stopped. If the command is issued
 * before setting Register 4 (Transmit Descriptor List Address Register), then the
 * DMA behavior is unpredictable.
 * 
 * When this bit is reset, the transmission process is placed in the Stopped state
 * after completing the transmission of the current frame. The Next Descriptor
 * position in the Transmit List is saved, and it becomes the current position when
 * transmission is restarted. To change the list address, you need to program
 * Register 4 (Transmit Descriptor List Address Register) with a new value when
 * this bit is reset. The new value is considered when this bit is set again. The
 * stop transmission command is effective only when the transmission of the current
 * frame is complete or the transmission is in the Suspended state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_ST register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_ST register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_MSB        13
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_ST register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_ST register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_SET_MSK    0x00002000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_ST register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_CLR_MSK    0xffffdfff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_ST register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_ST field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_ST register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_ST_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : TTC
 * 
 * Transmit Threshold Control
 * 
 * These bits control the threshold level of the MTL Transmit FIFO. Transmission
 * starts when the frame size within the MTL Transmit FIFO is larger than the
 * threshold. In addition, full frames with a length less than the threshold are
 * also transmitted. These bits are used only when Bit 21 (TSF) is reset.
 * 
 * * 000: 64
 * 
 * * 001: 128
 * 
 * * 010: 192
 * 
 * * 011: 256
 * 
 * * 100: 40
 * 
 * * 101: 32
 * 
 * * 110: 24
 * 
 * * 111: 16
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_TTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_TTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_MSB        16
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_TTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_WIDTH      3
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_TTC register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_SET_MSK    0x0001c000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_TTC register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_CLR_MSK    0xfffe3fff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_TTC register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_TTC field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_GET(value) (((value) & 0x0001c000) >> 14)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_TTC register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_TTC_SET(value) (((value) << 14) & 0x0001c000)

/*
 * Field : Reserved_19_17
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_MSB        19
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_WIDTH      3
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_SET_MSK    0x000e0000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_CLR_MSK    0xfff1ffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_GET(value) (((value) & 0x000e0000) >> 17)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17_SET(value) (((value) << 17) & 0x000e0000)

/*
 * Field : FTF
 * 
 * Flush Transmit FIFO
 * 
 * When this bit is set, the transmit FIFO controller logic is reset to its default
 * values and thus all data in the Tx FIFO is lost or flushed. This bit is cleared
 * internally when the flushing operation is completed. The Operation Mode register
 * should not be written to until this bit is cleared. The data which is already
 * accepted by the MAC transmitter is not flushed. It is scheduled for transmission
 * and results in underflow and runt frame transmission.
 * 
 * Note: The flush operation is complete only when the Tx FIFO is emptied of its
 * contents and all the pending Transmit Status of the transmitted frames are
 * accepted by the host. To complete this flush operation, the PHY transmit clock
 * (clk_tx_i) is required to be active.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_FTF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_FTF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_MSB        20
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_FTF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_FTF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_SET_MSK    0x00100000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_FTF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_CLR_MSK    0xffefffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_FTF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_FTF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_FTF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_FTF_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : TSF
 * 
 * Transmit Store and Forward
 * 
 * When this bit is set, transmission starts when a full frame resides in the MTL
 * Transmit FIFO. When this bit is set, the TTC values specified in Bits[16:14] are
 * ignored. This bit should be changed only when the transmission is stopped.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_TSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_TSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_MSB        21
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_TSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_TSF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_SET_MSK    0x00200000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_TSF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_CLR_MSK    0xffdfffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_TSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_TSF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_TSF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_TSF_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : RFD_2
 * 
 * MSB of Threshold for Deactivating Flow Control
 * 
 * If the DWC_gmac is configured for Rx FIFO size of 8 KB or more, this bit (when
 * set) provides additional threshold levels for deactivating the flow control in
 * both half-duplex and full-duplex modes. This bit (as Most Significant Bit) along
 * with the RFD (Bits[12:11]) gives the following thresholds for deactivating flow
 * control:
 * 
 * * 100: Full minus 5 KB, that is, FULL - 5KB
 * 
 * * 101: Full minus 6 KB, that is, FULL - 6KB
 * 
 * * 110: Full minus 7 KB, that is, FULL - 7KB
 * 
 * * 111: Reserved
 * 
 * This bit is reserved (and RO) if the Rx FIFO is 4 KB or less deep.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFD_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFD_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_MSB        22
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RFD_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RFD_2 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_SET_MSK    0x00400000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RFD_2 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_CLR_MSK    0xffbfffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RFD_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RFD_2 field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RFD_2 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFD_2_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : RFA_2
 * 
 * MSB of Threshold for Activating Flow Control
 * 
 * If the DWC_gmac is configured for an Rx FIFO depth of 8 KB or more, this bit
 * (when set) provides additional threshold levels for activating the flow control
 * in both half-duplex and full-duplex modes. This bit (as Most Significant Bit)
 * along with the RFA (Bits[10:9]) gives the following thresholds for activating
 * flow control:
 * 
 * * 100: Full minus 5 KB, that is, FULL - 5KB
 * 
 * * 101: Full minus 6 KB, that is, FULL - 6KB
 * 
 * * 110: Full minus 7 KB, that is, FULL - 7KB
 * 
 * * 111: Reserved
 * 
 * This bit is reserved (and RO) if the Rx FIFO is 4 KB or less deep.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFA_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RFA_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_MSB        23
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RFA_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RFA_2 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_SET_MSK    0x00800000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RFA_2 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_CLR_MSK    0xff7fffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RFA_2 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RFA_2 field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RFA_2 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RFA_2_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : DFF
 * 
 * Disable Flushing of Received Frames
 * 
 * When this bit is set, the Rx DMA does not flush any frames because of the
 * unavailability of receive descriptors or buffers as it does normally when this
 * bit is reset.
 * 
 * This bit is reserved (and RO) in the GMAC-MTL configuration.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_DFF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_DFF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_MSB        24
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_DFF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_DFF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_SET_MSK    0x01000000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_DFF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_CLR_MSK    0xfeffffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_DFF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_DFF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_DFF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_DFF_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : RSF
 * 
 * Receive Store and Forward
 * 
 * When this bit is set, the MTL reads a frame from the Rx FIFO only after the
 * complete frame has been written to it, ignoring the RTC bits. When this bit is
 * reset, the Rx FIFO operates in the cut-through mode, subject to the threshold
 * specified by the RTC bits.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_MSB        25
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RSF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_SET_MSK    0x02000000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RSF register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_CLR_MSK    0xfdffffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RSF register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RSF field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RSF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RSF_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : DT
 * 
 * Disable Dropping of TCP/IP Checksum Error Frames
 * 
 * When this bit is set, the MAC does not drop the frames which only have errors
 * detected by the Receive Checksum Offload engine. Such frames do not have any
 * errors (including FCS error) in the Ethernet frame received by the MAC but have
 * errors only in the encapsulated payload. When this bit is reset, all error
 * frames are dropped if the FEF bit is reset.
 * 
 * If the IPC Full Checksum Offload Engine (Type 2) is disabled, this bit is
 * reserved (RO with value 1'b0).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_DT register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_DT register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_MSB        26
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_DT register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_DT register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_SET_MSK    0x04000000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_DT register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_CLR_MSK    0xfbffffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_DT register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_DT field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_DT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_DT_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : Reserved_31_27
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_MSB        31
/* The width in bits of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_WIDTH      5
/* The mask used to set the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_SET_MSK    0xf8000000
/* The mask used to clear the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 register field value. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_CLR_MSK    0x07ffffff
/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 register field. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_RESET      0x0
/* Extracts the ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 field value from a register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_GET(value) (((value) & 0xf8000000) >> 27)
/* Produces a ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27_SET(value) (((value) << 27) & 0xf8000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_OPERATION_MODE.
 */
struct ALT_EMAC_DMA_OPERATION_MODE_s
{
    const volatile uint32_t  Reserved_0     :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_RESERVED_0 */
    volatile uint32_t        SR             :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_SR */
    volatile uint32_t        OSF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_OSF */
    volatile uint32_t        RTC            :  2;  /* ALT_EMAC_DMA_OPERATION_MODE_RTC */
    volatile uint32_t        DGF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_DGF */
    volatile uint32_t        FUF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_FUF */
    volatile uint32_t        FEF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_FEF */
    volatile uint32_t        EFC            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_EFC */
    volatile uint32_t        RFA            :  2;  /* ALT_EMAC_DMA_OPERATION_MODE_RFA */
    volatile uint32_t        RFD            :  2;  /* ALT_EMAC_DMA_OPERATION_MODE_RFD */
    volatile uint32_t        ST             :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_ST */
    volatile uint32_t        TTC            :  3;  /* ALT_EMAC_DMA_OPERATION_MODE_TTC */
    const volatile uint32_t  Reserved_19_17 :  3;  /* ALT_EMAC_DMA_OPERATION_MODE_RESERVED_19_17 */
    volatile uint32_t        FTF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_FTF */
    volatile uint32_t        TSF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_TSF */
    volatile uint32_t        RFD_2          :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_RFD_2 */
    volatile uint32_t        RFA_2          :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_RFA_2 */
    volatile uint32_t        DFF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_DFF */
    volatile uint32_t        RSF            :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_RSF */
    volatile uint32_t        DT             :  1;  /* ALT_EMAC_DMA_OPERATION_MODE_DT */
    const volatile uint32_t  Reserved_31_27 :  5;  /* ALT_EMAC_DMA_OPERATION_MODE_RESERVED_31_27 */
};

/* The typedef declaration for register ALT_EMAC_DMA_OPERATION_MODE. */
typedef struct ALT_EMAC_DMA_OPERATION_MODE_s  ALT_EMAC_DMA_OPERATION_MODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_OPERATION_MODE register. */
#define ALT_EMAC_DMA_OPERATION_MODE_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_OPERATION_MODE register from the beginning of the component. */
#define ALT_EMAC_DMA_OPERATION_MODE_OFST        0x18
/* The address of the ALT_EMAC_DMA_OPERATION_MODE register. */
#define ALT_EMAC_DMA_OPERATION_MODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_OPERATION_MODE_OFST))

/*
 * Register : Interrupt_Enable
 * 
 * <b> Register 7 (Interrupt Enable Register) </b>
 * 
 * The Interrupt Enable register enables the interrupts reported by Register 5
 * (Status Register). Setting a bit to 1'b1 enables a corresponding interrupt.
 * After a hardware or software reset, all interrupts are disabled.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE           
 *  [1]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE           
 *  [2]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE           
 *  [3]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE           
 *  [4]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE           
 *  [5]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE           
 *  [6]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE           
 *  [7]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE           
 *  [8]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE           
 *  [9]     | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE           
 *  [10]    | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE           
 *  [12:11] | R      | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11
 *  [13]    | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE           
 *  [14]    | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE           
 *  [15]    | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE           
 *  [16]    | RW     | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE           
 *  [31:17] | R      | 0x0   | ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17
 * 
 */
/*
 * Field : TIE
 * 
 * Transmit Interrupt Enable
 * 
 * When this bit is set with Normal Interrupt Summary Enable (Bit 16), the Transmit
 * Interrupt is enabled. When this bit is reset, the Transmit Interrupt is
 * disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_MSB        0
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_SET_MSK    0x00000001
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TSE
 * 
 * Transmit Stopped Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the
 * Transmission Stopped Interrupt is enabled. When this bit is reset, the
 * Transmission Stopped Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_MSB        1
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_SET_MSK    0x00000002
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TUE
 * 
 * Transmit Buffer Unavailable Enable
 * 
 * When this bit is set with Normal Interrupt Summary Enable (Bit 16), the Transmit
 * Buffer Unavailable Interrupt is enabled. When this bit is reset, the Transmit
 * Buffer Unavailable Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_MSB        2
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_SET_MSK    0x00000004
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : TJE
 * 
 * Transmit Jabber Timeout Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the
 * Transmit Jabber Timeout Interrupt is enabled. When this bit is reset, the
 * Transmit Jabber Timeout Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_MSB        3
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_SET_MSK    0x00000008
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : OVE
 * 
 * Overflow Interrupt Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the
 * Receive Overflow Interrupt is enabled. When this bit is reset, the Overflow
 * Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_MSB        4
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_SET_MSK    0x00000010
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_CLR_MSK    0xffffffef
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : UNE
 * 
 * Underflow Interrupt Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the
 * Transmit Underflow Interrupt is enabled. When this bit is reset, the Underflow
 * Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_MSB        5
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_SET_MSK    0x00000020
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : RIE
 * 
 * Receive Interrupt Enable
 * 
 * When this bit is set with Normal Interrupt Summary Enable (Bit 16), the Receive
 * Interrupt is enabled. When this bit is reset, the Receive Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_MSB        6
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_SET_MSK    0x00000040
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : RUE
 * 
 * Receive Buffer Unavailable Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the
 * Receive Buffer Unavailable Interrupt is enabled. When this bit is reset, the
 * Receive Buffer Unavailable Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_MSB        7
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_SET_MSK    0x00000080
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : RSE
 * 
 * Receive Stopped Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the
 * Receive Stopped Interrupt is enabled. When this bit is reset, the Receive
 * Stopped Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_MSB        8
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_SET_MSK    0x00000100
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : RWE
 * 
 * Receive Watchdog Timeout Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the
 * Receive Watchdog Timeout Interrupt is enabled. When this bit is reset, the
 * Receive Watchdog Timeout Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_MSB        9
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_SET_MSK    0x00000200
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_CLR_MSK    0xfffffdff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : ETE
 * 
 * Early Transmit Interrupt Enable
 * 
 * When this bit is set with an Abnormal Interrupt Summary Enable (Bit 15), the
 * Early Transmit Interrupt is enabled. When this bit is reset, the Early Transmit
 * Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_MSB        10
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_SET_MSK    0x00000400
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Reserved_12_11
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_MSB        12
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_SET_MSK    0x00001800
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_CLR_MSK    0xffffe7ff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_GET(value) (((value) & 0x00001800) >> 11)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11_SET(value) (((value) << 11) & 0x00001800)

/*
 * Field : FBE
 * 
 * Fatal Bus Error Enable
 * 
 * When this bit is set with Abnormal Interrupt Summary Enable (Bit 15), the Fatal
 * Bus Error Interrupt is enabled. When this bit is reset, the Fatal Bus Error
 * Enable Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_MSB        13
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_SET_MSK    0x00002000
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : ERE
 * 
 * Early Receive Interrupt Enable
 * 
 * When this bit is set with Normal Interrupt Summary Enable (Bit 16), the Early
 * Receive Interrupt is enabled. When this bit is reset, the Early Receive
 * Interrupt is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_MSB        14
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_SET_MSK    0x00004000
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_CLR_MSK    0xffffbfff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : AIE
 * 
 * Abnormal Interrupt Summary Enable
 * 
 * When this bit is set, abnormal interrupt summary is enabled. When this bit is
 * reset, the abnormal interrupt summary is disabled. This bit enables the
 * following interrupts in Register 5 (Status Register):
 * 
 * * Register 5[1]: Transmit Process Stopped
 * 
 * * Register 5[3]: Transmit Jabber Timeout
 * 
 * * Register 5[4]: Receive Overflow
 * 
 * * Register 5[5]: Transmit Underflow
 * 
 * * Register 5[7]: Receive Buffer Unavailable
 * 
 * * Register 5[8]: Receive Process Stopped
 * 
 * * Register 5[9]: Receive Watchdog Timeout
 * 
 * * Register 5[10]: Early Transmit Interrupt
 * 
 * * Register 5[13]: Fatal Bus Error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_MSB        15
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_SET_MSK    0x00008000
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_CLR_MSK    0xffff7fff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : NIE
 * 
 * Normal Interrupt Summary Enable
 * 
 * When this bit is set, normal interrupt summary is enabled. When this bit is
 * reset, normal interrupt summary is disabled. This bit enables the following
 * interrupts in Register 5 (Status Register):
 * 
 * * Register 5[0]: Transmit Interrupt
 * 
 * * Register 5[2]: Transmit Buffer Unavailable
 * 
 * * Register 5[6]: Receive Interrupt
 * 
 * * Register 5[14]: Early Receive Interrupt
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_MSB        16
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_SET_MSK    0x00010000
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_CLR_MSK    0xfffeffff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Reserved_31_17
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_MSB        31
/* The width in bits of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_WIDTH      15
/* The mask used to set the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_SET_MSK    0xfffe0000
/* The mask used to clear the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 register field value. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_CLR_MSK    0x0001ffff
/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 register field. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_RESET      0x0
/* Extracts the ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 field value from a register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_GET(value) (((value) & 0xfffe0000) >> 17)
/* Produces a ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17_SET(value) (((value) << 17) & 0xfffe0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_INTERRUPT_ENABLE.
 */
struct ALT_EMAC_DMA_INTERRUPT_ENABLE_s
{
    volatile uint32_t        TIE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_TIE */
    volatile uint32_t        TSE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_TSE */
    volatile uint32_t        TUE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_TUE */
    volatile uint32_t        TJE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_TJE */
    volatile uint32_t        OVE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_OVE */
    volatile uint32_t        UNE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_UNE */
    volatile uint32_t        RIE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_RIE */
    volatile uint32_t        RUE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_RUE */
    volatile uint32_t        RSE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_RSE */
    volatile uint32_t        RWE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_RWE */
    volatile uint32_t        ETE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_ETE */
    const volatile uint32_t  Reserved_12_11 :  2;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_12_11 */
    volatile uint32_t        FBE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_FBE */
    volatile uint32_t        ERE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_ERE */
    volatile uint32_t        AIE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_AIE */
    volatile uint32_t        NIE            :  1;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_NIE */
    const volatile uint32_t  Reserved_31_17 : 15;  /* ALT_EMAC_DMA_INTERRUPT_ENABLE_RESERVED_31_17 */
};

/* The typedef declaration for register ALT_EMAC_DMA_INTERRUPT_ENABLE. */
typedef struct ALT_EMAC_DMA_INTERRUPT_ENABLE_s  ALT_EMAC_DMA_INTERRUPT_ENABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_INTERRUPT_ENABLE register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_INTERRUPT_ENABLE register from the beginning of the component. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_OFST        0x1c
/* The address of the ALT_EMAC_DMA_INTERRUPT_ENABLE register. */
#define ALT_EMAC_DMA_INTERRUPT_ENABLE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_INTERRUPT_ENABLE_OFST))

/*
 * Register : Missed_Frame_And_Buffer_Overflow_Counter
 * 
 * <b>Register 8 (Missed Frame and Buffer Overflow Counter Register) </b>
 * 
 * The DMA maintains two counters to track the number of frames missed during
 * reception. This register reports the current value of the counter. The counter
 * is used for diagnostic purposes. Bits[15:0] indicate missed frames because of
 * the host buffer being unavailable. Bits[27:17] indicate missed frames because of
 * buffer overflow conditions (MTL and MAC) and runt frames (good frames of less
 * than 64 bytes) dropped by the MTL.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                                         
 * :--------|:-------|:------|:---------------------------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT     
 *  [16]    | R      | 0x0   | ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF     
 *  [27:17] | R      | 0x0   | ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT     
 *  [28]    | R      | 0x0   | ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF     
 *  [31:29] | R      | 0x0   | ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29
 * 
 */
/*
 * Field : MISFRMCNT
 * 
 * Missed Frame Counter
 * 
 * This field indicates the number of frames missed by the controller because of
 * the Host Receive Buffer being unavailable. This counter is incremented each time
 * the DMA discards an incoming frame. The counter is cleared when this register is
 * read with mci_be_i[0] at 1'b1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_MSB        15
/* The width in bits of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_WIDTH      16
/* The mask used to set the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_CLR_MSK    0xffff0000
/* The reset value of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT field value from a register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : MISCNTOVF
 * 
 * Overflow Bit for Missed Frame Counter
 * 
 * This bit is set every time Missed Frame Counter (Bits[15:0]) overflows, that is,
 * the DMA discards an incoming frame because of the Host Receive Buffer being
 * unavailable with the missed frame counter at maximum value. In such a scenario,
 * the Missed frame counter is reset to all-zeros and this bit indicates that the
 * rollover happened.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_MSB        16
/* The width in bits of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_SET_MSK    0x00010000
/* The mask used to clear the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_CLR_MSK    0xfffeffff
/* The reset value of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF field value from a register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : OVFFRMCNT
 * 
 * Overflow Frame Counter
 * 
 * This field indicates the number of frames missed by the application. This
 * counter is incremented each time the MTL FIFO overflows. The counter is cleared
 * when this register is read with mci_be_i[2] at 1'b1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_MSB        27
/* The width in bits of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_WIDTH      11
/* The mask used to set the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_SET_MSK    0x0ffe0000
/* The mask used to clear the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_CLR_MSK    0xf001ffff
/* The reset value of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT field value from a register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_GET(value) (((value) & 0x0ffe0000) >> 17)
/* Produces a ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT_SET(value) (((value) << 17) & 0x0ffe0000)

/*
 * Field : OVFCNTOVF
 * 
 * Overflow Bit for FIFO Overflow Counter
 * 
 * This bit is set every time the Overflow Frame Counter (Bits[27:17]) overflows,
 * that is, the Rx FIFO overflows with the overflow frame counter at maximum value.
 * In such a scenario, the overflow frame counter is reset to all-zeros and this
 * bit indicates that the rollover happened.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_MSB        28
/* The width in bits of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_SET_MSK    0x10000000
/* The mask used to clear the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_CLR_MSK    0xefffffff
/* The reset value of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF field value from a register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : Reserved_31_29
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_MSB        31
/* The width in bits of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_WIDTH      3
/* The mask used to set the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_SET_MSK    0xe0000000
/* The mask used to clear the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 register field value. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_CLR_MSK    0x1fffffff
/* The reset value of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 register field. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_RESET      0x0
/* Extracts the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 field value from a register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_GET(value) (((value) & 0xe0000000) >> 29)
/* Produces a ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29_SET(value) (((value) << 29) & 0xe0000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER.
 */
struct ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_s
{
    const volatile uint32_t  MISFRMCNT      : 16;  /* ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISFRMCNT */
    const volatile uint32_t  MISCNTOVF      :  1;  /* ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_MISCNTOVF */
    const volatile uint32_t  OVFFRMCNT      : 11;  /* ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFFRMCNT */
    const volatile uint32_t  OVFCNTOVF      :  1;  /* ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OVFCNTOVF */
    const volatile uint32_t  Reserved_31_29 :  3;  /* ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESERVED_31_29 */
};

/* The typedef declaration for register ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER. */
typedef struct ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_s  ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER register from the beginning of the component. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OFST        0x20
/* The address of the ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER register. */
#define ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_OFST))

/*
 * Register : Receive_Interrupt_Watchdog_Timer
 * 
 * <b> Register 9 (Receive Interrupt Watchdog Timer Register) </b>
 * 
 * This register, when written with non-zero value, enables the watchdog timer for
 * the Receive Interrupt (Bit 6) of Register 5 (Status Register)
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                
 * :-------|:-------|:------|:------------------------------------------------------------
 *  [7:0]  | RW     | 0x0   | ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT         
 *  [31:8] | R      | 0x0   | ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8
 * 
 */
/*
 * Field : RIWT
 * 
 * RI Watchdog Timer Count
 * 
 * This bit indicates the number of system clock cycles multiplied by 256 for which
 * the watchdog timer is set. The watchdog timer gets triggered with the programmed
 * value after the Rx DMA completes the transfer of a frame for which the RI status
 * bit is not set because of the setting in the corresponding descriptor RDES1[31].
 * When the watchdog timer runs out, the RI bit is set and the timer is stopped.
 * The watchdog timer is reset when the RI bit is set high because of automatic
 * setting of RI as per RDES1[31] of any received frame.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_MSB        7
/* The width in bits of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_WIDTH      8
/* The mask used to set the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT register field value. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT register field value. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_CLR_MSK    0xffffff00
/* The reset value of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT field value from a register. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : Reserved_31_8
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_MSB        31
/* The width in bits of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_WIDTH      24
/* The mask used to set the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 register field value. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_SET_MSK    0xffffff00
/* The mask used to clear the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 register field value. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_CLR_MSK    0x000000ff
/* The reset value of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 register field. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_RESET      0x0
/* Extracts the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 field value from a register. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER.
 */
struct ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_s
{
    volatile uint32_t        RIWT          :  8;  /* ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RIWT */
    const volatile uint32_t  Reserved_31_8 : 24;  /* ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESERVED_31_8 */
};

/* The typedef declaration for register ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER. */
typedef struct ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_s  ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER register. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER register from the beginning of the component. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_OFST        0x24
/* The address of the ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER register. */
#define ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_OFST))

/*
 * Register : AXI_Bus_Mode
 * 
 * <b> Register 10 (AXI Bus Mode Register) </b>
 * 
 * The AXI Bus Mode Register controls the behavior of the AXI master. It is mainly
 * used to control the burst splitting and the number of outstanding requests. This
 * register is present and valid only in the GMAC-AXI configuration. In addition,
 * this register is valid only in the Channel 0 DMA when multiple channels are
 * present in the AV mode.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                             
 * :--------|:-------|:------|:-----------------------------------------
 *  [0]     | R      | 0x1   | ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF         
 *  [1]     | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4         
 *  [2]     | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8         
 *  [3]     | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16        
 *  [4]     | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32        
 *  [5]     | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64        
 *  [6]     | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128       
 *  [7]     | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256       
 *  [11:8]  | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 
 *  [12]    | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL       
 *  [13]    | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE       
 *  [15:14] | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14
 *  [17:16] | RW     | 0x1   | ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT    
 *  [18]    | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4
 *  [19]    | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8
 *  [21:20] | RW     | 0x1   | ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT    
 *  [22]    | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4
 *  [23]    | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8
 *  [29:24] | R      | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24
 *  [30]    | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM   
 *  [31]    | RW     | 0x0   | ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI        
 * 
 */
/*
 * Field : UNDEF
 * 
 * AXI Undefined Burst Length
 * 
 * This bit is read-only bit and indicates the complement (invert) value of Bit 16
 * (FB) in Register 0 (Bus Mode Register[16]).
 * 
 * * When this bit is set to 1, the GMAC-AXI is allowed to perform any burst length
 *   equal to or below the maximum allowed burst length programmed in Bits[7:1].
 * 
 * * When this bit is set to 0, the GMAC-AXI is allowed to perform only fixed burst
 *   lengths as indicated by BLEN256, BLEN128, BLEN64, BLEN32, BLEN16, BLEN8, or
 *   BLEN4, or a burst length of 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_MSB        0
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_SET_MSK    0x00000001
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_CLR_MSK    0xfffffffe
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_RESET      0x1
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : BLEN4
 * 
 * AXI Burst Length 4
 * 
 * When this bit is set to 1, the GMAC-AXI is allowed to select a burst length of 4
 * on the AXI Master interface.
 * 
 * Setting this bit has no effect when UNDEF is set to 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_MSB        1
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_SET_MSK    0x00000002
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_CLR_MSK    0xfffffffd
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : BLEN8
 * 
 * AXI Burst Length 8
 * 
 * When this bit is set to 1, the GMAC-AXI is allowed to select a burst length of 8
 * on the AXI Master interface.
 * 
 * Setting this bit has no effect when UNDEF is set to 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_MSB        2
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_SET_MSK    0x00000004
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_CLR_MSK    0xfffffffb
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : BLEN16
 * 
 * AXI Burst Length 16
 * 
 * When this bit is set to 1 or UNDEF is set to 1, the GMAC-AXI is allowed to
 * select a burst length of 16 on the AXI Master interface.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_MSB        3
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_SET_MSK    0x00000008
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_CLR_MSK    0xfffffff7
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : BLEN32
 * 
 * AXI Burst Length 32
 * 
 * When this bit is set to 1, the GMAC-AXI is allowed to select a burst length of
 * 32 on the AXI Master interface.
 * 
 * This bit is present only when the configuration parameter AXI_BL is set to 32 or
 * more. Otherwise, this bit is reserved and is read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_MSB        4
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_SET_MSK    0x00000010
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_CLR_MSK    0xffffffef
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : BLEN64
 * 
 * AXI Burst Length 64
 * 
 * When this bit is set to 1, the GMAC-AXI is allowed to select a burst length of
 * 64 on the AXI Master interface.
 * 
 * This bit is present only when the configuration parameter AXI_BL is set to 64 or
 * more. Otherwise, this bit is reserved and is read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_MSB        5
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_SET_MSK    0x00000020
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_CLR_MSK    0xffffffdf
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : BLEN128
 * 
 * AXI Burst Length 128
 * 
 * When this bit is set to 1, the GMAC-AXI is allowed to select a burst length of
 * 128 on the AXI Master interface.
 * 
 * This bit is present only when the configuration parameter AXI_BL is set to 128
 * or more. Otherwise, this bit is reserved and is read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_MSB        6
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_SET_MSK    0x00000040
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_CLR_MSK    0xffffffbf
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : BLEN256
 * 
 * AXI Burst Length 256
 * 
 * When this bit is set to 1, the GMAC-AXI is allowed to select a burst length of
 * 256 on the AXI Master Interface.
 * 
 * This bit is present only when the configuration parameter AXI_BL is set to 256.
 * Otherwise, this bit is reserved and is read-only (RO).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_MSB        7
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_SET_MSK    0x00000080
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_CLR_MSK    0xffffff7f
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : Reserved_11_8
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_MSB        11
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_WIDTH      4
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_SET_MSK    0x00000f00
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_CLR_MSK    0xfffff0ff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_GET(value) (((value) & 0x00000f00) >> 8)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8_SET(value) (((value) << 8) & 0x00000f00)

/*
 * Field : AXI_AAL
 * 
 * Address-Aligned Beats
 * 
 * This bit is read-only bit and reflects the Bit 25 (AAL) of Register 0 (Bus Mode
 * Register).
 * 
 * When this bit is set to 1, the GMAC-AXI performs address-aligned burst transfers
 * on both read and write channels.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_MSB        12
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_SET_MSK    0x00001000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_CLR_MSK    0xffffefff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : ONEKBBE
 * 
 * 1 KB Boundary Crossing Enable for the GMAC-AXI Master
 * 
 * When set, the GMAC-AXI Master performs burst transfers that do not cross 1 KB
 * boundary. When reset, the GMAC-AXI Master performs burst transfers that do not
 * cross 4 KB boundary.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_MSB        13
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_SET_MSK    0x00002000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Reserved_15_14
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_MSB        15
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_SET_MSK    0x0000c000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_CLR_MSK    0xffff3fff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : RD_OSR_LMT
 * 
 * AXI Maximum Read OutStanding Request Limit
 * 
 * This value limits the maximum outstanding request on the AXI read interface.
 * 
 * Maximum outstanding requests = RD_OSR_LMT+1
 * 
 * Note:
 * 
 * The Bit 18 is reserved if AXI_GM_MAX_RD_REQUESTS = 4.
 * 
 * The Bit 19 is reserved if AXI_GM_MAX_RD_REQUESTS != 16.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_MSB        17
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_SET_MSK    0x00030000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_CLR_MSK    0xfffcffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_RESET      0x1
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : RD_OSR_LMT_GT4
 * 
 * RD_OSR_LMT: AXI Maximum Read OutStanding Request Limit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_MSB        18
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_SET_MSK    0x00040000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_CLR_MSK    0xfffbffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : RD_OSR_LMT_GT8
 * 
 * RD_OSR_LMT: AXI Maximum Read OutStanding Request Limit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_MSB        19
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_SET_MSK    0x00080000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : WR_OSR_LMT
 * 
 * AXI Maximum Write OutStanding Request Limit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_MSB        21
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_SET_MSK    0x00300000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_CLR_MSK    0xffcfffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_RESET      0x1
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GET(value) (((value) & 0x00300000) >> 20)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_SET(value) (((value) << 20) & 0x00300000)

/*
 * Field : WR_OSR_LMT_GT4
 * 
 * WR_OSR_LMT: AXI Maximum Write Out Standing Request Limit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_MSB        22
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_SET_MSK    0x00400000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_CLR_MSK    0xffbfffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : WR_OSR_LMT_GT8
 * 
 * WR_OSR_LMT: AXI Maximum Write OutStanding Request Limit
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_MSB        23
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_SET_MSK    0x00800000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_CLR_MSK    0xff7fffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : Reserved_29_24
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_MSB        29
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_WIDTH      6
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_SET_MSK    0x3f000000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_CLR_MSK    0xc0ffffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_GET(value) (((value) & 0x3f000000) >> 24)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24_SET(value) (((value) << 24) & 0x3f000000)

/*
 * Field : LPI_XIT_FRM
 * 
 * Unlock on Magic Packet or Remote Wake Up
 * 
 * When set to 1, this bit enables the GMAC-AXI to come out of the LPI mode only
 * when the Magic Packet or Remote Wake Up Packet is received.
 * 
 * When set to 0, this bit enables the GMAC-AXI to come out of LPI mode when any
 * frame is received.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_MSB        30
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_SET_MSK    0x40000000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_CLR_MSK    0xbfffffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : EN_LPI
 * 
 * Enable Low Power Interface (LPI)
 * 
 * When set to 1, this bit enables the LPI mode supported by the GMAC-AXI
 * configuration and accepts the LPI request from the AXI System Clock controller.
 * 
 * When set to 0, this bit disables the LPI mode and always denies the LPI request
 * from the AXI System Clock controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_MSB        31
/* The width in bits of the ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_SET_MSK    0x80000000
/* The mask used to clear the ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI register field value. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_CLR_MSK    0x7fffffff
/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI register field. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI field value from a register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_AXI_BUS_MODE.
 */
struct ALT_EMAC_DMA_AXI_BUS_MODE_s
{
    const volatile uint32_t  UNDEF          :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_UNDEF */
    volatile uint32_t        BLEN4          :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_BLEN4 */
    volatile uint32_t        BLEN8          :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_BLEN8 */
    volatile uint32_t        BLEN16         :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_BLEN16 */
    const volatile uint32_t  BLEN32         :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_BLEN32 */
    const volatile uint32_t  BLEN64         :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_BLEN64 */
    const volatile uint32_t  BLEN128        :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_BLEN128 */
    const volatile uint32_t  BLEN256        :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_BLEN256 */
    const volatile uint32_t  Reserved_11_8  :  4;  /* ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_11_8 */
    const volatile uint32_t  AXI_AAL        :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_AXI_AAL */
    volatile uint32_t        ONEKBBE        :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_ONEKBBE */
    const volatile uint32_t  Reserved_15_14 :  2;  /* ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_15_14 */
    volatile uint32_t        RD_OSR_LMT     :  2;  /* ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT */
    volatile uint32_t        RD_OSR_LMT_GT4 :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT4 */
    volatile uint32_t        RD_OSR_LMT_GT8 :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_RD_OSR_LMT_GT8 */
    volatile uint32_t        WR_OSR_LMT     :  2;  /* ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT */
    volatile uint32_t        WR_OSR_LMT_GT4 :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT4 */
    volatile uint32_t        WR_OSR_LMT_GT8 :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_WR_OSR_LMT_GT8 */
    const volatile uint32_t  Reserved_29_24 :  6;  /* ALT_EMAC_DMA_AXI_BUS_MODE_RESERVED_29_24 */
    volatile uint32_t        LPI_XIT_FRM    :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_LPI_XIT_FRM */
    volatile uint32_t        EN_LPI         :  1;  /* ALT_EMAC_DMA_AXI_BUS_MODE_EN_LPI */
};

/* The typedef declaration for register ALT_EMAC_DMA_AXI_BUS_MODE. */
typedef struct ALT_EMAC_DMA_AXI_BUS_MODE_s  ALT_EMAC_DMA_AXI_BUS_MODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_AXI_BUS_MODE register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_RESET       0x00110001
/* The byte offset of the ALT_EMAC_DMA_AXI_BUS_MODE register from the beginning of the component. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_OFST        0x28
/* The address of the ALT_EMAC_DMA_AXI_BUS_MODE register. */
#define ALT_EMAC_DMA_AXI_BUS_MODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_AXI_BUS_MODE_OFST))

/*
 * Register : AHB_or_AXI_Status
 * 
 * <b> Register 11 (AHB or AXI Status Register) </b>
 * 
 * This register provides the active status of the AHB master interface or AXI
 * interface's read and write channels. This register is present and valid only in
 * the GMAC-AHB and GMAC-AXI configurations. This register is useful for debugging
 * purposes. In addition, this register is valid only in the Channel 0 DMA when
 * multiple channels are present in the AV mode.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [0]    | R      | 0x0   | ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS      
 *  [1]    | R      | 0x0   | ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS     
 *  [31:2] | R      | 0x0   | ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2
 * 
 */
/*
 * Field : AXWHSTS
 * 
 * AXI Master Write Channel or AHB Master Status
 * 
 * When high, it indicates that AXI Master's write channel is active and
 * transferring data in the GMAC-AXI configuration. In the GMAC-AHB configuration,
 * it indicates that the AHB master interface FSMs are in the non-idle state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_MSB        0
/* The width in bits of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS register field value. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_SET_MSK    0x00000001
/* The mask used to clear the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS register field value. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS field value from a register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : AXIRDSTS
 * 
 * AXI Master Read Channel Status
 * 
 * When high, it indicates that AXI Master's read channel is active and
 * transferring data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_MSB        1
/* The width in bits of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS register field value. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_SET_MSK    0x00000002
/* The mask used to clear the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS register field value. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS field value from a register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Reserved_31_2
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_MSB        31
/* The width in bits of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_WIDTH      30
/* The mask used to set the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 register field value. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_SET_MSK    0xfffffffc
/* The mask used to clear the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 register field value. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_CLR_MSK    0x00000003
/* The reset value of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 register field. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_RESET      0x0
/* Extracts the ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 field value from a register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_GET(value) (((value) & 0xfffffffc) >> 2)
/* Produces a ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2_SET(value) (((value) << 2) & 0xfffffffc)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_AHB_OR_AXI_STATUS.
 */
struct ALT_EMAC_DMA_AHB_OR_AXI_STATUS_s
{
    const volatile uint32_t  AXWHSTS       :  1;  /* ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXWHSTS */
    const volatile uint32_t  AXIRDSTS      :  1;  /* ALT_EMAC_DMA_AHB_OR_AXI_STATUS_AXIRDSTS */
    const volatile uint32_t  Reserved_31_2 : 30;  /* ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESERVED_31_2 */
};

/* The typedef declaration for register ALT_EMAC_DMA_AHB_OR_AXI_STATUS. */
typedef struct ALT_EMAC_DMA_AHB_OR_AXI_STATUS_s  ALT_EMAC_DMA_AHB_OR_AXI_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS register from the beginning of the component. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_OFST        0x2c
/* The address of the ALT_EMAC_DMA_AHB_OR_AXI_STATUS register. */
#define ALT_EMAC_DMA_AHB_OR_AXI_STATUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_AHB_OR_AXI_STATUS_OFST))

/*
 * Register : Current_Host_Transmit_Descriptor
 * 
 * <b> Register 18 (Current Host Transmit Descriptor Register) </b>
 * 
 * The Current Host Transmit Descriptor register points to the start address of the
 * current Transmit Descriptor read by the DMA.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                              
 * :-------|:-------|:------|:----------------------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR
 * 
 */
/*
 * Field : CURTDESAPTR
 * 
 * Host Transmit Descriptor Address Pointer
 * 
 * Cleared on Reset. Pointer updated by the DMA during operation.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_MSB        31
/* The width in bits of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_WIDTH      32
/* The mask used to set the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_CLR_MSK    0x00000000
/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_RESET      0x0
/* Extracts the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR field value from a register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR.
 */
struct ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_s
{
    const volatile uint32_t  CURTDESAPTR : 32;  /* ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_CURTDESAPTR */
};

/* The typedef declaration for register ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR. */
typedef struct ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_s  ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR register from the beginning of the component. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_OFST        0x48
/* The address of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_OFST))

/*
 * Register : Current_Host_Receive_Descriptor
 * 
 * <b> Register 19 (Current Host Receive Descriptor Register) </b>
 * 
 * The Current Host Receive Descriptor register points to the start address of the
 * current Receive Descriptor read by the DMA.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                             
 * :-------|:-------|:------|:---------------------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR
 * 
 */
/*
 * Field : CURRDESAPTR
 * 
 * Host Receive Descriptor Address Pointer
 * 
 * Cleared on Reset. Pointer updated by the DMA during operation.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_MSB        31
/* The width in bits of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_WIDTH      32
/* The mask used to set the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_CLR_MSK    0x00000000
/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_RESET      0x0
/* Extracts the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR field value from a register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR.
 */
struct ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_s
{
    const volatile uint32_t  CURRDESAPTR : 32;  /* ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_CURRDESAPTR */
};

/* The typedef declaration for register ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR. */
typedef struct ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_s  ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR register from the beginning of the component. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_OFST        0x4c
/* The address of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_OFST))

/*
 * Register : Current_Host_Transmit_Buffer_Address
 * 
 * <b> Register 20 (Current Host Transmit Buffer Address Register) </b>
 * 
 * The Current Host Transmit Buffer Address register points to the current Transmit
 * Buffer Address being read by the DMA.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                  
 * :-------|:-------|:------|:--------------------------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR
 * 
 */
/*
 * Field : CURTBUFAPTR
 * 
 * Host Transmit Buffer Address Pointer
 * 
 * Cleared on Reset. Pointer updated by the DMA during operation.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_MSB        31
/* The width in bits of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_WIDTH      32
/* The mask used to set the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_CLR_MSK    0x00000000
/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_RESET      0x0
/* Extracts the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR field value from a register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS.
 */
struct ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_s
{
    const volatile uint32_t  CURTBUFAPTR : 32;  /* ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_CURTBUFAPTR */
};

/* The typedef declaration for register ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS. */
typedef struct ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_s  ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS register from the beginning of the component. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_OFST        0x50
/* The address of the ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS register. */
#define ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_OFST))

/*
 * Register : Current_Host_Receive_Buffer_Address
 * 
 * <b> Register 21 (Current Host Receive Buffer Address Register) </b>
 * 
 * The Current Host Receive Buffer Address register points to the current Receive
 * Buffer address being read by the DMA.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                 
 * :-------|:-------|:------|:-------------------------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR
 * 
 */
/*
 * Field : CURRBUFAPTR
 * 
 * Host Receive Buffer Address Pointer
 * 
 * Cleared on Reset. Pointer updated by the DMA during operation.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_MSB        31
/* The width in bits of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_WIDTH      32
/* The mask used to set the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR register field value. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_CLR_MSK    0x00000000
/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR register field. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_RESET      0x0
/* Extracts the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR field value from a register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR register field value suitable for setting the register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS.
 */
struct ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_s
{
    const volatile uint32_t  CURRBUFAPTR : 32;  /* ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_CURRBUFAPTR */
};

/* The typedef declaration for register ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS. */
typedef struct ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_s  ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_RESET       0x00000000
/* The byte offset of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS register from the beginning of the component. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_OFST        0x54
/* The address of the ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS register. */
#define ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_OFST))

/*
 * Register : HW_Feature
 * 
 * <b> Register 22 (HW Feature Register) </b>
 * 
 * This register indicates the presence of the optional features or functions of
 * the DWC_gmac. The software driver can use this register to dynamically enable or
 * disable the programs related to the optional blocks.
 * 
 * Note: All bits are set or reset as per the selection of features during the
 * DWC_gmac configuration.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [0]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_MIISEL      
 *  [1]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_GMIISEL     
 *  [2]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_HDSEL       
 *  [3]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN   
 *  [4]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_HASHSEL     
 *  [5]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL
 *  [6]     | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_PCSSEL      
 *  [7]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN  
 *  [8]     | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_SMASEL      
 *  [9]     | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_RWKSEL      
 *  [10]    | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_MGKSEL      
 *  [11]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_MMCSEL      
 *  [12]    | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL   
 *  [13]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL   
 *  [14]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_EEESEL      
 *  [15]    | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_AVSEL       
 *  [16]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_TXCOESEL    
 *  [17]    | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE   
 *  [18]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE   
 *  [19]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE  
 *  [21:20] | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_RXCHCNT     
 *  [23:22] | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_TXCHCNT     
 *  [24]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL   
 *  [25]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_INTTSEN     
 *  [26]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN  
 *  [27]    | R      | 0x1   | ALT_EMAC_DMA_HW_FEATURE_SAVLANINS   
 *  [30:28] | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF    
 *  [31]    | R      | 0x0   | ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 
 * 
 */
/*
 * Field : MIISEL
 * 
 * 10 or 100 Mbps support
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_MIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_MIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_MSB        0
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_MIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_MIISEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_MIISEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_MIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_MIISEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_MIISEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_MIISEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : GMIISEL
 * 
 * 1000 Mbps support
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_GMIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_GMIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_MSB        1
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_GMIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_GMIISEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_SET_MSK    0x00000002
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_GMIISEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_CLR_MSK    0xfffffffd
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_GMIISEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_GMIISEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_GMIISEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_GMIISEL_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : HDSEL
 * 
 * Half-Duplex support
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_HDSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_HDSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_MSB        2
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_HDSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_HDSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_SET_MSK    0x00000004
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_HDSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_HDSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_HDSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_HDSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_HDSEL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : EXTHASHEN
 * 
 * Expanded DA Hash Filter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_MSB        3
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : HASHSEL
 * 
 * HASH Filter
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_HASHSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_HASHSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_MSB        4
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_HASHSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_HASHSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_SET_MSK    0x00000010
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_HASHSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_CLR_MSK    0xffffffef
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_HASHSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_HASHSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_HASHSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_HASHSEL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : ADDMACADRSEL
 * 
 * Multiple MAC Address Registers
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_MSB        5
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_SET_MSK    0x00000020
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_CLR_MSK    0xffffffdf
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PCSSEL
 * 
 * PCS registers (TBI, SGMII, or RTBI PHY interface)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_PCSSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_PCSSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_MSB        6
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_PCSSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_PCSSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_SET_MSK    0x00000040
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_PCSSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_CLR_MSK    0xffffffbf
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_PCSSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_PCSSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_PCSSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_PCSSEL_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : L3L4FLTREN
 * 
 * Layer 3 and Layer 4 Filter Feature
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_MSB        7
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_SET_MSK    0x00000080
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : SMASEL
 * 
 * SMA (MDIO) Interface
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_SMASEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_SMASEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_MSB        8
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_SMASEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_SMASEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_SET_MSK    0x00000100
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_SMASEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_SMASEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_SMASEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_SMASEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_SMASEL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : RWKSEL
 * 
 * PMT Remote Wakeup
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_RWKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_RWKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_MSB        9
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_RWKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_RWKSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_SET_MSK    0x00000200
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_RWKSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_CLR_MSK    0xfffffdff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_RWKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_RWKSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_RWKSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_RWKSEL_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : MGKSEL
 * 
 * PMT Magic Packet
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_MGKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_MGKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_MSB        10
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_MGKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_MGKSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_SET_MSK    0x00000400
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_MGKSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_CLR_MSK    0xfffffbff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_MGKSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_MGKSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_MGKSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_MGKSEL_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : MMCSEL
 * 
 * RMON Module
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_MMCSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_MMCSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_MSB        11
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_MMCSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_MMCSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_SET_MSK    0x00000800
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_MMCSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_MMCSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_MMCSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_MMCSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_MMCSEL_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : TSVER1SEL
 * 
 * Only IEEE 1588-2002 Timestamp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_MSB        12
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : TSVER2SEL
 * 
 * IEEE 1588-2008 Advanced Timestamp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_MSB        13
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_SET_MSK    0x00002000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_CLR_MSK    0xffffdfff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : EEESEL
 * 
 * Energy Efficient Ethernet
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_EEESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_EEESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_MSB        14
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_EEESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_EEESEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_SET_MSK    0x00004000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_EEESEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_CLR_MSK    0xffffbfff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_EEESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_EEESEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_EEESEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_EEESEL_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : AVSEL
 * 
 * AV Feature
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_AVSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_AVSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_MSB        15
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_AVSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_AVSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_SET_MSK    0x00008000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_AVSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_CLR_MSK    0xffff7fff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_AVSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_AVSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_AVSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_AVSEL_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : TXCOESEL
 * 
 * Checksum Offload in Tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_TXCOESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_TXCOESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_MSB        16
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_TXCOESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_TXCOESEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_SET_MSK    0x00010000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_TXCOESEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_CLR_MSK    0xfffeffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_TXCOESEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_TXCOESEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_TXCOESEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCOESEL_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : RXTYP1COE
 * 
 * IP Checksum Offload (Type 1) in Rx
 * 
 * Note: If IPCHKSUM_EN = Enabled and IPC_FULL_OFFLOAD = Enabled, then RXTYP1COE =
 * 0 and RXTYP2COE =1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_MSB        17
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_SET_MSK    0x00020000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_CLR_MSK    0xfffdffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : RXTYP2COE
 * 
 * IP Checksum Offload (Type 2) in Rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_MSB        18
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_SET_MSK    0x00040000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_CLR_MSK    0xfffbffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : RXFIFOSIZE
 * 
 * Rx FIFO > 2,048 Bytes
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_MSB        19
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_SET_MSK    0x00080000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : RXCHCNT
 * 
 * Number of additional Rx channels
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_RXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_MSB        21
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_RXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_RXCHCNT register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_SET_MSK    0x00300000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_RXCHCNT register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_CLR_MSK    0xffcfffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_RXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_RXCHCNT field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_GET(value) (((value) & 0x00300000) >> 20)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_RXCHCNT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_RXCHCNT_SET(value) (((value) << 20) & 0x00300000)

/*
 * Field : TXCHCNT
 * 
 * Number of additional Tx channels
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_TXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_TXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_MSB        23
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_TXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_WIDTH      2
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_TXCHCNT register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_SET_MSK    0x00c00000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_TXCHCNT register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_CLR_MSK    0xff3fffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_TXCHCNT register field. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_TXCHCNT field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_GET(value) (((value) & 0x00c00000) >> 22)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_TXCHCNT register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_TXCHCNT_SET(value) (((value) << 22) & 0x00c00000)

/*
 * Field : ENHDESSEL
 * 
 * Alternate (Enhanced Descriptor)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_MSB        24
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_SET_MSK    0x01000000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_CLR_MSK    0xfeffffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : INTTSEN
 * 
 * Timestamping with Internal System Time
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_INTTSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_INTTSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_MSB        25
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_INTTSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_INTTSEN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_SET_MSK    0x02000000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_INTTSEN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_CLR_MSK    0xfdffffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_INTTSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_INTTSEN field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_INTTSEN register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_INTTSEN_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : FLEXIPPSEN
 * 
 * Flexible Pulse-Per-Second Output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_MSB        26
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_SET_MSK    0x04000000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_CLR_MSK    0xfbffffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN register field. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : SAVLANINS
 * 
 * Source Address or VLAN Insertion
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_SAVLANINS register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_SAVLANINS register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_MSB        27
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_SAVLANINS register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_SAVLANINS register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_SET_MSK    0x08000000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_SAVLANINS register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_SAVLANINS register field. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_RESET      0x1
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_SAVLANINS field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_SAVLANINS register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_SAVLANINS_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : ACTPHYIF
 * 
 * Active or Selected PHY interface
 * 
 * When you have multiple PHY interfaces in your configuration, this field
 * indicates the sampled value of phy_intf_sel_i during reset de-assertion
 * 
 * * 0000: GMII or MII
 * 
 * * 0001: RGMII
 * 
 * * 0010: SGMII
 * 
 * * 0011: TBI
 * 
 * * 0100: RMII
 * 
 * * 0101: RTBI
 * 
 * * 0110: SMII
 * 
 * * 0111: RevMII
 * 
 * * All Others: Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_MSB        30
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_WIDTH      3
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_SET_MSK    0x70000000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_CLR_MSK    0x8fffffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF register field. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_GET(value) (((value) & 0x70000000) >> 28)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF_SET(value) (((value) << 28) & 0x70000000)

/*
 * Field : Reserved_31
 * 
 * Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_MSB        31
/* The width in bits of the ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_WIDTH      1
/* The mask used to set the ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_SET_MSK    0x80000000
/* The mask used to clear the ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 register field value. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_CLR_MSK    0x7fffffff
/* The reset value of the ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 register field. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_RESET      0x0
/* Extracts the ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 field value from a register. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 register field value suitable for setting the register. */
#define ALT_EMAC_DMA_HW_FEATURE_RESERVED_31_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_EMAC_DMA_HW_FEATURE.
 */
struct ALT_EMAC_DMA_HW_FEATURE_s
{
    const volatile uint32_t  MIISEL       :  1;  /* ALT_EMAC_DMA_HW_FEATURE_MIISEL */
    const volatile uint32_t  GMIISEL      :  1;  /* ALT_EMAC_DMA_HW_FEATURE_GMIISEL */
    const volatile uint32_t  HDSEL        :  1;  /* ALT_EMAC_DMA_HW_FEATURE_HDSEL */
    const volatile uint32_t  EXTHASHEN    :  1;  /* ALT_EMAC_DMA_HW_FEATURE_EXTHASHEN */
    const volatile uint32_t  HASHSEL      :  1;  /* ALT_EMAC_DMA_HW_FEATURE_HASHSEL */
    const volatile uint32_t  ADDMACADRSEL :  1;  /* ALT_EMAC_DMA_HW_FEATURE_ADDMACADRSEL */
    const volatile uint32_t  PCSSEL       :  1;  /* ALT_EMAC_DMA_HW_FEATURE_PCSSEL */
    const volatile uint32_t  L3L4FLTREN   :  1;  /* ALT_EMAC_DMA_HW_FEATURE_L3L4FLTREN */
    const volatile uint32_t  SMASEL       :  1;  /* ALT_EMAC_DMA_HW_FEATURE_SMASEL */
    const volatile uint32_t  RWKSEL       :  1;  /* ALT_EMAC_DMA_HW_FEATURE_RWKSEL */
    const volatile uint32_t  MGKSEL       :  1;  /* ALT_EMAC_DMA_HW_FEATURE_MGKSEL */
    const volatile uint32_t  MMCSEL       :  1;  /* ALT_EMAC_DMA_HW_FEATURE_MMCSEL */
    const volatile uint32_t  TSVER1SEL    :  1;  /* ALT_EMAC_DMA_HW_FEATURE_TSVER1SEL */
    const volatile uint32_t  TSVER2SEL    :  1;  /* ALT_EMAC_DMA_HW_FEATURE_TSVER2SEL */
    const volatile uint32_t  EEESEL       :  1;  /* ALT_EMAC_DMA_HW_FEATURE_EEESEL */
    const volatile uint32_t  AVSEL        :  1;  /* ALT_EMAC_DMA_HW_FEATURE_AVSEL */
    const volatile uint32_t  TXCOESEL     :  1;  /* ALT_EMAC_DMA_HW_FEATURE_TXCOESEL */
    const volatile uint32_t  RXTYP1COE    :  1;  /* ALT_EMAC_DMA_HW_FEATURE_RXTYP1COE */
    const volatile uint32_t  RXTYP2COE    :  1;  /* ALT_EMAC_DMA_HW_FEATURE_RXTYP2COE */
    const volatile uint32_t  RXFIFOSIZE   :  1;  /* ALT_EMAC_DMA_HW_FEATURE_RXFIFOSIZE */
    const volatile uint32_t  RXCHCNT      :  2;  /* ALT_EMAC_DMA_HW_FEATURE_RXCHCNT */
    const volatile uint32_t  TXCHCNT      :  2;  /* ALT_EMAC_DMA_HW_FEATURE_TXCHCNT */
    const volatile uint32_t  ENHDESSEL    :  1;  /* ALT_EMAC_DMA_HW_FEATURE_ENHDESSEL */
    const volatile uint32_t  INTTSEN      :  1;  /* ALT_EMAC_DMA_HW_FEATURE_INTTSEN */
    const volatile uint32_t  FLEXIPPSEN   :  1;  /* ALT_EMAC_DMA_HW_FEATURE_FLEXIPPSEN */
    const volatile uint32_t  SAVLANINS    :  1;  /* ALT_EMAC_DMA_HW_FEATURE_SAVLANINS */
    const volatile uint32_t  ACTPHYIF     :  3;  /* ALT_EMAC_DMA_HW_FEATURE_ACTPHYIF */
    const volatile uint32_t  Reserved_31  :  1;  /* ALT_EMAC_DMA_HW_FEATURE_RESERVED_31 */
};

/* The typedef declaration for register ALT_EMAC_DMA_HW_FEATURE. */
typedef struct ALT_EMAC_DMA_HW_FEATURE_s  ALT_EMAC_DMA_HW_FEATURE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_EMAC_DMA_HW_FEATURE register. */
#define ALT_EMAC_DMA_HW_FEATURE_RESET       0x0f0d69bf
/* The byte offset of the ALT_EMAC_DMA_HW_FEATURE register from the beginning of the component. */
#define ALT_EMAC_DMA_HW_FEATURE_OFST        0x58
/* The address of the ALT_EMAC_DMA_HW_FEATURE register. */
#define ALT_EMAC_DMA_HW_FEATURE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_EMAC_DMA_HW_FEATURE_OFST))

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_EMAC_DMA.
 */
struct ALT_EMAC_DMA_s
{
    volatile ALT_EMAC_DMA_BUS_MODE_t                                  Bus_Mode;                                  /* ALT_EMAC_DMA_BUS_MODE */
    volatile ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND_t                      Transmit_Poll_Demand;                      /* ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND */
    volatile ALT_EMAC_DMA_RECEIVE_POLL_DEMAND_t                       Receive_Poll_Demand;                       /* ALT_EMAC_DMA_RECEIVE_POLL_DEMAND */
    volatile ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS_t           Receive_Descriptor_List_Address;           /* ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS */
    volatile ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS_t          Transmit_Descriptor_List_Address;          /* ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS */
    volatile ALT_EMAC_DMA_STATUS_t                                    Status;                                    /* ALT_EMAC_DMA_STATUS */
    volatile ALT_EMAC_DMA_OPERATION_MODE_t                            Operation_Mode;                            /* ALT_EMAC_DMA_OPERATION_MODE */
    volatile ALT_EMAC_DMA_INTERRUPT_ENABLE_t                          Interrupt_Enable;                          /* ALT_EMAC_DMA_INTERRUPT_ENABLE */
    volatile ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER_t  Missed_Frame_And_Buffer_Overflow_Counter;  /* ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER */
    volatile ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER_t          Receive_Interrupt_Watchdog_Timer;          /* ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER */
    volatile ALT_EMAC_DMA_AXI_BUS_MODE_t                              AXI_Bus_Mode;                              /* ALT_EMAC_DMA_AXI_BUS_MODE */
    volatile ALT_EMAC_DMA_AHB_OR_AXI_STATUS_t                         AHB_or_AXI_Status;                         /* ALT_EMAC_DMA_AHB_OR_AXI_STATUS */
    volatile uint32_t                                                 _pad_0x30_0x47[6];                         /* *UNDEFINED* */
    volatile ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR_t          Current_Host_Transmit_Descriptor;          /* ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR */
    volatile ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR_t           Current_Host_Receive_Descriptor;           /* ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR */
    volatile ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS_t      Current_Host_Transmit_Buffer_Address;      /* ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS */
    volatile ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS_t       Current_Host_Receive_Buffer_Address;       /* ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS */
    volatile ALT_EMAC_DMA_HW_FEATURE_t                                HW_Feature;                                /* ALT_EMAC_DMA_HW_FEATURE */
    volatile uint32_t                                                 _pad_0x5c_0x100[41];                       /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_EMAC_DMA. */
typedef struct ALT_EMAC_DMA_s  ALT_EMAC_DMA_t;
/* The struct declaration for the raw register contents of register group ALT_EMAC_DMA. */
struct ALT_EMAC_DMA_raw_s
{
    volatile uint32_t  Bus_Mode;                                  /* ALT_EMAC_DMA_BUS_MODE */
    volatile uint32_t  Transmit_Poll_Demand;                      /* ALT_EMAC_DMA_TRANSMIT_POLL_DEMAND */
    volatile uint32_t  Receive_Poll_Demand;                       /* ALT_EMAC_DMA_RECEIVE_POLL_DEMAND */
    volatile uint32_t  Receive_Descriptor_List_Address;           /* ALT_EMAC_DMA_RECEIVE_DESCRIPTOR_LIST_ADDRESS */
    volatile uint32_t  Transmit_Descriptor_List_Address;          /* ALT_EMAC_DMA_TRANSMIT_DESCRIPTOR_LIST_ADDRESS */
    volatile uint32_t  Status;                                    /* ALT_EMAC_DMA_STATUS */
    volatile uint32_t  Operation_Mode;                            /* ALT_EMAC_DMA_OPERATION_MODE */
    volatile uint32_t  Interrupt_Enable;                          /* ALT_EMAC_DMA_INTERRUPT_ENABLE */
    volatile uint32_t  Missed_Frame_And_Buffer_Overflow_Counter;  /* ALT_EMAC_DMA_MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER */
    volatile uint32_t  Receive_Interrupt_Watchdog_Timer;          /* ALT_EMAC_DMA_RECEIVE_INTERRUPT_WATCHDOG_TIMER */
    volatile uint32_t  AXI_Bus_Mode;                              /* ALT_EMAC_DMA_AXI_BUS_MODE */
    volatile uint32_t  AHB_or_AXI_Status;                         /* ALT_EMAC_DMA_AHB_OR_AXI_STATUS */
    volatile uint32_t  _pad_0x30_0x47[6];                         /* *UNDEFINED* */
    volatile uint32_t  Current_Host_Transmit_Descriptor;          /* ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_DESCRIPTOR */
    volatile uint32_t  Current_Host_Receive_Descriptor;           /* ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_DESCRIPTOR */
    volatile uint32_t  Current_Host_Transmit_Buffer_Address;      /* ALT_EMAC_DMA_CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS */
    volatile uint32_t  Current_Host_Receive_Buffer_Address;       /* ALT_EMAC_DMA_CURRENT_HOST_RECEIVE_BUFFER_ADDRESS */
    volatile uint32_t  HW_Feature;                                /* ALT_EMAC_DMA_HW_FEATURE */
    volatile uint32_t  _pad_0x5c_0x100[41];                       /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_EMAC_DMA. */
typedef struct ALT_EMAC_DMA_raw_s  ALT_EMAC_DMA_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_EMAC_DMA_H__ */

