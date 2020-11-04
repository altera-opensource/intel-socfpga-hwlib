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

/* Altera - ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB */

#ifndef __ALT_SOCAL_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_H__
#define __ALT_SOCAL_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_H__

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
 * Component : NOC_CCU_IOS_PRB_IOM_MAIN_PRB
 * 
 */
/*
 * Register : Probe_IOM_main_Probe_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                                                 
 * :-------|:-------|:---------|:-----------------------------------------------------------------------------
 *  [7:0]  | R      | 0x6      | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID  
 *  [31:8] | R      | 0x983464 | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_MSB        7
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_RESET      0x6
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_RESET      0x983464
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_s
{
    const volatile uint32_t  CORETYPEID   :  8;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORETYPEID */
    const volatile uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_CORECHECKSUM */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_RESET       0x98346406
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_OFST        0x0

/*
 * Register : Probe_IOM_main_Probe_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                  
 * :-------|:-------|:------|:------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID   
 *  [31:8] | R      | 0x148 | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_MSB        7
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_RESET      0x148
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_s
{
    const volatile uint32_t  USERID    :  8;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_USERID */
    const volatile uint32_t  FLEXNOCID : 24;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_RESET       0x00014800
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_OFST        0x4

/*
 * Register : Probe_IOM_main_Probe_MainCtl
 * 
 * Register MainCtl contains probe global control bits. The register has seven bit
 * fields:
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                            
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN                    
 *  [1]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN                  
 *  [2]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN                
 *  [3]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN                   
 *  [4]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN                  
 *  [5]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP             
 *  [6]    | R      | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE            
 *  [7]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN
 *  [31:8] | ???    | Unknown | *UNDEFINED*                                                                            
 * 
 */
/*
 * Field : ERREN
 * 
 * Register field ErrEn enables the probe to send on the ObsTx output any packet
 * with Error status, independently of filtering mechanisms, thus constituting a
 * simple supplementary global filter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_MSB        0
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TRACEEN
 * 
 * Register field TraceEn enables the probe to send filtered packets (Trace) on the
 * ObsTx observation output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : PAYLOADEN
 * 
 * Register field PayloadEn, when set to 1, enables traces to contain headers and
 * payload. When set ot 0, only headers are reported.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_MSB        2
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : STATEN
 * 
 * When set to 1, register field StatEn enables statistics profiling. The probe
 * sendS statistics results to the output for signal ObsTx. All statistics counters
 * are cleared when the StatEn bit goes from 0 to 1. When set to 0, counters are
 * disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_MSB        3
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : ALARMEN
 * 
 * When set, register field AlarmEn enables the probe to collect alarm-related
 * information. When the register field bit is null, both TraceAlarm and StatAlarm
 * outputs are driven to 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_MSB        4
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : STATCONDDUMP
 * 
 * When set, register field StatCondDump enables the dump of a statistics frame to
 * the range of counter values set for registers StatAlarmMin, StatAlarmMax, and
 * AlarmMode. This field also renders register StatAlarmStatus inoperative. When
 * parameter statisticsCounterAlarm is set to False, the StatCondDump register bit
 * is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_MSB        5
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : INTRUSIVEMODE
 * 
 * When set to 1, register field IntrusiveMode enables trace operation in Intrusive
 * flow-control mode. When set to 0, the register  enables trace operation in
 * Overflow flow-control mode
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_MSB        6
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : FILTBYTEALWAYSCHAINABLEEN
 * 
 * When set to 0, filters are mapped to all statistic counters when counting bytes
 * or enabled bytes. Therefore, only filter events mapped to even counters can be
 * counted using a pair of chained counters.When set to 1, filters are mapped only
 * to even statistic counters when counting bytes or enabled bytes. Thus events
 * from any filter can be counted using a pair of chained counters.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_MSB        7
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_s
{
    volatile uint32_t        ERREN                     :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ERREN */
    volatile uint32_t        TRACEEN                   :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_TRACEEN */
    volatile uint32_t        PAYLOADEN                 :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_PAYLOADEN */
    volatile uint32_t        STATEN                    :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATEN */
    volatile uint32_t        ALARMEN                   :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_ALARMEN */
    volatile uint32_t        STATCONDDUMP              :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_STATCONDDUMP */
    const volatile uint32_t  INTRUSIVEMODE             :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_INTRUSIVEMODE */
    volatile uint32_t        FILTBYTEALWAYSCHAINABLEEN :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_FILTBYTEALWAYSCHAINABLEEN */
    uint32_t                                           : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_OFST        0x8

