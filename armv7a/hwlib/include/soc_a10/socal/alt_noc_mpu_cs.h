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

/* Altera - ALT_NOC_MPU_CS_OBS_AT_ATBENDPT */

#ifndef __ALT_SOCAL_NOC_MPU_CS_H__
#define __ALT_SOCAL_NOC_MPU_CS_H__

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
 * Component : ALT_NOC_MPU_CS_OBS_AT_ATBENDPT
 * 
 */
/*
 * Register : cs_obs_at_main_AtbEndPoint_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                   
 * :-------|:-------|:---------|:-----------------------------------------------
 *  [7:0]  | R      | 0x7      | ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID  
 *  [31:8] | R      | 0xd46b87 | ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_RESET      0x7
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_RESET      0xd46b87
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_s  ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_RESET       0xd46b8707
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_OFST        0x0

/*
 * Register : cs_obs_at_main_AtbEndPoint_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_s  ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_OFST        0x4

/*
 * Register : cs_obs_at_main_AtbEndPoint_AtbId
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [6:0]  | RW     | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_MSB        6
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_WIDTH      7
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_SET_MSK    0x0000007f
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_CLR_MSK    0xffffff80
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_GET(value) (((value) & 0x0000007f) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID_SET(value) (((value) << 0) & 0x0000007f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_s
{
    uint32_t  ATBID :  7;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_ATBID */
    uint32_t        : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_s  ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_OFST        0x8

/*
 * Register : cs_obs_at_main_AtbEndPoint_AtbEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_s
{
    uint32_t  ATBEN :  1;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_ATBEN */
    uint32_t        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_s  ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_OFST        0xc

