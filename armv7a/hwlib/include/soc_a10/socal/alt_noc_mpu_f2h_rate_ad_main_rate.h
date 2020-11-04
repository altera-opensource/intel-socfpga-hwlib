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

/* Altera - ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE */

#ifndef __ALT_SOCAL_NOC_MPU_F2H_RATE_AD_MAIN_RATE_H__
#define __ALT_SOCAL_NOC_MPU_F2H_RATE_AD_MAIN_RATE_H__

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
 * Component : ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE
 * 
 */
/*
 * Register : fpga2soc_rate_ad_main_RateAdapter_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                                            
 * :-------|:-------|:---------|:------------------------------------------------------------------------
 *  [7:0]  | R      | 0x1      | ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID  
 *  [31:8] | R      | 0x88deaf | ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM
 * 
 */
/*
 * Field : CORETYPEID
 * 
 * Field identifying the type of IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_RESET      0x1
/* Extracts the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_RESET      0x88deaf
/* Extracts the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID.
 */
struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID. */
typedef volatile struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_s  ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_RESET       0x88deaf01
/* The byte offset of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_OFST        0x0

/*
 * Register : fpga2soc_rate_ad_main_RateAdapter_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                            
 * :-------|:-------|:--------|:------------------------------------------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID
 * 
 */
/*
 * Field : USERID
 * 
 * Field containing a user defined value, not used anywhere inside the IP itself.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID field value from a register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID.
 */
struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID. */
typedef volatile struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_s  ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_OFST        0x4

/*
 * Register : fpga2soc_rate_ad_main_RateAdapter_Rate
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                      
 * :--------|:-------|:--------|:------------------------------------------------------------------
 *  [9:0]   | RW     | 0x0     | ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE
 *  [31:10] | ???    | Unknown | *UNDEFINED*                                                      
 * 
 */
/*
 * Field : RATE
 * 
 * The ratio of outgoing to incoming throughput. This value determines what portion
 * of a received packet will be stored before its head is transmitted. An optimal
 * setting avoids transmitting bubbles, while adding no delay to packets. The ratio
 * is expressed as 256 / (ratio - 1). For example, a 3:1 ratio of outgoing to
 * incoming throughput would be indicated by value 0x06E. Note that throughput is
 * the product of clock frequency x data bus width. A value of 0x000 causes the
 * rate adapter to store a packet until either the entire packet is received or the
 * buffer becomes full.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_MSB        9
/* The width in bits of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_WIDTH      10
/* The mask used to set the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_SET_MSK    0x000003ff
/* The mask used to clear the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_CLR_MSK    0xfffffc00
/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_RESET      0x0
/* Extracts the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE field value from a register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE register field value suitable for setting the register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE_SET(value) (((value) << 0) & 0x000003ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE.
 */
struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_s
{
    uint32_t  RATE : 10;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RATE */
    uint32_t       : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE. */
typedef volatile struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_s  ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE register from the beginning of the component. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_OFST        0x8

/*
 * Register : fpga2soc_rate_ad_main_RateAdapter_Bypass
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                          
 * :-------|:-------|:--------|:----------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                          
 * 
 */
/*
 * Field : BYPASS
 * 
 * Disable the rate adaptation capability. This causes the rate adapter to act as a
 * FIFO by transmitting received words, without delay, as soon as they can be
 * transmitted. This setting is useful when the incoming throughput is equal to or
 * greater than the downstream throughput.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_MSB        0
/* The width in bits of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS register field value. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS register field. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_RESET      0x0
/* Extracts the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS field value from a register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS register field value suitable for setting the register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS.
 */
struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_s
{
    uint32_t  BYPASS :  1;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_BYPASS */
    uint32_t         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS. */
typedef volatile struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_s  ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS register. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS register from the beginning of the component. */
#define ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_OFST        0xc

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE.
 */
struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_s
{
    ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID_t  fpga2soc_rate_ad_main_RateAdapter_Id_CoreId;      /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID */
    ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID_t   fpga2soc_rate_ad_main_RateAdapter_Id_RevisionId;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID */
    ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE_t    fpga2soc_rate_ad_main_RateAdapter_Rate;           /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE */
    ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS_t  fpga2soc_rate_ad_main_RateAdapter_Bypass;         /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS */
    volatile uint32_t                                                 _pad_0x10_0x80[28];                               /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE. */
typedef volatile struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_s  ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE. */
struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_raw_s
{
    volatile uint32_t  fpga2soc_rate_ad_main_RateAdapter_Id_CoreId;      /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_COREID */
    volatile uint32_t  fpga2soc_rate_ad_main_RateAdapter_Id_RevisionId;  /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_REVID */
    volatile uint32_t  fpga2soc_rate_ad_main_RateAdapter_Rate;           /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_RATE */
    volatile uint32_t  fpga2soc_rate_ad_main_RateAdapter_Bypass;         /* ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_F2H_RATE_AD_MAIN_RATE_BYPASS */
    uint32_t           _pad_0x10_0x80[28];                               /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE. */
typedef volatile struct ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_raw_s  ALT_NOC_MPU_F2H_RATE_AD_MAIN_RATE_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_MPU_F2H_RATE_AD_MAIN_RATE_H__ */