/*
 * Register : Probe_IOM_main_Probe_CfgCtl
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                          
 * :-------|:-------|:--------|:----------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN
 *  [1]    | R      | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE  
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                          
 * 
 */
/*
 * Field : GLOBALEN
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_MSB        0
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ACTIVE
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_s
{
    volatile uint32_t        GLOBALEN :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_GLOBALEN */
    const volatile uint32_t  ACTIVE   :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_ACTIVE */
    uint32_t                          : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_OFST        0xc

/*
 * Register : Probe_IOM_main_Probe_FilterLut
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                              
 * :-------|:-------|:--------|:--------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                              
 * 
 */
/*
 * Field : FILTERLUT
 * 
 * Register FilterLut contains a look-up table that is used to combine filter
 * outputs in order to trace packets. Packet tracing is enabled when the FilterLut
 * bit of index (FNout ... F0out) is equal to 1.The number of bits in register
 * FilterLut is determined by the setting for parameter nFilter, calculated as
 * 2**nFilter.When parameter nFilter is set to None, FilterLut is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_s
{
    volatile uint32_t  FILTERLUT :  2;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_FILTERLUT */
    uint32_t                     : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_OFST        0x14

/*
 * Register : Probe_IOM_main_Probe_TraceAlarmEn
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                    
 * :-------|:-------|:--------|:--------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                    
 * 
 */
/*
 * Field : TRACEALARMEN
 * 
 * Register TraceAlarmEn controls which lookup table or filter can set the
 * TraceAlarm signal output once the trace alarm status is set. The number of bits
 * in register TraceAlarmEn is determined by the value set for parameter nFilter +
 * 1.Bit nFilter controls the lookup table output, and bits nFilter:0 control the
 * corresponding filter output. When parameter nFilter is set to None, TraceAlarmEn
 * is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_s
{
    volatile uint32_t  TRACEALARMEN :  2;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_TRACEALARMEN */
    uint32_t                        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_OFST        0x18

/*
 * Register : Probe_IOM_main_Probe_TraceAlarmStatus
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                            
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------
 *  [1:0]  | R      | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                            
 * 
 */
/*
 * Field : TRACEALARMSTATUS
 * 
 * Register TraceAlarmStatus is a read-only register that indicates which lookup
 * table or filter has been matched by a packet, independently of register
 * TraceAlarmEn bit configuration. The number of bits in TraceAlarmStatus is
 * determined by the value set for parameter nFilter + 1.When nFilter is set to
 * None, TraceAlarmStatus is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_s
{
    const volatile uint32_t  TRACEALARMSTATUS :  2;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_TRACEALARMSTATUS */
    uint32_t                                  : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_OFST        0x1c

/*
 * Register : Probe_IOM_main_Probe_TraceAlarmClr
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                      
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                      
 * 
 */
/*
 * Field : TRACEALARMCLR
 * 
 * Setting a bit to 1 in register TraceAlarmClr clears the corresponding bit in
 * register TraceAlarmStatus.The number of bits in register TraceAlarmClr is equal
 * to (nFilter + 1). When nFilter is set to 0, TraceAlarmClr is reserved.NOTE  The
 * written value is not stored in TraceAlarmClr. A read always returns 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_s
{
    volatile uint32_t  TRACEALARMCLR :  2;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_TRACEALARMCLR */
    uint32_t                         : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_OFST        0x20