/*
 * Register : cs_obs_at_main_AtbEndPoint_SyncPeriod
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_MSB        4
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_s
{
    uint32_t  SYNCPERIOD :  5;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_SYNCPERIOD */
    uint32_t             : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_s  ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD register. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_OFST        0x10

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_CS_OBS_AT_ATBENDPT.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_s
{
    ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID_t      cs_obs_at_main_AtbEndPoint_Id_CoreId;      /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID */
    ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID_t       cs_obs_at_main_AtbEndPoint_Id_RevisionId;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID */
    ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID_t       cs_obs_at_main_AtbEndPoint_AtbId;          /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID */
    ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN_t       cs_obs_at_main_AtbEndPoint_AtbEn;          /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN */
    ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD_t  cs_obs_at_main_AtbEndPoint_SyncPeriod;     /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD */
    volatile uint32_t                            _pad_0x14_0x80[27];                        /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_CS_OBS_AT_ATBENDPT. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_s  ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_CS_OBS_AT_ATBENDPT. */
struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_raw_s
{
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_Id_CoreId;      /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_COREID */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_Id_RevisionId;  /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_REVID */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_AtbId;          /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBID */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_AtbEn;          /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_ATBEN */
    volatile uint32_t  cs_obs_at_main_AtbEndPoint_SyncPeriod;     /* ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_SYNCPERIOD */
    uint32_t           _pad_0x14_0x80[27];                        /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_CS_OBS_AT_ATBENDPT. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_raw_s  ALT_NOC_MPU_CS_OBS_AT_ATBENDPT_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0
 * 
 */
/*
 * Register : cs_obs_at_main_ErrorLogger_0_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                   
 * :-------|:-------|:---------|:-----------------------------------------------
 *  [7:0]  | R      | 0xd      | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID  
 *  [31:8] | R      | 0x91311e | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_RESET      0xd
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_RESET      0x91311e
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_RESET       0x91311e0d
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_OFST        0x0

/*
 * Register : cs_obs_at_main_ErrorLogger_0_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_OFST        0x4

/*
 * Register : cs_obs_at_main_ErrorLogger_0_FaultEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                   
 * 
 */
/*
 * Field : FAULTEN
 * 
 * Set to 1 to enable output signal Fault. Fault asserted when ErrVld is 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_s
{
    uint32_t  FAULTEN :  1;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_FAULTEN */
    uint32_t          : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_OFST        0x8

/*
 * Register : cs_obs_at_main_ErrorLogger_0_ErrVld
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                 
 * :-------|:-------|:--------|:---------------------------------------------
 *  [0]    | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : ERRVLD
 * 
 * 1 indicates an error has been logged
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_MSB        0
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_s
{
    const uint32_t  ERRVLD :  1;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_ERRVLD */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_OFST        0xc

/*
 * Register : cs_obs_at_main_ErrorLogger_0_ErrClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                 
 * :-------|:-------|:--------|:---------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : ERRCLR
 * 
 * Set to 1 to clear ErrVld. NOTE The written value is not stored in ErrVld. A read
 * always returns 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_MSB        0
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_s
{
    uint32_t  ERRCLR :  1;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_ERRCLR */
    uint32_t         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_OFST        0x10

/*
 * Register : cs_obs_at_main_ErrorLogger_0_ErrLog0
 * 
 * Stores NTTP packet header fields Lock, Opc, ErrCode, Len1 and indicates version
 * of NTTP transport protocol
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                   
 * :--------|:-------|:--------|:-----------------------------------------------
 *  [0]     | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK   
 *  [4:1]   | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC    
 *  [7:5]   | ???    | Unknown | *UNDEFINED*                                   
 *  [10:8]  | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE
 *  [15:11] | ???    | Unknown | *UNDEFINED*                                   
 *  [23:16] | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1   
 *  [30:24] | ???    | Unknown | *UNDEFINED*                                   
 *  [31]    | R      | 0x1     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT 
 * 
 */
/*
 * Field : LOCK
 * 
 * Lock
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_MSB        0
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : OPC
 * 
 * Opc
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_MSB        4
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_SET_MSK    0x0000001e
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_CLR_MSK    0xffffffe1
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_GET(value) (((value) & 0x0000001e) >> 1)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC_SET(value) (((value) << 1) & 0x0000001e)

/*
 * Field : ERRCODE
 * 
 * ErrCode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_MSB        10
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_SET_MSK    0x00000700
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_CLR_MSK    0xfffff8ff
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_GET(value) (((value) & 0x00000700) >> 8)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE_SET(value) (((value) << 8) & 0x00000700)

/*
 * Field : LEN1
 * 
 * Len1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_MSB        23
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_CLR_MSK    0xff00ffff
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : FORMAT
 * 
 * NTTP transport protocol version
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_MSB        31
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_SET_MSK    0x80000000
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_CLR_MSK    0x7fffffff
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_RESET      0x1
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_s
{
    const uint32_t  LOCK    :  1;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LOCK */
    const uint32_t  OPC     :  4;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OPC */
    uint32_t                :  3;  /* *UNDEFINED* */
    const uint32_t  ERRCODE :  3;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_ERRCODE */
    uint32_t                :  5;  /* *UNDEFINED* */
    const uint32_t  LEN1    :  8;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_LEN1 */
    uint32_t                :  7;  /* *UNDEFINED* */
    const uint32_t  FORMAT  :  1;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_FORMAT */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0 register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_RESET       0x80000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0 register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_OFST        0x14

/*
 * Register : cs_obs_at_main_ErrorLogger_0_ErrLog1
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                   
 * :--------|:-------|:--------|:-----------------------------------------------
 *  [18:0]  | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                   
 * 
 */
/*
 * Field : ERRLOG1
 * 
 * Stores NTTP packet header field RouteId (LSBs) of the logged error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_MSB        18
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_s
{
    const uint32_t  ERRLOG1 : 19;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_ERRLOG1 */
    uint32_t                : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1 register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1 register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_OFST        0x18

/*
 * Register : cs_obs_at_main_ErrorLogger_0_ErrLog3
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                   
 * :-------|:-------|:------|:-----------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3
 * 
 */
/*
 * Field : ERRLOG3
 * 
 * Stores NTTP packet header field Addr (LSBs) of the logged error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_MSB        31
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_s
{
    const uint32_t  ERRLOG3 : 32;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_ERRLOG3 */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3 register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3 register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_OFST        0x20

/*
 * Register : cs_obs_at_main_ErrorLogger_0_ErrLog5
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                   
 * :--------|:-------|:--------|:-----------------------------------------------
 *  [10:0]  | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5
 *  [31:11] | ???    | Unknown | *UNDEFINED*                                   
 * 
 */
/*
 * Field : ERRLOG5
 * 
 * Stores NTTP packet header field User (LSBs) of the logged error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_MSB        10
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_WIDTH      11
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_SET_MSK    0x000007ff
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_CLR_MSK    0xfffff800
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_s
{
    const uint32_t  ERRLOG5 : 11;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_ERRLOG5 */
    uint32_t                : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5 register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5 register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_OFST        0x28

/*
 * Register : cs_obs_at_main_ErrorLogger_0_ErrLog7
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [2:0]  | R      | 0x0     | ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                   
 * 
 */
/*
 * Field : ERRLOG7
 * 
 * Stores NTTP packet header field Security of the logged error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_MSB        2
/* The width in bits of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 register field value. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 register field. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_RESET      0x0
/* Extracts the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 field value from a register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 register field value suitable for setting the register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_s
{
    const uint32_t  ERRLOG7 :  3;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_ERRLOG7 */
    uint32_t                : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7 register. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7 register from the beginning of the component. */
#define ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_OFST        0x30

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0.
 */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_s
{
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID_t   cs_obs_at_main_ErrorLogger_0_Id_CoreId;      /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID_t    cs_obs_at_main_ErrorLogger_0_Id_RevisionId;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN_t  cs_obs_at_main_ErrorLogger_0_FaultEn;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD_t   cs_obs_at_main_ErrorLogger_0_ErrVld;         /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR_t   cs_obs_at_main_ErrorLogger_0_ErrClr;         /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0_t  cs_obs_at_main_ErrorLogger_0_ErrLog0;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0 */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1_t  cs_obs_at_main_ErrorLogger_0_ErrLog1;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1 */
    volatile uint32_t                         _pad_0x1c_0x1f;                              /* *UNDEFINED* */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3_t  cs_obs_at_main_ErrorLogger_0_ErrLog3;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3 */
    volatile uint32_t                         _pad_0x24_0x27;                              /* *UNDEFINED* */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5_t  cs_obs_at_main_ErrorLogger_0_ErrLog5;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5 */
    volatile uint32_t                         _pad_0x2c_0x2f;                              /* *UNDEFINED* */
    ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7_t  cs_obs_at_main_ErrorLogger_0_ErrLog7;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7 */
    volatile uint32_t                         _pad_0x34_0x80[19];                          /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0. */
struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_raw_s
{
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_Id_CoreId;      /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_COREID */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_Id_RevisionId;  /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_REVID */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_FaultEn;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_FAULTEN */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_ErrVld;         /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRVLD */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_ErrClr;         /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRCLR */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_ErrLog0;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG0 */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_ErrLog1;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG1 */
    uint32_t           _pad_0x1c_0x1f;                              /* *UNDEFINED* */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_ErrLog3;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG3 */
    uint32_t           _pad_0x24_0x27;                              /* *UNDEFINED* */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_ErrLog5;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG5 */
    uint32_t           _pad_0x2c_0x2f;                              /* *UNDEFINED* */
    volatile uint32_t  cs_obs_at_main_ErrorLogger_0_ErrLog7;        /* ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_ERRLOG7 */
    uint32_t           _pad_0x34_0x80[19];                          /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0. */
typedef volatile struct ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_raw_s  ALT_NOC_MPU_CS_OBS_AT_ERRLOG_0_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_MPU_CS_H__ */

