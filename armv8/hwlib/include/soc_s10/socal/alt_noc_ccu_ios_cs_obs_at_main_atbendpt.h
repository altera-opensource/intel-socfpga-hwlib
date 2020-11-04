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

/* Altera - ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT */

#ifndef __ALT_SOCAL_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_H__
#define __ALT_SOCAL_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_H__

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
 * Component : NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT
 * 
 */
/*
 * Register : cs_obs_at_main_AtbEndPoint_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                                                              
 * :-------|:-------|:---------|:------------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x7      | ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID  
 *  [31:8] | R      | 0x5a13a9 | ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_MSB        7
/* The width in bits of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_RESET      0x7
/* Extracts the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID field value from a register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_RESET      0x5a13a9
/* Extracts the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM field value from a register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID.
 */
struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_s
{
    const volatile uint32_t  CORETYPEID   :  8;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORETYPEID */
    const volatile uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_CORECHECKSUM */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID. */
typedef struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_s  ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_RESET       0x5a13a907
/* The byte offset of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_OFST        0x0

/*
 * Register : cs_obs_at_main_AtbEndPoint_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                               
 * :-------|:-------|:------|:-------------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID   
 *  [31:8] | R      | 0x148 | ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_MSB        7
/* The width in bits of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID field value from a register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_RESET      0x148
/* Extracts the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID field value from a register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID.
 */
struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_s
{
    const volatile uint32_t  USERID    :  8;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_USERID */
    const volatile uint32_t  FLEXNOCID : 24;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID. */
typedef struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_s  ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_RESET       0x00014800
/* The byte offset of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_OFST        0x4

/*
 * Register : cs_obs_at_main_AtbEndPoint_AtbId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                   
 * :-------|:-------|:--------|:-------------------------------------------------------------------------------
 *  [6:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID
 *  [31:7] | ???    | Unknown | *UNDEFINED*                                                                   
 * 
 */
/*
 * Field : ATBID
 * 
 * ATB AtId
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_MSB        6
/* The width in bits of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_WIDTH      7
/* The mask used to set the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_SET_MSK    0x0000007f
/* The mask used to clear the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_CLR_MSK    0xffffff80
/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID field value from a register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID_SET(value) (((value) << 0) & 0x0000007f)

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
 * The struct declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID.
 */
struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_s
{
    volatile uint32_t  ATBID :  7;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_ATBID */
    uint32_t                 : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID. */
typedef struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_s  ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_OFST        0x8

/*
 * Register : cs_obs_at_main_AtbEndPoint_AtbEn
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                   
 * :-------|:-------|:--------|:-------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                   
 * 
 */
/*
 * Field : ATBEN
 * 
 * ATB Unit Enable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_MSB        0
/* The width in bits of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN field value from a register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN.
 */
struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_s
{
    volatile uint32_t  ATBEN :  1;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_ATBEN */
    uint32_t                 : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN. */
typedef struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_s  ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_OFST        0xc

/*
 * Register : cs_obs_at_main_AtbEndPoint_SyncPeriod
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                             
 * :-------|:-------|:--------|:-----------------------------------------------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                                                             
 * 
 */
/*
 * Field : SYNCPERIOD
 * 
 * ATB Synchro Period
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_MSB        4
/* The width in bits of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_WIDTH      5
/* The mask used to set the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD register field value. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD field value from a register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD.
 */
struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_s
{
    volatile uint32_t  SYNCPERIOD :  5;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_SYNCPERIOD */
    uint32_t                      : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD. */
typedef struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_s  ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD register. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_OFST        0x10

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
 * The struct declaration for register group ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT.
 */
struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_s
{
    volatile ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID_t      cs_obs_at_main_AtbEndPoint_Id_CoreId;      /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID */
    volatile ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID_t  cs_obs_at_main_AtbEndPoint_Id_RevisionId;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID */
    volatile ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID_t          cs_obs_at_main_AtbEndPoint_AtbId;          /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID */
    volatile ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN_t          cs_obs_at_main_AtbEndPoint_AtbEn;          /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN */
    volatile ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD_t     cs_obs_at_main_AtbEndPoint_SyncPeriod;     /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD */
    volatile uint32_t                                                                            _pad_0x14_0x80[27];                        /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT. */
typedef struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_s  ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT. */
struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_raw_s
{
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_Id_CoreId;      /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_COREID */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_Id_RevisionId;  /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ID_REVISIONID */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_AtbId;          /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBID */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_AtbEn;          /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_ATBEN */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_SyncPeriod;     /* ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_CS_OBS_AT_MAIN_ATBENDPOINT_SYNCPERIOD */
    volatile uint32_t  _pad_0x14_0x80[27];                        /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT. */
typedef struct ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_raw_s  ALT_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_CCU_IOS_CS_OBS_AT_MAIN_ATBENDPT_H__ */