/*
 * Register : Probe_IOM_main_Probe_StatGo
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                        
 * :-------|:-------|:--------|:--------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                        
 * 
 */
/*
 * Field : STATGO
 * 
 * Writing a 1 to the 1-bit pulse register StatGo generates a statistics dump.The
 * register is active when statistics collection operates in manual mode, that is,
 * when register StatPeriod is set to 0.NOTE  The written value is not stored in
 * StatGo. A read always returns 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_MSB        0
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_s
{
    volatile uint32_t  STATGO :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_STATGO */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_OFST        0x28

/*
 * Register : Probe_IOM_main_Probe_Filters_0_RouteIdBase
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                                      
 * :--------|:-------|:--------|:--------------------------------------------------------------------------------------------------
 *  [22:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE
 *  [31:23] | ???    | Unknown | *UNDEFINED*                                                                                      
 * 
 */
/*
 * Field : FILTERS_0_ROUTEIDBASE
 * 
 * Register RouteIdBase contains the RouteId-lsbFilterRouteId bits base used to
 * filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_MSB        22
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_WIDTH      23
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_SET_MSK    0x007fffff
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_CLR_MSK    0xff800000
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_GET(value) (((value) & 0x007fffff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE_SET(value) (((value) << 0) & 0x007fffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_s
{
    volatile uint32_t  FILTERS_0_ROUTEIDBASE : 23;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_FILTERS_0_ROUTEIDBASE */
    uint32_t                                 :  9;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_OFST        0x44

/*
 * Register : Probe_IOM_main_Probe_Filters_0_RouteIdMask
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                                      
 * :--------|:-------|:--------|:--------------------------------------------------------------------------------------------------
 *  [22:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK
 *  [31:23] | ???    | Unknown | *UNDEFINED*                                                                                      
 * 
 */
/*
 * Field : FILTERS_0_ROUTEIDMASK
 * 
 * Register RouteIdMask contains the RouteId-lsbFilterRouteId mask used to filter
 * packets. A packet is a candidate when packet.RouteId>>lsbFilterRouteId &
 * RouteIdMask = RouteIdBase & RouteIdMask.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_MSB        22
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_WIDTH      23
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_SET_MSK    0x007fffff
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_CLR_MSK    0xff800000
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_GET(value) (((value) & 0x007fffff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK_SET(value) (((value) << 0) & 0x007fffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_s
{
    volatile uint32_t  FILTERS_0_ROUTEIDMASK : 23;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_FILTERS_0_ROUTEIDMASK */
    uint32_t                                 :  9;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_OFST        0x48

/*
 * Register : Probe_IOM_main_Probe_Filters_0_AddrBase_Low
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                                        
 * :-------|:-------|:------|:----------------------------------------------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW
 * 
 */
/*
 * Field : FILTERS_0_ADDRBASE_LOW
 * 
 * Address LSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_s
{
    volatile uint32_t  FILTERS_0_ADDRBASE_LOW : 32;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_FILTERS_0_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_OFST        0x4c

/*
 * Register : Probe_IOM_main_Probe_Filters_0_AddrBase_High
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                          
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                                                                          
 * 
 */
/*
 * Field : FILTERS_0_ADDRBASE_HIGH
 * 
 * Address MSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_MSB        4
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_WIDTH      5
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_s
{
    volatile uint32_t  FILTERS_0_ADDRBASE_HIGH :  5;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_FILTERS_0_ADDRBASE_HIGH */
    uint32_t                                   : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_OFST        0x50

/*
 * Register : Probe_IOM_main_Probe_Filters_0_WindowSize
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                    
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                                                    
 * 
 */
/*
 * Field : FILTERS_0_WINDOWSIZE
 * 
 * Register WindowSize contains the encoded address mask used to filter packets.
 * The effective Mask value is equal to ~(2max(WindowSize, packet.Len) - 1). A
 * packet is a candidate when packet.Addr & Mask = AddrBase & Mask. This allows
 * filteringof packets having an intersection with the AddrBase/WindowSize burst
 * aligned region, even if the region is smaller than the packet.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_s
{
    volatile uint32_t  FILTERS_0_WINDOWSIZE :  6;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_FILTERS_0_WINDOWSIZE */
    uint32_t                                : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_OFST        0x54

/*
 * Register : Probe_IOM_main_Probe_Filters_0_SecurityBase
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                        
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                                        
 * 
 */
/*
 * Field : FILTERS_0_SECURITYBASE
 * 
 * Register SecurityBase contains the security base used to filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_s
{
    volatile uint32_t  FILTERS_0_SECURITYBASE :  2;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_FILTERS_0_SECURITYBASE */
    uint32_t                                  : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_OFST        0x58

/*
 * Register : Probe_IOM_main_Probe_Filters_0_SecurityMask
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                        
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                                        
 * 
 */
/*
 * Field : FILTERS_0_SECURITYMASK
 * 
 * Register SecurityMask is contains the security mask used to filter packets. A
 * packet is a candidate when: packet.Security & SecurityMask = SecurityBase &
 * SecurityMasks.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_s
{
    volatile uint32_t  FILTERS_0_SECURITYMASK :  2;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_FILTERS_0_SECURITYMASK */
    uint32_t                                  : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_OFST        0x5c

/*
 * Register : Probe_IOM_main_Probe_Filters_0_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                  
 * :-------|:-------|:--------|:------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN 
 *  [31:4] | ???    | Unknown | *UNDEFINED*                                                                  
 * 
 */
/*
 * Field : RDEN
 * 
 * Selects RD packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_s
{
    volatile uint32_t  RDEN   :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RDEN */
    volatile uint32_t  WREN   :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_WREN */
    volatile uint32_t  LOCKEN :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_LOCKEN */
    volatile uint32_t  URGEN  :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_URGEN */
    uint32_t                  : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_OFST        0x60

/*
 * Register : Probe_IOM_main_Probe_Filters_0_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                 
 * :-------|:-------|:--------|:-----------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                 
 * 
 */
/*
 * Field : REQEN
 * 
 * Selects REQ status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_MSB        0
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_s
{
    volatile uint32_t  REQEN :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_REQEN */
    volatile uint32_t  RSPEN :  1;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RSPEN */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_OFST        0x64

/*
 * Register : Probe_IOM_main_Probe_Filters_0_Length
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                            
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH
 *  [31:4] | ???    | Unknown | *UNDEFINED*                                                                            
 * 
 */
/*
 * Field : FILTERS_0_LENGTH
 * 
 * Register Length is 4-bit register that selects candidate packets if their number
 * of bytes is less than or equal to 2**Length.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_MSB        3
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_WIDTH      4
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_s
{
    volatile uint32_t  FILTERS_0_LENGTH :  4;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_FILTERS_0_LENGTH */
    uint32_t                            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_OFST        0x68

/*
 * Register : Probe_IOM_main_Probe_Filters_0_Urgency
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                              
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                              
 * 
 */
/*
 * Field : FILTERS_0_URGENCY
 * 
 * Register Urgency contains the minimum urgency level used to filter packets. A
 * packet is a candidate when its socket urgency is greater than or equal to the
 * urgency specified in the register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY register field value. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY register field. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY field value from a register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_s
{
    volatile uint32_t  FILTERS_0_URGENCY :  2;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_FILTERS_0_URGENCY */
    uint32_t                             : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY register. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_OFST        0x6c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB.
 */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_s
{
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID_t                Probe_IOM_main_Probe_Id_CoreId;                /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID_t            Probe_IOM_main_Probe_Id_RevisionId;            /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL_t                  Probe_IOM_main_Probe_MainCtl;                  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL_t                   Probe_IOM_main_Probe_CfgCtl;                   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL */
    volatile uint32_t                                                                         _pad_0x10_0x13;                                /* *UNDEFINED* */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT_t                Probe_IOM_main_Probe_FilterLut;                /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN_t             Probe_IOM_main_Probe_TraceAlarmEn;             /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS_t         Probe_IOM_main_Probe_TraceAlarmStatus;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR_t            Probe_IOM_main_Probe_TraceAlarmClr;            /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR */
    volatile uint32_t                                                                         _pad_0x24_0x27;                                /* *UNDEFINED* */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO_t                   Probe_IOM_main_Probe_StatGo;                   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO */
    volatile uint32_t                                                                         _pad_0x2c_0x43[6];                             /* *UNDEFINED* */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE_t    Probe_IOM_main_Probe_Filters_0_RouteIdBase;    /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK_t    Probe_IOM_main_Probe_Filters_0_RouteIdMask;    /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW_t   Probe_IOM_main_Probe_Filters_0_AddrBase_Low;   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH_t  Probe_IOM_main_Probe_Filters_0_AddrBase_High;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE_t     Probe_IOM_main_Probe_Filters_0_WindowSize;     /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE_t   Probe_IOM_main_Probe_Filters_0_SecurityBase;   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK_t   Probe_IOM_main_Probe_Filters_0_SecurityMask;   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE_t         Probe_IOM_main_Probe_Filters_0_Opcode;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS_t         Probe_IOM_main_Probe_Filters_0_Status;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH_t         Probe_IOM_main_Probe_Filters_0_Length;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH */
    volatile ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY_t        Probe_IOM_main_Probe_Filters_0_Urgency;        /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY */
    volatile uint32_t                                                                         _pad_0x70_0x400[228];                          /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB. */
struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_raw_s
{
    volatile uint32_t  Probe_IOM_main_Probe_Id_CoreId;                /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_COREID */
    volatile uint32_t  Probe_IOM_main_Probe_Id_RevisionId;            /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_ID_REVISIONID */
    volatile uint32_t  Probe_IOM_main_Probe_MainCtl;                  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_MAINCTL */
    volatile uint32_t  Probe_IOM_main_Probe_CfgCtl;                   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_CFGCTL */
    volatile uint32_t  _pad_0x10_0x13;                                /* *UNDEFINED* */
    volatile uint32_t  Probe_IOM_main_Probe_FilterLut;                /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERLUT */
    volatile uint32_t  Probe_IOM_main_Probe_TraceAlarmEn;             /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMEN */
    volatile uint32_t  Probe_IOM_main_Probe_TraceAlarmStatus;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMSTATUS */
    volatile uint32_t  Probe_IOM_main_Probe_TraceAlarmClr;            /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_TRACEALARMCLR */
    volatile uint32_t  _pad_0x24_0x27;                                /* *UNDEFINED* */
    volatile uint32_t  Probe_IOM_main_Probe_StatGo;                   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_STATGO */
    volatile uint32_t  _pad_0x2c_0x43[6];                             /* *UNDEFINED* */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_RouteIdBase;    /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDBASE */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_RouteIdMask;    /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ROUTEIDMASK */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_AddrBase_Low;   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_LOW */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_AddrBase_High;  /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_ADDRBASE_HIGH */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_WindowSize;     /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_WINDOWSIZE */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_SecurityBase;   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYBASE */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_SecurityMask;   /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_SECURITYMASK */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_Opcode;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_OPCODE */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_Status;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_STATUS */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_Length;         /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_LENGTH */
    volatile uint32_t  Probe_IOM_main_Probe_Filters_0_Urgency;        /* ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_PROBE_IOM_MAIN_PROBE_FILTERS_0_URGENCY */
    volatile uint32_t  _pad_0x70_0x400[228];                          /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB. */
typedef struct ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_raw_s  ALT_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_CCU_IOS_PRB_IOM_MAIN_PRB_H__ */

